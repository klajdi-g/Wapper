// rea decompile_all
// name: FUN_1002ecae4
// address: 0x1002ecae4
// body: available
// range: 0x1002ecae4-0x1002ecc1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ecae4(long param_1)

{
  URL UVar1;
  long lVar2;
  URL UVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1002ecfc0();
  lVar2 = 0;
  FUN_1002f58d4();
  FUN_1002f00fc(param_1 + *(int *)(lVar2 + 0x14));
  if (DAT_100556f80 != -1) {
    _swift_once(&DAT_100556f80,FUN_1001dd604);
  }
  FUN_1001de180();
  FUN_1002f00fc(param_1 + *(int *)(lVar2 + 0x18));
  if (DAT_1005552d8 != -1) {
    _swift_once(&DAT_1005552d8,FUN_1001600e0);
  }
  UVar3 = UVar1;
  FUN_100099338(UVar1.unknown,&DAT_100577c80);
  (**(code **)(lVar5 + 0x10))(puVar4,UVar3.unknown,UVar1.unknown);
  FUN_1002f00fc(puVar4);
  (**(code **)(lVar5 + 8))(puVar4,UVar1.unknown);
  FUN_1002ebf58();
  return;
}

