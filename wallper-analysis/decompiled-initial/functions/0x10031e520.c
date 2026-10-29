// rea decompile_all
// name: FUN_10031e520
// address: 0x10031e520
// body: available
// range: 0x10031e520-0x10031e683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10031e680 to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10031e520(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  URL UVar5;
  Date DVar6;
  code *pcVar7;
  long lVar8;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  lVar1 = param_1 + *(int *)(param_2 + 0x14);
  lVar3 = 0;
  FUN_10040211c();
  lVar4 = lVar1;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar1,1,lVar3);
  if ((int)lVar4 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
    iVar2 = *(int *)(lVar3 + 0x14);
    UVar5 = Foundation::URL::typeMetadataAccessor();
    lVar8 = *(long *)(UVar5.unknown + -8);
    pcVar7 = *(code **)(lVar8 + 8);
    (*pcVar7)(lVar1 + iVar2,UVar5.unknown);
    iVar2 = *(int *)(lVar3 + 0x18);
    lVar4 = lVar1 + iVar2;
    (**(code **)(lVar8 + 0x30))(lVar4,1,UVar5.unknown);
    if ((int)lVar4 == 0) {
      (*pcVar7)(lVar1 + iVar2,UVar5.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x1c) + 8));
    iVar2 = *(int *)(lVar3 + 0x2c);
    DVar6 = Foundation::Date::typeMetadataAccessor();
    lVar8 = *(long *)(DVar6.unknown + -8);
    lVar4 = lVar1 + iVar2;
    (**(code **)(lVar8 + 0x30))(lVar4,1,DVar6.unknown);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar8 + 8))(lVar1 + iVar2,DVar6.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x34) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x3c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x44)));
  }
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c) + 8));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x20)));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24) + 8));
  return;
}

