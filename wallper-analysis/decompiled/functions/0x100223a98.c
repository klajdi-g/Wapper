// rea decompile_all
// name: FUN_100223a98
// address: 0x100223a98
// body: available
// range: 0x100223a98-0x100225203 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100223a98(undefined8 param_1)

{
  _HashTable _Var1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  String SVar9;
  DispatchWorkItemFlags DVar10;
  bool bVar11;
  uint uVar12;
  undefined *puVar13;
  UUID UVar14;
  CharacterSet CVar15;
  long lVar16;
  _StringGuts _Var17;
  Published *pPVar18;
  undefined *puVar19;
  undefined8 uVar20;
  void *aBlock;
  DispatchQoS DVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  Logger LVar24;
  OS_os_log *pOVar25;
  OS_os_log *pOVar26;
  undefined4 *puVar27;
  char *pcVar28;
  undefined *puVar29;
  URL UVar30;
  void *pvVar31;
  Bucket BVar32;
  ID IVar33;
  NSString *pNVar34;
  void *pvVar35;
  char *pcVar37;
  long extraout_x8;
  long extraout_x8_00;
  long lVar38;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar39;
  long extraout_x8_03;
  CharacterSet in;
  long extraout_x8_04;
  long lVar40;
  long extraout_x8_05;
  long lVar41;
  long extraout_x8_06;
  long lVar42;
  long extraout_x8_07;
  code *pcVar43;
  ulong uVar44;
  undefined8 *puVar45;
  undefined8 *puVar46;
  undefined8 *puVar47;
  long lVar48;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  code *pcVar49;
  long unaff_x20;
  long lVar50;
  undefined *puVar51;
  long lVar52;
  ulong uVar53;
  long lVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  String SVar60;
  String SVar61;
  String SVar62;
  String SVar63;
  String SVar64;
  String SVar65;
  String SVar66;
  String SVar67;
  String SVar68;
  String SVar69;
  String SVar70;
  String SVar71;
  String SVar72;
  String SVar73;
  String SVar74;
  String SVar75;
  String SVar76;
  long alStack_1e0 [5];
  undefined8 local_1b8;
  undefined *local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  undefined *local_188;
  DispatchWorkItemFlags local_180;
  long local_178;
  undefined *local_170;
  long local_168;
  long local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_d0;
  String local_c8;
  code *local_b8;
  undefined *puStack_b0;
  code *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  CharacterSet CVar36;
  
  puVar13 = &DAT_100556440;
  FUN_100002f94(&DAT_100556440,&DAT_10042a0f0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar13 + -8) + 0x40));
  lVar8 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar45 = (undefined8 *)((long)alStack_1e0 + lVar8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar46 = (undefined8 *)((long)puVar45 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar47 = (undefined8 *)((long)puVar46 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar14 = Foundation::UUID::typeMetadataAccessor();
  local_1a0 = *(long *)(UVar14.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1a0 + 0x40));
  lVar38 = (long)puVar47 + (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) - extraout_x12_01);
  puVar51 = &DAT_10054a9c0;
  alStack_1e0[2] = lVar38;
  FUN_100002f94(&DAT_10054a9c0,&DAT_100422d20);
  local_1b0 = puVar51;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar51 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar38 = lVar38 - extraout_x8_01;
  puVar51 = &DAT_10054a9c8;
  UVar30.unknown = &DAT_10041bbe0;
  FUN_100002f94();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar51 + -8) + 0x40));
  lVar48 = lVar38 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  alStack_1e0[3] = lVar48;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar48 = lVar48 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar54 = lVar48 - extraout_x12_03;
  CVar15 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar39 = *(long *)(CVar15.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar39 + 0x40));
  in.unknown = (undefined *)(lVar54 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  lVar16 = 0;
  FUN_10040211c();
  lVar16 = *(long *)(lVar16 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  lVar40 = (long)in.unknown - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_150 = (undefined *)os::Logger::typeMetadataAccessor();
  lVar50 = *(long *)(local_150 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar50 + 0x40));
  lVar52 = lVar40 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar41 = lVar52 - extraout_x12_04;
  local_158 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_160 = *(long *)(local_158 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_160 + 0x40));
  lVar42 = lVar41 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  local_168 = lVar42;
  _Var17.unknown = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_178 = *(long *)(_Var17.unknown + -8);
  local_170 = _Var17.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_178 + 0x40));
  local_180.unknown = (undefined *)(lVar42 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0));
  Foundation::URL::_get_scheme((URL)_Var17.unknown);
  alStack_1e0[4] = lVar52;
  local_1a8 = lVar48;
  local_198 = lVar54;
  local_190 = lVar38;
  local_188 = UVar14.unknown;
  if (UVar30.unknown == (undefined *)0x0) {
LAB_100223e88:
    SVar55 = Foundation::URL::get_lastPathComponent((URL)_Var17.unknown);
  }
  else {
    if ((_Var17.unknown == (undefined *)0x7463617265746e69) &&
       (UVar30.unknown == (undefined *)0xeb00000000657669)) {
      _swift_bridgeObjectRelease();
    }
    else {
      bVar11 = Swift::_stringCompareWithSmolCheck
                         (_Var17,(_StringGuts)UVar30.unknown,(_StringComparisonResult)0x69);
      _swift_bridgeObjectRelease();
      _Var17.unknown = UVar30.unknown;
      if (!bVar11) goto LAB_100223e88;
    }
    SVar55 = Foundation::URL::get_absoluteString(UVar30);
  }
  puVar29 = SVar55.bridgeObject;
  pcVar37 = SVar55.str;
  pPVar18 = (Published *)&DAT_10042b588;
  _swift_getKeyPath(&DAT_10042b588);
  puVar51 = &DAT_10042b5b0;
  _swift_getKeyPath();
  local_c8 = SVar55;
  _swift_bridgeObjectRetain_n(puVar29,2);
  _swift_retain();
  Combine::Published::_set_subscript(pPVar18,&local_c8);
  FUN_10021830c(pcVar37,puVar29);
  if (((ulong)pcVar37 & 1) != 0) {
    _swift_bridgeObjectRelease(puVar29);
    goto LAB_100225128;
  }
  puVar19 = &DAT_10042b4b0;
  alStack_1e0[1] = lVar50;
  _swift_getKeyPath();
  pcVar37 = "@8\x14";
  _swift_getKeyPath();
  _Var17.unknown = puVar19;
  pcVar28 = pcVar37;
  Combine::Published::_get_subscript(&local_c8);
  _swift_release(puVar19);
  _swift_release(pcVar37);
  local_1b8 = param_1;
  if ((char)local_c8.str == '\x01') {
    local_c8.str = (char *)0x0;
    local_c8.bridgeObject = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x42,_Var17);
    SVar60.bridgeObject = (void *)0x80000001004e2050;
    SVar60.str = (char *)0xd000000000000021;
    SVar64.bridgeObject = puVar51;
    SVar64.str = pcVar28;
    Swift::String::append(SVar60,SVar64);
    SVar65.bridgeObject = puVar51;
    SVar65.str = pcVar28;
    Swift::String::append(SVar55,SVar65);
    _swift_bridgeObjectRelease(puVar29);
    uVar20 = 0x100000000000001f;
    SVar56.bridgeObject = (void *)0x80000001004e2080;
    SVar56.str = (char *)0x100000000000001f;
    SVar66.bridgeObject = puVar51;
    SVar66.str = pcVar28;
    Swift::String::append(SVar56,SVar66);
    SVar60 = local_c8;
    pvVar35 = local_c8.bridgeObject;
    local_c8.str = (char *)0x5b;
    local_c8.bridgeObject = (undefined *)0xe100000000000000;
    local_80 = (undefined *)0x4f464e49;
    uStack_78 = 0xe400000000000000;
    local_98 = 0x20;
    uStack_90 = 0xe100000000000000;
    FUN_100026df4();
    pcVar37 = (char *)0x0;
    puVar51 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar56 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_98,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,uVar20,uVar20);
    SVar67.bridgeObject = puVar51;
    SVar67.str = pcVar37;
    Swift::String::append(SVar56,SVar67);
    _swift_bridgeObjectRelease(SVar56.bridgeObject);
    SVar57.bridgeObject = (void *)0xe300000000000000;
    SVar57.str = (char *)0x5b205d;
    SVar68.bridgeObject = puVar51;
    SVar68.str = pcVar37;
    Swift::String::append(SVar57,SVar68);
    SVar58.bridgeObject = (void *)0xe300000000000000;
    SVar58.str = (char *)0x707061;
    SVar69.bridgeObject = puVar51;
    SVar69.str = pcVar37;
    Swift::String::append(SVar58,SVar69);
    SVar59.bridgeObject = (void *)0xe200000000000000;
    SVar59.str = (char *)0x205d;
    SVar70.bridgeObject = puVar51;
    SVar70.str = pcVar37;
    Swift::String::append(SVar59,SVar70);
    SVar71.bridgeObject = puVar51;
    SVar71.str = pcVar37;
    Swift::String::append(SVar60,SVar71);
    pvVar31 = local_c8.bridgeObject;
    pcVar37 = local_c8.str;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar51 = &DAT_1005338d0;
    _swift_allocObject(&DAT_1005338d0,0x30,7);
    *(char **)(puVar51 + 0x10) = pcVar37;
    *(void **)(puVar51 + 0x18) = pvVar31;
    *(undefined8 *)(puVar51 + 0x20) = 0;
    *(undefined8 *)(puVar51 + 0x28) = 0xe000000000000000;
    local_a8 = thunk_FUN_100099310;
    local_c8.bridgeObject = (void *)0x42000000;
    local_c8.str = PTR___NSConcreteStackBlock_100521110;
    local_b8 = FUN_1000c7e7c;
    puStack_b0 = &DAT_1005338e8;
    local_a0 = puVar51;
    aBlock = __Block_copy(&local_c8);
    DVar21.unknown = pvVar31;
    _swift_bridgeObjectRetain();
    DVar10.unknown = local_180.unknown;
    Dispatch::DispatchQoS::get_unspecified(DVar21);
    local_80 = PTR___swiftEmptyArrayStorage_100524190;
    puVar22 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar51 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar23 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    puVar19 = local_158;
    lVar38 = local_168;
    Swift::SetAlgebra::_init(local_168,&local_80,puVar51,puVar23,local_158,puVar22);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar10);
    __Block_release(aBlock);
    (**(code **)(local_160 + 8))(lVar38,puVar19);
    (**(code **)(local_178 + 8))(DVar10.unknown,local_170);
    _swift_release(local_a0);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    puVar51 = local_150;
    puVar19 = local_150;
    FUN_100099338(local_150,&DAT_100558f50);
    lVar38 = alStack_1e0[1];
    lVar42 = lVar41;
    (**(code **)(alStack_1e0[1] + 0x10))(lVar41,puVar19,puVar51);
    uVar12 = (uint)lVar42;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar24.unknown = pvVar31;
    _swift_bridgeObjectRetain();
    pOVar25 = os::Logger::get_logObject(LVar24);
    pOVar26 = pOVar25;
    _os_log_type_enabled(pOVar25,uVar12 & 0xff);
    param_1 = local_1b8;
    if ((int)pOVar26 == 0) {
      _swift_bridgeObjectRelease_n(pvVar31,2);
      pcVar43 = *(code **)(lVar38 + 8);
    }
    else {
      puVar27 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar28 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      local_c8.str = pcVar28;
      *puVar27 = 0x8220102;
      FUN_10012dbb0(pcVar37,pvVar31,&local_c8);
      *(char **)(puVar27 + 1) = pcVar37;
      _swift_bridgeObjectRelease_n(pvVar31,2);
      __os_log_impl(0x100000000,pOVar25,uVar12 & 0xff,"%{public}s",puVar27,0xc);
      FUN_100043f24(pcVar28);
      _swift_slowDealloc(pcVar28,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar27,0xffffffffffffffff,0xffffffffffffffff);
      pcVar43 = *(code **)(lVar38 + 8);
      puVar51 = local_150;
    }
    (*pcVar43)(lVar41,puVar51);
    _swift_bridgeObjectRelease(pvVar35);
    FUN_1002178c8();
  }
  else {
    _swift_bridgeObjectRelease(puVar29);
  }
  FUN_10022a100();
  pvVar35 = SVar55.bridgeObject;
  _swift_bridgeObjectRelease(puVar29);
  puVar51 = &DAT_10042b5e8;
  _swift_getKeyPath(&DAT_10042b5e8);
  puVar29 = &DAT_10042b610;
  _swift_getKeyPath(&DAT_10042b610);
  Combine::Published::_get_subscript(&local_c8,unaff_x20,puVar51,puVar29);
  _swift_release(puVar51);
  _swift_release(puVar29);
  pcVar37 = local_c8.str;
  uVar44 = *(ulong *)(local_c8.str + 0x10);
  if (uVar44 == 0) {
    _swift_bridgeObjectRelease(local_c8.str);
  }
  else {
    uVar53 = 0;
    bVar6 = *(byte *)(lVar16 + 0x50);
    do {
      if (*(ulong *)(pcVar37 + 0x10) <= uVar53) {
                    /* WARNING: Does not return */
        pcVar43 = (code *)SoftwareBreakpoint(1,0x100225174);
        (*pcVar43)();
      }
      UVar30.unknown =
           pcVar37 + *(long *)(lVar16 + 0x48) * uVar53 +
                     ((ulong)bVar6 + 0x20 & ((ulong)bVar6 ^ 0xffffffffffffffff));
      FUN_10002f154(UVar30.unknown,lVar40);
      local_c8 = Foundation::URL::get_lastPathComponent(UVar30);
      pvVar31 = local_c8.bridgeObject;
      Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)local_c8.str);
      FUN_100026df4();
      SVar60 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
      CVar36.unknown = SVar60.bridgeObject;
      pcVar43 = *(code **)(lVar39 + 8);
      (*pcVar43)(in.unknown,CVar15.unknown);
      _swift_bridgeObjectRelease(pvVar31);
      uVar2 = (ulong)SVar60.str & 0xffffffffffff;
      if (((ulong)CVar36.unknown & 0x2000000000000000) != 0) {
        uVar2 = (ulong)CVar36.unknown >> 0x38 & 0xf;
      }
      if (uVar2 == 0) {
        _swift_bridgeObjectRelease();
        Foundation::CharacterSet::get_whitespacesAndNewlines(CVar36);
        SVar60 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
        (*pcVar43)(in.unknown,CVar15.unknown);
      }
      _Var17.unknown = SVar60.bridgeObject;
      if (pvVar35 != (void *)0x0) {
        if (SVar60 == SVar55) {
          _swift_bridgeObjectRelease(_Var17.unknown);
          FUN_100029548(lVar40,FUN_10040211c);
        }
        else {
          bVar11 = Swift::_stringCompareWithSmolCheck
                             ((_StringGuts)SVar60.str,_Var17,
                              (_StringComparisonResult)(__int8)SVar55.str);
          _swift_bridgeObjectRelease(_Var17.unknown);
          FUN_100029548(lVar40,FUN_10040211c);
          if (!bVar11) goto LAB_100224490;
        }
        _swift_bridgeObjectRelease(pvVar35);
        _swift_bridgeObjectRelease(pcVar37);
        param_1 = local_1b8;
        goto LAB_100224d20;
      }
      _swift_bridgeObjectRelease(_Var17.unknown);
      FUN_100029548(lVar40,FUN_10040211c);
LAB_100224490:
      SVar9.bridgeObject = pcVar37;
      SVar9.str = SVar55.str;
      uVar53 = uVar53 + 1;
    } while (uVar44 != uVar53);
    _swift_bridgeObjectRelease(pvVar35);
    param_1 = local_1b8;
    SVar55 = SVar9;
  }
  _swift_bridgeObjectRelease(SVar55.bridgeObject);
  lVar16 = unaff_x20 + _TtC7Wallper19ShuffleQueueManager::playlistManager;
  _swift_weakLoadStrong();
  puVar51 = local_188;
  lVar39 = local_190;
  lVar38 = local_198;
  if (lVar16 != 0) {
    puVar29 = &DAT_10042b800;
    _swift_getKeyPath(&DAT_10042b800);
    puVar19 = &DAT_10042b828;
    _swift_getKeyPath(&DAT_10042b828);
    Combine::Published::_get_subscript(lVar38,lVar16,puVar29,puVar19);
    _swift_release(puVar29);
    _swift_release(puVar19);
    lVar41 = local_1a0;
    lVar42 = local_1a8;
    (**(code **)(local_1a0 + 0x38))(local_1a8,1,1,puVar51);
    lVar40 = (long)*(int *)(local_1b0 + 0x30);
    FUN_1000087e4(lVar38,lVar39,&DAT_10054a9c8,&DAT_10041bbe0);
    FUN_1000087e4(lVar42,lVar39 + lVar40,&DAT_10054a9c8,&DAT_10041bbe0);
    pcVar43 = *(code **)(lVar41 + 0x30);
    lVar48 = lVar39;
    (*pcVar43)(lVar39,1,puVar51);
    lVar41 = alStack_1e0[3];
    if ((int)lVar48 == 1) {
      FUN_10002a29c(lVar42,&DAT_10054a9c8,&DAT_10041bbe0);
      FUN_10002a29c(lVar38,&DAT_10054a9c8,&DAT_10041bbe0);
      lVar40 = lVar39 + lVar40;
      (*pcVar43)(lVar40,1,puVar51);
      if ((int)lVar40 != 1) {
LAB_100224800:
        FUN_10002a29c(lVar39,&DAT_10054a9c0,&DAT_100422d20);
        goto LAB_100224818;
      }
      FUN_10002a29c(lVar39,&DAT_10054a9c8,&DAT_10041bbe0);
    }
    else {
      FUN_1000087e4(lVar39,alStack_1e0[3],&DAT_10054a9c8,&DAT_10041bbe0);
      lVar48 = lVar39 + lVar40;
      (*pcVar43)(lVar48,1,puVar51);
      lVar52 = local_1a0;
      lVar50 = alStack_1e0[2];
      if ((int)lVar48 == 1) {
        FUN_10002a29c(lVar42,&DAT_10054a9c8,&DAT_10041bbe0);
        FUN_10002a29c(lVar38,&DAT_10054a9c8,&DAT_10041bbe0);
        (**(code **)(local_1a0 + 8))(lVar41,puVar51);
        goto LAB_100224800;
      }
      (**(code **)(local_1a0 + 0x20))(alStack_1e0[2],lVar39 + lVar40,puVar51);
      puVar29 = &DAT_10054a130;
      FUN_1000036d0(&DAT_10054a130,PTR_typeMetadataAccessor_100520bd8,
                    PTR_Foundation__Foundation__UUID_>Swift__Equatable_100520bf8);
      bVar11 = Swift::Equatable::___infix(lVar41,lVar50,puVar51,puVar29);
      pcVar43 = *(code **)(lVar52 + 8);
      (*pcVar43)(lVar50,puVar51);
      FUN_10002a29c(lVar42,&DAT_10054a9c8,&DAT_10041bbe0);
      FUN_10002a29c(lVar38,&DAT_10054a9c8,&DAT_10041bbe0);
      (*pcVar43)(lVar41,puVar51);
      FUN_10002a29c(lVar39,&DAT_10054a9c8,&DAT_10041bbe0);
      if (bVar11) goto LAB_100224d1c;
LAB_100224818:
      local_c8.str = (char *)0x5b;
      local_c8.bridgeObject = (undefined *)0xe100000000000000;
      local_80 = (undefined *)0x4f464e49;
      uStack_78 = 0xe400000000000000;
      local_98 = 0x20;
      uStack_90 = 0xe100000000000000;
      FUN_100026df4();
      pcVar37 = (char *)0x0;
      puVar51 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar55 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_98,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,lVar39,lVar39);
      SVar72.bridgeObject = puVar51;
      SVar72.str = pcVar37;
      Swift::String::append(SVar55,SVar72);
      _swift_bridgeObjectRelease(SVar55.bridgeObject);
      SVar55.bridgeObject = (void *)0xe300000000000000;
      SVar55.str = (char *)0x5b205d;
      SVar73.bridgeObject = puVar51;
      SVar73.str = pcVar37;
      Swift::String::append(SVar55,SVar73);
      SVar61.bridgeObject = (void *)0xe300000000000000;
      SVar61.str = (char *)0x707061;
      SVar74.bridgeObject = puVar51;
      SVar74.str = pcVar37;
      Swift::String::append(SVar61,SVar74);
      SVar62.bridgeObject = (void *)0xe200000000000000;
      SVar62.str = (char *)0x205d;
      SVar75.bridgeObject = puVar51;
      SVar75.str = pcVar37;
      Swift::String::append(SVar62,SVar75);
      SVar63.bridgeObject = (void *)0x80000001004e2000;
      SVar63.str = (char *)0x1000000000000047;
      SVar76.bridgeObject = puVar51;
      SVar76.str = pcVar37;
      Swift::String::append(SVar63,SVar76);
      pvVar35 = local_c8.bridgeObject;
      pcVar37 = local_c8.str;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar51 = &DAT_100533880;
      _swift_allocObject(&DAT_100533880,0x30,7);
      *(char **)(puVar51 + 0x10) = pcVar37;
      *(void **)(puVar51 + 0x18) = pvVar35;
      *(undefined8 *)(puVar51 + 0x20) = 0;
      *(undefined8 *)(puVar51 + 0x28) = 0xe000000000000000;
      local_a8 = thunk_FUN_100099310;
      local_c8.bridgeObject = (void *)0x42000000;
      local_c8.str = PTR___NSConcreteStackBlock_100521110;
      local_b8 = FUN_1000c7e7c;
      puStack_b0 = &DAT_100533898;
      local_a0 = puVar51;
      pvVar31 = __Block_copy(&local_c8);
      DVar21.unknown = pvVar35;
      _swift_bridgeObjectRetain();
      DVar10.unknown = local_180.unknown;
      Dispatch::DispatchQoS::get_unspecified(DVar21);
      local_80 = PTR___swiftEmptyArrayStorage_100524190;
      puVar22 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar51 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar23 = &DAT_100553dc0;
      FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
      puVar29 = local_158;
      lVar38 = local_168;
      Swift::SetAlgebra::_init(local_168,&local_80,puVar51,puVar23,local_158,puVar22);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar10);
      __Block_release(pvVar31);
      (**(code **)(local_160 + 8))(lVar38,puVar29);
      (**(code **)(local_178 + 8))(DVar10.unknown,local_170);
      _swift_release(local_a0);
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      puVar51 = local_150;
      puVar29 = local_150;
      FUN_100099338(local_150,&DAT_100558f50);
      lVar39 = alStack_1e0[4];
      lVar38 = alStack_1e0[1];
      lVar40 = alStack_1e0[4];
      (**(code **)(alStack_1e0[1] + 0x10))(alStack_1e0[4],puVar29,puVar51);
      uVar12 = (uint)lVar40;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar24.unknown = pvVar35;
      _swift_bridgeObjectRetain();
      pOVar25 = os::Logger::get_logObject(LVar24);
      pOVar26 = pOVar25;
      _os_log_type_enabled(pOVar25,uVar12 & 0xff);
      param_1 = local_1b8;
      if ((int)pOVar26 == 0) {
        _swift_bridgeObjectRelease_n(pvVar35,2);
      }
      else {
        puVar27 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar28 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        local_c8.str = pcVar28;
        *puVar27 = 0x8220102;
        FUN_10012dbb0(pcVar37,pvVar35,&local_c8);
        *(char **)(puVar27 + 1) = pcVar37;
        _swift_bridgeObjectRelease_n(pvVar35,2);
        __os_log_impl(0x100000000,pOVar25,uVar12 & 0xff,"%{public}s",puVar27,0xc);
        FUN_100043f24(pcVar28);
        _swift_slowDealloc(pcVar28,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar27,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar38 + 8))(lVar39,puVar51);
      IVar33 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
      pNVar34 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      NSUserDefaults::removeObjectForKey_(IVar33,pNVar34);
      FUN_1001b4358(1);
    }
LAB_100224d1c:
    _swift_release(lVar16);
  }
LAB_100224d20:
  if (DAT_100557bb0 != -1) {
    _swift_once(&DAT_100557bb0,FUN_100233158);
  }
  lVar38 = DAT_100577d38;
  lVar16 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
  _swift_beginAccess(DAT_100577d38 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,
                     &local_c8,0,0);
  uVar20 = *(undefined8 *)(lVar38 + lVar16);
  local_70 = param_1;
  _swift_bridgeObjectRetain(uVar20);
  pcVar43 = FUN_10022a488;
  FUN_1002278e4(FUN_10022a488,&local_80,uVar20);
  _swift_bridgeObjectRelease(uVar20);
  lVar16 = *(long *)(pcVar43 + 0x10);
  if (lVar16 == 0) {
    _swift_release(pcVar43);
    local_d0 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    local_80 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1001c5bc4(0,lVar16,0);
    local_d0 = local_80;
    _Var1.unknown = pcVar43 + 0x40;
    BVar32 = Swift::_HashTable::get_startBucket(_Var1);
    lVar38 = 0;
    iVar5 = *(int *)(pcVar43 + 0x24);
    do {
      if ((ulong)BVar32.unknown >> ((ulong)(byte)pcVar43[0x20] & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar43 = (code *)SoftwareBreakpoint(1,0x10022515c);
        (*pcVar43)();
      }
      uVar44 = (ulong)BVar32.unknown >> 6;
      uVar53 = 1L << ((ulong)BVar32.unknown & 0x3f);
      if ((*(ulong *)(_Var1.unknown + uVar44 * 8) & uVar53) == 0) {
                    /* WARNING: Does not return */
        pcVar43 = (code *)SoftwareBreakpoint(1,0x100225160);
        (*pcVar43)();
      }
      if (iVar5 != *(int *)(pcVar43 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar43 = (code *)SoftwareBreakpoint(1,0x100225164);
        (*pcVar43)();
      }
      iVar7 = *(int *)(puVar13 + 0x30);
      lVar39 = *(long *)(pcVar43 + 0x38);
      puVar22 = (undefined8 *)(*(long *)(pcVar43 + 0x30) + (long)BVar32.unknown * 0x10);
      uVar20 = *puVar22;
      uVar3 = puVar22[1];
      UVar30 = Foundation::URL::typeMetadataAccessor();
      lVar40 = *(long *)(UVar30.unknown + -8);
      (**(code **)(lVar40 + 0x10))
                ((long)puVar47 + (iVar7 - extraout_x12_01),
                 lVar39 + *(long *)(lVar40 + 0x48) * (long)BVar32.unknown,UVar30.unknown);
      *puVar47 = uVar20;
      puVar47[1] = uVar3;
      pcVar49 = *(code **)(lVar40 + 0x20);
      (*pcVar49)((long)puVar47 + (long)*(int *)(puVar13 + 0x30),
                 (long)puVar47 + (iVar7 - extraout_x12_01),UVar30.unknown);
      FUN_1000087e4(puVar47,puVar46,&DAT_100556440,&DAT_10042a0f0);
      uVar20 = *puVar46;
      uVar4 = puVar46[1];
      iVar7 = *(int *)(puVar13 + 0x30);
      *puVar45 = uVar20;
      *(undefined8 *)((long)alStack_1e0 + lVar8 + 8) = uVar4;
      (*pcVar49)((long)puVar45 + (long)iVar7,(long)puVar46 + (long)iVar7,UVar30.unknown);
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar4);
      FUN_10002a29c(puVar45,&DAT_100556440,&DAT_10042a0f0);
      FUN_10002a29c(puVar47,&DAT_100556440,&DAT_10042a0f0);
      local_80 = local_d0;
      uVar2 = *(ulong *)(local_d0 + 0x10);
      if (*(ulong *)(local_d0 + 0x18) >> 1 <= uVar2) {
        FUN_1001c5bc4(1 < *(ulong *)(local_d0 + 0x18),uVar2 + 1,1);
      }
      local_d0 = local_80;
      *(ulong *)(local_80 + 0x10) = uVar2 + 1;
      *(undefined8 *)(local_80 + uVar2 * 0x10 + 0x20) = uVar20;
      *(undefined8 *)(local_80 + uVar2 * 0x10 + 0x28) = uVar4;
      puVar51 = (undefined *)(1L << ((ulong)(byte)pcVar43[0x20] & 0x3f));
      if (puVar51 <= BVar32.unknown) {
                    /* WARNING: Does not return */
        pcVar43 = (code *)SoftwareBreakpoint(1,0x100225168);
        (*pcVar43)();
      }
      if ((*(ulong *)(_Var1.unknown + uVar44 * 8) & uVar53) == 0) {
                    /* WARNING: Does not return */
        pcVar43 = (code *)SoftwareBreakpoint(1,0x10022516c);
        (*pcVar43)();
      }
      if (iVar5 != *(int *)(pcVar43 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar43 = (code *)SoftwareBreakpoint(1,0x100225170);
        (*pcVar43)();
      }
      uVar53 = *(ulong *)(_Var1.unknown + uVar44 * 8) & -2L << ((ulong)BVar32.unknown & 0x3f);
      if (uVar53 == 0) {
        lVar39 = uVar44 << 6;
        pcVar49 = pcVar43 + uVar44 * 8 + 0x48;
        do {
          uVar44 = uVar44 + 1;
          if ((ulong)(puVar51 + 0x3f) >> 6 <= uVar44) {
            FUN_1001b0e68(BVar32.unknown,iVar5,0);
            goto LAB_100224e28;
          }
          uVar53 = *(ulong *)pcVar49;
          lVar39 = lVar39 + 0x40;
          pcVar49 = pcVar49 + 8;
        } while (uVar53 == 0);
        FUN_1001b0e68(BVar32.unknown,iVar5,0);
        uVar44 = (uVar53 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar53 & 0x5555555555555555) << 1;
        uVar44 = (uVar44 & 0xcccccccccccccccc) >> 2 | (uVar44 & 0x3333333333333333) << 2;
        uVar44 = (uVar44 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar44 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar44 = (uVar44 & 0xff00ff00ff00ff00) >> 8 | (uVar44 & 0xff00ff00ff00ff) << 8;
        uVar44 = (uVar44 & 0xffff0000ffff0000) >> 0x10 | (uVar44 & 0xffff0000ffff) << 0x10;
        puVar51 = (undefined *)(LZCOUNT(uVar44 >> 0x20 | uVar44 << 0x20) + lVar39);
      }
      else {
        uVar44 = (uVar53 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar53 & 0x5555555555555555) << 1;
        uVar44 = (uVar44 & 0xcccccccccccccccc) >> 2 | (uVar44 & 0x3333333333333333) << 2;
        uVar44 = (uVar44 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar44 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar44 = (uVar44 & 0xff00ff00ff00ff00) >> 8 | (uVar44 & 0xff00ff00ff00ff) << 8;
        uVar44 = (uVar44 & 0xffff0000ffff0000) >> 0x10 | (uVar44 & 0xffff0000ffff) << 0x10;
        puVar51 = (undefined *)
                  (LZCOUNT(uVar44 >> 0x20 | uVar44 << 0x20) |
                  (ulong)BVar32.unknown & 0x7fffffffffffffc0);
      }
LAB_100224e28:
      lVar38 = lVar38 + 1;
      BVar32.unknown = puVar51;
    } while (lVar38 != lVar16);
    _swift_release(pcVar43);
  }
  puVar29 = local_d0;
  FUN_10020c98c(local_d0);
  _swift_bridgeObjectRelease(local_d0);
  if (DAT_1005564c0 != -1) {
    _swift_once(&DAT_1005564c0,FUN_10017806c);
  }
  IVar33 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar34 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar33 = NSUserDefaults::boolForKey_(IVar33,pNVar34);
  FUN_10017d0ac(puVar29,(uint)IVar33 ^ 1);
LAB_100225128:
  _swift_bridgeObjectRelease(puVar29);
  FUN_100217d50();
  return;
}

