// rea decompile_all
// name: FUN_10003dff0
// address: 0x10003dff0
// body: available
// range: 0x10003dff0-0x10003e97f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10003e97c to 0x100413538 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$sleep (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10003dff0(undefined8 param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  NSString *pNVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  NSDictionary *pNVar9;
  URL UVar10;
  ulong uVar11;
  ulong uVar12;
  TaskPriority TVar13;
  TaskPriority TVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  code *pcVar18;
  ulong uVar19;
  long lVar20;
  ID IVar21;
  ID IVar22;
  long unaff_x22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  double dVar33;
  String SVar34;
  
  lVar20 = *(long *)(unaff_x22 + 0x690);
  bVar2 = *(byte *)(unaff_x22 + 0x765);
  lVar17 = (long)*(double *)(unaff_x22 + 0x598);
  if (bVar2 == 0) {
    lVar17 = 5;
  }
  __objc_autoreleasePoolPush();
  if ((bVar2 & 1) == 0) {
    lVar3 = 0;
    if (lVar17 != 0) {
      lVar3 = lVar20 / lVar17;
    }
    dVar29 = (double)(ulong)(lVar20 - lVar3 * lVar17) / (double)lVar17;
    if (dVar29 == 0.0) goto LAB_10003e1c0;
    IVar22 = *(ID *)(unaff_x22 + 0x6e8);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x6e0);
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    puVar5 = &DAT_10054c048;
    FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
    _swift_initStackObject();
    *(undefined8 *)(puVar5 + 0x18) = 4;
    *(undefined8 *)(puVar5 + 0x10) = 2;
    SVar34 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    *(String *)(puVar5 + 0x20) = SVar34;
    uVar6 = 0;
    FUN_100044230(0,&DAT_10054c070,&PTR__OBJC_CLASS___CIImage_10053f988);
    *(undefined8 *)(puVar5 + 0x48) = uVar6;
    *(undefined8 *)(puVar5 + 0x30) = uVar23;
    SVar34 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    *(String *)(puVar5 + 0x50) = SVar34;
    *(undefined **)(puVar5 + 0x78) = PTR___type_metadata_for_Swift_Double_100523b90;
    *(double *)(puVar5 + 0x60) = dVar29;
    puVar7 = puVar5;
    FUN_100005b10(puVar5);
    _swift_setDeallocating(puVar5);
    puVar8 = &DAT_10054a1c0;
    FUN_100002f94(&DAT_10054a1c0,&DAT_10041a250);
    _swift_arrayDestroy((String *)(puVar5 + 0x20),2,puVar8);
    pNVar9 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar7);
    IVar22 = objc_stub::imageByApplyingFilter_withInputParameters_(IVar22,pNVar4,pNVar9);
  }
  else {
LAB_10003e1c0:
    IVar22 = *(ID *)(unaff_x22 + 0x6e8);
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x420);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x428);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x430);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x438);
  lVar17 = *(long *)(unaff_x22 + 0x600);
  dVar29 = *(double *)(unaff_x22 + 0x5a0);
  dVar28 = *(double *)(unaff_x22 + 0x538);
  dVar33 = *(double *)(unaff_x22 + 0x530) / 960.0;
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  puVar5 = &DAT_10054c048;
  FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 4;
  *(undefined8 *)(puVar5 + 0x10) = 2;
  SVar34 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(String *)(puVar5 + 0x20) = SVar34;
  puVar8 = PTR___type_metadata_for_CoreGraphics_CGFloat_100524430;
  *(undefined **)(puVar5 + 0x48) = PTR___type_metadata_for_CoreGraphics_CGFloat_100524430;
  *(double *)(puVar5 + 0x30) = dVar33;
  SVar34 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(String *)(puVar5 + 0x50) = SVar34;
  *(undefined **)(puVar5 + 0x78) = puVar8;
  *(double *)(puVar5 + 0x60) = (dVar28 / dVar29) / dVar33;
  puVar7 = puVar5;
  FUN_100005b10(puVar5);
  _swift_setDeallocating(puVar5);
  puVar8 = &DAT_10054a1c0;
  FUN_100002f94(&DAT_10054a1c0,&DAT_10041a250);
  _swift_arrayDestroy((String *)(puVar5 + 0x20),2,puVar8);
  pNVar9 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar7);
  IVar22 = objc_stub::imageByApplyingFilter_withInputParameters_(IVar22,pNVar4,pNVar9);
  IVar22 = objc_stub::imageByCroppingToRect_(IVar22,uVar6,uVar23,uVar31,uVar32);
  if (lVar17 != 0) {
    if (lVar17 == 1) goto LAB_10003e508;
    IVar22 = objc_stub::imageByCompositingOverImage_(*(ID *)(unaff_x22 + 0x600),IVar22);
  }
  IVar21 = *(ID *)(unaff_x22 + 0x610);
  if (IVar21 != 0) {
    dVar29 = *(double *)(unaff_x22 + 0x630);
    dVar30 = *(double *)(unaff_x22 + 0x5e8);
    dVar28 = *(double *)(unaff_x22 + 0x598);
    dVar33 = (double)NEON_ucvtf(*(undefined8 *)(unaff_x22 + 0x690));
    _CGAffineTransformMakeTranslation
              (unaff_x22 + 0x3c0,*(undefined8 *)(unaff_x22 + 0x5f0),
               *(undefined8 *)(unaff_x22 + 0x5f8),0);
    *(undefined8 *)(unaff_x22 + 0x3f8) = *(undefined8 *)(unaff_x22 + 0x3c8);
    *(undefined8 *)(unaff_x22 + 0x3f0) = *(undefined8 *)(unaff_x22 + 0x3c0);
    *(undefined8 *)(unaff_x22 + 0x408) = *(undefined8 *)(unaff_x22 + 0x3d8);
    *(undefined8 *)(unaff_x22 + 0x400) = *(undefined8 *)(unaff_x22 + 0x3d0);
    *(undefined8 *)(unaff_x22 + 0x418) = *(undefined8 *)(unaff_x22 + 1000);
    *(undefined8 *)(unaff_x22 + 0x410) = *(undefined8 *)(unaff_x22 + 0x3e0);
    _CGAffineTransformRotate
              (unaff_x22 + 0x270,
               (dVar29 * -6.283185307179586 * dVar33) / (double)(ulong)(long)dVar28,
               unaff_x22 + 0x3f0);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x278);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x288);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x280);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x290);
    objc_stub::extent(IVar21);
    dVar29 = extraout_d0;
    _CGRectGetWidth();
    objc_stub::extent(IVar21);
    dVar28 = extraout_d0_00;
    _CGRectGetHeight();
    *(undefined8 *)(unaff_x22 + 0x378) = uVar31;
    *(undefined8 *)(unaff_x22 + 0x370) = uVar6;
    *(undefined8 *)(unaff_x22 + 0x388) = uVar32;
    *(undefined8 *)(unaff_x22 + 0x380) = uVar23;
    *(undefined8 *)(unaff_x22 + 0x368) = uVar25;
    *(undefined8 *)(unaff_x22 + 0x360) = uVar24;
    _CGAffineTransformScale(unaff_x22 + 0x330,dVar30 / dVar29,dVar30 / dVar28,unaff_x22 + 0x360);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x338);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x330);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x348);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x340);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x358);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x350);
    objc_stub::extent(IVar21);
    dVar29 = extraout_d0_01;
    _CGRectGetWidth();
    objc_stub::extent(IVar21);
    dVar28 = extraout_d0_02;
    _CGRectGetHeight();
    *(undefined8 *)(unaff_x22 + 0x318) = uVar31;
    *(undefined8 *)(unaff_x22 + 0x310) = uVar6;
    *(undefined8 *)(unaff_x22 + 0x328) = uVar32;
    *(undefined8 *)(unaff_x22 + 800) = uVar23;
    *(undefined8 *)(unaff_x22 + 0x308) = uVar25;
    *(undefined8 *)(unaff_x22 + 0x300) = uVar24;
    _CGAffineTransformTranslate(unaff_x22 + 0x2d0,dVar29 * -0.5,dVar28 * -0.5,unaff_x22 + 0x300);
    *(undefined8 *)(unaff_x22 + 0x2a8) = *(undefined8 *)(unaff_x22 + 0x2d8);
    *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(unaff_x22 + 0x2d0);
    *(undefined8 *)(unaff_x22 + 0x2b8) = *(undefined8 *)(unaff_x22 + 0x2e8);
    *(undefined8 *)(unaff_x22 + 0x2b0) = *(undefined8 *)(unaff_x22 + 0x2e0);
    *(undefined8 *)(unaff_x22 + 0x2c8) = *(undefined8 *)(unaff_x22 + 0x2f8);
    *(undefined8 *)(unaff_x22 + 0x2c0) = *(undefined8 *)(unaff_x22 + 0x2f0);
    IVar21 = objc_stub::imageByApplyingTransform_(IVar21,unaff_x22 + 0x2a0);
    IVar22 = objc_stub::imageByCompositingOverImage_(IVar21,IVar22);
  }
  if (*(ID *)(unaff_x22 + 0x608) != 0) {
    IVar22 = objc_stub::imageByCompositingOverImage_(*(ID *)(unaff_x22 + 0x608),IVar22);
  }
LAB_10003e508:
  lVar17 = *(long *)(unaff_x22 + 0x710);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x708);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x690);
  objc_stub::render_toCVPixelBuffer_bounds_colorSpace_
            (*(ID *)(unaff_x22 + 0x640),*(undefined8 *)(unaff_x22 + 0x420),
             *(undefined8 *)(unaff_x22 + 0x428),*(undefined8 *)(unaff_x22 + 0x430),
             *(undefined8 *)(unaff_x22 + 0x438),IVar22,uVar23,*(undefined8 *)(unaff_x22 + 0x648));
  FUN_100040240(uVar23,uVar6);
  if (lVar17 != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x680);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x638);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x628);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x620);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x618);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x610);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x608);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x600);
    __objc_autoreleasePoolPop(param_1);
    FUN_100043c34(uVar25,uVar27,uVar26,uVar24,uVar32,uVar31);
    _swift_release(uVar23);
    _swift_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010003e63c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  if (*(long *)(unaff_x22 + 0x690) == 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x540);
    UVar10 = Foundation::URL::typeMetadataAccessor();
    lVar20 = *(long *)(UVar10.unknown + -8);
    lVar17 = *(long *)(lVar20 + 0x40);
    uVar15 = lVar17 + 0xf;
    uVar11 = uVar15 & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar5 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    uVar12 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    FUN_1000087e4(uVar6,uVar12,&DAT_100553d90,&DAT_10041bf10);
    uVar19 = uVar12;
    (**(code **)(lVar20 + 0x30))(uVar12,1,UVar10.unknown);
    if ((int)uVar19 == 1) {
      FUN_10002a29c(uVar12,&DAT_100553d90,&DAT_10041bf10);
      _swift_task_dealloc(uVar12);
      _swift_task_dealloc(uVar11);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x680);
    }
    else {
      uVar23 = *(undefined8 *)(unaff_x22 + 0x420);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x428);
      uVar32 = *(undefined8 *)(unaff_x22 + 0x430);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x438);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x648);
      IVar21 = *(ID *)(unaff_x22 + 0x640);
      uVar1 = *(uint *)(unaff_x22 + 0x760);
      pcVar18 = *(code **)(lVar20 + 0x20);
      (*pcVar18)(uVar11,uVar12,UVar10.unknown);
      _swift_task_dealloc(uVar12);
      IVar22 = objc_stub::createCGImage_fromRect_format_colorSpace_
                         (IVar21,uVar23,uVar31,uVar32,uVar24,IVar22,(ulong)uVar1,uVar6);
      if (IVar22 == 0) {
        (**(code **)(lVar20 + 8))(uVar11,UVar10.unknown);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x680);
      }
      else {
        uVar23 = *(undefined8 *)(unaff_x22 + 0x680);
        puVar5 = &DAT_100561090;
        FUN_100002f94(&DAT_100561090,&DAT_10041c870);
        TVar13.unknown =
             (undefined *)(*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
        _swift_task_alloc();
        Swift::TaskPriority::get_utility(TVar13);
        TVar14 = Swift::TaskPriority::typeMetadataAccessor();
        (**(code **)(*(long *)(TVar14.unknown + -8) + 0x38))(TVar13.unknown,0,1,TVar14.unknown);
        uVar15 = uVar15 & 0xfffffffffffffff0;
        _swift_task_alloc(uVar15);
        (**(code **)(lVar20 + 0x10))();
        uVar19 = (ulong)*(byte *)(lVar20 + 0x50);
        uVar12 = uVar19 + 0x28 & (uVar19 ^ 0xffffffffffffffff);
        puVar5 = &DAT_100526540;
        _swift_allocObject(&DAT_100526540,uVar12 + lVar17,uVar19 | 7);
        *(undefined8 *)(puVar5 + 0x10) = 0;
        *(undefined8 *)(puVar5 + 0x18) = 0;
        *(ID *)(puVar5 + 0x20) = IVar22;
        (*pcVar18)(puVar5 + uVar12,uVar15,UVar10.unknown);
        _swift_task_dealloc(uVar15);
        uVar6 = 0;
        FUN_100176d50(0,0,TVar13.unknown,&DAT_10041d808,puVar5);
        _swift_release(uVar23);
        FUN_10002a29c(TVar13.unknown,&DAT_100561090,&DAT_10041c870);
        (**(code **)(lVar20 + 8))(uVar11,UVar10.unknown);
        _swift_task_dealloc(TVar13.unknown);
      }
      _swift_task_dealloc(uVar11);
    }
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x680);
  }
  *(undefined8 *)(unaff_x22 + 0x718) = uVar6;
  __objc_autoreleasePoolPop(param_1);
  plVar16 = (long *)(ulong)*(uint *)(PTR__sleep_100524758 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x720) = plVar16;
  *plVar16 = unaff_x22;
  plVar16[1] = (long)FUN_10003e980;
  (extension_Swift)::Swift::Task::_sleep(3000000);
  return;
}

