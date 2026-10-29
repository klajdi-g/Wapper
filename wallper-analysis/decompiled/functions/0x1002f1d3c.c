// rea decompile_all
// name: FUN_1002f1d3c
// address: 0x1002f1d3c
// body: available
// range: 0x1002f1d3c-0x1002f255f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002f1d3c(String *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  String SVar3;
  String SVar4;
  void *pvVar5;
  undefined *puVar6;
  URL UVar7;
  URL UVar8;
  NSString *pNVar9;
  ID IVar10;
  undefined *puVar11;
  uint uVar12;
  undefined8 uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar18;
  long lVar19;
  long unaff_x21;
  ulong uVar20;
  long lVar21;
  URLResourceValues forKeys;
  code *pcVar22;
  long lVar23;
  long lVar24;
  code *pcVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  long local_140;
  undefined *local_138;
  long local_130;
  void *local_d0;
  
  local_138 = (undefined *)Foundation::URLResourceValues::typeMetadataAccessor();
  local_140 = *(long *)(local_138 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_140 + 0x40));
  lVar19 = (long)&local_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar15 = lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_130 = lVar15 - extraout_x12;
  UVar7 = Foundation::URL::typeMetadataAccessor();
  lVar21 = *(long *)(UVar7.unknown + -8);
  UVar8 = UVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar21 + 0x40));
  lVar18 = (lVar15 - extraout_x12) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar18 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar24 = lVar16 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar23 = lVar24 - extraout_x12_02;
  UVar8 = Foundation::URL::deletingPathExtension(UVar8);
  SVar26 = Foundation::URL::get_lastPathComponent(UVar8);
  pcVar22 = *(code **)(lVar21 + 8);
  (*pcVar22)(lVar23,UVar7.unknown);
  puVar6 = PTR___swiftEmptyArrayStorage_100524190;
  UVar8.unknown = (undefined *)0x0;
  FUN_1001c5f18(0,3);
  pvVar5 = DAT_10055b260;
  SVar27.bridgeObject = DAT_10055b260;
  SVar27.str = DAT_10055b258;
  _swift_bridgeObjectRetain(DAT_10055b260);
  Foundation::URL::appendingPathComponent(SVar26,UVar8);
  Foundation::URL::appendingPathExtension(SVar27,UVar8);
  _swift_bridgeObjectRelease(pvVar5);
  (*pcVar22)(lVar23,UVar7.unknown);
  uVar20 = *(ulong *)(puVar6 + 0x10);
  if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar20) {
    FUN_1001c5f18(1 < *(ulong *)(puVar6 + 0x18),uVar20 + 1,1);
  }
  *(ulong *)(puVar6 + 0x10) = uVar20 + 1;
  uVar14 = (ulong)*(byte *)(lVar21 + 0x50) + 0x20 &
           ((ulong)*(byte *)(lVar21 + 0x50) ^ 0xffffffffffffffff);
  lVar17 = *(long *)(lVar21 + 0x48);
  pcVar25 = *(code **)(lVar21 + 0x20);
  UVar8 = UVar7;
  (*pcVar25)(puVar6 + lVar17 * uVar20 + uVar14,lVar24);
  pvVar5 = DAT_10055b270;
  SVar3.bridgeObject = DAT_10055b270;
  SVar3.str = DAT_10055b268;
  _swift_bridgeObjectRetain(DAT_10055b270);
  Foundation::URL::appendingPathComponent(SVar26,UVar8);
  Foundation::URL::appendingPathExtension(SVar3,UVar8);
  _swift_bridgeObjectRelease(pvVar5);
  (*pcVar22)(lVar23,UVar7.unknown);
  uVar20 = *(ulong *)(puVar6 + 0x10);
  if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar20) {
    FUN_1001c5f18(1 < *(ulong *)(puVar6 + 0x18),uVar20 + 1,1);
  }
  local_d0 = SVar26.bridgeObject;
  *(ulong *)(puVar6 + 0x10) = uVar20 + 1;
  UVar8 = UVar7;
  (*pcVar25)(puVar6 + lVar17 * uVar20 + uVar14,lVar24);
  pvVar5 = DAT_10055b280;
  SVar4.bridgeObject = DAT_10055b280;
  SVar4.str = DAT_10055b278;
  _swift_bridgeObjectRetain(DAT_10055b280);
  Foundation::URL::appendingPathComponent(SVar26,UVar8);
  Foundation::URL::appendingPathExtension(SVar4,UVar8);
  _swift_bridgeObjectRelease(pvVar5);
  (*pcVar22)(lVar23,UVar7.unknown);
  uVar20 = *(ulong *)(puVar6 + 0x10);
  if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar20) {
    FUN_1001c5f18(1 < *(ulong *)(puVar6 + 0x18),uVar20 + 1,1);
  }
  *(ulong *)(puVar6 + 0x10) = uVar20 + 1;
  puVar11 = puVar6 + uVar14;
  (*pcVar25)(puVar11 + lVar17 * uVar20,lVar24,UVar7.unknown);
  _swift_arrayDestroy(&DAT_10055b258,3,PTR___type_metadata_for_Swift_String_100523a98);
  uVar20 = *(ulong *)(puVar6 + 0x10);
  if (uVar20 != 0) {
    uVar14 = 0;
    do {
      if (*(ulong *)(puVar6 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x1002f2500);
        (*pcVar22)();
      }
      (**(code **)(lVar21 + 0x10))(lVar16,puVar11,UVar7.unknown);
      (*pcVar25)(lVar18,lVar16,UVar7.unknown);
      UVar8.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
      SVar27 = Foundation::URL::get_path(UVar8);
      pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar27.bridgeObject);
      IVar10 = NSFileManager::fileExistsAtPath_((ID)UVar8.unknown,pNVar9);
      if ((IVar10 & 1) != 0) {
        _swift_release(puVar6);
        lVar16 = local_130;
        (*pcVar25)(local_130,lVar18,UVar7.unknown);
        uVar13 = 0;
        goto LAB_1002f2228;
      }
      uVar14 = uVar14 + 1;
      (*pcVar22)(lVar18,UVar7.unknown);
      puVar11 = puVar11 + lVar17;
    } while (uVar20 != uVar14);
  }
  _swift_release(puVar6);
  uVar13 = 1;
  lVar16 = local_130;
LAB_1002f2228:
  (**(code **)(lVar21 + 0x38))(lVar16,uVar13,1,UVar7.unknown);
  puVar6 = &DAT_100556a80;
  FUN_100002f94(&DAT_100556a80,&DAT_10042ac10);
  iVar1 = *(int *)(puVar6 + 0x50);
  puVar11 = &DAT_10041bf10;
  FUN_100007e1c(lVar16,lVar15,&DAT_100553d90);
  pcVar22 = *(code **)(lVar21 + 0x30);
  lVar16 = lVar15;
  UVar8 = UVar7;
  (*pcVar22)(lVar15,1);
  if ((int)lVar16 == 1) {
    _swift_bridgeObjectRetain();
    SVar28.bridgeObject = (void *)0xe400000000000000;
    SVar28.str = (char *)0x676e702e;
    SVar29.bridgeObject = puVar11;
    SVar29.str = UVar8.unknown;
    Swift::String::append(SVar28,SVar29);
    Foundation::URL::appendingPathComponent(SVar26,UVar8);
    _swift_bridgeObjectRelease(local_d0);
    lVar16 = lVar15;
    (*pcVar22)(lVar15,1,UVar7.unknown);
    if ((int)lVar16 != 1) {
      FUN_10002a29c(lVar15,&DAT_100553d90,&DAT_10041bf10);
    }
  }
  else {
    (*pcVar25)((long)&param_1->str + (long)iVar1,lVar15,UVar7.unknown);
  }
  puVar11 = &DAT_10054d058;
  FUN_100002f94(&DAT_10054d058,&DAT_10042d4b0);
  _swift_initStackObject();
  *(undefined8 *)(puVar11 + 0x18) = 2;
  *(undefined8 *)(puVar11 + 0x10) = 1;
  *(undefined8 *)(puVar11 + 0x20) = *(undefined8 *)PTR__NSURLFileSizeKey_1005215a0;
  forKeys.unknown = puVar11;
  FUN_100266760();
  _swift_setDeallocating(puVar11);
  pcVar22 = FUN_100008040;
  FUN_100029548(puVar11 + 0x20);
  Foundation::URL::_resourceValues((Set<NSURLResourceKey>)forKeys.unknown,(URL)pcVar22);
  if (unaff_x21 == 0) {
    _swift_bridgeObjectRelease();
    uVar12 = (uint)pcVar22;
    Foundation::URLResourceValues::_get_fileSize(forKeys);
    pcVar22 = (code *)local_138;
    (**(code **)(local_140 + 8))(lVar19);
    if ((uVar12 & 0xff) == 1) goto LAB_1002f2420;
  }
  else {
    _swift_errorRelease(unaff_x21);
    _swift_bridgeObjectRelease(forKeys.unknown);
LAB_1002f2420:
    forKeys.unknown = (undefined *)0x0;
  }
  lVar19 = *param_4;
  puVar11 = pcVar22;
  if (*(long *)(lVar19 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar19);
    FUN_1000048c0(param_2);
    puVar11 = pcVar22;
    _swift_bridgeObjectRelease(lVar19);
    if (((ulong)pcVar22 & 1) != 0) goto LAB_1002f24ac;
  }
  uVar13 = param_2;
  FUN_1002f9b2c(param_2);
  lVar19 = *param_4;
  _swift_isUniquelyReferenced_nonNull_native(lVar19);
  lVar15 = *param_4;
  *param_4 = -0x8000000000000000;
  FUN_1003413b8(uVar13,puVar11,param_2,lVar19);
  *param_4 = lVar15;
LAB_1002f24ac:
  iVar1 = *(int *)(puVar6 + 0x30);
  iVar2 = *(int *)(puVar6 + 0x40);
  *param_1 = SVar26;
  (**(code **)(lVar21 + 0x10))((long)&param_1->str + (long)iVar1,param_2,UVar7.unknown);
  *(undefined **)((long)&param_1->str + (long)iVar2) = forKeys.unknown;
  return;
}

