// rea decompile_all
// name: FUN_1001c19d4
// address: 0x1001c19d4
// body: available
// range: 0x1001c19d4-0x1001c2493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001001c1cdc) */

void FUN_1001c19d4(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  DispatchWorkItemFlags DVar4;
  UUID UVar5;
  ID self;
  NSString *pNVar6;
  Data DVar7;
  Data DVar8;
  JSONDecoder *pJVar9;
  undefined *puVar10;
  Published *pPVar11;
  undefined8 uVar12;
  void *aBlock;
  DispatchQoS DVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  Logger LVar16;
  OS_os_log *pOVar17;
  OS_os_log *pOVar18;
  undefined4 *puVar19;
  char *pcVar20;
  char *pcVar21;
  undefined8 extraout_x1;
  UUID UVar22;
  char *pcVar23;
  long extraout_x8;
  long extraout_x8_00;
  long lVar24;
  long extraout_x8_01;
  undefined *puVar25;
  long extraout_x8_02;
  long lVar26;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  PassthroughSubject *pPVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  UUID UVar31;
  UUID UVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  undefined *local_140;
  undefined8 local_138;
  undefined *local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  DispatchWorkItemFlags local_108;
  long local_100;
  undefined *puStack_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined *local_d0;
  char *local_c8;
  char *local_c0;
  char *local_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined8 uStack_78;
  
  local_d0 = (undefined *)os::Logger::typeMetadataAccessor();
  local_d8 = *(long *)(local_d0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d8 + 0x40));
  lVar24 = (long)&local_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_e0 = lVar24;
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_e8 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e8 + 0x40));
  lVar24 = lVar24 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_f0 = lVar24;
  puStack_f8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_100 = *(long *)(puStack_f8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_100 + 0x40));
  puVar25 = (undefined *)(lVar24 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar24 = 0;
  local_108.unknown = puVar25;
  FUN_1001b7b68();
  local_118 = lVar24;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar24 + -8) + 0x40));
  lVar26 = (long)puVar25 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar24 = 0;
  local_110 = lVar26;
  FUN_10025ee04();
  lVar29 = *(long *)(lVar24 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar29 + 0x40));
  UVar32.unknown = (undefined *)(lVar26 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  puVar25 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar25 + -8) + 0x40));
  lVar24 = (long)UVar32.unknown - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_128 = lVar24;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar24 = lVar24 - extraout_x12;
  local_120 = lVar24;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar24 = lVar24 - extraout_x12_00;
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  local_c8 = *(char **)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c8 + 0x40));
  UVar31.unknown = (undefined *)(lVar24 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
  self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  DVar7.unknown = (undefined *)NSUserDefaults::dataForKey_(self,pNVar6);
  if (DVar7.unknown != (undefined *)0x0) {
    uVar12 = extraout_x1;
    local_130 = DVar4.unknown;
    DVar8 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar7);
    pJVar9 = Foundation::JSONDecoder::typeMetadataAccessor();
    _swift_allocObject(pJVar9,*(undefined4 *)(pJVar9 + 0x30),*(undefined2 *)(pJVar9 + 0x34));
    pJVar9 = Foundation::JSONDecoder::init(pJVar9);
    DVar7.unknown = &DAT_10054a968;
    FUN_100002f94(&DAT_10054a968,&DAT_10041f070);
    FUN_1001d4f30(&DAT_1005569f0,&DAT_1005569f8,&DAT_10042c488,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100523b58);
    Foundation::JSONDecoder::_decode(pJVar9,DVar7);
    local_140 = DVar8.unknown;
    local_138 = uVar12;
    _swift_release(pJVar9);
    pcVar21 = local_c0;
    puVar25 = &DAT_10042a610;
    _swift_getKeyPath(&DAT_10042a610);
    puVar10 = &DAT_10042a638;
    _swift_getKeyPath(&DAT_10042a638);
    Combine::Published::_get_subscript(&local_c0);
    _swift_release(puVar25);
    _swift_release(puVar10);
    pcVar23 = local_c0;
    pcVar20 = pcVar21;
    FUN_1001da1d8(pcVar21,local_c0);
    _swift_bridgeObjectRelease(pcVar23);
    if (((ulong)pcVar20 & 1) == 0) {
      pPVar11 = (Published *)&DAT_10042a610;
      _swift_getKeyPath(&DAT_10042a610);
      _swift_getKeyPath(&DAT_10042a638);
      _swift_bridgeObjectRetain(pcVar21);
      _swift_retain();
      Combine::Published::_set_subscript(pPVar11,&local_c0);
      puVar25 = &DAT_10042a670;
      _swift_getKeyPath(&DAT_10042a670);
      puVar10 = &DAT_10042a698;
      _swift_getKeyPath(&DAT_10042a698);
      Combine::Published::_get_subscript(lVar24);
      _swift_release(puVar25);
      _swift_release(puVar10);
      pcVar23 = local_c8;
      lVar26 = lVar24;
      (**(code **)(local_c8 + 0x30))(lVar24,1,UVar5.unknown);
      if ((int)lVar26 == 1) {
        FUN_10002a29c(lVar24,&DAT_10054a9c8,&DAT_10041bbe0);
      }
      else {
        (**(code **)(pcVar23 + 0x20))(UVar31.unknown,lVar24,UVar5.unknown);
        uVar28 = 0;
        uVar30 = *(ulong *)(pcVar21 + 0x10);
        do {
          lVar24 = local_120;
          if (uVar30 == uVar28) {
            pcVar1 = *(code **)(local_c8 + 0x38);
            (*pcVar1)(local_120,1,1,UVar5.unknown);
            _swift_getKeyPath(&DAT_10042a670);
            pPVar11 = (Published *)&DAT_10042a698;
            _swift_getKeyPath(&DAT_10042a698);
            lVar26 = local_128;
            FUN_1000087e4(lVar24,local_128,&DAT_10054a9c8,&DAT_10041bbe0);
            _swift_retain();
            Combine::Published::_set_subscript(pPVar11,lVar26);
            FUN_1001b69c4();
            FUN_10002a29c(lVar24,&DAT_10054a9c8,&DAT_10041bbe0);
            lVar24 = local_110;
            pPVar27 = *(PassthroughSubject **)
                       (unaff_x20 + _TtC7Wallper15PlaylistManager::activationChanged);
            pcVar23 = (char *)0x1;
            UVar32 = UVar5;
            (*pcVar1)(local_110,1);
            puVar14 = (undefined8 *)(lVar24 + *(int *)(local_118 + 0x14));
            *puVar14 = 0;
            puVar14[1] = 0;
            Combine::PassthroughSubject::send(pPVar27,lVar24);
            FUN_100029548(lVar24,FUN_1001b7b68);
            (**(code **)(local_c8 + 8))(UVar31.unknown);
            goto LAB_1001c2040;
          }
          if (*(ulong *)(pcVar21 + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1001c2464);
            (*pcVar1)();
          }
          UVar22.unknown = FUN_10025ee04;
          FUN_100029504(pcVar21 + *(long *)(lVar29 + 0x48) * uVar28 +
                                  ((ulong)*(byte *)(lVar29 + 0x50) + 0x20 &
                                  ((ulong)*(byte *)(lVar29 + 0x50) ^ 0xffffffffffffffff)),
                        UVar32.unknown);
          uVar28 = uVar28 + 1;
          bVar2 = Foundation::UUID::___infix(UVar32,UVar31,UVar22);
          FUN_100029548(UVar32.unknown,FUN_10025ee04);
        } while (!bVar2);
        (**(code **)(local_c8 + 8))(UVar31.unknown,UVar5.unknown);
      }
      pcVar23 = &DAT_10041beb0;
      FUN_100002f94(&DAT_10054ac18,&DAT_10041beb0);
      UVar5.unknown = &DAT_100556858;
      UVar32.unknown =
           PTR__Combine__protocol_conformance_descriptor_for_Combine_PassthroughSubject<A,B>___Combine_Subject_in_Combine_>Combine__Subject_100521460
      ;
      FUN_1000087a0(&DAT_100556858,&DAT_10054ac18);
      (extension_Combine)::Combine::Subject::_send();
LAB_1001c2040:
      FUN_1001bbef0();
      local_c0 = (char *)0x0;
      local_b8 = (char *)0xe000000000000000;
      Swift::_StringGuts::grow(0x36,(_StringGuts)UVar5.unknown);
      SVar35.bridgeObject = (void *)0x80000001004e0b50;
      SVar35.str = (char *)0xd000000000000027;
      SVar39.bridgeObject = UVar32.unknown;
      SVar39.str = pcVar23;
      Swift::String::append(SVar35,SVar39);
      puVar25 = *(undefined **)(pcVar21 + 0x10);
      _swift_bridgeObjectRelease(pcVar21);
      local_80 = puVar25;
      SVar33 = Swift::CustomStringConvertible::get_description();
      SVar40.bridgeObject = UVar32.unknown;
      SVar40.str = pcVar23;
      Swift::String::append(SVar33,SVar40);
      _swift_bridgeObjectRelease(SVar33.bridgeObject);
      uVar12 = 0x73696c79616c7020;
      SVar34.bridgeObject = (void *)0xed00002929732874;
      SVar34.str = (char *)0x73696c79616c7020;
      SVar41.bridgeObject = UVar32.unknown;
      SVar41.str = pcVar23;
      Swift::String::append(SVar34,SVar41);
      pcVar21 = local_b8;
      SVar33.bridgeObject = local_b8;
      SVar33.str = local_c0;
      local_c0 = (char *)0x5b;
      local_b8 = (undefined *)0xe100000000000000;
      local_80 = (undefined *)0x4f464e49;
      uStack_78 = 0xe400000000000000;
      local_90 = 0x20;
      uStack_88 = 0xe100000000000000;
      FUN_100026df4();
      pcVar23 = (char *)0x0;
      puVar25 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar35 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_90,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,uVar12,uVar12);
      SVar42.bridgeObject = puVar25;
      SVar42.str = pcVar23;
      Swift::String::append(SVar35,SVar42);
      _swift_bridgeObjectRelease(SVar35.bridgeObject);
      SVar36.bridgeObject = (void *)0xe300000000000000;
      SVar36.str = (char *)0x5b205d;
      SVar43.bridgeObject = puVar25;
      SVar43.str = pcVar23;
      Swift::String::append(SVar36,SVar43);
      SVar37.bridgeObject = (void *)0xe300000000000000;
      SVar37.str = (char *)0x707061;
      SVar44.bridgeObject = puVar25;
      SVar44.str = pcVar23;
      Swift::String::append(SVar37,SVar44);
      SVar38.bridgeObject = (void *)0xe200000000000000;
      SVar38.str = (char *)0x205d;
      SVar45.bridgeObject = puVar25;
      SVar45.str = pcVar23;
      Swift::String::append(SVar38,SVar45);
      local_c8 = pcVar21;
      SVar46.bridgeObject = puVar25;
      SVar46.str = pcVar23;
      Swift::String::append(SVar33,SVar46);
      pcVar23 = local_b8;
      pcVar21 = local_c0;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar25 = &DAT_100531878;
      _swift_allocObject(&DAT_100531878,0x30,7);
      *(char **)(puVar25 + 0x10) = pcVar21;
      *(char **)(puVar25 + 0x18) = pcVar23;
      *(undefined8 *)(puVar25 + 0x20) = 0;
      *(undefined8 *)(puVar25 + 0x28) = 0xe000000000000000;
      local_a0 = thunk_FUN_100099310;
      local_c0 = PTR___NSConcreteStackBlock_100521110;
      local_b8 = (char *)0x42000000;
      local_b0 = FUN_1000c7e7c;
      puStack_a8 = &DAT_100531890;
      local_98 = puVar25;
      aBlock = __Block_copy(&local_c0);
      DVar13.unknown = pcVar23;
      _swift_bridgeObjectRetain();
      DVar4.unknown = local_108.unknown;
      Dispatch::DispatchQoS::get_unspecified(DVar13);
      local_80 = PTR___swiftEmptyArrayStorage_100524190;
      puVar14 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar25 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar15 = &DAT_100553dc0;
      FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
      lVar24 = local_f0;
      puVar10 = local_130;
      Swift::SetAlgebra::_init(local_f0,&local_80,puVar25,puVar15,local_130,puVar14);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar4);
      __Block_release(aBlock);
      (**(code **)(local_e8 + 8))(lVar24,puVar10);
      (**(code **)(local_100 + 8))(DVar4.unknown,puStack_f8);
      _swift_release(local_98);
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      puVar25 = local_d0;
      puVar10 = local_d0;
      FUN_100099338(local_d0,&DAT_100558f50);
      lVar26 = local_d8;
      lVar24 = local_e0;
      lVar29 = local_e0;
      (**(code **)(local_d8 + 0x10))(local_e0,puVar10,puVar25);
      uVar3 = (uint)lVar29;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar16.unknown = pcVar23;
      _swift_bridgeObjectRetain();
      pOVar17 = os::Logger::get_logObject(LVar16);
      pOVar18 = pOVar17;
      _os_log_type_enabled(pOVar17,uVar3 & 0xff);
      if ((int)pOVar18 == 0) {
        _swift_bridgeObjectRelease_n(pcVar23,2);
      }
      else {
        puVar19 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar20 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar19 = 0x8220102;
        local_c0 = pcVar20;
        FUN_10012dbb0(pcVar21,pcVar23,&local_c0);
        *(char **)(puVar19 + 1) = pcVar21;
        _swift_bridgeObjectRelease_n(pcVar23,2);
        __os_log_impl(0x100000000,pOVar17,uVar3 & 0xff,"%{public}s",puVar19,0xc);
        FUN_100043f24(pcVar20);
        _swift_slowDealloc(pcVar20,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar19,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar26 + 8))(lVar24,puVar25);
      pcVar21 = local_c8;
    }
    _swift_bridgeObjectRelease(pcVar21);
    FUN_100093624(local_140,local_138);
  }
  return;
}

