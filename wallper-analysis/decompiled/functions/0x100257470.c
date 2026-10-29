// rea decompile_all
// name: FUN_100257470
// address: 0x100257470
// body: available
// range: 0x100257470-0x10025772f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100257470(long param_1)

{
  ID self;
  DispatchWorkItemFlags qos;
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  OS_dispatch_queue *pOVar4;
  undefined *puVar5;
  void *aBlock;
  DispatchQoS DVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  ID self_00;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  ID *pIVar10;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  DispatchWorkItemFlags local_e0;
  long local_d8;
  undefined *puStack_d0;
  undefined1 *local_c8;
  long local_c0;
  undefined *local_b8;
  ID local_b0;
  ID local_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  local_b8 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_c0 = *(long *)(local_b8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c0 + 0x40));
  local_c8 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_d0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_d8 = *(long *)(puStack_d0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d8 + 0x40));
  local_e0.unknown =
       auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) +
       -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 != 0) {
    uVar3 = 0;
    FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
    puVar1 = local_c8;
    qos.unknown = local_e0.unknown;
    pIVar10 = (ID *)(param_1 + 0x30);
    local_e8 = uVar3;
    do {
      self = pIVar10[-2];
      local_a8 = pIVar10[-1];
      self_00 = *pIVar10;
      if (local_a8 == 0) {
        local_a8 = 0;
      }
      else {
        objc_stub::pause(local_a8);
      }
      pIVar10 = pIVar10 + 3;
      local_b0 = self_00;
      objc_stub::disableLooping(self_00);
      pOVar4 = (OS_dispatch_queue *)objc_stub::orderOut_(self,0);
      (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar4);
      puVar5 = &DAT_100534500;
      _swift_allocObject(&DAT_100534500,0x18,7);
      *(ID *)(puVar5 + 0x10) = self;
      local_80 = thunk_FUN_1002593e4;
      local_a0 = PTR___NSConcreteStackBlock_100521110;
      local_98 = 0x42000000;
      local_90 = FUN_1000c7e7c;
      puStack_88 = &DAT_100534518;
      local_78 = puVar5;
      aBlock = __Block_copy(&local_a0);
      DVar6.unknown = local_78;
      _swift_release();
      Dispatch::DispatchQoS::get_unspecified(DVar6);
      local_a0 = PTR___swiftEmptyArrayStorage_100524190;
      puVar7 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar5 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar8 = puVar5;
      FUN_100077ac0();
      puVar2 = local_b8;
      Swift::SetAlgebra::_init(puVar1,&local_a0,puVar5,puVar8,local_b8,puVar7);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(aBlock);
      (**(code **)(local_c0 + 8))(puVar1,puVar2);
      (**(code **)(local_d8 + 8))(qos.unknown,puStack_d0);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}

