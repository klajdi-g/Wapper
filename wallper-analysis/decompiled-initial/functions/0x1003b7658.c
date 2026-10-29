// rea decompile_all
// name: FUN_1003b7658
// address: 0x1003b7658
// body: available
// range: 0x1003b7658-0x1003b7997 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b7658(undefined8 *param_1,CGFloat param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,Color param_6)

{
  undefined8 *puVar1;
  Design DVar2;
  LocalizedStringKey LVar3;
  Text TVar4;
  undefined7 extraout_var;
  Font FVar5;
  Text TVar6;
  Color CVar7;
  Color CVar8;
  Text TVar9;
  VerticalAlignment VVar10;
  undefined8 uVar11;
  Text TVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long extraout_x8;
  undefined8 *puVar16;
  long extraout_x8_00;
  long extraout_x12;
  long lVar17;
  String stringLiteral;
  undefined8 uStack_90;
  undefined2 auStack_88 [4];
  undefined8 *local_80;
  long local_78;
  undefined8 local_70;
  undefined8 *local_68;
  
  puVar13 = &DAT_10055fd88;
  local_70 = param_3;
  local_68 = param_1;
  FUN_100002f94(&DAT_10055fd88,&DAT_100435818);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar13 + -8) + 0x40));
  lVar17 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_78 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar16 = (undefined8 *)(lVar17 - extraout_x12);
  puVar13 = &DAT_10054a828;
  local_80 = puVar16;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)puVar16 - extraout_x8_00;
  uVar11 = 0xee006b6e696c2065;
  stringLiteral.bridgeObject = (void *)0xee006b6e696c2065;
  stringLiteral.str = (char *)0x6c62616572616853;
  LVar3 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)(lVar17 + -8) = 0x100;
  *(undefined8 *)(lVar17 + -0x10) = 0;
  puVar13 = (undefined *)(ulong)(param_5 & 1);
  TVar4 = SwiftUI::Text::_init(LVar3);
  SwiftUI::Font::Weight::get_semibold((Weight)TVar4.unknown);
  DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar2.value) + -8) + 0x38))
            (lVar17,1,1,CONCAT71(extraout_var,DVar2.value));
  FVar5 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar17,&DAT_10054a828,&DAT_10041e3c0);
  TVar12 = TVar4;
  uVar14 = uVar11;
  VVar10.unknown = puVar13;
  TVar6 = SwiftUI::Text::_font(FVar5.unknown);
  _swift_release(FVar5.unknown);
  FUN_100025b34(TVar4.unknown,uVar11,puVar13);
  _swift_bridgeObjectRelease();
  CVar7 = SwiftUI::Color::get_white(param_6);
  CVar8 = SwiftUI::Color::opacity(0.6,CVar7);
  _swift_release(CVar7.unknown);
  TVar4 = TVar6;
  puVar15 = TVar12.unknown;
  uVar11 = uVar14;
  TVar9 = SwiftUI::Text::_foregroundColor(CVar8.unknown);
  _swift_release(CVar8.unknown);
  FUN_100025b34(TVar6.unknown,TVar12.unknown,uVar14);
  _swift_bridgeObjectRelease();
  VVar10 = SwiftUI::VerticalAlignment::get_center(VVar10);
  puVar16 = local_80;
  *local_80 = VVar10.unknown;
  puVar16[1] = 0x4020000000000000;
  *(undefined1 *)(puVar16 + 2) = 0;
  puVar13 = &DAT_10055fd90;
  FUN_100002f94(&DAT_10055fd90,&DAT_100435820);
  FUN_1003b7998((long)puVar16 + (long)*(int *)(puVar13 + 0x2c),local_70);
  lVar17 = local_78;
  FUN_1000087e4(puVar16,local_78,&DAT_10055fd88,&DAT_100435818);
  puVar1 = local_68;
  *local_68 = TVar9.unknown;
  local_68[1] = TVar4.unknown;
  *(char *)(local_68 + 2) = (char)puVar15;
  local_68[3] = uVar11;
  puVar13 = &DAT_10055fd98;
  FUN_100002f94(&DAT_10055fd98,&DAT_100435828);
  FUN_1000087e4(lVar17,(long)puVar1 + (long)*(int *)(puVar13 + 0x30),&DAT_10055fd88,&DAT_100435818);
  FUN_100007b14(TVar9.unknown,TVar4.unknown,puVar15);
  _swift_bridgeObjectRetain(uVar11);
  FUN_10002a29c(puVar16,&DAT_10055fd88,&DAT_100435818);
  FUN_10002a29c(lVar17,&DAT_10055fd88,&DAT_100435818);
  FUN_100025b34(TVar9.unknown,TVar4.unknown,puVar15);
  _swift_bridgeObjectRelease(uVar11);
  return;
}

