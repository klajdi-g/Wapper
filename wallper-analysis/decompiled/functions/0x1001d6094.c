// rea decompile_all
// name: FUN_1001d6094
// address: 0x1001d6094
// body: available
// range: 0x1001d6094-0x1001d62ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001d62ec to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1001d6094(__DataStorage *param_1,long param_2,ulong param_3)

{
  __DataStorage _Var1;
  code *pcVar2;
  uint uVar3;
  __DataStorage *p_Var4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  __DataStorage local_76 [4];
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100521138;
  uVar10 = (uint)(param_3 >> 0x20);
  uVar9 = uVar10 >> 0x1e;
  if (uVar10 >> 0x1e < 2) {
    uVar7 = 0;
    if (uVar9 != 0) {
      uVar7 = (long)(int)param_2;
    }
  }
  else {
    uVar7 = 0;
    if (uVar9 == 2) {
      uVar7 = *(ulong *)(param_2 + 0x10);
    }
  }
  uVar3 = (uint)param_1;
  uVar11 = param_3 >> 0x30 & 0xff;
  uVar10 = uVar10 >> 0x1e;
  uVar8 = uVar7;
  if (1 < uVar9) goto LAB_1001d614c;
LAB_1001d6134:
  uVar6 = uVar11;
  if (uVar9 != 0) {
    uVar6 = param_2 >> 0x20;
  }
  if (uVar8 == uVar6) {
LAB_1001d6284:
    uVar8 = 0;
    uVar5 = 1;
LAB_1001d628c:
    if (*(long *)PTR____stack_chk_guard_100521138 == local_68) {
      return uVar8;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(param_1,uVar5);
  }
  do {
    if (uVar9 == 2) {
      if ((long)uVar8 < *(long *)(param_2 + 0x10)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001d62d0);
        (*pcVar2)();
      }
      if (*(long *)(param_2 + 0x18) <= (long)uVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001d62d8);
        (*pcVar2)();
      }
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)(param_3 & 0x3fffffffffffffff),param_1);
      if (param_1 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001d62ec);
        (*pcVar2)();
      }
      p_Var4 = (__DataStorage *)
               Foundation::__DataStorage::get__offset
                         ((__DataStorage *)(param_3 & 0x3fffffffffffffff),param_1);
      if (SBORROW8(uVar8,(long)p_Var4)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001d62e0);
        (*pcVar2)();
      }
LAB_1001d61e0:
      _Var1 = param_1[uVar8 - (long)p_Var4];
      param_1 = p_Var4;
    }
    else {
      if (uVar10 == 1) {
        if (((long)uVar8 < (long)(int)param_2) || (param_2 >> 0x20 <= (long)uVar8)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001d62d4);
          (*pcVar2)();
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),param_1);
        if (param_1 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001d62e8);
          (*pcVar2)();
        }
        p_Var4 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),param_1);
        if (SBORROW8(uVar8,(long)p_Var4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001d62dc);
          (*pcVar2)();
        }
        goto LAB_1001d61e0;
      }
      if ((long)uVar11 <= (long)uVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001d62cc);
        (*pcVar2)();
      }
      local_76[0] = SUB81(param_2,0);
      local_76[1] = (__DataStorage)(char)((ulong)param_2 >> 8);
      local_76[2] = (__DataStorage)(char)((ulong)param_2 >> 0x10);
      local_76[3] = (__DataStorage)(char)((ulong)param_2 >> 0x18);
      local_72 = (char)((ulong)param_2 >> 0x20);
      local_71 = (char)((ulong)param_2 >> 0x28);
      local_70 = (char)((ulong)param_2 >> 0x30);
      local_6f = (char)((ulong)param_2 >> 0x38);
      local_6e = (char)param_3;
      local_6d = (char)(param_3 >> 8);
      local_6c = (char)(param_3 >> 0x10);
      local_6b = (char)(param_3 >> 0x18);
      local_6a = (char)(param_3 >> 0x20);
      local_69 = (char)(param_3 >> 0x28);
      _Var1 = local_76[uVar8];
    }
    if ((uint)(byte)_Var1 == (uVar3 & 0xff)) {
      uVar5 = 0;
      goto LAB_1001d628c;
    }
    uVar8 = uVar8 + 1;
    if (uVar10 < 2) goto LAB_1001d6134;
LAB_1001d614c:
    if (uVar10 != 2) {
      if (uVar7 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001d62e4);
        (*pcVar2)();
      }
      goto LAB_1001d6284;
    }
    if (uVar8 == *(ulong *)(param_2 + 0x18)) goto LAB_1001d6284;
  } while( true );
}

