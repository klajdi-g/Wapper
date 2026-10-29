// rea decompile_all
// name: FUN_10038765c
// address: 0x10038765c
// body: available
// range: 0x10038765c-0x10038785b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100387858 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038765c(void)

{
  long lVar1;
  long lVar2;
  UUID UVar3;
  undefined *puVar4;
  long lVar5;
  DismissAction DVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  
  lVar2 = 0;
  FUN_100386f18();
  uVar9 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff));
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  pcVar10 = *(code **)(*(long *)(UVar3.unknown + -8) + 8);
  (*pcVar10)(lVar1,UVar3.unknown);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar2 + 0x14)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar2 + 0x18)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar2 + 0x1c)));
  lVar8 = (long)*(int *)(lVar2 + 0x20);
  puVar4 = &DAT_10055c948;
  FUN_100002f94(&DAT_10055c948,&DAT_100435240);
  lVar5 = lVar1 + lVar8;
  _swift_getEnumCaseMultiPayload(lVar5,puVar4);
  if ((int)lVar5 == 1) {
    DVar6 = SwiftUI::DismissAction::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar6.unknown + -8) + 8))(lVar1 + lVar8,DVar6.unknown);
  }
  else {
    _swift_release(*(undefined8 *)(lVar1 + lVar8));
  }
  lVar5 = lVar1 + *(int *)(lVar2 + 0x24);
  lVar7 = 0;
  FUN_1001d537c();
  lVar8 = lVar5;
  (**(code **)(*(long *)(lVar7 + -8) + 0x30))(lVar5,1,lVar7);
  if (((int)lVar8 == 0) &&
     (lVar8 = lVar5, _swift_getEnumCaseMultiPayload(lVar5,lVar7), (int)lVar8 == 1)) {
    (*pcVar10)(lVar5,UVar3.unknown);
  }
  puVar4 = &DAT_10055dca8;
  FUN_100002f94(&DAT_10055dca8,&DAT_1004334a8);
  _swift_release(*(undefined8 *)(lVar5 + *(int *)(puVar4 + 0x1c)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar2 + 0x28) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar2 + 0x2c) + 8));
  lVar5 = lVar1 + *(int *)(lVar2 + 0x30);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 8));
  _swift_release(*(undefined8 *)(lVar5 + 0x10));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar2 + 0x34) + 8));
  lVar5 = lVar1 + *(int *)(lVar2 + 0x38);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 8));
  _swift_release(*(undefined8 *)(lVar5 + 0x10));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar2 + 0x3c) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar2 + 0x40) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar2 + 0x44) + 8));
  _swift_deallocObject();
  return;
}

