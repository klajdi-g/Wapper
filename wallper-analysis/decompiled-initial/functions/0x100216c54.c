// rea decompile_all
// name: FUN_100216c54
// address: 0x100216c54
// body: available
// range: 0x100216c54-0x10021718b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100216c54(void)

{
  uint uVar1;
  Logger LVar2;
  DispatchWorkItemFlags DVar3;
  DispatchQoS DVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  void *aBlock;
  undefined8 *puVar9;
  undefined8 *puVar10;
  OS_os_log *pOVar11;
  OS_os_log *pOVar12;
  undefined4 *puVar13;
  undefined *puVar14;
  ID self;
  NSString *pNVar15;
  char *pcVar16;
  long extraout_x8;
  long lVar17;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar18;
  long unaff_x20;
  long lVar19;
  long lVar20;
  long lVar21;
  DispatchWorkItemFlags qos;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  undefined *local_100;
  undefined8 local_f8;
  undefined *local_f0;
  long local_e8;
  undefined *local_e0;
  undefined *local_b8;
  undefined *local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  
  LVar2 = os::Logger::typeMetadataAccessor();
  lVar18 = *(long *)(LVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  lVar19 = (long)&local_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar17 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  lVar21 = lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar4 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar20 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  qos.unknown = (undefined *)(lVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_1002178c8();
  lVar5 = unaff_x20 + _TtC7Wallper19ShuffleQueueManager::playlistManager;
  _swift_weakLoadStrong();
  if (lVar5 != 0) {
    puVar6 = &DAT_10042b460;
    _swift_getKeyPath(&DAT_10042b460);
    puVar7 = &DAT_10042b488;
    _swift_getKeyPath(&DAT_10042b488);
    Combine::Published::_get_subscript(&local_b8,lVar5,puVar6,puVar7);
    _swift_release(puVar6);
    _swift_release(puVar7);
    if (((ulong)local_b8 & 1) == 0) {
      local_b8 = (undefined *)0x5b;
      local_b0 = (undefined *)0xe100000000000000;
      local_78 = (undefined *)0x4f464e49;
      uStack_70 = 0xe400000000000000;
      local_88 = 0x20;
      uStack_80 = 0xe100000000000000;
      local_f0 = DVar4.unknown;
      local_e8 = lVar5;
      local_e0 = LVar2.unknown;
      FUN_100026df4();
      pcVar16 = (char *)0x0;
      puVar6 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar22 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_88,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,puVar7,puVar7);
      SVar26.bridgeObject = puVar6;
      SVar26.str = pcVar16;
      Swift::String::append(SVar22,SVar26);
      _swift_bridgeObjectRelease(SVar22.bridgeObject);
      SVar22.bridgeObject = (void *)0xe300000000000000;
      SVar22.str = (char *)0x5b205d;
      SVar27.bridgeObject = puVar6;
      SVar27.str = pcVar16;
      Swift::String::append(SVar22,SVar27);
      SVar23.bridgeObject = (void *)0xe300000000000000;
      SVar23.str = (char *)0x707061;
      SVar28.bridgeObject = puVar6;
      SVar28.str = pcVar16;
      Swift::String::append(SVar23,SVar28);
      SVar24.bridgeObject = (void *)0xe200000000000000;
      SVar24.str = (char *)0x205d;
      SVar29.bridgeObject = puVar6;
      SVar29.str = pcVar16;
      Swift::String::append(SVar24,SVar29);
      SVar25.bridgeObject = (void *)0x80000001004e1d50;
      SVar25.str = (char *)0x100000000000003a;
      SVar30.bridgeObject = puVar6;
      SVar30.str = pcVar16;
      Swift::String::append(SVar25,SVar30);
      puVar7 = local_b0;
      puVar6 = local_b8;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      local_f8 = DAT_100559010;
      puVar8 = &DAT_100533358;
      _swift_allocObject(&DAT_100533358,0x30,7);
      local_100 = puVar6;
      *(undefined **)(puVar8 + 0x10) = puVar6;
      *(undefined **)(puVar8 + 0x18) = puVar7;
      *(undefined8 *)(puVar8 + 0x20) = 0;
      *(undefined8 *)(puVar8 + 0x28) = 0xe000000000000000;
      local_98 = FUN_100099310;
      local_b8 = PTR___NSConcreteStackBlock_100521110;
      local_b0 = (undefined *)0x42000000;
      local_a8 = FUN_1000c7e7c;
      puStack_a0 = &DAT_100533370;
      local_90 = puVar8;
      aBlock = __Block_copy(&local_b8);
      DVar4.unknown = puVar7;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar4);
      local_78 = PTR___swiftEmptyArrayStorage_100524190;
      puVar9 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar6 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar10 = &DAT_100553dc0;
      FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
      Swift::SetAlgebra::_init(lVar21,&local_78,puVar6,puVar10,DVar3.unknown,puVar9);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(aBlock);
      (**(code **)(lVar17 + 8))(lVar21,DVar3.unknown);
      (**(code **)(lVar20 + 8))(qos.unknown,local_f0);
      _swift_release(local_90);
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      puVar6 = local_e0;
      puVar8 = local_e0;
      FUN_100099338(local_e0,&DAT_100558f50);
      lVar5 = lVar19;
      (**(code **)(lVar18 + 0x10))(lVar19,puVar8,puVar6);
      uVar1 = (uint)lVar5;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar2.unknown = puVar7;
      _swift_bridgeObjectRetain();
      pOVar11 = os::Logger::get_logObject(LVar2);
      pOVar12 = pOVar11;
      _os_log_type_enabled(pOVar11,uVar1 & 0xff);
      lVar5 = local_e8;
      if ((int)pOVar12 == 0) {
        _swift_bridgeObjectRelease_n(puVar7,2);
      }
      else {
        puVar13 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        puVar14 = (undefined *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar13 = 0x8220102;
        puVar8 = local_100;
        local_b8 = puVar14;
        FUN_10012dbb0(local_100,puVar7,&local_b8);
        *(undefined **)(puVar13 + 1) = puVar8;
        _swift_bridgeObjectRelease_n(puVar7,2);
        __os_log_impl(0x100000000,pOVar11,uVar1 & 0xff,"%{public}s",puVar13,0xc);
        FUN_100043f24(puVar14);
        _swift_slowDealloc(puVar14,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar13,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar18 + 8))(lVar19,puVar6);
      self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
      pNVar15 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      NSUserDefaults::removeObjectForKey_(self,pNVar15);
      FUN_1001b4358(1);
    }
    _swift_release(lVar5);
  }
  return;
}

