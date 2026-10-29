// rea decompile_all
// name: thunk_FUN_10012227c
// address: 0x1001221f0
// body: available
// range: 0x1001221f0-0x1001221f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_10012227c(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  URL UVar5;
  long lVar6;
  Date DVar7;
  long unaff_x20;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  
  lVar3 = 0;
  FUN_10011c000();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  lVar1 = unaff_x20 + (uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  lVar4 = 0;
  FUN_10040211c();
  iVar2 = *(int *)(lVar4 + 0x14);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar5.unknown + -8);
  pcVar10 = *(code **)(lVar9 + 8);
  (*pcVar10)(lVar1 + iVar2,UVar5.unknown);
  iVar2 = *(int *)(lVar4 + 0x18);
  lVar6 = lVar1 + iVar2;
  (**(code **)(lVar9 + 0x30))(lVar6,1,UVar5.unknown);
  if ((int)lVar6 == 0) {
    (*pcVar10)(lVar1 + iVar2,UVar5.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x1c) + 8));
  iVar2 = *(int *)(lVar4 + 0x2c);
  DVar7 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar7.unknown + -8);
  lVar6 = lVar1 + iVar2;
  (**(code **)(lVar9 + 0x30))(lVar6,1,DVar7.unknown);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar9 + 8))(lVar1 + iVar2,DVar7.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x34) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x3c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x44)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x1c)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x20) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x24) + 8));
  _swift_deallocObject();
  return;
}

