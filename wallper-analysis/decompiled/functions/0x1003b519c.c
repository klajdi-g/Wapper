// rea decompile_all
// name: FUN_1003b519c
// address: 0x1003b519c
// body: available
// range: 0x1003b519c-0x1003b52c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b519c(long param_1)

{
  URL UVar1;
  undefined *puVar2;
  URL UVar3;
  URL UVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  long lVar6;
  code *pcVar7;
  String SVar8;
  undefined auStack_70 [15];
  undefined1 local_61;
  State local_60;
  undefined8 uStack_58;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar6 + 0x40));
  UVar4.unknown = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar5 = (long)UVar4.unknown - extraout_x12;
  uStack_58 = *(undefined8 *)(param_1 + 0x60);
  local_60.unknown = *(undefined **)(param_1 + 0x58);
  local_61 = 1;
  puVar2 = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::set_wrappedValue(&local_60,&local_61,puVar2);
  FUN_1003b52c8();
  UVar3 = Foundation::URL::_init();
  Foundation::URL::deletingPathExtension(UVar3);
  pcVar7 = *(code **)(lVar6 + 8);
  (*pcVar7)(UVar4.unknown,UVar1.unknown);
  SVar8 = Foundation::URL::get_lastPathComponent(UVar4);
  (*pcVar7)(lVar5,UVar1.unknown);
  FUN_1001da998(SVar8.str,SVar8.bridgeObject);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  return;
}

