// rea decompile_all
// name: FUN_1003093a4
// address: 0x1003093a4
// body: available
// range: 0x1003093a4-0x1003094f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003094f4 to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003093a4(undefined8 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  URL UVar3;
  long lVar4;
  long lVar5;
  Date DVar6;
  code *pcVar7;
  long lVar8;
  
  _swift_release(*param_1);
  _swift_release(param_1[2]);
  iVar1 = *(int *)(param_2 + 0x18);
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar3.unknown + -8);
  pcVar7 = *(code **)(lVar8 + 8);
  (*pcVar7)((long)param_1 + (long)iVar1,UVar3.unknown);
  iVar1 = *(int *)(param_2 + 0x1c);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)iVar1 + 8));
  lVar4 = 0;
  FUN_10040211c();
  (*pcVar7)((long)param_1 + (long)*(int *)(lVar4 + 0x14) + (long)iVar1,UVar3.unknown);
  iVar2 = *(int *)(lVar4 + 0x18);
  lVar5 = (long)param_1 + (long)iVar2 + (long)iVar1;
  (**(code **)(lVar8 + 0x30))(lVar5,1,UVar3.unknown);
  if ((int)lVar5 == 0) {
    (*pcVar7)((long)param_1 + (long)iVar2 + (long)iVar1,UVar3.unknown);
  }
  _swift_bridgeObjectRelease
            (*(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x1c) + (long)iVar1 + 8));
  iVar2 = *(int *)(lVar4 + 0x2c);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar6.unknown + -8);
  lVar5 = (long)param_1 + (long)iVar2 + (long)iVar1;
  (**(code **)(lVar8 + 0x30))(lVar5,1,DVar6.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar8 + 8))((long)param_1 + (long)iVar2 + (long)iVar1,DVar6.unknown);
  }
  _swift_bridgeObjectRelease
            (*(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x34) + (long)iVar1 + 8));
  _swift_bridgeObjectRelease
            (*(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x3c) + (long)iVar1 + 8));
  _swift_bridgeObjectRelease
            (*(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x44) + (long)iVar1));
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x20));
  _swift_release(*param_1);
  _swift_release(param_1[1]);
  _swift_bridgeObjectRelease(param_1[2]);
  return;
}

