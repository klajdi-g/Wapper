// rea decompile_all
// name: FUN_1003b9530
// address: 0x1003b9530
// body: available
// range: 0x1003b9530-0x1003b97f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003b9530(undefined8 param_1,undefined8 param_2)

{
  DispatchWorkItemFlags DVar1;
  long lVar2;
  URL self;
  NSURL *pNVar3;
  ID IVar4;
  OS_dispatch_queue *pOVar5;
  undefined *puVar6;
  void *aBlock;
  DispatchQoS DVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  DispatchWorkItemFlags qos;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined *puStack_a0;
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_98 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_98 + 0x40));
  puVar11 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_a0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_a8 = *(long *)(puStack_a0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a8 + 0x40));
  qos.unknown = puVar11 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_1003ba110();
  lVar13 = *(long *)(lVar2 + -8);
  lVar2 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = (long)qos.unknown - (lVar2 + 0xfU & 0xfffffffffffffff0);
  self.unknown = &_OBJC_CLASS___NSImage;
  _objc_allocWithZone();
  pNVar3 = Foundation::URL::_bridgeToObjectiveC(self);
  IVar4 = objc_stub::initWithContentsOfURL_((ID)self.unknown,pNVar3);
  pOVar5 = (OS_dispatch_queue *)0x0;
  FUN_10006cc7c();
  (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar5);
  FUN_100029504(param_2,lVar15,FUN_1003ba110);
  uVar10 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar14 = uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff);
  uVar12 = lVar2 + uVar14 + 7 & 0xfffffffffffffff8;
  puVar6 = &DAT_10053d6c8;
  _swift_allocObject(&DAT_10053d6c8,uVar12 + 8,uVar10 | 7);
  FUN_1003ba61c(lVar15,puVar6 + uVar14);
  *(ID *)(puVar6 + uVar12) = IVar4;
  local_70 = FUN_1003bac4c;
  local_90 = PTR___NSConcreteStackBlock_100521110;
  local_88 = 0x42000000;
  local_80 = FUN_1000c7e7c;
  puStack_78 = &DAT_10053d6e0;
  local_68 = puVar6;
  aBlock = __Block_copy(&local_90);
  DVar7.unknown = local_68;
  _swift_release();
  Dispatch::DispatchQoS::get_unspecified(DVar7);
  local_90 = PTR___swiftEmptyArrayStorage_100524190;
  puVar8 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar6 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar9 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(puVar11,&local_90,puVar6,puVar9,DVar1.unknown,puVar8);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_98 + 8))(puVar11,DVar1.unknown);
  (**(code **)(local_a8 + 8))(qos.unknown,puStack_a0);
  return;
}

