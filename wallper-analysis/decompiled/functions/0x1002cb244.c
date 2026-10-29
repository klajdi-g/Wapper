// rea decompile_all
// name: FUN_1002cb244
// address: 0x1002cb244
// body: available
// range: 0x1002cb244-0x1002cb2df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long * FUN_1002cb244(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  URL UVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    UVar4 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar4.unknown + -8) + 0x10))(param_1,param_2,UVar4.unknown);
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    lVar6 = puVar1[1];
    uVar7 = *puVar1;
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar3[1] = puVar1[1];
    *puVar3 = uVar7;
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar5 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar6 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar6);
  return param_1;
}

