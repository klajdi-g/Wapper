// rea decompile_all
// name: FUN_100333df0
// address: 0x100333df0
// body: available
// range: 0x100333df0-0x100334737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003340b4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100333df0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  Design DVar5;
  RoundedCornerStyle RVar6;
  undefined *puVar7;
  undefined *puVar8;
  VerticalAlignment VVar9;
  undefined *puVar10;
  undefined *puVar11;
  Text TVar12;
  Font FVar13;
  Text TVar14;
  Color CVar15;
  Text TVar16;
  Alignment AVar17;
  Alignment AVar18;
  undefined *puVar19;
  Text TVar20;
  undefined8 uVar21;
  Color CVar22;
  undefined8 *puVar23;
  long extraout_x8;
  long extraout_x8_00;
  long lVar24;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  undefined *puVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long local_210;
  undefined *local_208;
  long local_200;
  undefined *local_1f8;
  long local_1f0;
  undefined *local_1e8;
  undefined4 local_1dc;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined *local_1c8;
  long local_1c0;
  undefined *local_1b8;
  long local_1b0;
  long local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  undefined *local_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined7 uStack_d0;
  undefined1 local_c9;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined7 uStack_c0;
  undefined1 local_b9;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  undefined7 uStack_b0;
  undefined1 local_a9;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  
  puVar7 = &DAT_1005508e0;
  FUN_100002f94(&DAT_1005508e0,&DAT_1004222f0);
  local_200 = *(long *)(puVar7 + -8);
  local_1f8 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_200 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar7 = &DAT_10055ca90;
  local_208 = (undefined *)((long)&local_210 - extraout_x8);
  FUN_100002f94(&DAT_10055ca90,&DAT_100431df8);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = ((long)&local_210 - extraout_x8) - extraout_x8_00;
  puVar8 = &DAT_10055ca98;
  local_1f0 = lVar24;
  FUN_100002f94(&DAT_10055ca98,&DAT_100431e00);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = lVar24 - extraout_x8_01;
  puVar25 = &DAT_10055caa0;
  local_1c0 = lVar24;
  FUN_100002f94(&DAT_10055caa0,&DAT_100431e08);
  local_1c8 = puVar25;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar25 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = lVar24 - extraout_x8_02;
  puVar25 = &DAT_10055caa8;
  local_210 = lVar24;
  FUN_100002f94(&DAT_10055caa8,&DAT_100431e10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar25 + -8) + 0x40));
  lVar24 = lVar24 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar26 = lVar24 - extraout_x12;
  VVar9.unknown = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(VVar9.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_1d8 = (undefined *)SwiftUI::VerticalAlignment::get_center(VVar9);
  SwiftUI::Alignment::get_center((Alignment)local_1d8);
  CVar22.unknown = (undefined *)0x1;
  SwiftUI::_FrameLayout::_init((Alignment)0x4059000000000000);
  uStack_c1 = (undefined1)uStack_90;
  uStack_c0 = (undefined7)((ulong)uStack_90 >> 8);
  local_c9 = (undefined1)local_98;
  uStack_c8 = (undefined7)((ulong)local_98 >> 8);
  uStack_b1 = (undefined1)uStack_80;
  uStack_b0 = (undefined7)((ulong)uStack_80 >> 8);
  local_b9 = (undefined1)local_88;
  uStack_b8 = (undefined7)((ulong)local_88 >> 8);
  uStack_a1 = (undefined1)uStack_70;
  uStack_a0 = (undefined7)((ulong)uStack_70 >> 8);
  local_a9 = SUB81(local_78,0);
  uStack_a8 = (undefined7)((ulong)local_78 >> 8);
  puVar25 = (undefined *)param_2[4];
  local_198 = param_2;
  if (puVar25 != (undefined *)0x0) {
    puVar10 = &DAT_100431b60;
    _swift_getKeyPath();
    puVar11 = &DAT_100431b88;
    _swift_getKeyPath();
    _swift_retain(puVar25);
    puVar19 = puVar10;
    Combine::Published::_get_subscript(&local_190);
    _swift_release(puVar10);
    _swift_release();
    local_1e8 = puVar25;
    local_1d0 = puVar8;
    local_1b8 = puVar7;
    local_1b0 = lVar26;
    local_1a8 = lVar24;
    local_1a0 = param_1;
    if (((byte)local_190 & 1) == 0) {
      FUN_10032d194();
    }
    else {
      puVar19 = (undefined *)0x80000001004e63b0;
      puVar11 = (undefined *)0xd000000000000015;
    }
    local_190 = puVar11;
    puStack_188 = puVar19;
    FUN_100026df4();
    puVar7 = PTR___type_metadata_for_Swift_String_100523a98;
    TVar12 = SwiftUI::Text::_init(puVar11,PTR___type_metadata_for_Swift_String_100523a98,puVar11);
    SwiftUI::Font::Weight::get_regular((Weight)TVar12.unknown);
    DVar5 = SwiftUI::Font::Design::typeMetadataAccessor();
    lVar24 = CONCAT71((int7)((ulong)TVar12.unknown >> 8),DVar5.value);
    (**(code **)(*(long *)(lVar24 + -8) + 0x38))(lVar26 - extraout_x8_04,1,1,lVar24);
    FVar13 = SwiftUI::Font::_system(local_78,(Font)0x0);
    FUN_10002a29c(lVar26 - extraout_x8_04,&DAT_10054a828,&DAT_10041e3c0);
    TVar20 = TVar12;
    puVar8 = puVar7;
    puVar25 = puVar11;
    TVar14 = SwiftUI::Text::_font(FVar13.unknown);
    _swift_release(FVar13.unknown);
    FUN_100025b34(TVar12.unknown,puVar7,puVar11);
    _swift_bridgeObjectRelease();
    CVar22 = SwiftUI::Color::get_white(CVar22);
    CVar15 = SwiftUI::Color::opacity(0.6,CVar22);
    _swift_release(CVar22.unknown);
    TVar12 = TVar14;
    puVar7 = TVar20.unknown;
    puVar10 = puVar8;
    TVar16 = SwiftUI::Text::_foregroundColor(CVar15.unknown);
    _swift_release(CVar15.unknown);
    FUN_100025b34(TVar14.unknown,TVar20.unknown,puVar8);
    _swift_bridgeObjectRelease(puVar25);
    uVar21 = 0;
    TVar20 = TVar16;
    puVar23 = (undefined8 *)TVar12.unknown;
    TVar14 = SwiftUI::Text::_underline(true,(Text)0x0);
    local_1dc = SUB84(TVar20.unknown,0);
    FUN_100025b34(TVar16.unknown,TVar12.unknown,puVar7);
    _swift_bridgeObjectRelease(puVar10);
    puVar7 = &DAT_100431b60;
    _swift_getKeyPath(&DAT_100431b60);
    puVar8 = &DAT_100431b88;
    _swift_getKeyPath(&DAT_100431b88);
    AVar17.unknown = local_1e8;
    Combine::Published::_get_subscript(&local_190,local_1e8,puVar7,puVar8);
    _swift_release(puVar7);
    _swift_release(puVar8);
    _swift_release();
    lVar24 = local_210;
    if ((byte)local_190 == '\x01') {
      local_1e8 = TVar14.unknown;
      FUN_100334738(local_210);
      SwiftUI::Alignment::get_trailing(AVar17);
      SwiftUI::_FrameLayout::_init((Alignment)0x4059000000000000);
      lVar26 = local_1c0;
      puVar1 = (undefined8 *)(lVar24 + *(int *)(local_1c8 + 0x24));
      puVar1[1] = puStack_188;
      *puVar1 = local_190;
      puVar1[3] = uStack_178;
      puVar1[2] = uStack_180;
      puVar1[5] = uStack_168;
      puVar1[4] = local_170;
      puVar7 = &DAT_10055caa0;
      puVar8 = &DAT_100431e08;
      FUN_1000087e4(lVar24,local_1c0,&DAT_10055caa0,&DAT_100431e08);
      _swift_storeEnumTagMultiPayload(lVar26,local_1d0,0);
      FUN_1003362c4();
      FUN_100336570();
      lVar27 = local_1b0;
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar26);
      TVar14.unknown = local_1e8;
    }
    else {
      puVar7 = &DAT_10053b058;
      _swift_allocObject(&DAT_10053b058,0xd0,7);
      uVar28 = local_198[0x10];
      uVar30 = local_198[0x13];
      uVar29 = local_198[0x12];
      *(undefined8 *)(puVar7 + 0x98) = local_198[0x11];
      *(undefined8 *)(puVar7 + 0x90) = uVar28;
      *(undefined8 *)(puVar7 + 0xa8) = uVar30;
      *(undefined8 *)(puVar7 + 0xa0) = uVar29;
      uVar28 = local_198[0x14];
      uVar30 = local_198[0x17];
      uVar29 = local_198[0x16];
      *(undefined8 *)(puVar7 + 0xb8) = local_198[0x15];
      *(undefined8 *)(puVar7 + 0xb0) = uVar28;
      *(undefined8 *)(puVar7 + 200) = uVar30;
      *(undefined8 *)(puVar7 + 0xc0) = uVar29;
      uVar28 = local_198[8];
      uVar30 = local_198[0xb];
      uVar29 = local_198[10];
      *(undefined8 *)(puVar7 + 0x58) = local_198[9];
      *(undefined8 *)(puVar7 + 0x50) = uVar28;
      *(undefined8 *)(puVar7 + 0x68) = uVar30;
      *(undefined8 *)(puVar7 + 0x60) = uVar29;
      uVar28 = local_198[0xc];
      uVar30 = local_198[0xf];
      uVar29 = local_198[0xe];
      *(undefined8 *)(puVar7 + 0x78) = local_198[0xd];
      *(undefined8 *)(puVar7 + 0x70) = uVar28;
      *(undefined8 *)(puVar7 + 0x88) = uVar30;
      *(undefined8 *)(puVar7 + 0x80) = uVar29;
      uVar28 = *local_198;
      uVar30 = local_198[3];
      uVar29 = local_198[2];
      *(undefined8 *)(puVar7 + 0x18) = local_198[1];
      *(undefined8 *)(puVar7 + 0x10) = uVar28;
      *(undefined8 *)(puVar7 + 0x28) = uVar30;
      *(undefined8 *)(puVar7 + 0x20) = uVar29;
      uVar28 = local_198[4];
      uVar30 = local_198[7];
      uVar29 = local_198[6];
      *(undefined8 *)(puVar7 + 0x38) = local_198[5];
      *(undefined8 *)(puVar7 + 0x30) = uVar28;
      *(undefined8 *)(puVar7 + 0x48) = uVar30;
      *(undefined8 *)(puVar7 + 0x40) = uVar29;
      FUN_100336150(local_198,&local_190);
      FUN_100002f94(&DAT_10054a840,&DAT_100422300);
      FUN_1000fbd60();
      CVar22.unknown = local_208;
      SwiftUI::Button::_init();
      FUN_1000087a0(&DAT_100550900,&DAT_1005508e0,&DAT_1004222f0,
                    PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
      FUN_100037164();
      lVar24 = local_1f0;
      puVar7 = local_1f8;
      local_198 = puVar23;
      (extension_SwiftUI)::SwiftUI::View::_buttonStyle(local_1f0);
      (**(code **)(local_200 + 8))(CVar22.unknown,puVar7);
      CVar22 = SwiftUI::Color::get_white(CVar22);
      puVar7 = &DAT_100550908;
      FUN_100002f94(&DAT_100550908,&DAT_100422310);
      *(undefined **)(lVar24 + *(int *)(puVar7 + 0x24)) = CVar22.unknown;
      puVar7 = &DAT_10055b828;
      FUN_100002f94(&DAT_10055b828,&DAT_100431e20);
      puVar8 = (undefined *)(lVar24 + *(int *)(puVar7 + 0x24));
      uVar2 = *(undefined4 *)
               PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
      ;
      RVar6 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
      lVar26 = CONCAT71((int7)((ulong)puVar7 >> 8),RVar6.value);
      CVar22.unknown = puVar8;
      (**(code **)(*(long *)(lVar26 + -8) + 0x68))(puVar8,uVar2,lVar26);
      CVar22 = SwiftUI::Color::get_blue(CVar22);
      CVar15 = SwiftUI::Color::opacity(0.96,CVar22);
      _swift_release(CVar22.unknown);
      AVar17.unknown = &DAT_10054b118;
      puVar7 = &DAT_10041f7b0;
      FUN_100002f94();
      *(undefined **)(puVar8 + *(int *)(AVar17.unknown + 0x34)) = CVar15.unknown;
      *(undefined2 *)(puVar8 + *(int *)(AVar17.unknown + 0x38)) = 0x100;
      AVar18 = SwiftUI::Alignment::get_center(AVar17);
      AVar17.unknown = &DAT_10054e1b0;
      FUN_100002f94(&DAT_10054e1b0,&DAT_10041f0a0);
      iVar3 = *(int *)(AVar17.unknown + 0x24);
      *(undefined **)(puVar8 + iVar3) = AVar18.unknown;
      *(undefined **)((long)(puVar8 + iVar3) + 8) = puVar7;
      SwiftUI::Alignment::get_trailing(AVar17);
      SwiftUI::_FrameLayout::_init((Alignment)0x4059000000000000);
      lVar26 = local_1c0;
      puVar23 = (undefined8 *)(lVar24 + *(int *)(local_1b8 + 0x24));
      puVar23[1] = puStack_188;
      *puVar23 = local_190;
      puVar23[3] = uStack_178;
      puVar23[2] = uStack_180;
      puVar23[5] = uStack_168;
      puVar23[4] = local_170;
      puVar7 = &DAT_10055ca90;
      puVar8 = &DAT_100431df8;
      FUN_1000087e4(lVar24,local_1c0,&DAT_10055ca90,&DAT_100431df8);
      _swift_storeEnumTagMultiPayload(lVar26,local_1d0,1);
      FUN_1003362c4();
      FUN_100336570();
      lVar27 = local_1b0;
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar26);
      puVar23 = local_198;
    }
    FUN_10002a29c(lVar24,puVar7,puVar8);
    lVar24 = local_1a8;
    FUN_1000087e4(lVar27,local_1a8,&DAT_10055caa8,&DAT_100431e10);
    puVar1 = local_1a0;
    uVar2 = local_1dc;
    *(ulong *)((long)local_1a0 + 0x19) = CONCAT17(uStack_c1,uStack_c8);
    *(ulong *)((long)local_1a0 + 0x11) = CONCAT17(local_c9,uStack_d0);
    *local_1a0 = local_1d8;
    local_1a0[1] = 0;
    *(undefined1 *)(local_1a0 + 2) = 1;
    *(ulong *)((long)local_1a0 + 0x29) = CONCAT17(uStack_b1,uStack_b8);
    *(ulong *)((long)local_1a0 + 0x21) = CONCAT17(local_b9,uStack_c0);
    *(ulong *)((long)local_1a0 + 0x39) = CONCAT17(uStack_a1,uStack_a8);
    *(ulong *)((long)local_1a0 + 0x31) = CONCAT17(local_a9,uStack_b0);
    local_1a0[8] = CONCAT71(uStack_a0,uStack_a1);
    local_1a0[9] = 0;
    *(undefined1 *)(local_1a0 + 10) = 1;
    local_1a0[0xb] = TVar14.unknown;
    local_1a0[0xc] = uVar21;
    *(char *)(local_1a0 + 0xd) = (char)local_1dc;
    local_1a0[0xe] = puVar23;
    local_1a0[0xf] = 0;
    *(undefined1 *)(local_1a0 + 0x10) = 1;
    puVar7 = &DAT_10055cb10;
    FUN_100002f94(&DAT_10055cb10,&DAT_100431e50);
    FUN_1000087e4(lVar24,(long)puVar1 + (long)*(int *)(puVar7 + 0x60),&DAT_10055caa8,&DAT_100431e10)
    ;
    FUN_100007b14(TVar14.unknown,uVar21,uVar2);
    _swift_bridgeObjectRetain(puVar23);
    FUN_10002a29c(lVar27,&DAT_10055caa8,&DAT_100431e10);
    FUN_10002a29c(lVar24,&DAT_10055caa8,&DAT_100431e10);
    FUN_100025b34(TVar14.unknown,uVar21,uVar2);
    _swift_bridgeObjectRelease(puVar23);
    return;
  }
  FUN_10014e37c(0);
  FUN_1000036d0(&DAT_100553148,FUN_10014e37c,&TargetProtocolConformanceDescriptor_100427f04);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100334738);
  (*pcVar4)();
}

