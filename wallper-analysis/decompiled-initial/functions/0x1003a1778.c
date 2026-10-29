// rea decompile_all
// name: FUN_1003a1778
// address: 0x1003a1778
// body: available
// range: 0x1003a1778-0x1003a2777 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003a1778(long param_1,long param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  undefined1 *puVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  UUID UVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  Divider DVar13;
  ButtonRole BVar14;
  long extraout_x8;
  long extraout_x8_00;
  long lVar15;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long lVar19;
  long *unaff_x20;
  ulong uVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  ulong uVar24;
  code *pcVar25;
  undefined1 auStack_180 [8];
  long local_178;
  long local_170;
  long local_168;
  ulong local_160;
  undefined *local_158;
  long local_150;
  undefined *local_148;
  long local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 *local_128;
  long local_120;
  long local_118;
  undefined *local_110;
  ulong local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  ulong local_a8;
  long local_a0;
  long local_98;
  byte local_69 [9];
  
  puVar6 = &DAT_10054dee8;
  local_118 = param_1;
  local_b8 = param_2;
  FUN_100002f94(&DAT_10054dee8,&DAT_10041ed20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_128 = auStack_180 + -extraout_x8;
  local_110 = (undefined *)SwiftUI::Divider::typeMetadataAccessor();
  local_d8 = *(long *)(local_110 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d8 + 0x40));
  lVar17 = (long)(auStack_180 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12;
  local_c8 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12_00;
  local_e0 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12_01;
  lVar7 = 0;
  FUN_10025ee04();
  local_140 = *(long *)(lVar7 + -8);
  local_170 = lVar7;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar17 - (extraout_x12_02 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_10055f4c0;
  local_b0 = lVar15;
  FUN_100002f94(&DAT_10055f4c0,&DAT_100434c90);
  local_148 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar15 - extraout_x8_01;
  puVar6 = &DAT_10055f4c8;
  local_168 = lVar15;
  FUN_100002f94(&DAT_10055f4c8,&DAT_100434c98);
  local_158 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar15 - extraout_x8_02;
  lVar7 = 0;
  local_150 = lVar15;
  FUN_10039c2bc();
  local_a8 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar15 - (extraout_x12_03 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100553210;
  local_138 = (undefined *)lVar15;
  local_108 = extraout_x12_03;
  FUN_100002f94(&DAT_100553210,&DAT_1004365b0);
  local_c0 = *(long *)(puVar6 + -8);
  local_130 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c0 + 0x40));
  lVar15 = lVar15 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_120 = lVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar15 - extraout_x12_04;
  local_e8 = lVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar15 - extraout_x12_05;
  local_f0 = lVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar15 - extraout_x12_06;
  local_100 = lVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar15 - extraout_x12_07;
  local_98 = lVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar15 - extraout_x12_08;
  puVar6 = &DAT_10055f4d0;
  FUN_100002f94(&DAT_10055f4d0,&DAT_100434ca0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar7 = lVar15 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_f8 = lVar7;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar7 = lVar7 - extraout_x12_09;
  local_a0 = lVar7;
  UVar8 = Foundation::UUID::typeMetadataAccessor();
  lVar23 = *(long *)(UVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar23 + 0x40));
  lVar7 = lVar7 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_10054a9c0;
  local_178 = lVar7;
  FUN_100002f94(&DAT_10054a9c0,&DAT_100422d20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar7 - extraout_x8_06;
  puVar9 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar18 = lVar7 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
  local_160 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - extraout_x12_10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = lVar18 - extraout_x12_11;
  lVar19 = *unaff_x20;
  if (lVar19 == 0) {
    FUN_1001b7378(0);
    FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar25 = (code *)SoftwareBreakpoint(1,0x1003a2778);
    (*pcVar25)();
  }
  puVar9 = &DAT_100434c48;
  _swift_getKeyPath(&DAT_100434c48);
  puVar10 = &DAT_100434c70;
  _swift_getKeyPath(&DAT_100434c70);
  _swift_retain(lVar19);
  Combine::Published::_get_subscript(local_69);
  _swift_release(puVar9);
  _swift_release(puVar10);
  _swift_release(lVar19);
  if ((local_69[0] & 1) == 0) {
    puVar9 = &DAT_100434a80;
    _swift_getKeyPath(&DAT_100434a80);
    puVar10 = &DAT_100434aa8;
    _swift_getKeyPath(&DAT_100434aa8);
    _swift_retain(lVar19);
    Combine::Published::_get_subscript(lVar21);
    _swift_release(lVar19);
    _swift_release(puVar9);
    _swift_release(puVar10);
    (**(code **)(lVar23 + 0x10))(lVar18,local_b8,UVar8.unknown);
    (**(code **)(lVar23 + 0x38))(lVar18,0,1,UVar8.unknown);
    lVar19 = (long)*(int *)(puVar6 + 0x30);
    FUN_1000087e4(lVar21,lVar7,&DAT_10054a9c8,&DAT_10041bbe0);
    FUN_1000087e4(lVar18,lVar7 + lVar19,&DAT_10054a9c8,&DAT_10041bbe0);
    pcVar25 = *(code **)(lVar23 + 0x30);
    lVar11 = lVar7;
    (*pcVar25)(lVar7,1,UVar8.unknown);
    uVar20 = local_160;
    if ((int)lVar11 == 1) {
      FUN_10002a29c(lVar18,&DAT_10054a9c8,&DAT_10041bbe0);
      FUN_10002a29c(lVar21,&DAT_10054a9c8,&DAT_10041bbe0);
      lVar19 = lVar7 + lVar19;
      (*pcVar25)(lVar19,1,UVar8.unknown);
      if ((int)lVar19 != 1) {
LAB_1003a1e00:
        FUN_10002a29c(lVar7,&DAT_10054a9c0,&DAT_100422d20);
        goto LAB_1003a1e18;
      }
      FUN_10002a29c(lVar7,&DAT_10054a9c8,&DAT_10041bbe0);
    }
    else {
      FUN_1000087e4(lVar7,local_160,&DAT_10054a9c8,&DAT_10041bbe0);
      lVar11 = lVar7 + lVar19;
      (*pcVar25)(lVar11,1,UVar8.unknown);
      lVar3 = local_178;
      if ((int)lVar11 == 1) {
        FUN_10002a29c(lVar18,&DAT_10054a9c8,&DAT_10041bbe0);
        FUN_10002a29c(lVar21,&DAT_10054a9c8,&DAT_10041bbe0);
        (**(code **)(lVar23 + 8))(uVar20,UVar8.unknown);
        goto LAB_1003a1e00;
      }
      (**(code **)(lVar23 + 0x20))(local_178,lVar7 + lVar19,UVar8.unknown);
      puVar6 = &DAT_10054a130;
      FUN_1000036d0(&DAT_10054a130,PTR_typeMetadataAccessor_100520bd8,
                    PTR_Foundation__Foundation__UUID_>Swift__Equatable_100520bf8);
      bVar5 = Swift::Equatable::___infix(uVar20,lVar3,UVar8.unknown,puVar6);
      pcVar25 = *(code **)(lVar23 + 8);
      (*pcVar25)(lVar3,UVar8.unknown);
      FUN_10002a29c(lVar18,&DAT_10054a9c8,&DAT_10041bbe0);
      FUN_10002a29c(lVar21,&DAT_10054a9c8,&DAT_10041bbe0);
      (*pcVar25)(uVar20,UVar8.unknown);
      FUN_10002a29c(lVar7,&DAT_10054a9c8,&DAT_10041bbe0);
      if (!bVar5) goto LAB_1003a1e18;
    }
    puVar10 = local_138;
    FUN_100029504(unaff_x20,local_138,FUN_10039c2bc);
    local_160 = (ulong)*(byte *)(local_a8 + 0x50);
    uVar20 = local_160 + 0x10 & (local_160 ^ 0xffffffffffffffff);
    puVar6 = &DAT_10053ce60;
    _swift_allocObject(&DAT_10053ce60,uVar20 + local_108,local_160 | 7);
    local_a8 = uVar20;
    FUN_100007e64(puVar10,puVar6 + uVar20,FUN_10039c2bc);
    FUN_100002f94(&DAT_10054b570,&DAT_100433140);
    FUN_1000087a0(&DAT_10054b568,&DAT_10054b570,&DAT_100433140,
                  PTR_SwiftUI__SwiftUI__Label<undefined,undefined>_>SwiftUI__View_100523358);
    SwiftUI::Button::_init();
    lVar18 = local_c0;
    puVar6 = local_130;
    lVar7 = local_150;
    (**(code **)(local_c0 + 0x10))(local_150,lVar15,local_130);
    _swift_storeEnumTagMultiPayload(lVar7,local_158,0);
    FUN_1000087a0(&DAT_100553208,&DAT_100553210,&DAT_1004365b0,
                  PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
    FUN_1003a6934();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar7);
    (**(code **)(lVar18 + 8))(lVar15,puVar6);
    lVar19 = local_140;
    lVar21 = local_b8;
  }
  else {
LAB_1003a1e18:
    puVar10 = local_138;
    FUN_100029504(unaff_x20,local_138,FUN_10039c2bc);
    lVar7 = local_b0;
    lVar21 = local_b8;
    FUN_100029504(local_b8,local_b0,FUN_10025ee04);
    lVar19 = local_140;
    local_160 = (ulong)*(byte *)(local_a8 + 0x50);
    uVar16 = local_160 + 0x10 & (local_160 ^ 0xffffffffffffffff);
    bVar2 = *(byte *)(local_140 + 0x50);
    uVar20 = local_108 + bVar2 + uVar16 & ((ulong)bVar2 ^ 0xffffffffffffffff);
    puVar6 = &DAT_10053cd98;
    _swift_allocObject(&DAT_10053cd98,uVar20 + extraout_x12_02,
                       *(byte *)(local_a8 + 0x50) | bVar2 | 7);
    local_a8 = uVar16;
    FUN_100007e64(puVar10,puVar6 + uVar16,FUN_10039c2bc);
    FUN_100007e64(lVar7,puVar6 + uVar20,FUN_10025ee04);
    FUN_100002f94(&DAT_10054b570,&DAT_100433140);
    FUN_1000087a0(&DAT_10054b568,&DAT_10054b570,&DAT_100433140,
                  PTR_SwiftUI__SwiftUI__Label<undefined,undefined>_>SwiftUI__View_100523358);
    lVar7 = local_168;
    SwiftUI::Button::_init();
    lVar23 = *(long *)(*(long *)(lVar21 + *(int *)(local_170 + 0x20)) + 0x10);
    puVar6 = &DAT_100434ca8;
    _swift_getKeyPath();
    puVar9 = &DAT_10053cdc0;
    _swift_allocObject(&DAT_10053cdc0,0x11,7);
    lVar18 = local_150;
    puVar9[0x10] = lVar23 == 0;
    puVar1 = (undefined8 *)(lVar7 + *(int *)(local_148 + 0x24));
    *puVar1 = puVar6;
    puVar1[1] = FUN_10006bca0;
    puVar1[2] = puVar9;
    FUN_1000087e4(lVar7,local_150,&DAT_10055f4c0,&DAT_100434c90);
    _swift_storeEnumTagMultiPayload(lVar18,local_158,1);
    FUN_1000087a0(&DAT_100553208,&DAT_100553210,&DAT_1004365b0,
                  PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
    FUN_1003a6934();
    puVar6 = local_130;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar18);
    FUN_10002a29c(lVar7,&DAT_10055f4c0,&DAT_100434c90);
  }
  SwiftUI::Divider::init();
  FUN_100029504(unaff_x20,puVar10,FUN_10039c2bc);
  lVar7 = local_b0;
  FUN_100029504(lVar21,local_b0,FUN_10025ee04);
  uVar20 = local_a8;
  uVar16 = (ulong)*(byte *)(lVar19 + 0x50);
  uVar24 = local_108 + uVar16 + local_a8 & (uVar16 ^ 0xffffffffffffffff);
  local_108 = local_160 | uVar16;
  puVar9 = &DAT_10053cde8;
  _swift_allocObject(&DAT_10053cde8,uVar24 + extraout_x12_02,local_108 | 7);
  FUN_100007e64(puVar10,puVar9 + uVar20,FUN_10039c2bc);
  FUN_100007e64(lVar7,puVar9 + uVar24,FUN_10025ee04);
  puVar9 = &DAT_10054b570;
  FUN_100002f94(&DAT_10054b570,&DAT_100433140);
  puVar12 = &DAT_10054b568;
  FUN_1000087a0(&DAT_10054b568,&DAT_10054b570,&DAT_100433140,
                PTR_SwiftUI__SwiftUI__Label<undefined,undefined>_>SwiftUI__View_100523358);
  local_138 = puVar12;
  local_130 = puVar9;
  SwiftUI::Button::_init();
  FUN_100029504(unaff_x20,puVar10,FUN_10039c2bc);
  lVar7 = local_b0;
  FUN_100029504(lVar21,local_b0,FUN_10025ee04);
  puVar9 = &DAT_10053ce10;
  _swift_allocObject(&DAT_10053ce10,uVar24 + extraout_x12_02,local_108 | 7);
  uVar20 = local_a8;
  FUN_100007e64(puVar10,puVar9 + local_a8,FUN_10039c2bc);
  FUN_100007e64(lVar7,puVar9 + uVar24,FUN_10025ee04);
  SwiftUI::Button::_init();
  DVar13 = SwiftUI::Divider::init();
  puVar4 = local_128;
  SwiftUI::ButtonRole::get_destructive((ButtonRole)DVar13.unknown);
  BVar14 = SwiftUI::ButtonRole::typeMetadataAccessor();
  (**(code **)(*(long *)(BVar14.unknown + -8) + 0x38))(puVar4,0,1,BVar14.unknown);
  FUN_100029504(unaff_x20,puVar10,FUN_10039c2bc);
  FUN_100029504(local_b8,lVar7,FUN_10025ee04);
  puVar9 = &DAT_10053ce38;
  _swift_allocObject(&DAT_10053ce38,uVar24 + extraout_x12_02,local_108 | 7);
  FUN_100007e64(puVar10,puVar9 + uVar20,FUN_10039c2bc);
  FUN_100007e64(lVar7,puVar9 + uVar24,FUN_10025ee04);
  lVar18 = local_100;
  SwiftUI::Button::_init();
  lVar19 = local_f8;
  FUN_1000087e4(local_a0,local_f8,&DAT_10055f4d0,&DAT_100434ca0);
  lVar11 = local_c8;
  puVar10 = local_110;
  pcVar25 = *(code **)(local_d8 + 0x10);
  (*pcVar25)(local_c8,lVar17,local_110);
  pcVar22 = *(code **)(local_c0 + 0x10);
  (*pcVar22)(local_f0,lVar15,puVar6);
  lVar21 = local_e8;
  (*pcVar22)(local_e8,local_98,puVar6);
  lVar23 = local_e0;
  (*pcVar25)(local_d0,local_e0,puVar10);
  lVar7 = local_120;
  (*pcVar22)(local_120,lVar18,puVar6);
  lVar18 = local_118;
  FUN_1000087e4(lVar19,local_118,&DAT_10055f4d0,&DAT_100434ca0);
  puVar9 = &DAT_10055f4e0;
  FUN_100002f94(&DAT_10055f4e0,&DAT_100434cd8);
  (*pcVar25)(lVar18 + *(int *)(puVar9 + 0x30),lVar11,puVar10);
  lVar19 = local_f0;
  (*pcVar22)(lVar18 + *(int *)(puVar9 + 0x40),local_f0,puVar6);
  (*pcVar22)(lVar18 + *(int *)(puVar9 + 0x50),lVar21,puVar6);
  lVar21 = local_d0;
  (*pcVar25)(lVar18 + *(int *)(puVar9 + 0x60),local_d0,puVar10);
  (*pcVar22)(lVar18 + *(int *)(puVar9 + 0x70),lVar7,puVar6);
  pcVar25 = *(code **)(local_c0 + 8);
  (*pcVar25)(local_100,puVar6);
  pcVar22 = *(code **)(local_d8 + 8);
  (*pcVar22)(lVar23,puVar10);
  (*pcVar25)(local_98,puVar6);
  (*pcVar25)(lVar15,puVar6);
  (*pcVar22)(lVar17,puVar10);
  FUN_10002a29c(local_a0,&DAT_10055f4d0,&DAT_100434ca0);
  (*pcVar25)(lVar7,puVar6);
  (*pcVar22)(lVar21,puVar10);
  (*pcVar25)(local_e8,puVar6);
  (*pcVar25)(lVar19,puVar6);
  (*pcVar22)(local_c8,puVar10);
  FUN_10002a29c(local_f8,&DAT_10055f4d0,&DAT_100434ca0);
  return;
}

