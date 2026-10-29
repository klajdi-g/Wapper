// rea decompile_all
// name: FUN_100341120
// address: 0x100341120
// body: available
// range: 0x100341120-0x100341267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10034120c to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100341264 to 0x1004147a4 _swift_bridgeObjectRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100341120(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,ulong param_6,uint param_7)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  lVar3 = param_5;
  uVar5 = param_6;
  FUN_10000464c();
  lVar7 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar6 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100341214);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_1001d091c(lVar6,param_7 & 1);
    uVar8 = param_6;
    FUN_10000464c();
    lVar3 = param_5;
    if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003411d0);
      (*pcVar2)();
    }
  }
  else if ((param_7 & 1) == 0) {
    FUN_1001ccc04();
    lVar6 = *unaff_x20;
    goto joined_r0x000100341228;
  }
  lVar6 = *unaff_x20;
joined_r0x000100341228:
  if ((uVar5 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar3 * 0x20);
    uVar4 = puVar1[3];
    *puVar1 = param_1;
    *(undefined1 *)(puVar1 + 1) = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    _swift_bridgeObjectRelease(uVar4);
    return;
  }
  FUN_1002a7af4();
  _swift_bridgeObjectRetain(param_6);
  return;
}

