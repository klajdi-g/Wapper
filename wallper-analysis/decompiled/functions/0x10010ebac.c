// rea decompile_all
// name: FUN_10010ebac
// address: 0x10010ebac
// body: available
// range: 0x10010ebac-0x10010ee0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10010ebac(void)

{
  DispatchWorkItemFlags DVar1;
  ID IVar2;
  OS_dispatch_queue *pOVar3;
  undefined *puVar4;
  void *aBlock;
  DispatchQoS DVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  ID unaff_x20;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  DispatchWorkItemFlags qos;
  byte bVar11;
  undefined8 uVar12;
  undefined *local_a0;
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
  lVar9 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_a0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar10 = *(long *)(local_a0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  qos.unknown = (undefined *)(lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  IVar2 = objc_stub::window(unaff_x20);
  if (IVar2 == 0) {
    bVar11 = 0;
  }
  else {
    IVar2 = objc_stub::occlusionState(IVar2);
    bVar11 = (byte)(IVar2 >> 1) & 1;
  }
  pOVar3 = (OS_dispatch_queue *)0x0;
  FUN_10006cc7c();
  (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar3);
  puVar6 = (undefined8 *)(unaff_x20 + _TtCV7Wallper22WindowVisibilityReader6Reader::onChange);
  puVar4 = &DAT_10052c528;
  _swift_allocObject(&DAT_10052c528,0x21,7);
  uVar8 = puVar6[1];
  uVar12 = *puVar6;
  *(undefined8 *)(puVar4 + 0x18) = puVar6[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar12;
  puVar4[0x20] = bVar11;
  local_70 = FUN_10010ef30;
  local_90 = PTR___NSConcreteStackBlock_100521110;
  local_88 = 0x42000000;
  local_80 = FUN_1000c7e7c;
  puStack_78 = &DAT_10052c540;
  local_68 = puVar4;
  aBlock = __Block_copy(&local_90);
  DVar5.unknown = local_68;
  _swift_retain(uVar8);
  _swift_release();
  Dispatch::DispatchQoS::get_unspecified(DVar5);
  local_90 = PTR___swiftEmptyArrayStorage_100524190;
  puVar6 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar4 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar7 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(lVar9,&local_90,puVar4,puVar7,DVar1.unknown,puVar6);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_98 + 8))(lVar9,DVar1.unknown);
  (**(code **)(lVar10 + 8))(qos.unknown,local_a0);
  return;
}

