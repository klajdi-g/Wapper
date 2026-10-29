# Wallper code recovery

Recovered locally on October 29, 2026 from `/Applications/Wallper.app`, version
1.12.1, bundle identifier `sandimax.Wallper`.

## Start here

- [CODE-MAP.md](CODE-MAP.md): named classes, observed fields, method pseudocode,
  direct helper calls, and original Swift source-path clues.
- [SWIFT-TYPES.md](SWIFT-TYPES.md): 384 recovered Swift type declarations,
  containing 1,886 field/case records; 1,530 field types were demangled.
- [FINDINGS.md](FINDINGS.md): concrete code findings and useful starting addresses.
- `named-code/`: the 107 Objective-C-visible method implementations, grouped by
  recovered class/category names. These are pseudocode, not original Swift files.
- `decompiled/functions/`: all 16,480 exported non-external Ghidra functions,
  including compiler-generated helpers, thunks, and import stubs.
- `ghidra-project/Wallper.gpr` plus `Wallper.rep/`: the saved analyzed project.
- `recovered-resources/`: copied app resources, including readable Perl source,
  the helper framework header, images, compiled asset catalog, and catalog JSON.
- `original/`: untouched app-bundle copy and an extracted ARM64 executable.

## Export coverage

REA's export selected 18,044 discovered functions: 16,480 pseudocode files written,
1,564 external imports recorded separately, zero export failures, zero remaining.
Every written file has a SHA-256 in `decompiled/decompile-index.json`.
The complete REA Evidence is `decompile-result.json`; the append-only export log
is `decompiled/decompile-journal.jsonl`.

This is complete coverage of **the discovered function inventory**, not proof
that every executable byte was identified correctly or every original method
was recovered. A successful export does not imply correct inferred types or
fully resolved indirect calls. Swift optimized closures, generics, async state
machines, register-based calling conventions, and stripped names remain difficult.

The expanded native metadata inventory identified 77 Objective-C-visible classes,
one category, and 107 method implementations. Its Swift declaration inventory
contains 416 declarations, including 384 in module `Wallper`; the others belong
to imported C types. Some metadata pointer/vtable facets remain partial.

## What this does not restore

These `.c` files are Ghidra pseudocode and are **not a buildable project**.
Original Swift method bodies, comments, access control, formatting, source layout,
Xcode project settings, and original asset-catalog source are not restored.
The 17 embedded `.swift` paths are clues, not recovered source files. Type
declarations/field names come from compiled metadata; they are not original syntax.
The saved project allows further naming, typing, and reconstruction without
repeating the initial analysis. The original universal executable is preserved;
the code export covers its ARM64 slice, not a second export of x86-64.

## Installed tools

Tools are isolated under `~/.local/share/wallper-recovery/`:

- Node 24.22.1, downloaded from the official Node archive and checksum-verified.
- npm 11.16.0 installed only inside that isolated toolchain, following REA's pin.
- Ghidra 12.1.4, downloaded from the official release and checksum-verified.
- Ghidra's ARM64 native decompiler, compiled locally using existing Apple tools.
- Existing Java 21.0.11 reused; no Java or Homebrew upgrade was performed.
- REA 6.8.0 built in the supplied sibling `../rea` checkout. The lockfile's old
  registry URLs required `--registry=https://registry.npmjs.org --replace-registry-host=always`;
  no tracked REA source/configuration files were changed.

`rea-doctor.json` reports healthy for the requested Ghidra scope. Its broader
environment checks still mention unrelated engines/client registrations; those
are not required by the working local CLI. No global Node default, shell profile,
or agent registration was changed.

## Use it

From the parent `DECOMP` directory:

```sh
./rea doctor --provider ghidra --json
./open-ghidra.sh
./decompile-wallper.sh
python3 recover-swift-fields.py
python3 build-recovery-index.py
```

`open-ghidra.sh` opens the saved project for manual exploration. Other commands
do not launch Wallper. The decompile command resumes a matching existing export
and verifies saved files instead of overwriting them. An intentional project edit
changes its fingerprint and therefore requires a new export directory; do not
resume the old export against a differently annotated project.

On this Mac, `./setup-recovery-tools.sh`, then `./build-rea.sh` reproduce the
tool installation/build. `./prepare-wallper-project.sh` creates the initial
analysis project only if it does not exist. The tool scripts live in the parent
directory and expect the supplied REA checkout at its current sibling location.

## Integrity and history

`verification.json` records export-file checksum validation and target integrity.
`resume-verification.json` records a successful matching-profile resume.
`evidence/field-decoder-crosscheck.json` records matching Swift/Objective-C field
name lists for all 54 directly comparable class names, with zero mismatches.
`evidence/sha256.txt` identifies the original universal executable;
`evidence/arm64-sha256.txt` identifies the extracted slice.

No debugger was attached, no Wallper backend was queried, and no license check
or executable was patched. App preferences, credentials, and user media were not
copied. Ghidra analysis emitted warnings about some unresolved addresses; these
are retained in the logs rather than treated as recovered facts.

`INITIAL-STATIC-ANALYSIS.md` preserves the earlier report, including the setup
blockers that were later resolved. `evidence/objc-methods-initial-otool.json` is
the historical first-pass method map; nested-class ownership in that map was
superseded by the REA-native map in `evidence/objc-methods.json`.

The first successful export is retained in `decompiled-initial/` with
`decompile-result-initial.json`. A subsequent read-only Ghidra metadata pass
refreshed project-container files, so REA correctly refused to resume that
earlier fingerprint (`resume-verification-initial-refused.json`). The final
export was generated against the saved project's resulting state. This did not
change the original executable or invalidate the initial pseudocode files.
The final resume check skipped all 18,044 already-recorded entries, with zero
remaining work and no overwritten function files.
