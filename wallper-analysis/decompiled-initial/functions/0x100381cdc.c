// rea decompile_all
// name: FUN_100381cdc
// address: 0x100381cdc
// body: available
// range: 0x100381cdc-0x1003822ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100381cdc(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  Animation AVar8;
  State SVar9;
  undefined *puVar10;
  undefined *puVar11;
  char *pcVar12;
  LocalizedStringKey LVar13;
  void *pvVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar15;
  long extraout_x12;
  long lVar16;
  long unaff_x20;
  long lVar17;
  Animation AVar18;
  ulong uVar19;
  ulong uVar20;
  String stringLiteral;
  undefined8 auStack_120 [2];
  long local_110 [2];
  undefined *local_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long local_e0;
  undefined *local_d8;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined1 local_80;
  
  lVar5 = 0;
  local_b8 = param_1;
  FUN_1003881b4();
  local_f8 = *(long *)(lVar5 + -8);
  lStack_f0 = *(long *)(local_f8 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = (long)local_110 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_10055e8b8;
  FUN_100002f94(&DAT_10055e8b8,&DAT_100434138);
  local_110[0] = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(local_110[0] + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar18.unknown = (undefined *)(lVar17 - extraout_x8);
  puVar7 = &DAT_10055e8c0;
  FUN_100002f94(&DAT_10055e8c0,&DAT_100434140);
  local_100 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)AVar18.unknown - extraout_x8_00;
  puVar7 = &DAT_10055e8c8;
  FUN_100002f94(&DAT_10055e8c8,&DAT_100434148);
  local_d0 = *(long *)(puVar7 + -8);
  local_d8 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_10055e8d0;
  local_e8 = lVar16 - extraout_x8_01;
  FUN_100002f94(&DAT_10055e8d0,&DAT_100434150);
  local_c8 = *(long *)(puVar7 + -8);
  local_c0 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (lVar16 - extraout_x8_01) - extraout_x8_02;
  local_e0 = lVar15;
  _swift_retain(*(undefined8 *)(unaff_x20 + *(int *)(lVar5 + 0x20) + 8));
  FUN_100002f94(&DAT_10055e8d8,&DAT_100434158);
  FUN_10038ffd0();
  SwiftUI::Button::_init();
  FUN_1000087a0(&DAT_10055e8f8,&DAT_10055e8b8,&DAT_100434138,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  FUN_10038f698();
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(lVar16);
  (**(code **)(local_110[0] + 8))(AVar18.unknown,puVar6);
  AVar8 = SwiftUI::Animation::easeOut(0.15,AVar18);
  uVar2 = *(undefined1 *)(unaff_x20 + *(int *)(lVar5 + 0x18));
  AVar18.unknown = &DAT_10055e900;
  local_110[1] = lVar5;
  FUN_100002f94(&DAT_10055e900,&DAT_100434170);
  iVar3 = *(int *)(AVar18.unknown + 0x24);
  *(undefined8 *)(lVar16 + iVar3) = AVar8.unknown;
  *(undefined1 *)((undefined8 *)(lVar16 + iVar3) + 1) = uVar2;
  AVar18 = SwiftUI::Animation::easeOut(0.12,AVar18);
  puVar1 = (undefined1 *)(unaff_x20 + *(int *)(lVar5 + 0x28));
  local_a8 = *(undefined **)(puVar1 + 8);
  local_b0 = (undefined *)CONCAT71(local_b0._1_7_,*puVar1);
  SVar9.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar9);
  puVar6 = &DAT_10055e908;
  FUN_100002f94(&DAT_10055e908,&DAT_100434178);
  iVar3 = *(int *)(puVar6 + 0x24);
  *(undefined8 *)(lVar16 + iVar3) = AVar18.unknown;
  *(undefined1 *)((undefined8 *)(lVar16 + iVar3) + 1) = local_80;
  FUN_100029504();
  lVar5 = lStack_f0;
  uVar19 = (ulong)*(byte *)(local_f8 + 0x50);
  uVar20 = uVar19 + 0x10 & (uVar19 ^ 0xffffffffffffffff);
  puVar6 = &DAT_10053c3e8;
  _swift_allocObject(&DAT_10053c3e8,uVar20 + lStack_f0,uVar19 | 7);
  FUN_100007e64(lVar17,puVar6 + uVar20,FUN_1003881b4);
  puVar4 = local_100;
  iVar3 = *(int *)(local_100 + 0x24);
  *(undefined8 *)(lVar16 + iVar3) = FUN_10039008c;
  ((undefined8 *)(lVar16 + iVar3))[1] = puVar6;
  FUN_100029504();
  puVar6 = &DAT_10053c410;
  _swift_allocObject(&DAT_10053c410,uVar20 + lVar5,uVar19 | 7);
  FUN_100007e64(lVar17,puVar6 + uVar20,FUN_1003881b4);
  puVar7 = &DAT_10055e910;
  FUN_100002f94(&DAT_10055e910,&DAT_100434180);
  puVar10 = &DAT_10055e918;
  FUN_100390270(&DAT_10055e918,&DAT_10055e8c0,&DAT_100434140,FUN_1003902e0);
  FUN_10039047c();
  puVar11 = puVar10;
  FUN_10038fe0c();
  *(undefined **)(lVar15 + -0x10) = puVar10;
  *(undefined **)(lVar15 + -8) = puVar11;
  lVar5 = local_e8;
  (extension_SwiftUI)::SwiftUI::View::_draggable();
  _swift_release(puVar6);
  FUN_10002a29c(lVar16,&DAT_10055e8c0,&DAT_100434140);
  puVar6 = &DAT_100553210;
  FUN_100002f94(&DAT_100553210,&DAT_1004365b0);
  puVar10 = local_d8;
  lVar15 = local_e0;
  local_b0 = puVar4;
  local_a8 = puVar7;
  _swift_getOpaqueTypeConformance2
            (&local_b0,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_draggable<A,B_where_A1:_SwiftUI_View,B1:_CoreTransferable_Transferable>(_:__autoclosure_()__>_B1,preview:_()__>_A1___>_some>>_100523188
             ,1);
  FUN_1000087a0(&DAT_100553208,&DAT_100553210,&DAT_1004365b0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar7 = puVar6;
  (extension_SwiftUI)::SwiftUI::View::_contextMenu();
  (**(code **)(local_d0 + 8))(lVar5,puVar10);
  if (*(char *)(unaff_x20 + *(int *)(local_110[1] + 0x1c)) == '\x01') {
    pcVar12 = (char *)0x70206f7420646441;
    pvVar14 = (void *)0xef7473696c79616c;
  }
  else {
    pcVar12 = (char *)0x0;
    pvVar14 = (void *)0xe000000000000000;
  }
  stringLiteral.bridgeObject = pvVar14;
  stringLiteral.str = pcVar12;
  LVar13 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  local_b0 = puVar10;
  local_a8 = puVar6;
  _swift_getOpaqueTypeConformance2
            (&local_b0,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_contextMenu<A_where_A1:_SwiftUI_View>(menuItems:_()__>_A1)__>_some>>_100522eb8
             ,1);
  puVar6 = local_c0;
  (extension_SwiftUI)::SwiftUI::View::_help(LVar13);
  _swift_bridgeObjectRelease(puVar7);
  _swift_bridgeObjectRelease(pvVar14);
  (**(code **)(local_c8 + 8))(lVar15,puVar6);
  return;
}

