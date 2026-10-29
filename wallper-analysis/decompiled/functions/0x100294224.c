// rea decompile_all
// name: FUN_100294224
// address: 0x100294224
// body: available
// range: 0x100294224-0x100294af7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100294224(undefined *param_1,undefined8 param_2,char *param_3,void *param_4)

{
  String SVar1;
  uint uVar2;
  DispatchWorkItemFlags DVar3;
  undefined *puVar4;
  void *pvVar5;
  OS_os_log *pOVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined *puVar9;
  DispatchQoS DVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  Logger LVar13;
  OS_os_log *pOVar14;
  _StringGuts _Var15;
  char *pcVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long unaff_x20;
  long lVar17;
  long lVar18;
  DispatchWorkItemFlags qos;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
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
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  char *local_e0;
  char *local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  undefined *local_b8;
  char *local_b0;
  undefined *local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  local_b8 = (undefined *)os::Logger::typeMetadataAccessor();
  local_c0 = *(long *)(local_b8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c0 + 0x40));
  lVar20 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar20 - extraout_x12;
  DVar3 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_d0 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d0 + 0x40));
  lVar18 = lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_c8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar17 = *(long *)(local_c8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  qos.unknown = (undefined *)(lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  uVar21 = *(undefined8 *)(unaff_x20 + 0x28);
  _swift_bridgeObjectRetain(uVar21);
  puVar4 = param_1;
  FUN_1003f3dd0(param_1,uVar21);
  _swift_bridgeObjectRelease(uVar21);
  if (((ulong)puVar4 & 1) == 0) {
    uVar21 = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined **)(unaff_x20 + 0x28) = param_1;
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRelease(uVar21);
    if (DAT_100557bb0 != -1) {
      _swift_once(&DAT_100557bb0,FUN_100233158);
    }
    uVar21 = 0;
    _Var15.unknown = param_1;
    FUN_10023b5ec(0);
    if (*(long *)(param_1 + 0x10) == 0) {
      local_b0 = (char *)0x5b;
      local_a8 = (undefined *)0xe100000000000000;
      local_70 = (undefined *)0x4f464e49;
      uStack_68 = 0xe400000000000000;
      local_80 = 0x20;
      uStack_78 = 0xe100000000000000;
      FUN_100026df4();
      pcVar16 = (char *)0x0;
      puVar4 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar23 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_80,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,uVar21,uVar21);
      SVar39.bridgeObject = puVar4;
      SVar39.str = pcVar16;
      Swift::String::append(SVar23,SVar39);
      _swift_bridgeObjectRelease(SVar23.bridgeObject);
      SVar23.bridgeObject = (void *)0xe300000000000000;
      SVar23.str = (char *)0x5b205d;
      SVar40.bridgeObject = puVar4;
      SVar40.str = pcVar16;
      Swift::String::append(SVar23,SVar40);
      SVar28.bridgeObject = (void *)0xe800000000000000;
      SVar28.str = (char *)0x6b63616279616c70;
      SVar41.bridgeObject = puVar4;
      SVar41.str = pcVar16;
      Swift::String::append(SVar28,SVar41);
      SVar29.bridgeObject = (void *)0xe200000000000000;
      SVar29.str = (char *)0x205d;
      SVar42.bridgeObject = puVar4;
      SVar42.str = pcVar16;
      Swift::String::append(SVar29,SVar42);
      SVar30.bridgeObject = (void *)0x80000001004e3760;
      SVar30.str = (char *)0xd000000000000038;
      SVar43.bridgeObject = puVar4;
      SVar43.str = pcVar16;
      Swift::String::append(SVar30,SVar43);
      puVar4 = local_a8;
      pcVar16 = local_b0;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar9 = &DAT_100537218;
      _swift_allocObject(&DAT_100537218,0x30,7);
      local_d8 = pcVar16;
      *(char **)(puVar9 + 0x10) = pcVar16;
      *(undefined **)(puVar9 + 0x18) = puVar4;
      *(undefined8 *)(puVar9 + 0x20) = 0;
      *(undefined8 *)(puVar9 + 0x28) = 0xe000000000000000;
      local_90 = thunk_FUN_100099310;
      local_b0 = PTR___NSConcreteStackBlock_100521110;
      local_a8 = (undefined *)0x42000000;
      local_a0 = FUN_1000c7e7c;
      puStack_98 = &DAT_100537230;
      local_88 = puVar9;
      pvVar5 = __Block_copy(&local_b0);
      DVar10.unknown = puVar4;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar10);
      local_70 = PTR___swiftEmptyArrayStorage_100524190;
      puVar11 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar9 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar12 = puVar9;
      FUN_100077ac0();
      Swift::SetAlgebra::_init(lVar18,&local_70,puVar9,puVar12,DVar3.unknown,puVar11);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(pvVar5);
      (**(code **)(local_d0 + 8))(lVar18,DVar3.unknown);
      (**(code **)(lVar17 + 8))(qos.unknown,local_c8);
      _swift_release(local_88);
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      puVar9 = local_b8;
      puVar12 = local_b8;
      FUN_100099338(local_b8,&DAT_100558f50);
      lVar17 = local_c0;
      lVar18 = lVar20;
      (**(code **)(local_c0 + 0x10))(lVar20,puVar12,puVar9);
      uVar2 = (uint)lVar18;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar13.unknown = puVar4;
      _swift_bridgeObjectRetain();
      pOVar6 = os::Logger::get_logObject(LVar13);
      pOVar14 = pOVar6;
      _os_log_type_enabled(pOVar6,uVar2 & 0xff);
      if ((int)pOVar14 == 0) {
        _swift_bridgeObjectRelease_n(puVar4,2);
      }
      else {
        puVar7 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar8 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar7 = 0x8220102;
        pcVar16 = local_d8;
        local_b0 = pcVar8;
        FUN_10012dbb0(local_d8,puVar4,&local_b0);
        *(char **)(puVar7 + 1) = pcVar16;
        _swift_bridgeObjectRelease_n(puVar4,2);
        __os_log_impl(0x100000000,pOVar6,uVar2 & 0xff,"%{public}s",puVar7,0xc);
        FUN_100043f24(pcVar8);
        _swift_slowDealloc(pcVar8,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar7,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar17 + 8))(lVar20,puVar9);
    }
    else {
      local_b0 = (char *)0x0;
      local_a8 = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x39,_Var15);
      SVar22.bridgeObject = (void *)0x80000001004e3710;
      SVar22.str = (char *)0xd000000000000014;
      SVar31.bridgeObject = param_4;
      SVar31.str = param_3;
      Swift::String::append(SVar22,SVar31);
      local_70 = *(undefined **)(param_1 + 0x10);
      SVar23 = Swift::CustomStringConvertible::get_description();
      SVar32.bridgeObject = param_4;
      SVar32.str = param_3;
      Swift::String::append(SVar23,SVar32);
      _swift_bridgeObjectRelease(SVar23.bridgeObject);
      uVar21 = 0xd000000000000023;
      SVar24.bridgeObject = (void *)0x80000001004e3730;
      SVar24.str = (char *)0xd000000000000023;
      SVar33.bridgeObject = param_4;
      SVar33.str = param_3;
      Swift::String::append(SVar24,SVar33);
      puVar4 = local_a8;
      SVar1.bridgeObject = local_a8;
      SVar1.str = local_b0;
      local_b0 = (char *)0x5b;
      local_a8 = (undefined *)0xe100000000000000;
      local_70 = (undefined *)0x4f464e49;
      uStack_68 = 0xe400000000000000;
      local_80 = 0x20;
      uStack_78 = 0xe100000000000000;
      FUN_100026df4();
      pcVar16 = (char *)0x0;
      puVar9 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar23 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_80,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,uVar21,uVar21);
      SVar34.bridgeObject = puVar9;
      SVar34.str = pcVar16;
      Swift::String::append(SVar23,SVar34);
      _swift_bridgeObjectRelease(SVar23.bridgeObject);
      SVar25.bridgeObject = (void *)0xe300000000000000;
      SVar25.str = (char *)0x5b205d;
      SVar35.bridgeObject = puVar9;
      SVar35.str = pcVar16;
      Swift::String::append(SVar25,SVar35);
      SVar26.bridgeObject = (void *)0xe800000000000000;
      SVar26.str = (char *)0x6b63616279616c70;
      SVar36.bridgeObject = puVar9;
      SVar36.str = pcVar16;
      Swift::String::append(SVar26,SVar36);
      SVar27.bridgeObject = (void *)0xe200000000000000;
      SVar27.str = (char *)0x205d;
      SVar37.bridgeObject = puVar9;
      SVar37.str = pcVar16;
      Swift::String::append(SVar27,SVar37);
      local_d8 = puVar4;
      SVar38.bridgeObject = puVar9;
      SVar38.str = pcVar16;
      Swift::String::append(SVar1,SVar38);
      puVar4 = local_a8;
      pcVar16 = local_b0;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar9 = &DAT_1005371c8;
      _swift_allocObject(&DAT_1005371c8,0x30,7);
      local_e0 = pcVar16;
      *(char **)(puVar9 + 0x10) = pcVar16;
      *(undefined **)(puVar9 + 0x18) = puVar4;
      *(undefined8 *)(puVar9 + 0x20) = 0;
      *(undefined8 *)(puVar9 + 0x28) = 0xe000000000000000;
      local_90 = FUN_100099310;
      local_b0 = PTR___NSConcreteStackBlock_100521110;
      local_a8 = (undefined *)0x42000000;
      local_a0 = FUN_1000c7e7c;
      puStack_98 = &DAT_1005371e0;
      local_88 = puVar9;
      pvVar5 = __Block_copy(&local_b0);
      DVar10.unknown = puVar4;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar10);
      local_70 = PTR___swiftEmptyArrayStorage_100524190;
      puVar11 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar9 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar12 = puVar9;
      FUN_100077ac0();
      Swift::SetAlgebra::_init(lVar18,&local_70,puVar9,puVar12,DVar3.unknown,puVar11);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(pvVar5);
      (**(code **)(local_d0 + 8))(lVar18,DVar3.unknown);
      (**(code **)(lVar17 + 8))(qos.unknown,local_c8);
      _swift_release(local_88);
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      puVar9 = local_b8;
      puVar12 = local_b8;
      FUN_100099338(local_b8,&DAT_100558f50);
      lVar17 = local_c0;
      lVar18 = lVar19;
      (**(code **)(local_c0 + 0x10))(lVar19,puVar12,puVar9);
      uVar2 = (uint)lVar18;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar13.unknown = puVar4;
      _swift_bridgeObjectRetain();
      pOVar6 = os::Logger::get_logObject(LVar13);
      pOVar14 = pOVar6;
      _os_log_type_enabled(pOVar6,uVar2 & 0xff);
      if ((int)pOVar14 == 0) {
        _swift_bridgeObjectRelease_n(puVar4,2);
      }
      else {
        puVar7 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar8 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar7 = 0x8220102;
        pcVar16 = local_e0;
        local_b0 = pcVar8;
        FUN_10012dbb0(local_e0,puVar4,&local_b0);
        *(char **)(puVar7 + 1) = pcVar16;
        _swift_bridgeObjectRelease_n(puVar4,2);
        __os_log_impl(0x100000000,pOVar6,uVar2 & 0xff,"%{public}s",puVar7,0xc);
        FUN_100043f24(pcVar8);
        _swift_slowDealloc(pcVar8,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar7,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar17 + 8))(lVar19,puVar9);
      _swift_bridgeObjectRelease(local_d8);
    }
  }
  return;
}

