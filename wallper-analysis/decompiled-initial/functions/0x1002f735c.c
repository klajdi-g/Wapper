// rea decompile_all
// name: FUN_1002f735c
// address: 0x1002f735c
// body: available
// range: 0x1002f735c-0x1002f7553 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002f7550 to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f735c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  URL UVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  code *pcVar8;
  
  _swift_release(*param_1);
  iVar3 = *(int *)(param_2 + 0x14);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  pcVar8 = *(code **)(*(long *)(UVar4.unknown + -8) + 8);
  (*pcVar8)((long)param_1 + (long)iVar3,UVar4.unknown);
  (*pcVar8)((long)param_1 + (long)*(int *)(param_2 + 0x18),UVar4.unknown);
  iVar3 = *(int *)(param_2 + 0x1c);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)iVar3 + 8));
  _swift_release(*(undefined8 *)((long)param_1 + (long)iVar3 + 0x10));
  iVar3 = *(int *)(param_2 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)iVar3 + 8));
  _swift_release(*(undefined8 *)((long)param_1 + (long)iVar3 + 0x10));
  iVar3 = *(int *)(param_2 + 0x24);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)iVar3 + 8));
  _swift_release(*(undefined8 *)((long)param_1 + (long)iVar3 + 0x10));
  iVar3 = *(int *)(param_2 + 0x28);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)iVar3 + 8));
  _swift_release(*(undefined8 *)((long)param_1 + (long)iVar3 + 0x10));
  iVar3 = *(int *)(param_2 + 0x2c);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)iVar3 + 8));
  _swift_release(*(undefined8 *)((long)param_1 + (long)iVar3 + 0x10));
  _swift_release(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x30) + 8));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x34));
  _swift_bridgeObjectRelease(*puVar1);
  _swift_release(puVar1[1]);
  _swift_release(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x38) + 8));
  _swift_release(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x3c) + 8));
  lVar2 = (long)param_1 + (long)*(int *)(param_2 + 0x40);
  lVar5 = 0;
  FUN_1002f58e8();
  lVar6 = lVar2;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar2,1,lVar5);
  if ((int)lVar6 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x18));
    (*pcVar8)(lVar2 + *(int *)(lVar5 + 0x18),UVar4.unknown);
    (*pcVar8)(lVar2 + *(int *)(lVar5 + 0x1c),UVar4.unknown);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x20) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x24) + 8));
  }
  puVar7 = &DAT_10055b0f0;
  FUN_100002f94(&DAT_10055b0f0,&DAT_10042f918);
  _swift_release(*(undefined8 *)(lVar2 + *(int *)(puVar7 + 0x1c)));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x44));
  _swift_bridgeObjectRelease(*puVar1);
  _swift_release(puVar1[1]);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x48));
  _swift_release(*param_1);
  _swift_release(param_1[1]);
  return;
}

