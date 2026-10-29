// rea decompile_all
// name: FUN_1001e41c0
// address: 0x1001e41c0
// body: available
// range: 0x1001e41c0-0x1001e48fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001e41c0(long param_1,char *param_2,char *param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  uint uVar4;
  Logger LVar5;
  DispatchWorkItemFlags DVar6;
  DispatchQoS DVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined *puVar10;
  DispatchQoS DVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  Logger LVar14;
  OS_os_log *pOVar16;
  OS_os_log *pOVar17;
  undefined4 *puVar18;
  char *pcVar19;
  _StringGuts _Var20;
  char *pcVar21;
  long lVar22;
  long extraout_x8;
  undefined1 *puVar23;
  long lVar24;
  long extraout_x8_00;
  long lVar25;
  long extraout_x8_01;
  long lVar26;
  long lVar27;
  long lVar28;
  DispatchWorkItemFlags qos;
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
  String SVar44;
  String SVar45;
  String SVar46;
  undefined1 auStack_100 [8];
  char *local_f8;
  undefined8 local_f0;
  void *local_e8;
  char *local_b0;
  undefined *local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined8 local_68;
  undefined1 *puVar15;
  
  LVar5 = os::Logger::typeMetadataAccessor();
  lVar22 = *(long *)(LVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar22 + 0x40));
  puVar23 = auStack_100 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar6 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar24 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar24 + 0x40));
  lVar28 = (long)puVar23 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar7 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar25 = *(long *)(DVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar25 + 0x40));
  qos.unknown = (undefined *)(lVar28 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  _swift_beginAccess(param_1 + _TtC7Wallper14PreviewManager::inFlightIDs,&local_b0,0x21,0);
  pcVar21 = param_3;
  FUN_100227384(param_2,param_3);
  _swift_endAccess(&local_b0);
  _swift_bridgeObjectRelease(pcVar21);
  if ((param_4 & 1) == 0) {
    _swift_beginAccess(param_1 + _TtC7Wallper14PreviewManager::transparentIDs,&local_b0,0x21,0);
    _swift_bridgeObjectRetain(param_3);
    FUN_1001ca054(&local_70,param_2,param_3);
    _swift_endAccess(&local_b0);
    _swift_bridgeObjectRelease(local_68);
    lVar2 = _TtC7Wallper14PreviewManager::transparentRetryCount;
    _swift_beginAccess(param_1 + _TtC7Wallper14PreviewManager::transparentRetryCount,&local_b0,0x20,
                       0);
    lVar26 = *(long *)(param_1 + lVar2);
    if (*(long *)(lVar26 + 0x10) == 0) {
      lVar27 = 0;
    }
    else {
      _swift_bridgeObjectRetain(lVar26);
      pcVar21 = param_2;
      pcVar19 = param_3;
      FUN_10000464c();
      if (((ulong)pcVar19 & 1) == 0) {
        lVar27 = 0;
      }
      else {
        lVar27 = *(long *)(*(long *)(lVar26 + 0x38) + (long)pcVar21 * 8);
      }
      _swift_bridgeObjectRelease(lVar26);
    }
    _swift_endAccess(&local_b0);
    puVar1 = (undefined *)(lVar27 + 1);
    if (SCARRY8(lVar27,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001e48cc);
      (*pcVar3)();
    }
    _swift_beginAccess(param_1 + lVar2,&local_b0,0x21,0);
    pvVar8 = *(void **)(param_1 + lVar2);
    _swift_isUniquelyReferenced_nonNull_native();
    local_70 = *(undefined **)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0x8000000000000000;
    _Var20.unknown = param_2;
    pcVar21 = param_3;
    FUN_1003402f4(puVar1);
    *(undefined **)(param_1 + lVar2) = local_70;
    _swift_endAccess(&local_b0);
    if (1 < (long)puVar1) {
      local_b0 = (char *)0x0;
      local_a8 = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x48,_Var20);
      SVar33.bridgeObject = (void *)0x80000001004e0f50;
      SVar33.str = (char *)0xd000000000000035;
      SVar37.bridgeObject = pvVar8;
      SVar37.str = pcVar21;
      Swift::String::append(SVar33,SVar37);
      SVar29.bridgeObject = param_3;
      SVar29.str = param_2;
      SVar38.bridgeObject = pvVar8;
      SVar38.str = pcVar21;
      Swift::String::append(SVar29,SVar38);
      SVar30.bridgeObject = (void *)0xe700000000000000;
      SVar30.str = (char *)0x20726574666120;
      SVar39.bridgeObject = pvVar8;
      SVar39.str = pcVar21;
      Swift::String::append(SVar30,SVar39);
      local_70 = puVar1;
      SVar31 = Swift::CustomStringConvertible::get_description();
      SVar40.bridgeObject = pvVar8;
      SVar40.str = pcVar21;
      Swift::String::append(SVar31,SVar40);
      _swift_bridgeObjectRelease(SVar31.bridgeObject);
      uVar9 = 0x7365697274657220;
      SVar32.bridgeObject = (void *)0xe800000000000000;
      SVar32.str = (char *)0x7365697274657220;
      SVar41.bridgeObject = pvVar8;
      SVar41.str = pcVar21;
      Swift::String::append(SVar32,SVar41);
      puVar1 = local_a8;
      SVar31.bridgeObject = local_a8;
      SVar31.str = local_b0;
      local_b0 = (char *)0x5b;
      local_a8 = (undefined *)0xe100000000000000;
      local_70 = (undefined *)0x4f464e49;
      local_68 = 0xe400000000000000;
      local_80 = 0x20;
      uStack_78 = 0xe100000000000000;
      FUN_100026df4();
      pcVar21 = (char *)0x0;
      puVar10 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar33 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_80,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,uVar9,uVar9);
      SVar42.bridgeObject = puVar10;
      SVar42.str = pcVar21;
      Swift::String::append(SVar33,SVar42);
      _swift_bridgeObjectRelease(SVar33.bridgeObject);
      SVar34.bridgeObject = (void *)0xe300000000000000;
      SVar34.str = (char *)0x5b205d;
      SVar43.bridgeObject = puVar10;
      SVar43.str = pcVar21;
      Swift::String::append(SVar34,SVar43);
      SVar35.bridgeObject = (void *)0xe300000000000000;
      SVar35.str = (char *)0x707061;
      SVar44.bridgeObject = puVar10;
      SVar44.str = pcVar21;
      Swift::String::append(SVar35,SVar44);
      SVar36.bridgeObject = (void *)0xe200000000000000;
      SVar36.str = (char *)0x205d;
      SVar45.bridgeObject = puVar10;
      SVar45.str = pcVar21;
      Swift::String::append(SVar36,SVar45);
      local_e8 = puVar1;
      SVar46.bridgeObject = puVar10;
      SVar46.str = pcVar21;
      Swift::String::append(SVar31,SVar46);
      puVar1 = local_a8;
      pcVar21 = local_b0;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      local_f0 = DAT_100559010;
      puVar10 = &DAT_100531fc8;
      _swift_allocObject(&DAT_100531fc8,0x30,7);
      local_f8 = pcVar21;
      *(char **)(puVar10 + 0x10) = pcVar21;
      *(undefined **)(puVar10 + 0x18) = puVar1;
      *(undefined8 *)(puVar10 + 0x20) = 0;
      *(undefined8 *)(puVar10 + 0x28) = 0xe000000000000000;
      local_90 = thunk_FUN_100099310;
      local_b0 = PTR___NSConcreteStackBlock_100521110;
      local_a8 = (undefined *)0x42000000;
      local_a0 = FUN_1000c7e7c;
      puStack_98 = &DAT_100531fe0;
      local_88 = puVar10;
      pvVar8 = __Block_copy(&local_b0);
      DVar11.unknown = puVar1;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar11);
      local_70 = PTR___swiftEmptyArrayStorage_100524190;
      puVar12 = &DAT_100553db0;
      FUN_100047f94(&DAT_100553db0,0xff,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar10 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar13 = &DAT_100553dc0;
      FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
      Swift::SetAlgebra::_init(lVar28,&local_70,puVar10,puVar13,DVar6.unknown,puVar12);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(pvVar8);
      (**(code **)(lVar24 + 8))(lVar28,DVar6.unknown);
      (**(code **)(lVar25 + 8))(qos.unknown,DVar7.unknown);
      _swift_release(local_88);
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      LVar14 = LVar5;
      FUN_100099338(LVar5.unknown,&DAT_100558f50);
      puVar15 = puVar23;
      (**(code **)(lVar22 + 0x10))(puVar23,LVar14.unknown,LVar5.unknown);
      uVar4 = (uint)puVar15;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar14.unknown = puVar1;
      _swift_bridgeObjectRetain();
      pOVar16 = os::Logger::get_logObject(LVar14);
      pOVar17 = pOVar16;
      _os_log_type_enabled(pOVar16,uVar4 & 0xff);
      if ((int)pOVar17 == 0) {
        _swift_bridgeObjectRelease_n(puVar1,2);
      }
      else {
        puVar18 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar19 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar18 = 0x8220102;
        pcVar21 = local_f8;
        local_b0 = pcVar19;
        FUN_10012dbb0(local_f8,puVar1,&local_b0);
        *(char **)(puVar18 + 1) = pcVar21;
        _swift_bridgeObjectRelease_n(puVar1,2);
        __os_log_impl(0x100000000,pOVar16,uVar4 & 0xff,"%{public}s",puVar18,0xc);
        FUN_100043f24(pcVar19);
        _swift_slowDealloc(pcVar19,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar18,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar22 + 8))(puVar23,LVar5.unknown);
      _swift_bridgeObjectRelease(local_e8);
    }
  }
  else {
    _swift_beginAccess(param_1 + _TtC7Wallper14PreviewManager::transparentIDs,&local_b0,0x21,0);
    pcVar21 = param_3;
    FUN_100227384(param_2,param_3);
    _swift_endAccess(&local_b0);
    _swift_bridgeObjectRelease(pcVar21);
    _swift_beginAccess(param_1 + _TtC7Wallper14PreviewManager::transparentRetryCount,&local_b0,0x21,
                       0);
    FUN_10027ea68(param_2,param_3);
    _swift_endAccess(&local_b0);
    _swift_beginAccess(param_1 + _TtC7Wallper14PreviewManager::failedIDs,&local_b0,0x21,0);
    FUN_10027ea68(param_2,param_3);
    _swift_endAccess(&local_b0);
  }
  return;
}

