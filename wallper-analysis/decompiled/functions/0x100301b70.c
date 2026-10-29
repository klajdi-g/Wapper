// rea decompile_all
// name: FUN_100301b70
// address: 0x100301b70
// body: available
// range: 0x100301b70-0x100301ca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100301b70(long param_1)

{
  int iVar1;
  URL UVar2;
  long lVar3;
  undefined *puVar4;
  URL UVar5;
  URL UVar6;
  long extraout_x8;
  long extraout_x12;
  long lVar7;
  code *pcVar8;
  long lVar9;
  String SVar10;
  undefined auStack_60 [15];
  undefined1 local_51;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  UVar6.unknown = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar7 = (long)UVar6.unknown - extraout_x12;
  lVar3 = 0;
  FUN_1003009dc();
  iVar1 = *(int *)(lVar3 + 0x2c);
  local_51 = 1;
  puVar4 = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar1),&local_51,puVar4);
  UVar5 = Foundation::URL::_init();
  Foundation::URL::deletingPathExtension(UVar5);
  pcVar8 = *(code **)(lVar9 + 8);
  (*pcVar8)(UVar6.unknown,UVar2.unknown);
  SVar10 = Foundation::URL::get_lastPathComponent(UVar6);
  (*pcVar8)(lVar7,UVar2.unknown);
  FUN_1001da998(SVar10.str,SVar10.bridgeObject);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  return;
}

