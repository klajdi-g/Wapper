// rea decompile_all
// name: FUN_1000d4a98
// address: 0x1000d4a98
// body: available
// range: 0x1000d4a98-0x1000d4d23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1000d4a98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                ID param_5,long param_6)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  ID self;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  double extraout_d0_01;
  double dVar8;
  double extraout_d0_02;
  undefined8 uVar9;
  double dVar10;
  undefined1 auStack_88 [24];
  
  _swift_beginAccess(param_6 + 0x10,auStack_88,0,0);
  self = param_6 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if ((((self != 0) && (IVar4 = objc_stub::window(self), IVar4 != 0)) &&
      (IVar5 = objc_stub::window(param_5), IVar5 != 0)) && (IVar5 == IVar4)) {
    objc_stub::bounds(self);
    uVar9 = param_2;
    objc_stub::locationInWindow(param_5);
    IVar4 = objc_stub::convertPoint_fromView_(self,0);
    iVar3 = (int)IVar4;
    _CGRectContainsPoint(extraout_d0,param_2,param_3,param_4,extraout_d0_00,uVar9);
    if (iVar3 != 0) {
      IVar4 = objc_stub::phase(param_5);
      if (IVar4 == 1) {
        *(undefined8 *)
         (self + _TtCV7WallperP33_DBEE93701475F9840ECC6A125B728EB913ScrollCatcher11CatcherView::
                 pending) = 0;
      }
      IVar4 = objc_stub::momentumPhase(param_5);
      if (IVar4 == 0) {
        IVar4 = objc_stub::hasPreciseScrollingDeltas(param_5);
        objc_stub::scrollingDeltaY(param_5);
        lVar2 = _TtCV7WallperP33_DBEE93701475F9840ECC6A125B728EB913ScrollCatcher11CatcherView::
                pending;
        if ((IVar4 & 1) == 0) {
          if (extraout_d0_01 != 0.0) {
            pcVar7 = *(code **)(self + _TtCV7WallperP33_DBEE93701475F9840ECC6A125B728EB913ScrollCatcher11CatcherView
                                       ::onStep);
            if (pcVar7 != (code *)0x0) {
              uVar6 = ((undefined8 *)
                      (self + _TtCV7WallperP33_DBEE93701475F9840ECC6A125B728EB913ScrollCatcher11CatcherView
                              ::onStep))[1];
              _swift_retain(uVar6);
              objc_stub::scrollingDeltaY(param_5);
              uVar9 = 0xffffffffffffffff;
              if (extraout_d0_02 < 0.0) {
                uVar9 = 1;
              }
              (*pcVar7)(uVar9);
              FUN_10002f6dc(pcVar7,uVar6);
              return 0;
            }
          }
        }
        else {
          dVar8 = extraout_d0_01 +
                  *(double *)
                   (self + _TtCV7WallperP33_DBEE93701475F9840ECC6A125B728EB913ScrollCatcher11CatcherView
                           ::pending);
          *(double *)
           (self + _TtCV7WallperP33_DBEE93701475F9840ECC6A125B728EB913ScrollCatcher11CatcherView::
                   pending) = dVar8;
          if (18.0 <= ABS(dVar8)) {
            puVar1 = (undefined8 *)
                     (self + _TtCV7WallperP33_DBEE93701475F9840ECC6A125B728EB913ScrollCatcher11CatcherView
                             ::onStep);
            do {
              dVar10 = 18.0;
              if (0.0 <= dVar8) {
                dVar10 = -18.0;
              }
              *(double *)(self + lVar2) = dVar8 + dVar10;
              pcVar7 = (code *)*puVar1;
              dVar10 = dVar8 + dVar10;
              if (pcVar7 != (code *)0x0) {
                uVar6 = puVar1[1];
                uVar9 = 0xffffffffffffffff;
                if (dVar8 < 0.0) {
                  uVar9 = 1;
                }
                _swift_retain(uVar6);
                (*pcVar7)(uVar9);
                FUN_10002f6dc(pcVar7,uVar6);
                dVar10 = *(double *)(self + lVar2);
              }
              dVar8 = dVar10;
            } while (18.0 <= ABS(dVar8));
          }
        }
      }
      param_5 = 0;
    }
  }
  return param_5;
}

