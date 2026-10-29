// rea decompile_all
// name: FUN_10024a008
// address: 0x10024a008
// body: available
// range: 0x10024a008-0x10024a15b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10024a008(ID param_1,long param_2,long *param_3)

{
  ulong uVar1;
  ID IVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  undefined1 auStack_58 [24];
  
  objc_stub::setDuration_(param_1);
  IVar2 = CAMediaTimingFunction::functionWithName_
                    ((ID)&_OBJC_CLASS___CAMediaTimingFunction,
                     *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_100521aa0);
  objc_stub::setTimingFunction_(param_1,IVar2);
  lVar6 = *(long *)(param_2 + 0x10);
  if (lVar6 != 0) {
    puVar7 = (ulong *)(param_2 + 0x28);
    do {
      uVar3 = puVar7[-1];
      uVar1 = *puVar7;
      _swift_beginAccess(param_3,auStack_58,0x20,0);
      lVar5 = *param_3;
      if (*(long *)(lVar5 + 0x10) == 0) {
LAB_10024a090:
        _swift_endAccess(auStack_58);
      }
      else {
        _swift_bridgeObjectRetain(uVar1);
        _swift_bridgeObjectRetain(lVar5);
        uVar4 = uVar1;
        FUN_10000464c();
        if ((uVar4 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar5);
          _swift_bridgeObjectRelease(uVar1);
          goto LAB_10024a090;
        }
        IVar2 = *(ID *)(*(long *)(lVar5 + 0x38) + uVar3 * 8);
        _swift_endAccess(auStack_58);
        _swift_bridgeObjectRelease(lVar5);
        _swift_bridgeObjectRelease(uVar1);
        IVar2 = objc_stub::animator(IVar2);
        objc_stub::setAlphaValue_(IVar2,0x3ff0000000000000);
      }
      puVar7 = puVar7 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}

