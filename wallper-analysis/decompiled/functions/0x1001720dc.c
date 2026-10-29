// rea decompile_all
// name: FUN_1001720dc
// address: 0x1001720dc
// body: available
// range: 0x1001720dc-0x100172e23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001720dc(void)

{
  _CocoaArrayWrapper _Var1;
  String SVar2;
  undefined1 *puVar3;
  code *pcVar4;
  uint uVar5;
  Logger LVar6;
  DispatchWorkItemFlags DVar7;
  DispatchQoS DVar8;
  undefined *puVar9;
  undefined *puVar10;
  Published *pPVar11;
  void *pvVar12;
  undefined *puVar13;
  OS_os_log *pOVar15;
  undefined4 *puVar16;
  char *pcVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  long lVar21;
  OS_os_log *pOVar22;
  Published *pPVar23;
  _StringGuts _Var24;
  Published *pPVar25;
  char *pcVar26;
  void *in_x3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  __int64 _Var27;
  char *pcVar28;
  _StringGuts unaff_x20;
  long lVar29;
  DispatchWorkItemFlags qos;
  long lVar30;
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
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  String SVar60;
  String SVar61;
  String SVar62;
  String SVar63;
  undefined1 auStack_f0 [8];
  char *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined1 *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  char *local_b0;
  undefined *local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char *local_70;
  undefined8 uStack_68;
  undefined1 *puVar14;
  
  LVar6 = os::Logger::typeMetadataAccessor();
  local_b8 = *(long *)(LVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b8 + 0x40));
  local_d0 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar30 = (long)(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  DVar7 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_c0 = *(long *)(DVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c0 + 0x40));
  lVar29 = lVar30 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar8 = Dispatch::DispatchQoS::typeMetadataAccessor();
  local_c8 = *(long *)(DVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c8 + 0x40));
  qos.unknown = (undefined *)(lVar29 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar9 = &DAT_100429630;
  _swift_getKeyPath(&DAT_100429630);
  puVar10 = &DAT_100429658;
  _swift_getKeyPath(&DAT_100429658);
  Combine::Published::_get_subscript(&local_b0);
  _swift_release(puVar9);
  _swift_release(puVar10);
  pcVar26 = local_b0;
  if ((ulong)local_b0 >> 0x3e == 0) {
    _Var27 = *(long *)(((ulong)local_b0 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)local_b0 & 0xffffffffffffff8);
    if ((char *)0x7fffffffffffffff < local_b0) {
      _Var1.unknown = local_b0;
    }
    _Var27 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  _swift_bridgeObjectRelease(pcVar26);
  puVar9 = &DAT_100429750;
  _swift_getKeyPath();
  pcVar26 = "";
  _swift_getKeyPath();
  if (_Var27 == 0) {
    _Var24.unknown = puVar9;
    pcVar17 = pcVar26;
    Combine::Published::_get_subscript(&local_b0);
    _swift_release(puVar9);
    _swift_release(pcVar26);
    if (local_b0 != (char *)0x0) {
      local_b0 = (char *)0x0;
      local_a8 = (undefined1 *)0xe000000000000000;
      local_e0 = DVar8.unknown;
      local_d8 = LVar6.unknown;
      Swift::_StringGuts::grow(0x37,_Var24);
      SVar40.bridgeObject = (void *)0x80000001004df1c0;
      SVar40.str = (char *)0xd000000000000022;
      SVar56.bridgeObject = in_x3;
      SVar56.str = pcVar17;
      Swift::String::append(SVar40,SVar56);
      puVar9 = &DAT_100429750;
      _swift_getKeyPath(&DAT_100429750);
      pcVar26 = "";
      _swift_getKeyPath();
      pcVar17 = pcVar26;
      Combine::Published::_get_subscript(&local_70);
      _swift_release(puVar9);
      _swift_release(pcVar26);
      SVar32 = Swift::CustomStringConvertible::get_description();
      SVar57.bridgeObject = in_x3;
      SVar57.str = pcVar17;
      Swift::String::append(SVar32,SVar57);
      _swift_bridgeObjectRelease(SVar32.bridgeObject);
      uVar18 = 0x1000000000000013;
      SVar39.bridgeObject = (void *)0x80000001004df210;
      SVar39.str = (char *)0x1000000000000013;
      SVar58.bridgeObject = in_x3;
      SVar58.str = pcVar17;
      Swift::String::append(SVar39,SVar58);
      puVar9 = local_a8;
      SVar32.bridgeObject = local_a8;
      SVar32.str = local_b0;
      local_b0 = (char *)0x5b;
      local_a8 = (undefined *)0xe100000000000000;
      local_70 = (char *)0x4f464e49;
      uStack_68 = 0xe400000000000000;
      local_80 = 0x20;
      uStack_78 = 0xe100000000000000;
      FUN_100026df4();
      pcVar26 = (char *)0x0;
      puVar10 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar40 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_80,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,uVar18,uVar18);
      SVar59.bridgeObject = puVar10;
      SVar59.str = pcVar26;
      Swift::String::append(SVar40,SVar59);
      _swift_bridgeObjectRelease(SVar40.bridgeObject);
      SVar41.bridgeObject = (void *)0xe300000000000000;
      SVar41.str = (char *)0x5b205d;
      SVar60.bridgeObject = puVar10;
      SVar60.str = pcVar26;
      Swift::String::append(SVar41,SVar60);
      SVar42.bridgeObject = (void *)0xe700000000000000;
      SVar42.str = (char *)0x79616c70736964;
      SVar61.bridgeObject = puVar10;
      SVar61.str = pcVar26;
      Swift::String::append(SVar42,SVar61);
      SVar43.bridgeObject = (void *)0xe200000000000000;
      SVar43.str = (char *)0x205d;
      SVar62.bridgeObject = puVar10;
      SVar62.str = pcVar26;
      Swift::String::append(SVar43,SVar62);
      local_d0 = puVar9;
      SVar63.bridgeObject = puVar10;
      SVar63.str = pcVar26;
      Swift::String::append(SVar32,SVar63);
      puVar9 = local_a8;
      pcVar26 = local_b0;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar10 = &DAT_10052ff10;
      _swift_allocObject(&DAT_10052ff10,0x30,7);
      local_e8 = pcVar26;
      *(char **)(puVar10 + 0x10) = pcVar26;
      *(undefined **)(puVar10 + 0x18) = puVar9;
      *(undefined8 *)(puVar10 + 0x20) = 0;
      *(undefined8 *)(puVar10 + 0x28) = 0xe000000000000000;
      local_90 = thunk_FUN_100099310;
      local_b0 = PTR___NSConcreteStackBlock_100521110;
      local_a8 = (undefined *)0x42000000;
      local_a0 = FUN_1000c7e7c;
      puStack_98 = &DAT_10052ff28;
      local_88 = puVar10;
      pvVar12 = __Block_copy(&local_b0);
      DVar8.unknown = puVar9;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar8);
      local_70 = PTR___swiftEmptyArrayStorage_100524190;
      puVar19 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar10 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar20 = puVar10;
      FUN_100077ac0();
      Swift::SetAlgebra::_init(lVar29,&local_70,puVar10,puVar20,DVar7.unknown,puVar19);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(pvVar12);
      (**(code **)(local_c0 + 8))(lVar29,DVar7.unknown);
      (**(code **)(local_c8 + 8))(qos.unknown,local_e0);
      _swift_release(local_88);
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      puVar10 = local_d8;
      puVar20 = local_d8;
      FUN_100099338(local_d8,&DAT_100558f50);
      lVar29 = local_b8;
      lVar21 = lVar30;
      (**(code **)(local_b8 + 0x10))(lVar30,puVar20,puVar10);
      uVar5 = (uint)lVar21;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar6.unknown = puVar9;
      _swift_bridgeObjectRetain();
      pOVar15 = os::Logger::get_logObject(LVar6);
      pOVar22 = pOVar15;
      _os_log_type_enabled(pOVar15,uVar5 & 0xff);
      if ((int)pOVar22 == 0) {
        _swift_bridgeObjectRelease_n(puVar9,2);
      }
      else {
        puVar16 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar17 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar16 = 0x8220102;
        pcVar26 = local_e8;
        local_b0 = pcVar17;
        FUN_10012dbb0(local_e8,puVar9,&local_b0);
        *(char **)(puVar16 + 1) = pcVar26;
        _swift_bridgeObjectRelease_n(puVar9,2);
        __os_log_impl(0x100000000,pOVar15,uVar5 & 0xff,"%{public}s",puVar16,0xc);
        FUN_100043f24(pcVar17);
        _swift_slowDealloc(pcVar17,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar16,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar29 + 8))(lVar30,puVar10);
      _swift_bridgeObjectRelease(local_d0);
    }
    _swift_getKeyPath(&DAT_100429750);
    pPVar23 = (Published *)&DAT_100429778;
    _swift_getKeyPath(&DAT_100429778);
    local_b0 = (char *)0x0;
    _swift_retain();
    Combine::Published::_set_subscript(pPVar23,&local_b0);
  }
  else {
    Combine::Published::_get_subscript(&local_b0);
    _swift_release(puVar9);
    _swift_release(pcVar26);
    pcVar26 = local_b0;
    puVar9 = &DAT_100429630;
    _swift_getKeyPath(&DAT_100429630);
    puVar10 = &DAT_100429658;
    _swift_getKeyPath(&DAT_100429658);
    Combine::Published::_get_subscript(&local_b0);
    _swift_release(puVar9);
    _swift_release(puVar10);
    pcVar17 = local_b0;
    if ((ulong)local_b0 >> 0x3e == 0) {
      _Var27 = *(long *)(((ulong)local_b0 & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = (undefined *)((ulong)local_b0 & 0xffffffffffffff8);
      if ((char *)0x7fffffffffffffff < local_b0) {
        _Var1.unknown = local_b0;
      }
      _Var27 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    _swift_bridgeObjectRelease(pcVar17);
    if (_Var27 <= (long)pcVar26) {
      puVar9 = &DAT_100429750;
      _swift_getKeyPath(&DAT_100429750);
      puVar10 = &DAT_100429778;
      _swift_getKeyPath(&DAT_100429778);
      Combine::Published::_get_subscript(&local_b0);
      _swift_release(puVar9);
      _swift_release(puVar10);
      pcVar26 = local_b0;
      puVar9 = &DAT_100429630;
      _swift_getKeyPath(&DAT_100429630);
      puVar10 = &DAT_100429658;
      _swift_getKeyPath(&DAT_100429658);
      Combine::Published::_get_subscript(&local_b0);
      _swift_release(puVar9);
      _swift_release(puVar10);
      if ((ulong)local_b0 >> 0x3e == 0) {
        _Var27 = *(long *)(((ulong)local_b0 & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var1.unknown = (undefined *)((ulong)local_b0 & 0xffffffffffffff8);
        if ((char *)0x7fffffffffffffff < local_b0) {
          _Var1.unknown = local_b0;
        }
        _Var27 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      _swift_bridgeObjectRelease(local_b0);
      if (SBORROW8(_Var27,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100172da0);
        (*pcVar4)();
      }
      pcVar17 = " F\x14";
      pcVar28 = pcVar17;
      local_e0 = DVar8.unknown;
      local_d8 = LVar6.unknown;
      _swift_getKeyPath();
      pPVar23 = (Published *)&DAT_100429778;
      pPVar11 = pPVar23;
      _swift_getKeyPath();
      local_b0 = (char *)(_Var27 - 1U & ((long)(_Var27 - 1U) >> 0x3f ^ 0xffffffffffffffffU));
      _swift_retain();
      Combine::Published::_set_subscript(pPVar11,&local_b0);
      local_b0 = (char *)0x0;
      local_a8 = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x3e,unaff_x20);
      SVar31.bridgeObject = (void *)0x80000001004df1c0;
      SVar31.str = (char *)0xd000000000000022;
      SVar44.bridgeObject = pPVar11;
      SVar44.str = pcVar28;
      Swift::String::append(SVar31,SVar44);
      local_70 = pcVar26;
      SVar32 = Swift::CustomStringConvertible::get_description();
      SVar45.bridgeObject = pPVar11;
      SVar45.str = pcVar28;
      Swift::String::append(SVar32,SVar45);
      _swift_bridgeObjectRelease(SVar32.bridgeObject);
      SVar33.bridgeObject = (void *)0xa500000000000000;
      SVar33.str = (char *)0x209286e220;
      SVar46.bridgeObject = pPVar11;
      SVar46.str = pcVar28;
      Swift::String::append(SVar33,SVar46);
      _swift_getKeyPath(&DAT_100429750);
      _swift_getKeyPath();
      pPVar25 = pPVar23;
      Combine::Published::_get_subscript(&local_70);
      _swift_release(pcVar17);
      _swift_release(pPVar23);
      SVar32 = Swift::CustomStringConvertible::get_description();
      SVar47.bridgeObject = pPVar11;
      SVar47.str = (char *)pPVar25;
      Swift::String::append(SVar32,SVar47);
      _swift_bridgeObjectRelease(SVar32.bridgeObject);
      SVar34.bridgeObject = (void *)0x80000001004df1f0;
      SVar34.str = (char *)0xd000000000000010;
      SVar48.bridgeObject = pPVar11;
      SVar48.str = (char *)pPVar25;
      Swift::String::append(SVar34,SVar48);
      puVar9 = &DAT_100429630;
      _swift_getKeyPath(&DAT_100429630);
      pcVar26 = &DAT_100429658;
      _swift_getKeyPath();
      pcVar17 = pcVar26;
      Combine::Published::_get_subscript(&local_70);
      _swift_release(puVar9);
      _swift_release(pcVar26);
      pcVar26 = local_70;
      if ((ulong)local_70 >> 0x3e == 0) {
        pcVar28 = *(char **)(((ulong)local_70 & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var1.unknown = (undefined *)((ulong)local_70 & 0xffffffffffffff8);
        if ((char *)0x7fffffffffffffff < local_70) {
          _Var1.unknown = local_70;
        }
        pcVar28 = (char *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      puVar9 = local_d8;
      _swift_bridgeObjectRelease(pcVar26);
      local_70 = pcVar28;
      SVar32 = Swift::CustomStringConvertible::get_description();
      SVar49.bridgeObject = pPVar11;
      SVar49.str = pcVar17;
      Swift::String::append(SVar32,SVar49);
      _swift_bridgeObjectRelease(SVar32.bridgeObject);
      SVar35.bridgeObject = (void *)0xe100000000000000;
      SVar35.str = (char *)0x29;
      uVar18 = 0x29;
      SVar50.bridgeObject = pPVar11;
      SVar50.str = pcVar17;
      Swift::String::append(SVar35,SVar50);
      puVar10 = local_a8;
      SVar2.bridgeObject = local_a8;
      SVar2.str = local_b0;
      local_b0 = (char *)0x5b;
      local_a8 = (undefined *)0xe100000000000000;
      local_70 = (char *)0x4f464e49;
      uStack_68 = 0xe400000000000000;
      local_80 = 0x20;
      uStack_78 = 0xe100000000000000;
      FUN_100026df4();
      pcVar26 = (char *)0x0;
      puVar20 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar32 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_80,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,uVar18,uVar18);
      SVar51.bridgeObject = puVar20;
      SVar51.str = pcVar26;
      Swift::String::append(SVar32,SVar51);
      _swift_bridgeObjectRelease(SVar32.bridgeObject);
      SVar36.bridgeObject = (void *)0xe300000000000000;
      SVar36.str = (char *)0x5b205d;
      SVar52.bridgeObject = puVar20;
      SVar52.str = pcVar26;
      Swift::String::append(SVar36,SVar52);
      SVar37.bridgeObject = (void *)0xe700000000000000;
      SVar37.str = (char *)0x79616c70736964;
      SVar53.bridgeObject = puVar20;
      SVar53.str = pcVar26;
      Swift::String::append(SVar37,SVar53);
      SVar38.bridgeObject = (void *)0xe200000000000000;
      SVar38.str = (char *)0x205d;
      SVar54.bridgeObject = puVar20;
      SVar54.str = pcVar26;
      Swift::String::append(SVar38,SVar54);
      local_d8 = puVar10;
      SVar55.bridgeObject = puVar20;
      SVar55.str = pcVar26;
      Swift::String::append(SVar2,SVar55);
      puVar10 = local_a8;
      pcVar26 = local_b0;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar20 = &DAT_10052fec0;
      _swift_allocObject(&DAT_10052fec0,0x30,7);
      *(char **)(puVar20 + 0x10) = pcVar26;
      *(undefined **)(puVar20 + 0x18) = puVar10;
      *(undefined8 *)(puVar20 + 0x20) = 0;
      *(undefined8 *)(puVar20 + 0x28) = 0xe000000000000000;
      local_90 = thunk_FUN_100099310;
      local_b0 = PTR___NSConcreteStackBlock_100521110;
      local_a8 = (undefined *)0x42000000;
      local_a0 = FUN_1000c7e7c;
      puStack_98 = &DAT_10052fed8;
      local_88 = puVar20;
      pvVar12 = __Block_copy(&local_b0);
      DVar8.unknown = puVar10;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar8);
      local_70 = PTR___swiftEmptyArrayStorage_100524190;
      puVar19 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar20 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar13 = puVar20;
      FUN_100077ac0();
      Swift::SetAlgebra::_init(lVar29,&local_70,puVar20,puVar13,DVar7.unknown,puVar19);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(pvVar12);
      (**(code **)(local_c0 + 8))(lVar29,DVar7.unknown);
      (**(code **)(local_c8 + 8))(qos.unknown,local_e0);
      _swift_release(local_88);
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      puVar20 = puVar9;
      FUN_100099338(puVar9,&DAT_100558f50);
      lVar29 = local_b8;
      puVar3 = local_d0;
      puVar14 = local_d0;
      (**(code **)(local_b8 + 0x10))(local_d0,puVar20,puVar9);
      uVar5 = (uint)puVar14;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar6.unknown = puVar10;
      _swift_bridgeObjectRetain();
      pOVar15 = os::Logger::get_logObject(LVar6);
      pOVar22 = pOVar15;
      _os_log_type_enabled(pOVar15,uVar5 & 0xff);
      if ((int)pOVar22 == 0) {
        _swift_bridgeObjectRelease_n(puVar10,2);
      }
      else {
        puVar16 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar17 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar16 = 0x8220102;
        local_b0 = pcVar17;
        FUN_10012dbb0(pcVar26,puVar10,&local_b0);
        *(char **)(puVar16 + 1) = pcVar26;
        _swift_bridgeObjectRelease_n(puVar10,2);
        __os_log_impl(0x100000000,pOVar15,uVar5 & 0xff,"%{public}s",puVar16,0xc);
        FUN_100043f24(pcVar17);
        _swift_slowDealloc(pcVar17,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar16,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar29 + 8))(puVar3,puVar9);
      _swift_bridgeObjectRelease(local_d8);
    }
  }
  return;
}

