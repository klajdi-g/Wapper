// rea decompile_all
// name: FUN_10015e364
// address: 0x10015e364
// body: available
// range: 0x10015e364-0x10015eccb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10015ec98 to 0x100227100 FUN_100227100 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10015e364(Task param_1)

{
  bool bVar1;
  uint uVar2;
  _StringGuts _Var3;
  Published *pPVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *pvVar7;
  DispatchQoS DVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  Logger LVar12;
  OS_os_log *pOVar13;
  OS_os_log *pOVar14;
  undefined4 *puVar15;
  char *pcVar16;
  Duration DVar17;
  long *plVar18;
  _StringGuts _Var19;
  char *pcVar20;
  _StringGuts _Var21;
  long lVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long unaff_x22;
  long lVar27;
  undefined8 uVar28;
  DispatchWorkItemFlags qos;
  undefined8 uVar29;
  undefined8 uVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  undefined8 uVar34;
  double dVar35;
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
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  char *local_68;
  undefined *local_60;
  
  bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
  lVar22 = _TtC7Wallper13LyricsManager::track;
  if (bVar1) {
    uVar24 = *(undefined8 *)(unaff_x22 + 0x398);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x418));
    _swift_release(uVar24);
    goto LAB_10015eb48;
  }
  lVar31 = *(long *)(unaff_x22 + 0x2f8);
  lVar33 = *(long *)(unaff_x22 + 0x2e8);
  _Var3.unknown = *(undefined **)(unaff_x22 + 0x2e0);
  _Var19.unknown = *(undefined **)(unaff_x22 + 0x2d8);
  _Var21.unknown = *(undefined **)(unaff_x22 + 0x2d0);
  *(long *)(unaff_x22 + 0x420) = _TtC7Wallper13LyricsManager::track;
  plVar18 = (long *)(*(long *)(unaff_x22 + 0x2b8) + lVar22);
  puVar5 = (undefined *)*plVar18;
  puVar23 = (undefined *)plVar18[1];
  puVar10 = (undefined *)plVar18[2];
  lVar22 = plVar18[3];
  puVar6 = (undefined *)plVar18[4];
  lVar27 = plVar18[5];
  *(undefined **)(unaff_x22 + 0x70) = _Var21.unknown;
  *(undefined **)(unaff_x22 + 0x78) = _Var19.unknown;
  *(undefined **)(unaff_x22 + 0x80) = _Var3.unknown;
  *(long *)(unaff_x22 + 0x88) = lVar33;
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x2f0);
  *(long *)(unaff_x22 + 0x98) = lVar31;
  *(undefined **)(unaff_x22 + 0xa0) = puVar5;
  *(undefined **)(unaff_x22 + 0xa8) = puVar23;
  *(undefined **)(unaff_x22 + 0xb0) = puVar10;
  *(long *)(unaff_x22 + 0xb8) = lVar22;
  *(undefined **)(unaff_x22 + 0xc0) = puVar6;
  *(long *)(unaff_x22 + 200) = lVar27;
  if (puVar23 == (undefined *)0x0) {
    uVar25 = *(undefined8 *)(unaff_x22 + 0x418);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x398);
    _swift_bridgeObjectRetain(_Var19.unknown);
    _swift_bridgeObjectRetain(lVar33);
    _swift_bridgeObjectRetain(lVar31);
    _swift_release(uVar24);
    _swift_errorRelease(uVar25);
    FUN_10002a29c(unaff_x22 + 0x70,&DAT_100555420,&DAT_100428ee8);
    goto LAB_10015eb48;
  }
  if ((_Var21.unknown == puVar5) && (puVar23 == _Var19.unknown)) {
joined_r0x00010015e484:
    if (((_Var3.unknown != puVar10) || (lVar22 != lVar33)) &&
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          (_Var3,(_StringGuts)*(undefined **)(unaff_x22 + 0x2e8),
                           (_StringComparisonResult)(__int8)puVar10), !bVar1)) goto LAB_10015e51c;
    _Var3.unknown = *(undefined **)(unaff_x22 + 0x2f8);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x2e8);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x2d8);
    if ((*(undefined **)(unaff_x22 + 0x2f0) == puVar6) && (lVar27 == lVar31)) {
      _swift_bridgeObjectRetain(uVar24);
      _swift_bridgeObjectRetain(uVar25);
      _swift_bridgeObjectRetain(_Var3.unknown);
      FUN_100163f7c(puVar5,puVar23,puVar10,lVar22,puVar6,lVar31);
      _swift_bridgeObjectRelease(lVar27);
      _swift_bridgeObjectRelease(uVar24);
      _swift_bridgeObjectRelease(uVar25);
LAB_10015e620:
      lVar27 = *(long *)(unaff_x22 + 0x2c0);
      _Var3.unknown = *(undefined **)(unaff_x22 + 0x2b8);
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x2f8));
      _swift_bridgeObjectRelease(puVar23);
      _swift_bridgeObjectRelease(lVar22);
      pPVar4 = (Published *)&DAT_100428e90;
      _swift_getKeyPath();
      puVar5 = &DAT_100428eb8;
      _swift_getKeyPath();
      *(undefined1 *)(unaff_x22 + 0x203) = 0;
      _swift_retain(_Var3.unknown);
      Combine::Published::_set_subscript(pPVar4,unaff_x22 + 0x203);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x418);
      if (lVar27 < 3) {
        SVar36 = *(String *)(unaff_x22 + 0x2d0);
        local_68 = (char *)0x0;
        local_60 = (undefined *)0xe000000000000000;
        Swift::_StringGuts::grow(0x25,_Var3);
        _swift_bridgeObjectRelease(local_60);
        local_68 = (char *)0xd00000000000001b;
        local_60 = (undefined *)0x80000001004dedb0;
        SVar44.bridgeObject = puVar5;
        SVar44.str = (char *)pPVar4;
        Swift::String::append(SVar36,SVar44);
        SVar37.bridgeObject = (void *)0xa600000000000000;
        SVar37.str = (char *)0x209480e22022;
        SVar45.bridgeObject = puVar5;
        SVar45.str = (char *)pPVar4;
        Swift::String::append(SVar37,SVar45);
        pcVar16 = (char *)(unaff_x22 + 0x1c0);
        _swift_getErrorValue(uVar24,unaff_x22 + 0x288);
        SVar36 = (extension_Foundation)::Swift::Error::get_localizedDescription();
        pvVar7 = SVar36.bridgeObject;
        SVar46.bridgeObject = puVar5;
        SVar46.str = pcVar16;
        Swift::String::append(SVar36,SVar46);
        _swift_bridgeObjectRelease(pvVar7);
        DVar17.unknown = local_60;
        SVar36.bridgeObject = local_60;
        SVar36.str = local_68;
        local_68 = (char *)0x5b;
        local_60 = (undefined *)0xe100000000000000;
        *(undefined8 *)(unaff_x22 + 0x218) = 0x4e524157;
        *(undefined8 *)(unaff_x22 + 0x220) = 0xe400000000000000;
        *(undefined8 *)(unaff_x22 + 0x208) = 0x20;
        *(undefined8 *)(unaff_x22 + 0x210) = 0xe100000000000000;
        FUN_100026df4();
        pcVar20 = (char *)0x0;
        puVar10 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar37 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,unaff_x22 + 0x208,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,pvVar7,pvVar7);
        SVar47.bridgeObject = puVar10;
        SVar47.str = pcVar20;
        Swift::String::append(SVar37,SVar47);
        _swift_bridgeObjectRelease(SVar37.bridgeObject);
        SVar38.bridgeObject = (void *)0xe300000000000000;
        SVar38.str = (char *)0x5b205d;
        SVar48.bridgeObject = puVar10;
        SVar48.str = pcVar20;
        Swift::String::append(SVar38,SVar48);
        SVar39.bridgeObject = (void *)0xe500000000000000;
        SVar39.str = (char *)0x616964656d;
        SVar49.bridgeObject = puVar10;
        SVar49.str = pcVar20;
        Swift::String::append(SVar39,SVar49);
        SVar40.bridgeObject = (void *)0xe200000000000000;
        SVar40.str = (char *)0x205d;
        SVar50.bridgeObject = puVar10;
        SVar50.str = pcVar20;
        Swift::String::append(SVar40,SVar50);
        SVar51.bridgeObject = puVar10;
        SVar51.str = pcVar20;
        Swift::String::append(SVar36,SVar51);
        puVar5 = local_60;
        pcVar16 = local_68;
        local_68 = (char *)0x282020;
        local_60 = (undefined *)0xe300000000000000;
        SVar41.bridgeObject = (void *)0x80000001004dedd0;
        SVar41.str = (char *)0xd00000000000001e;
        SVar52.bridgeObject = puVar10;
        SVar52.str = pcVar20;
        Swift::String::append(SVar41,SVar52);
        SVar42.bridgeObject = (void *)0xe100000000000000;
        SVar42.str = (char *)0x3a;
        SVar53.bridgeObject = puVar10;
        SVar53.str = pcVar20;
        Swift::String::append(SVar42,SVar53);
        *(undefined8 *)(unaff_x22 + 0x280) = 0xb1;
        SVar36 = Swift::CustomStringConvertible::get_description();
        SVar54.bridgeObject = puVar10;
        SVar54.str = pcVar20;
        Swift::String::append(SVar36,SVar54);
        _swift_bridgeObjectRelease(SVar36.bridgeObject);
        SVar43.bridgeObject = (void *)0xe100000000000000;
        SVar43.str = (char *)0x29;
        SVar55.bridgeObject = puVar10;
        SVar55.str = pcVar20;
        Swift::String::append(SVar43,SVar55);
        puVar10 = local_60;
        pcVar20 = local_68;
        if (DAT_100559018 != -1) {
          _swift_once(&DAT_100559018,FUN_1002854a0);
        }
        qos.unknown = *(undefined **)(unaff_x22 + 0x350);
        lVar22 = *(long *)(unaff_x22 + 0x348);
        uVar24 = *(undefined8 *)(unaff_x22 + 0x340);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x338);
        lVar27 = *(long *)(unaff_x22 + 0x330);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x328);
        puVar6 = &DAT_10052f3e0;
        _swift_allocObject(&DAT_10052f3e0,0x30,7);
        *(char **)(puVar6 + 0x10) = pcVar16;
        *(undefined **)(puVar6 + 0x18) = puVar5;
        *(char **)(puVar6 + 0x20) = pcVar20;
        *(undefined **)(puVar6 + 0x28) = puVar10;
        *(code **)(unaff_x22 + 0x1b0) = FUN_100099310;
        *(undefined **)(unaff_x22 + 0x1b8) = puVar6;
        *(undefined **)(unaff_x22 + 400) = PTR___NSConcreteStackBlock_100521110;
        *(undefined8 *)(unaff_x22 + 0x198) = 0x42000000;
        *(code **)(unaff_x22 + 0x1a0) = FUN_1000c7e7c;
        *(undefined **)(unaff_x22 + 0x1a8) = &DAT_10052f3f8;
        pvVar7 = __Block_copy((void *)(unaff_x22 + 400));
        DVar8.unknown = puVar5;
        _swift_bridgeObjectRetain();
        Dispatch::DispatchQoS::get_unspecified(DVar8);
        *(undefined **)(unaff_x22 + 0x278) = PTR___swiftEmptyArrayStorage_100524190;
        puVar9 = &DAT_100553db0;
        FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                      PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
        puVar10 = &DAT_100561080;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar11 = &DAT_100553dc0;
        FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                      PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
        Swift::SetAlgebra::_init(uVar25,unaff_x22 + 0x278,puVar10,puVar11,uVar26,puVar9);
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
        __Block_release(pvVar7);
        (**(code **)(lVar27 + 8))(uVar25,uVar26);
        (**(code **)(lVar22 + 8))(qos.unknown,uVar24);
        _swift_release(*(undefined8 *)(unaff_x22 + 0x1b8));
        if (DAT_100559020 != -1) {
          _swift_once(&DAT_100559020,FUN_100285420);
        }
        uVar25 = *(undefined8 *)(unaff_x22 + 0x310);
        lVar22 = *(long *)(unaff_x22 + 0x308);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x300);
        uVar24 = uVar26;
        FUN_100099338(uVar26,&DAT_100558f50);
        (**(code **)(lVar22 + 0x10))(uVar25,uVar24,uVar26);
        uVar2 = (uint)uVar25;
        static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default
                  ();
        LVar12.unknown = puVar5;
        _swift_bridgeObjectRetain();
        pOVar13 = os::Logger::get_logObject(LVar12);
        pOVar14 = pOVar13;
        _os_log_type_enabled(pOVar13,uVar2 & 0xff);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x310);
        lVar22 = *(long *)(unaff_x22 + 0x308);
        uVar24 = *(undefined8 *)(unaff_x22 + 0x300);
        if ((int)pOVar14 == 0) {
          _swift_bridgeObjectRelease_n(puVar5,2);
        }
        else {
          puVar15 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          pcVar20 = (char *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar15 = 0x8220102;
          local_68 = pcVar20;
          FUN_10012dbb0(pcVar16,puVar5,&local_68);
          *(char **)(puVar15 + 1) = pcVar16;
          _swift_bridgeObjectRelease_n(puVar5,2);
          __os_log_impl(0x100000000,pOVar13,uVar2 & 0xff,"%{public}s",puVar15,0xc);
          FUN_100043f24(pcVar20);
          _swift_slowDealloc(pcVar20,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar15,0xffffffffffffffff,0xffffffffffffffff);
        }
        (**(code **)(lVar22 + 8))(uVar25,uVar24);
        _swift_bridgeObjectRelease();
        dVar35 = 3.0;
        _pow(0x4008000000000000,(double)*(long *)(unaff_x22 + 0x2c0));
        DVar17 = Swift::Duration::seconds(dVar35 * 4.0,DVar17);
        (extension_Swift)::Swift::Clock::_get_continuous();
        plVar18 = (long *)0x80;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x428) = plVar18;
        *plVar18 = unaff_x22;
        plVar18[1] = (long)FUN_10015eccc;
        FUN_100227100(DVar17.unknown,uVar24,0,0,1);
        return;
      }
      _swift_release(*(undefined8 *)(unaff_x22 + 0x398));
      _swift_errorRelease(uVar24);
      goto LAB_10015eb48;
    }
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)*(undefined **)(unaff_x22 + 0x2f0),_Var3,
                       (_StringComparisonResult)(__int8)puVar6);
    _swift_bridgeObjectRetain(uVar24);
    _swift_bridgeObjectRetain(uVar25);
    _swift_bridgeObjectRetain(_Var3.unknown);
    FUN_100163f7c(puVar5,puVar23,puVar10,lVar22,puVar6,lVar27);
    _swift_bridgeObjectRelease(puVar23);
    _swift_bridgeObjectRelease(lVar22);
    _swift_bridgeObjectRelease(lVar27);
    if (bVar1) {
      lVar22 = *(long *)(unaff_x22 + 0x2e8);
      puVar23 = *(undefined **)(unaff_x22 + 0x2d8);
      goto LAB_10015e620;
    }
    uVar25 = *(undefined8 *)(unaff_x22 + 0x418);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x2f8);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x2e8);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x2d8);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x398));
    _swift_errorRelease(uVar25);
    _swift_bridgeObjectRelease(uVar28);
    _swift_bridgeObjectRelease(uVar26);
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      (_Var21,_Var19,(_StringComparisonResult)(__int8)puVar5);
    if (bVar1) {
      _Var3.unknown = *(undefined **)(unaff_x22 + 0x2e0);
      goto joined_r0x00010015e484;
    }
LAB_10015e51c:
    uVar26 = *(undefined8 *)(unaff_x22 + 0x418);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x398);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x2f8);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x2e8);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x2d8);
    _swift_bridgeObjectRetain(uVar28);
    _swift_bridgeObjectRetain(uVar24);
    _swift_bridgeObjectRetain(uVar29);
    FUN_100163f7c(puVar5,puVar23,puVar10,lVar22,puVar6,lVar27);
    _swift_release(uVar25);
    _swift_errorRelease(uVar26);
    _swift_bridgeObjectRelease(uVar29);
    _swift_bridgeObjectRelease(puVar23);
    _swift_bridgeObjectRelease(lVar22);
    _swift_bridgeObjectRelease(lVar27);
    _swift_bridgeObjectRelease(uVar28);
  }
  _swift_bridgeObjectRelease(uVar24);
LAB_10015eb48:
  uVar25 = *(undefined8 *)(unaff_x22 + 0x388);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x370);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x368);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x350);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar30 = *(undefined8 *)(unaff_x22 + 800);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x310);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x390));
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar34);
                    /* WARNING: Could not recover jumptable at 0x00010015ebd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

