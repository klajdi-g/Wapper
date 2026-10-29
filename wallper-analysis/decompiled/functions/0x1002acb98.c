// rea decompile_all
// name: FUN_1002acb98
// address: 0x1002acb98
// body: available
// range: 0x1002acb98-0x1002ad3c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002acb98(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  void *param_5)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  URL UVar4;
  long lVar5;
  _StringGuts _Var6;
  _StringGuts _Var7;
  undefined7 extraout_var;
  URL UVar8;
  NSString *pNVar9;
  ID IVar10;
  undefined *puVar11;
  void *pvVar12;
  DispatchQoS DVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  Logger LVar16;
  OS_os_log *pOVar17;
  OS_os_log *pOVar18;
  undefined4 *puVar19;
  char *pcVar20;
  URL UVar21;
  undefined *puVar22;
  _StringGuts extraout_x1;
  undefined8 uVar23;
  char *pcVar24;
  long extraout_x8;
  long extraout_x8_00;
  long lVar25;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *pcVar26;
  long extraout_x12;
  long extraout_x12_00;
  undefined *puVar27;
  long lVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  DispatchWorkItemFlags qos;
  String SVar32;
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
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  char *local_110;
  char *local_108;
  void *local_100;
  long local_f8;
  undefined *puStack_f0;
  long local_e8;
  undefined *local_e0;
  long local_d8;
  undefined *local_d0;
  long local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined *local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined7 extraout_var_00;
  
  puVar3 = &DAT_100553d90;
  local_c0 = param_1;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  puVar3 = (undefined *)((long)&local_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar28 = (long)puVar3 - extraout_x12;
  local_d0 = (undefined *)os::Logger::typeMetadataAccessor();
  local_c8 = *(long *)(local_d0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c8 + 0x40));
  lVar25 = lVar28 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_d8 = lVar25;
  local_e0 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_e8 = *(long *)(local_e0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e8 + 0x40));
  lVar25 = lVar25 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puStack_f0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_f8 = *(long *)(puStack_f0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f8 + 0x40));
  qos.unknown = (undefined *)(lVar25 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar31 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar31 + 0x40));
  lVar30 = (long)qos.unknown - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar27 = (undefined *)(lVar30 - extraout_x12_00);
  lVar5 = 0;
  FUN_10040211c();
  _Var7.unknown = (undefined *)(param_2 + *(int *)(lVar5 + 0x14));
  _Var6.unknown = puVar27;
  (**(code **)(lVar31 + 0x10))(puVar27,_Var7.unknown,UVar4.unknown);
  Foundation::URL::_get_scheme((URL)_Var6.unknown);
  if (_Var7.unknown == (undefined *)0x0) {
LAB_1002acd8c:
    UVar8.unknown._0_1_ = Foundation::URL::get_isFileURL((URL)_Var6.unknown);
    UVar8.unknown._1_7_ = extraout_var;
    if (UVar8.unknown._0_1_) {
      UVar8.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
      SVar32 = Foundation::URL::get_path(UVar8);
      pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar32.bridgeObject);
      IVar10 = NSFileManager::fileExistsAtPath_((ID)UVar8.unknown);
      if ((int)IVar10 == 0) {
        local_b8 = (char *)0x0;
        local_b0 = (void *)0xe000000000000000;
        Swift::_StringGuts::grow(0x35,extraout_x1);
        UVar8.unknown = (undefined *)0xd000000000000033;
        SVar33.bridgeObject = (void *)0x80000001004e3d40;
        SVar33.str = (char *)0xd000000000000033;
        SVar40.bridgeObject = param_5;
        SVar40.str = (char *)pNVar9;
        Swift::String::append(SVar33,SVar40);
        SVar32 = Foundation::URL::get_path(UVar8);
        pvVar12 = SVar32.bridgeObject;
        SVar41.bridgeObject = param_5;
        SVar41.str = (char *)pNVar9;
        Swift::String::append(SVar32,SVar41);
        _swift_bridgeObjectRelease(pvVar12);
        puVar3 = local_b0;
        SVar32.bridgeObject = local_b0;
        SVar32.str = local_b8;
        local_108 = " not found at path ";
        local_b8 = (char *)0x5b;
        local_b0 = (undefined *)0xe100000000000000;
        local_78 = (undefined *)0x4e524157;
        uStack_70 = 0xe400000000000000;
        local_88 = 0x20;
        uStack_80 = 0xe100000000000000;
        FUN_100026df4();
        pcVar24 = (char *)0x0;
        puVar22 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar33 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,&local_88,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,pvVar12,pvVar12);
        SVar42.bridgeObject = puVar22;
        SVar42.str = pcVar24;
        Swift::String::append(SVar33,SVar42);
        _swift_bridgeObjectRelease(SVar33.bridgeObject);
        SVar34.bridgeObject = (void *)0xe300000000000000;
        SVar34.str = (char *)0x5b205d;
        SVar43.bridgeObject = puVar22;
        SVar43.str = pcVar24;
        Swift::String::append(SVar34,SVar43);
        SVar35.bridgeObject = (void *)0xe900000000000072;
        SVar35.str = (char *)0x657061706c6c6177;
        SVar44.bridgeObject = puVar22;
        SVar44.str = pcVar24;
        Swift::String::append(SVar35,SVar44);
        SVar36.bridgeObject = (void *)0xe200000000000000;
        SVar36.str = (char *)0x205d;
        SVar45.bridgeObject = puVar22;
        SVar45.str = pcVar24;
        Swift::String::append(SVar36,SVar45);
        local_100 = puVar3;
        SVar46.bridgeObject = puVar22;
        SVar46.str = pcVar24;
        Swift::String::append(SVar32,SVar46);
        puVar3 = local_b0;
        pcVar20 = local_b8;
        local_b8 = (char *)0x282020;
        local_b0 = (undefined *)0xe300000000000000;
        SVar37.bridgeObject = (void *)((ulong)local_108 | 0x8000000000000000);
        SVar37.str = (char *)0xd000000000000011;
        SVar47.bridgeObject = puVar22;
        SVar47.str = pcVar24;
        Swift::String::append(SVar37,SVar47);
        SVar38.bridgeObject = (void *)0xe100000000000000;
        SVar38.str = (char *)0x3a;
        SVar48.bridgeObject = puVar22;
        SVar48.str = pcVar24;
        Swift::String::append(SVar38,SVar48);
        local_78 = (undefined *)0x17;
        SVar32 = Swift::CustomStringConvertible::get_description();
        SVar49.bridgeObject = puVar22;
        SVar49.str = pcVar24;
        Swift::String::append(SVar32,SVar49);
        _swift_bridgeObjectRelease(SVar32.bridgeObject);
        SVar39.bridgeObject = (void *)0xe100000000000000;
        SVar39.str = (char *)0x29;
        SVar50.bridgeObject = puVar22;
        SVar50.str = pcVar24;
        Swift::String::append(SVar39,SVar50);
        puVar22 = local_b0;
        pcVar24 = local_b8;
        if (DAT_100559018 != -1) {
          _swift_once(&DAT_100559018,FUN_1002854a0);
        }
        local_108 = (char *)DAT_100559010;
        puVar11 = &DAT_100537bb0;
        _swift_allocObject(&DAT_100537bb0,0x30,7);
        local_110 = pcVar20;
        *(char **)(puVar11 + 0x10) = pcVar20;
        *(undefined **)(puVar11 + 0x18) = puVar3;
        *(char **)(puVar11 + 0x20) = pcVar24;
        *(undefined **)(puVar11 + 0x28) = puVar22;
        local_98 = thunk_FUN_100099310;
        local_b8 = PTR___NSConcreteStackBlock_100521110;
        local_b0 = (undefined *)0x42000000;
        local_a8 = FUN_1000c7e7c;
        puStack_a0 = &DAT_100537bc8;
        local_90 = puVar11;
        pvVar12 = __Block_copy(&local_b8);
        DVar13.unknown = puVar3;
        _swift_bridgeObjectRetain();
        Dispatch::DispatchQoS::get_unspecified(DVar13);
        local_78 = PTR___swiftEmptyArrayStorage_100524190;
        puVar14 = &DAT_100553db0;
        FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                      PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
        puVar22 = &DAT_100561080;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar15 = puVar22;
        FUN_100077ac0();
        puVar11 = local_e0;
        Swift::SetAlgebra::_init(lVar25,&local_78,puVar22,puVar15,local_e0,puVar14);
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
        __Block_release(pvVar12);
        (**(code **)(local_e8 + 8))(lVar25,puVar11);
        (**(code **)(local_f8 + 8))(qos.unknown,puStack_f0);
        _swift_release(local_90);
        if (DAT_100559020 != -1) {
          _swift_once(&DAT_100559020,FUN_100285420);
        }
        puVar22 = local_d0;
        puVar11 = local_d0;
        FUN_100099338(local_d0,&DAT_100558f50);
        lVar25 = local_c8;
        lVar5 = local_d8;
        lVar28 = local_d8;
        (**(code **)(local_c8 + 0x10))(local_d8,puVar11,puVar22);
        uVar2 = (uint)lVar28;
        static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default
                  ();
        LVar16.unknown = puVar3;
        _swift_bridgeObjectRetain();
        pOVar17 = os::Logger::get_logObject(LVar16);
        pOVar18 = pOVar17;
        _os_log_type_enabled(pOVar17,uVar2 & 0xff);
        if ((int)pOVar18 == 0) {
          _swift_bridgeObjectRelease_n(puVar3,2);
          pcVar26 = *(code **)(lVar25 + 8);
        }
        else {
          puVar19 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          pcVar24 = (char *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar19 = 0x8220102;
          pcVar20 = local_110;
          local_b8 = pcVar24;
          FUN_10012dbb0(local_110,puVar3,&local_b8);
          *(char **)(puVar19 + 1) = pcVar20;
          _swift_bridgeObjectRelease_n(puVar3,2);
          __os_log_impl(0x100000000,pOVar17,uVar2 & 0xff,"%{public}s",puVar19,0xc);
          FUN_100043f24(pcVar24);
          _swift_slowDealloc(pcVar24,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar19,0xffffffffffffffff,0xffffffffffffffff);
          pcVar26 = *(code **)(local_c8 + 8);
        }
        (*pcVar26)(lVar5,puVar22);
        _swift_bridgeObjectRelease(local_100);
        uVar29 = local_c0;
        (**(code **)(lVar31 + 8))(puVar27,UVar4.unknown);
        uVar23 = 1;
        goto LAB_1002ad214;
      }
      goto LAB_1002ad1f8;
    }
    UVar21.unknown._0_1_ = Foundation::URL::get_isFileURL(UVar8);
    UVar21.unknown._1_7_ = extraout_var_00;
    if (UVar21.unknown._0_1_) {
      (**(code **)(lVar31 + 0x38))(lVar28,1,1,UVar4.unknown);
    }
    else {
      UVar8 = Foundation::URL::deletingPathExtension(UVar21);
      SVar32 = Foundation::URL::get_lastPathComponent(UVar8);
      (**(code **)(lVar31 + 8))(lVar30,UVar4.unknown);
      FUN_100268ac4(lVar28,SVar32.str,SVar32.bridgeObject);
      _swift_bridgeObjectRelease(SVar32.bridgeObject);
    }
    FUN_1000f8c24(lVar28,puVar3);
    pcVar26 = *(code **)(lVar31 + 0x30);
    puVar22 = puVar3;
    (*pcVar26)(puVar3,1,UVar4.unknown);
    uVar29 = local_c0;
    if ((int)puVar22 != 1) {
      (**(code **)(lVar31 + 8))(puVar27,UVar4.unknown);
      pcVar26 = *(code **)(lVar31 + 0x20);
      goto LAB_1002ad208;
    }
    (**(code **)(lVar31 + 0x20))(local_c0,puVar27,UVar4.unknown);
    puVar27 = puVar3;
    (*pcVar26)(puVar3,1,UVar4.unknown);
    if ((int)puVar27 != 1) {
      FUN_10002a29c(puVar3,&DAT_100553d90,&DAT_10041bf10);
    }
  }
  else {
    param_5 = (void *)0xeb00000000657669;
    if (_Var6.unknown == (undefined *)0x7463617265746e69 &&
        _Var7.unknown == (undefined *)0xeb00000000657669) {
      _swift_bridgeObjectRelease(_Var7.unknown);
    }
    else {
      bVar1 = Swift::_stringCompareWithSmolCheck(_Var6,_Var7,(_StringComparisonResult)0x69);
      _swift_bridgeObjectRelease();
      _Var6.unknown = _Var7.unknown;
      if (!bVar1) goto LAB_1002acd8c;
    }
LAB_1002ad1f8:
    pcVar26 = *(code **)(lVar31 + 0x20);
    puVar3 = puVar27;
LAB_1002ad208:
    uVar29 = local_c0;
    (*pcVar26)(local_c0,puVar3,UVar4.unknown);
  }
  uVar23 = 0;
LAB_1002ad214:
  (**(code **)(lVar31 + 0x38))(uVar29,uVar23,1,UVar4.unknown);
  return;
}

