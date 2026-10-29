// rea decompile_all
// name: FUN_1001b0f5c
// address: 0x1001b0f5c
// body: available
// range: 0x1001b0f5c-0x1001b105b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001b0fbc to 0x100414630 _memcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1001b0f5c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  Date DVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  lVar6 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar6 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)plVar3 != 0) {
      plVar3 = _memcpy(param_1,param_2,*(size_t *)(lVar6 + 0x40));
      return plVar3;
    }
    *(char *)param_1 = (char)*param_2;
    lVar6 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = lVar6;
    lVar7 = param_2[3];
    param_1[3] = lVar7;
    lVar6 = 0;
    FUN_1001b08c0();
    iVar2 = *(int *)(lVar6 + 0x1c);
    DVar4 = Foundation::Date::typeMetadataAccessor();
    pcVar8 = *(code **)(*(long *)(DVar4.unknown + -8) + 0x10);
    _swift_bridgeObjectRetain(lVar7);
    (*pcVar8)((undefined1 *)((long)param_1 + (long)iVar2),
              (undefined1 *)((long)param_2 + (long)iVar2),DVar4.unknown);
    _swift_storeEnumTagMultiPayload(param_1,param_3,0);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar6 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

