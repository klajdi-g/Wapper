# Public media license audit — October 29, 2026

## Remediation update

The findings below describe the initial 179-entry catalog. All 20 candidates with
music, third-party/rights, or JPL-review flags have since been withheld from both
the website and the 0.2.1 native package, leaving 159 entries. The 0.2.0 public
installer was withdrawn. The generator now screens official per-item metadata,
not just search descriptions. See `../docs/media-screening.json` for the exact
exclusions. This containment is not independent legal clearance of the remainder;
the historical audit and its manual-review limitations remain applicable.

## Conclusion

**The existing catalog must not be represented as rights-cleared.** The NASA-only source filter and generic `NASA media-use guidelines` label are not a sufficient record of permission for each video, its soundtrack, its preview image, or its third-party components. This is a metadata and policy audit, not legal advice or an infringement determination.

The recommended containment is to pause the public collection and native catalog distribution, then republish an explicitly reviewed allowlist. At an absolute minimum, quarantine the five specific entries below until written permission, an applicable license, or a separately cleared replacement is documented. Removing those five alone does not clear the remainder. This audit does **not** modify production, delete media, or change the native catalog.

## Scope and evidence

- Public catalog: `https://motion.voltrum.co/catalog.json`.
- All 179 public records matched the local catalog byte-for-byte at audit time.
- Catalog SHA-256: `08a6909f9dd97fd73dd6a29ff562f88c011b067ddee14b7cd2a2407668e0f390`.
- Checked at `2026-10-29T18:56:00.207Z`.
- All 179 entries were matched to exact NASA Image and Video Library API records; each original `metadata.json` was also fetched. No video bodies were downloaded.
- The native `public-gallery.json` also contains 179 entries and includes the internally restricted candidate identified below. Website containment alone would not correct the native catalog.
- Machine-readable evidence, including original descriptions, rights fields, source credits, and metadata URLs: `build/media-license-audit.json` in the repository. This generated evidence file is not published by the website packager.
- Reproducible audit command: `node tools/audit-public-media.mjs`. It refuses to proceed if local and live catalogs differ.

The public catalog points at remotely hosted NASA preview/video URLs; that is not an upload of the video files themselves. Remote hosting does not establish redistribution, embedding, commercial-use, publicity, music, or stock-footage rights.

## Specific stop-publication candidates

### Observe the Moon

- Catalog ID: `d25c1cc5-252d-50b0-a404-f73758945571`.
- NASA ID: `ObserveTheMoon_16x9`.
- Source: `https://images.nasa.gov/details/ObserveTheMoon_16x9`.
- The official description identifies the song *A Million Dreams*, performances by P!NK and the Ndlovu Youth Choir, music used under permission, RCA/Sony and publishing credits, and separately sourced Pond5 stock footage. The present catalog reduces this to a generic NASA credit and policy label.
- The repository contains no evidence that the necessary music, recording, footage, performer, or other third-party permissions extend to this app/site and its downloadable video.
- Action: quarantine pending an applicable documented grant for all relevant components, or substitute an independently cleared work. Muting the browser/player is not a license and does not remove the soundtrack from a downloaded file.

### The Moon and More

- Catalog ID: `60029428-beab-5652-a792-60fe772a3ad8`.
- NASA ID: `GSFC_20161003_MusicVideo_m12366`.
- Source: `https://images.nasa.gov/details/GSFC_20161003_MusicVideo_m12366`.
- The official description credits the composition/production/performance to Javier Colon and Matt Cusson, with additional music-production credits and a Concord Records courtesy statement.
- Action: quarantine until applicable reuse rights for the composition, recording, performance, and video are documented. A NASA collaboration does not itself document those permissions for us.

### Exploring Jupiter's Magnetic Field

- Catalog ID: `759a90b8-6311-5bb0-9740-c83df4e5737b`.
- NASA ID: `GSFC_20160629_Juno_m12296_Magnetometer`.
- Sources: `https://images.nasa.gov/details/GSFC_20160629_Juno_m12296_Magnetometer` and `https://svs.gsfc.nasa.gov/12296/`.
- The source explicitly credits five tracks from the Killer Tracks production-music library.
- Action: quarantine the soundtrack-bearing file unless the relevant license is documented. A different, separately checked NASA animation without the production soundtrack may be a replacement candidate, not an automatically approved substitute.

### 3D 4k for STEREO's 10th Anniversary

- Catalog ID: `45333639-fe64-5ef4-bc8a-3daea35038e1`.
- NASA ID: `GSFC_20161025_STEREO_m12393_10th_3D_4K`.
- Source: `https://images.nasa.gov/details/GSFC_20161025_STEREO_m12393_10th_3D_4K`.
- The source credits music to Lars Leonhard, including two named tracks. The website has no corresponding third-party music grant.
- Action: quarantine unless the actual file is separately cleared or a suitable expressly permitted alternative is reviewed.

### Crawler Move B-roll and Timelapse featuring Driver Daniel Zapata

- Catalog ID: `643b18ae-6d09-587d-be13-a8d2ef72c9fd`.
- NASA ID: `KSC-20190403-MH-CMS01_0001-Crawler_Move_Driver_Daniel_Zapata_H265-3216946`.
- Source metadata: `https://images-assets.nasa.gov/video/KSC-20190403-MH-CMS01_0001-Crawler_Move_Driver_Daniel_Zapata_H265-3216946/metadata.json`.
- Both copyright/rights fields refer to usage terms. `XMP:UsageTerms` says **NASA Restricted Internal Use - Pending Review**.
- Public API availability conflicts with that embedded restriction. This might be stale metadata, but it must be resolved with an authoritative updated release statement; public accessibility is not evidence that the restriction has been lifted.
- Action: quarantine pending clarification. Do not infer public-domain status or public-release authorization from its NASA host.

## Screening totals and limitations

- 179 exact official source records and original metadata files retrieved; zero lookup failures.
- 15 distinct entries triggered broad music/rights-reference heuristics.
- Six entries contain a music-reference match. This includes one explicit **no music** description, demonstrating that this is a review queue, not a claim of six infringements.
- Eleven contain third-party/rights-reference matches. Generic NASA copyright-guideline references, public-domain dedications, agency names in a narrative, and genuine external-rights issues are mixed together; these are not eleven infringement findings.
- 165 metadata records indicate an audio track. That does not establish copyrighted music: audio might be speech, silence, sound effects, or otherwise permitted. It does mean muting preview playback is not an audio-rights audit.
- Five entries are tagged JPL in source metadata and require the JPL/Caltech policy and full-credit check.
- 174 original metadata files lack an explicit copyright/rights/license field. This is not proof of infringement or absence of permission; policy context and authorship still matter.
- Zero files received independent legal clearance in this automated screening. No frame-by-frame, soundtrack-listening, model/property-release, trademark, or jurisdiction-specific review was performed.

There are additional attribution inaccuracies: for example, *AIRS: NASA Advances Our Understanding of Earth's Climate* credits NASA/JPL-Caltech/GRL and other NASA units in its source, but our creator label is only `NASA / JPL`. *Sentinel-6 Animation* contains a SpaceX creator/credit and an explicit public-domain-dedication statement in metadata, but is labeled `NASA / KSC` in our catalog. That entry is not automatically forbidden; the actual authorship and scope of the dedication must be retained and checked rather than replaced by a generic NASA label.

## Applicable policies

1. NASA Images and Media: `https://www.nasa.gov/nasa-brand-center/images-and-media/`. NASA-origin material is generally available under its stated conditions, but NASA-hosted content can include third-party copyrighted material that NASA cannot authorize for someone else's use. Credit, endorsement, identity, and logo restrictions also matter. This is not a blanket Creative Commons license for every NASA-hosted file.
2. JPL Image Use Policy: `https://www.jpl.nasa.gov/jpl-image-use-policy/`. Apply its credit requirements and exceptions to JPL material rather than assuming every component is a federal-employee work or substituting the abbreviated `NASA / JPL` creator string.
3. Scientific Visualization Studio usage: `https://svs.gsfc.nasa.gov/help/usage.html`. Check item-specific credits, especially music and third-party content; the visualization and its accompanying soundtrack can have different reuse conditions.

For a commercial wallpaper application, a qualified intellectual-property lawyer should confirm the intended licensing and distribution model, particularly where stock footage, performers, production-library music, contractor-created works, or product/merchandise use is involved. This audit cannot promise immunity from claims.

## Required publication gate

Do not use a negative keyword filter as the sole license gate. A reviewed record should contain:

- Exact source/asset URLs and a dated copy or hash of applicable terms and source credits.
- Actual creator/rightsholder credit, not just the NASA distribution center.
- A documented rights basis and scope for the preview image, video, audio, and third-party components.
- Intended commercial/noncommercial use, embedding, download/redistribution, and permitted modifications.
- Attribution and applicable notice requirements, plus any identity/trademark/endorsement conditions.
- An explicit reviewer, date, status, and explanation. Unknown or conflicting rights stay unpublished by default.

Keep the candidate catalog separate from the approved publishable catalog. Enforce the same allowlist for the static website and native app packaging, and keep the review evidence outside public runtime assets. Obtain legal confirmation rather than labeling an unreviewed record licensed because its URL is public.
