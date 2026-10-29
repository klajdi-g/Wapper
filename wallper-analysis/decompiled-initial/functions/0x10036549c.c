// rea decompile_all
// name: FUN_10036549c
// address: 0x10036549c
// body: available
// range: 0x10036549c-0x100365933 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10036549c(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  LocalizedStringKey LVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar9;
  long lVar10;
  long lVar11;
  String stringLiteral;
  long local_e0;
  undefined *local_d8;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  long local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 uVar8;
  
  local_88 = param_1;
  local_98 = (undefined *)SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_90 = *(long *)(local_98 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_90 + 0x40));
  lVar9 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_b0 = lVar9;
  local_d8 = (undefined *)SwiftUI::ButtonMenuStyle::typeMetadataAccessor();
  local_c8 = *(long *)(local_d8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c8 + 0x40));
  lVar9 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_10055d270;
  FUN_100002f94(&DAT_10055d270,&DAT_100432780);
  local_e0 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10055d268;
  FUN_100002f94(&DAT_10055d268,&DAT_100433b70);
  local_b8 = *(long *)(puVar4 + -8);
  local_c0 = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (lVar9 - extraout_x8_01) - extraout_x8_02;
  puVar4 = &DAT_10055d210;
  FUN_100002f94(&DAT_10055d210,&DAT_100432760);
  local_a8 = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar10 - extraout_x8_03;
  puVar4 = &DAT_10055e228;
  FUN_100002f94(&DAT_10055e228,&DAT_100433b80);
  local_a0 = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar11 - extraout_x8_04;
  FUN_100002f94(&DAT_10054d8e0,&DAT_10041f1b0);
  FUN_100002f94(&DAT_10055e230,&DAT_100433b90);
  FUN_1000599d4();
  FUN_1000087a0(&DAT_10055e238,&DAT_10055e230,&DAT_100433b90,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  SwiftUI::Menu::_init();
  SwiftUI::ButtonMenuStyle::init();
  puVar4 = &DAT_10055d278;
  FUN_1000087a0(&DAT_10055d278,&DAT_10055d270,&DAT_100432780,
                PTR_SwiftUI__SwiftUI__Menu<undefined,undefined>_>SwiftUI__View_100522d88);
  puVar5 = &DAT_100550b38;
  FUN_1000036d0(&DAT_100550b38,PTR_typeMetadataAccessor_100522210,
                PTR_SwiftUI__SwiftUI__ButtonMenuStyle_>SwiftUI__MenuStyle_100522200);
  puVar2 = local_d8;
  (extension_SwiftUI)::SwiftUI::View::_menuStyle(lVar10,lVar9,puVar3,local_d8,puVar4,puVar5);
  (**(code **)(local_c8 + 8))(lVar9,puVar2);
  (**(code **)(local_e0 + 8))(lVar9 - extraout_x8_01,puVar3);
  lVar9 = local_b0;
  SwiftUI::PlainButtonStyle::init();
  puStack_78 = puVar2;
  ppuVar6 = &local_80;
  local_80 = puVar3;
  _swift_getOpaqueTypeConformance2
            (ppuVar6,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_menuStyle<A_where_A1:_SwiftUI_MenuStyle>(A1)__>_some>>_1005231b0
             ,1);
  puVar3 = &DAT_10054a8b0;
  FUN_1000036d0(&DAT_10054a8b0,PTR_typeMetadataAccessor_100522380,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
  puVar5 = local_98;
  puVar4 = local_c0;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(lVar11,lVar9,local_c0,local_98,ppuVar6,puVar3);
  (**(code **)(local_90 + 8))(lVar9,puVar5);
  (**(code **)(local_b8 + 8))(lVar10,puVar4);
  puVar3 = &DAT_100433ba8;
  _swift_getKeyPath();
  puVar4 = &DAT_10055d260;
  FUN_100002f94(&DAT_10055d260,&DAT_100432778);
  iVar1 = *(int *)(puVar4 + 0x24);
  *(undefined8 *)(lVar11 + iVar1) = puVar3;
  *(undefined1 *)((undefined8 *)(lVar11 + iVar1) + 1) = 2;
  *(undefined2 *)(lVar11 + *(int *)(local_a8 + 0x24)) = 0x101;
  lVar9 = local_d0;
  FUN_10033b014(local_d0);
  FUN_10002a29c(lVar11,&DAT_10055d210,&DAT_100432760);
  stringLiteral.bridgeObject = (void *)0xe400000000000000;
  stringLiteral.str = (char *)0x65726f4d;
  uVar8 = 0xe400000000000000;
  LVar7 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  FUN_1000372f4(&DAT_10055e240,&DAT_10055e228,&DAT_100433b80,FUN_100343b3c);
  (extension_SwiftUI)::SwiftUI::View::_help(LVar7);
  _swift_bridgeObjectRelease(ppuVar6);
  _swift_bridgeObjectRelease(uVar8);
  FUN_10002a29c(lVar9,&DAT_10055e228,&DAT_100433b80);
  return;
}

