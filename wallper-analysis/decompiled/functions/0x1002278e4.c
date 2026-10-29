// rea decompile_all
// name: FUN_1002278e4
// address: 0x1002278e4
// body: available
// range: 0x1002278e4-0x100227af7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100227af0 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_1002278e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  void *pvVar6;
  void *pvVar7;
  undefined1 *unaff_x21;
  ulong uVar8;
  undefined1 auStack_90 [8];
  undefined1 *local_88 [3];
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100521138;
  uVar8 = (1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f)) + 0x3fU >> 6;
  pvVar7 = (void *)(uVar8 << 3);
  local_70 = param_3;
  uStack_68 = param_1;
  local_60 = param_2;
  if (((*(byte *)(param_3 + 0x20) & 0x3f) < 0xe) ||
     ((bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xc,3,0,0xf,4,0),
      (bVar3 & 1) != 0 &&
      (pvVar6 = pvVar7, _swift_stdlib_isStackAllocationSafe(pvVar7,8), ((ulong)pvVar6 & 1) != 0))))
  {
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar4 = auStack_90 + -((long)pvVar7 + 0xfU & 0x3ffffffffffffff0);
    _bzero(puVar4,(size_t)pvVar7);
    FUN_1001a9160(puVar4,uVar8,param_3,param_1,param_2);
    puVar1 = unaff_x21;
  }
  else {
    pvVar6 = pvVar7;
    _swift_slowAlloc(pvVar7,0xffffffffffffffff);
    if (pvVar6 == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100227af8);
      (*pcVar2)();
    }
    _bzero(pvVar6,(size_t)pvVar7);
    FUN_10022a4a4(local_88,pvVar6,uVar8);
    puVar4 = local_88[0];
    if (unaff_x21 != (undefined1 *)0x0) {
      puVar4 = unaff_x21;
    }
    _swift_slowDealloc(pvVar6,0xffffffffffffffff,0xffffffffffffffff);
    puVar1 = puVar4;
  }
  if ((unaff_x21 != (undefined1 *)0x0) &&
     (bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0),
     puVar4 = puVar1, (bVar3 & 1) != 0)) {
    puVar5 = &DAT_100558c00;
    FUN_100002f94(&DAT_100558c00,&DAT_10042b170);
    _swift_willThrowTypedImpl
              (local_88,puVar5,
               PTR___protocol_self_conformance_witness_table_for_Swift_Error_100524008);
  }
  if (*(long *)PTR____stack_chk_guard_100521138 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar4;
}

