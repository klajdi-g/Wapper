// rea decompile_all
// name: FUN_1003413b8
// address: 0x1003413b8
// body: available
// range: 0x1003413b8-0x10034152f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003414c0 to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003413b8(undefined8 param_1,ulong param_2,long param_3,uint param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  URL UVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long extraout_x8;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar6 = param_2;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = *unaff_x20;
  lVar4 = param_3;
  FUN_1000048c0();
  lVar7 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar6 & 1;
  lVar10 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1003414c8);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar10) {
    param_4 = param_4 & 1;
    FUN_1001d0e90(lVar10);
    lVar4 = param_3;
    FUN_1000048c0();
    if (((uint)uVar6 & 1) != (param_4 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100341488);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_1001ccf08();
    lVar10 = *unaff_x20;
    goto joined_r0x0001003414dc;
  }
  lVar10 = *unaff_x20;
joined_r0x0001003414dc:
  if ((uVar6 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar10 + 0x38) + lVar4 * 0x10);
    uVar5 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    _swift_bridgeObjectRelease(uVar5);
    return;
  }
  (**(code **)(lVar11 + 0x10))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3,
             UVar3.unknown);
  FUN_1002a7d78(lVar4,&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,
                param_2,lVar10);
  return;
}

