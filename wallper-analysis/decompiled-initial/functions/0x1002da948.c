// rea decompile_all
// name: FUN_1002da948
// address: 0x1002da948
// body: available
// range: 0x1002da948-0x1002dac77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002da948(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  BorderedProminentButtonStyle BVar4;
  undefined *puVar5;
  undefined *puVar6;
  LocalizedStringKey LVar7;
  Text TVar8;
  undefined *puVar9;
  ButtonBorderShape BVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar12;
  long lVar13;
  long lVar14;
  String stringLiteral;
  String stringLiteral_00;
  undefined8 uStack_a0;
  undefined2 auStack_98 [4];
  undefined8 uStack_90;
  uint local_84;
  undefined8 local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  
  BVar4 = SwiftUI::BorderedProminentButtonStyle::typeMetadataAccessor();
  local_68 = *(long *)(BVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_68 + 0x40));
  lVar12 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_10054def0;
  FUN_100002f94(&DAT_10054def0,&DAT_100422df0);
  local_70 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_70 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_10055aaa8;
  FUN_100002f94(&DAT_10055aaa8,&DAT_10042efd8);
  local_78 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar13 = (lVar12 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar13 - extraout_x12;
  uVar11 = 0xeb00000000726570;
  stringLiteral.bridgeObject = (void *)0xeb00000000726570;
  stringLiteral.str = (char *)0x6c6c615720797542;
  LVar7 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)(lVar14 + -8) = 0x100;
  *(undefined8 *)(lVar14 + -0x10) = 0;
  param_4 = param_4 & 1;
  TVar8 = SwiftUI::Text::_init(LVar7);
  stringLiteral_00.bridgeObject = (void *)0xe300000000000000;
  stringLiteral_00.str = (char *)0x797542;
  local_84 = param_4;
  local_80 = param_5;
  LVar7 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  (extension_SwiftUI)::SwiftUI::Button::_init(LVar7);
  SwiftUI::BorderedProminentButtonStyle::init();
  puVar6 = &DAT_100550838;
  FUN_1000087a0(&DAT_100550838,&DAT_10054def0,&DAT_100422df0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar9 = &DAT_100553118;
  FUN_1000036d0(&DAT_100553118,PTR_typeMetadataAccessor_100522b90,
                PTR_SwiftUI__SwiftUI__BorderedProminentButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522b80
               );
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(lVar14,lVar12,puVar5,BVar4.unknown,puVar6,puVar9)
  ;
  (**(code **)(local_68 + 8))(lVar12,BVar4.unknown);
  (**(code **)(local_70 + 8))(lVar12 - extraout_x8_00,puVar5);
  iVar1 = *(int *)(local_78 + 0x24);
  BVar10.unknown = &DAT_10055aab0;
  FUN_100002f94(&DAT_10055aab0,&DAT_10042efe0);
  SwiftUI::ButtonBorderShape::get_roundedRectangle(BVar10);
  puVar5 = &DAT_10042efe8;
  _swift_getKeyPath();
  *(undefined **)(lVar14 + iVar1) = puVar5;
  FUN_1000087e4(lVar14,lVar13,&DAT_10055aaa8,&DAT_10042efd8);
  uVar3 = local_80;
  uVar2 = local_84;
  *param_1 = TVar8.unknown;
  param_1[1] = uVar11;
  *(char *)(param_1 + 2) = (char)local_84;
  param_1[3] = local_80;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  puVar5 = &DAT_10055aab8;
  FUN_100002f94(&DAT_10055aab8,&DAT_10042f018);
  FUN_1000087e4(lVar13,(long)param_1 + (long)*(int *)(puVar5 + 0x40),&DAT_10055aaa8,&DAT_10042efd8);
  FUN_100007b14(TVar8.unknown,uVar11,uVar2);
  _swift_bridgeObjectRetain(uVar3);
  FUN_10002a29c(lVar14,&DAT_10055aaa8,&DAT_10042efd8);
  FUN_10002a29c(lVar13,&DAT_10055aaa8,&DAT_10042efd8);
  FUN_100025b34(TVar8.unknown,uVar11,uVar2);
  _swift_bridgeObjectRelease(uVar3);
  return;
}

