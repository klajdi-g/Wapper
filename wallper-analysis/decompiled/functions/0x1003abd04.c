// rea decompile_all
// name: FUN_1003abd04
// address: 0x1003abd04
// body: available
// range: 0x1003abd04-0x1003abe73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003abd04(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  Material MVar4;
  SafeAreaRegions SVar5;
  Set SVar6;
  Color CVar7;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar8;
  long lVar9;
  
  puVar3 = &DAT_10055f8e8;
  FUN_100002f94(&DAT_10055f8e8,&DAT_100435188);
  MVar4.unknown = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  puVar8 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = (long)puVar8 - extraout_x12;
  SwiftUI::Material::get_ultraThin(MVar4);
  SVar5.unknown = &DAT_10054af90;
  FUN_100002f94(&DAT_10054af90,&DAT_100435190);
  *(undefined2 *)(lVar9 + *(int *)(SVar5.unknown + 0x38)) = 0x100;
  SVar5 = SwiftUI::SafeAreaRegions::get_all(SVar5);
  SVar6 = SwiftUI::Edge::Set::get_all(SVar5.unknown);
  iVar2 = *(int *)(puVar3 + 0x24);
  *(undefined8 *)(lVar9 + iVar2) = SVar5.unknown;
  *(char *)((undefined8 *)(lVar9 + iVar2) + 1) = (char)SVar6.unknown;
  CVar7 = SwiftUI::Color::get_white(SVar6.unknown);
  FUN_1000087e4(lVar9,puVar8,&DAT_10055f8e8,&DAT_100435188);
  FUN_1000087e4(puVar8,param_1,&DAT_10055f8e8,&DAT_100435188);
  puVar3 = &DAT_10055f8f0;
  FUN_100002f94(&DAT_10055f8f0,&DAT_100435198);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar3 + 0x30));
  *puVar1 = CVar7.unknown;
  puVar1[2] = 0x4004000000000000;
  puVar1[1] = 0x4028000000000000;
  _swift_retain(CVar7.unknown);
  FUN_10002a29c(lVar9,&DAT_10055f8e8,&DAT_100435188);
  _swift_release(CVar7.unknown);
  FUN_10002a29c(puVar8,&DAT_10055f8e8,&DAT_100435188);
  return;
}

