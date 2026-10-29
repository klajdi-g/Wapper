// rea decompile_all
// name: FUN_10021f34c
// address: 0x10021f34c
// body: available
// range: 0x10021f34c-0x10021fdbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10021f34c(undefined8 param_1,URL param_2)

{
  ulong uVar1;
  byte bVar2;
  DispatchWorkItemFlags qos;
  undefined1 *puVar3;
  void *pvVar4;
  bool bVar5;
  uint uVar6;
  CharacterSet CVar7;
  _StringGuts _Var8;
  Published *pPVar9;
  undefined *puVar10;
  undefined *puVar11;
  char *pcVar12;
  URL UVar13;
  void *aBlock;
  DispatchQoS DVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  Logger LVar18;
  OS_os_log *pOVar19;
  OS_os_log *pOVar20;
  undefined4 *puVar21;
  void *pvVar22;
  void *pvVar24;
  CharacterSet CVar25;
  long extraout_x8;
  long extraout_x8_00;
  long lVar26;
  long extraout_x8_01;
  undefined *puVar27;
  long extraout_x8_02;
  CharacterSet in;
  long lVar28;
  long extraout_x8_03;
  undefined *unaff_x20;
  code *pcVar29;
  char *pcVar30;
  char *pcVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  undefined1 auStack_170 [8];
  DispatchWorkItemFlags local_168;
  long local_160;
  undefined *local_158;
  long local_150;
  long local_148;
  undefined *local_140;
  undefined1 *local_138;
  long local_130;
  undefined *local_128;
  char *local_e0;
  String local_b8;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined1 *puVar17;
  _StringGuts _Var23;
  
  local_128 = (undefined *)os::Logger::typeMetadataAccessor();
  local_130 = *(long *)(local_128 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_130 + 0x40));
  local_140 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_148 = *(long *)(local_140 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_148 + 0x40));
  lVar26 = (long)(auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_150 = lVar26;
  local_158 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_160 = *(long *)(local_158 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_160 + 0x40));
  puVar27 = (undefined *)(lVar26 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_168.unknown = puVar27;
  CVar7 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar26 = *(long *)(CVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar26 + 0x40));
  in.unknown = puVar27 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  _Var8.unknown = (undefined *)0x0;
  FUN_10040211c();
  lVar28 = *(long *)(_Var8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar28 + 0x40));
  puVar27 = in.unknown + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  Foundation::URL::_get_scheme((URL)_Var8.unknown);
  if (param_2.unknown == (undefined *)0x0) {
LAB_10021f554:
    SVar32 = Foundation::URL::get_lastPathComponent((URL)_Var8.unknown);
  }
  else {
    if ((_Var8.unknown == (undefined *)0x7463617265746e69) &&
       (param_2.unknown == (undefined *)0xeb00000000657669)) {
      _swift_bridgeObjectRelease();
    }
    else {
      bVar5 = Swift::_stringCompareWithSmolCheck
                        (_Var8,(_StringGuts)param_2.unknown,(_StringComparisonResult)0x69);
      _swift_bridgeObjectRelease();
      _Var8.unknown = param_2.unknown;
      if (!bVar5) goto LAB_10021f554;
    }
    SVar32 = Foundation::URL::get_absoluteString(param_2);
  }
  pvVar22 = SVar32.bridgeObject;
  pPVar9 = (Published *)&DAT_10042b588;
  local_138 = auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _swift_getKeyPath(&DAT_10042b588);
  puVar10 = &DAT_10042b5b0;
  _swift_getKeyPath();
  local_b8 = SVar32;
  _swift_bridgeObjectRetain(pvVar22);
  _swift_retain();
  Combine::Published::_set_subscript(pPVar9,&local_b8);
  puVar11 = &DAT_10042b5e8;
  _swift_getKeyPath();
  pcVar12 = "H7\x14";
  _swift_getKeyPath();
  pcVar29 = (code *)puVar11;
  pcVar30 = pcVar12;
  Combine::Published::_get_subscript(&local_b8);
  _swift_release(puVar11);
  _swift_release(pcVar12);
  pcVar12 = local_b8.str;
  pcVar31 = *(char **)(local_b8.str + 0x10);
  if (pcVar31 == (char *)0x0) {
    _swift_bridgeObjectRelease(local_b8.str);
    SVar34.bridgeObject = puVar10;
    SVar34.str = pcVar30;
  }
  else {
    pcVar30 = (char *)0x0;
    bVar2 = *(byte *)(lVar28 + 0x50);
    do {
      if (*(char **)(pcVar12 + 0x10) <= pcVar30) {
                    /* WARNING: Does not return */
        pcVar29 = (code *)SoftwareBreakpoint(1,0x10021fd74);
        (*pcVar29)();
      }
      _Var8.unknown =
           pcVar12 + *(long *)(lVar28 + 0x48) * (long)pcVar30 +
                     ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff));
      UVar13.unknown = puVar27;
      FUN_10002f154();
      Foundation::URL::_get_scheme((URL)_Var8.unknown);
      if (UVar13.unknown != (undefined *)0x0) {
        if ((_Var8.unknown == (undefined *)0x7463617265746e69) &&
           (UVar13.unknown == (undefined *)0xeb00000000657669)) {
          _swift_bridgeObjectRelease();
        }
        else {
          bVar5 = Swift::_stringCompareWithSmolCheck
                            (_Var8,(_StringGuts)UVar13.unknown,(_StringComparisonResult)0x69);
          _swift_bridgeObjectRelease();
          _Var8.unknown = UVar13.unknown;
          if (!bVar5) goto LAB_10021f7bc;
        }
        SVar33 = Foundation::URL::get_absoluteString(UVar13);
        _Var23.unknown = SVar33.bridgeObject;
        SVar34 = Foundation::URL::get_absoluteString((URL)SVar33.str);
        _Var8.unknown = SVar34.bridgeObject;
        if (SVar33 == SVar34) {
          _swift_bridgeObjectRelease(_Var23.unknown);
LAB_10021f8c4:
          _swift_bridgeObjectRelease(_Var8.unknown);
          FUN_100029548(puVar27,FUN_10040211c);
        }
        else {
          bVar5 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar33.str,_Var23,
                             (_StringComparisonResult)(__int8)SVar34.str);
          _swift_bridgeObjectRelease(_Var23.unknown);
          _swift_bridgeObjectRelease(_Var8.unknown);
          pcVar29 = FUN_10040211c;
          FUN_100029548(puVar27);
          if (!bVar5) goto LAB_10021f690;
        }
LAB_10021f8dc:
        _swift_bridgeObjectRelease(pcVar12);
        pcVar12 = "(8\x14";
        _swift_getKeyPath();
        pPVar9 = (Published *)&DAT_10042b520;
        _swift_getKeyPath();
        local_b8.str = pcVar30;
        _swift_retain(unaff_x20);
        Combine::Published::_set_subscript(pPVar9,&local_b8);
        SVar34.bridgeObject = pPVar9;
        SVar34.str = pcVar12;
        pcVar29 = (code *)unaff_x20;
        goto LAB_10021f930;
      }
LAB_10021f7bc:
      local_b8 = Foundation::URL::get_lastPathComponent((URL)_Var8.unknown);
      pvVar24 = local_b8.bridgeObject;
      Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)local_b8.str);
      FUN_100026df4();
      SVar33 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
      CVar25.unknown = SVar33.bridgeObject;
      pcVar29 = *(code **)(lVar26 + 8);
      (*pcVar29)(in.unknown,CVar7.unknown);
      _swift_bridgeObjectRelease(pvVar24);
      uVar1 = (ulong)SVar33.str & 0xffffffffffff;
      if (((ulong)CVar25.unknown & 0x2000000000000000) != 0) {
        uVar1 = (ulong)CVar25.unknown >> 0x38 & 0xf;
      }
      if (uVar1 == 0) {
        _swift_bridgeObjectRelease();
        Foundation::CharacterSet::get_whitespacesAndNewlines(CVar25);
        SVar33 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
        (*pcVar29)(in.unknown,CVar7.unknown);
      }
      _Var8.unknown = SVar33.bridgeObject;
      if (SVar33 == SVar32) goto LAB_10021f8c4;
      SVar34 = SVar32;
      bVar5 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar33.str,_Var8,(_StringComparisonResult)(__int8)SVar32.str);
      _swift_bridgeObjectRelease(_Var8.unknown);
      pcVar29 = FUN_10040211c;
      FUN_100029548(puVar27);
      if (bVar5) goto LAB_10021f8dc;
LAB_10021f690:
      pcVar30 = pcVar30 + 1;
    } while (pcVar31 != pcVar30);
    _swift_bridgeObjectRelease(pcVar12);
  }
LAB_10021f930:
  local_e0 = SVar32.str;
  local_b8.str = (char *)0x0;
  local_b8.bridgeObject = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x31,(_StringGuts)pcVar29);
  _swift_bridgeObjectRelease(local_b8.bridgeObject);
  local_b8.bridgeObject = (void *)0x80000001004e1f20;
  local_b8.str = (char *)0xd00000000000002f;
  pcVar12 = local_e0;
  Swift::String::append(SVar32,SVar34);
  SVar32 = local_b8;
  pvVar24 = local_b8.bridgeObject;
  local_b8.str = (char *)0x5b;
  local_b8.bridgeObject = (undefined *)0xe100000000000000;
  local_78 = (undefined *)0x4f464e49;
  uStack_70 = 0xe400000000000000;
  local_88 = 0x20;
  uStack_80 = 0xe100000000000000;
  FUN_100026df4();
  pcVar30 = (char *)0x0;
  puVar27 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar34 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_88,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pcVar12,pcVar12);
  SVar37.bridgeObject = puVar27;
  SVar37.str = pcVar30;
  Swift::String::append(SVar34,SVar37);
  _swift_bridgeObjectRelease(SVar34.bridgeObject);
  SVar33.bridgeObject = (void *)0xe300000000000000;
  SVar33.str = (char *)0x5b205d;
  SVar38.bridgeObject = puVar27;
  SVar38.str = pcVar30;
  Swift::String::append(SVar33,SVar38);
  SVar35.bridgeObject = (void *)0xe300000000000000;
  SVar35.str = (char *)0x707061;
  SVar39.bridgeObject = puVar27;
  SVar39.str = pcVar30;
  Swift::String::append(SVar35,SVar39);
  SVar36.bridgeObject = (void *)0xe200000000000000;
  SVar36.str = (char *)0x205d;
  SVar40.bridgeObject = puVar27;
  SVar40.str = pcVar30;
  Swift::String::append(SVar36,SVar40);
  SVar41.bridgeObject = puVar27;
  SVar41.str = pcVar30;
  Swift::String::append(SVar32,SVar41);
  pvVar4 = local_b8.bridgeObject;
  pcVar12 = local_b8.str;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar27 = &DAT_100533808;
  _swift_allocObject(&DAT_100533808,0x30,7);
  *(char **)(puVar27 + 0x10) = pcVar12;
  *(void **)(puVar27 + 0x18) = pvVar4;
  *(undefined8 *)(puVar27 + 0x20) = 0;
  *(undefined8 *)(puVar27 + 0x28) = 0xe000000000000000;
  local_98 = thunk_FUN_100099310;
  local_b8.bridgeObject = (void *)0x42000000;
  local_b8.str = PTR___NSConcreteStackBlock_100521110;
  local_a8 = FUN_1000c7e7c;
  puStack_a0 = &DAT_100533820;
  local_90 = puVar27;
  aBlock = __Block_copy(&local_b8);
  DVar14.unknown = pvVar4;
  _swift_bridgeObjectRetain();
  qos.unknown = local_168.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar14);
  local_78 = PTR___swiftEmptyArrayStorage_100524190;
  puVar15 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar27 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar16 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  puVar10 = local_140;
  lVar26 = local_150;
  Swift::SetAlgebra::_init(local_150,&local_78,puVar27,puVar16,local_140,puVar15);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_148 + 8))(lVar26,puVar10);
  (**(code **)(local_160 + 8))(qos.unknown,local_158);
  _swift_release(local_90);
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  puVar27 = local_128;
  puVar10 = local_128;
  FUN_100099338(local_128,&DAT_100558f50);
  lVar26 = local_130;
  puVar3 = local_138;
  puVar17 = local_138;
  (**(code **)(local_130 + 0x10))(local_138,puVar10,puVar27);
  uVar6 = (uint)puVar17;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar18.unknown = pvVar4;
  _swift_bridgeObjectRetain();
  pOVar19 = os::Logger::get_logObject(LVar18);
  pOVar20 = pOVar19;
  _os_log_type_enabled(pOVar19,uVar6 & 0xff);
  if ((int)pOVar20 == 0) {
    _swift_bridgeObjectRelease_n(pvVar4,2);
  }
  else {
    puVar21 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar30 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    local_b8.str = pcVar30;
    *puVar21 = 0x8220102;
    FUN_10012dbb0(pcVar12,pvVar4,&local_b8);
    *(char **)(puVar21 + 1) = pcVar12;
    _swift_bridgeObjectRelease_n(pvVar4,2);
    __os_log_impl(0x100000000,pOVar19,uVar6 & 0xff,"%{public}s",puVar21,0xc);
    FUN_100043f24(pcVar30);
    _swift_slowDealloc(pcVar30,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar21,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar26 + 8))(puVar3,puVar27);
  _swift_bridgeObjectRelease(pvVar24);
  FUN_10021815c(local_e0,pvVar22);
  _swift_bridgeObjectRelease(pvVar22);
  if (DAT_100557bb0 != -1) {
    _swift_once(&DAT_100557bb0,FUN_100233158);
  }
  FUN_10023e14c(param_1,0,1,1,1,1,0,1);
  FUN_100217d50();
  return;
}

