// rea decompile_all
// name: FUN_1002ad5d8
// address: 0x1002ad5d8
// body: available
// range: 0x1002ad5d8-0x1002ade73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002ad5d8(void)

{
  long *plVar1;
  DispatchWorkItemFlags qos;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  bool bVar5;
  uint uVar6;
  URL UVar7;
  undefined7 extraout_var;
  NSString *pNVar8;
  ID IVar9;
  undefined *puVar10;
  DispatchQoS DVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  Logger LVar14;
  OS_os_log *pOVar15;
  OS_os_log *pOVar16;
  undefined4 *puVar17;
  char *pcVar18;
  _StringGuts _Var19;
  char *pcVar21;
  void *pvVar22;
  long lVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong uVar28;
  long lVar29;
  URL UVar30;
  _StringGuts _Var31;
  long unaff_x22;
  undefined8 uVar32;
  undefined *puVar33;
  undefined8 uVar34;
  void *pvVar35;
  undefined8 uVar36;
  code *pcVar37;
  undefined *puVar38;
  long lVar39;
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
  char *local_68;
  undefined *puStack_60;
  void *pvVar20;
  
  UVar7.unknown = *(undefined **)(unaff_x22 + 0x128);
  _swift_release();
  UVar7.unknown._0_1_ = Foundation::URL::get_isFileURL(UVar7);
  UVar7.unknown._1_7_ = extraout_var;
  if (UVar7.unknown._0_1_) {
    (**(code **)(*(long *)(unaff_x22 + 0x100) + 0x38))
              (*(undefined8 *)(unaff_x22 + 0xf0),1,1,*(undefined8 *)(unaff_x22 + 0xf8));
  }
  else {
    uVar25 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar27 = *(undefined8 *)(unaff_x22 + 0xf8);
    lVar29 = *(long *)(unaff_x22 + 0x100);
    uVar32 = *(undefined8 *)(unaff_x22 + 0xf0);
    UVar7 = Foundation::URL::deletingPathExtension(UVar7);
    SVar40 = Foundation::URL::get_lastPathComponent(UVar7);
    pcVar37 = *(code **)(lVar29 + 8);
    (*pcVar37)(uVar25,uVar27);
    FUN_100268ac4(uVar32,SVar40.str,SVar40.bridgeObject);
    _swift_bridgeObjectRelease(SVar40.bridgeObject);
    (**(code **)(lVar29 + 0x30))(uVar32,1,uVar27);
    if ((int)uVar32 != 1) {
      (**(code **)(*(long *)(unaff_x22 + 0x100) + 0x20))
                (*(undefined8 *)(unaff_x22 + 0x118),*(undefined8 *)(unaff_x22 + 0xf0),
                 *(undefined8 *)(unaff_x22 + 0xf8));
      UVar7.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
      SVar40 = Foundation::URL::get_path(UVar7);
      pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar40.bridgeObject);
      IVar9 = NSFileManager::fileExistsAtPath_((ID)UVar7.unknown,pNVar8);
      if ((int)IVar9 == 0) {
        (*pcVar37)(*(undefined8 *)(unaff_x22 + 0x118),*(undefined8 *)(unaff_x22 + 0xf8));
      }
      else {
        if (DAT_100557bb0 != -1) {
          _swift_once(&DAT_100557bb0,FUN_100233158);
        }
        lVar2 = DAT_100577d38;
        lVar29 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
        lVar23 = *(long *)(unaff_x22 + 0x100);
        lVar39 = *(long *)(unaff_x22 + 0x88);
        _swift_beginAccess(DAT_100577d38 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,
                           unaff_x22 + 0x40,0,0);
        puVar33 = *(undefined **)(lVar2 + lVar29);
        _Var31.unknown = (undefined *)(lVar39 + 0x38);
        uVar24 = -1L << ((ulong)*(byte *)(lVar39 + 0x20) & 0x3f);
        uVar28 = 0xffffffffffffffff;
        if (-uVar24 < 0x40) {
          uVar28 = ~(-1L << (-uVar24 & 0x3f));
        }
        uVar28 = uVar28 & *(ulong *)_Var31.unknown;
        _swift_bridgeObjectRetain(puVar33);
        _swift_bridgeObjectRetain(lVar39);
        pvVar35 = (void *)0x0;
        pvVar4 = pvVar35;
        do {
          while( true ) {
            while (pvVar22 = pvVar4, uVar28 == 0) {
              bVar5 = SCARRY8((long)pvVar35,1);
              pvVar35 = (void *)((long)pvVar35 + 1);
              if (bVar5) {
                    /* WARNING: Does not return */
                pcVar37 = (code *)SoftwareBreakpoint(1,0x1002ade2c);
                (*pcVar37)();
              }
              if ((long)(0x3f - uVar24 >> 6) <= (long)pvVar35) {
                uVar32 = *(undefined8 *)(unaff_x22 + 0x118);
                uVar27 = *(undefined8 *)(unaff_x22 + 0xf8);
                _swift_bridgeObjectRelease(puVar33);
                FUN_10002f6ec(lVar39,_Var31.unknown,~uVar24,pvVar22,0);
                (*pcVar37)(uVar32,uVar27);
                goto LAB_1002ad6b0;
              }
              pvVar4 = pvVar22;
              uVar28 = *(ulong *)((long)_Var31.unknown + pvVar35 * 8);
            }
            uVar3 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
            uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
            uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
            uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
            uVar28 = uVar28 - 1 & uVar28;
            plVar1 = (long *)(*(long *)(lVar39 + 0x30) +
                              LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 0x10 + (long)pvVar35 * 0x400)
            ;
            puVar38 = (undefined *)plVar1[1];
            pvVar4 = pvVar35;
            if (*(long *)(puVar33 + 0x10) != 0) break;
            UVar7.unknown = puVar38;
            _swift_bridgeObjectRetain();
LAB_1002ad984:
            SVar40 = Foundation::URL::get_lastPathComponent(UVar7);
            pvVar20 = SVar40.bridgeObject;
LAB_1002ad990:
            _swift_bridgeObjectRelease(puVar38);
            _swift_bridgeObjectRelease(pvVar20);
          }
          lVar29 = *plVar1;
          _swift_bridgeObjectRetain(puVar33);
          _swift_bridgeObjectRetain(puVar38);
          puVar10 = puVar38;
          FUN_10000464c(lVar29);
          if (((ulong)puVar10 & 1) == 0) {
            UVar7.unknown = puVar33;
            _swift_bridgeObjectRelease();
            goto LAB_1002ad984;
          }
          UVar30.unknown = *(undefined **)(unaff_x22 + 0x108);
          uVar27 = *(undefined8 *)(unaff_x22 + 0xf8);
          (**(code **)(lVar23 + 0x10))
                    (UVar30.unknown,*(long *)(puVar33 + 0x38) + *(long *)(lVar23 + 0x48) * lVar29,
                     uVar27);
          UVar7.unknown = puVar33;
          _swift_bridgeObjectRelease();
          SVar40 = Foundation::URL::get_lastPathComponent(UVar7);
          _Var19.unknown = SVar40.bridgeObject;
          (*pcVar37)(UVar30.unknown,uVar27);
          SVar41 = Foundation::URL::get_lastPathComponent(UVar30);
          pvVar20 = SVar41.bridgeObject;
          if (_Var19.unknown == (undefined *)0x0) goto LAB_1002ad990;
          if (SVar40 == SVar41) {
            _swift_bridgeObjectRelease(puVar38);
            _swift_bridgeObjectRelease(pvVar20);
            _swift_bridgeObjectRelease(_Var19.unknown);
            break;
          }
          bVar5 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar40.str,_Var19,
                             (_StringComparisonResult)(__int8)SVar41.str);
          _swift_bridgeObjectRelease(puVar38);
          _swift_bridgeObjectRelease(pvVar20);
          _swift_bridgeObjectRelease(_Var19.unknown);
        } while (!bVar5);
        _swift_bridgeObjectRelease(puVar33);
        pcVar21 = (char *)~uVar24;
        FUN_10002f6ec(lVar39);
        local_68 = (char *)0x0;
        puStack_60 = (void *)0xe000000000000000;
        Swift::_StringGuts::grow(0x37,_Var31);
        UVar7.unknown = (undefined *)0x203a796c707041;
        SVar41.bridgeObject = (void *)0xe700000000000000;
        SVar41.str = (char *)0x203a796c707041;
        SVar46.bridgeObject = pvVar22;
        SVar46.str = pcVar21;
        Swift::String::append(SVar41,SVar46);
        SVar40 = Foundation::URL::get_lastPathComponent(UVar7);
        SVar47.bridgeObject = pvVar22;
        SVar47.str = pcVar21;
        Swift::String::append(SVar40,SVar47);
        _swift_bridgeObjectRelease(SVar40.bridgeObject);
        uVar27 = 0x100000000000002e;
        SVar42.bridgeObject = (void *)0x80000001004e3cd0;
        SVar42.str = (char *)0x100000000000002e;
        SVar48.bridgeObject = pvVar22;
        SVar48.str = pcVar21;
        Swift::String::append(SVar42,SVar48);
        puVar33 = puStack_60;
        SVar40.bridgeObject = puStack_60;
        SVar40.str = local_68;
        local_68 = (char *)0x5b;
        puStack_60 = (undefined *)0xe100000000000000;
        *(undefined8 *)(unaff_x22 + 0x58) = 0x4f464e49;
        *(undefined8 *)(unaff_x22 + 0x60) = 0xe400000000000000;
        *(undefined8 *)(unaff_x22 + 0x68) = 0x20;
        *(undefined8 *)(unaff_x22 + 0x70) = 0xe100000000000000;
        FUN_100026df4();
        pcVar21 = (char *)0x0;
        puVar38 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar41 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,unaff_x22 + 0x68,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,uVar27,uVar27);
        SVar49.bridgeObject = puVar38;
        SVar49.str = pcVar21;
        Swift::String::append(SVar41,SVar49);
        _swift_bridgeObjectRelease(SVar41.bridgeObject);
        SVar43.bridgeObject = (void *)0xe300000000000000;
        SVar43.str = (char *)0x5b205d;
        SVar50.bridgeObject = puVar38;
        SVar50.str = pcVar21;
        Swift::String::append(SVar43,SVar50);
        SVar44.bridgeObject = (void *)0xe900000000000072;
        SVar44.str = (char *)0x657061706c6c6177;
        SVar51.bridgeObject = puVar38;
        SVar51.str = pcVar21;
        Swift::String::append(SVar44,SVar51);
        SVar45.bridgeObject = (void *)0xe200000000000000;
        SVar45.str = (char *)0x205d;
        SVar52.bridgeObject = puVar38;
        SVar52.str = pcVar21;
        Swift::String::append(SVar45,SVar52);
        SVar53.bridgeObject = puVar38;
        SVar53.str = pcVar21;
        Swift::String::append(SVar40,SVar53);
        puVar38 = puStack_60;
        pcVar21 = local_68;
        if (DAT_100559018 != -1) {
          _swift_once(&DAT_100559018,FUN_1002854a0);
        }
        lVar29 = *(long *)(unaff_x22 + 0xe0);
        qos.unknown = *(undefined **)(unaff_x22 + 0xe8);
        uVar27 = *(undefined8 *)(unaff_x22 + 0xd0);
        uVar25 = *(undefined8 *)(unaff_x22 + 0xd8);
        uVar32 = *(undefined8 *)(unaff_x22 + 0xc0);
        lVar2 = *(long *)(unaff_x22 + 200);
        puVar10 = &DAT_100537a98;
        _swift_allocObject(&DAT_100537a98,0x30,7);
        *(char **)(puVar10 + 0x10) = pcVar21;
        *(undefined **)(puVar10 + 0x18) = puVar38;
        *(undefined8 *)(puVar10 + 0x20) = 0;
        *(undefined8 *)(puVar10 + 0x28) = 0xe000000000000000;
        *(code **)(unaff_x22 + 0x30) = thunk_FUN_100099310;
        *(undefined **)(unaff_x22 + 0x38) = puVar10;
        *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
        *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
        *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
        *(undefined **)(unaff_x22 + 0x28) = &DAT_100537ab0;
        pvVar35 = __Block_copy((void *)(unaff_x22 + 0x10));
        DVar11.unknown = puVar38;
        _swift_bridgeObjectRetain();
        Dispatch::DispatchQoS::get_unspecified(DVar11);
        *(undefined **)(unaff_x22 + 0x78) = PTR___swiftEmptyArrayStorage_100524190;
        puVar12 = &DAT_100553db0;
        FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                      PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
        puVar10 = &DAT_100561080;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar13 = puVar10;
        FUN_100077ac0();
        Swift::SetAlgebra::_init(uVar27,unaff_x22 + 0x78,puVar10,puVar13,uVar32,puVar12);
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
        __Block_release(pvVar35);
        (**(code **)(lVar2 + 8))(uVar27,uVar32);
        (**(code **)(lVar29 + 8))(qos.unknown,uVar25);
        _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
        if (DAT_100559020 != -1) {
          _swift_once(&DAT_100559020,FUN_100285420);
        }
        lVar29 = *(long *)(unaff_x22 + 0xb0);
        uVar27 = *(undefined8 *)(unaff_x22 + 0xb8);
        uVar25 = *(undefined8 *)(unaff_x22 + 0xa8);
        uVar32 = uVar25;
        FUN_100099338(uVar25,&DAT_100558f50);
        (**(code **)(lVar29 + 0x10))(uVar27,uVar32,uVar25);
        uVar6 = (uint)uVar27;
        static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
        LVar14.unknown = puVar38;
        _swift_bridgeObjectRetain();
        pOVar15 = os::Logger::get_logObject(LVar14);
        pOVar16 = pOVar15;
        _os_log_type_enabled(pOVar15,uVar6 & 0xff);
        lVar29 = *(long *)(unaff_x22 + 0xb0);
        uVar27 = *(undefined8 *)(unaff_x22 + 0xb8);
        uVar32 = *(undefined8 *)(unaff_x22 + 0xa8);
        if ((int)pOVar16 == 0) {
          _swift_bridgeObjectRelease_n(puVar38,2);
        }
        else {
          puVar17 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          pcVar18 = (char *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar17 = 0x8220102;
          local_68 = pcVar18;
          FUN_10012dbb0(pcVar21,puVar38,&local_68);
          *(char **)(puVar17 + 1) = pcVar21;
          _swift_bridgeObjectRelease_n(puVar38,2);
          __os_log_impl(0x100000000,pOVar15,uVar6 & 0xff,"%{public}s",puVar17,0xc);
          FUN_100043f24(pcVar18);
          _swift_slowDealloc(pcVar18,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar17,0xffffffffffffffff,0xffffffffffffffff);
        }
        (**(code **)(lVar29 + 8))(uVar27,uVar32);
        _swift_bridgeObjectRelease(puVar33);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x118);
        uVar27 = *(undefined8 *)(unaff_x22 + 0xf8);
        FUN_1002ab9c0(*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x98),
                      *(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0x88));
        (*pcVar37)(uVar32,uVar27);
      }
      goto LAB_1002ad6b0;
    }
  }
  FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0xf0),&DAT_100553d90,&DAT_10041bf10);
LAB_1002ad6b0:
  uVar27 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar32 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar25 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar34 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar36 = *(undefined8 *)(unaff_x22 + 0xb8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x118));
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar36);
                    /* WARNING: Could not recover jumptable at 0x0001002ad718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

