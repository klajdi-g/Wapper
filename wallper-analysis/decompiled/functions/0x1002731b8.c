// rea decompile_all
// name: FUN_1002731b8
// address: 0x1002731b8
// body: available
// range: 0x1002731b8-0x10027377b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002731b8(undefined8 param_1,_StringGuts param_2,undefined8 param_3,void *param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined *puVar3;
  void *pvVar4;
  DispatchQoS DVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  Logger LVar10;
  OS_os_log *pOVar11;
  OS_os_log *pOVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  char *pcVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  DispatchWorkItemFlags qos;
  Published *pPVar18;
  long lVar19;
  String SVar20;
  String SVar21;
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
  undefined1 auStack_130 [8];
  undefined8 local_128;
  long local_120;
  undefined *local_118;
  long local_110;
  undefined *local_108;
  void *local_100;
  undefined1 *local_f8;
  long local_f0;
  undefined *local_e8;
  Published *local_e0;
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined *local_c8;
  code *local_c0;
  undefined *puStack_b8;
  code *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  char local_80 [32];
  undefined1 auStack_58 [8];
  undefined1 *puVar9;
  
  local_e0 = (Published *)param_2.unknown;
  local_e8 = (undefined *)os::Logger::typeMetadataAccessor();
  local_f0 = *(long *)(local_e8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  local_f8 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_108 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_110 = *(long *)(local_108 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_110 + 0x40));
  lVar19 = (long)(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_118 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_120 = *(long *)(local_118 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_120 + 0x40));
  qos.unknown = (undefined *)(lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_d0 = 0;
  uStack_cf = 0;
  local_c8 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x22,param_2);
  _swift_bridgeObjectRelease(local_c8);
  local_d0 = 0x20;
  uStack_cf = 0x10000000000000;
  local_c8 = (void *)0x80000001004e3100;
  pcVar17 = local_80;
  _swift_getErrorValue(param_1,auStack_58);
  SVar20 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  pvVar4 = SVar20.bridgeObject;
  SVar27.bridgeObject = param_4;
  SVar27.str = pcVar17;
  Swift::String::append(SVar20,SVar27);
  _swift_bridgeObjectRelease(pvVar4);
  puVar16 = local_c8;
  SVar20.str._1_7_ = uStack_cf;
  SVar20.str._0_1_ = local_d0;
  SVar20.bridgeObject = local_c8;
  local_d0 = 0x5b;
  uStack_cf = 0;
  local_c8 = (undefined *)0xe100000000000000;
  local_90 = (undefined *)0x4e524157;
  uStack_88 = 0xe400000000000000;
  local_a0 = 0x20;
  uStack_98 = 0xe100000000000000;
  FUN_100026df4();
  pcVar17 = (char *)0x0;
  puVar7 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar21 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_a0,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pvVar4,pvVar4);
  SVar28.bridgeObject = puVar7;
  SVar28.str = pcVar17;
  Swift::String::append(SVar21,SVar28);
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  SVar21.bridgeObject = (void *)0xe300000000000000;
  SVar21.str = (char *)0x5b205d;
  SVar29.bridgeObject = puVar7;
  SVar29.str = pcVar17;
  Swift::String::append(SVar21,SVar29);
  SVar22.bridgeObject = (void *)0xe300000000000000;
  SVar22.str = (char *)0x707061;
  SVar30.bridgeObject = puVar7;
  SVar30.str = pcVar17;
  Swift::String::append(SVar22,SVar30);
  SVar23.bridgeObject = (void *)0xe200000000000000;
  SVar23.str = (char *)0x205d;
  SVar31.bridgeObject = puVar7;
  SVar31.str = pcVar17;
  Swift::String::append(SVar23,SVar31);
  local_100 = puVar16;
  SVar32.bridgeObject = puVar7;
  SVar32.str = pcVar17;
  Swift::String::append(SVar20,SVar32);
  puVar16 = local_c8;
  uVar15 = CONCAT71(uStack_cf,local_d0);
  local_d0 = 0x20;
  uStack_cf = 0x2820;
  local_c8 = (undefined *)0xe300000000000000;
  SVar24.bridgeObject = (void *)0x80000001004e3130;
  SVar24.str = (char *)0xd000000000000013;
  SVar33.bridgeObject = puVar7;
  SVar33.str = pcVar17;
  Swift::String::append(SVar24,SVar33);
  SVar25.bridgeObject = (void *)0xe100000000000000;
  SVar25.str = (char *)0x3a;
  SVar34.bridgeObject = puVar7;
  SVar34.str = pcVar17;
  Swift::String::append(SVar25,SVar34);
  local_90 = (undefined *)0xcd;
  SVar20 = Swift::CustomStringConvertible::get_description();
  SVar35.bridgeObject = puVar7;
  SVar35.str = pcVar17;
  Swift::String::append(SVar20,SVar35);
  _swift_bridgeObjectRelease(SVar20.bridgeObject);
  SVar26.bridgeObject = (void *)0xe100000000000000;
  SVar26.str = (char *)0x29;
  SVar36.bridgeObject = puVar7;
  SVar36.str = pcVar17;
  Swift::String::append(SVar26,SVar36);
  puVar7 = local_c8;
  uVar14 = CONCAT71(uStack_cf,local_d0);
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar3 = &DAT_100536520;
  _swift_allocObject(&DAT_100536520,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar15;
  *(undefined **)(puVar3 + 0x18) = puVar16;
  *(undefined8 *)(puVar3 + 0x20) = uVar14;
  *(undefined **)(puVar3 + 0x28) = puVar7;
  local_b0 = thunk_FUN_100099310;
  local_d0 = SUB81(PTR___NSConcreteStackBlock_100521110,0);
  uStack_cf = (undefined7)((ulong)PTR___NSConcreteStackBlock_100521110 >> 8);
  local_c8 = (undefined *)0x42000000;
  local_c0 = FUN_1000c7e7c;
  puStack_b8 = &DAT_100536538;
  local_128 = uVar15;
  local_a8 = puVar3;
  pvVar4 = __Block_copy(&local_d0);
  DVar5.unknown = puVar16;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar5);
  local_90 = PTR___swiftEmptyArrayStorage_100524190;
  puVar6 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar7 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar8 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  puVar3 = local_108;
  Swift::SetAlgebra::_init(lVar19,&local_90,puVar7,puVar8,local_108,puVar6);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar4);
  (**(code **)(local_110 + 8))(lVar19,puVar3);
  (**(code **)(local_120 + 8))(qos.unknown,local_118);
  _swift_release(local_a8);
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  puVar7 = local_e8;
  puVar3 = local_e8;
  FUN_100099338(local_e8,&DAT_100558f50);
  lVar19 = local_f0;
  puVar1 = local_f8;
  puVar9 = local_f8;
  (**(code **)(local_f0 + 0x10))(local_f8,puVar3,puVar7);
  uVar2 = (uint)puVar9;
  static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
  LVar10.unknown = puVar16;
  _swift_bridgeObjectRetain();
  pOVar11 = os::Logger::get_logObject(LVar10);
  pOVar12 = pOVar11;
  _os_log_type_enabled(pOVar11,uVar2 & 0xff);
  if ((int)pOVar12 == 0) {
    _swift_bridgeObjectRelease_n(puVar16,2);
  }
  else {
    puVar13 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    uVar14 = 0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    local_d0 = (undefined1)uVar14;
    uStack_cf = (undefined7)((ulong)uVar14 >> 8);
    *puVar13 = 0x8220102;
    uVar15 = local_128;
    FUN_10012dbb0(local_128,puVar16,&local_d0);
    *(undefined8 *)(puVar13 + 1) = uVar15;
    _swift_bridgeObjectRelease_n(puVar16,2);
    __os_log_impl(0x100000000,pOVar11,uVar2 & 0xff,"%{public}s",puVar13,0xc);
    FUN_100043f24(uVar14);
    _swift_slowDealloc(uVar14,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar13,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar19 + 8))(puVar1,puVar7);
  _swift_bridgeObjectRelease(local_100);
  puVar16 = &DAT_10042d370;
  _swift_getKeyPath(&DAT_10042d370);
  puVar7 = &DAT_10042d398;
  _swift_getKeyPath(&DAT_10042d398);
  pPVar18 = local_e0;
  local_d0 = 1;
  _swift_retain(local_e0);
  Combine::Published::_set_subscript(pPVar18,&local_d0,pPVar18,puVar16,puVar7);
  *(undefined1 *)((long)&pPVar18->unknown + _TtC7Wallper17VideoLibraryStore::isLoadingRemote) = 0;
  return;
}

