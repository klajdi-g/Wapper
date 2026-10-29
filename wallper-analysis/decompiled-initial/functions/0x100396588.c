// rea decompile_all
// name: FUN_100396588
// address: 0x100396588
// body: available
// range: 0x100396588-0x10039674b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100396748 to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100396588(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  URL UVar4;
  Date DVar5;
  UUID UVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  
  lVar1 = param_1 + *(int *)(param_2 + 0x14);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  lVar3 = 0;
  FUN_10040211c();
  iVar2 = *(int *)(lVar3 + 0x14);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar4.unknown + -8);
  pcVar8 = *(code **)(lVar9 + 8);
  (*pcVar8)(lVar1 + iVar2,UVar4.unknown);
  iVar2 = *(int *)(lVar3 + 0x18);
  lVar7 = lVar1 + iVar2;
  (**(code **)(lVar9 + 0x30))(lVar7,1,UVar4.unknown);
  if ((int)lVar7 == 0) {
    (*pcVar8)(lVar1 + iVar2,UVar4.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x1c) + 8));
  iVar2 = *(int *)(lVar3 + 0x2c);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar5.unknown + -8);
  lVar7 = lVar1 + iVar2;
  (**(code **)(lVar9 + 0x30))(lVar7,1,DVar5.unknown);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar9 + 8))(lVar1 + iVar2,DVar5.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x34) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x3c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x44)));
  lVar1 = param_1 + *(int *)(param_2 + 0x18);
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar6.unknown + -8) + 8))(lVar1,UVar6.unknown);
  lVar7 = 0;
  FUN_10025ee04();
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar7 + 0x14) + 8));
  (**(code **)(lVar9 + 8))(lVar1 + *(int *)(lVar7 + 0x18),DVar5.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar7 + 0x20)));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar7 + 0x34)));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x20)));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24)));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x28)));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x2c) + 8));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x30) + 8));
  return;
}

