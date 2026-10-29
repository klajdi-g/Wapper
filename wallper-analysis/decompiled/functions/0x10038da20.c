// rea decompile_all
// name: FUN_10038da20
// address: 0x10038da20
// body: available
// range: 0x10038da20-0x10038db57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10038db54 to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038da20(long param_1,long param_2)

{
  int iVar1;
  UUID UVar2;
  long lVar3;
  Date DVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  pcVar6 = *(code **)(*(long *)(UVar2.unknown + -8) + 8);
  (*pcVar6)(param_1,UVar2.unknown);
  lVar3 = 0;
  FUN_10025ee04();
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x14) + 8));
  iVar1 = *(int *)(lVar3 + 0x18);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar4.unknown + -8) + 8))(param_1 + iVar1,DVar4.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x20)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x34)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14)));
  iVar1 = *(int *)(param_2 + 0x18);
  lVar5 = 0;
  FUN_1001d537c();
  lVar3 = param_1 + iVar1;
  _swift_getEnumCaseMultiPayload(lVar3,lVar5);
  if ((int)lVar3 == 1) {
    (*pcVar6)(param_1 + iVar1,UVar2.unknown);
  }
  lVar7 = (long)*(int *)(param_2 + 0x1c);
  lVar3 = param_1 + lVar7;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar3,1,lVar5);
  if ((int)lVar3 == 0) {
    lVar3 = param_1 + lVar7;
    _swift_getEnumCaseMultiPayload(lVar3,lVar5);
    if ((int)lVar3 == 1) {
      (*pcVar6)(param_1 + lVar7,UVar2.unknown);
    }
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x20)));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24) + 8));
  return;
}

