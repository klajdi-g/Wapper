# Wallper recovery workspace

Start with [wallper-analysis/README.md](wallper-analysis/README.md).
The recovered function export, Swift metadata, resources, and saved Ghidra
project are under `wallper-analysis/`.

`./rea` uses the supplied sibling REA checkout with the isolated recovery
toolchain. `./open-ghidra.sh` opens the saved analysis project.

## GitHub backup

The repository includes the recovery scripts, findings, both pseudocode exports,
preserved app bundle, resources, evidence, and saved Ghidra project. These are
recovery artifacts, not the original Swift source or a buildable Xcode project.

The complete `Wallper-Recovery.zip` exceeds GitHub's ordinary Git file-size
limit, so it is published separately as an asset on the `recovery-2026-10-29`
release. Verify it with the committed `Wallper-Recovery.zip.sha256` file:

```sh
shasum -a 256 -c Wallper-Recovery.zip.sha256
```

The ZIP is the original recovery snapshot; this GitHub-backup section and Git
configuration were added afterward. Local tool installations and the sibling
REA checkout are not bundled; see `wallper-analysis/README.md` for setup details.
