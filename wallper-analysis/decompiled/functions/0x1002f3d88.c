// rea decompile_all
// name: FUN_1002f3d88
// address: 0x1002f3d88
// body: available
// range: 0x1002f3d88-0x1002f42f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f3d88(long param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  HorizontalAlignment HVar10;
  undefined *puVar11;
  LocalizedStringKey LVar12;
  undefined *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar15;
  code *pcVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  String stringLiteral;
  undefined *apuStack_110 [3];
  long local_f8;
  undefined *local_f0;
  long local_e8;
  long local_e0;
  undefined *local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined *local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined *puStack_70;
  
  local_b0 = param_1;
  local_f0 = (undefined *)SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_e0 = *(long *)(local_f0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e0 + 0x40));
  lVar19 = (long)apuStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_10055b400;
  FUN_100002f94(&DAT_10055b400,&DAT_10042fc40);
  local_f8 = *(long *)(puVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_10055b408;
  FUN_100002f94(&DAT_10055b408,&DAT_10042fc48);
  local_c8 = *(long *)(puVar9 + -8);
  local_d8 = puVar9;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (lVar19 - extraout_x8_00) - extraout_x8_01;
  puVar9 = &DAT_10055b410;
  FUN_100002f94(&DAT_10055b410,&DAT_10042fc50);
  local_c0 = *(long *)(puVar9 + -8);
  local_b8 = puVar9;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c0 + 0x40));
  lVar14 = lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar14 - extraout_x12;
  puVar9 = &DAT_10055b418;
  local_a0 = lVar14;
  FUN_100002f94(&DAT_10055b418,&DAT_10042fc58);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar14 = lVar14 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_e8 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar18 = (undefined8 *)(lVar14 - extraout_x12_00);
  HVar10.unknown = &DAT_10055b420;
  FUN_100002f94(&DAT_10055b420,&DAT_10042fc60);
  local_90 = *(long *)(HVar10.unknown + -8);
  apuStack_110[2] = HVar10.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_90 + 0x40));
  lVar14 = (long)puVar18 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_98 = lVar14 - extraout_x12_01;
  FUN_1002f42f8();
  HVar10 = SwiftUI::HorizontalAlignment::get_leading(HVar10);
  *puVar18 = HVar10.unknown;
  puVar18[1] = 0x4000000000000000;
  *(undefined1 *)(puVar18 + 2) = 0;
  puVar9 = &DAT_10055b428;
  FUN_100002f94(&DAT_10055b428,&DAT_10042fc68);
  apuStack_110[1] = (undefined *)puVar18;
  FUN_1002f4a9c((long)puVar18 + (long)*(int *)(puVar9 + 0x2c),param_2);
  lVar14 = 0;
  FUN_1002fa254();
  _swift_retain(*(undefined8 *)(param_2 + *(int *)(lVar14 + 0x14) + 8));
  FUN_100002f94(&DAT_100549c70,&DAT_10042fc70);
  FUN_100003260();
  SwiftUI::Button::_init();
  SwiftUI::PlainButtonStyle::init();
  puVar9 = &DAT_10055b430;
  FUN_1000087a0(&DAT_10055b430,&DAT_10055b400,&DAT_10042fc40,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar11 = &DAT_10054a8b0;
  FUN_1000036d0(&DAT_10054a8b0,PTR_typeMetadataAccessor_100522380,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
  puVar4 = local_f0;
  puVar13 = puVar9;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(lVar17,lVar19,puVar8,local_f0,puVar9,puVar11);
  (**(code **)(local_e0 + 8))(lVar19,puVar4);
  (**(code **)(local_f8 + 8))(lVar19 - extraout_x8_00,puVar8);
  lVar14 = 0;
  FUN_1002f58e8();
  bVar7 = *(char *)(param_2 + *(int *)(lVar14 + 0x28)) == '\0';
  pcVar1 = "oad from this Mac";
  if (bVar7) {
    pcVar1 = "Clear all caches";
  }
  pcVar2 = (char *)0xd00000000000001a;
  if (bVar7) {
    pcVar2 = (char *)0xd000000000000021;
  }
  stringLiteral.bridgeObject = (void *)((ulong)pcVar1 | 0x8000000000000000);
  stringLiteral.str = pcVar2;
  LVar12 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  puStack_80 = puVar4;
  local_88 = puVar8;
  local_78 = puVar9;
  puStack_70 = puVar11;
  _swift_getOpaqueTypeConformance2
            (&local_88,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100522e98
             ,1);
  lVar5 = local_a0;
  puVar8 = local_d8;
  (extension_SwiftUI)::SwiftUI::View::_help(LVar12);
  _swift_bridgeObjectRelease(puVar13);
  _swift_bridgeObjectRelease(stringLiteral.bridgeObject);
  (**(code **)(local_c8 + 8))(lVar17,puVar8);
  lVar6 = local_a8;
  puVar9 = apuStack_110[2];
  pcVar15 = *(code **)(local_90 + 0x10);
  (*pcVar15)(local_a8,local_98,apuStack_110[2]);
  lVar14 = local_e8;
  FUN_1000087e4(puVar18,local_e8,&DAT_10055b418,&DAT_10042fc58);
  puVar11 = local_b8;
  lVar19 = local_c0;
  lVar17 = local_d0;
  pcVar16 = *(code **)(local_c0 + 0x10);
  (*pcVar16)(local_d0,lVar5,local_b8);
  lVar5 = local_b0;
  (*pcVar15)(local_b0,lVar6,puVar9);
  puVar8 = &DAT_10055b438;
  FUN_100002f94(&DAT_10055b438,&DAT_10042fc80);
  FUN_1000087e4(lVar14,lVar5 + *(int *)(puVar8 + 0x30),&DAT_10055b418,&DAT_10042fc58);
  iVar3 = *(int *)(puVar8 + 0x40);
  *(undefined8 *)(lVar5 + iVar3) = 0;
  *(undefined1 *)((undefined8 *)(lVar5 + iVar3) + 1) = 1;
  (*pcVar16)(lVar5 + *(int *)(puVar8 + 0x50),lVar17,puVar11);
  pcVar15 = *(code **)(lVar19 + 8);
  (*pcVar15)(local_a0,puVar11);
  FUN_10002a29c(apuStack_110[1],&DAT_10055b418,&DAT_10042fc58);
  pcVar16 = *(code **)(local_90 + 8);
  (*pcVar16)(local_98,puVar9);
  (*pcVar15)(lVar17,puVar11);
  FUN_10002a29c(lVar14,&DAT_10055b418,&DAT_10042fc58);
  (*pcVar16)(local_a8,puVar9);
  return;
}

