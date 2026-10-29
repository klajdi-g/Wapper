// rea decompile_all
// name: FUN_100385d28
// address: 0x100385d28
// body: available
// range: 0x100385d28-0x100385eeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100385ee8 to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100385d28(long param_1,long param_2)

{
  UUID UVar1;
  undefined *puVar2;
  long lVar3;
  DismissAction DVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  pcVar7 = *(code **)(*(long *)(UVar1.unknown + -8) + 8);
  (*pcVar7)(param_1,UVar1.unknown);
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14)));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18)));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c)));
  lVar6 = (long)*(int *)(param_2 + 0x20);
  puVar2 = &DAT_10055c948;
  FUN_100002f94(&DAT_10055c948,&DAT_100435240);
  lVar3 = param_1 + lVar6;
  _swift_getEnumCaseMultiPayload(lVar3,puVar2);
  if ((int)lVar3 == 1) {
    DVar4 = SwiftUI::DismissAction::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar4.unknown + -8) + 8))(param_1 + lVar6,DVar4.unknown);
  }
  else {
    _swift_release(*(undefined8 *)(param_1 + lVar6));
  }
  lVar3 = param_1 + *(int *)(param_2 + 0x24);
  lVar5 = 0;
  FUN_1001d537c();
  lVar6 = lVar3;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar3,1,lVar5);
  if (((int)lVar6 == 0) &&
     (lVar6 = lVar3, _swift_getEnumCaseMultiPayload(lVar3,lVar5), (int)lVar6 == 1)) {
    (*pcVar7)(lVar3,UVar1.unknown);
  }
  puVar2 = &DAT_10055dca8;
  FUN_100002f94(&DAT_10055dca8,&DAT_1004334a8);
  _swift_release(*(undefined8 *)(lVar3 + *(int *)(puVar2 + 0x1c)));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x28) + 8));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x2c) + 8));
  lVar3 = param_1 + *(int *)(param_2 + 0x30);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 8));
  _swift_release(*(undefined8 *)(lVar3 + 0x10));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x34) + 8));
  lVar3 = param_1 + *(int *)(param_2 + 0x38);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 8));
  _swift_release(*(undefined8 *)(lVar3 + 0x10));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x3c) + 8));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x40) + 8));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x44) + 8));
  return;
}

