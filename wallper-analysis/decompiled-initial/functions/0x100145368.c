// rea decompile_all
// name: FUN_100145368
// address: 0x100145368
// body: available
// range: 0x100145368-0x10014595b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100145928 to 0x100413538 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$sleep (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100145368(void)

{
  long lVar1;
  DispatchWorkItemFlags qos;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  void *aBlock;
  DispatchQoS DVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  Logger LVar10;
  OS_os_log *pOVar11;
  OS_os_log *pOVar12;
  undefined4 *puVar13;
  Published *pPVar14;
  long *plVar15;
  char *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x22;
  undefined8 uVar19;
  undefined8 uVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  undefined8 local_68;
  undefined *puStack_60;
  
  lVar6 = *(long *)(unaff_x22 + 0xe8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xf0));
  if (lVar6 == 0x3b) {
LAB_10014546c:
    lVar6 = *(long *)(unaff_x22 + 0xd8);
  }
  else {
    *(long *)(unaff_x22 + 0xe8) = *(long *)(unaff_x22 + 0xe8) + 1;
    lVar6 = *(long *)(unaff_x22 + 0x80) + 0x10;
    _swift_weakLoadStrong();
    *(long *)(unaff_x22 + 0xf0) = lVar6;
    if (lVar6 == 0) goto LAB_10014546c;
    puVar4 = &DAT_100427bc0;
    _swift_getKeyPath(&DAT_100427bc0);
    puVar5 = &DAT_100427be8;
    _swift_getKeyPath(&DAT_100427be8);
    Combine::Published::_get_subscript(unaff_x22 + 0x100,lVar6,puVar4,puVar5);
    _swift_release(puVar5);
    _swift_release(puVar4);
    if ((*(byte *)(unaff_x22 + 0x100) & 1) == 0) {
      puVar4 = &DAT_100427a80;
      _swift_getKeyPath(&DAT_100427a80);
      puVar5 = &DAT_100427aa8;
      _swift_getKeyPath(&DAT_100427aa8);
      Combine::Published::_get_subscript(unaff_x22 + 0x101,lVar6,puVar4,puVar5);
      _swift_release(puVar5);
      _swift_release(puVar4);
      if (*(char *)(unaff_x22 + 0x101) != '\a') {
        puVar4 = &DAT_100427a80;
        _swift_getKeyPath(&DAT_100427a80);
        puVar5 = &DAT_100427aa8;
        _swift_getKeyPath(&DAT_100427aa8);
        Combine::Published::_get_subscript(unaff_x22 + 0x102,lVar6,puVar4,puVar5);
        _swift_release(puVar5);
        _swift_release(puVar4);
        if (*(char *)(unaff_x22 + 0x102) != '\x01') {
          puVar4 = &DAT_100427a80;
          _swift_getKeyPath(&DAT_100427a80);
          puVar5 = &DAT_100427aa8;
          _swift_getKeyPath(&DAT_100427aa8);
          Combine::Published::_get_subscript(unaff_x22 + 0x103,lVar6,puVar4,puVar5);
          _swift_release(puVar5);
          _swift_release(puVar4);
          if (*(char *)(unaff_x22 + 0x103) != '\x06') {
            plVar15 = (long *)(ulong)*(uint *)(PTR__sleep_100524758 + 4);
            _swift_task_alloc();
            *(long **)(unaff_x22 + 0xf8) = plVar15;
            *plVar15 = unaff_x22;
            plVar15[1] = (long)FUN_100145298;
            (extension_Swift)::Swift::Task::_sleep(2000000000);
            return;
          }
        }
        uVar17 = *(undefined8 *)(unaff_x22 + 0xd8);
        _swift_release(uVar17);
        local_68 = 0x5b;
        puStack_60 = (undefined *)0xe100000000000000;
        *(undefined8 *)(unaff_x22 + 0x58) = 0x4f464e49;
        *(undefined8 *)(unaff_x22 + 0x60) = 0xe400000000000000;
        *(undefined8 *)(unaff_x22 + 0x68) = 0x20;
        *(undefined8 *)(unaff_x22 + 0x70) = 0xe100000000000000;
        FUN_100026df4();
        pcVar16 = (char *)0x0;
        puVar4 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar21 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,unaff_x22 + 0x68,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,uVar17,uVar17);
        SVar25.bridgeObject = puVar4;
        SVar25.str = pcVar16;
        Swift::String::append(SVar21,SVar25);
        _swift_bridgeObjectRelease(SVar21.bridgeObject);
        SVar21.bridgeObject = (void *)0xe300000000000000;
        SVar21.str = (char *)0x5b205d;
        SVar26.bridgeObject = puVar4;
        SVar26.str = pcVar16;
        Swift::String::append(SVar21,SVar26);
        SVar22.bridgeObject = (void *)0xe300000000000000;
        SVar22.str = (char *)0x707061;
        SVar27.bridgeObject = puVar4;
        SVar27.str = pcVar16;
        Swift::String::append(SVar22,SVar27);
        SVar23.bridgeObject = (void *)0xe200000000000000;
        SVar23.str = (char *)0x205d;
        SVar28.bridgeObject = puVar4;
        SVar28.str = pcVar16;
        Swift::String::append(SVar23,SVar28);
        SVar24.bridgeObject = (void *)0x80000001004de660;
        SVar24.str = (char *)0x1000000000000049;
        SVar29.bridgeObject = puVar4;
        SVar29.str = pcVar16;
        Swift::String::append(SVar24,SVar29);
        puVar4 = puStack_60;
        uVar17 = local_68;
        if (DAT_100559018 != -1) {
          _swift_once(&DAT_100559018,FUN_1002854a0);
        }
        lVar1 = *(long *)(unaff_x22 + 0xc0);
        qos.unknown = *(undefined **)(unaff_x22 + 200);
        uVar18 = *(undefined8 *)(unaff_x22 + 0xb0);
        uVar19 = *(undefined8 *)(unaff_x22 + 0xb8);
        uVar20 = *(undefined8 *)(unaff_x22 + 0xa0);
        lVar2 = *(long *)(unaff_x22 + 0xa8);
        puVar5 = &DAT_10052e340;
        _swift_allocObject(&DAT_10052e340,0x30,7);
        *(undefined8 *)(puVar5 + 0x10) = uVar17;
        *(undefined **)(puVar5 + 0x18) = puVar4;
        *(undefined8 *)(puVar5 + 0x20) = 0;
        *(undefined8 *)(puVar5 + 0x28) = 0xe000000000000000;
        *(code **)(unaff_x22 + 0x30) = thunk_FUN_100099310;
        *(undefined **)(unaff_x22 + 0x38) = puVar5;
        *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
        *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
        *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
        *(undefined **)(unaff_x22 + 0x28) = &DAT_10052e358;
        aBlock = __Block_copy((void *)(unaff_x22 + 0x10));
        DVar7.unknown = puVar4;
        _swift_bridgeObjectRetain();
        Dispatch::DispatchQoS::get_unspecified(DVar7);
        *(undefined **)(unaff_x22 + 0x78) = PTR___swiftEmptyArrayStorage_100524190;
        puVar8 = &DAT_100553db0;
        FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                      PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
        puVar5 = &DAT_100561080;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar9 = puVar5;
        FUN_100077ac0();
        Swift::SetAlgebra::_init(uVar18,unaff_x22 + 0x78,puVar5,puVar9,uVar20,puVar8);
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
        __Block_release(aBlock);
        (**(code **)(lVar2 + 8))(uVar18,uVar20);
        (**(code **)(lVar1 + 8))(qos.unknown,uVar19);
        _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
        if (DAT_100559020 != -1) {
          _swift_once(&DAT_100559020,FUN_100285420);
        }
        lVar1 = *(long *)(unaff_x22 + 0x90);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x98);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x88);
        uVar20 = uVar19;
        FUN_100099338(uVar19,&DAT_100558f50);
        (**(code **)(lVar1 + 0x10))(uVar18,uVar20,uVar19);
        uVar3 = (uint)uVar18;
        static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
        LVar10.unknown = puVar4;
        _swift_bridgeObjectRetain();
        pOVar11 = os::Logger::get_logObject(LVar10);
        pOVar12 = pOVar11;
        _os_log_type_enabled(pOVar11,uVar3 & 0xff);
        lVar1 = *(long *)(unaff_x22 + 0x90);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x98);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x88);
        if ((int)pOVar12 == 0) {
          _swift_bridgeObjectRelease_n(puVar4,2);
        }
        else {
          puVar13 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          uVar19 = 0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar13 = 0x8220102;
          local_68 = uVar19;
          FUN_10012dbb0(uVar17,puVar4,&local_68);
          *(undefined8 *)(puVar13 + 1) = uVar17;
          _swift_bridgeObjectRelease_n(puVar4,2);
          __os_log_impl(0x100000000,pOVar11,uVar3 & 0xff,"%{public}s",puVar13,0xc);
          FUN_100043f24(uVar19);
          _swift_slowDealloc(uVar19,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar13,0xffffffffffffffff,0xffffffffffffffff);
        }
        (**(code **)(lVar1 + 8))(uVar18,uVar20);
        pPVar14 = (Published *)&DAT_100427bc0;
        _swift_getKeyPath(&DAT_100427bc0);
        puVar4 = &DAT_100427be8;
        _swift_getKeyPath(&DAT_100427be8);
        *(undefined1 *)(unaff_x22 + 0x104) = 1;
        Combine::Published::_set_subscript(pPVar14,unaff_x22 + 0x104,lVar6,pPVar14,puVar4);
        goto LAB_100145474;
      }
    }
    _swift_release(*(undefined8 *)(unaff_x22 + 0xd8));
  }
  _swift_release(lVar6);
LAB_100145474:
  uVar18 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x98);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 200));
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar17);
                    /* WARNING: Could not recover jumptable at 0x0001001454b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

