// rea decompile_all
// name: FUN_100341530
// address: 0x100341530
// body: available
// range: 0x100341530-0x10034167b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100341630 to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100341678 to 0x1004147a4 _swift_bridgeObjectRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100341530(undefined8 *param_1,long param_2,ulong param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar11 = *unaff_x20;
  lVar4 = param_2;
  uVar6 = param_3;
  FUN_10000464c();
  lVar8 = *(long *)(lVar11 + 0x10);
  uVar10 = (ulong)~(uint)uVar6 & 1;
  lVar7 = lVar8 + uVar10;
  if (SCARRY8(lVar8,uVar10)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100341638);
    (*pcVar3)();
  }
  if (*(long *)(lVar11 + 0x18) < lVar7) {
    FUN_1001d1674(lVar7,param_4 & 1);
    uVar10 = param_3;
    FUN_10000464c();
    lVar4 = param_2;
    if (((uint)uVar6 & 1) != ((uint)uVar10 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003415d0);
      (*pcVar3)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_1001cd320();
    lVar7 = *unaff_x20;
    goto joined_r0x00010034164c;
  }
  lVar7 = *unaff_x20;
joined_r0x00010034164c:
  if ((uVar6 & 1) != 0) {
    puVar9 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar4 * 0x30);
    uVar12 = puVar9[1];
    uVar1 = puVar9[3];
    uVar2 = puVar9[4];
    uVar5 = puVar9[5];
    uVar13 = *param_1;
    uVar15 = param_1[3];
    uVar14 = param_1[2];
    puVar9[1] = param_1[1];
    *puVar9 = uVar13;
    puVar9[3] = uVar15;
    puVar9[2] = uVar14;
    uVar13 = param_1[4];
    puVar9[5] = param_1[5];
    puVar9[4] = uVar13;
    _swift_bridgeObjectRelease(uVar5);
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(uVar1);
    _swift_bridgeObjectRelease(uVar12);
    return;
  }
  FUN_1002a7e18();
  _swift_bridgeObjectRetain(param_3);
  return;
}

