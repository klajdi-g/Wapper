// rea decompile_all
// name: FUN_1000609a0
// address: 0x1000609a0
// body: available
// range: 0x1000609a0-0x100061383 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000609a0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  UUID UVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  Color CVar12;
  undefined *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  undefined8 uVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined8 unaff_x20;
  code *pcVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  code *pcVar23;
  undefined auStack_190 [8];
  long local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  undefined *local_130;
  long local_128;
  long local_120;
  undefined *local_118;
  undefined *local_110;
  long local_108;
  undefined *local_100;
  long local_f8;
  long local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  long local_d8;
  undefined *local_c0;
  undefined *puStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  puVar5 = &DAT_10054e0f8;
  local_e0 = param_1;
  FUN_100002f94(&DAT_10054e0f8,&DAT_10041f030);
  local_108 = *(long *)(puVar5 + -8);
  local_100 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar5 = &DAT_10054e100;
  local_110 = auStack_190 + -extraout_x8;
  FUN_100002f94(&DAT_10054e100,&DAT_10041f038);
  local_f0 = *(long *)(puVar5 + -8);
  puStack_e8 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_f0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)(auStack_190 + -extraout_x8) - extraout_x8_00;
  lVar6 = 0;
  local_f8 = lVar14;
  FUN_10025ee04();
  local_d8 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar14 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_148 = extraout_x12;
  local_140 = lVar14;
  FUN_10006866c();
  local_160 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar14 - (extraout_x12_00 + 0xfU & 0xfffffffffffffff0);
  local_158 = extraout_x12_00;
  local_150 = lVar14;
  UVar8 = Foundation::UUID::typeMetadataAccessor();
  lVar7 = *(long *)(UVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar7 + 0x40));
  lVar14 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_10054a9c0;
  local_188 = lVar14;
  FUN_100002f94(&DAT_10054a9c0,&DAT_100422d20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar14 - extraout_x8_02;
  puVar9 = &DAT_10054ac38;
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = lVar14 - extraout_x8_03;
  puVar9 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar21 = lVar18 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar22 = lVar21 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar22 - extraout_x12_02;
  puVar9 = &DAT_10054e108;
  FUN_100002f94(&DAT_10054e108,&DAT_10041f040);
  local_130 = puVar9;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_10054e170;
  local_138 = lVar20 - extraout_x8_05;
  FUN_100002f94(&DAT_10054e170,&DAT_10041f080);
  local_120 = *(long *)(puVar9 + -8);
  local_118 = puVar9;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_120 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  local_128 = (lVar20 - extraout_x8_05) - extraout_x8_06;
  puVar1 = (undefined8 *)(param_2 + *(int *)(lVar6 + 0x14));
  bVar3 = *(byte *)(param_2 + *(int *)(lVar6 + 0x1c));
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      local_168 = 0xef7473696c2e6574;
      uVar15 = 0x6f6e2e636973756d;
      goto LAB_100060d84;
    }
    local_170 = 0xd000000000000016;
    uVar15 = 0x80000001004dc3b0;
    lVar10 = -0x58;
  }
  else {
    if (bVar3 == 2) {
      local_168 = 0xea00000000006c6c;
      uVar15 = 0x69662e6b636f6c63;
    }
    else {
      local_168 = 0x80000001004dc390;
      uVar15 = 0xd000000000000018;
    }
LAB_100060d84:
    lVar10 = -0x60;
  }
  *(undefined8 *)((long)&local_110 + lVar10) = uVar15;
  local_178 = *puVar1;
  local_180 = puVar1[1];
  FUN_10005f68c(lVar18);
  lVar10 = lVar18;
  (**(code **)(local_d8 + 0x30))(lVar18,1,lVar6);
  if ((int)lVar10 == 1) {
    FUN_10002a29c(lVar18,&DAT_10054ac38,&DAT_10041e8e0);
    pcVar16 = *(code **)(lVar7 + 0x38);
    (*pcVar16)(lVar20,1,1,UVar8.unknown);
    pcVar23 = *(code **)(lVar7 + 0x10);
  }
  else {
    pcVar23 = *(code **)(lVar7 + 0x10);
    (*pcVar23)(lVar20,lVar18,UVar8.unknown);
    FUN_100029548(lVar18,FUN_10025ee04);
    pcVar16 = *(code **)(lVar7 + 0x38);
    (*pcVar16)(lVar20,0,1,UVar8.unknown);
  }
  (*pcVar23)(lVar22,param_2,UVar8.unknown);
  (*pcVar16)(lVar22,0,1,UVar8.unknown);
  lVar6 = (long)*(int *)(puVar5 + 0x30);
  FUN_1000087e4(lVar20,lVar14,&DAT_10054a9c8,&DAT_10041bbe0);
  FUN_1000087e4(lVar22,lVar14 + lVar6,&DAT_10054a9c8,&DAT_10041bbe0);
  pcVar16 = *(code **)(lVar7 + 0x30);
  lVar18 = lVar14;
  (*pcVar16)(lVar14,1,UVar8.unknown);
  if ((int)lVar18 == 1) {
    FUN_10002a29c(lVar22,&DAT_10054a9c8,&DAT_10041bbe0);
    FUN_10002a29c(lVar20,&DAT_10054a9c8,&DAT_10041bbe0);
    lVar6 = lVar14 + lVar6;
    (*pcVar16)(lVar6,1,UVar8.unknown);
    if ((int)lVar6 == 1) {
      FUN_10002a29c(lVar14,&DAT_10054a9c8,&DAT_10041bbe0);
      bVar4 = true;
      goto LAB_100061048;
    }
  }
  else {
    FUN_1000087e4(lVar14,lVar21,&DAT_10054a9c8,&DAT_10041bbe0);
    lVar18 = lVar14 + lVar6;
    (*pcVar16)(lVar18,1,UVar8.unknown);
    lVar10 = local_188;
    if ((int)lVar18 != 1) {
      (**(code **)(lVar7 + 0x20))(local_188,lVar14 + lVar6,UVar8.unknown);
      puVar5 = &DAT_10054a130;
      FUN_1000036d0(&DAT_10054a130,PTR_typeMetadataAccessor_100520bd8,
                    PTR_Foundation__Foundation__UUID_>Swift__Equatable_100520bf8);
      bVar4 = Swift::Equatable::___infix(lVar21,lVar10,UVar8.unknown,puVar5);
      pcVar16 = *(code **)(lVar7 + 8);
      (*pcVar16)(lVar10,UVar8.unknown);
      FUN_10002a29c(lVar22,&DAT_10054a9c8,&DAT_10041bbe0);
      FUN_10002a29c(lVar20,&DAT_10054a9c8,&DAT_10041bbe0);
      (*pcVar16)(lVar21,UVar8.unknown);
      FUN_10002a29c(lVar14,&DAT_10054a9c8,&DAT_10041bbe0);
      goto LAB_100061048;
    }
    FUN_10002a29c(lVar22,&DAT_10054a9c8,&DAT_10041bbe0);
    FUN_10002a29c(lVar20,&DAT_10054a9c8,&DAT_10041bbe0);
    (**(code **)(lVar7 + 8))(lVar21,UVar8.unknown);
  }
  FUN_10002a29c(lVar14,&DAT_10054a9c0,&DAT_100422d20);
  bVar4 = false;
LAB_100061048:
  lVar6 = local_150;
  FUN_100029504(unaff_x20,local_150,FUN_10006866c);
  lVar7 = local_140;
  FUN_100029504(param_2,local_140,FUN_10025ee04);
  bVar3 = *(byte *)(local_160 + 0x50);
  uVar17 = (ulong)bVar3 + 0x10 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  bVar2 = *(byte *)(local_d8 + 0x50);
  uVar19 = local_158 + (ulong)bVar2 + uVar17 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  puVar5 = &DAT_1005273b0;
  _swift_allocObject(&DAT_1005273b0,uVar19 + local_148,bVar3 | bVar2 | 7);
  FUN_100007e64(lVar6,puVar5 + uVar17,FUN_10006866c);
  FUN_100007e64(lVar7,puVar5 + uVar19,FUN_10025ee04);
  uVar15 = local_168;
  local_90 = local_170;
  lStack_88 = local_168;
  local_80 = local_178;
  uStack_78 = local_180;
  local_70 = bVar4;
  _swift_retain(puVar5);
  FUN_100002f94(&DAT_10054e110,&DAT_10041f048);
  FUN_100069704();
  CVar12.unknown = local_110;
  SwiftUI::Button::_init();
  local_a0 = CONCAT71(local_a0._1_7_,bVar4);
  puVar9 = &DAT_10054e160;
  FUN_1000087a0(&DAT_10054e160,&DAT_10054e0f8,&DAT_10041f030,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar11 = puVar9;
  FUN_100003038();
  lVar6 = local_f8;
  puVar13 = local_100;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (local_f8,&local_a0,local_100,&DAT_100525378,puVar9,puVar11);
  (**(code **)(local_108 + 8))(CVar12.unknown,puVar13);
  if (bVar4 == false) {
    CVar12.unknown = (undefined *)0x0;
  }
  else {
    CVar12 = SwiftUI::Color::get_accentColor(CVar12);
  }
  lVar7 = local_138;
  FUN_100357f84(local_138,CVar12.unknown);
  _swift_release(puVar5);
  _swift_bridgeObjectRelease(uVar15);
  _swift_release(CVar12.unknown);
  puVar13 = puStack_e8;
  (**(code **)(local_f0 + 8))();
  FUN_1001d6588();
  local_a0 = lVar6;
  puStack_98 = puVar13;
  FUN_1000699a0();
  lVar18 = lVar6;
  FUN_100026df4();
  lVar14 = local_128;
  puVar9 = local_130;
  puVar5 = PTR___type_metadata_for_Swift_String_100523a98;
  (extension_SwiftUI)::SwiftUI::View::_help
            (local_128,&local_a0,local_130,PTR___type_metadata_for_Swift_String_100523a98,lVar6,
             lVar18);
  _swift_bridgeObjectRelease(puVar13);
  FUN_10002a29c(lVar7,&DAT_10054e108,&DAT_10041f040);
  lStack_88 = param_2;
  FUN_100002f94(&DAT_10054e178,&DAT_10042f440);
  local_c0 = puVar9;
  puStack_b8 = puVar5;
  local_b0 = lVar6;
  lStack_a8 = lVar18;
  _swift_getOpaqueTypeConformance2
            (&local_c0,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help<A_where_A1:_Swift_StringProtocol>(A1)__>_some>>_100523050
             ,1);
  FUN_1000087a0(&DAT_10054e208,&DAT_10054e178,&DAT_10042f440,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  puVar5 = local_118;
  (extension_SwiftUI)::SwiftUI::View::_contextMenu();
  (**(code **)(local_120 + 8))(lVar14,puVar5);
  return;
}

