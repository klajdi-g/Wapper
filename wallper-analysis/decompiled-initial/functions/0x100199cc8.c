// rea decompile_all
// name: FUN_100199cc8
// address: 0x100199cc8
// body: available
// range: 0x100199cc8-0x10019a25b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100199cc8(void)

{
  DispatchWorkItemFlags qos;
  long lVar1;
  bool bVar2;
  uint uVar3;
  Task TVar4;
  ulong uVar5;
  long lVar6;
  void *aBlock;
  DispatchQoS DVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  Logger LVar10;
  OS_os_log *pOVar11;
  OS_os_log *pOVar12;
  undefined4 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  TaskPriority TVar16;
  char *pcVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  Published *pPVar20;
  undefined8 uVar21;
  long unaff_x22;
  undefined8 uVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  undefined8 local_68;
  undefined *puStack_60;
  
  TVar4.unknown = *(undefined **)(unaff_x22 + 200);
  _swift_release();
  bVar2 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar4);
  if (!bVar2) {
    uVar5 = 0x796669746f7073;
    FUN_10017e6a4(0x796669746f7073,0xe700000000000000);
    pPVar20 = *(Published **)(unaff_x22 + 0x68);
    if (((uVar5 & 1) == 0) ||
       (*(char *)((long)&pPVar20->unknown + _TtC7Wallper17NowPlayingManager::spotifyIsPlaying) !=
        '\x01')) {
      puVar14 = &DAT_100429b98;
      _swift_getKeyPath(&DAT_100429b98);
      puVar15 = &DAT_100429bc0;
      _swift_getKeyPath(&DAT_100429bc0);
      *(undefined1 *)(unaff_x22 + 0xd8) = 0;
      _swift_retain(pPVar20);
      Combine::Published::_set_subscript(pPVar20,unaff_x22 + 0xd8,pPVar20,puVar14,puVar15);
    }
    else {
      puVar14 = &DAT_100429be0;
      _swift_getKeyPath(&DAT_100429be0);
      puVar15 = &DAT_100429c08;
      _swift_getKeyPath(&DAT_100429c08);
      *(undefined1 *)(unaff_x22 + 0xd9) = 1;
      _swift_retain(pPVar20);
      lVar6 = unaff_x22 + 0xd9;
      Combine::Published::_set_subscript(pPVar20,lVar6,pPVar20,puVar14,puVar15);
      local_68 = 0x5b;
      puStack_60 = (undefined *)0xe100000000000000;
      *(undefined8 *)(unaff_x22 + 0x40) = 0x4f464e49;
      *(undefined8 *)(unaff_x22 + 0x48) = 0xe400000000000000;
      *(undefined8 *)(unaff_x22 + 0x50) = 0x20;
      *(undefined8 *)(unaff_x22 + 0x58) = 0xe100000000000000;
      FUN_100026df4();
      pcVar17 = (char *)0x0;
      puVar14 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar23 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,unaff_x22 + 0x50,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,lVar6,lVar6);
      SVar27.bridgeObject = puVar14;
      SVar27.str = pcVar17;
      Swift::String::append(SVar23,SVar27);
      _swift_bridgeObjectRelease(SVar23.bridgeObject);
      SVar23.bridgeObject = (void *)0xe300000000000000;
      SVar23.str = (char *)0x5b205d;
      SVar28.bridgeObject = puVar14;
      SVar28.str = pcVar17;
      Swift::String::append(SVar23,SVar28);
      SVar24.bridgeObject = (void *)0xe500000000000000;
      SVar24.str = (char *)0x616964656d;
      SVar29.bridgeObject = puVar14;
      SVar29.str = pcVar17;
      Swift::String::append(SVar24,SVar29);
      SVar25.bridgeObject = (void *)0xe200000000000000;
      SVar25.str = (char *)0x205d;
      SVar30.bridgeObject = puVar14;
      SVar30.str = pcVar17;
      Swift::String::append(SVar25,SVar30);
      SVar26.bridgeObject = (void *)0x80000001004dfe40;
      SVar26.str = (char *)0xd000000000000034;
      SVar31.bridgeObject = puVar14;
      SVar31.str = pcVar17;
      Swift::String::append(SVar26,SVar31);
      puVar14 = puStack_60;
      uVar19 = local_68;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      lVar6 = *(long *)(unaff_x22 + 0xb0);
      qos.unknown = *(undefined **)(unaff_x22 + 0xb8);
      uVar21 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar18 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x90);
      lVar1 = *(long *)(unaff_x22 + 0x98);
      puVar15 = &DAT_100530a70;
      _swift_allocObject(&DAT_100530a70,0x30,7);
      *(undefined8 *)(puVar15 + 0x10) = uVar19;
      *(undefined **)(puVar15 + 0x18) = puVar14;
      *(undefined8 *)(puVar15 + 0x20) = 0;
      *(undefined8 *)(puVar15 + 0x28) = 0xe000000000000000;
      *(code **)(unaff_x22 + 0x30) = thunk_FUN_100099310;
      *(undefined **)(unaff_x22 + 0x38) = puVar15;
      *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
      *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
      *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
      *(undefined **)(unaff_x22 + 0x28) = &DAT_100530a88;
      aBlock = __Block_copy((void *)(unaff_x22 + 0x10));
      DVar7.unknown = puVar14;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar7);
      *(undefined **)(unaff_x22 + 0x60) = PTR___swiftEmptyArrayStorage_100524190;
      puVar8 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar15 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar9 = &DAT_100553dc0;
      FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
      Swift::SetAlgebra::_init(uVar21,unaff_x22 + 0x60,puVar15,puVar9,uVar22,puVar8);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(aBlock);
      (**(code **)(lVar1 + 8))(uVar21,uVar22);
      (**(code **)(lVar6 + 8))(qos.unknown,uVar18);
      _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      lVar6 = *(long *)(unaff_x22 + 0x80);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar22 = uVar18;
      FUN_100099338(uVar18,&DAT_100558f50);
      (**(code **)(lVar6 + 0x10))(uVar21,uVar22,uVar18);
      uVar3 = (uint)uVar21;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar10.unknown = puVar14;
      _swift_bridgeObjectRetain();
      pOVar11 = os::Logger::get_logObject(LVar10);
      pOVar12 = pOVar11;
      _os_log_type_enabled(pOVar11,uVar3 & 0xff);
      lVar6 = *(long *)(unaff_x22 + 0x80);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x78);
      if ((int)pOVar12 == 0) {
        _swift_bridgeObjectRelease_n(puVar14,2);
      }
      else {
        puVar13 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        uVar18 = 0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar13 = 0x8220102;
        local_68 = uVar18;
        FUN_10012dbb0(uVar19,puVar14,&local_68);
        *(undefined8 *)(puVar13 + 1) = uVar19;
        _swift_bridgeObjectRelease_n(puVar14,2);
        __os_log_impl(0x100000000,pOVar11,uVar3 & 0xff,"%{public}s",puVar13,0xc);
        FUN_100043f24(uVar18);
        _swift_slowDealloc(uVar18,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar13,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar6 + 8))(uVar21,uVar22);
      TVar16.unknown = (undefined *)0x796669746f7073;
      FUN_10017e6a4(0x796669746f7073,0xe700000000000000);
      if (((ulong)TVar16.unknown & 1) != 0) {
        uVar19 = *(undefined8 *)(unaff_x22 + 0x68);
        uVar21 = *(undefined8 *)(unaff_x22 + 0x70);
        Swift::TaskPriority::get_userInitiated(TVar16);
        TVar16 = Swift::TaskPriority::typeMetadataAccessor();
        (**(code **)(*(long *)(TVar16.unknown + -8) + 0x38))(uVar21,0,1,TVar16.unknown);
        puVar14 = &DAT_100530ac0;
        _swift_allocObject(&DAT_100530ac0,0x30,7);
        *(undefined8 *)(puVar14 + 0x10) = 0;
        *(undefined8 *)(puVar14 + 0x18) = 0;
        puVar14[0x20] = 1;
        *(undefined8 *)(puVar14 + 0x28) = uVar19;
        _swift_retain(uVar19);
        FUN_100176d50(0,0,uVar21,&DAT_10042a020,puVar14);
        _swift_release();
        FUN_10002a29c(uVar21,&DAT_100561090,&DAT_10041c870);
      }
    }
  }
  uVar21 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x70);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb8));
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar22);
                    /* WARNING: Could not recover jumptable at 0x00010019a148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

