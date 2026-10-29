// rea decompile_all
// name: FUN_10021aa94
// address: 0x10021aa94
// body: available
// range: 0x10021aa94-0x10021b52f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10021aa94(void)

{
  ulong uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 *puVar4;
  void *pvVar5;
  bool bVar6;
  uint uVar7;
  undefined *puVar8;
  Logger LVar9;
  DispatchWorkItemFlags DVar10;
  DispatchQoS DVar11;
  CharacterSet CVar12;
  long lVar13;
  undefined *puVar14;
  code *pcVar15;
  URL UVar16;
  void *aBlock;
  DispatchQoS DVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  Logger LVar20;
  OS_os_log *pOVar21;
  OS_os_log *pOVar22;
  undefined4 *puVar23;
  char *pcVar24;
  Published *pPVar25;
  TaskPriority TVar26;
  MainActor *pMVar27;
  MainActor *this;
  MainActor *pMVar28;
  void *pvVar29;
  char *pcVar31;
  undefined *in_x3;
  long extraout_x8;
  long lVar32;
  long extraout_x8_00;
  long lVar33;
  long extraout_x8_01;
  long lVar34;
  long lVar35;
  long extraout_x8_02;
  DispatchWorkItemFlags qos;
  long lVar36;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar37;
  undefined *puVar38;
  long extraout_x12;
  long lVar39;
  undefined8 unaff_x20;
  _StringGuts _Var40;
  ulong uVar41;
  long lVar42;
  long lVar43;
  code *pcVar44;
  CharacterSet in;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  undefined1 auStack_170 [8];
  long local_168;
  undefined1 *local_160;
  String local_b8;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  char *local_78;
  undefined8 uStack_70;
  CharacterSet CVar30;
  
  puVar8 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  LVar9 = os::Logger::typeMetadataAccessor();
  lVar32 = *(long *)(LVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar32 + 0x40));
  lVar42 = (long)(auStack_170 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar10 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar33 = *(long *)(DVar10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar33 + 0x40));
  lVar34 = lVar42 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  DVar11 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar35 = *(long *)(DVar11.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar35 + 0x40));
  qos.unknown = (undefined *)(lVar34 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  CVar12 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar36 = *(long *)(CVar12.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar36 + 0x40));
  in.unknown = qos.unknown + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lVar13 = 0;
  FUN_10040211c();
  lVar13 = *(long *)(lVar13 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  puVar38 = in.unknown + -(extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar43 = (long)puVar38 - extraout_x12;
  FUN_100219cf4(1);
  puVar8 = &DAT_10042b5e8;
  _swift_getKeyPath(&DAT_10042b5e8);
  puVar14 = &DAT_10042b610;
  _swift_getKeyPath(&DAT_10042b610);
  Combine::Published::_get_subscript(&local_b8);
  _swift_release(puVar8);
  _swift_release(puVar14);
  lVar39 = *(long *)(local_b8.str + 0x10);
  _swift_bridgeObjectRelease();
  if (lVar39 != 0) {
    puVar8 = &DAT_10042b588;
    local_168 = lVar42;
    local_160 = auStack_170 + -extraout_x8;
    _swift_getKeyPath(&DAT_10042b588);
    puVar14 = &DAT_10042b5b0;
    _swift_getKeyPath(&DAT_10042b5b0);
    Combine::Published::_get_subscript(&local_b8);
    _swift_release(puVar8);
    _swift_release(puVar14);
    pvVar29 = local_b8.bridgeObject;
    pcVar31 = local_b8.str;
    puVar8 = local_b8.bridgeObject;
    FUN_10022a100();
    pcVar44 = (code *)puVar8;
    _swift_bridgeObjectRelease(pvVar29);
    if (puVar8 != (undefined *)0x0) {
      pcVar15 = (code *)&DAT_10042b5e8;
      _swift_getKeyPath();
      puVar14 = &DAT_10042b610;
      _swift_getKeyPath(&DAT_10042b610);
      pcVar44 = pcVar15;
      Combine::Published::_get_subscript(&local_b8);
      _swift_release(pcVar15);
      _swift_release(puVar14);
      pcVar24 = local_b8.str;
      uVar37 = *(ulong *)(local_b8.str + 0x10);
      if (uVar37 != 0) {
        uVar41 = 0;
        bVar2 = *(byte *)(lVar13 + 0x50);
        do {
          if (*(ulong *)(pcVar24 + 0x10) <= uVar41) {
                    /* WARNING: Does not return */
            pcVar44 = (code *)SoftwareBreakpoint(1,0x10021b4fc);
            (*pcVar44)();
          }
          UVar16.unknown =
               pcVar24 + *(long *)(lVar13 + 0x48) * uVar41 +
                         ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff));
          FUN_10002f154(UVar16.unknown,lVar43);
          local_b8 = Foundation::URL::get_lastPathComponent(UVar16);
          pvVar29 = local_b8.bridgeObject;
          Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)local_b8.str);
          FUN_100026df4();
          SVar45 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
          CVar30.unknown = SVar45.bridgeObject;
          pcVar44 = *(code **)(lVar36 + 8);
          (*pcVar44)(in.unknown,CVar12.unknown);
          _swift_bridgeObjectRelease(pvVar29);
          uVar1 = (ulong)SVar45.str & 0xffffffffffff;
          if (((ulong)CVar30.unknown & 0x2000000000000000) != 0) {
            uVar1 = (ulong)CVar30.unknown >> 0x38 & 0xf;
          }
          if (uVar1 == 0) {
            _swift_bridgeObjectRelease();
            Foundation::CharacterSet::get_whitespacesAndNewlines(CVar30);
            SVar45 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
            (*pcVar44)(in.unknown,CVar12.unknown);
          }
          _Var40.unknown = SVar45.bridgeObject;
          SVar46.bridgeObject = puVar8;
          SVar46.str = pcVar31;
          if (SVar45 == SVar46) {
            _swift_bridgeObjectRelease(_Var40.unknown);
            FUN_100029548(lVar43,FUN_10040211c);
LAB_10021b4c8:
            _swift_bridgeObjectRelease(puVar8);
            _swift_bridgeObjectRelease(pcVar24);
            return;
          }
          in_x3 = puVar8;
          bVar6 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar45.str,_Var40,(_StringComparisonResult)(__int8)pcVar31
                            );
          _swift_bridgeObjectRelease(_Var40.unknown);
          pcVar44 = FUN_10040211c;
          FUN_100029548(lVar43);
          if (bVar6) goto LAB_10021b4c8;
          uVar41 = uVar41 + 1;
        } while (uVar37 != uVar41);
      }
      _swift_bridgeObjectRelease(puVar8);
      _swift_bridgeObjectRelease(pcVar24);
    }
    local_b8.str = (char *)0x0;
    local_b8.bridgeObject = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x2f,(_StringGuts)pcVar44);
    _swift_bridgeObjectRelease(local_b8.bridgeObject);
    local_b8.bridgeObject = (void *)0x80000001004e1ef0;
    local_b8.str = (char *)0x100000000000002d;
    puVar8 = &DAT_10042b5e8;
    _swift_getKeyPath(&DAT_10042b5e8);
    pcVar31 = "H7\x14";
    _swift_getKeyPath();
    pcVar24 = pcVar31;
    Combine::Published::_get_subscript(&local_78,unaff_x20,puVar8);
    _swift_release(puVar8);
    _swift_release(pcVar31);
    if (*(long *)(local_78 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar44 = (code *)SoftwareBreakpoint(1,0x10021b500);
      (*pcVar44)();
    }
    puVar8 = puVar38;
    FUN_10002f154(local_78 +
                  ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                  ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff)));
    _swift_bridgeObjectRelease();
    pcVar31 = local_78;
    FUN_10026ac6c();
    FUN_100029548(puVar38,FUN_10040211c);
    SVar45.bridgeObject = puVar8;
    SVar45.str = pcVar31;
    SVar50.bridgeObject = in_x3;
    SVar50.str = pcVar24;
    Swift::String::append(SVar45,SVar50);
    _swift_bridgeObjectRelease(puVar8);
    SVar45 = local_b8;
    pvVar29 = local_b8.bridgeObject;
    local_b8.str = (char *)0x5b;
    local_b8.bridgeObject = (undefined *)0xe100000000000000;
    local_78 = (char *)0x4f464e49;
    uStack_70 = 0xe400000000000000;
    local_88 = 0x20;
    uStack_80 = 0xe100000000000000;
    FUN_100026df4();
    pcVar31 = (char *)0x0;
    puVar14 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar46 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_88,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,puVar8,puVar8);
    SVar51.bridgeObject = puVar14;
    SVar51.str = pcVar31;
    Swift::String::append(SVar46,SVar51);
    _swift_bridgeObjectRelease(SVar46.bridgeObject);
    SVar47.bridgeObject = (void *)0xe300000000000000;
    SVar47.str = (char *)0x5b205d;
    SVar52.bridgeObject = puVar14;
    SVar52.str = pcVar31;
    Swift::String::append(SVar47,SVar52);
    SVar48.bridgeObject = (void *)0xe300000000000000;
    SVar48.str = (char *)0x707061;
    SVar53.bridgeObject = puVar14;
    SVar53.str = pcVar31;
    Swift::String::append(SVar48,SVar53);
    SVar49.bridgeObject = (void *)0xe200000000000000;
    SVar49.str = (char *)0x205d;
    SVar54.bridgeObject = puVar14;
    SVar54.str = pcVar31;
    Swift::String::append(SVar49,SVar54);
    SVar55.bridgeObject = puVar14;
    SVar55.str = pcVar31;
    Swift::String::append(SVar45,SVar55);
    pvVar5 = local_b8.bridgeObject;
    pcVar31 = local_b8.str;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar8 = &DAT_1005336f0;
    _swift_allocObject(&DAT_1005336f0,0x30,7);
    *(char **)(puVar8 + 0x10) = pcVar31;
    *(void **)(puVar8 + 0x18) = pvVar5;
    *(undefined8 *)(puVar8 + 0x20) = 0;
    *(undefined8 *)(puVar8 + 0x28) = 0xe000000000000000;
    local_98 = thunk_FUN_100099310;
    local_b8.bridgeObject = (void *)0x42000000;
    local_b8.str = PTR___NSConcreteStackBlock_100521110;
    local_a8 = FUN_1000c7e7c;
    puStack_a0 = &DAT_100533708;
    local_90 = puVar8;
    aBlock = __Block_copy(&local_b8);
    DVar17.unknown = pvVar5;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar17);
    local_78 = PTR___swiftEmptyArrayStorage_100524190;
    puVar18 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar8 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar19 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    Swift::SetAlgebra::_init(lVar34,&local_78,puVar8,puVar19,DVar10.unknown,puVar18);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    (**(code **)(lVar33 + 8))(lVar34,DVar10.unknown);
    (**(code **)(lVar35 + 8))(qos.unknown,DVar11.unknown);
    _swift_release(local_90);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    LVar20 = LVar9;
    FUN_100099338(LVar9.unknown,&DAT_100558f50);
    lVar13 = local_168;
    lVar33 = local_168;
    (**(code **)(lVar32 + 0x10))(local_168,LVar20.unknown,LVar9.unknown);
    uVar7 = (uint)lVar33;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar20.unknown = pvVar5;
    _swift_bridgeObjectRetain();
    pOVar21 = os::Logger::get_logObject(LVar20);
    pOVar22 = pOVar21;
    _os_log_type_enabled(pOVar21,uVar7 & 0xff);
    if ((int)pOVar22 == 0) {
      _swift_bridgeObjectRelease_n(pvVar5,2);
    }
    else {
      puVar23 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar24 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      local_b8.str = pcVar24;
      *puVar23 = 0x8220102;
      FUN_10012dbb0(pcVar31,pvVar5,&local_b8);
      *(char **)(puVar23 + 1) = pcVar31;
      _swift_bridgeObjectRelease_n(pvVar5,2);
      __os_log_impl(0x100000000,pOVar21,uVar7 & 0xff,"%{public}s",puVar23,0xc);
      FUN_100043f24(pcVar24);
      _swift_slowDealloc(pcVar24,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar23,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar32 + 8))(lVar13,LVar9.unknown);
    _swift_bridgeObjectRelease(pvVar29);
    puVar8 = &DAT_10042b4f8;
    _swift_getKeyPath(&DAT_10042b4f8);
    pPVar25 = (Published *)&DAT_10042b520;
    _swift_getKeyPath(&DAT_10042b520);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_b8.bridgeObject;
    local_b8 = (String)(auVar3 << 0x40);
    _swift_retain(unaff_x20);
    Combine::Published::_set_subscript(pPVar25,&local_b8,unaff_x20,puVar8,pPVar25);
    TVar26 = Swift::TaskPriority::typeMetadataAccessor();
    puVar4 = local_160;
    (**(code **)(*(long *)(TVar26.unknown + -8) + 0x38))(local_160,1,1,TVar26.unknown);
    pMVar27 = (MainActor *)&DAT_1005333a8;
    _swift_allocObject(&DAT_1005333a8,0x18,7);
    _swift_weakInit(pMVar27 + 0x10,unaff_x20);
    this = Swift::MainActor::typeMetadataAccessor();
    puVar8 = PTR_typeMetadataAccessor_1005246d8;
    pMVar28 = pMVar27;
    _swift_retain();
    pMVar28 = Swift::MainActor::get_shared(this,pMVar28);
    puVar18 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    puVar8 = &DAT_100533740;
    _swift_allocObject(&DAT_100533740,0x31,7);
    *(MainActor **)(puVar8 + 0x10) = pMVar28;
    *(undefined8 **)(puVar8 + 0x18) = puVar18;
    *(MainActor **)(puVar8 + 0x20) = pMVar27;
    *(undefined8 *)(puVar8 + 0x28) = 0;
    puVar8[0x30] = 1;
    _swift_release(pMVar27);
    FUN_1001b1e74(0,0,puVar4,&DAT_10042b850,puVar8);
    _swift_release();
    FUN_1002179c4();
    FUN_100217d50();
  }
  return;
}

