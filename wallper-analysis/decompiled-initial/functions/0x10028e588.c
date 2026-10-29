// rea decompile_all
// name: FUN_10028e588
// address: 0x10028e588
// body: available
// range: 0x10028e588-0x10028e757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10028e754 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Type propagation algorithm not settling */

void FUN_10028e588(ID param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  Date DVar3;
  ID IVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  ID *pIVar6;
  long lVar7;
  ID IVar8;
  long lVar9;
  ID aIStack_80 [4];
  
  aIStack_80[3] = *(ID *)PTR____stack_chk_guard_100521138;
  lVar2 = 0;
  FUN_10028e828();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pIVar6 = (ID *)((long)aIStack_80 + lVar1);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)pIVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  Foundation::Date::init();
  aIStack_80[2] = 0;
  FUN_10028e860(param_1,param_2,aIStack_80 + 2);
  if (param_1 == 0) {
    IVar4 = 0;
    IVar8 = aIStack_80[2];
  }
  else {
    aIStack_80[1] = aIStack_80[2];
    IVar4 = objc_stub::executeAndReturnError_(param_1,aIStack_80 + 1);
    IVar8 = aIStack_80[1];
  }
  (**(code **)(lVar9 + 0x10))((long)pIVar6 + (long)*(int *)(lVar2 + 0x18),lVar7,DVar3.unknown);
  Foundation::Date::init();
  *pIVar6 = IVar4;
  *(ID *)((long)aIStack_80 + lVar1 + 8U) = IVar8;
  puVar5 = &DAT_100555ea0;
  FUN_100002f94(&DAT_100555ea0,&DAT_100429ed0);
  Swift::CheckedContinuation::resume(pIVar6,puVar5);
  (**(code **)(lVar9 + 8))(lVar7,DVar3.unknown);
  if (*(long *)PTR____stack_chk_guard_100521138 == aIStack_80[3]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

