// rea decompile_all
// name: FUN_100257abc
// address: 0x100257abc
// body: available
// range: 0x100257abc-0x100257cf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100257cf4 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_100257abc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  size_t sVar5;
  undefined1 *unaff_x21;
  ulong uVar6;
  size_t sVar7;
  undefined1 auStack_a0 [8];
  undefined1 *local_98;
  undefined1 *local_90 [2];
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100521138;
  uVar6 = (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3fU >> 6;
  sVar7 = uVar6 * 8;
  local_70 = param_2;
  uStack_68 = param_3;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 0xe) {
    _swift_retain(param_1);
  }
  else {
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xc,3,0,0xf,4,0);
    _swift_retain(param_1);
    if (((bVar2 & 1) == 0) ||
       (sVar5 = sVar7, _swift_stdlib_isStackAllocationSafe(sVar7,8), (sVar5 & 1) == 0)) {
      _swift_slowAlloc(sVar7,0xffffffffffffffff);
      _swift_retain(param_1);
      FUN_1001ab1fc(local_90,sVar7,uVar6,param_1,FUN_100259ea8,auStack_80,&local_98,FUN_1001a94c8);
      puVar3 = local_90[0];
      if (unaff_x21 != (undefined1 *)0x0) {
        puVar3 = local_98;
      }
      _swift_slowDealloc(sVar7,0xffffffffffffffff,0xffffffffffffffff);
      puVar1 = puVar3;
      goto joined_r0x000100257cac;
    }
  }
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar3 = auStack_a0 + -(sVar7 + 0xf & 0x3ffffffffffffff0);
  _bzero(puVar3,sVar7);
  FUN_100257948(puVar3,uVar6,param_1,param_2,param_3);
  puVar1 = unaff_x21;
joined_r0x000100257cac:
  if (unaff_x21 == (undefined1 *)0x0) {
    _swift_release(param_1);
  }
  else {
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar2 & 1) != 0) {
      puVar4 = &DAT_100558c00;
      FUN_100002f94(&DAT_100558c00,&DAT_10042b170);
      _swift_willThrowTypedImpl
                (&local_98,puVar4,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100524008);
    }
    _swift_release(param_1);
    puVar3 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100521138 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar3;
}

