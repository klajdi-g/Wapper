// rea decompile_all
// name: FUN_100147594
// address: 0x100147594
// body: available
// range: 0x100147594-0x100147b07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100147594(undefined8 param_1,NWPathMonitor *param_2,double param_3,undefined4 param_4)

{
  undefined4 uVar1;
  DispatchTime DVar2;
  double dVar3;
  DispatchQoS qos;
  DispatchWorkItemFlags flags;
  NWPathMonitor *this;
  undefined *puVar4;
  QoSClass QVar5;
  undefined7 extraout_var;
  undefined *puVar7;
  ID IVar8;
  undefined *puVar9;
  OS_dispatch_queue *queue;
  void *aBlock;
  DispatchQoS DVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar13;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  ulong uVar14;
  ulong uVar15;
  code *pcVar16;
  DispatchTime DVar17;
  long lVar18;
  long lVar19;
  code *pcVar20;
  long lVar21;
  undefined auStack_170 [8];
  code *local_168;
  code *local_160;
  ulong local_158;
  long local_150;
  long local_148;
  undefined *local_140;
  DispatchTime local_138;
  long local_130;
  double local_128;
  undefined8 local_120;
  DispatchTime local_118;
  undefined *local_110;
  DispatchQoS local_108;
  long local_100;
  undefined *puStack_f8;
  DispatchWorkItemFlags local_f0;
  long local_e8;
  undefined *local_e0;
  long local_d8;
  ID local_d0;
  NWPathMonitor *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  long lVar6;
  
  local_c0 = (code *)(CONCAT44(local_c0._4_4_,param_4) & 0xffffffff000000ff);
  local_128 = param_3;
  local_c8 = param_2;
  local_e0 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_e8 = *(long *)(local_e0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e8 + 0x40));
  puVar13 = auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_f0.unknown = puVar13;
  puStack_f8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_100 = *(long *)(puStack_f8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_100 + 0x40));
  puVar13 = puVar13 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_108.unknown = puVar13;
  local_110 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  local_130 = *(long *)(local_110 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_130 + 0x40));
  puVar13 = puVar13 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_138.unknown = puVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_118.unknown = puVar13 + -extraout_x12;
  QVar5 = Dispatch::DispatchQoS::QoSClass::typeMetadataAccessor();
  lVar6 = CONCAT71(extraout_var,QVar5.value);
  local_d8 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d8 + 0x40));
  DVar17.unknown = puVar13 + -extraout_x12 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar13 = &DAT_100554ab0;
  FUN_100002f94(&DAT_100554ab0,&DAT_100427c60);
  lVar19 = *(long *)(puVar13 + -8);
  lVar18 = *(long *)(lVar19 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)(lVar18 + 0xfU & 0xfffffffffffffff0);
  lVar21 = (long)DVar17.unknown - extraout_x8_03;
  puVar7 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar8 = objc_stub::init((ID)puVar7);
  puVar7 = &DAT_10052e430;
  _swift_allocObject(&DAT_10052e430,0x11,7);
  puVar7[0x10] = 0;
  local_160 = *(code **)(lVar19 + 0x10);
  local_120 = param_1;
  (*local_160)(lVar21,param_1,puVar13);
  uVar14 = (ulong)*(byte *)(lVar19 + 0x50);
  uVar15 = uVar14 + 0x20 & (uVar14 ^ 0xffffffffffffffff);
  puVar9 = &DAT_10052e570;
  local_150 = lVar18;
  _swift_allocObject(&DAT_10052e570,uVar15 + lVar18,uVar14 | 7);
  *(ID *)(puVar9 + 0x10) = IVar8;
  *(undefined **)(puVar9 + 0x18) = puVar7;
  local_168 = *(code **)(lVar19 + 0x20);
  local_158 = uVar15;
  local_148 = lVar21;
  local_140 = puVar13;
  (*local_168)(puVar9 + uVar15,lVar21,puVar13);
  local_d0 = IVar8;
  local_b8 = puVar7;
  _swift_retain(puVar7);
  this = local_c8;
  Network::NWPathMonitor::_set_pathUpdateHandler(local_c8);
  FUN_10006cc7c(0);
  lVar18 = local_d8;
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_Dispatch_DispatchQoS_QoSClass_utility_Dispatch_DispatchQoS_QoSClass_Type___>_Dispatch_DispatchQoS_QoSClass_1005244c8
  ;
  pcVar20 = *(code **)(local_d8 + 0x68);
  (*pcVar20)(DVar17.unknown,uVar1,lVar6);
  queue = (extension_Dispatch)::__C::OS_dispatch_queue::global((QoSClass)(__int8)DVar17.unknown);
  pcVar16 = *(code **)(lVar18 + 8);
  (*pcVar16)(DVar17.unknown,lVar6);
  Network::NWPathMonitor::start(this,queue);
  dVar3 = local_128;
  if ((int)local_c0 == 1) {
    _swift_release(local_b8);
  }
  else {
    (*pcVar20)(DVar17.unknown,uVar1,lVar6);
    local_c8 = (NWPathMonitor *)
               (extension_Dispatch)::__C::OS_dispatch_queue::global
                         ((QoSClass)(__int8)DVar17.unknown);
    (*pcVar16)(DVar17.unknown,lVar6);
    DVar2.unknown = local_138.unknown;
    Dispatch::DispatchTime::now(DVar17);
    DVar17.unknown = local_118.unknown;
    Dispatch::__infix(DVar2,dVar3);
    puVar9 = local_110;
    local_c0 = *(code **)(local_130 + 8);
    (*local_c0)(DVar2.unknown,local_110);
    puVar7 = local_140;
    lVar18 = local_148;
    (*local_160)(local_148,local_120,local_140);
    uVar15 = local_158;
    puVar13 = &DAT_10052e598;
    _swift_allocObject(&DAT_10052e598,local_158 + local_150,uVar14 | 7);
    puVar4 = local_b8;
    *(ID *)(puVar13 + 0x10) = local_d0;
    *(undefined **)(puVar13 + 0x18) = local_b8;
    (*local_168)(puVar13 + uVar15,lVar18,puVar7);
    local_88 = FUN_100148a28;
    local_a8 = PTR___NSConcreteStackBlock_100521110;
    local_a0 = 0x42000000;
    local_98 = FUN_1000c7e7c;
    puStack_90 = &DAT_10052e5b0;
    local_80 = puVar13;
    aBlock = __Block_copy(&local_a8);
    DVar10.unknown = puVar4;
    _swift_retain();
    qos.unknown = local_108.unknown;
    Dispatch::DispatchQoS::get_unspecified(DVar10);
    local_b0 = PTR___swiftEmptyArrayStorage_100524190;
    puVar11 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar13 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar12 = puVar13;
    FUN_100077ac0();
    puVar7 = local_e0;
    flags.unknown = local_f0.unknown;
    Swift::SetAlgebra::_init(local_f0.unknown,&local_b0,puVar13,puVar12,local_e0,puVar11);
    (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(DVar17,qos,flags);
    __Block_release(aBlock);
    (**(code **)(local_e8 + 8))(flags.unknown,puVar7);
    (**(code **)(local_100 + 8))(qos.unknown,puStack_f8);
    (*local_c0)(DVar17.unknown,puVar9);
    puVar13 = local_80;
    _swift_release(puVar4);
    _swift_release(puVar13);
  }
  return;
}

