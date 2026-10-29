// rea decompile_all
// name: FUN_1001b1190
// address: 0x1001b1190
// body: available
// range: 0x1001b1190-0x1001b1287 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001b1200 to 0x100414630 _memcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_1001b1190(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  Date DVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  if (param_1 != param_2) {
    FUN_100029548(param_1,FUN_1001b08d4);
    puVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)puVar2 != 0) {
      puVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return puVar2;
    }
    *param_1 = *param_2;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    lVar3 = 0;
    FUN_1001b08c0();
    iVar1 = *(int *)(lVar3 + 0x1c);
    DVar4 = Foundation::Date::typeMetadataAccessor();
    pcVar6 = *(code **)(*(long *)(DVar4.unknown + -8) + 0x10);
    _swift_bridgeObjectRetain(uVar5);
    (*pcVar6)(param_1 + iVar1,param_2 + iVar1,DVar4.unknown);
    _swift_storeEnumTagMultiPayload(param_1,param_3,0);
  }
  return param_1;
}

