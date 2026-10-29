// rea decompile_all
// name: FUN_100340d10
// address: 0x100340d10
// body: available
// range: 0x100340d10-0x100340e4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100340e00 to 0x100341f7c FUN_100341f7c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100340e48 to 0x1004147a4 _swift_bridgeObjectRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100340d10(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  lVar2 = param_2;
  uVar4 = param_3;
  FUN_10000464c(param_2);
  lVar6 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar5 = lVar6 + uVar7;
  if (SCARRY8(lVar6,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100340e08);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    FUN_1001cf690(lVar5,param_4 & 1);
    uVar7 = param_3;
    FUN_10000464c(param_2);
    lVar2 = param_2;
    if (((uint)uVar4 & 1) != ((uint)uVar7 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100340db0);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_1001cc0a4();
    lVar5 = *unaff_x20;
    goto joined_r0x000100340e1c;
  }
  lVar5 = *unaff_x20;
joined_r0x000100340e1c:
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)(lVar5 + 0x38);
    puVar3 = &DAT_10054a360;
    FUN_100002f94(&DAT_10054a360,&DAT_10041a330);
    FUN_100341f7c(param_1,lVar5 + *(long *)(*(long *)(puVar3 + -8) + 0x48) * lVar2);
    return;
  }
  FUN_1002a7c30();
  _swift_bridgeObjectRetain(param_3);
  return;
}

