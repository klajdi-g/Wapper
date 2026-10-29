// rea decompile_all
// name: FUN_1002bc9d0
// address: 0x1002bc9d0
// body: available
// range: 0x1002bc9d0-0x1002bccef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002bccec to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002bc9d0(undefined8 *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  Date DVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  _swift_release(*param_1);
  _swift_release(param_1[2]);
  _swift_release(param_1[5]);
  _swift_release(param_1[7]);
  lVar1 = (long)param_1 + (long)*(int *)(param_2 + 0x20);
  lVar3 = 0;
  FUN_100400294();
  lVar4 = lVar1;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar1,1,lVar3);
  if ((int)lVar4 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x28));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x38));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x48));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x58));
    lVar4 = lVar1 + *(int *)(lVar3 + 0x28);
    lVar5 = 0;
    FUN_1003fdce0();
    lVar8 = lVar4;
    (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar4,1,lVar5);
    if ((int)lVar8 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x18));
      iVar2 = *(int *)(lVar5 + 0x20);
      DVar6 = Foundation::Date::typeMetadataAccessor();
      lVar9 = *(long *)(DVar6.unknown + -8);
      pcVar10 = *(code **)(lVar9 + 0x30);
      lVar8 = lVar4 + iVar2;
      (*pcVar10)(lVar8,1,DVar6.unknown);
      if ((int)lVar8 == 0) {
        (**(code **)(lVar9 + 8))(lVar4 + iVar2,DVar6.unknown);
      }
      iVar2 = *(int *)(lVar5 + 0x2c);
      lVar8 = lVar4 + iVar2;
      (*pcVar10)(lVar8,1,DVar6.unknown);
      if ((int)lVar8 == 0) {
        (**(code **)(lVar9 + 8))(lVar4 + iVar2,DVar6.unknown);
      }
      iVar2 = *(int *)(lVar5 + 0x30);
      lVar8 = lVar4 + iVar2;
      (*pcVar10)(lVar8,1,DVar6.unknown);
      if ((int)lVar8 == 0) {
        (**(code **)(lVar9 + 8))(lVar4 + iVar2,DVar6.unknown);
      }
    }
    iVar2 = *(int *)(lVar3 + 0x30);
    DVar6 = Foundation::Date::typeMetadataAccessor();
    lVar8 = *(long *)(DVar6.unknown + -8);
    pcVar10 = *(code **)(lVar8 + 0x30);
    lVar4 = lVar1 + iVar2;
    (*pcVar10)(lVar4,1,DVar6.unknown);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar8 + 8))(lVar1 + iVar2,DVar6.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x34) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x3c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x40) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x48)));
    iVar2 = *(int *)(lVar3 + 0x50);
    lVar4 = lVar1 + iVar2;
    (*pcVar10)(lVar4,1,DVar6.unknown);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar8 + 8))(lVar1 + iVar2,DVar6.unknown);
    }
    iVar2 = *(int *)(lVar3 + 0x54);
    lVar4 = lVar1 + iVar2;
    (*pcVar10)(lVar4,1,DVar6.unknown);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar8 + 8))(lVar1 + iVar2,DVar6.unknown);
    }
    iVar2 = *(int *)(lVar3 + 0x58);
    lVar4 = lVar1 + iVar2;
    (*pcVar10)(lVar4,1,DVar6.unknown);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar8 + 8))(lVar1 + iVar2,DVar6.unknown);
    }
    iVar2 = *(int *)(lVar3 + 0x5c);
    lVar4 = lVar1 + iVar2;
    (*pcVar10)(lVar4,1,DVar6.unknown);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar8 + 8))(lVar1 + iVar2,DVar6.unknown);
    }
    iVar2 = *(int *)(lVar3 + 0x60);
    lVar4 = lVar1 + iVar2;
    (*pcVar10)(lVar4,1,DVar6.unknown);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar8 + 8))(lVar1 + iVar2,DVar6.unknown);
    }
  }
  puVar7 = &DAT_10055a2b0;
  FUN_100002f94(&DAT_10055a2b0,&DAT_10042e0e0);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(puVar7 + 0x1c)));
  _swift_release(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x24) + 8));
  _swift_release(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x28) + 8));
  iVar2 = *(int *)(param_2 + 0x2c);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)iVar2 + 8));
  _swift_release(*(undefined8 *)((long)param_1 + (long)iVar2 + 0x10));
  return;
}

