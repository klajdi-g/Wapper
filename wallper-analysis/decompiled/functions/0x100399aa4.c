// rea decompile_all
// name: thunk_FUN_100399abc
// address: 0x100399aa4
// body: available
// range: 0x100399aa4-0x100399aa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_100399abc(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  URL UVar6;
  Date DVar7;
  UUID UVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  
  lVar4 = 0;
  FUN_10038ffac();
  lVar13 = *(long *)(lVar4 + -8);
  uVar11 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar10 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
  lVar1 = unaff_x20 + uVar10;
  lVar2 = lVar1 + *(int *)(lVar4 + 0x14);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
  lVar5 = 0;
  FUN_10040211c();
  iVar3 = *(int *)(lVar5 + 0x14);
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar12 = *(long *)(UVar6.unknown + -8);
  pcVar14 = *(code **)(lVar12 + 8);
  (*pcVar14)(lVar2 + iVar3,UVar6.unknown);
  iVar3 = *(int *)(lVar5 + 0x18);
  lVar9 = lVar2 + iVar3;
  (**(code **)(lVar12 + 0x30))(lVar9,1,UVar6.unknown);
  if ((int)lVar9 == 0) {
    (*pcVar14)(lVar2 + iVar3,UVar6.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x1c) + 8));
  iVar3 = *(int *)(lVar5 + 0x2c);
  DVar7 = Foundation::Date::typeMetadataAccessor();
  lVar12 = *(long *)(DVar7.unknown + -8);
  lVar9 = lVar2 + iVar3;
  (**(code **)(lVar12 + 0x30))(lVar9,1,DVar7.unknown);
  if ((int)lVar9 == 0) {
    (**(code **)(lVar12 + 8))(lVar2 + iVar3,DVar7.unknown);
  }
  lVar13 = *(long *)(lVar13 + 0x40);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x34) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x3c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x44)));
  lVar2 = lVar1 + *(int *)(lVar4 + 0x18);
  UVar8 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar8.unknown + -8) + 8))(lVar2,UVar8.unknown);
  lVar9 = 0;
  FUN_10025ee04();
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar9 + 0x14) + 8));
  (**(code **)(lVar12 + 8))(lVar2 + *(int *)(lVar9 + 0x18),DVar7.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar9 + 0x20)));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar9 + 0x34)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x20)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x24)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x28)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x2c) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x30) + 8));
  _swift_deallocObject(unaff_x20,lVar13 + uVar10,uVar11 | 7);
  return;
}

