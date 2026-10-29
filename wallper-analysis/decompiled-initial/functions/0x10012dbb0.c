// rea decompile_all
// name: FUN_10012dbb0
// address: 0x10012dbb0
// body: available
// range: 0x10012dbb0-0x10012dc77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10012dbb0(undefined *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_60;
  undefined8 uStack_58;
  undefined *local_48;
  
  ppuVar2 = &local_60;
  _swift_bridgeObjectRetain(param_2);
  FUN_10012dc78(&local_60,0,0,1,param_1,param_2);
  puVar1 = local_60;
  if (ppuVar2 == (undefined **)0x0) {
    lVar4 = *param_3;
    uStack_58 = param_2;
    local_60 = param_1;
    local_48 = PTR___type_metadata_for_Swift__StringGuts_100523d58;
  }
  else {
    _swift_bridgeObjectRelease(param_2);
    puVar3 = (undefined *)ppuVar2;
    _swift_getObjectType();
    lVar4 = *param_3;
    local_60 = (undefined *)ppuVar2;
    local_48 = puVar3;
  }
  if (lVar4 != 0) {
    FUN_1000280d4(&local_60,lVar4);
    *param_3 = lVar4 + 0x20;
  }
  FUN_100043f24(&local_60);
  return puVar1;
}

