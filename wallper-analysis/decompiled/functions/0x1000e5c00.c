// rea decompile_all
// name: FUN_1000e5c00
// address: 0x1000e5c00
// body: available
// range: 0x1000e5c00-0x1000e6afb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000e60bc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000e5c00(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  bool bVar6;
  undefined *puVar7;
  URL UVar8;
  AnyView AVar9;
  State SVar10;
  State SVar11;
  Animation AVar12;
  SafeAreaRegions SVar13;
  Set SVar14;
  Color CVar15;
  SafeAreaRegions SVar16;
  UnitPoint UVar17;
  URL UVar18;
  long lVar19;
  long extraout_x8;
  long extraout_x8_00;
  long lVar20;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 *puVar21;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  undefined8 uVar22;
  undefined8 uVar23;
  code *pcVar24;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long lVar25;
  undefined *puVar26;
  URL UVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  String SVar34;
  code *local_2d0 [2];
  long local_2c0;
  long local_2b8;
  long local_2b0;
  long local_2a8;
  undefined *local_2a0;
  long local_298;
  undefined *local_290;
  undefined *local_288;
  undefined8 *local_280;
  long local_278;
  long local_270;
  char *local_268;
  long local_260;
  undefined8 *local_258;
  code *local_250;
  undefined *local_248;
  code *local_240;
  long local_238;
  undefined *local_230;
  undefined8 *local_228;
  long local_220;
  undefined *local_218;
  long local_210;
  long local_208;
  undefined1 auStack_200 [80];
  byte local_1b0;
  undefined7 uStack_1af;
  undefined *puStack_1a8;
  undefined1 local_1a0;
  undefined7 uStack_19f;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 local_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  byte bStack_168;
  undefined *local_160;
  undefined *puStack_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined *local_120;
  byte local_118;
  undefined *local_a0;
  undefined *puStack_98;
  
  puVar7 = &DAT_100551eb8;
  local_208 = param_1;
  FUN_100002f94(&DAT_100551eb8,&DAT_100423ed8);
  local_290 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100551ec0;
  local_280 = (undefined8 *)((long)local_2d0 - extraout_x8);
  FUN_100002f94(&DAT_100551ec0,&DAT_100423ee0);
  local_288 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = ((long)local_2d0 - extraout_x8) - extraout_x8_00;
  puVar7 = &DAT_100551ec8;
  local_298 = lVar20;
  FUN_100002f94(&DAT_100551ec8,&DAT_100423ee8);
  local_218 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar20 - extraout_x8_01;
  puVar7 = &DAT_100551ed0;
  local_278 = lVar20;
  FUN_100002f94(&DAT_100551ed0,&DAT_100423ef0);
  local_230 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar21 = (undefined8 *)(lVar20 - extraout_x8_02);
  lVar20 = 0;
  local_228 = puVar21;
  FUN_10040211c();
  local_250 = *(code **)(lVar20 + -8);
  local_260 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_250 + 0x40));
  lVar20 = (long)puVar21 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100551ed8;
  local_270 = lVar20;
  FUN_100002f94(&DAT_100551ed8,&DAT_100423ef8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar20 = lVar20 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_210 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar20 - extraout_x12;
  puVar7 = &DAT_10054ac40;
  local_220 = lVar20;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  pcVar24 = (code *)(lVar20 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
  local_240 = pcVar24;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar30 = (long)pcVar24 - extraout_x12_00;
  puVar7 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar20 = lVar30 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  local_2b0 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar20 - extraout_x12_01;
  local_2b8 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar26 = (undefined *)(lVar20 - extraout_x12_02);
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar31 = *(long *)(UVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar31 + 0x40));
  UVar27.unknown = puVar26 + -(extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar28 = (long)UVar27.unknown - extraout_x12_03;
  puVar7 = &DAT_100551ee0;
  UVar18.unknown = &DAT_100423f00;
  FUN_100002f94();
  local_248 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar20 = lVar28 - (extraout_x8_08 + 0xfU & 0xfffffffffffffff0);
  local_238 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_258 = (undefined8 *)(lVar20 - extraout_x12_04);
  FUN_1000e3868();
  Foundation::URL::_init();
  _swift_bridgeObjectRelease();
  Foundation::URL::deletingPathExtension(UVar18);
  pcVar24 = *(code **)(lVar31 + 8);
  (*pcVar24)(UVar27.unknown,UVar8.unknown);
  SVar34 = Foundation::URL::get_lastPathComponent(UVar27);
  local_268 = SVar34.str;
  local_2d0[1] = pcVar24;
  local_2c0 = lVar28;
  (*pcVar24)(lVar28,UVar8.unknown);
  FUN_1000e3728(lVar30);
  lVar20 = local_260;
  local_250 = *(code **)((long)local_250 + 0x30);
  lVar28 = lVar30;
  (*local_250)(lVar30,1,local_260);
  bVar6 = (int)lVar28 != 1;
  if (bVar6) {
    (**(code **)(lVar31 + 0x10))(puVar26,lVar30 + *(int *)(lVar20 + 0x14),UVar8.unknown);
    FUN_100029548(lVar30,FUN_10040211c);
  }
  else {
    FUN_10002a29c(lVar30,&DAT_10054ac40,&DAT_10041ce70);
  }
  local_2d0[0] = *(code **)(lVar31 + 0x38);
  local_2a8 = lVar31;
  local_2a0 = UVar8.unknown;
  (*local_2d0[0])(puVar26,!bVar6,1);
  lVar28 = 0;
  FUN_100113f00();
  iVar1 = *(int *)(lVar28 + 0x24);
  local_160 = (undefined *)0x0;
  puVar7 = &DAT_10054bd30;
  FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
  puVar4 = local_258;
  SwiftUI::State::init((long)local_258 + (long)iVar1,puVar7,puVar7);
  local_160 = (undefined *)CONCAT71(local_160._1_7_,1);
  SwiftUI::State::init
            ((long)puVar4 + (long)*(int *)(lVar28 + 0x28),puVar7,
             PTR___type_metadata_for_Swift_Bool_100523b70);
  puVar2 = PTR___type_metadata_for_Swift_Int_100523bd8;
  local_160 = (undefined *)0x0;
  SwiftUI::State::init
            ((long)puVar4 + (long)*(int *)(lVar28 + 0x2c),puVar7,
             PTR___type_metadata_for_Swift_Int_100523bd8);
  local_160 = (undefined *)0x0;
  SwiftUI::State::init((long)puVar4 + (long)*(int *)(lVar28 + 0x30),puVar7,puVar2);
  *puVar4 = local_268;
  puVar4[1] = SVar34.bridgeObject;
  CVar15.unknown = puVar26;
  FUN_1000087e4(puVar26,(long)puVar4 + (long)*(int *)(lVar28 + 0x14),&DAT_100553d90,&DAT_10041bf10);
  *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar28 + 0x18)) = 1;
  puVar21 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar28 + 0x1c));
  *puVar21 = 0;
  *(undefined1 *)(puVar21 + 1) = 1;
  local_160 = (undefined *)SwiftUI::Color::get_clear(CVar15);
  AVar9 = SwiftUI::AnyView::_init
                    (local_160,PTR___type_metadata_for_SwiftUI_Color_100523288,
                     PTR___protocol_witness_table_for_SwiftUI_Color___SwiftUI_View_in_SwiftUI_100523278
                    );
  FUN_10002a29c(puVar26,&DAT_100553d90,&DAT_10041bf10);
  *(undefined **)((long)puVar4 + (long)*(int *)(lVar28 + 0x20)) = AVar9.unknown;
  puStack_98 = (undefined *)param_2[0xe];
  local_a0 = (undefined *)param_2[0xd];
  puStack_158 = (undefined *)param_2[0xe];
  local_160 = (undefined *)param_2[0xd];
  SVar10.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar10);
  uVar33 = 0;
  if (local_1b0 == 0) {
    uVar33 = 0x4032000000000000;
  }
  puVar7 = &DAT_100551ee8;
  FUN_100002f94(&DAT_100551ee8,&DAT_100423f10);
  iVar1 = *(int *)(puVar7 + 0x24);
  *(undefined8 *)((long)puVar4 + (long)iVar1) = uVar33;
  *(undefined1 *)((undefined8 *)((long)puVar4 + (long)iVar1) + 1) = 0;
  puStack_158 = (undefined *)param_2[0xe];
  local_160 = (undefined *)param_2[0xd];
  SVar11.unknown = SVar10.unknown;
  SwiftUI::State::get_wrappedValue(SVar10);
  uVar22 = 0x3ff0f5c28f5c28f6;
  uVar23 = 0x3ff07ae147ae147b;
  uVar33 = uVar23;
  if (local_1b0 == 0) {
    uVar33 = uVar22;
  }
  SwiftUI::UnitPoint::get_center((UnitPoint)SVar11.unknown);
  AVar12.unknown = &DAT_100551ef0;
  uVar32 = uVar23;
  FUN_100002f94(&DAT_100551ef0,&DAT_100423f18);
  puVar21 = (undefined8 *)((long)puVar4 + (long)*(int *)(AVar12.unknown + 0x24));
  *puVar21 = uVar33;
  puVar21[1] = uVar33;
  puVar21[2] = uVar22;
  puVar21[3] = uVar23;
  AVar12 = SwiftUI::Animation::easeOut(0.55,AVar12);
  puStack_158 = (undefined *)param_2[0xe];
  local_160 = (undefined *)param_2[0xd];
  SwiftUI::State::get_wrappedValue(SVar10);
  bVar5 = local_1b0;
  SVar13.unknown = &DAT_100551ef8;
  FUN_100002f94(&DAT_100551ef8,&DAT_100423f20);
  iVar1 = *(int *)(SVar13.unknown + 0x24);
  *(undefined8 *)((long)puVar4 + (long)iVar1) = AVar12.unknown;
  *(byte *)((undefined8 *)((long)puVar4 + (long)iVar1) + 1) = bVar5;
  SVar13 = SwiftUI::SafeAreaRegions::get_all(SVar13);
  SVar14 = SwiftUI::Edge::Set::get_all(SVar13.unknown);
  puVar7 = &DAT_100551f00;
  FUN_100002f94(&DAT_100551f00,&DAT_100423f28);
  CVar15.unknown = local_240;
  iVar1 = *(int *)(puVar7 + 0x24);
  *(undefined8 *)((long)puVar4 + (long)iVar1) = SVar13.unknown;
  *(char *)((undefined8 *)((long)puVar4 + (long)iVar1) + 1) = (char)SVar14.unknown;
  *(undefined1 *)((long)puVar4 + (long)*(int *)(local_248 + 0x24)) = 0;
  FUN_1000e3728(local_240);
  pcVar24 = (code *)CVar15.unknown;
  (*local_250)(CVar15.unknown,1,lVar20);
  lVar28 = local_270;
  if ((int)pcVar24 == 1) {
    FUN_10002a29c(CVar15.unknown,&DAT_10054ac40,&DAT_10041ce70);
    CVar15 = SwiftUI::Color::get_black(CVar15);
    SVar13 = SwiftUI::SafeAreaRegions::get_all(CVar15.unknown);
    SVar14 = SwiftUI::Edge::Set::get_all(SVar13.unknown);
    puVar21 = local_228;
    puVar7 = local_230;
    *local_228 = CVar15.unknown;
    puVar21[1] = SVar13.unknown;
    *(char *)(puVar21 + 2) = (char)SVar14.unknown;
    _swift_storeEnumTagMultiPayload(puVar21,puVar7,1);
    FUN_100002f94(&DAT_100551f08,&DAT_100423f30);
    FUN_1000f864c();
    FUN_1000f8adc();
    lVar20 = local_220;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar21);
    goto LAB_1000e6a00;
  }
  FUN_100007e64(CVar15.unknown,local_270,FUN_10040211c);
  lVar30 = (long)*(int *)(lVar20 + 0x14);
  SVar13.unknown = (undefined *)(lVar28 + lVar30);
  FUN_10004306c();
  lVar20 = local_220;
  if (((uint)SVar13.unknown & 0xff) == 7) {
    puStack_158 = (undefined *)param_2[0x16];
    local_160 = (undefined *)param_2[0x15];
    SVar11.unknown = SVar10.unknown;
    SwiftUI::State::get_wrappedValue(SVar10);
    if ((local_1b0 & 1) == 0) {
      pcVar24 = *(code **)(local_2a8 + 0x10);
      lVar31 = lVar28 + lVar30;
      puVar7 = local_2a0;
LAB_1000e66ec:
      lVar29 = local_298;
      (*pcVar24)(local_298,lVar31,puVar7);
      lVar30 = local_278;
    }
    else {
      UVar18.unknown._0_1_ = Foundation::URL::get_isFileURL((URL)SVar11.unknown);
      puVar7 = local_2a0;
      lVar25 = local_2b8;
      lVar31 = local_2c0;
      UVar18.unknown._1_7_ = (undefined7)((ulong)SVar11.unknown >> 8);
      if (UVar18.unknown._0_1_) {
        (*local_2d0[0])(local_2b8,1,1,local_2a0);
      }
      else {
        UVar18 = Foundation::URL::deletingPathExtension(UVar18);
        SVar34 = Foundation::URL::get_lastPathComponent(UVar18);
        puVar7 = local_2a0;
        (*local_2d0[1])(lVar31,local_2a0);
        lVar25 = local_2b8;
        FUN_100268ac4(SVar34.str,SVar34.bridgeObject);
        _swift_bridgeObjectRelease(SVar34.bridgeObject);
      }
      lVar31 = local_2b0;
      FUN_1000f8c24(lVar25,local_2b0);
      lVar25 = local_2a8;
      local_240 = *(code **)(local_2a8 + 0x30);
      lVar19 = lVar31;
      (*local_240)(lVar31,1,puVar7);
      lVar29 = local_298;
      if ((int)lVar19 != 1) {
        pcVar24 = *(code **)(lVar25 + 0x20);
        goto LAB_1000e66ec;
      }
      (**(code **)(lVar25 + 0x10))(local_298,lVar28 + lVar30,puVar7);
      lVar28 = lVar31;
      (*local_240)(lVar31,1,puVar7);
      lVar30 = local_278;
      if ((int)lVar28 != 1) {
        FUN_10002a29c(lVar31,&DAT_100553d90,&DAT_10041bf10);
      }
    }
    puVar7 = &DAT_10052aa28;
    _swift_allocObject(&DAT_10052aa28,200,7);
    uVar33 = param_2[0x10];
    uVar23 = param_2[0x13];
    uVar22 = param_2[0x12];
    *(undefined8 *)(puVar7 + 0x98) = param_2[0x11];
    *(undefined8 *)(puVar7 + 0x90) = uVar33;
    *(undefined8 *)(puVar7 + 0xa8) = uVar23;
    *(undefined8 *)(puVar7 + 0xa0) = uVar22;
    uVar33 = param_2[0x14];
    *(undefined8 *)(puVar7 + 0xb8) = param_2[0x15];
    *(undefined8 *)(puVar7 + 0xb0) = uVar33;
    *(undefined8 *)(puVar7 + 0xc0) = param_2[0x16];
    uVar33 = param_2[8];
    uVar23 = param_2[0xb];
    uVar22 = param_2[10];
    *(undefined8 *)(puVar7 + 0x58) = param_2[9];
    *(undefined8 *)(puVar7 + 0x50) = uVar33;
    *(undefined8 *)(puVar7 + 0x68) = uVar23;
    *(undefined8 *)(puVar7 + 0x60) = uVar22;
    uVar33 = param_2[0xc];
    uVar23 = param_2[0xf];
    uVar22 = param_2[0xe];
    *(undefined8 *)(puVar7 + 0x78) = param_2[0xd];
    *(undefined8 *)(puVar7 + 0x70) = uVar33;
    *(undefined8 *)(puVar7 + 0x88) = uVar23;
    *(undefined8 *)(puVar7 + 0x80) = uVar22;
    uVar33 = *param_2;
    uVar23 = param_2[3];
    uVar22 = param_2[2];
    *(undefined8 *)(puVar7 + 0x18) = param_2[1];
    *(undefined8 *)(puVar7 + 0x10) = uVar33;
    *(undefined8 *)(puVar7 + 0x28) = uVar23;
    *(undefined8 *)(puVar7 + 0x20) = uVar22;
    uVar33 = param_2[4];
    uVar23 = param_2[7];
    uVar22 = param_2[6];
    *(undefined8 *)(puVar7 + 0x38) = param_2[5];
    *(undefined8 *)(puVar7 + 0x30) = uVar33;
    *(undefined8 *)(puVar7 + 0x48) = uVar23;
    *(undefined8 *)(puVar7 + 0x40) = uVar22;
                    /* WARNING: Load size is inaccurate */
    SVar13.unknown = *PTR__AVLayerVideoGravityResizeAspectFill_1005212a8;
    lVar28 = 0;
    FUN_1003f353c();
    *(undefined1 *)(lVar29 + *(int *)(lVar28 + 0x14)) = 1;
    *(undefined1 *)(lVar29 + *(int *)(lVar28 + 0x18)) = 1;
    *(undefined1 *)(lVar29 + *(int *)(lVar28 + 0x1c)) = 1;
    *(undefined **)(lVar29 + *(int *)(lVar28 + 0x20)) = SVar13.unknown;
    *(undefined1 *)(lVar29 + *(int *)(lVar28 + 0x24)) = 1;
    puVar21 = (undefined8 *)(lVar29 + *(int *)(lVar28 + 0x28));
    *puVar21 = thunk_FUN_1000f8bd0;
    puVar21[1] = puVar7;
    FUN_1000f80c4(param_2,&local_160);
    SVar13 = SwiftUI::SafeAreaRegions::get_all(SVar13);
    SVar14 = SwiftUI::Edge::Set::get_all(SVar13.unknown);
    puVar7 = &DAT_100551f88;
    FUN_100002f94(&DAT_100551f88,&DAT_100423f70);
    iVar1 = *(int *)(puVar7 + 0x24);
    *(undefined8 *)(lVar29 + iVar1) = SVar13.unknown;
    *(char *)((undefined8 *)(lVar29 + iVar1) + 1) = (char)SVar14.unknown;
    puStack_158 = puStack_98;
    local_160 = local_a0;
    SwiftUI::State::get_wrappedValue(SVar10);
    uVar33 = 0x3ff0000000000000;
    if (local_1b0 == 0) {
      uVar33 = 0;
    }
    puVar7 = &DAT_100551f78;
    FUN_100002f94(&DAT_100551f78,&DAT_100423f68);
    *(undefined8 *)(lVar29 + *(int *)(puVar7 + 0x24)) = uVar33;
    puStack_158 = puStack_98;
    local_160 = local_a0;
    SVar11.unknown = SVar10.unknown;
    SwiftUI::State::get_wrappedValue(SVar10);
    uVar23 = 0x3ff07ae147ae147b;
    uVar33 = 0x3ff0000000000000;
    if (local_1b0 == 0) {
      uVar33 = uVar23;
    }
    SwiftUI::UnitPoint::get_center((UnitPoint)SVar11.unknown);
    AVar12.unknown = &DAT_100551f68;
    FUN_100002f94(&DAT_100551f68,&DAT_100423f60);
    puVar21 = (undefined8 *)(lVar29 + *(int *)(AVar12.unknown + 0x24));
    *puVar21 = uVar33;
    puVar21[1] = uVar33;
    puVar21[2] = uVar23;
    puVar21[3] = uVar22;
    AVar12 = SwiftUI::Animation::easeOut(0.55,AVar12);
    puStack_158 = puStack_98;
    local_160 = local_a0;
    SwiftUI::State::get_wrappedValue(SVar10);
    puVar21 = local_280;
    iVar1 = *(int *)(local_288 + 0x24);
    *(undefined8 *)(lVar29 + iVar1) = AVar12.unknown;
    *(byte *)((undefined8 *)(lVar29 + iVar1) + 1) = local_1b0;
    FUN_1000087e4(lVar29,local_280,&DAT_100551ec0,&DAT_100423ee0);
    _swift_storeEnumTagMultiPayload(puVar21,local_290,1);
    FUN_100002f94(&DAT_100551f20,&DAT_100423f38);
    FUN_1000f86c4();
    FUN_1000f88c4();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar21);
    FUN_10002a29c(lVar29,&DAT_100551ec0,&DAT_100423ee0);
    lVar28 = local_270;
  }
  else {
    SVar16 = SwiftUI::SafeAreaRegions::get_all(SVar13);
    SVar14 = SwiftUI::Edge::Set::get_all(SVar16.unknown);
    puStack_158 = puStack_98;
    local_160 = local_a0;
    SwiftUI::State::get_wrappedValue(SVar10);
    uVar33 = 0x3ff0000000000000;
    if (local_1b0 == 0) {
      uVar33 = 0;
    }
    puStack_158 = puStack_98;
    local_160 = local_a0;
    SVar11.unknown = SVar10.unknown;
    SwiftUI::State::get_wrappedValue(SVar10);
    uStack_180 = 0x3ff07ae147ae147b;
    local_190 = 0x3ff0000000000000;
    if (local_1b0 == 0) {
      local_190 = uStack_180;
    }
    UVar17 = SwiftUI::UnitPoint::get_center(SVar11.unknown);
    AVar12 = SwiftUI::Animation::easeOut(0.55,UVar17.unknown);
    puStack_158 = puStack_98;
    local_160 = local_a0;
    SwiftUI::State::get_wrappedValue(SVar10);
    local_1a0 = SUB81(SVar14.unknown,0);
    local_178 = (undefined1)uVar32;
    uStack_177 = (undefined7)((ulong)uVar32 >> 8);
    uStack_170 = SUB81(AVar12.unknown,0);
    uStack_16f = (undefined7)((ulong)AVar12.unknown >> 8);
    bStack_168 = local_1b0;
    local_160 = (undefined *)CONCAT71(local_160._1_7_,(byte)SVar13.unknown);
    local_118 = local_1b0;
    local_1b0 = (byte)SVar13.unknown;
    puStack_1a8 = SVar16.unknown;
    local_198 = uVar33;
    uStack_188 = local_190;
    puStack_158 = SVar16.unknown;
    local_150 = local_1a0;
    local_148 = uVar33;
    uStack_140 = local_190;
    local_138 = local_190;
    uStack_130 = uStack_180;
    local_128 = uVar32;
    local_120 = AVar12.unknown;
    FUN_1000087e4(&local_1b0,auStack_200,&DAT_100551f20,&DAT_100423f38);
    FUN_10002a29c(&local_160,&DAT_100551f20,&DAT_100423f38);
    uVar23 = uStack_180;
    uVar22 = local_190;
    puVar3 = local_280;
    uVar33 = CONCAT71(uStack_177,local_178);
    puVar21 = local_280 + 4;
    local_280[5] = uStack_188;
    *puVar21 = uVar22;
    puVar3[7] = uVar33;
    puVar3[6] = uVar23;
    uVar33 = CONCAT17(uStack_170,uStack_177);
    *(ulong *)((long)puVar3 + 0x41) = CONCAT17(bStack_168,uStack_16f);
    *(undefined8 *)((long)puVar3 + 0x39) = uVar33;
    uVar23 = local_198;
    uVar33 = CONCAT71(uStack_1af,local_1b0);
    uVar22 = CONCAT71(uStack_19f,local_1a0);
    puVar3[1] = puStack_1a8;
    *puVar3 = uVar33;
    puVar3[3] = uVar23;
    puVar3[2] = uVar22;
    _swift_storeEnumTagMultiPayload(puVar3,local_290,0);
    FUN_100002f94(&DAT_100551f20,&DAT_100423f38);
    FUN_1000f86c4();
    FUN_1000f88c4();
    lVar30 = local_278;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar3);
  }
  puVar21 = local_228;
  FUN_1000087e4(lVar30,local_228,&DAT_100551ec8,&DAT_100423ee8);
  _swift_storeEnumTagMultiPayload(puVar21,local_230,0);
  FUN_100002f94(&DAT_100551f08,&DAT_100423f30);
  FUN_1000f864c();
  FUN_1000f8adc();
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar21);
  FUN_10002a29c(lVar30,&DAT_100551ec8,&DAT_100423ee8);
  FUN_100029548(lVar28,FUN_10040211c);
LAB_1000e6a00:
  lVar28 = local_238;
  FUN_1000087e4(puVar4,local_238,&DAT_100551ee0,&DAT_100423f00);
  lVar30 = local_210;
  FUN_1000087e4(lVar20,local_210,&DAT_100551ed8,&DAT_100423ef8);
  lVar31 = local_208;
  FUN_1000087e4(lVar28,local_208,&DAT_100551ee0,&DAT_100423f00);
  puVar7 = &DAT_100551f98;
  FUN_100002f94(&DAT_100551f98,&DAT_100423f78);
  FUN_1000087e4(lVar30,lVar31 + *(int *)(puVar7 + 0x30),&DAT_100551ed8,&DAT_100423ef8);
  FUN_10002a29c(lVar20,&DAT_100551ed8,&DAT_100423ef8);
  FUN_10002a29c(puVar4,&DAT_100551ee0,&DAT_100423f00);
  FUN_10002a29c(lVar30,&DAT_100551ed8,&DAT_100423ef8);
  FUN_10002a29c(lVar28,&DAT_100551ee0,&DAT_100423f00);
  return;
}

