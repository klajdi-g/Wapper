// rea decompile_all
// name: FUN_100045bf0
// address: 0x100045bf0
// body: available
// range: 0x100045bf0-0x100045c87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100045bf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_50 [16];
  undefined *local_40;
  undefined8 uStack_38;
  
  Swift::MainActor::typeMetadataAccessor();
  puVar1 = &DAT_1005268b0;
  _swift_allocObject(&DAT_1005268b0,0x18,7);
  _swift_weakInit(puVar1 + 0x10,param_1);
  local_40 = puVar1;
  uStack_38 = param_2;
  FUN_100045d90(FUN_100047a54,auStack_50,"Wallper/MeshGradientWallpaperView.swift",0x27,2,0x145);
  _swift_release(puVar1);
  return;
}

