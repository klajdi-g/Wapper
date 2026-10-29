import json
from pathlib import Path

root = Path(__file__).resolve().parent / "wallper-analysis"
evidence = root / "evidence"
native = json.loads((evidence / "rea-native-dispatch-20000.json").read_text())
implementations = native["normalized_result"]["result"]["objc_dispatch_implementations"]
methods = [{"class": method["class_name"], "selector": method["selector"],
            "address": method["implementation_address"]}
           for method in implementations if method["implementation_address"]]

(evidence / "objc-methods.json").write_text(json.dumps(methods, indent=2) + "\n")
selected = [method for method in methods if any(name in method["class"] for name in
            ("VideoWallpaperManager", "PowerMonitor", "WallpaperPlayback"))]
print(json.dumps(selected, indent=2))
