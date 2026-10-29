// rea decompile_all
// name: FUN_1002f0e80
// address: 0x1002f0e80
// body: available
// range: 0x1002f0e80-0x1002f0f4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f0e80(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  URL UVar1;
  URL UVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar4 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (*param_2 != -1) {
    _swift_once(param_2,param_4);
  }
  UVar2 = UVar1;
  FUN_100099338(UVar1.unknown,param_3);
  (**(code **)(lVar4 + 0x10))(puVar3,UVar2.unknown,UVar1.unknown);
  FUN_1002eef04(puVar3);
  (**(code **)(lVar4 + 8))(puVar3,UVar1.unknown);
  return;
}

