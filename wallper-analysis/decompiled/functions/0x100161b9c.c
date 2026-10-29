// rea decompile_all
// name: FUN_100161b9c
// address: 0x100161b9c
// body: available
// range: 0x100161b9c-0x100161d47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100161d44 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100161b9c(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  undefined1 local_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100521138;
  uVar1 = (uint)(param_2 >> 0x20);
  uVar3 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar3 == 0) {
      local_48 = (undefined1)param_1;
      uStack_47 = (undefined1)((ulong)param_1 >> 8);
      uStack_46 = (undefined1)((ulong)param_1 >> 0x10);
      uStack_45 = (undefined1)((ulong)param_1 >> 0x18);
      uStack_44 = (undefined1)((ulong)param_1 >> 0x20);
      uStack_43 = (undefined1)((ulong)param_1 >> 0x28);
      uStack_42 = (undefined1)((ulong)param_1 >> 0x30);
      uStack_41 = (undefined1)((ulong)param_1 >> 0x38);
      local_40 = (undefined1)param_2;
      local_3f = (undefined1)(param_2 >> 8);
      local_3e = (undefined1)(param_2 >> 0x10);
      local_3d = (undefined1)(param_2 >> 0x18);
      local_3c = (undefined1)(param_2 >> 0x20);
      local_3b = (undefined1)(param_2 >> 0x28);
      CryptoKit::SHA256::typeMetadataAccessor();
      FUN_1000036d0(&DAT_1005552d0,PTR_typeMetadataAccessor_100521940,
                    PTR_CryptoKit__CryptoKit__SHA256_>CryptoKit__HashFunction_100521938);
      CryptoKit::HashFunction::update((UnsafeRawBufferPointer)&local_48);
      goto LAB_100161d14;
    }
    lVar4 = (long)(int)param_1;
    param_1 = param_1 >> 0x20;
    if (param_1 < lVar4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100161d44);
      (*pcVar2)();
    }
  }
  else {
    if (uVar3 != 2) {
      CryptoKit::SHA256::typeMetadataAccessor();
      FUN_1000036d0(&DAT_1005552d0,PTR_typeMetadataAccessor_100521940,
                    PTR_CryptoKit__CryptoKit__SHA256_>CryptoKit__HashFunction_100521938);
      local_48 = 0;
      uStack_47 = 0;
      uStack_46 = 0;
      uStack_45 = 0;
      uStack_44 = 0;
      uStack_43 = 0;
      uStack_42 = 0;
      uStack_41 = 0;
      local_40 = 0;
      local_3f = 0;
      local_3e = 0;
      local_3d = 0;
      local_3c = 0;
      local_3b = 0;
      CryptoKit::HashFunction::update((UnsafeRawBufferPointer)&local_48);
      goto LAB_100161d14;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    param_1 = *(long *)(param_1 + 0x18);
  }
  FUN_100161d48(lVar4,param_1,param_2 & 0x3fffffffffffffff,param_3);
LAB_100161d14:
  if (*(long *)PTR____stack_chk_guard_100521138 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

