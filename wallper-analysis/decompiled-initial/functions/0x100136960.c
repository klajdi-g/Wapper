// rea decompile_all
// name: FUN_100136960
// address: 0x100136960
// body: available
// range: 0x100136960-0x100136fcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100136ee4 to 0x100413538 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$sleep (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100136f90 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100136960(void)

{
  DispatchWorkItemFlags qos;
  long lVar1;
  char cVar2;
  undefined1 auVar3 [16];
  String SVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  void *aBlock;
  DispatchQoS DVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  Logger LVar13;
  OS_os_log *pOVar14;
  OS_os_log *pOVar15;
  undefined4 *puVar16;
  long lVar17;
  long *plVar18;
  _StringGuts _Var19;
  char *pcVar20;
  char *pcVar21;
  void *in_x3;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  Task TVar27;
  undefined8 uVar28;
  long unaff_x22;
  undefined8 uVar29;
  double dVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  undefined8 local_60;
  
  cVar2 = *(char *)(unaff_x22 + 0x169);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x148);
  puVar8 = &DAT_100427060;
  _swift_getKeyPath(&DAT_100427060);
  puVar9 = &DAT_100427088;
  _swift_getKeyPath(&DAT_100427088);
  Combine::Published::_get_subscript(unaff_x22 + 0x168,uVar26,puVar8,puVar9);
  _swift_release(puVar9);
  _swift_release(puVar8);
  TVar27.unknown = *(undefined **)(unaff_x22 + 0x148);
  if ((cVar2 == '\x01') && ((*(byte *)(unaff_x22 + 0x168) & 1) != 0)) {
    puVar8 = &DAT_100426f40;
    _swift_getKeyPath();
    pcVar21 = &DAT_100426f68;
    _swift_getKeyPath();
    _Var19.unknown = puVar8;
    pcVar20 = pcVar21;
    Combine::Published::_get_subscript(unaff_x22 + 0x58,TVar27.unknown);
    _swift_release(pcVar21);
    _swift_release(puVar8);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x60);
    SVar4 = *(String *)(unaff_x22 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x78) = 0;
    *(undefined8 *)(unaff_x22 + 0x80) = 0xe000000000000000;
    Swift::_StringGuts::grow(0x2c,_Var19);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x80));
    ((String *)(unaff_x22 + 0x68))->str = (char *)0xd00000000000002a;
    *(undefined8 *)(unaff_x22 + 0x70) = 0x80000001004de200;
    SVar34.bridgeObject = in_x3;
    SVar34.str = pcVar20;
    Swift::String::append(SVar4,SVar34);
    _swift_bridgeObjectRelease(uVar26);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x70);
    SVar4 = *(String *)(unaff_x22 + 0x68);
    *(undefined8 *)(unaff_x22 + 0x88) = 0x5b;
    *(undefined8 *)(unaff_x22 + 0x90) = 0xe100000000000000;
    *(undefined8 *)(unaff_x22 + 0x98) = 0x4f464e49;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0xe400000000000000;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0x20;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0xe100000000000000;
    FUN_100026df4();
    pcVar21 = (char *)0x0;
    puVar8 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar31 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,(undefined8 *)(unaff_x22 + 0xa8),0,
                        PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,uVar26,uVar26);
    SVar35.bridgeObject = puVar8;
    SVar35.str = pcVar21;
    Swift::String::append(SVar31,SVar35);
    _swift_bridgeObjectRelease(SVar31.bridgeObject);
    SVar31.bridgeObject = (void *)0xe300000000000000;
    SVar31.str = (char *)0x5b205d;
    SVar36.bridgeObject = puVar8;
    SVar36.str = pcVar21;
    Swift::String::append(SVar31,SVar36);
    SVar32.bridgeObject = (void *)0xe300000000000000;
    SVar32.str = (char *)0x707061;
    SVar37.bridgeObject = puVar8;
    SVar37.str = pcVar21;
    Swift::String::append(SVar32,SVar37);
    SVar33.bridgeObject = (void *)0xe200000000000000;
    SVar33.str = (char *)0x205d;
    SVar38.bridgeObject = puVar8;
    SVar38.str = pcVar21;
    Swift::String::append(SVar33,SVar38);
    SVar39.bridgeObject = puVar8;
    SVar39.str = pcVar21;
    Swift::String::append(SVar4,SVar39);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x88);
    puVar8 = *(undefined **)(unaff_x22 + 0x90);
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    lVar17 = *(long *)(unaff_x22 + 0x110);
    qos.unknown = *(undefined **)(unaff_x22 + 0x118);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar29 = *(undefined8 *)(unaff_x22 + 0xf0);
    lVar1 = *(long *)(unaff_x22 + 0xf8);
    puVar9 = &DAT_10052da48;
    _swift_allocObject(&DAT_10052da48,0x30,7);
    *(undefined8 *)(puVar9 + 0x10) = uVar26;
    *(undefined **)(puVar9 + 0x18) = puVar8;
    *(undefined8 *)(puVar9 + 0x20) = 0;
    *(undefined8 *)(puVar9 + 0x28) = 0xe000000000000000;
    *(code **)(unaff_x22 + 0x30) = thunk_FUN_100099310;
    *(undefined **)(unaff_x22 + 0x38) = puVar9;
    *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
    *(undefined **)(unaff_x22 + 0x28) = &DAT_10052da60;
    aBlock = __Block_copy((void *)(unaff_x22 + 0x10));
    DVar10.unknown = puVar8;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar10);
    *(undefined **)(unaff_x22 + 0xc0) = PTR___swiftEmptyArrayStorage_100524190;
    puVar11 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar9 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar12 = puVar9;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(uVar28,unaff_x22 + 0xc0,puVar9,puVar12,uVar29,puVar11);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    (**(code **)(lVar1 + 8))(uVar28,uVar29);
    (**(code **)(lVar17 + 8))(qos.unknown,uVar25);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    lVar17 = *(long *)(unaff_x22 + 0xe0);
    uVar28 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar25 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar29 = uVar25;
    FUN_100099338(uVar25,&DAT_100558f50);
    (**(code **)(lVar17 + 0x10))(uVar28,uVar29,uVar25);
    uVar7 = (uint)uVar28;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar13.unknown = puVar8;
    _swift_bridgeObjectRetain();
    pOVar14 = os::Logger::get_logObject(LVar13);
    pOVar15 = pOVar14;
    _os_log_type_enabled(pOVar14,uVar7 & 0xff);
    lVar17 = *(long *)(unaff_x22 + 0xe0);
    uVar28 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar29 = *(undefined8 *)(unaff_x22 + 0xd8);
    if ((int)pOVar15 == 0) {
      _swift_bridgeObjectRelease_n(puVar8,2);
    }
    else {
      puVar16 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      uVar25 = 0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar16 = 0x8220102;
      local_60 = uVar25;
      FUN_10012dbb0(uVar26,puVar8,&local_60);
      *(undefined8 *)(puVar16 + 1) = uVar26;
      _swift_bridgeObjectRelease_n(puVar8,2);
      __os_log_impl(0x100000000,pOVar14,uVar7 & 0xff,"%{public}s",puVar16,0xc);
      FUN_100043f24(uVar25);
      _swift_slowDealloc(uVar25,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar16,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar17 + 8))(uVar28,uVar29);
    _swift_bridgeObjectRelease(uVar24);
    _swift_task_switch(FUN_100136fd0,0,0);
    return;
  }
  _swift_release();
  bVar6 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar27);
  if (!bVar6) {
    lVar17 = *(long *)(unaff_x22 + 0xd0) + 0x10;
    _swift_weakLoadStrong();
    *(long *)(unaff_x22 + 0x148) = lVar17;
    if (lVar17 != 0) {
      *(undefined8 *)(unaff_x22 + 0xb8) = 0;
      _swift_stdlib_random(unaff_x22 + 0xb8,8);
      uVar22 = *(ulong *)(unaff_x22 + 0xb8);
      uVar23 = uVar22 + (uVar22 << 0x35);
      while (uVar23 < 0x1ffffffffff801) {
        *(undefined8 *)(unaff_x22 + 200) = 0;
        _swift_stdlib_random(unaff_x22 + 200,8);
        uVar22 = *(ulong *)(unaff_x22 + 200);
        uVar23 = uVar22 + (uVar22 << 0x35);
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar22;
      uVar23 = SUB168(auVar3 * ZEXT816(0x20000000000001),8);
      dVar30 = 2100000000000.0;
      if (uVar23 != 0x20000000000000) {
        dVar30 = (((double)uVar23 / 9007199254740992.0) * 300.0 + 0.0 + 1800.0) * 1000000000.0;
      }
      if (0x7fefffffffffffff < (ulong)ABS(dVar30)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100136fc8);
        (*pcVar5)();
      }
      if (dVar30 <= -1.0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100136fcc);
        (*pcVar5)();
      }
      if (1.8446744073709552e+19 <= dVar30) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100136fd0);
        (*pcVar5)();
      }
      plVar18 = (long *)(ulong)*(uint *)(PTR__sleep_100524758 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x150) = plVar18;
      *plVar18 = unaff_x22;
      plVar18[1] = (long)FUN_100136810;
      (extension_Swift)::Swift::Task::_sleep((long)dVar30);
      return;
    }
  }
  uVar24 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar28 = *(undefined8 *)(unaff_x22 + 0xe8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x128));
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar28);
                    /* WARNING: Could not recover jumptable at 0x000100136f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

