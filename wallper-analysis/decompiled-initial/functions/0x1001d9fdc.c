// rea decompile_all
// name: FUN_1001d9fdc
// address: 0x1001d9fdc
// body: available
// range: 0x1001d9fdc-0x1001da07b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1001d9fdc(long param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == *(long *)(param_2 + 0x10)) {
    if ((lVar3 != 0) && (param_1 != param_2)) {
      puVar4 = (undefined8 *)(param_2 + 0x38);
      puVar5 = (undefined8 *)(param_1 + 0x38);
      do {
        bVar1 = false;
        if ((puVar5[-3] == puVar4[-3]) &&
           (bVar1 = false, !NAN((double)puVar5[-2]) && !NAN((double)puVar4[-2]))) {
          bVar1 = (double)puVar5[-2] == (double)puVar4[-2];
        }
        if (!bVar1) goto LAB_1001da060;
        if (((undefined *)puVar5[-1] != (undefined *)puVar4[-1] ||
             (undefined *)*puVar5 != (undefined *)*puVar4) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)puVar5[-1],(undefined *)*puVar5,
                               (_StringComparisonResult)(__int8)(undefined *)puVar4[-1]), !bVar1))
        goto LAB_1001da060;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    uVar2 = 1;
  }
  else {
LAB_1001da060:
    uVar2 = 0;
  }
  return uVar2;
}

