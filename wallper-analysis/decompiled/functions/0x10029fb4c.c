// rea decompile_all
// name: FUN_10029fb4c
// address: 0x10029fb4c
// body: available
// range: 0x10029fb4c-0x10029fddb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10029fd64 to 0x10041382c /usr/lib/swift/libswiftAVFoundation.dylib::(extension_AVFoundation)::__C::AVAsynchronousKeyValueLoading::$load (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10029fdd4 to 0x1002a2cec FUN_1002a2cec (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10029fdd8 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10029fb4c(void)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  URL UVar5;
  undefined *self;
  ID self_00;
  AVPartialAsyncProperty *pAVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100521138;
  dVar10 = *(double *)(unaff_x22 + 0x3a8);
  dVar11 = *(double *)(unaff_x22 + 0x3a0);
  *(undefined8 *)(unaff_x22 + 0x1d8) = *(undefined8 *)(unaff_x22 + 0x3d8);
  *(undefined8 *)(unaff_x22 + 0x1e8) = *(undefined8 *)(unaff_x22 + 1000);
  *(undefined8 *)(unaff_x22 + 0x1e0) = *(undefined8 *)(unaff_x22 + 0x3e0);
  *(undefined8 *)(unaff_x22 + 0x1f8) = *(undefined8 *)(unaff_x22 + 0x3f8);
  *(undefined8 *)(unaff_x22 + 0x1f0) = *(undefined8 *)(unaff_x22 + 0x3f0);
  *(undefined8 *)(unaff_x22 + 0x200) = *(undefined8 *)(unaff_x22 + 0x400);
  _CGSizeApplyAffineTransform(unaff_x22 + 0x1d8);
  dVar10 = ABS(dVar10);
  *(double *)(unaff_x22 + 0x408) = dVar10;
  dVar11 = ABS(dVar11);
  *(double *)(unaff_x22 + 0x410) = dVar11;
  bVar2 = false;
  bVar3 = true;
  bVar4 = false;
  if (1.0 < dVar10) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(dVar11)) {
      bVar2 = dVar11 < 1.0;
      bVar3 = dVar11 == 1.0;
      bVar4 = false;
    }
  }
  if (!bVar3 && bVar2 == bVar4) {
    dVar13 = *(double *)(unaff_x22 + 0x358) / dVar10;
    dVar12 = *(double *)(unaff_x22 + 0x360) / dVar11;
    if (dVar13 <= dVar12) {
      dVar12 = dVar13;
    }
    bVar2 = false;
    if ((dVar12 <= 1.0) && (bVar2 = false, !NAN(dVar12))) {
      bVar2 = dVar12 < 0.8;
    }
    if (bVar2) {
      cVar1 = *(char *)(unaff_x22 + 0x5e8);
      dVar13 = (double)(long)(dVar10 * dVar12 * 0.5);
      *(double *)(unaff_x22 + 0x420) = dVar13;
      dVar10 = (double)(long)(dVar11 * dVar12 * 0.5);
      *(double *)(unaff_x22 + 0x428) = dVar10;
      self = &_OBJC_CLASS___AVMutableVideoComposition;
      _objc_allocWithZone();
      self_00 = objc_stub::init((ID)self);
      *(ID *)(unaff_x22 + 0x430) = self_00;
      objc_stub::setRenderSize_(self_00,dVar13 + dVar13,dVar10 + dVar10);
      pAVar6 = (AVPartialAsyncProperty *)&DAT_100559c30;
      FUN_100002f94(&DAT_100559c30,&DAT_10042de18);
      (extension_AVFoundation)::AVFoundation::AVPartialAsyncProperty::_get_nominalFrameRate(pAVar6);
      *(AVPartialAsyncProperty **)(unaff_x22 + 0x438) = pAVar6;
      if (cVar1 == '\x01') {
        plVar7 = (long *)(ulong)*(uint *)(PTR__load_100523940 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x440) = plVar7;
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_10029fe48;
        if (*(long *)PTR____stack_chk_guard_100521138 == lVar8) {
          (extension_AVFoundation)::__C::AVAsynchronousKeyValueLoading::_load();
          return;
        }
      }
      else {
        plVar7 = (long *)0xc0;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x448) = plVar7;
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_10029ff14;
        if (*(long *)PTR____stack_chk_guard_100521138 == lVar8) {
          FUN_1002a2cec(pAVar6,0,0);
          return;
        }
      }
      goto LAB_10029fdd8;
    }
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x348);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar5.unknown + -8) + 0x38))(uVar9,1,1,UVar5.unknown);
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010029fc78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
LAB_10029fdd8:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

