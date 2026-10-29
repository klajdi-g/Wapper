// rea decompile_all
// name: FUN_1000454b8
// address: 0x1000454b8
// body: available
// range: 0x1000454b8-0x100045913 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000455d4 to 0x10041469c _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1000454b8(undefined8 param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  DispatchWorkItemFlags DVar3;
  DispatchQoS DVar4;
  undefined *puVar5;
  ID IVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  DispatchQoS unaff_x20;
  undefined8 uVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  double extraout_d0;
  double dVar17;
  double dVar18;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  long local_d8;
  long lStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  DVar3 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar16 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  puVar12 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar4 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar15 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  puVar5 = unaff_x20.unknown + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  local_78 = (undefined *)0x0;
  if (puVar5 != (undefined *)0x0) {
    IVar6 = objc_stub::layer((ID)puVar5);
    if ((((IVar6 == 0) || (lVar13 = *(long *)(unaff_x20.unknown + 0x20), lVar13 == 0)) ||
        (lVar14 = *(long *)(unaff_x20.unknown + 0x28), lVar14 == 0)) ||
       (((*(double *)(unaff_x20.unknown + 0x30) <= 0.0 ||
         (*(double *)(unaff_x20.unknown + 0x38) <= 0.0)) || ((unaff_x20.unknown[0x70] & 1) != 0))))
    {
      return (undefined *)0x0;
    }
    *(undefined8 *)(unaff_x20.unknown + 0x50) = param_1;
    uVar1 = unaff_x20.unknown[0x40];
    _swift_retain(lVar14);
    _swift_retain(lVar13);
    FUN_1000447f4(param_1,uVar1);
    IVar6 = objc_stub::window((ID)puVar5);
    if (IVar6 == 0) {
      dVar17 = 2.0;
    }
    else {
      objc_stub::backingScaleFactor(IVar6);
      dVar17 = extraout_d0;
    }
    uVar7 = 0;
    dVar17 = dVar17 * *(double *)(unaff_x20.unknown + 0x30);
    dVar18 = 128.0;
    if (dVar17 <= 128.0) {
      dVar18 = dVar17;
    }
    dVar17 = (double)(long)dVar18;
    if (0x7fefffffffffffff < (ulong)ABS(dVar17)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100045900);
      (*pcVar2)();
    }
    if (dVar17 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100045904);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar17) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100045908);
      (*pcVar2)();
    }
    dVar18 = (double)(long)((*(double *)(unaff_x20.unknown + 0x38) * (double)(long)dVar17) /
                           *(double *)(unaff_x20.unknown + 0x30));
    if (0x7fefffffffffffff < (ulong)ABS(dVar18)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10004590c);
      (*pcVar2)();
    }
    if (dVar18 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100045910);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100045914);
      (*pcVar2)();
    }
    lStack_d0 = (long)dVar17;
    local_d8 = (long)dVar18;
    if (local_d8 < 2) {
      local_d8 = 1;
    }
    FUN_100047260(param_1,*(undefined8 *)(lVar14 + 0x10),*(undefined8 *)(lVar14 + 0x18));
    local_e0 = uVar7;
    FUN_100046e20();
    uVar11 = *(undefined8 *)(lVar13 + 0x38);
    local_b8 = (void *)uVar7;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar11);
    pvVar8 = local_b8;
    FUN_100043268(param_1,local_b8,uVar11);
    local_e8 = pvVar8;
    _swift_bridgeObjectRelease(local_b8);
    _swift_bridgeObjectRelease(uVar11);
    unaff_x20.unknown[0x70] = 1;
    local_c0 = *(undefined8 *)(unaff_x20.unknown + 0x60);
    local_c8 = *(undefined8 *)(unaff_x20.unknown + 0x68);
    puVar5 = &DAT_100526810;
    _swift_allocObject(&DAT_100526810,0x40,7);
    *(undefined8 *)(puVar5 + 0x10) = local_c0;
    *(undefined8 *)(puVar5 + 0x18) = local_e0;
    *(undefined8 *)(puVar5 + 0x20) = local_e8;
    *(long *)(puVar5 + 0x28) = lStack_d0;
    *(long *)(puVar5 + 0x30) = local_d8;
    *(undefined **)(puVar5 + 0x38) = unaff_x20.unknown;
    local_80 = FUN_1000479d0;
    local_a0 = PTR___NSConcreteStackBlock_100521110;
    local_98 = 0x42000000;
    local_90 = FUN_1000c7e7c;
    puStack_88 = &DAT_100526828;
    local_78 = puVar5;
    local_b8 = __Block_copy(&local_a0);
    _swift_retain(local_c0);
    _swift_retain();
    Dispatch::DispatchQoS::get_unspecified(unaff_x20);
    local_a8 = PTR___swiftEmptyArrayStorage_100524190;
    puVar9 = &DAT_100553db0;
    FUN_100047f94(&DAT_100553db0,0xff,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar5 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar10 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    Swift::SetAlgebra::_init(puVar12,&local_a8,puVar5,puVar10,DVar3.unknown,puVar9);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async
              ((DispatchQoS)0x0,
               (DispatchWorkItemFlags)(puVar12 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
    __Block_release(local_b8);
    _swift_release(lVar14);
    _swift_release(lVar13);
    (**(code **)(lVar16 + 8))(puVar12,DVar3.unknown);
    (**(code **)(lVar15 + 8))(puVar12 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),DVar4.unknown)
    ;
    _swift_release(local_78);
  }
  return local_78;
}

