// rea decompile_all
// name: FUN_1002cf924
// address: 0x1002cf924
// body: available
// range: 0x1002cf924-0x1002d0427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002cf924(undefined8 *param_1,long *param_2,undefined8 param_3,StringInterpolation param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  ControlSize CVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  Color CVar10;
  char *pcVar11;
  LocalizedStringKey LVar12;
  Text TVar13;
  HierarchicalShapeStyle HVar14;
  State SVar15;
  undefined7 extraout_var;
  undefined8 uVar17;
  Text TVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  long extraout_x8;
  long extraout_x8_00;
  long lVar23;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  code *pcVar24;
  long lVar25;
  long extraout_x12;
  StringInterpolation stringInterpolation;
  long lVar26;
  long lVar27;
  String SVar28;
  String SVar29;
  String stringLiteral;
  String stringLiteral_00;
  undefined8 uStack_1f0;
  undefined2 auStack_1e8 [4];
  long local_1e0 [4];
  undefined4 local_1bc;
  undefined *local_1b8;
  undefined *local_1b0;
  ulong local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined8 local_190;
  undefined *local_188;
  undefined *local_180;
  long local_178;
  uint local_16c;
  undefined8 local_168;
  undefined *local_160;
  long local_158;
  ulong local_150;
  long lStack_148;
  byte local_69;
  void *pvVar16;
  
  puVar7 = &DAT_10054def0;
  FUN_100002f94(&DAT_10054def0,&DAT_100422df0);
  local_1e0[1] = *(long *)(puVar7 + -8);
  local_180 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(local_1e0[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_10055a930;
  local_1e0[0] = (long)local_1e0 - extraout_x8;
  FUN_100002f94(&DAT_10055a930,&DAT_10042eb18);
  local_1a0 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = ((long)local_1e0 - extraout_x8) - extraout_x8_00;
  puVar7 = &DAT_10055a938;
  local_1e0[3] = lVar23;
  FUN_100002f94(&DAT_10055a938,&DAT_10042eb20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = lVar23 - extraout_x8_01;
  puVar8 = &DAT_10055a940;
  FUN_100002f94(&DAT_10055a940,&DAT_10042eb28);
  local_198 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_10054e748;
  local_1e0[2] = lVar23 - extraout_x8_02;
  FUN_100002f94(&DAT_10054e748,&DAT_10041f7f0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = (lVar23 - extraout_x8_02) - extraout_x8_03;
  puVar9 = &DAT_10055a948;
  FUN_100002f94(&DAT_10055a948,&DAT_10042eb30);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar25 = lVar26 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_178 = lVar25;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar25 = lVar25 - extraout_x12;
  local_158 = lVar25;
  CVar10.unknown =
       (undefined *)SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(CVar10.unknown + -8) + 0x40));
  stringInterpolation.unknown = (undefined *)(lVar25 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0))
  ;
  local_160 = (undefined *)SwiftUI::Color::get_blue(CVar10);
  SwiftUI::LocalizedStringKey::StringInterpolation::init(8,1);
  pcVar11 = (char *)0x207265706c6c6157;
  SVar28.bridgeObject = (void *)0xe800000000000000;
  SVar28.str = (char *)0x207265706c6c6157;
  pvVar16 = (void *)0xe800000000000000;
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar28,param_4);
  FUN_10028f000();
  SVar29.bridgeObject = pvVar16;
  SVar29.str = pcVar11;
  SwiftUI::LocalizedStringKey::StringInterpolation::appendInterpolation(SVar29,param_4);
  _swift_bridgeObjectRelease(pvVar16);
  uVar17 = 0xe000000000000000;
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),param_4);
  uVar19 = (uint)param_4.unknown;
  LVar12 = SwiftUI::LocalizedStringKey::init(stringInterpolation);
  *(undefined2 *)(stringInterpolation.unknown + -8) = 0x100;
  *(undefined8 *)(stringInterpolation.unknown + -0x10) = 0;
  uVar19 = uVar19 & 1;
  LVar12.unknown = (undefined *)SwiftUI::Text::_init(LVar12);
  local_190 = uVar17;
  local_188 = LVar12.unknown;
  local_16c = uVar19;
  local_168 = param_5;
  FUN_1002d0428();
  *(undefined2 *)(stringInterpolation.unknown + -8) = 0x100;
  *(undefined8 *)(stringInterpolation.unknown + -0x10) = 0;
  uVar20 = (ulong)(uVar19 & 1);
  TVar13 = SwiftUI::Text::_init(LVar12);
  HVar14 = SwiftUI::HierarchicalShapeStyle::get_secondary(TVar13.unknown);
  local_150 = CONCAT44(local_150._4_4_,(int)HVar14.unknown);
  FUN_100025b4c();
  TVar18 = TVar13;
  uVar21 = uVar17;
  uVar22 = uVar20;
  local_1b0 = (undefined *)SwiftUI::Text::_foregroundStyle();
  local_1bc = (undefined4)uVar21;
  local_1b8 = TVar18.unknown;
  local_1a8 = uVar22;
  FUN_100025b34(TVar13.unknown,uVar17,uVar20);
  _swift_bridgeObjectRelease(param_5);
  lStack_148 = param_2[0x10];
  local_150 = param_2[0xf];
  SVar15.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar15);
  if ((local_69 & 1) == 0) {
    lStack_148 = param_2[0x12];
    local_150 = param_2[0x11];
    SwiftUI::State::get_wrappedValue(SVar15);
    if (local_69 != 1) {
      lVar25 = *param_2;
      if (lVar25 == 0) {
        FUN_1001373cc(0);
        FUN_1000036d0(&DAT_100553de0,FUN_1001373cc,&TargetProtocolConformanceDescriptor_100426ef0);
        SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x1002d0428);
        (*pcVar24)();
      }
      puVar8 = &DAT_10042eb38;
      _swift_getKeyPath(&DAT_10042eb38);
      puVar9 = &DAT_10042eb60;
      _swift_getKeyPath(&DAT_10042eb60);
      _swift_retain(lVar25);
      Combine::Published::_get_subscript(&local_150);
      _swift_release(puVar8);
      _swift_release(puVar9);
      _swift_release(lVar25);
      if ((local_150 & 1) == 0) {
        stringLiteral_00.bridgeObject = (void *)0x80000001004e4b50;
        stringLiteral_00.str = (char *)0xd000000000000011;
        LVar12 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
        puVar7 = &DAT_100538760;
        _swift_allocObject(&DAT_100538760,0xf0,7);
        lVar23 = param_2[0x14];
        lVar26 = param_2[0x17];
        lVar25 = param_2[0x16];
        *(long *)(puVar7 + 0xb8) = param_2[0x15];
        *(long *)(puVar7 + 0xb0) = lVar23;
        *(long *)(puVar7 + 200) = lVar26;
        *(long *)(puVar7 + 0xc0) = lVar25;
        lVar23 = param_2[0x18];
        lVar26 = param_2[0x1b];
        lVar25 = param_2[0x1a];
        *(long *)(puVar7 + 0xd8) = param_2[0x19];
        *(long *)(puVar7 + 0xd0) = lVar23;
        *(long *)(puVar7 + 0xe8) = lVar26;
        *(long *)(puVar7 + 0xe0) = lVar25;
        lVar23 = param_2[0xc];
        lVar26 = param_2[0xf];
        lVar25 = param_2[0xe];
        *(long *)(puVar7 + 0x78) = param_2[0xd];
        *(long *)(puVar7 + 0x70) = lVar23;
        *(long *)(puVar7 + 0x88) = lVar26;
        *(long *)(puVar7 + 0x80) = lVar25;
        lVar23 = param_2[0x10];
        lVar26 = param_2[0x13];
        lVar25 = param_2[0x12];
        *(long *)(puVar7 + 0x98) = param_2[0x11];
        *(long *)(puVar7 + 0x90) = lVar23;
        *(long *)(puVar7 + 0xa8) = lVar26;
        *(long *)(puVar7 + 0xa0) = lVar25;
        lVar23 = param_2[4];
        lVar26 = param_2[7];
        lVar25 = param_2[6];
        *(long *)(puVar7 + 0x38) = param_2[5];
        *(long *)(puVar7 + 0x30) = lVar23;
        *(long *)(puVar7 + 0x48) = lVar26;
        *(long *)(puVar7 + 0x40) = lVar25;
        lVar23 = param_2[8];
        lVar26 = param_2[0xb];
        lVar25 = param_2[10];
        *(long *)(puVar7 + 0x58) = param_2[9];
        *(long *)(puVar7 + 0x50) = lVar23;
        *(long *)(puVar7 + 0x68) = lVar26;
        *(long *)(puVar7 + 0x60) = lVar25;
        lVar23 = *param_2;
        lVar26 = param_2[3];
        lVar25 = param_2[2];
        *(long *)(puVar7 + 0x18) = param_2[1];
        *(long *)(puVar7 + 0x10) = lVar23;
        *(long *)(puVar7 + 0x28) = lVar26;
        *(long *)(puVar7 + 0x20) = lVar25;
        FUN_1002d6478(param_2,&local_150);
        lVar25 = local_1e0[0];
        (extension_SwiftUI)::SwiftUI::Button::_init(LVar12);
        puVar8 = local_180;
        lVar26 = local_1e0[3];
        lVar23 = local_1e0[1];
        (**(code **)(local_1e0[1] + 0x10))(local_1e0[3],lVar25,local_180);
        _swift_storeEnumTagMultiPayload(lVar26,local_1a0,1);
        FUN_1002d6a80();
        FUN_1000087a0(&DAT_100550838,&DAT_10054def0,&DAT_100422df0,
                      PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
        (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar26);
        pcVar24 = *(code **)(lVar23 + 8);
      }
      else {
        stringLiteral.bridgeObject = (void *)0xea0000000000776f;
        stringLiteral.str = (char *)0x4e20657461647055;
        LVar12 = SwiftUI::LocalizedStringKey::init(stringLiteral);
        puVar8 = &DAT_100538788;
        _swift_allocObject(&DAT_100538788,0xf0,7);
        lVar25 = param_2[0x14];
        lVar27 = param_2[0x17];
        lVar26 = param_2[0x16];
        *(long *)(puVar8 + 0xb8) = param_2[0x15];
        *(long *)(puVar8 + 0xb0) = lVar25;
        *(long *)(puVar8 + 200) = lVar27;
        *(long *)(puVar8 + 0xc0) = lVar26;
        lVar25 = param_2[0x18];
        lVar27 = param_2[0x1b];
        lVar26 = param_2[0x1a];
        *(long *)(puVar8 + 0xd8) = param_2[0x19];
        *(long *)(puVar8 + 0xd0) = lVar25;
        *(long *)(puVar8 + 0xe8) = lVar27;
        *(long *)(puVar8 + 0xe0) = lVar26;
        lVar25 = param_2[0xc];
        lVar27 = param_2[0xf];
        lVar26 = param_2[0xe];
        *(long *)(puVar8 + 0x78) = param_2[0xd];
        *(long *)(puVar8 + 0x70) = lVar25;
        *(long *)(puVar8 + 0x88) = lVar27;
        *(long *)(puVar8 + 0x80) = lVar26;
        lVar25 = param_2[0x10];
        lVar27 = param_2[0x13];
        lVar26 = param_2[0x12];
        *(long *)(puVar8 + 0x98) = param_2[0x11];
        *(long *)(puVar8 + 0x90) = lVar25;
        *(long *)(puVar8 + 0xa8) = lVar27;
        *(long *)(puVar8 + 0xa0) = lVar26;
        lVar25 = param_2[4];
        lVar27 = param_2[7];
        lVar26 = param_2[6];
        *(long *)(puVar8 + 0x38) = param_2[5];
        *(long *)(puVar8 + 0x30) = lVar25;
        *(long *)(puVar8 + 0x48) = lVar27;
        *(long *)(puVar8 + 0x40) = lVar26;
        lVar25 = param_2[8];
        lVar27 = param_2[0xb];
        lVar26 = param_2[10];
        *(long *)(puVar8 + 0x58) = param_2[9];
        *(long *)(puVar8 + 0x50) = lVar25;
        *(long *)(puVar8 + 0x68) = lVar27;
        *(long *)(puVar8 + 0x60) = lVar26;
        lVar25 = *param_2;
        lVar27 = param_2[3];
        lVar26 = param_2[2];
        *(long *)(puVar8 + 0x18) = param_2[1];
        *(long *)(puVar8 + 0x10) = lVar25;
        *(long *)(puVar8 + 0x28) = lVar27;
        *(long *)(puVar8 + 0x20) = lVar26;
        FUN_1002d6478(param_2,&local_150);
        lVar25 = local_1e0[0];
        (extension_SwiftUI)::SwiftUI::Button::_init(LVar12);
        puVar8 = local_180;
        lVar26 = local_1e0[1];
        (**(code **)(local_1e0[1] + 0x10))(lVar23,lVar25,local_180);
        _swift_storeEnumTagMultiPayload(lVar23,puVar7,1);
        FUN_10007401c();
        FUN_1000087a0(&DAT_100550838,&DAT_10054def0,&DAT_100422df0,
                      PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
        lVar27 = local_1e0[2];
        (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar23);
        lVar23 = local_1e0[3];
        FUN_1000087e4(lVar27,local_1e0[3],&DAT_10055a940,&DAT_10042eb28);
        _swift_storeEnumTagMultiPayload(lVar23,local_1a0,0);
        FUN_1002d6a80();
        (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar23);
        FUN_10002a29c(lVar27,&DAT_10055a940,&DAT_10042eb28);
        pcVar24 = *(code **)(lVar26 + 8);
      }
      (*pcVar24)(lVar25,puVar8);
      goto LAB_1002d0204;
    }
  }
  (extension_SwiftUI)::SwiftUI::ProgressView::_init();
  iVar2 = *(int *)(puVar8 + 0x24);
  puVar8 = &DAT_10054b210;
  FUN_100002f94(&DAT_10054b210,&DAT_10041c420);
  iVar3 = *(int *)(puVar8 + 0x1c);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_ControlSize_small_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100521cb0
  ;
  CVar6 = SwiftUI::ControlSize::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,CVar6.value) + -8) + 0x68))
            (lVar26 + iVar2 + (long)iVar3,uVar1,CONCAT71(extraout_var,CVar6.value));
  puVar8 = &DAT_10042eb88;
  _swift_getKeyPath();
  *(undefined **)(lVar26 + iVar2) = puVar8;
  FUN_1000087e4(lVar26,lVar23,&DAT_10054e748,&DAT_10041f7f0);
  _swift_storeEnumTagMultiPayload(lVar23,puVar7,0);
  FUN_10007401c();
  FUN_1000087a0(&DAT_100550838,&DAT_10054def0,&DAT_100422df0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  lVar25 = local_1e0[2];
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar23);
  lVar23 = local_1e0[3];
  FUN_1000087e4(lVar25,local_1e0[3],&DAT_10055a940,&DAT_10042eb28);
  _swift_storeEnumTagMultiPayload(lVar23,local_1a0,0);
  FUN_1002d6a80();
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar23);
  FUN_10002a29c(lVar25,&DAT_10055a940,&DAT_10042eb28);
  FUN_10002a29c(lVar26,&DAT_10054e748,&DAT_10041f7f0);
LAB_1002d0204:
  lVar23 = local_178;
  local_180 = (undefined *)0x80000001004ddb70;
  FUN_1000087e4(local_158,local_178,&DAT_10055a948,&DAT_10042eb30);
  puVar5 = local_160;
  uVar17 = local_168;
  puVar4 = local_188;
  uVar21 = local_190;
  uVar22 = local_1a8;
  puVar9 = local_1b0;
  puVar8 = local_1b8;
  uVar1 = local_1bc;
  *param_1 = 0xd000000000000016;
  param_1[1] = 0x80000001004ddb70;
  param_1[2] = 0x4036000000000000;
  param_1[3] = local_160;
  param_1[4] = local_188;
  param_1[5] = local_190;
  *(char *)(param_1 + 6) = (char)local_16c;
  param_1[7] = local_168;
  param_1[8] = local_1b0;
  param_1[9] = local_1b8;
  *(char *)(param_1 + 10) = (char)local_1bc;
  param_1[0xb] = local_1a8;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  puVar7 = &DAT_10055a958;
  FUN_100002f94(&DAT_10055a958,&DAT_10042eb80);
  FUN_1000087e4(lVar23,(long)param_1 + (long)*(int *)(puVar7 + 0x60),&DAT_10055a948,&DAT_10042eb30);
  puVar7 = local_180;
  _swift_bridgeObjectRetain(local_180);
  _swift_retain(puVar5);
  uVar19 = local_16c;
  FUN_100007b14(puVar4,uVar21,local_16c);
  _swift_bridgeObjectRetain(uVar17);
  FUN_100007b14(puVar9,puVar8,uVar1);
  _swift_bridgeObjectRetain(uVar22);
  FUN_10002a29c(local_158,&DAT_10055a948,&DAT_10042eb30);
  FUN_10002a29c(lVar23,&DAT_10055a948,&DAT_10042eb30);
  FUN_100025b34(puVar9,puVar8,uVar1);
  _swift_bridgeObjectRelease(uVar22);
  FUN_100025b34(puVar4,uVar21,uVar19);
  _swift_release(local_160);
  _swift_bridgeObjectRelease(puVar7);
  _swift_bridgeObjectRelease(local_168);
  return;
}

