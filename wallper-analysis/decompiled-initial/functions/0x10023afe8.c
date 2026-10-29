// rea decompile_all
// name: FUN_10023afe8
// address: 0x10023afe8
// body: available
// range: 0x10023afe8-0x10023b5eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10023afe8(undefined *param_1,uint param_2)

{
  String SVar1;
  undefined4 uVar2;
  uint uVar3;
  Logger LVar4;
  DispatchWorkItemFlags DVar5;
  DispatchQoS DVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  Logger LVar11;
  OS_os_log *pOVar12;
  OS_os_log *pOVar13;
  undefined4 *puVar14;
  undefined *puVar15;
  _StringGuts _Var16;
  char *pcVar17;
  void *pvVar18;
  long extraout_x8;
  long lVar19;
  long lVar20;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar21;
  long lVar22;
  long unaff_x20;
  char *pcVar23;
  void *pvVar24;
  long lVar25;
  long lVar26;
  DispatchWorkItemFlags qos;
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
  undefined *local_f0;
  void *local_e8;
  long local_e0;
  uint local_d8;
  undefined4 local_d4;
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
  
  LVar4 = os::Logger::typeMetadataAccessor();
  lVar25 = *(long *)(LVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar25 + 0x40));
  lVar19 = (long)&local_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar5 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar20 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  lVar26 = lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar6 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar22 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar22 + 0x40));
  qos.unknown = (undefined *)(lVar26 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  if ((param_2 & 1) == 0) {
    _Var16.unknown = (undefined *)&local_b0;
    pcVar17 = (char *)0x21;
    pvVar18 = (void *)0x0;
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::globalHolds);
    puVar15 = param_1;
    FUN_1002274b0();
    _swift_endAccess(&local_b0);
    if (((uint)puVar15 & 0xff) == 4) {
      return;
    }
    pcVar23 = (char *)0x64657361656c6572;
    pvVar24 = (void *)0xe800000000000000;
  }
  else {
    pcVar17 = (char *)0x21;
    pvVar18 = (void *)0x0;
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::globalHolds,&local_b0);
    uVar7 = 0;
    _Var16.unknown = param_1;
    FUN_1001ca26c();
    _swift_endAccess(&local_b0);
    if ((uVar7 & 1) == 0) {
      return;
    }
    pvVar24 = (void *)0xe300000000000000;
    pcVar23 = (char *)0x746573;
  }
  local_b0 = (char *)0x0;
  local_a8 = (void *)0xe000000000000000;
  local_f0 = DVar6.unknown;
  local_e0 = lVar25;
  local_d8 = param_2;
  Swift::_StringGuts::grow(0x13,_Var16);
  SVar29.bridgeObject = (void *)0xee0020646c6f6820;
  SVar29.str = (char *)0x6b63616279616c50;
  SVar33.bridgeObject = pvVar18;
  SVar33.str = pcVar17;
  Swift::String::append(SVar29,SVar33);
  local_d4 = SUB84(param_1,0);
  local_70 = (undefined *)CONCAT71(local_70._1_7_,(char)param_1);
  pcVar17 = "\x01\x02";
  puVar15 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100523f88;
  Swift::__print_unlocked
            (&local_70,&local_b0,&DAT_1005340a8,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100523f88,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100523f90
            );
  SVar27.bridgeObject = (void *)0xe100000000000000;
  SVar27.str = (char *)0x20;
  SVar34.bridgeObject = puVar15;
  SVar34.str = pcVar17;
  Swift::String::append(SVar27,SVar34);
  SVar28.bridgeObject = pvVar24;
  SVar28.str = pcVar23;
  SVar35.bridgeObject = puVar15;
  SVar35.str = pcVar17;
  Swift::String::append(SVar28,SVar35);
  _swift_bridgeObjectRelease(pvVar24);
  puVar15 = local_a8;
  SVar1.bridgeObject = local_a8;
  SVar1.str = local_b0;
  local_b0 = (char *)0x5b;
  local_a8 = (undefined *)0xe100000000000000;
  local_70 = (undefined *)0x4f464e49;
  uStack_68 = 0xe400000000000000;
  local_80 = 0x20;
  uStack_78 = 0xe100000000000000;
  FUN_100026df4();
  pcVar17 = (char *)0x0;
  puVar8 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar29 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_80,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pvVar24,pvVar24);
  SVar36.bridgeObject = puVar8;
  SVar36.str = pcVar17;
  Swift::String::append(SVar29,SVar36);
  _swift_bridgeObjectRelease(SVar29.bridgeObject);
  SVar30.bridgeObject = (void *)0xe300000000000000;
  SVar30.str = (char *)0x5b205d;
  SVar37.bridgeObject = puVar8;
  SVar37.str = pcVar17;
  Swift::String::append(SVar30,SVar37);
  SVar31.bridgeObject = (void *)0xe800000000000000;
  SVar31.str = (char *)0x6b63616279616c70;
  SVar38.bridgeObject = puVar8;
  SVar38.str = pcVar17;
  Swift::String::append(SVar31,SVar38);
  SVar32.bridgeObject = (void *)0xe200000000000000;
  SVar32.str = (char *)0x205d;
  SVar39.bridgeObject = puVar8;
  SVar39.str = pcVar17;
  Swift::String::append(SVar32,SVar39);
  local_e8 = puVar15;
  SVar40.bridgeObject = puVar8;
  SVar40.str = pcVar17;
  Swift::String::append(SVar1,SVar40);
  puVar15 = local_a8;
  pcVar17 = local_b0;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar8 = &DAT_1005353b0;
  _swift_allocObject(&DAT_1005353b0,0x30,7);
  *(char **)(puVar8 + 0x10) = pcVar17;
  *(undefined **)(puVar8 + 0x18) = puVar15;
  *(undefined8 *)(puVar8 + 0x20) = 0;
  *(undefined8 *)(puVar8 + 0x28) = 0xe000000000000000;
  local_90 = thunk_FUN_100099310;
  local_b0 = PTR___NSConcreteStackBlock_100521110;
  local_a8 = (undefined *)0x42000000;
  local_a0 = FUN_1000c7e7c;
  puStack_98 = &DAT_1005353c8;
  local_88 = puVar8;
  pvVar18 = __Block_copy(&local_b0);
  DVar6.unknown = puVar15;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar6);
  local_70 = PTR___swiftEmptyArrayStorage_100524190;
  puVar9 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar8 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar10 = puVar8;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(lVar26,&local_70,puVar8,puVar10,DVar5.unknown,puVar9);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar18);
  (**(code **)(lVar20 + 8))(lVar26,DVar5.unknown);
  (**(code **)(lVar22 + 8))(qos.unknown,local_f0);
  _swift_release(local_88);
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  LVar11 = LVar4;
  FUN_100099338(LVar4.unknown,&DAT_100558f50);
  lVar20 = local_e0;
  lVar22 = lVar19;
  (**(code **)(local_e0 + 0x10))(lVar19,LVar11.unknown,LVar4.unknown);
  uVar3 = (uint)lVar22;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar11.unknown = puVar15;
  _swift_bridgeObjectRetain();
  pOVar12 = os::Logger::get_logObject(LVar11);
  pOVar13 = pOVar12;
  _os_log_type_enabled(pOVar12,uVar3 & 0xff);
  if ((int)pOVar13 == 0) {
    _swift_bridgeObjectRelease_n(puVar15,2);
    pcVar21 = *(code **)(lVar20 + 8);
  }
  else {
    puVar14 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar23 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar14 = 0x8220102;
    local_b0 = pcVar23;
    FUN_10012dbb0(pcVar17,puVar15,&local_b0);
    *(char **)(puVar14 + 1) = pcVar17;
    _swift_bridgeObjectRelease_n(puVar15,2);
    __os_log_impl(0x100000000,pOVar12,uVar3 & 0xff,"%{public}s",puVar14,0xc);
    FUN_100043f24(pcVar23);
    _swift_slowDealloc(pcVar23,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar14,0xffffffffffffffff,0xffffffffffffffff);
    pcVar21 = *(code **)(lVar20 + 8);
  }
  (*pcVar21)(lVar19,LVar4.unknown);
  _swift_bridgeObjectRelease(local_e8);
  uVar2 = local_d4;
  lVar19 = _TtC7Wallper21VideoWallpaperManager::windows;
  puVar15 = PTR___swiftEmptySetSingleton_1005241a0;
  if ((local_d8 & 1) != 0) {
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::windows,&local_b0,0,0);
    puVar15 = *(undefined **)(unaff_x20 + lVar19);
    _swift_bridgeObjectRetain(puVar15);
    thunk_FUN_1001f0148();
  }
  FUN_10023b5ec(uVar2,puVar15);
  _swift_bridgeObjectRelease(puVar15);
  return;
}

