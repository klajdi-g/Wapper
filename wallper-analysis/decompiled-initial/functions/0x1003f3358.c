// rea decompile_all
// name: FUN_1003f3358
// address: 0x1003f3358
// body: available
// range: 0x1003f3358-0x1003f342f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_1003f3358(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  URL UVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  UVar4 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar4.unknown + -8) + 0x28))(param_1,param_2,UVar4.unknown);
  iVar3 = *(int *)(param_3 + 0x18);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x14));
  *(undefined1 *)(param_1 + iVar3) = *(undefined1 *)(param_2 + iVar3);
  iVar3 = *(int *)(param_3 + 0x20);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x1c));
  *(undefined8 *)(param_1 + iVar3) = *(undefined8 *)(param_2 + iVar3);
  iVar3 = *(int *)(param_3 + 0x28);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x24)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x24));
  plVar1 = (long *)(param_1 + iVar3);
  plVar2 = (long *)(param_2 + iVar3);
  lVar6 = *plVar2;
  if (*plVar1 == 0) {
    if (lVar6 != 0) {
      lVar5 = plVar2[1];
      *plVar1 = lVar6;
      plVar1[1] = lVar5;
      return param_1;
    }
  }
  else {
    if (lVar6 != 0) {
      lVar7 = plVar2[1];
      lVar5 = plVar1[1];
      *plVar1 = lVar6;
      plVar1[1] = lVar7;
      _swift_release(lVar5);
      return param_1;
    }
    _swift_release(plVar1[1]);
  }
  lVar6 = *plVar2;
  plVar1[1] = plVar2[1];
  *plVar1 = lVar6;
  return param_1;
}

