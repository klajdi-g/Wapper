// rea decompile_all
// name: FUN_100296154
// address: 0x100296154
// body: available
// range: 0x100296154-0x100296aa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100296154(Published *param_1)

{
  char cVar1;
  uint uVar2;
  DispatchWorkItemFlags DVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  void *pvVar7;
  OS_os_log *pOVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  DispatchQoS DVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  Logger LVar16;
  OS_os_log *pOVar17;
  ID self;
  char *pcVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long unaff_x20;
  long lVar19;
  DispatchWorkItemFlags qos;
  long lVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  undefined *local_f0;
  undefined *local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  uVar2 = (uint)param_1 & 1;
  local_b8 = (undefined *)os::Logger::typeMetadataAccessor();
  local_c0 = *(long *)(local_b8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c0 + 0x40));
  lVar20 = (long)&local_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_e0 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar20 - extraout_x12;
  DVar3 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_d0 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d0 + 0x40));
  lVar19 = lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_c8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_d8 = *(long *)(local_c8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d8 + 0x40));
  qos.unknown = (undefined *)(lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar4 = &DAT_10042db28;
  _swift_getKeyPath(&DAT_10042db28);
  puVar5 = &DAT_10042db50;
  _swift_getKeyPath(&DAT_10042db50);
  Combine::Published::_get_subscript(&local_b0);
  _swift_release(puVar4);
  _swift_release(puVar5);
  puVar4 = local_b0;
  cVar1 = *(char *)(unaff_x20 + _TtC7Wallper20NetworkStatusMonitor::hasReceivedFirstPath);
  *(undefined1 *)(unaff_x20 + _TtC7Wallper20NetworkStatusMonitor::hasReceivedFirstPath) = 1;
  if ((uVar2 != (byte)local_b0) || (cVar1 == '\0')) {
    _swift_getKeyPath(&DAT_10042db28);
    _swift_getKeyPath(&DAT_10042db50);
    local_b0 = (undefined *)CONCAT71(local_b0._1_7_,(char)uVar2);
    _swift_retain();
    ppuVar6 = &local_b0;
    Combine::Published::_set_subscript(param_1,ppuVar6);
    if (((ulong)param_1 & 1) == 0) {
      local_b0 = (undefined *)0x5b;
      local_a8 = (undefined *)0xe100000000000000;
      local_70 = (undefined *)0x4f464e49;
      uStack_68 = 0xe400000000000000;
      local_80 = 0x20;
      uStack_78 = 0xe100000000000000;
      FUN_100026df4();
      pcVar18 = (char *)0x0;
      puVar4 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar21 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_80,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,ppuVar6,ppuVar6);
      SVar34.bridgeObject = puVar4;
      SVar34.str = pcVar18;
      Swift::String::append(SVar21,SVar34);
      _swift_bridgeObjectRelease(SVar21.bridgeObject);
      SVar21.bridgeObject = (void *)0xe300000000000000;
      SVar21.str = (char *)0x5b205d;
      SVar35.bridgeObject = puVar4;
      SVar35.str = pcVar18;
      Swift::String::append(SVar21,SVar35);
      SVar26.bridgeObject = (void *)0xe300000000000000;
      SVar26.str = (char *)0x707061;
      SVar36.bridgeObject = puVar4;
      SVar36.str = pcVar18;
      Swift::String::append(SVar26,SVar36);
      SVar27.bridgeObject = (void *)0xe200000000000000;
      SVar27.str = (char *)0x205d;
      SVar37.bridgeObject = puVar4;
      SVar37.str = pcVar18;
      Swift::String::append(SVar27,SVar37);
      SVar28.bridgeObject = (void *)0x80000001004e37e0;
      SVar28.str = (char *)0x1000000000000029;
      SVar38.bridgeObject = puVar4;
      SVar38.str = pcVar18;
      Swift::String::append(SVar28,SVar38);
      puVar5 = local_a8;
      puVar4 = local_b0;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      local_e8 = (undefined *)DAT_100559010;
      puVar11 = &DAT_1005372e0;
      _swift_allocObject(&DAT_1005372e0,0x30,7);
      local_f0 = puVar4;
      *(undefined **)(puVar11 + 0x10) = puVar4;
      *(undefined **)(puVar11 + 0x18) = puVar5;
      *(undefined8 *)(puVar11 + 0x20) = 0;
      *(undefined8 *)(puVar11 + 0x28) = 0xe000000000000000;
      local_90 = FUN_100099310;
      local_b0 = PTR___NSConcreteStackBlock_100521110;
      local_a8 = (undefined *)0x42000000;
      local_a0 = FUN_1000c7e7c;
      puStack_98 = &DAT_1005372f8;
      local_88 = puVar11;
      pvVar7 = __Block_copy(&local_b0);
      DVar12.unknown = puVar5;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar12);
      local_70 = PTR___swiftEmptyArrayStorage_100524190;
      puVar13 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar4 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar14 = &DAT_100553dc0;
      FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
      Swift::SetAlgebra::_init(lVar19,&local_70,puVar4,puVar14,DVar3.unknown,puVar13);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(pvVar7);
      (**(code **)(local_d0 + 8))(lVar19,DVar3.unknown);
      (**(code **)(local_d8 + 8))(qos.unknown,local_c8);
      _swift_release(local_88);
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      puVar4 = local_b8;
      puVar11 = local_b8;
      FUN_100099338(local_b8,&DAT_100558f50);
      lVar19 = local_c0;
      lVar20 = local_e0;
      lVar15 = local_e0;
      (**(code **)(local_c0 + 0x10))(local_e0,puVar11,puVar4);
      uVar2 = (uint)lVar15;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar16.unknown = puVar5;
      _swift_bridgeObjectRetain();
      pOVar8 = os::Logger::get_logObject(LVar16);
      pOVar17 = pOVar8;
      _os_log_type_enabled(pOVar8,uVar2 & 0xff);
      if ((int)pOVar17 == 0) {
        _swift_bridgeObjectRelease_n(puVar5,2);
      }
      else {
        puVar9 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        puVar10 = (undefined *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar9 = 0x8220102;
        puVar11 = local_f0;
        local_b0 = puVar10;
        FUN_10012dbb0(local_f0,puVar5,&local_b0);
        *(undefined **)(puVar9 + 1) = puVar11;
        _swift_bridgeObjectRelease_n(puVar5,2);
        __os_log_impl(0x100000000,pOVar8,uVar2 & 0xff,"%{public}s",puVar9,0xc);
        FUN_100043f24(puVar10);
        _swift_slowDealloc(puVar10,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar9,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar19 + 8))(lVar20,puVar4);
      *(undefined8 *)(unaff_x20 + _TtC7Wallper20NetworkStatusMonitor::retryInterval) = 10;
      FUN_100296b30();
    }
    else {
      FUN_100296aa8();
      if (((ulong)puVar4 & 1) == 0) {
        local_b0 = (undefined *)0x5b;
        local_a8 = (undefined *)0xe100000000000000;
        local_70 = (undefined *)0x4f464e49;
        uStack_68 = 0xe400000000000000;
        local_80 = 0x20;
        uStack_78 = 0xe100000000000000;
        FUN_100026df4();
        pcVar18 = (char *)0x0;
        puVar4 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar21 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,&local_80,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,ppuVar6,ppuVar6);
        SVar29.bridgeObject = puVar4;
        SVar29.str = pcVar18;
        Swift::String::append(SVar21,SVar29);
        _swift_bridgeObjectRelease(SVar21.bridgeObject);
        SVar22.bridgeObject = (void *)0xe300000000000000;
        SVar22.str = (char *)0x5b205d;
        SVar30.bridgeObject = puVar4;
        SVar30.str = pcVar18;
        Swift::String::append(SVar22,SVar30);
        SVar23.bridgeObject = (void *)0xe300000000000000;
        SVar23.str = (char *)0x707061;
        SVar31.bridgeObject = puVar4;
        SVar31.str = pcVar18;
        Swift::String::append(SVar23,SVar31);
        SVar24.bridgeObject = (void *)0xe200000000000000;
        SVar24.str = (char *)0x205d;
        SVar32.bridgeObject = puVar4;
        SVar32.str = pcVar18;
        Swift::String::append(SVar24,SVar32);
        SVar25.bridgeObject = (void *)0x80000001004e3810;
        SVar25.str = (char *)0x1000000000000031;
        SVar33.bridgeObject = puVar4;
        SVar33.str = pcVar18;
        Swift::String::append(SVar25,SVar33);
        puVar5 = local_a8;
        puVar4 = local_b0;
        if (DAT_100559018 != -1) {
          _swift_once(&DAT_100559018,FUN_1002854a0);
        }
        local_e0 = DAT_100559010;
        puVar11 = &DAT_100537330;
        _swift_allocObject(&DAT_100537330,0x30,7);
        local_e8 = puVar4;
        *(undefined **)(puVar11 + 0x10) = puVar4;
        *(undefined **)(puVar11 + 0x18) = puVar5;
        *(undefined8 *)(puVar11 + 0x20) = 0;
        *(undefined8 *)(puVar11 + 0x28) = 0xe000000000000000;
        local_90 = thunk_FUN_100099310;
        local_b0 = PTR___NSConcreteStackBlock_100521110;
        local_a8 = (undefined *)0x42000000;
        local_a0 = FUN_1000c7e7c;
        puStack_98 = &DAT_100537348;
        local_88 = puVar11;
        pvVar7 = __Block_copy(&local_b0);
        DVar12.unknown = puVar5;
        _swift_bridgeObjectRetain();
        Dispatch::DispatchQoS::get_unspecified(DVar12);
        local_70 = PTR___swiftEmptyArrayStorage_100524190;
        puVar13 = &DAT_100553db0;
        FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                      PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
        puVar4 = &DAT_100561080;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar14 = &DAT_100553dc0;
        FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                      PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
        Swift::SetAlgebra::_init(lVar19,&local_70,puVar4,puVar14,DVar3.unknown,puVar13);
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
        __Block_release(pvVar7);
        (**(code **)(local_d0 + 8))(lVar19,DVar3.unknown);
        (**(code **)(local_d8 + 8))(qos.unknown,local_c8);
        _swift_release(local_88);
        if (DAT_100559020 != -1) {
          _swift_once(&DAT_100559020,FUN_100285420);
        }
        puVar4 = local_b8;
        puVar11 = local_b8;
        FUN_100099338(local_b8,&DAT_100558f50);
        lVar19 = local_c0;
        lVar15 = lVar20;
        (**(code **)(local_c0 + 0x10))(lVar20,puVar11,puVar4);
        uVar2 = (uint)lVar15;
        static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
        LVar16.unknown = puVar5;
        _swift_bridgeObjectRetain();
        pOVar8 = os::Logger::get_logObject(LVar16);
        pOVar17 = pOVar8;
        _os_log_type_enabled(pOVar8,uVar2 & 0xff);
        if ((int)pOVar17 == 0) {
          _swift_bridgeObjectRelease_n(puVar5,2);
        }
        else {
          puVar9 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          puVar10 = (undefined *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar9 = 0x8220102;
          puVar11 = local_e8;
          local_b0 = puVar10;
          FUN_10012dbb0(local_e8,puVar5,&local_b0);
          *(undefined **)(puVar9 + 1) = puVar11;
          _swift_bridgeObjectRelease_n(puVar5,2);
          __os_log_impl(0x100000000,pOVar8,uVar2 & 0xff,"%{public}s",puVar9,0xc);
          FUN_100043f24(puVar10);
          _swift_slowDealloc(puVar10,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar9,0xffffffffffffffff,0xffffffffffffffff);
        }
        (**(code **)(lVar19 + 8))(lVar20,puVar4);
        self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
        if (DAT_100559a20 != -1) {
          _swift_once(&DAT_100559a20,FUN_100295af4);
        }
        NSNotificationCenter::postNotificationName_object_(self,DAT_100577de0,0);
      }
    }
  }
  return;
}

