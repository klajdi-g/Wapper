// rea decompile_all
// name: FUN_100030fa8
// address: 0x100030fa8
// body: available
// range: 0x100030fa8-0x1000319ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010003123c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100030fa8(long param_1,Alignment param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  char cVar6;
  undefined3 uVar7;
  undefined *puVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  URL UVar17;
  undefined *puVar18;
  Color CVar19;
  AnyView AVar20;
  CGSize CVar21;
  State SVar22;
  Animation AVar23;
  undefined *puVar24;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar25;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 uVar26;
  GeometryProxy GVar27;
  ulong uVar28;
  undefined8 *puVar29;
  Alignment width;
  undefined8 uVar30;
  undefined8 uStack_290;
  code *local_288 [2];
  long local_278 [4];
  undefined *local_258;
  long local_250;
  long local_248;
  long local_240;
  undefined *local_238;
  undefined *local_230;
  long local_228;
  long local_220;
  undefined8 *local_218;
  long local_210;
  long local_208;
  undefined8 local_200;
  char local_1f8 [96];
  char local_198;
  undefined7 uStack_197;
  undefined8 uStack_190;
  undefined1 local_188;
  undefined7 uStack_187;
  undefined8 uStack_180;
  undefined1 local_178;
  undefined7 uStack_177;
  undefined8 uStack_170;
  undefined *local_168;
  undefined2 uStack_160;
  undefined1 uStack_15e;
  undefined5 uStack_15d;
  code *local_158;
  undefined *puStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined *local_138;
  undefined8 uStack_130;
  undefined1 local_128;
  undefined7 uStack_127;
  undefined8 uStack_120;
  undefined1 local_118;
  undefined7 uStack_117;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined2 local_100;
  undefined1 local_fe;
  code *local_f8;
  undefined *puStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined *puStack_80;
  
  puVar15 = &DAT_10054bd10;
  local_208 = param_1;
  local_200 = param_4;
  FUN_100002f94(&DAT_10054bd10,&DAT_10041d440);
  local_238 = puVar15;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = 0;
  local_218 = (undefined8 *)((long)&uStack_290 - extraout_x8);
  FUN_100038a80();
  local_250 = *(long *)(lVar16 + -8);
  local_278[2] = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = ((long)&uStack_290 - extraout_x8) - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  puVar15 = &DAT_10054bd18;
  local_248 = extraout_x12;
  local_240 = lVar16;
  FUN_100002f94(&DAT_10054bd18,&DAT_10041d448);
  local_230 = puVar15;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar16 - extraout_x8_00;
  puVar15 = &DAT_10054bd20;
  local_278[0] = lVar16;
  FUN_100002f94(&DAT_10054bd20,&DAT_10041d450);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar15 + -8) + 0x40));
  lVar16 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_210 = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar16 - extraout_x12_00;
  puVar15 = &DAT_100553d90;
  local_220 = lVar16;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  GVar27.unknown = (undefined *)(lVar16 - extraout_x8_02);
  puVar15 = &DAT_10054bd28;
  puVar24 = &DAT_10041d458;
  FUN_100002f94();
  local_258 = puVar15;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar15 + -8) + 0x40));
  lVar16 = (long)GVar27.unknown - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_228 = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar29 = (undefined8 *)(lVar16 - extraout_x12_01);
  local_278[1] = param_3;
  FUN_100030ae0();
  lVar16 = 0;
  FUN_10040211c();
  iVar5 = *(int *)(lVar16 + 0x14);
  local_278[3] = (long)iVar5;
  UVar17 = Foundation::URL::typeMetadataAccessor();
  lVar16 = *(long *)(UVar17.unknown + -8);
  local_288[1] = *(code **)(lVar16 + 0x10);
  (*local_288[1])(GVar27.unknown,param_3 + iVar5,UVar17.unknown);
  (**(code **)(lVar16 + 0x38))(GVar27.unknown,0,1,UVar17.unknown);
  lVar16 = 0;
  FUN_100113f00();
  iVar5 = *(int *)(lVar16 + 0x24);
  local_138 = (undefined *)0x0;
  puVar18 = &DAT_10054bd30;
  FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
  SwiftUI::State::init((long)puVar29 + (long)iVar5,puVar18,puVar18);
  local_138 = (undefined *)CONCAT71(local_138._1_7_,1);
  SwiftUI::State::init
            ((long)puVar29 + (long)*(int *)(lVar16 + 0x28),puVar18,
             PTR___type_metadata_for_Swift_Bool_100523b70);
  puVar8 = PTR___type_metadata_for_Swift_Int_100523bd8;
  local_138 = (undefined *)0x0;
  SwiftUI::State::init
            ((long)puVar29 + (long)*(int *)(lVar16 + 0x2c),puVar18,
             PTR___type_metadata_for_Swift_Int_100523bd8);
  lVar11 = local_278[2];
  local_138 = (undefined *)0x0;
  SwiftUI::State::init((long)puVar29 + (long)*(int *)(lVar16 + 0x30),puVar18,puVar8);
  *puVar29 = puVar15;
  puVar29[1] = puVar24;
  CVar19.unknown = GVar27.unknown;
  FUN_1000087e4(GVar27.unknown,(long)puVar29 + (long)*(int *)(lVar16 + 0x14),&DAT_100553d90,
                &DAT_10041bf10);
  *(undefined1 *)((long)puVar29 + (long)*(int *)(lVar16 + 0x18)) = 1;
  puVar1 = (undefined8 *)((long)puVar29 + (long)*(int *)(lVar16 + 0x1c));
  *puVar1 = 0x500;
  *(undefined1 *)(puVar1 + 1) = 0;
  local_138 = (undefined *)SwiftUI::Color::get_clear(CVar19);
  AVar20 = SwiftUI::AnyView::_init
                     (local_138,PTR___type_metadata_for_SwiftUI_Color_100523288,
                      PTR___protocol_witness_table_for_SwiftUI_Color___SwiftUI_View_in_SwiftUI_100523278
                     );
  FUN_10002a29c(GVar27.unknown,&DAT_100553d90,&DAT_10041bf10);
  *(undefined **)((long)puVar29 + (long)*(int *)(lVar16 + 0x20)) = AVar20.unknown;
  CVar21 = SwiftUI::GeometryProxy::get_size(GVar27);
  CVar21 = SwiftUI::GeometryProxy::get_size(CVar21.unknown);
  SwiftUI::Alignment::get_center((Alignment)CVar21.unknown);
  SwiftUI::_FrameLayout::_init(param_2);
  puVar15 = &DAT_10054bd38;
  FUN_100002f94(&DAT_10054bd38,&DAT_100422740);
  puVar1 = (undefined8 *)((long)puVar29 + (long)*(int *)(puVar15 + 0x24));
  puVar1[1] = uStack_d0;
  *puVar1 = local_d8;
  puVar1[3] = uStack_c0;
  puVar1[2] = local_c8;
  puVar1[5] = uStack_b0;
  puVar1[4] = local_b8;
  puVar15 = &DAT_10054bd40;
  FUN_100002f94(&DAT_10054bd40,&DAT_10041d470);
  *(undefined2 *)((long)puVar29 + (long)*(int *)(puVar15 + 0x24)) = 0;
  lVar16 = local_278[1];
  pbVar2 = (byte *)(local_278[1] + *(int *)(lVar11 + 0x20));
  bVar3 = *pbVar2;
  uVar26 = *(undefined8 *)(pbVar2 + 8);
  SVar22.unknown = &DAT_10054ab50;
  uStack_130 = uVar26;
  local_138._0_1_ = bVar3;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar22);
  uVar30 = 0;
  if (local_198 == '\0') {
    uVar30 = 0x4030000000000000;
  }
  AVar23.unknown = &DAT_10054bd48;
  FUN_100002f94(&DAT_10054bd48,&DAT_10041d478);
  iVar5 = *(int *)(AVar23.unknown + 0x24);
  *(undefined8 *)((long)puVar29 + (long)iVar5) = uVar30;
  *(undefined1 *)((undefined8 *)((long)puVar29 + (long)iVar5) + 1) = 0;
  width.unknown = (undefined *)0x3fe0000000000000;
  AVar23 = SwiftUI::Animation::easeOut(0.5,AVar23);
  local_138 = (undefined *)CONCAT71(local_138._1_7_,bVar3);
  uStack_290._4_4_ = (uint)bVar3;
  local_288[0] = (code *)uVar26;
  uStack_130 = uVar26;
  SwiftUI::State::get_wrappedValue(SVar22);
  puVar15 = &DAT_10054bd50;
  FUN_100002f94(&DAT_10054bd50,&DAT_10041d480);
  iVar5 = *(int *)(puVar15 + 0x24);
  *(undefined8 *)((long)puVar29 + (long)iVar5) = AVar23.unknown;
  *(char *)((undefined8 *)((long)puVar29 + (long)iVar5) + 1) = local_198;
  lVar12 = local_278[3];
  *(undefined1 *)((long)puVar29 + (long)*(int *)(local_258 + 0x24)) = 0;
  GVar27.unknown = (undefined *)(lVar16 + lVar12);
  FUN_10004306c();
  lVar10 = local_278[0];
  if (((uint)GVar27.unknown & 0xff) == 7) {
    (*local_288[1])(local_278[0],lVar16 + lVar12,UVar17.unknown);
    lVar12 = local_240;
    uVar4 = *(undefined1 *)(lVar16 + *(int *)(lVar11 + 0x18));
    FUN_100029504(lVar16,local_240,FUN_100038a80);
    uVar25 = (ulong)*(byte *)(local_250 + 0x50);
    uVar28 = uVar25 + 0x10 & (uVar25 ^ 0xffffffffffffffff);
    puVar15 = &DAT_100526228;
    _swift_allocObject(&DAT_100526228,uVar28 + local_248,uVar25 | 7);
    FUN_100007e64(lVar12,puVar15 + uVar28,FUN_100038a80);
                    /* WARNING: Load size is inaccurate */
    GVar27.unknown = *PTR__AVLayerVideoGravityResizeAspectFill_1005212a8;
    lVar16 = 0;
    FUN_1003f353c();
    *(undefined1 *)(lVar10 + *(int *)(lVar16 + 0x14)) = uVar4;
    *(undefined1 *)(lVar10 + *(int *)(lVar16 + 0x18)) = 1;
    *(undefined1 *)(lVar10 + *(int *)(lVar16 + 0x1c)) = 1;
    *(undefined **)(lVar10 + *(int *)(lVar16 + 0x20)) = GVar27.unknown;
    *(undefined1 *)(lVar10 + *(int *)(lVar16 + 0x24)) = 1;
    puVar1 = (undefined8 *)(lVar10 + *(int *)(lVar16 + 0x28));
    *puVar1 = thunk_FUN_1000395d0;
    puVar1[1] = puVar15;
    CVar21 = SwiftUI::GeometryProxy::get_size(GVar27);
    CVar21 = SwiftUI::GeometryProxy::get_size(CVar21.unknown);
    SwiftUI::Alignment::get_center((Alignment)CVar21.unknown);
    SwiftUI::_FrameLayout::_init(width);
    puVar15 = &DAT_10054bd58;
    FUN_100002f94(&DAT_10054bd58,&DAT_10041d488);
    puVar1 = (undefined8 *)(lVar10 + *(int *)(puVar15 + 0x24));
    puVar1[1] = uStack_130;
    *puVar1 = local_138;
    puVar1[3] = uStack_120;
    puVar1[2] = CONCAT71(uStack_127,local_128);
    puVar1[5] = uStack_110;
    puVar1[4] = CONCAT71(uStack_117,local_118);
    puVar15 = &DAT_10054bd60;
    FUN_100002f94(&DAT_10054bd60,&DAT_10041d490);
    pcVar9 = local_288[0];
    *(undefined2 *)(lVar10 + *(int *)(puVar15 + 0x24)) = 0;
    cVar6 = (char)uStack_290._4_4_;
    uStack_190 = local_288[0];
    local_198 = cVar6;
    SwiftUI::State::get_wrappedValue(SVar22);
    uVar26 = 0x3ff0000000000000;
    if (local_1f8[0] == '\0') {
      uVar26 = 0;
    }
    AVar23.unknown = &DAT_10054bd68;
    FUN_100002f94(&DAT_10054bd68,&DAT_10041d498);
    *(undefined8 *)(lVar10 + *(int *)(AVar23.unknown + 0x24)) = uVar26;
    AVar23 = SwiftUI::Animation::easeOut(0.5,AVar23);
    uStack_190 = pcVar9;
    local_198 = cVar6;
    SwiftUI::State::get_wrappedValue(SVar22);
    puVar15 = &DAT_10054bd70;
    FUN_100002f94(&DAT_10054bd70,&DAT_10041d4a0);
    puVar1 = local_218;
    iVar5 = *(int *)(puVar15 + 0x24);
    *(undefined8 *)(lVar10 + iVar5) = AVar23.unknown;
    *(char *)((undefined8 *)(lVar10 + iVar5) + 1) = local_1f8[0];
    *(undefined1 *)(lVar10 + *(int *)(local_230 + 0x24)) = 0;
    FUN_1000087e4(lVar10,local_218,&DAT_10054bd18,&DAT_10041d448);
    _swift_storeEnumTagMultiPayload(puVar1,local_238,1);
    FUN_100002f94(&DAT_10054bd78,&DAT_10041d4a8);
    FUN_1000390e0();
    FUN_100039320();
    lVar16 = local_220;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar1);
    FUN_10002a29c(lVar10,&DAT_10054bd18,&DAT_10041d448);
  }
  else {
    CVar21 = SwiftUI::GeometryProxy::get_size(GVar27);
    CVar21 = SwiftUI::GeometryProxy::get_size(CVar21.unknown);
    SwiftUI::Alignment::get_center((Alignment)CVar21.unknown);
    SwiftUI::_FrameLayout::_init(width);
    lVar11 = local_240;
    local_200 = local_88;
    local_258 = puStack_80;
    FUN_100029504(lVar16,local_240,FUN_100038a80);
    uVar25 = (ulong)*(byte *)(local_250 + 0x50);
    uVar28 = uVar25 + 0x10 & (uVar25 ^ 0xffffffffffffffff);
    puVar15 = &DAT_100526250;
    _swift_allocObject(&DAT_100526250,uVar28 + local_248,uVar25 | 7);
    FUN_100007e64(lVar11,puVar15 + uVar28,FUN_100038a80);
    local_198 = (char)GVar27.unknown;
    uStack_190 = local_a8;
    local_188 = local_a0;
    uStack_180 = local_98;
    local_178 = local_90;
    uStack_170 = local_200;
    local_168 = local_258;
    uStack_160 = 0;
    uStack_15e = 0;
    local_158 = thunk_FUN_1000395d0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = (undefined *)CONCAT71(local_138._1_7_,local_198);
    uStack_130 = local_a8;
    local_128 = local_a0;
    uStack_120 = local_98;
    local_118 = local_90;
    uStack_110 = local_200;
    puStack_108 = local_258;
    local_100 = 0;
    local_fe = 0;
    local_f8 = thunk_FUN_1000395d0;
    local_e8 = 0;
    uStack_e0 = 0;
    puStack_150 = puVar15;
    puStack_f0 = puVar15;
    FUN_1000087e4(&local_198,local_1f8,&DAT_10054bd78,&DAT_10041d4a8);
    FUN_10002a29c(&local_138,&DAT_10054bd78,&DAT_10041d4a8);
    puVar15 = local_168;
    puVar13 = local_218;
    uVar26 = CONCAT71(uStack_177,local_178);
    uVar7 = CONCAT12(uStack_15e,uStack_160);
    puVar1 = local_218 + 4;
    local_218[5] = uStack_170;
    *puVar1 = uVar26;
    puVar13[7] = CONCAT53(uStack_15d,uVar7);
    puVar13[6] = puVar15;
    uVar30 = uStack_140;
    uVar26 = local_148;
    pcVar9 = local_158;
    puVar13[9] = puStack_150;
    puVar13[8] = pcVar9;
    puVar13[0xb] = uVar30;
    puVar13[10] = uVar26;
    uVar14 = uStack_180;
    uVar26 = CONCAT71(uStack_197,local_198);
    uVar30 = CONCAT71(uStack_187,local_188);
    puVar13[1] = uStack_190;
    *puVar13 = uVar26;
    puVar13[3] = uVar14;
    puVar13[2] = uVar30;
    _swift_storeEnumTagMultiPayload(puVar13,local_238,0);
    FUN_100002f94(&DAT_10054bd78,&DAT_10041d4a8);
    FUN_1000390e0();
    FUN_100039320();
    lVar16 = local_220;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar13);
  }
  lVar11 = local_228;
  FUN_1000087e4(puVar29,local_228,&DAT_10054bd28,&DAT_10041d458);
  lVar10 = local_210;
  FUN_1000087e4(lVar16,local_210,&DAT_10054bd20,&DAT_10041d450);
  lVar12 = local_208;
  FUN_1000087e4(lVar11,local_208,&DAT_10054bd28,&DAT_10041d458);
  puVar15 = &DAT_10054be00;
  FUN_100002f94(&DAT_10054be00,&DAT_10041d4c8);
  FUN_1000087e4(lVar10,lVar12 + *(int *)(puVar15 + 0x30),&DAT_10054bd20,&DAT_10041d450);
  FUN_10002a29c(lVar16,&DAT_10054bd20,&DAT_10041d450);
  FUN_10002a29c(puVar29,&DAT_10054bd28,&DAT_10041d458);
  FUN_10002a29c(lVar10,&DAT_10054bd20,&DAT_10041d450);
  FUN_10002a29c(lVar11,&DAT_10054bd28,&DAT_10041d458);
  return;
}

