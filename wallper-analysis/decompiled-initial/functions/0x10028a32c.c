// rea decompile_all
// name: FUN_10028a32c
// address: 0x10028a32c
// body: available
// range: 0x10028a32c-0x10028a533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10028a530 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10028a32c(__DataStorage *param_1,ulong param_2,undefined8 param_3,Range<__int64> param_4,
                  __int64 param_5)

{
  __DataStorage *p_Var1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  __DataStorage *p_Var5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100521138;
  uVar3 = (uint)(param_2 >> 0x20);
  uVar8 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar8 == 0) {
      param_1 = (__DataStorage *)0xffffffffffffff88;
      uVar7 = param_2 >> 0x30 & 0xff;
    }
    else {
      lVar10 = (long)(int)param_1;
      uVar7 = ((long)param_1 >> 0x20) - lVar10;
      if ((long)param_1 >> 0x20 < lVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10028a524);
        (*pcVar4)();
      }
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)(param_2 & 0x3fffffffffffffff),param_1);
      if (param_1 == (__DataStorage *)0x0) {
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),(__DataStorage *)0x0);
        param_1 = (__DataStorage *)0x0;
        uVar7 = 0;
      }
      else {
        p_Var5 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_2 & 0x3fffffffffffffff),param_1);
        if (SBORROW8(lVar10,(long)p_Var5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10028a530);
          (*pcVar4)();
        }
        p_Var1 = param_1 + (lVar10 - (long)p_Var5);
        uVar6 = Foundation::__DataStorage::get__length
                          ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
        if ((long)uVar7 <= (long)uVar6) {
          uVar6 = uVar7;
        }
        param_1 = (__DataStorage *)0x0;
        if (p_Var1 != (__DataStorage *)0x0) {
          param_1 = p_Var1;
        }
        uVar7 = 0;
        if (p_Var1 != (__DataStorage *)0x0) {
          uVar7 = uVar6;
        }
      }
    }
  }
  else if (uVar8 == 2) {
    lVar10 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    Foundation::__DataStorage::_get__bytes((__DataStorage *)(param_2 & 0x3fffffffffffffff),param_1);
    p_Var5 = (__DataStorage *)0x0;
    if (param_1 != (__DataStorage *)0x0) {
      p_Var5 = (__DataStorage *)
               Foundation::__DataStorage::get__offset
                         ((__DataStorage *)(param_2 & 0x3fffffffffffffff),param_1);
      if (SBORROW8(lVar10,(long)p_Var5)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10028a52c);
        (*pcVar4)();
      }
      param_1 = param_1 + (lVar10 - (long)p_Var5);
    }
    uVar7 = lVar2 - lVar10;
    if (SBORROW8(lVar2,lVar10)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10028a528);
      (*pcVar4)();
    }
    uVar6 = Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
    if ((long)uVar7 <= (long)uVar6) {
      uVar6 = uVar7;
    }
    uVar7 = 0;
    if (param_1 != (__DataStorage *)0x0) {
      uVar7 = uVar6;
    }
  }
  else {
    param_1 = (__DataStorage *)0xffffffffffffff88;
    uVar7 = 0;
  }
  Foundation::Data::_Representation::_replaceSubrange
            (param_4,param_5,(_Representation)(__int8)param_1,uVar7);
  if (*(long *)PTR____stack_chk_guard_100521138 != lVar9) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

