// rea decompile_all
// name: FUN_10020d948
// address: 0x10020d948
// body: available
// range: 0x10020d948-0x10020e433 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010020dae4) */
/* WARNING: Removing unreachable block (ram,0x00010020db30) */
/* WARNING: Removing unreachable block (ram,0x00010020db34) */
/* WARNING: Removing unreachable block (ram,0x00010020e3b8) */
/* WARNING: Removing unreachable block (ram,0x00010020db38) */
/* WARNING: Removing unreachable block (ram,0x00010020db40) */
/* WARNING: Removing unreachable block (ram,0x00010020db44) */
/* WARNING: Removing unreachable block (ram,0x00010020e3bc) */
/* WARNING: Removing unreachable block (ram,0x00010020db48) */
/* WARNING: Removing unreachable block (ram,0x00010020e3c0) */
/* WARNING: Removing unreachable block (ram,0x00010020dc98) */
/* WARNING: Removing unreachable block (ram,0x00010020e3d8) */
/* WARNING: Removing unreachable block (ram,0x00010020dddc) */
/* WARNING: Removing unreachable block (ram,0x00010020e330) */
/* WARNING: Removing unreachable block (ram,0x00010020de30) */
/* WARNING: Removing unreachable block (ram,0x00010020e344) */

void FUN_10020d948(double param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  String SVar1;
  undefined *puVar2;
  code *pcVar3;
  uint uVar4;
  DispatchWorkItemFlags DVar5;
  URL UVar6;
  NSURL *pNVar7;
  ID self;
  undefined8 uVar8;
  undefined *puVar9;
  void *aBlock;
  DispatchQoS DVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  Logger LVar14;
  OS_os_log *pOVar15;
  OS_os_log *pOVar16;
  undefined4 *puVar17;
  char *pcVar18;
  _StringGuts _Var19;
  char *pcVar20;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar21;
  DispatchWorkItemFlags qos;
  undefined1 *puVar22;
  double dVar23;
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
  undefined1 auStack_110 [16];
  void *local_100;
  long local_f8;
  long local_f0;
  undefined *local_e8;
  long local_e0;
  undefined *local_d8;
  char *local_d0;
  undefined *local_c8;
  code *local_c0;
  undefined *puStack_b8;
  code *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined1 *puVar13;
  
  local_d8 = (undefined *)os::Logger::typeMetadataAccessor();
  local_e0 = *(long *)(local_d8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e0 + 0x40));
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar22 = auStack_110 + (-extraout_x12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  DVar5 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_f0 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  lVar21 = (long)puVar22 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  UVar6.unknown = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_f8 = *(long *)(UVar6.unknown + -8);
  local_e8 = UVar6.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f8 + 0x40));
  qos.unknown = (undefined *)(lVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  pNVar7 = Foundation::URL::_bridgeToObjectiveC(UVar6);
  self = AVAsset::assetWithURL_((ID)&_OBJC_CLASS___AVAsset,pNVar7);
  AVAsset::duration(self,&local_d0);
  dVar23 = (extension_in_CoreMedia):__C.CMTime.seconds.getter_:_Swift.Double::_get_seconds();
  if (((dVar23 < 3600.0) && ((ulong)ABS(dVar23) < 0x7ff0000000000000)) &&
     (_Var19.unknown = local_c8, FUN_10028c374(0x40ac200000000000),
     ((uint)_Var19.unknown & 0xff) != 1)) {
    local_d0 = (char *)0x0;
    local_c8 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x2d,_Var19);
    _swift_bridgeObjectRelease(local_c8);
    local_d0 = (char *)0x726353206b636f4c;
    local_c8 = (void *)0xed0000203a6e6565;
    dVar23 = (double)(long)dVar23;
    if (dVar23 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10020e3f4);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= dVar23) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10020e3f8);
      (*pcVar3)();
    }
    local_90 = (undefined *)(long)dVar23;
    SVar24 = Swift::CustomStringConvertible::get_description();
    SVar29.bridgeObject = param_4;
    SVar29.str = (char *)local_c0;
    Swift::String::append(SVar24,SVar29);
    _swift_bridgeObjectRelease(SVar24.bridgeObject);
    SVar24.bridgeObject = (void *)0x80000001004e13c0;
    SVar24.str = (char *)0xd000000000000018;
    SVar30.bridgeObject = param_4;
    SVar30.str = (char *)local_c0;
    Swift::String::append(SVar24,SVar30);
    param_1 = param_1 / 60.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10020e3fc);
      (*pcVar3)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10020e400);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10020e404);
      (*pcVar3)();
    }
    local_90 = (undefined *)(long)param_1;
    SVar24 = Swift::CustomStringConvertible::get_description();
    SVar31.bridgeObject = param_4;
    SVar31.str = (char *)local_c0;
    Swift::String::append(SVar24,SVar31);
    _swift_bridgeObjectRelease(SVar24.bridgeObject);
    uVar8 = 0x6e696d20;
    SVar25.bridgeObject = (void *)0xe400000000000000;
    SVar25.str = (char *)0x6e696d20;
    SVar32.bridgeObject = param_4;
    SVar32.str = (char *)local_c0;
    Swift::String::append(SVar25,SVar32);
    puVar2 = local_c8;
    SVar1.bridgeObject = local_c8;
    SVar1.str = local_d0;
    local_d0 = (char *)0x5b;
    local_c8 = (undefined *)0xe100000000000000;
    local_90 = (undefined *)0x4f464e49;
    uStack_88 = 0xe400000000000000;
    local_a0 = 0x20;
    uStack_98 = 0xe100000000000000;
    FUN_100026df4();
    pcVar20 = (char *)0x0;
    puVar9 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar24 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_a0,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,uVar8,uVar8);
    SVar33.bridgeObject = puVar9;
    SVar33.str = pcVar20;
    Swift::String::append(SVar24,SVar33);
    _swift_bridgeObjectRelease(SVar24.bridgeObject);
    SVar26.bridgeObject = (void *)0xe300000000000000;
    SVar26.str = (char *)0x5b205d;
    SVar34.bridgeObject = puVar9;
    SVar34.str = pcVar20;
    Swift::String::append(SVar26,SVar34);
    SVar27.bridgeObject = (void *)0xea00000000006e65;
    SVar27.str = (char *)0x657263736b636f6c;
    SVar35.bridgeObject = puVar9;
    SVar35.str = pcVar20;
    Swift::String::append(SVar27,SVar35);
    SVar28.bridgeObject = (void *)0xe200000000000000;
    SVar28.str = (char *)0x205d;
    SVar36.bridgeObject = puVar9;
    SVar36.str = pcVar20;
    Swift::String::append(SVar28,SVar36);
    local_100 = puVar2;
    SVar37.bridgeObject = puVar9;
    SVar37.str = pcVar20;
    Swift::String::append(SVar1,SVar37);
    puVar2 = local_c8;
    pcVar20 = local_d0;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar9 = &DAT_100532a98;
    _swift_allocObject(&DAT_100532a98,0x30,7);
    *(char **)(puVar9 + 0x10) = pcVar20;
    *(undefined **)(puVar9 + 0x18) = puVar2;
    *(undefined8 *)(puVar9 + 0x20) = 0;
    *(undefined8 *)(puVar9 + 0x28) = 0xe000000000000000;
    local_b0 = thunk_FUN_100099310;
    local_d0 = PTR___NSConcreteStackBlock_100521110;
    local_c8 = (undefined *)0x42000000;
    local_c0 = FUN_1000c7e7c;
    puStack_b8 = &DAT_100532ab0;
    local_a8 = puVar9;
    aBlock = __Block_copy(&local_d0);
    DVar10.unknown = puVar2;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar10);
    local_90 = PTR___swiftEmptyArrayStorage_100524190;
    puVar11 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar9 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar12 = puVar9;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(lVar21,&local_90,puVar9,puVar12,DVar5.unknown,puVar11);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    (**(code **)(local_f0 + 8))(lVar21,DVar5.unknown);
    (**(code **)(local_f8 + 8))(qos.unknown,local_e8);
    _swift_release(local_a8);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    puVar9 = local_d8;
    puVar12 = local_d8;
    FUN_100099338(local_d8,&DAT_100558f50);
    lVar21 = local_e0;
    puVar13 = puVar22;
    (**(code **)(local_e0 + 0x10))(puVar22,puVar12,puVar9);
    uVar4 = (uint)puVar13;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar14.unknown = puVar2;
    _swift_bridgeObjectRetain();
    pOVar15 = os::Logger::get_logObject(LVar14);
    pOVar16 = pOVar15;
    _os_log_type_enabled(pOVar15,uVar4 & 0xff);
    if ((int)pOVar16 == 0) {
      _swift_bridgeObjectRelease_n(puVar2,2);
    }
    else {
      puVar17 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar18 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar17 = 0x8220102;
      local_d0 = pcVar18;
      FUN_10012dbb0(pcVar20,puVar2,&local_d0);
      *(char **)(puVar17 + 1) = pcVar20;
      _swift_bridgeObjectRelease_n(puVar2,2);
      __os_log_impl(0x100000000,pOVar15,uVar4 & 0xff,"%{public}s",puVar17,0xc);
      FUN_100043f24(pcVar18);
      _swift_slowDealloc(pcVar18,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar17,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar21 + 8))(puVar22,puVar9);
    _swift_bridgeObjectRelease(local_100);
  }
  return;
}

