// rea decompile_all
// name: FUN_1002cb330
// address: 0x1002cb330
// body: available
// range: 0x1002cb330-0x1002cb3a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_1002cb330(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  URL UVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  UVar3 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar3.unknown + -8) + 0x10))(param_1,param_2,UVar3.unknown);
  puVar1 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar4 = puVar1[1];
  uVar5 = *puVar1;
  puVar2 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar5;
  _swift_retain(uVar4);
  return param_1;
}

