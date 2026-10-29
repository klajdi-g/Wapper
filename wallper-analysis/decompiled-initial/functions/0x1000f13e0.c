// rea decompile_all
// name: FUN_1000f13e0
// address: 0x1000f13e0
// body: available
// range: 0x1000f13e0-0x1000f1757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000f13e0(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  QoSClass QVar3;
  DispatchWorkItemFlags DVar4;
  DispatchQoS DVar5;
  long lVar6;
  URL UVar7;
  undefined7 extraout_var;
  undefined *puVar8;
  DispatchQoS aBlock;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long extraout_x8;
  undefined1 *puVar12;
  long lVar13;
  long extraout_x8_00;
  DispatchWorkItemFlags qos;
  long extraout_x8_01;
  undefined8 unaff_x20;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined1 auStack_f0 [8];
  long local_e8;
  OS_dispatch_queue *local_e0;
  undefined8 local_d8;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  local_d8 = param_1;
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar11 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  puVar12 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar5 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar13 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  qos.unknown = puVar12 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  FUN_1000fa84c();
  local_e8 = *(long *)(lVar6 + -8);
  lVar22 = *(long *)(local_e8 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = (long)qos.unknown - (lVar22 + 0xfU & 0xfffffffffffffff0);
  UVar7 = Foundation::URL::typeMetadataAccessor();
  lVar17 = *(long *)(UVar7.unknown + -8);
  lVar21 = *(long *)(lVar17 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar18 - (lVar21 + 0xfU & 0xfffffffffffffff0);
  QVar3 = Dispatch::DispatchQoS::QoSClass::typeMetadataAccessor();
  lVar6 = CONCAT71(extraout_var,QVar3.value);
  lVar15 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  lVar19 = lVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
  (**(code **)(lVar15 + 0x68))
            (lVar19,*(undefined4 *)
                     PTR___enum_case_for_Dispatch_DispatchQoS_QoSClass_userInitiated_Dispatch_DispatchQoS_QoSClass_Type___>_Dispatch_DispatchQoS_QoSClass_1005244c0
             ,lVar6);
  local_e0 = (extension_Dispatch)::__C::OS_dispatch_queue::global((QoSClass)(__int8)lVar19);
  (**(code **)(lVar15 + 8))(lVar19,lVar6);
  (**(code **)(lVar17 + 0x10))(lVar20,local_d8,UVar7.unknown);
  FUN_100029504(unaff_x20,lVar18,FUN_1000fa84c);
  bVar1 = *(byte *)(lVar17 + 0x50);
  uVar14 = (ulong)bVar1 + 0x10 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  bVar2 = *(byte *)(local_e8 + 0x50);
  uVar16 = lVar21 + (ulong)bVar2 + uVar14 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  puVar8 = &DAT_10052b298;
  _swift_allocObject(&DAT_10052b298,uVar16 + lVar22,bVar1 | bVar2 | 7);
  (**(code **)(lVar17 + 0x20))(puVar8 + uVar14,lVar20,UVar7.unknown);
  FUN_100007e64(lVar18,puVar8 + uVar16,FUN_1000fa84c);
  local_70 = FUN_1000fc508;
  local_90 = PTR___NSConcreteStackBlock_100521110;
  local_88 = 0x42000000;
  local_80 = FUN_1000c7e7c;
  puStack_78 = &DAT_10052b2b0;
  local_68 = puVar8;
  aBlock.unknown = __Block_copy(&local_90);
  Dispatch::DispatchQoS::get_unspecified(aBlock);
  local_98 = PTR___swiftEmptyArrayStorage_100524190;
  puVar9 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar8 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar10 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(puVar12,&local_98,puVar8,puVar10,DVar4.unknown,puVar9);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock.unknown);
  (**(code **)(lVar11 + 8))(puVar12,DVar4.unknown);
  (**(code **)(lVar13 + 8))(qos.unknown,DVar5.unknown);
  _swift_release(local_68);
  return;
}

