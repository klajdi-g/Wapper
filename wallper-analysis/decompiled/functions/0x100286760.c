// rea decompile_all
// name: FUN_100286760
// address: 0x100286760
// body: available
// range: 0x100286760-0x100287223 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100287220 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100286d7c) */
/* WARNING: Removing unreachable block (ram,0x0001002871f0) */
/* WARNING: Removing unreachable block (ram,0x000100286dac) */
/* WARNING: Removing unreachable block (ram,0x0001002870f8) */
/* WARNING: Removing unreachable block (ram,0x000100286e08) */
/* WARNING: Removing unreachable block (ram,0x000100287138) */

void FUN_100286760(undefined8 param_1)

{
  bool bVar1;
  undefined1 auVar2 [16];
  Encoding encoding;
  void *pvVar3;
  Locale LVar4;
  URL UVar5;
  ID IVar6;
  URL UVar7;
  NSString *pNVar8;
  NSURL *pNVar9;
  Locale LVar10;
  NSLocale *pNVar11;
  Date DVar12;
  URL UVar13;
  Encoding EVar14;
  char *pcVar15;
  undefined *puVar16;
  Logger LVar17;
  OS_os_log *pOVar18;
  OS_os_log *pOVar19;
  OS_os_log *pOVar20;
  undefined4 *puVar21;
  char *pcVar22;
  char *pcVar23;
  undefined8 uVar24;
  undefined8 uVar26;
  URL UVar27;
  long extraout_x8;
  long lVar28;
  long extraout_x8_00;
  undefined *puVar29;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  code *pcVar34;
  long lVar35;
  long lVar36;
  String SVar37;
  String identifier;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  long local_140;
  long local_138;
  long local_130;
  undefined *local_128;
  Encoding local_120;
  long local_118;
  undefined *local_110;
  URL local_108;
  code *local_100;
  undefined8 local_f8;
  long local_f0;
  undefined *local_e8;
  long local_e0;
  long local_d8;
  ID local_d0;
  undefined1 local_a8 [24];
  undefined1 auStack_90 [16];
  String local_80;
  long local_70;
  void *pvVar25;
  
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  local_f8 = param_1;
  local_e8 = (undefined *)os::Logger::typeMetadataAccessor();
  local_f0 = *(long *)(local_e8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  lVar28 = (long)&local_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_138 = lVar28;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar28 = lVar28 - extraout_x12;
  local_140 = lVar28;
  local_110 = (undefined *)Encoding::_typeMetadataAccessor();
  local_118 = *(long *)(local_110 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_118 + 0x40));
  puVar29 = (undefined *)(lVar28 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_120.unknown = puVar29;
  local_128 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_130 = *(long *)(local_128 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_130 + 0x40));
  lVar30 = (long)puVar29 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  LVar4 = Foundation::Locale::typeMetadataAccessor();
  lVar32 = *(long *)(LVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar32 + 0x40));
  lVar36 = lVar30 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar29 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar29 + -8) + 0x40));
  lVar31 = lVar36 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar35 = lVar31 - extraout_x12_00;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar33 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar33 + 0x40));
  puVar29 = (undefined *)(lVar35 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  local_108.unknown = puVar29;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar28 = (long)puVar29 - extraout_x12_01;
  local_e0 = lVar28;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_d8 = lVar28 - extraout_x12_02;
  local_d0 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar6 = NSFileManager::URLsForDirectory_inDomains_(local_d0,0xe,1);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  bVar1 = *(long *)(IVar6 + 0x10) == 0;
  if (bVar1) {
    _swift_bridgeObjectRelease(IVar6);
  }
  else {
    (**(code **)(lVar33 + 0x10))
              (lVar35,IVar6 + ((ulong)*(byte *)(lVar33 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar33 + 0x50) ^ 0xffffffffffffffff)),UVar5.unknown)
    ;
    _swift_bridgeObjectRelease(IVar6);
  }
  local_100 = *(code **)(lVar33 + 0x38);
  UVar27 = UVar5;
  (*local_100)(lVar35,bVar1,1);
  FUN_1000f8c24(lVar35,lVar31);
  pcVar34 = *(code **)(lVar33 + 0x30);
  lVar35 = lVar31;
  (*pcVar34)(lVar31,1,UVar5.unknown);
  lVar28 = local_d8;
  if ((int)lVar35 == 1) {
    UVar7.unknown = (undefined *)objc_stub::temporaryDirectory(local_d0);
    lVar28 = local_d8;
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar7);
    lVar35 = lVar31;
    (*pcVar34)(lVar31,1,UVar5.unknown);
    if ((int)lVar35 != 1) {
      FUN_10002a29c(lVar31,&DAT_100553d90,&DAT_10041bf10);
    }
  }
  else {
    (**(code **)(lVar33 + 0x20))(local_d8,lVar31,UVar5.unknown);
  }
  lVar31 = local_e0;
  SVar37.bridgeObject = (void *)0xe700000000000000;
  SVar37.str = (char *)0x7265706c6c6157;
  UVar7 = Foundation::URL::appendingPathComponent(SVar37,true,UVar27);
  SVar37 = Foundation::URL::get_path(UVar7);
  pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar37.bridgeObject);
  IVar6 = objc_stub::fileExistsAtPath_(local_d0,pNVar8);
  if ((IVar6 & 1) == 0) {
    pNVar9 = Foundation::URL::_bridgeToObjectiveC((URL)0x0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_80.bridgeObject;
    local_80 = (String)(auVar2 << 0x40);
    UVar27.unknown = (undefined *)0x1;
    IVar6 = objc_stub::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                      (local_d0,pNVar9,1,0,&local_80);
    if ((int)IVar6 == 0) {
      pcVar15 = local_80.str;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      puVar29 = local_e8;
      puVar16 = local_e8;
      FUN_100099338(local_e8,&DAT_100558f50);
      lVar32 = local_f0;
      lVar30 = local_140;
      (**(code **)(local_f0 + 0x10))(local_140,puVar16,puVar29);
      LVar17.unknown = pcVar15;
      _swift_errorRetain();
      pOVar18 = os::Logger::get_logObject(LVar17);
      pOVar19 = pOVar18;
      static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
      pOVar20 = pOVar18;
      _os_log_type_enabled(pOVar18,(uint)pOVar19 & 0xff);
      if ((int)pOVar20 == 0) {
        _swift_errorRelease(pcVar15);
        _swift_errorRelease(pcVar15);
        (**(code **)(lVar32 + 8))(lVar30,local_e8);
        pcVar34 = *(code **)(lVar33 + 8);
        (*pcVar34)(lVar31,UVar5.unknown);
      }
      else {
        puVar21 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar22 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        local_80.str = pcVar22;
        *puVar21 = 0x8220102;
        _swift_getErrorValue(pcVar15,auStack_90,local_a8);
        SVar37 = (extension_Foundation)::Swift::Error::get_localizedDescription();
        pcVar23 = SVar37.str;
        FUN_10012dbb0(pcVar23,SVar37.bridgeObject,&local_80);
        _swift_bridgeObjectRelease(SVar37.bridgeObject);
        *(char **)(puVar21 + 1) = pcVar23;
        _swift_errorRelease(pcVar15);
        __os_log_impl(0x100000000,pOVar18,(uint)pOVar19 & 0xff,
                      s_Logger__failed_to_create_logs_di_100505970,puVar21,0xc);
        FUN_100043f24(pcVar22);
        _swift_slowDealloc(pcVar22,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar21,0xffffffffffffffff,0xffffffffffffffff);
        _swift_errorRelease(pcVar15);
        (**(code **)(local_f0 + 8))(lVar30,local_e8);
        pcVar34 = *(code **)(lVar33 + 8);
        (*pcVar34)(local_e0,UVar5.unknown);
        lVar28 = local_d8;
      }
      (*pcVar34)(lVar28,UVar5.unknown);
      uVar26 = 1;
      uVar24 = local_f8;
      goto LAB_100287160;
    }
  }
  puVar29 = &_OBJC_CLASS___NSDateFormatter;
  _objc_allocWithZone();
  IVar6 = objc_stub::init((ID)puVar29);
  pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setDateFormat_(IVar6,pNVar8);
  identifier.bridgeObject = (void *)0xeb00000000584953;
  identifier.str = (char *)0x4f505f53555f6e65;
  LVar10 = Foundation::Locale::init(identifier);
  pNVar11 = Foundation::Locale::_bridgeToObjectiveC(LVar10);
  (**(code **)(lVar32 + 8))(lVar36,LVar4.unknown);
  objc_stub::setLocale_(IVar6,pNVar11);
  DVar12 = Foundation::Date::init();
  UVar13.unknown = Foundation::Date::_bridgeToObjectiveC(DVar12);
  (**(code **)(local_130 + 8))(lVar30,local_128);
  objc_stub::stringFromDate_(IVar6);
  local_80 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar38.bridgeObject = (void *)0xe400000000000000;
  SVar38.str = (char *)0x676f6c2e;
  SVar42.bridgeObject = UVar27.unknown;
  SVar42.str = UVar13.unknown;
  Swift::String::append(SVar38,SVar42);
  UVar7.unknown = local_108.unknown;
  pcVar15 = local_80.bridgeObject;
  pcVar22 = local_80.bridgeObject;
  Foundation::URL::appendingPathComponent(local_80,UVar13);
  _swift_bridgeObjectRelease();
  FUN_1002891e8();
  local_80.str = pcVar15;
  local_80.bridgeObject = pcVar22;
  _swift_bridgeObjectRetain(pcVar22);
  SVar39.bridgeObject = (void *)0xe100000000000000;
  SVar39.str = (char *)0xa;
  pvVar25 = (void *)0xe100000000000000;
  SVar43.bridgeObject = UVar27.unknown;
  SVar43.str = UVar13.unknown;
  Swift::String::append(SVar39,SVar43);
  _swift_bridgeObjectRelease();
  pvVar3 = local_80.bridgeObject;
  pcVar15 = local_80.str;
  FUN_1002864e0();
  local_80.str = pcVar15;
  local_80.bridgeObject = pvVar3;
  _swift_bridgeObjectRetain(pvVar3);
  SVar40.bridgeObject = pvVar25;
  SVar40.str = pcVar22;
  SVar44.bridgeObject = UVar27.unknown;
  SVar44.str = UVar13.unknown;
  Swift::String::append(SVar40,SVar44);
  _swift_bridgeObjectRelease(pvVar3);
  _swift_bridgeObjectRelease(pvVar25);
  EVar14.unknown = local_80.bridgeObject;
  _swift_bridgeObjectRetain(local_80.bridgeObject);
  SVar41.bridgeObject = (void *)0xe100000000000000;
  SVar41.str = (char *)0xa;
  SVar45.bridgeObject = UVar27.unknown;
  SVar45.str = UVar13.unknown;
  Swift::String::append(SVar41,SVar45);
  _swift_bridgeObjectRelease();
  pvVar3 = local_80.bridgeObject;
  encoding.unknown = local_120.unknown;
  Encoding::_get_utf8(EVar14);
  FUN_100026df4();
  (extension_Foundation)::Swift::StringProtocol::_write(UVar7,true,encoding);
  (**(code **)(local_118 + 8))(encoding.unknown,local_110);
  pcVar34 = *(code **)(lVar33 + 8);
  (*pcVar34)(lVar31,UVar5.unknown);
  (*pcVar34)(local_d8,UVar5.unknown);
  _swift_bridgeObjectRelease(pvVar3);
  uVar24 = local_f8;
  (**(code **)(lVar33 + 0x20))(local_f8,UVar7.unknown,UVar5.unknown);
  uVar26 = 0;
LAB_100287160:
  (*local_100)(uVar24,uVar26,1,UVar5.unknown);
  if (*(long *)PTR____stack_chk_guard_100521138 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

