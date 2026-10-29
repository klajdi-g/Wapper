// rea decompile_all
// name: FUN_1002aef8c
// address: 0x1002aef8c
// body: available
// range: 0x1002aef8c-0x1002af137 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002af134 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002aef8c(void)

{
  long lVar1;
  int iVar2;
  URL UVar3;
  long lVar4;
  Date DVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar3.unknown + -8);
  uVar9 = (ulong)*(byte *)(lVar11 + 0x50) + 0x38 &
          ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff);
  uVar10 = *(long *)(lVar11 + 0x40) + uVar9 + 7 & 0xfffffffffffffff8;
  lVar4 = 0;
  FUN_10040211c();
  lVar6 = *(long *)(lVar4 + -8);
  uVar8 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar8 = uVar10 + uVar8 + 8 & (uVar8 ^ 0xffffffffffffffff);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  pcVar12 = *(code **)(lVar11 + 8);
  (*pcVar12)(unaff_x20 + uVar9,UVar3.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + uVar10));
  lVar1 = unaff_x20 + uVar8;
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  (*pcVar12)(lVar1 + *(int *)(lVar4 + 0x14),UVar3.unknown);
  iVar2 = *(int *)(lVar4 + 0x18);
  lVar7 = lVar1 + iVar2;
  (**(code **)(lVar11 + 0x30))(lVar7,1,UVar3.unknown);
  if ((int)lVar7 == 0) {
    (*pcVar12)(lVar1 + iVar2,UVar3.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x1c) + 8));
  iVar2 = *(int *)(lVar4 + 0x2c);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar11 = *(long *)(DVar5.unknown + -8);
  lVar7 = lVar1 + iVar2;
  (**(code **)(lVar11 + 0x30))(lVar7,1,DVar5.unknown);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar11 + 8))(lVar1 + iVar2,DVar5.unknown);
  }
  lVar7 = *(long *)(lVar6 + 0x40);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x34) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x3c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x44)));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + (uVar8 + lVar7 + 7 & 0xfffffffffffffff8) + 8));
  _swift_deallocObject();
  return;
}

