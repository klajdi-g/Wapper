// rea decompile_all
// name: FUN_1003f1174
// address: 0x1003f1174
// body: available
// range: 0x1003f1174-0x1003f164f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003f164c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003f1174(long param_1,ID param_2,undefined8 param_3,undefined4 param_4)

{
  URL UVar1;
  NSString *pNVar2;
  ID IVar3;
  OS_dispatch_queue *pOVar4;
  void *pvVar5;
  undefined *puVar6;
  DispatchQoS DVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  DispatchWorkItemFlags qos;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ID local_f0;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined *local_d8;
  long local_d0;
  long local_c8;
  undefined *puStack_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  undefined1 auStack_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100521138;
  local_e8 = param_3;
  local_dc = param_4;
  local_b8 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar14 = *(long *)(local_b8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = (long)&local_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_c0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_c8 = *(long *)(puStack_c0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c8 + 0x40));
  qos.unknown = (undefined *)(lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar1.unknown + -8);
  lVar17 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = (long)qos.unknown - (lVar17 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    local_d0 = lVar14;
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    local_b0 = (undefined *)0x0;
    IVar3 = objc_stub::statusOfValueForKey_error_(param_2,pNVar2,&local_b0);
    local_d8 = local_b0;
    if (((IVar3 == 2) && (IVar3 = objc_stub::isPlayable(param_2), (int)IVar3 != 0)) &&
       (IVar3 = objc_stub::hasProtectedContent(param_2), (IVar3 & 1) == 0)) {
      puVar6 = &_OBJC_CLASS___AVPlayerItem;
      _objc_allocWithZone();
      local_f0 = objc_stub::initWithAsset_((ID)puVar6,param_2);
      objc_stub::setPreferredForwardBufferDuration_(local_f0,0);
      pOVar4 = (OS_dispatch_queue *)0x0;
      FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
      (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar4);
      (**(code **)(lVar11 + 0x10))(lVar16,local_e8,UVar1.unknown);
      uVar10 = (ulong)*(byte *)(lVar11 + 0x50);
      uVar15 = uVar10 + 0x18 & (uVar10 ^ 0xffffffffffffffff);
      uVar18 = lVar17 + uVar15 + 7 & 0xfffffffffffffff8;
      puVar6 = &DAT_10053e420;
      _swift_allocObject(&DAT_10053e420,uVar18 + 9,uVar10 | 7);
      *(long *)(puVar6 + 0x10) = param_1;
      (**(code **)(lVar11 + 0x20))(puVar6 + uVar15,lVar16,UVar1.unknown);
      *(ID *)(puVar6 + uVar18) = local_f0;
      *(byte *)((long)(puVar6 + uVar18) + 8) = (byte)local_dc & 1;
      local_90 = FUN_1003f3780;
      local_b0 = PTR___NSConcreteStackBlock_100521110;
      local_a8 = 0x42000000;
      local_a0 = FUN_1000c7e7c;
      puStack_98 = &DAT_10053e438;
      local_88 = puVar6;
      pvVar5 = __Block_copy(&local_b0);
      DVar7.unknown = local_88;
      _swift_release();
      Dispatch::DispatchQoS::get_unspecified(DVar7);
      local_b0 = PTR___swiftEmptyArrayStorage_100524190;
      puVar8 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar6 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar9 = puVar6;
      FUN_100077ac0();
      puVar12 = local_b8;
      Swift::SetAlgebra::_init(lVar13,&local_b0,puVar6,puVar9,local_b8,puVar8);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(pvVar5);
    }
    else {
      pOVar4 = (OS_dispatch_queue *)0x0;
      FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
      (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar4);
      puVar6 = &DAT_10053e3d0;
      _swift_allocObject(&DAT_10053e3d0,0x18,7);
      *(long *)(puVar6 + 0x10) = param_1;
      local_90 = FUN_1003f36f8;
      local_b0 = PTR___NSConcreteStackBlock_100521110;
      local_a8 = 0x42000000;
      local_a0 = FUN_1000c7e7c;
      puStack_98 = &DAT_10053e3e8;
      local_88 = puVar6;
      pvVar5 = __Block_copy(&local_b0);
      DVar7.unknown = local_88;
      _swift_release();
      Dispatch::DispatchQoS::get_unspecified(DVar7);
      local_b0 = PTR___swiftEmptyArrayStorage_100524190;
      puVar8 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar6 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar9 = puVar6;
      FUN_100077ac0();
      puVar12 = local_b8;
      Swift::SetAlgebra::_init(lVar13,&local_b0,puVar6,puVar9,local_b8,puVar8);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(pvVar5);
    }
    (**(code **)(local_d0 + 8))(lVar13,puVar12);
    (**(code **)(local_c8 + 8))(qos.unknown,puStack_c0);
  }
  if (*(long *)PTR____stack_chk_guard_100521138 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

