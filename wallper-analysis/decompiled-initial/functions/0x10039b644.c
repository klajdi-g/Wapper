// rea decompile_all
// name: FUN_10039b644
// address: 0x10039b644
// body: available
// range: 0x10039b644-0x10039b773 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10039b770 to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10039b644(undefined8 *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  UUID UVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  
  _swift_release(*param_1);
  _swift_release(param_1[2]);
  lVar1 = (long)param_1 + (long)*(int *)(param_2 + 0x18);
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar6 = *(long *)(UVar3.unknown + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  lVar4 = lVar1;
  (*pcVar7)(lVar1,1,UVar3.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar6 + 8))(lVar1,UVar3.unknown);
  }
  puVar5 = &DAT_10054dd90;
  FUN_100002f94(&DAT_10054dd90,&DAT_10041ec00);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(puVar5 + 0x1c)));
  iVar2 = *(int *)(param_2 + 0x1c);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)iVar2 + 8));
  _swift_release(*(undefined8 *)((long)param_1 + (long)iVar2 + 0x10));
  lVar1 = (long)param_1 + (long)*(int *)(param_2 + 0x20);
  lVar4 = lVar1;
  (*pcVar7)(lVar1,1,UVar3.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar6 + 8))(lVar1,UVar3.unknown);
  }
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(puVar5 + 0x1c)));
  _swift_release(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x24) + 8));
  _swift_release(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x28) + 8));
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x2c));
  _swift_bridgeObjectRelease(*param_1);
  _swift_release(param_1[1]);
  return;
}

