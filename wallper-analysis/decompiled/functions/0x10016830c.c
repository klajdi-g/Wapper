// rea decompile_all
// name: FUN_10016830c
// address: 0x10016830c
// body: available
// range: 0x10016830c-0x1001691db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001001685b0) */

void FUN_10016830c(void)

{
  String *pSVar1;
  long *plVar2;
  double *pdVar3;
  undefined8 uVar4;
  uint uVar5;
  String SVar6;
  ID self;
  DispatchWorkItemFlags qos;
  CharacterSet in;
  bool bVar7;
  Date DVar8;
  undefined *puVar9;
  long lVar10;
  JSONDecoder *pJVar11;
  NSString *pNVar12;
  Date DVar13;
  CharacterSet CVar14;
  long lVar15;
  OS_dispatch_queue *pOVar16;
  DispatchQoS DVar17;
  undefined8 *puVar18;
  char cVar19;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar20;
  long lVar21;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int iVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long unaff_x20;
  code *pcVar26;
  undefined8 uVar27;
  void *pvVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  code *pcVar32;
  undefined8 uVar33;
  long lVar34;
  undefined8 *puVar35;
  long lVar36;
  double dVar37;
  String SVar38;
  long alStack_3a0 [4];
  undefined8 *local_380;
  long local_378;
  uint local_36c;
  undefined *local_368;
  DispatchWorkItemFlags local_360;
  long local_358;
  long local_350;
  undefined *puStack_348;
  long local_340;
  undefined *local_338;
  long local_330;
  long local_328;
  long local_320;
  long local_318;
  long local_310;
  CharacterSet local_308;
  undefined *local_300;
  undefined1 auStack_2d0 [24];
  undefined1 auStack_2b8 [24];
  undefined *local_2a0;
  undefined *local_298;
  code *local_290;
  undefined *puStack_288;
  code *local_280;
  undefined *local_278;
  undefined8 local_270;
  long lStack_268;
  undefined8 local_260;
  long local_258;
  undefined8 local_250;
  long lStack_248;
  double local_240;
  undefined8 local_238;
  double local_230;
  undefined8 uStack_228;
  double local_220;
  undefined8 local_218;
  double local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  long local_1f8;
  double local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined *local_1b0;
  undefined *puStack_1a8;
  undefined8 local_1a0;
  long local_198;
  undefined8 local_190;
  long lStack_188;
  undefined8 local_178;
  long lStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 local_158;
  long lStack_150;
  double dStack_148;
  undefined8 uStack_140;
  double local_138;
  undefined8 uStack_130;
  double dStack_128;
  undefined8 uStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 local_98;
  long lStack_90;
  byte local_88;
  
  local_338 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_340 = *(long *)(local_338 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_340 + 0x40));
  lVar29 = (long)alStack_3a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_358 = lVar29;
  puStack_348 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_350 = *(long *)(puStack_348 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_350 + 0x40));
  puVar20 = (undefined *)(lVar29 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_360.unknown = puVar20;
  DVar8 = Foundation::Date::typeMetadataAccessor();
  lVar21 = *(long *)(DVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar21 + 0x40));
  puVar20 = puVar20 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_368 = puVar20;
  local_300 = (undefined *)Foundation::CharacterSet::typeMetadataAccessor();
  local_330 = *(long *)(local_300 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_330 + 0x40));
  puVar9 = &DAT_10054b950;
  local_308.unknown = puVar20 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar23 = (long)(puVar20 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_318 = lVar23;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar23 = lVar23 - extraout_x12;
  local_310 = lVar23;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar23 = lVar23 - extraout_x12_00;
  local_320 = lVar23;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar23 = lVar23 - extraout_x12_01;
  local_328 = lVar23;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar23 = lVar23 - extraout_x12_02;
  lVar10 = 0;
  FUN_1001698e0();
  lVar30 = *(long *)(lVar10 + -8);
  lVar29 = *(long *)(lVar30 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar34 = lVar23 - (lVar29 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar36 = lVar34 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pJVar11 = Foundation::JSONDecoder::typeMetadataAccessor();
  _swift_allocObject(pJVar11,*(undefined4 *)(pJVar11 + 0x30),*(undefined2 *)(pJVar11 + 0x34));
  pJVar11 = Foundation::JSONDecoder::init(pJVar11);
  FUN_10016a60c();
  Foundation::JSONDecoder::_decode(pJVar11,(Data)0x10052faf0);
  alStack_3a0[1] = lVar30;
  alStack_3a0[2] = lVar29;
  alStack_3a0[3] = lVar34;
  local_380 = (undefined8 *)(lVar36 - extraout_x12_04);
  local_378 = lVar36;
  _swift_release(pJVar11);
  puVar35 = local_380;
  lVar29 = _TtC7Wallper21MediaRemoteController::snapshot;
  puStack_1a8 = puStack_b0;
  local_1b0 = local_b8;
  local_198 = lStack_a0;
  local_1a0 = uStack_a8;
  lStack_188 = lStack_90;
  local_190 = local_98;
  uStack_1e8 = uStack_f0;
  local_1f0 = local_f8;
  local_1d8 = uStack_e0;
  local_1e0 = uStack_e8;
  uStack_1c8 = uStack_d0;
  local_1d0 = local_d8;
  local_1b8 = uStack_c0;
  local_1c0 = uStack_c8;
  uStack_228 = uStack_130;
  local_230 = local_138;
  local_218 = uStack_120;
  local_220 = dStack_128;
  uStack_208 = uStack_110;
  local_210 = local_118;
  local_1f8 = lStack_100;
  local_200 = uStack_108;
  lStack_268 = lStack_170;
  local_270 = local_178;
  local_258 = lStack_160;
  local_260 = uStack_168;
  lStack_248 = lStack_150;
  local_250 = local_158;
  local_238 = uStack_140;
  local_240 = dStack_148;
  local_36c = (uint)local_88;
  if ((local_88 & 1) == 0) {
    local_380[6] = 0;
    puVar18 = local_380 + 2;
    local_380[3] = 0;
    *puVar18 = 0;
    puVar35[5] = 0;
    puVar35[4] = 0;
    puVar35[1] = 0;
    *puVar35 = 0;
    *(undefined1 *)(puVar35 + 7) = 1;
    puVar35[8] = 0;
    *(undefined1 *)(puVar35 + 9) = 1;
    (**(code **)(lVar21 + 0x38))((long)puVar35 + (long)*(int *)(lVar10 + 0x24),1,1,DVar8.unknown);
    lVar29 = local_320;
    puVar18 = (undefined8 *)((long)puVar35 + (long)*(int *)(lVar10 + 0x2c));
    *puVar18 = 0;
    *(undefined1 *)(puVar18 + 1) = 1;
    *(undefined1 *)((long)puVar35 + (long)*(int *)(lVar10 + 0x30)) = 2;
    puVar18 = (undefined8 *)((long)puVar35 + (long)*(int *)(lVar10 + 0x34));
    puVar18[1] = 0xf000000000000000;
    *puVar18 = 0;
    puVar18 = (undefined8 *)((long)puVar35 + (long)*(int *)(lVar10 + 0x38));
    *puVar18 = 0;
    puVar18[1] = 0;
    puVar18 = (undefined8 *)((long)puVar35 + (long)*(int *)(lVar10 + 0x3c));
    *puVar18 = 0;
    *(undefined1 *)(puVar18 + 1) = 1;
    puVar18 = (undefined8 *)((long)puVar35 + (long)*(int *)(lVar10 + 0x40));
    *puVar18 = 0;
    *(undefined1 *)(puVar18 + 1) = 1;
    if (lStack_268 != 0) goto LAB_100168730;
    _swift_bridgeObjectRelease(puVar35[1]);
    *puVar35 = 0;
    puVar35[1] = 0;
    if (local_258 != 0) goto LAB_100168784;
LAB_1001687b4:
    lVar30 = local_310;
    _swift_bridgeObjectRelease(puVar35[3]);
    puVar35[2] = 0;
    puVar35[3] = 0;
    if (lStack_248 != 0) goto LAB_1001687c8;
LAB_1001687e8:
    _swift_bridgeObjectRelease(puVar35[5]);
    puVar35[4] = 0;
    puVar35[5] = 0;
  }
  else {
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21MediaRemoteController::snapshot,auStack_2d0,0,0);
    puVar35 = local_380;
    FUN_10016a70c(unaff_x20 + lVar29,local_380);
    if (lStack_268 == 0) {
      lVar29 = local_320;
      lVar30 = local_310;
      if (local_258 != 0) {
LAB_100168784:
        lVar34 = local_258;
        uVar33 = local_260;
        lVar30 = local_310;
        uVar27 = puVar35[3];
        _swift_bridgeObjectRetain(local_258);
        _swift_bridgeObjectRelease(uVar27);
        puVar35[2] = uVar33;
        puVar35[3] = lVar34;
      }
    }
    else {
LAB_100168730:
      lVar30 = lStack_268;
      uVar33 = local_270;
      lVar29 = local_320;
      uVar27 = puVar35[1];
      _swift_bridgeObjectRetain(lStack_268);
      _swift_bridgeObjectRelease(uVar27);
      *puVar35 = uVar33;
      puVar35[1] = lVar30;
      if (local_258 != 0) goto LAB_100168784;
      lVar30 = local_310;
      if ((local_36c & 1) == 0) goto LAB_1001687b4;
    }
    if (lStack_248 == 0) {
      if ((local_36c & 1) == 0) goto LAB_1001687e8;
    }
    else {
LAB_1001687c8:
      lVar34 = lStack_248;
      uVar33 = local_250;
      uVar27 = puVar35[5];
      _swift_bridgeObjectRetain(lStack_248);
      _swift_bridgeObjectRelease(uVar27);
      puVar35[4] = uVar33;
      puVar35[5] = lVar34;
    }
  }
  lVar34 = local_328;
  if ((char)uStack_228 == '\x01') {
    dVar37 = local_240;
    cVar19 = (char)local_238;
    if ((char)local_238 != '\x01') goto LAB_10016883c;
  }
  else {
    dVar37 = local_230 / 1000000.0;
    cVar19 = '\0';
LAB_10016883c:
    puVar35[6] = dVar37;
    *(char *)(puVar35 + 7) = cVar19;
  }
  bVar7 = (char)uStack_1e8 != '\x01';
  if (bVar7) {
    Foundation::Date::init(local_1f0 / 1000000.0);
  }
  pcVar32 = *(code **)(lVar21 + 0x38);
  (*pcVar32)(lVar34,!bVar7,1,DVar8.unknown);
  FUN_10016a64c(lVar34,lVar29);
  pcVar26 = *(code **)(lVar21 + 0x30);
  lVar15 = lVar29;
  (*pcVar26)(lVar29,1,DVar8.unknown);
  lVar36 = local_1f8;
  lVar34 = DAT_100555670;
  if ((int)lVar15 == 1) {
    if (local_1f8 == 0) {
      (*pcVar32)(lVar23,1,1,DVar8.unknown);
    }
    else {
      _swift_bridgeObjectRetain(local_1f8);
      if (lVar34 != -1) {
        _swift_once(&DAT_100555670,switchD_100169298::caseD_d0);
      }
      self = DAT_100555678;
      pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      DVar13.unknown = (undefined *)objc_stub::dateFromString_(self,pNVar12);
      if (DVar13.unknown != (undefined *)0x0) {
        Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar13);
      }
      (*pcVar32)(lVar23,DVar13.unknown == (undefined *)0x0,1,DVar8.unknown);
      _swift_bridgeObjectRelease(lVar36);
    }
    lVar34 = lVar29;
    (*pcVar26)(lVar29,1,DVar8.unknown);
    if ((int)lVar34 != 1) {
      FUN_10002a29c(lVar29,&DAT_10054b950,&DAT_10041d870);
    }
  }
  else {
    (**(code **)(lVar21 + 0x20))(lVar23,lVar29,DVar8.unknown);
    (*pcVar32)(lVar23,0,1,DVar8.unknown);
  }
  lVar29 = local_318;
  iVar22 = *(int *)(lVar10 + 0x28);
  *(undefined1 *)((long)puVar35 + (long)iVar22) = 0;
  if ((char)uStack_208 == '\x01') {
    dVar37 = local_220;
    cVar19 = (char)local_218;
    if ((char)local_218 != '\x01') goto LAB_100168a28;
  }
  else {
    dVar37 = local_210 / 1000000.0;
    cVar19 = '\0';
LAB_100168a28:
    puVar35[8] = dVar37;
    *(char *)(puVar35 + 9) = cVar19;
    FUN_10016a8f4(lVar23,local_318);
    lVar34 = lVar29;
    (*pcVar26)(lVar29,1,DVar8.unknown);
    if ((int)lVar34 == 1) {
      Foundation::Date::init();
      lVar34 = lVar29;
      (*pcVar26)(lVar29,1,DVar8.unknown);
      if ((int)lVar34 != 1) {
        FUN_10002a29c(lVar29,&DAT_10054b950,&DAT_10041d870);
      }
    }
    else {
      (**(code **)(lVar21 + 0x20))(lVar30,lVar29,DVar8.unknown);
    }
    (*pcVar32)(lVar30,0,1,DVar8.unknown);
    FUN_100127368(lVar30,(long)puVar35 + (long)*(int *)(lVar10 + 0x24));
    *(undefined1 *)((long)puVar35 + (long)iVar22) = 1;
  }
  puVar20 = puStack_1a8;
  puVar9 = local_300;
  in.unknown = local_308.unknown;
  if ((char)local_1d8 != '\x01') {
    puVar18 = (undefined8 *)((long)puVar35 + (long)*(int *)(lVar10 + 0x2c));
    *puVar18 = local_1e0;
    *(char *)(puVar18 + 1) = (char)local_1d8;
  }
  if (local_1d8._1_1_ != '\x02') {
    *(char *)((long)puVar35 + (long)*(int *)(lVar10 + 0x30)) = local_1d8._1_1_;
  }
  if ((char)uStack_1c8 != '\x01') {
    puVar18 = (undefined8 *)((long)puVar35 + (long)*(int *)(lVar10 + 0x3c));
    *puVar18 = local_1d0;
    *(char *)(puVar18 + 1) = (char)uStack_1c8;
  }
  if ((char)local_1b8 != '\x01') {
    puVar18 = (undefined8 *)((long)puVar35 + (long)*(int *)(lVar10 + 0x40));
    *puVar18 = local_1c0;
    *(char *)(puVar18 + 1) = (char)local_1b8;
  }
  if (puStack_1a8 == (undefined *)0x0) {
    if ((local_36c & 1) != 0) goto LAB_100168bfc;
    SVar38 = (String)(ZEXT816(0xf000000000000000) << 0x40);
  }
  else {
    local_2a0 = local_1b0;
    local_298 = puStack_1a8;
    CVar14.unknown = puStack_1a8;
    _swift_bridgeObjectRetain();
    Foundation::CharacterSet::get_whitespacesAndNewlines(CVar14);
    FUN_100026df4();
    SVar38 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
    pvVar28 = SVar38.bridgeObject;
    (**(code **)(local_330 + 8))(in.unknown,puVar9);
    _swift_bridgeObjectRelease(puVar20);
    Foundation::Data::_init((NSDataBase64DecodingOptions)SVar38.str);
    _swift_bridgeObjectRelease(pvVar28);
  }
  pSVar1 = (String *)((long)puVar35 + (long)*(int *)(lVar10 + 0x34));
  FUN_1000a3004(pSVar1->str,pSVar1->bridgeObject);
  *pSVar1 = SVar38;
LAB_100168bfc:
  lVar30 = lStack_188;
  uVar27 = local_190;
  lVar29 = local_198;
  uVar33 = local_1a0;
  if (lStack_188 == 0) {
    _swift_bridgeObjectRetain(local_198);
    FUN_10016a69c(&local_270);
    if ((lVar29 == 0) && (uVar33 = 0, (local_36c & 1) != 0)) {
      lVar29 = unaff_x20 + _TtC7Wallper21MediaRemoteController::snapshot;
      _swift_beginAccess(lVar29,auStack_2b8,0,0);
      puVar18 = (undefined8 *)(lVar29 + *(int *)(lVar10 + 0x38));
      uVar33 = *puVar18;
      lVar29 = puVar18[1];
      _swift_bridgeObjectRetain(lVar29);
    }
  }
  else {
    _swift_bridgeObjectRetain(lStack_188);
    FUN_10016a69c(&local_270);
    lVar29 = lVar30;
    uVar33 = uVar27;
  }
  puVar18 = (undefined8 *)((long)puVar35 + (long)*(int *)(lVar10 + 0x38));
  uVar27 = puVar18[1];
  *puVar18 = uVar33;
  puVar18[1] = lVar29;
  _swift_bridgeObjectRetain(lVar29);
  _swift_bridgeObjectRelease(uVar27);
  lVar30 = _TtC7Wallper21MediaRemoteController::snapshot;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21MediaRemoteController::snapshot,&local_2a0,0x21,0);
  FUN_10016a6c8(puVar35,unaff_x20 + lVar30);
  _swift_endAccess(&local_2a0);
  puVar9 = &DAT_100549eb0;
  FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
  _swift_allocObject();
  lVar30 = local_378;
  *(undefined8 *)(puVar9 + 0x18) = 0x12;
  *(undefined8 *)(puVar9 + 0x10) = 9;
  lVar34 = puVar35[1];
  if (lVar34 == 0) {
    uVar27 = 0;
    lVar36 = -0x2000000000000000;
  }
  else {
    uVar27 = *puVar35;
    lVar36 = lVar34;
  }
  *(undefined8 *)(puVar9 + 0x20) = uVar27;
  *(long *)(puVar9 + 0x28) = lVar36;
  lVar36 = puVar35[3];
  if (lVar36 == 0) {
    uVar27 = 0;
    lVar15 = -0x2000000000000000;
  }
  else {
    uVar27 = puVar35[2];
    lVar15 = lVar36;
  }
  *(undefined8 *)(puVar9 + 0x30) = uVar27;
  *(long *)(puVar9 + 0x38) = lVar15;
  lVar15 = puVar35[5];
  if (lVar15 == 0) {
    uVar27 = 0;
    lVar15 = -0x2000000000000000;
  }
  else {
    uVar27 = puVar35[4];
  }
  *(undefined8 *)(puVar9 + 0x40) = uVar27;
  *(long *)(puVar9 + 0x48) = lVar15;
  bVar7 = (*(byte *)((long)puVar35 + (long)*(int *)(lVar10 + 0x30)) & 1) == 0;
  uVar27 = 0x65757274;
  if (bVar7) {
    uVar27 = 0x65736c6166;
  }
  uVar4 = 0xe400000000000000;
  if (bVar7) {
    uVar4 = 0xe500000000000000;
  }
  *(undefined8 *)(puVar9 + 0x50) = uVar27;
  *(undefined8 *)(puVar9 + 0x58) = uVar4;
  uVar27 = 0;
  if (lVar29 != 0) {
    uVar27 = uVar33;
  }
  lVar15 = -0x2000000000000000;
  if (lVar29 != 0) {
    lVar15 = lVar29;
  }
  *(undefined8 *)(puVar9 + 0x60) = uVar27;
  *(long *)(puVar9 + 0x68) = lVar15;
  plVar2 = (long *)((long)puVar35 + (long)*(int *)(lVar10 + 0x34));
  uVar24 = plVar2[1];
  if (uVar24 >> 0x3c < 0xf) {
    lVar29 = *plVar2;
    uVar5 = (uint)(uVar24 >> 0x20);
    uVar25 = uVar5 >> 0x1e;
    if (uVar5 >> 0x1e < 2) {
      if (uVar25 == 0) {
        puVar20 = (undefined *)(uVar24 >> 0x30 & 0xff);
      }
      else {
        iVar22 = (int)((ulong)lVar29 >> 0x20);
        if (SBORROW4(iVar22,(int)lVar29)) {
                    /* WARNING: Does not return */
          pcVar26 = (code *)SoftwareBreakpoint(1,0x1001691dc);
          (*pcVar26)();
        }
        puVar20 = (undefined *)(long)(iVar22 - (int)lVar29);
      }
    }
    else if (uVar25 == 2) {
      puVar20 = (undefined *)(*(long *)(lVar29 + 0x18) - *(long *)(lVar29 + 0x10));
      if (SBORROW8(*(long *)(lVar29 + 0x18),*(long *)(lVar29 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar26 = (code *)SoftwareBreakpoint(1,0x1001691a4);
        (*pcVar26)();
      }
    }
    else {
      puVar20 = (undefined *)0x0;
    }
  }
  else {
    puVar20 = (undefined *)0x0;
  }
  local_2a0 = puVar20;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(lVar34);
  _swift_bridgeObjectRetain(lVar36);
  SVar38 = Swift::CustomStringConvertible::get_description();
  *(String *)(puVar9 + 0x70) = SVar38;
  dVar37 = -1.0;
  if (*(char *)(puVar35 + 9) != '\x01') {
    dVar37 = (double)puVar35[8];
  }
  SVar38 = double::get_description(dVar37);
  *(String *)(puVar9 + 0x80) = SVar38;
  iVar22 = *(int *)(lVar10 + 0x24);
  lVar29 = (long)puVar35 + (long)iVar22;
  (*pcVar26)(lVar29,1,DVar8.unknown);
  puVar20 = local_368;
  dVar37 = 0.0;
  if ((int)lVar29 == 0) {
    DVar13.unknown = local_368;
    (**(code **)(lVar21 + 0x10))(local_368,(long)puVar35 + (long)iVar22,DVar8.unknown);
    dVar37 = Foundation::Date::get_timeIntervalSince1970(DVar13);
    (**(code **)(lVar21 + 8))(puVar20,DVar8.unknown);
  }
  SVar38 = double::get_description(dVar37);
  *(String *)(puVar9 + 0x90) = SVar38;
  pdVar3 = (double *)((long)puVar35 + (long)*(int *)(lVar10 + 0x2c));
  dVar37 = -1.0;
  if (*(char *)(pdVar3 + 1) != '\x01') {
    dVar37 = *pdVar3;
  }
  SVar38 = double::get_description(dVar37);
  *(String *)(puVar9 + 0xa0) = SVar38;
  local_2a0 = puVar9;
  FUN_100002f94(&DAT_100553858,&DAT_100429e10);
  FUN_1000087a0(&DAT_1005546b8,&DAT_100553858,&DAT_100429e10,
                PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100523b48);
  SVar38.bridgeObject = (void *)0xe100000000000000;
  SVar38.str = (char *)0x7c;
  SVar38 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar38);
  _swift_release(puVar9);
  pSVar1 = (String *)(unaff_x20 + _TtC7Wallper21MediaRemoteController::lastEmittedSignature);
  pvVar28 = pSVar1->bridgeObject;
  if ((pvVar28 == (void *)0x0) ||
     ((SVar6.bridgeObject = pvVar28, SVar6.str = pSVar1->str, SVar38 != SVar6 &&
      (bVar7 = Swift::_stringCompareWithSmolCheck
                         ((_StringGuts)SVar38.str,(_StringGuts)SVar38.bridgeObject,
                          (_StringComparisonResult)(__int8)pSVar1->str), !bVar7)))) {
    *pSVar1 = SVar38;
    _swift_bridgeObjectRelease(pvVar28);
    FUN_10016a70c(puVar35,lVar30);
    pOVar16 = (OS_dispatch_queue *)0x0;
    FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
    (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar16);
    puVar9 = &DAT_10052f760;
    _swift_allocObject(&DAT_10052f760,0x18,7);
    _swift_weakInit(puVar9 + 0x10,unaff_x20);
    lVar29 = alStack_3a0[3];
    FUN_10016a70c(lVar30,alStack_3a0[3]);
    uVar24 = (ulong)*(byte *)(alStack_3a0[1] + 0x50);
    uVar31 = uVar24 + 0x18 & (uVar24 ^ 0xffffffffffffffff);
    puVar20 = &DAT_10052f940;
    _swift_allocObject(&DAT_10052f940,uVar31 + alStack_3a0[2],uVar24 | 7);
    *(undefined **)(puVar20 + 0x10) = puVar9;
    FUN_10016a844(lVar29,puVar20 + uVar31);
    local_280 = FUN_10016a888;
    local_2a0 = PTR___NSConcreteStackBlock_100521110;
    local_298 = (undefined *)0x42000000;
    local_290 = FUN_1000c7e7c;
    puStack_288 = &DAT_10052f958;
    local_278 = puVar20;
    pvVar28 = __Block_copy(&local_2a0);
    DVar17.unknown = local_278;
    _swift_release();
    qos.unknown = local_360.unknown;
    DVar17 = Dispatch::DispatchQoS::get_unspecified(DVar17);
    local_2a0 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1000fedc8();
    puVar9 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar18 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    puVar20 = local_338;
    lVar29 = local_358;
    Swift::SetAlgebra::_init(local_358,&local_2a0,puVar9,puVar18,local_338,DVar17.unknown);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar28);
    (**(code **)(local_340 + 8))(lVar29,puVar20);
    (**(code **)(local_350 + 8))(qos.unknown,puStack_348);
    FUN_10016a8b8(lVar30);
  }
  else {
    _swift_bridgeObjectRelease(SVar38.bridgeObject);
  }
  FUN_10002a29c(lVar23,&DAT_10054b950,&DAT_10041d870);
  FUN_10016a8b8(puVar35);
  return;
}

