// rea decompile_all
// name: FUN_1002c9fdc
// address: 0x1002c9fdc
// body: available
// range: 0x1002c9fdc-0x1002ca627 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002ca624 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002c9fdc(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  DispatchWorkItemFlags DVar4;
  undefined *puVar5;
  URL UVar6;
  NSURL *pNVar7;
  ID IVar8;
  ID IVar9;
  OS_dispatch_queue *pOVar10;
  void *pvVar11;
  DispatchQoS DVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar16;
  long extraout_x8_01;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  DispatchWorkItemFlags qos;
  double dVar25;
  double dVar26;
  ID local_110;
  undefined *local_108;
  OS_dispatch_queue *local_100;
  long local_f8;
  long local_f0;
  undefined8 local_e8;
  ID local_e0;
  ID local_d8;
  DispatchWorkItemFlags local_d0;
  long local_c8;
  undefined *puStack_c0;
  long local_b8;
  undefined *local_b0;
  double local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  undefined8 local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  local_e8 = param_2;
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_f0 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  lVar17 = (long)&local_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_b8 = lVar17;
  puStack_c0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_c8 = *(long *)(puStack_c0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c8 + 0x40));
  puVar16 = (undefined *)(lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar5 = &DAT_100556a40;
  local_d0.unknown = puVar16;
  FUN_100002f94(&DAT_100556a40,&DAT_10042abc0);
  lVar22 = *(long *)(puVar5 + -8);
  lVar18 = *(long *)(lVar22 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)(lVar18 + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)puVar16 - extraout_x8_01;
  UVar6.unknown = (undefined *)0x0;
  local_f8 = lVar17;
  FUN_1002cb204();
  lVar24 = *(long *)(UVar6.unknown + -8);
  lVar19 = *(long *)(lVar24 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - (lVar19 + 0xfU & 0xfffffffffffffff0);
  pNVar7 = Foundation::URL::_bridgeToObjectiveC(UVar6);
  IVar8 = AVAsset::assetWithURL_((ID)&_OBJC_CLASS___AVAsset,pNVar7);
  puVar16 = &_OBJC_CLASS___AVAssetImageGenerator;
  _objc_allocWithZone();
  IVar9 = objc_stub::initWithAsset_((ID)puVar16,IVar8);
  uVar15 = 1;
  objc_stub::setAppliesPreferredTrackTransform_(IVar9);
  local_d8 = IVar8;
  AVAsset::duration(IVar8,&local_b0);
  _CMTimeGetSeconds(&local_b0);
  dVar25 = 0.5;
  if (0.5 < local_a8 * 0.5) {
    dVar25 = local_a8 * 0.5;
  }
  dVar26 = 5.0;
  if (dVar25 <= 5.0) {
    dVar26 = dVar25;
  }
  puVar16 = (undefined *)0x258;
  ___extension_in_CoreMedia____C_CMTime_init_seconds__Swift_Double_preferredTimescale__Swift_Int32___>___C_CMTime
            (dVar26);
  local_78 = 0;
  local_e0 = IVar9;
  local_b0 = puVar16;
  local_a0 = (code *)uVar15;
  IVar8 = objc_stub::copyCGImageAtTime_actualTime_error_(IVar9,&local_b0,0,&local_78);
  if (IVar8 == 0) {
    uVar15 = local_78;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    pOVar10 = (OS_dispatch_queue *)0x0;
    FUN_10006cc7c();
    local_100 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar10);
    lVar17 = local_f8;
    (**(code **)(lVar22 + 0x10))(local_f8,local_e8,puVar5);
    uVar20 = (ulong)*(byte *)(lVar22 + 0x50);
    uVar21 = uVar20 + 0x10 & (uVar20 ^ 0xffffffffffffffff);
    puVar16 = &DAT_100538120;
    _swift_allocObject(&DAT_100538120,uVar21 + lVar18,uVar20 | 7);
    (**(code **)(lVar22 + 0x20))(puVar16 + uVar21,lVar17,puVar5);
    local_90 = FUN_1002a4a70;
    local_b0 = PTR___NSConcreteStackBlock_100521110;
    local_a8 = 5.47077039858234e-315;
    local_a0 = FUN_1000c7e7c;
    puStack_98 = &DAT_100538138;
    local_88 = puVar16;
    pvVar11 = __Block_copy(&local_b0);
    DVar12.unknown = local_88;
    _swift_release();
    qos.unknown = local_d0.unknown;
    Dispatch::DispatchQoS::get_unspecified(DVar12);
    local_b0 = PTR___swiftEmptyArrayStorage_100524190;
    puVar13 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar5 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar14 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    lVar17 = local_b8;
    Swift::SetAlgebra::_init(local_b8,&local_b0,puVar5,puVar14,DVar4.unknown,puVar13);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    _swift_errorRelease(uVar15);
    __Block_release(pvVar11);
  }
  else {
    puVar16 = &_OBJC_CLASS___NSImage;
    _objc_allocWithZone();
    local_108 = DVar4.unknown;
    IVar9 = objc_stub::initWithCGImage_size_((ID)puVar16,0,0,IVar8);
    pOVar10 = (OS_dispatch_queue *)0x0;
    FUN_10006cc7c();
    local_100 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar10);
    FUN_100029504(param_1,lVar17,FUN_1002cb204);
    lVar3 = local_f8;
    local_110 = IVar8;
    (**(code **)(lVar22 + 0x10))(local_f8,local_e8,puVar5);
    bVar1 = *(byte *)(lVar24 + 0x50);
    uVar23 = (ulong)bVar1 + 0x10 & ((ulong)bVar1 ^ 0xffffffffffffffff);
    uVar20 = lVar19 + uVar23 + 7 & 0xfffffffffffffff8;
    bVar2 = *(byte *)(lVar22 + 0x50);
    uVar21 = bVar2 + uVar20 + 8 & ((ulong)bVar2 ^ 0xffffffffffffffff);
    puVar16 = &DAT_100538170;
    _swift_allocObject(&DAT_100538170,uVar21 + lVar18,bVar1 | bVar2 | 7);
    FUN_100007e64(lVar17,puVar16 + uVar23,FUN_1002cb204);
    *(ID *)(puVar16 + uVar20) = IVar9;
    (**(code **)(lVar22 + 0x20))(puVar16 + uVar21,lVar3,puVar5);
    local_90 = FUN_1002cbc1c;
    local_b0 = PTR___NSConcreteStackBlock_100521110;
    local_a8 = 5.47077039858234e-315;
    local_a0 = FUN_1000c7e7c;
    puStack_98 = &DAT_100538188;
    local_88 = puVar16;
    pvVar11 = __Block_copy(&local_b0);
    DVar12.unknown = local_88;
    _swift_release();
    qos.unknown = local_d0.unknown;
    Dispatch::DispatchQoS::get_unspecified(DVar12);
    local_b0 = PTR___swiftEmptyArrayStorage_100524190;
    puVar13 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar5 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar14 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    lVar17 = local_b8;
    DVar4.unknown = local_108;
    Swift::SetAlgebra::_init(local_b8,&local_b0,puVar5,puVar14,local_108,puVar13);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar11);
  }
  (**(code **)(local_f0 + 8))(lVar17,DVar4.unknown);
  (**(code **)(local_c8 + 8))(qos.unknown,puStack_c0);
  if (*(long *)PTR____stack_chk_guard_100521138 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

