// rea decompile_all
// name: FUN_1001e8a9c
// address: 0x1001e8a9c
// body: available
// range: 0x1001e8a9c-0x1001e943b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e9438 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001e8a9c(void)

{
  long lVar1;
  DispatchWorkItemFlags qos;
  char cVar2;
  String SVar3;
  bool bVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  Published *pPVar8;
  undefined8 uVar10;
  void *aBlock;
  DispatchQoS DVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  Logger LVar14;
  OS_os_log *pOVar15;
  OS_os_log *pOVar16;
  undefined4 *puVar17;
  char *pcVar18;
  URL UVar19;
  NSURL *pNVar20;
  ulong uVar21;
  _StringGuts _Var22;
  char *pcVar23;
  long lVar24;
  ID IVar25;
  long lVar26;
  undefined8 uVar27;
  long unaff_x22;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  code *pcVar33;
  undefined8 uVar34;
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
  String SVar47;
  char *local_70;
  undefined *puStack_68;
  long local_60;
  Published *pPVar9;
  
  local_60 = *(long *)PTR____stack_chk_guard_100521138;
  uVar10 = *(undefined8 *)(unaff_x22 + 0x198);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1a0));
  puVar6 = &DAT_10042ae68;
  _swift_getKeyPath(&DAT_10042ae68);
  puVar7 = &DAT_10042ae90;
  _swift_getKeyPath(&DAT_10042ae90);
  Combine::Published::_get_subscript(unaff_x22 + 200,uVar10,puVar6,puVar7);
  _swift_release(puVar7);
  _swift_release(puVar6);
  lVar24 = *(long *)(unaff_x22 + 200);
  if (*(long *)(lVar24 + 0x10) == 0) {
    bVar4 = true;
  }
  else {
    lVar26 = *(long *)(unaff_x22 + 0xf0);
    uVar21 = *(ulong *)(unaff_x22 + 0xf8);
    _swift_bridgeObjectRetain(lVar24);
    FUN_10000464c(lVar26);
    bVar4 = (uVar21 & 1) == 0;
    if (!bVar4) {
      (**(code **)(*(long *)(unaff_x22 + 0x158) + 0x10))
                (*(undefined8 *)(unaff_x22 + 400),
                 *(long *)(lVar24 + 0x38) + *(long *)(*(long *)(unaff_x22 + 0x158) + 0x48) * lVar26,
                 *(undefined8 *)(unaff_x22 + 0x150));
    }
    _swift_bridgeObjectRelease(lVar24);
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar27 = *(undefined8 *)(unaff_x22 + 400);
  lVar26 = *(long *)(unaff_x22 + 0x168);
  pPVar9 = *(Published **)(unaff_x22 + 0x170);
  puVar7 = *(undefined **)(unaff_x22 + 0x150);
  lVar1 = *(long *)(unaff_x22 + 0x158);
  uVar31 = *(undefined8 *)(unaff_x22 + 0xe0);
  pcVar33 = *(code **)(lVar1 + 0x38);
  (*pcVar33)(uVar27,bVar4,1,puVar7);
  _swift_bridgeObjectRelease(lVar24);
  (**(code **)(lVar1 + 0x10))(uVar10,uVar31,puVar7);
  puVar6 = puVar7;
  (*pcVar33)(uVar10,0,1);
  lVar24 = (long)*(int *)(lVar26 + 0x30);
  FUN_100077938(uVar27,pPVar9);
  FUN_100077938(uVar10,(long)&pPVar9->unknown + lVar24);
  pcVar33 = *(code **)(lVar1 + 0x30);
  pPVar8 = pPVar9;
  (*pcVar33)(pPVar9,1,puVar7);
  if ((int)pPVar8 == 1) {
    uVar10 = *(undefined8 *)(unaff_x22 + 400);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x150);
    FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x188),&DAT_100553d90,&DAT_10041bf10);
    FUN_10002a29c(uVar10,&DAT_100553d90,&DAT_10041bf10);
    lVar24 = (long)&pPVar9->unknown + lVar24;
    (*pcVar33)(lVar24,1,uVar27);
    if ((int)lVar24 == 1) {
      _Var22.unknown = &DAT_100553d90;
      pcVar23 = &DAT_10041bf10;
      FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x170));
LAB_1001e8dd4:
      if ((*(byte *)(unaff_x22 + 0x1a9) & 1) != 0) {
        SVar3 = *(String *)(unaff_x22 + 0xf0);
        local_70 = (char *)0x0;
        puStack_68 = (undefined *)0xe000000000000000;
        Swift::_StringGuts::grow(0x41,_Var22);
        SVar36.bridgeObject = (void *)0x80000001004e1060;
        SVar36.str = (char *)0xd000000000000023;
        SVar40.bridgeObject = puVar6;
        SVar40.str = pcVar23;
        Swift::String::append(SVar36,SVar40);
        SVar41.bridgeObject = puVar6;
        SVar41.str = pcVar23;
        Swift::String::append(SVar3,SVar41);
        uVar10 = 0xd00000000000001c;
        SVar35.bridgeObject = (void *)0x80000001004e1090;
        SVar35.str = (char *)0xd00000000000001c;
        SVar42.bridgeObject = puVar6;
        SVar42.str = pcVar23;
        Swift::String::append(SVar35,SVar42);
        UVar19.unknown = puStack_68;
        SVar3.bridgeObject = puStack_68;
        SVar3.str = local_70;
        local_70 = (char *)0x5b;
        puStack_68 = (undefined *)0xe100000000000000;
        *(undefined8 *)(unaff_x22 + 0xa8) = 0x4f464e49;
        *(undefined8 *)(unaff_x22 + 0xb0) = 0xe400000000000000;
        *(undefined8 *)(unaff_x22 + 0xb8) = 0x20;
        *(undefined8 *)(unaff_x22 + 0xc0) = 0xe100000000000000;
        FUN_100026df4();
        pcVar23 = (char *)0x0;
        puVar6 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar36 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,unaff_x22 + 0xb8,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,uVar10,uVar10);
        SVar43.bridgeObject = puVar6;
        SVar43.str = pcVar23;
        Swift::String::append(SVar36,SVar43);
        _swift_bridgeObjectRelease(SVar36.bridgeObject);
        SVar37.bridgeObject = (void *)0xe300000000000000;
        SVar37.str = (char *)0x5b205d;
        SVar44.bridgeObject = puVar6;
        SVar44.str = pcVar23;
        Swift::String::append(SVar37,SVar44);
        SVar38.bridgeObject = (void *)0xe300000000000000;
        SVar38.str = (char *)0x707061;
        SVar45.bridgeObject = puVar6;
        SVar45.str = pcVar23;
        Swift::String::append(SVar38,SVar45);
        SVar39.bridgeObject = (void *)0xe200000000000000;
        SVar39.str = (char *)0x205d;
        SVar46.bridgeObject = puVar6;
        SVar46.str = pcVar23;
        Swift::String::append(SVar39,SVar46);
        SVar47.bridgeObject = puVar6;
        SVar47.str = pcVar23;
        Swift::String::append(SVar3,SVar47);
        puVar6 = puStack_68;
        pcVar23 = local_70;
        if (DAT_100559018 != -1) {
          _swift_once(&DAT_100559018,FUN_1002854a0);
        }
        lVar24 = *(long *)(unaff_x22 + 0x140);
        qos.unknown = *(undefined **)(unaff_x22 + 0x148);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x130);
        uVar31 = *(undefined8 *)(unaff_x22 + 0x138);
        uVar27 = *(undefined8 *)(unaff_x22 + 0x120);
        lVar26 = *(long *)(unaff_x22 + 0x128);
        puVar7 = &DAT_100532130;
        _swift_allocObject(&DAT_100532130,0x30,7);
        *(char **)(puVar7 + 0x10) = pcVar23;
        *(undefined **)(puVar7 + 0x18) = puVar6;
        *(undefined8 *)(puVar7 + 0x20) = 0;
        *(undefined8 *)(puVar7 + 0x28) = 0xe000000000000000;
        *(code **)(unaff_x22 + 0x30) = thunk_FUN_100099310;
        *(undefined **)(unaff_x22 + 0x38) = puVar7;
        *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
        *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
        *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
        *(undefined **)(unaff_x22 + 0x28) = &DAT_100532148;
        aBlock = __Block_copy((void *)(unaff_x22 + 0x10));
        DVar11.unknown = puVar6;
        _swift_bridgeObjectRetain();
        Dispatch::DispatchQoS::get_unspecified(DVar11);
        *(undefined **)(unaff_x22 + 0xd0) = PTR___swiftEmptyArrayStorage_100524190;
        puVar12 = &DAT_100553db0;
        FUN_100047f94(&DAT_100553db0,0xff,PTR_typeMetadataAccessor_1005244a8,
                      PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
        puVar7 = &DAT_100561080;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar13 = &DAT_100553dc0;
        FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                      PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
        Swift::SetAlgebra::_init(uVar10,unaff_x22 + 0xd0,puVar7,puVar13,uVar27,puVar12);
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
        __Block_release(aBlock);
        (**(code **)(lVar26 + 8))(uVar10,uVar27);
        (**(code **)(lVar24 + 8))(qos.unknown,uVar31);
        _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
        if (DAT_100559020 != -1) {
          _swift_once(&DAT_100559020,FUN_100285420);
        }
        lVar24 = *(long *)(unaff_x22 + 0x110);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x118);
        uVar31 = *(undefined8 *)(unaff_x22 + 0x108);
        uVar27 = uVar31;
        FUN_100099338(uVar31,&DAT_100558f50);
        (**(code **)(lVar24 + 0x10))(uVar10,uVar27,uVar31);
        uVar5 = (uint)uVar10;
        static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
        LVar14.unknown = puVar6;
        _swift_bridgeObjectRetain();
        pOVar15 = os::Logger::get_logObject(LVar14);
        pOVar16 = pOVar15;
        _os_log_type_enabled(pOVar15,uVar5 & 0xff);
        lVar24 = *(long *)(unaff_x22 + 0x110);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x118);
        uVar27 = *(undefined8 *)(unaff_x22 + 0x108);
        if ((int)pOVar16 == 0) {
          _swift_bridgeObjectRelease_n(puVar6,2);
        }
        else {
          puVar17 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          pcVar18 = (char *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar17 = 0x8220102;
          local_70 = pcVar18;
          FUN_10012dbb0(pcVar23,puVar6,&local_70);
          *(char **)(puVar17 + 1) = pcVar23;
          _swift_bridgeObjectRelease_n(puVar6,2);
          __os_log_impl(0x100000000,pOVar15,uVar5 & 0xff,"%{public}s",puVar17,0xc);
          FUN_100043f24(pcVar18);
          _swift_slowDealloc(pcVar18,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar17,0xffffffffffffffff,0xffffffffffffffff);
        }
        (**(code **)(lVar24 + 8))(uVar10,uVar27);
        _swift_bridgeObjectRelease();
        IVar25 = *(ID *)(*(long *)(unaff_x22 + 0x198) + _TtC7Wallper14PreviewManager::fm);
        pNVar20 = Foundation::URL::_bridgeToObjectiveC(UVar19);
        *(undefined8 *)(unaff_x22 + 0xd8) = 0;
        IVar25 = objc_stub::removeItemAtURL_error_(IVar25,pNVar20,unaff_x22 + 0xd8);
        uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
        if ((int)IVar25 == 0) {
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          _swift_errorRelease(uVar10);
        }
        lVar24 = _TtC7Wallper14PreviewManager::failedIDs;
        lVar26 = *(long *)(unaff_x22 + 0x198);
        uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
        uVar27 = *(undefined8 *)(unaff_x22 + 0xf8);
        _swift_beginAccess(lVar26 + _TtC7Wallper14PreviewManager::failedIDs,unaff_x22 + 0x90,0x21,0)
        ;
        pPVar9 = (Published *)(lVar26 + lVar24);
        FUN_10027ea68(uVar10,uVar27);
        _swift_endAccess(unaff_x22 + 0x90);
      }
      lVar24 = *(long *)(unaff_x22 + 0x198);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x178);
      cVar2 = *(char *)(unaff_x22 + 0x1a8);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar27 = *(undefined8 *)(unaff_x22 + 0xf8);
      puVar6 = &DAT_10042ae68;
      _swift_getKeyPath(&DAT_10042ae68);
      puVar7 = &DAT_10042ae90;
      _swift_getKeyPath(&DAT_10042ae90);
      pcVar33 = (code *)(unaff_x22 + 0x40);
      Combine::Published::_modify_subscript(pPVar9,pcVar33,lVar24,puVar6,puVar7);
      FUN_10027ec10(uVar31,uVar10,uVar27);
      (*pcVar33)(unaff_x22 + 0x40,0);
      _swift_release(puVar7);
      _swift_release(puVar6);
      FUN_10002a29c(uVar31,&DAT_100553d90,&DAT_10041bf10);
      _swift_beginAccess(lVar24 + _TtC7Wallper14PreviewManager::validatedIDs,unaff_x22 + 0x78,0x21,0
                        );
      FUN_100227384(uVar10,uVar27);
      _swift_endAccess(unaff_x22 + 0x78);
      _swift_bridgeObjectRelease(uVar27);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x198);
      if (cVar2 == '\x01') {
        FUN_1001dee2c(*(undefined8 *)(unaff_x22 + 0xf0),*(undefined8 *)(unaff_x22 + 0xf8),
                      *(undefined8 *)(unaff_x22 + 0x100));
      }
      else {
        FUN_1001da998(*(undefined8 *)(unaff_x22 + 0xf0),*(undefined8 *)(unaff_x22 + 0xf8));
      }
      goto LAB_1001e9364;
    }
LAB_1001e8cf8:
    FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x170),&DAT_10054ea38,&DAT_100426270);
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x150);
    FUN_100077938(*(undefined8 *)(unaff_x22 + 0x170),*(undefined8 *)(unaff_x22 + 0x180));
    lVar26 = (long)&pPVar9->unknown + lVar24;
    (*pcVar33)(lVar26,1,uVar10);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar27 = *(undefined8 *)(unaff_x22 + 400);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x180);
    if ((int)lVar26 == 1) {
      uVar28 = *(undefined8 *)(unaff_x22 + 0x150);
      lVar24 = *(long *)(unaff_x22 + 0x158);
      FUN_10002a29c(uVar10,&DAT_100553d90,&DAT_10041bf10);
      FUN_10002a29c(uVar27,&DAT_100553d90,&DAT_10041bf10);
      (**(code **)(lVar24 + 8))(uVar31,uVar28);
      goto LAB_1001e8cf8;
    }
    uVar29 = *(undefined8 *)(unaff_x22 + 0x170);
    lVar26 = *(long *)(unaff_x22 + 0x158);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x150);
    (**(code **)(lVar26 + 0x20))(uVar28,(long)&pPVar9->unknown + lVar24,uVar30);
    puVar6 = &DAT_100553da0;
    FUN_100047f94(&DAT_100553da0,0xff,PTR_typeMetadataAccessor_100520a18,
                  PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
    bVar4 = Swift::Equatable::___infix(uVar31,uVar28,uVar30);
    pPVar9 = (Published *)(ulong)bVar4;
    pcVar33 = *(code **)(lVar26 + 8);
    (*pcVar33)(uVar28,uVar30);
    _Var22.unknown = &DAT_100553d90;
    pcVar23 = &DAT_10041bf10;
    FUN_10002a29c(uVar10,&DAT_100553d90,&DAT_10041bf10);
    FUN_10002a29c(uVar27,&DAT_100553d90,&DAT_10041bf10);
    (*pcVar33)(uVar31,uVar30);
    FUN_10002a29c(uVar29);
    if (bVar4) goto LAB_1001e8dd4;
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x198);
LAB_1001e9364:
  _swift_release(uVar10);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x118);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 400));
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar34);
  if (*(long *)PTR____stack_chk_guard_100521138 != local_60) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Could not recover jumptable at 0x0001001e9404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

