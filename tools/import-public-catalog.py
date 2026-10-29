import concurrent.futures
import html
import json
import pathlib
import re
import time
import urllib.parse
import urllib.request
import uuid

ROOT = pathlib.Path(__file__).resolve().parents[1]
OUTPUT = ROOT / "WallperRebuilt/Sources/WallperRebuilt/Resources/public-gallery.json"
HEADERS = {"User-Agent": "VoltrumMotion/0.2 (public-media-catalog; motion.voltrum.co)"}
TERMS = ["aurora", "earth", "moon", "sun", "nebula", "jupiter", "saturn", "timelapse", "ocean", "forest", "flyover", "galaxy", "4K", "animation", "visualization", "time lapse", "fly-through"]
EXCLUDE = re.compile(r"interview|briefing|podcast|science live|press conference|education|stemonstration|assembly|stacking|rollout|transport|lift and mate|behind the scenes|webcast|news |this week|trailer|talk show|Artemis|Orion|Apollo|Launch|Stack|Core Stage|SLS|KSC|VAB|Training|Processing|Lift|Rollback|Arrival|Offload|Countdown|Down to Earth|Espacio|Space to Ground|Expert|AskNASA|Career|Dante|Brigette|Anthony|astronaut|crew|mission|prepar|NASA Tests|NASA Measures|NASA Evaluates|Introducing|Overview|Report|Episode|Humanity|Our Planet, Our Home|Sunshield|Demolition|Headquarter|Mural|RASSOR|Atlas V|ICPS|LVSA|High Bay|Rollover|Roll to|Boeing|Fairing|How Do |How Did |Will the |Why |Envisioning|Send Your Name|Galileo|ScienceCasts|Clipper|jsc202|Engineering|Rover|Moon Base|Lunar Vacuum|Teachers|Thank You|Surprisingly|Annapolis|MSolo|Promo|Air Prize|New Spacesuit|Powering Our|Let's Go", re.I)
RESTRICTED = re.compile(r"©|copyright|Getty|Shutterstock|SpaceX|European Space Agency|\bESA\b|Roscosmos|JAXA|music by|music courtesy|music provided", re.I)


def fetch(url, method="GET"):
    request = urllib.request.Request(urllib.parse.quote(url, safe=":/?=&%~"), headers=HEADERS, method=method)
    for attempt in range(3):
        try:
            return urllib.request.urlopen(request, timeout=25)
        except Exception:
            if attempt == 2:
                raise
            time.sleep(attempt + 1)


def category(title):
    text = title.lower()
    if any(term in text for term in ["aurora", "earth", "orbit", "ocean"]):
        return "Earth"
    if any(term in text for term in ["moon", "lunar"]):
        return "Moon"
    if any(term in text for term in ["sun", "solar"]):
        return "Sun"
    if any(term in text for term in ["jupiter", "saturn", "mars", "planet"]):
        return "Planets"
    if any(term in text for term in ["forest", "yellowstone", "cloud", "river"]):
        return "Nature"
    return "Space"


def convert(item):
    try:
        data = item["data"][0]
        identifier = data["nasa_id"]
        title = html.unescape(data["title"]).strip()
        description = html.unescape(data.get("description", ""))
        if EXCLUDE.search(title) or RESTRICTED.search(description):
            return None
        with fetch(item["href"].replace("http://", "https://")) as response:
            assets = json.load(response)
        videos = [asset.replace("http://", "https://") for asset in assets if asset.lower().endswith("~medium.mp4")]
        if not videos:
            return None
        video = videos[0]
        with fetch(video, "HEAD") as response:
            size = int(response.headers.get("Content-Length", 0))
            if response.status != 200 or size <= 0 or size > 500_000_000:
                return None
        previews = [asset.replace("http://", "https://") for asset in assets if asset.lower().endswith("~large.jpg")]
        if not previews:
            return None
        return {
            "id": str(uuid.uuid5(uuid.NAMESPACE_URL, "https://images.nasa.gov/details/" + identifier)),
            "title": title,
            "category": category(title),
            "source": "gallery",
            "remoteURL": urllib.parse.quote(video, safe=":/%~"),
            "previewURL": urllib.parse.quote(previews[0], safe=":/%~"),
            "sourceURL": "https://images.nasa.gov/details/" + urllib.parse.quote(identifier, safe=""),
            "license": "NASA media-use guidelines",
            "licenseURL": "https://www.nasa.gov/nasa-brand-center/images-and-media/",
            "creator": "NASA / " + data.get("center", "NASA"),
            "sizeMB": round(size / 1_048_576, 2),
            "tags": list(dict.fromkeys(["NASA", "Space", "Video"] + data.get("keywords", [])[:8])),
            "publishedAt": data.get("date_created", ""),
        }
    except Exception as error:
        print(f"Skipped {item.get('href', '')}: {error}")
        return None


def main():
    candidates = {}
    for term in TERMS:
        query = urllib.parse.urlencode({"title": term, "media_type": "video", "page_size": 100})
        with fetch("https://images-api.nasa.gov/search?" + query) as response:
            results = json.load(response)["collection"]["items"]
        for item in results:
            data = item["data"][0]
            if not EXCLUDE.search(data.get("title", "")):
                candidates[data["nasa_id"]] = item
    print(f"Inspecting {len(candidates)} candidate NASA videos")
    with concurrent.futures.ThreadPoolExecutor(max_workers=6) as executor:
        records = [record for record in executor.map(convert, candidates.values()) if record]
    records.sort(key=lambda record: (record["category"], record["title"].lower()))
    OUTPUT.write_text(json.dumps(records, indent=2, ensure_ascii=False) + "\n")
    print(f"Wrote {len(records)} source-credited NASA videos to {OUTPUT}")


if __name__ == "__main__":
    main()
