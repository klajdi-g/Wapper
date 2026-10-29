// rea decompile_all
// name: FUN_1002ff970
// address: 0x1002ff970
// body: available
// range: 0x1002ff970-0x1002ffae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002ffae0 to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ff970(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  URL UVar5;
  long lVar6;
  Date DVar7;
  code *pcVar8;
  long lVar9;
  
  _swift_release(*param_1);
  _swift_release(param_1[2]);
  _swift_release(param_1[5]);
  iVar2 = *(int *)(param_2 + 0x1c);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)iVar2 + 8));
  lVar4 = 0;
  FUN_10040211c();
  iVar3 = *(int *)(lVar4 + 0x14);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar5.unknown + -8);
  pcVar8 = *(code **)(lVar9 + 8);
  (*pcVar8)((long)param_1 + (long)iVar3 + (long)iVar2,UVar5.unknown);
  iVar3 = *(int *)(lVar4 + 0x18);
  lVar6 = (long)param_1 + (long)iVar3 + (long)iVar2;
  (**(code **)(lVar9 + 0x30))(lVar6,1,UVar5.unknown);
  if ((int)lVar6 == 0) {
    (*pcVar8)((long)param_1 + (long)iVar3 + (long)iVar2,UVar5.unknown);
  }
  _swift_bridgeObjectRelease
            (*(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x1c) + (long)iVar2 + 8));
  iVar3 = *(int *)(lVar4 + 0x2c);
  DVar7 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar7.unknown + -8);
  lVar6 = (long)param_1 + (long)iVar3 + (long)iVar2;
  (**(code **)(lVar9 + 0x30))(lVar6,1,DVar7.unknown);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar9 + 8))((long)param_1 + (long)iVar3 + (long)iVar2,DVar7.unknown);
  }
  _swift_bridgeObjectRelease
            (*(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x34) + (long)iVar2 + 8));
  _swift_bridgeObjectRelease
            (*(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x3c) + (long)iVar2 + 8));
  _swift_bridgeObjectRelease
            (*(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x44) + (long)iVar2));
  _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x20) + 8));
  _swift_release(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x24) + 8));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x28));
  _swift_bridgeObjectRelease(*puVar1);
  _swift_release(puVar1[1]);
  _swift_release(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x2c) + 8));
  return;
}

