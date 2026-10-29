// rea decompile_all
// name: FUN_10013ea78
// address: 0x10013ea78
// body: available
// range: 0x10013ea78-0x10013f14b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10013ea78(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  uint uVar4;
  Logger LVar5;
  DispatchWorkItemFlags DVar6;
  DispatchQoS DVar7;
  ID IVar8;
  NSString *pNVar9;
  ID IVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  void *aBlock;
  DispatchQoS DVar13;
  undefined *puVar14;
  Logger LVar15;
  OS_os_log *pOVar17;
  OS_os_log *pOVar18;
  undefined4 *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  char *pcVar22;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar23;
  bool bVar24;
  long unaff_x20;
  undefined8 *puVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  ID self;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  undefined1 auStack_140 [8];
  DispatchWorkItemFlags local_138;
  long local_130;
  long local_128;
  long local_120;
  undefined *local_118;
  undefined1 *local_110;
  long local_108;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_c0;
  undefined *local_b8;
  code *local_b0;
  undefined *local_a8;
  code *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *puVar16;
  
  LVar5 = os::Logger::typeMetadataAccessor();
  lVar23 = *(long *)(LVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar23 + 0x40));
  DVar6 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar26 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar26 + 0x40));
  lVar27 = (long)(auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar7 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar29 = *(long *)(DVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar29 + 0x40));
  local_138.unknown = (undefined *)(lVar27 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  if (*(char *)(unaff_x20 + 0x30) == '\x01') {
    self = *(ID *)(unaff_x20 + 0x18);
    objc_stub::synchronize(self);
    IVar8 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
    *(undefined1 *)(unaff_x20 + 0x21) = 1;
    lVar28 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
    if (lVar28 == 0) {
      *(undefined1 *)(unaff_x20 + 0x21) = 0;
    }
    else {
      bVar24 = false;
      puVar25 = (undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x28);
      local_130 = lVar29;
      local_128 = lVar27;
      local_120 = lVar26;
      local_118 = DVar6.unknown;
      local_110 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
      local_108 = lVar23;
      do {
        uVar12 = *puVar25;
        _swift_bridgeObjectRetain(uVar12);
        pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        IVar10 = objc_stub::objectForKey_(self,pNVar9);
        if (IVar10 == 0) {
          _swift_bridgeObjectRelease(uVar12);
        }
        else {
          Swift::__bridgeAnyObjectToAny();
          _swift_unknownObjectRelease(IVar10);
          FUN_100007d88(&local_90,&local_c0);
          pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          IVar10 = NSUserDefaults::objectForKey_(IVar8,pNVar9);
          if (IVar10 == 0) {
            uStack_88 = 0;
            local_90 = (undefined *)0x0;
            uStack_78 = 0;
            uStack_80 = 0;
          }
          else {
            Swift::__bridgeAnyObjectToAny();
            _swift_unknownObjectRelease(IVar10);
          }
          FUN_1000280d4(&local_c0,&local_e0);
          ppuVar11 = &local_90;
          FUN_10013fa6c(ppuVar11,&local_e0);
          FUN_10002a29c(&local_e0,&DAT_10054d428,&DAT_100420300);
          FUN_10002a29c(&local_90,&DAT_10054d428,&DAT_100420300);
          if (((ulong)ppuVar11 & 1) == 0) {
            ppuVar11 = &local_c0;
            FUN_100007bd0(ppuVar11,local_a8);
            Swift::__bridgeAnythingToObjectiveC();
            pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            _swift_bridgeObjectRelease(uVar12);
            NSUserDefaults::setObject_forKey_(IVar8,ppuVar11,pNVar9);
            _swift_unknownObjectRelease(ppuVar11);
            bVar24 = true;
          }
          else {
            _swift_bridgeObjectRelease(uVar12);
          }
          FUN_100043f24(&local_c0);
        }
        puVar25 = puVar25 + 2;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      *(undefined1 *)(unaff_x20 + 0x21) = 0;
      if (bVar24) {
        IVar8 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
        if (DAT_100554810 != -1) {
          _swift_once(&DAT_100554810,FUN_10013e56c);
        }
        NSNotificationCenter::postNotificationName_object_(IVar8,DAT_100577c48,0);
        uVar12 = 0;
        local_c0 = (undefined *)0x5b;
        local_b8 = (undefined *)0xe100000000000000;
        local_90 = (undefined *)0x4f464e49;
        uStack_88 = 0xe400000000000000;
        local_e0 = 0x20;
        uStack_d8 = 0xe100000000000000;
        FUN_100026df4(0);
        pcVar22 = (char *)0x0;
        puVar21 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar30 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,&local_e0,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,uVar12,uVar12);
        SVar34.bridgeObject = puVar21;
        SVar34.str = pcVar22;
        Swift::String::append(SVar30,SVar34);
        _swift_bridgeObjectRelease(SVar30.bridgeObject);
        SVar30.bridgeObject = (void *)0xe300000000000000;
        SVar30.str = (char *)0x5b205d;
        SVar35.bridgeObject = puVar21;
        SVar35.str = pcVar22;
        Swift::String::append(SVar30,SVar35);
        SVar31.bridgeObject = (void *)0xe300000000000000;
        SVar31.str = (char *)0x707061;
        SVar36.bridgeObject = puVar21;
        SVar36.str = pcVar22;
        Swift::String::append(SVar31,SVar36);
        SVar32.bridgeObject = (void *)0xe200000000000000;
        SVar32.str = (char *)0x205d;
        SVar37.bridgeObject = puVar21;
        SVar37.str = pcVar22;
        Swift::String::append(SVar32,SVar37);
        SVar33.bridgeObject = (void *)0x80000001004de3f0;
        SVar33.str = (char *)0xd000000000000020;
        SVar38.bridgeObject = puVar21;
        SVar38.str = pcVar22;
        Swift::String::append(SVar33,SVar38);
        puVar3 = local_b8;
        puVar21 = local_c0;
        puVar2 = local_110;
        if (DAT_100559018 != -1) {
          _swift_once(&DAT_100559018,FUN_1002854a0);
        }
        puVar20 = &DAT_10052e0a8;
        _swift_allocObject(&DAT_10052e0a8,0x30,7);
        *(undefined **)(puVar20 + 0x10) = puVar21;
        *(undefined **)(puVar20 + 0x18) = puVar3;
        *(undefined8 *)(puVar20 + 0x20) = 0;
        *(undefined8 *)(puVar20 + 0x28) = 0xe000000000000000;
        local_a0 = thunk_FUN_100099310;
        local_c0 = PTR___NSConcreteStackBlock_100521110;
        local_b8 = (undefined *)0x42000000;
        local_b0 = FUN_1000c7e7c;
        local_a8 = &DAT_10052e0c0;
        local_98 = puVar20;
        aBlock = __Block_copy(&local_c0);
        DVar13.unknown = puVar3;
        _swift_bridgeObjectRetain();
        DVar6.unknown = local_138.unknown;
        DVar13 = Dispatch::DispatchQoS::get_unspecified(DVar13);
        local_90 = PTR___swiftEmptyArrayStorage_100524190;
        FUN_1000fedc8();
        puVar20 = &DAT_100561080;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar14 = puVar20;
        FUN_100077ac0();
        puVar1 = local_118;
        lVar23 = local_128;
        Swift::SetAlgebra::_init(local_128,&local_90,puVar20,puVar14,local_118,DVar13.unknown);
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar6);
        __Block_release(aBlock);
        (**(code **)(local_120 + 8))(lVar23,puVar1);
        (**(code **)(local_130 + 8))(DVar6.unknown,DVar7.unknown);
        _swift_release(local_98);
        if (DAT_100559020 != -1) {
          _swift_once(&DAT_100559020,FUN_100285420);
        }
        LVar15 = LVar5;
        FUN_100099338(LVar5.unknown,&DAT_100558f50);
        lVar23 = local_108;
        puVar16 = puVar2;
        (**(code **)(local_108 + 0x10))(puVar2,LVar15.unknown,LVar5.unknown);
        uVar4 = (uint)puVar16;
        static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
        LVar15.unknown = puVar3;
        _swift_bridgeObjectRetain();
        pOVar17 = os::Logger::get_logObject(LVar15);
        pOVar18 = pOVar17;
        _os_log_type_enabled(pOVar17,uVar4 & 0xff);
        if ((int)pOVar18 == 0) {
          _swift_bridgeObjectRelease_n(puVar3,2);
        }
        else {
          puVar19 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          puVar20 = (undefined *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar19 = 0x8220102;
          local_c0 = puVar20;
          FUN_10012dbb0(puVar21,puVar3,&local_c0);
          *(undefined **)(puVar19 + 1) = puVar21;
          _swift_bridgeObjectRelease_n(puVar3,2);
          __os_log_impl(0x100000000,pOVar17,uVar4 & 0xff,"%{public}s",puVar19,0xc);
          FUN_100043f24(puVar20);
          _swift_slowDealloc(puVar20,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar19,0xffffffffffffffff,0xffffffffffffffff);
        }
        (**(code **)(lVar23 + 8))(puVar2,LVar5.unknown);
      }
    }
  }
  return;
}

