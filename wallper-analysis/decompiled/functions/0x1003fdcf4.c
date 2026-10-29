// rea decompile_all
// name: FUN_1003fdcf4
// address: 0x1003fdcf4
// body: available
// range: 0x1003fdcf4-0x1003fdf7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003fdcf4(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  Date DVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x58));
  lVar4 = param_1 + *(int *)(param_2 + 0x28);
  lVar2 = 0;
  FUN_1003fdce0();
  lVar5 = lVar4;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(lVar4,1,lVar2);
  if ((int)lVar5 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x18));
    iVar1 = *(int *)(lVar2 + 0x20);
    DVar3 = Foundation::Date::typeMetadataAccessor();
    lVar6 = *(long *)(DVar3.unknown + -8);
    pcVar7 = *(code **)(lVar6 + 0x30);
    lVar5 = lVar4 + iVar1;
    (*pcVar7)(lVar5,1,DVar3.unknown);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar6 + 8))(lVar4 + iVar1,DVar3.unknown);
    }
    iVar1 = *(int *)(lVar2 + 0x2c);
    lVar5 = lVar4 + iVar1;
    (*pcVar7)(lVar5,1,DVar3.unknown);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar6 + 8))(lVar4 + iVar1,DVar3.unknown);
    }
    iVar1 = *(int *)(lVar2 + 0x30);
    lVar5 = lVar4 + iVar1;
    (*pcVar7)(lVar5,1,DVar3.unknown);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar6 + 8))(lVar4 + iVar1,DVar3.unknown);
    }
  }
  iVar1 = *(int *)(param_2 + 0x30);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar3.unknown + -8);
  pcVar7 = *(code **)(lVar5 + 0x30);
  lVar4 = param_1 + iVar1;
  (*pcVar7)(lVar4,1,DVar3.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar5 + 8))(param_1 + iVar1,DVar3.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x34) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x3c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x40) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x48)));
  iVar1 = *(int *)(param_2 + 0x50);
  lVar4 = param_1 + iVar1;
  (*pcVar7)(lVar4,1,DVar3.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar5 + 8))(param_1 + iVar1,DVar3.unknown);
  }
  iVar1 = *(int *)(param_2 + 0x54);
  lVar4 = param_1 + iVar1;
  (*pcVar7)(lVar4,1,DVar3.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar5 + 8))(param_1 + iVar1,DVar3.unknown);
  }
  iVar1 = *(int *)(param_2 + 0x58);
  lVar4 = param_1 + iVar1;
  (*pcVar7)(lVar4,1,DVar3.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar5 + 8))(param_1 + iVar1,DVar3.unknown);
  }
  iVar1 = *(int *)(param_2 + 0x5c);
  lVar4 = param_1 + iVar1;
  (*pcVar7)(lVar4,1,DVar3.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar5 + 8))(param_1 + iVar1,DVar3.unknown);
  }
  iVar1 = *(int *)(param_2 + 0x60);
  lVar4 = param_1 + iVar1;
  (*pcVar7)(lVar4,1,DVar3.unknown);
  if ((int)lVar4 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001003fdf78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))(param_1 + iVar1,DVar3.unknown);
  return;
}

