// rea decompile_all
// name: FUN_1002b4ab0
// address: 0x1002b4ab0
// body: available
// range: 0x1002b4ab0-0x1002b4def inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002b4dec to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1002b4ab0(long param_1,ulong param_2)

{
  ulong uVar1;
  __DataStorage _Var2;
  uint uVar3;
  code *pcVar4;
  __DataStorage *p_Var5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  undefined *puVar11;
  long lVar12;
  uint uVar13;
  String SVar14;
  __DataStorage local_7e [4];
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100521138;
  uVar3 = (uint)(param_2 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar10 = (int)param_1;
  puVar11 = PTR___swiftEmptyArrayStorage_100524190;
  if (uVar3 >> 0x1e < 2) {
    if (uVar13 == 0) {
      uVar9 = param_2 >> 0x30 & 0xff;
    }
    else {
      iVar8 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar8,iVar10)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1002b4de4);
        (*pcVar4)();
      }
      uVar9 = (ulong)(iVar8 - iVar10);
    }
  }
  else {
    if (uVar13 != 2) goto LAB_1002b4d84;
    uVar9 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002b4b20);
      (*pcVar4)();
    }
  }
  if (uVar9 != 0) {
    local_70 = PTR___swiftEmptyArrayStorage_100524190;
    p_Var5 = (__DataStorage *)0x0;
    FUN_1001c5bc4(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
    if (uVar3 >> 0x1e == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (long)iVar10;
      if (uVar13 == 2) {
        lVar12 = *(long *)(param_1 + 0x10);
      }
    }
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002b4de0);
      (*pcVar4)();
    }
    do {
      puVar11 = local_70;
      if (uVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1002b4dc4);
        (*pcVar4)();
      }
      if (uVar13 == 2) {
        if (lVar12 < *(long *)(param_1 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1002b4dc8);
          (*pcVar4)();
        }
        if (*(long *)(param_1 + 0x18) <= lVar12) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1002b4dd4);
          (*pcVar4)();
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
        if (p_Var5 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1002b4dec);
          (*pcVar4)();
        }
        lVar6 = Foundation::__DataStorage::get__offset
                          ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
        if (SBORROW8(lVar12,lVar6)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1002b4ddc);
          (*pcVar4)();
        }
LAB_1002b4c44:
        _Var2 = p_Var5[lVar12 - lVar6];
      }
      else {
        if (uVar3 >> 0x1e == 1) {
          if ((lVar12 < iVar10) || (param_1 >> 0x20 <= lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1002b4dd0);
            (*pcVar4)();
          }
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
          if (p_Var5 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1002b4de8);
            (*pcVar4)();
          }
          lVar6 = Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
          if (SBORROW8(lVar12,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1002b4dd8);
            (*pcVar4)();
          }
          goto LAB_1002b4c44;
        }
        if ((long)(param_2 >> 0x30 & 0xff) <= lVar12) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1002b4dcc);
          (*pcVar4)();
        }
        local_7e[0] = SUB81(param_1,0);
        local_7e[1] = (__DataStorage)(char)((ulong)param_1 >> 8);
        local_7e[2] = (__DataStorage)(char)((ulong)param_1 >> 0x10);
        local_7e[3] = (__DataStorage)(char)((ulong)param_1 >> 0x18);
        local_7a = (char)((ulong)param_1 >> 0x20);
        local_79 = (char)((ulong)param_1 >> 0x28);
        local_78 = (char)((ulong)param_1 >> 0x30);
        local_77 = (char)((ulong)param_1 >> 0x38);
        local_76 = (char)param_2;
        local_75 = (char)(param_2 >> 8);
        local_74 = (char)(param_2 >> 0x10);
        local_73 = (char)(param_2 >> 0x18);
        local_72 = (char)(param_2 >> 0x20);
        local_71 = (char)(param_2 >> 0x28);
        _Var2 = local_7e[lVar12];
      }
      puVar7 = &DAT_10054b500;
      FUN_100002f94(&DAT_10054b500,&DAT_100434890);
      _swift_allocObject();
      *(undefined8 *)(puVar7 + 0x18) = 2;
      *(undefined8 *)(puVar7 + 0x10) = 1;
      *(undefined **)(puVar7 + 0x38) = PTR___type_metadata_for_Swift_UInt8_100524090;
      *(undefined **)(puVar7 + 0x40) =
           PTR___protocol_witness_table_for_Swift_UInt8___Swift_CVarArg_in_Swift_100524098;
      *(__DataStorage *)(puVar7 + 0x20) = _Var2;
      SVar14 = (extension_Foundation)::Swift::String::_init();
      p_Var5 = (__DataStorage *)SVar14.str;
      local_70 = puVar11;
      uVar1 = *(ulong *)(puVar11 + 0x10);
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar1) {
        FUN_1001c5bc4(1 < *(ulong *)(puVar11 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(local_70 + 0x10) = uVar1 + 1;
      *(String *)(local_70 + uVar1 * 0x10 + 0x20) = SVar14;
      lVar12 = lVar12 + 1;
      uVar9 = uVar9 - 1;
      puVar11 = local_70;
    } while (uVar9 != 0);
  }
LAB_1002b4d84:
  if (*(long *)PTR____stack_chk_guard_100521138 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar11;
}

