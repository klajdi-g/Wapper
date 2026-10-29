// rea decompile_all
// name: FUN_100301d20
// address: 0x100301d20
// body: available
// range: 0x100301d20-0x100301ed3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100301ed0 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100301d20(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  URL UVar7;
  Date DVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  
  lVar5 = 0;
  FUN_1003009dc();
  lVar13 = *(long *)(lVar5 + -8);
  uVar11 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar9 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
  puVar1 = (undefined8 *)(unaff_x20 + uVar9);
  _swift_release(*puVar1);
  _swift_release(puVar1[2]);
  _swift_release(puVar1[5]);
  iVar3 = *(int *)(lVar5 + 0x1c);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)iVar3 + 8));
  lVar6 = 0;
  FUN_10040211c();
  iVar4 = *(int *)(lVar6 + 0x14);
  UVar7 = Foundation::URL::typeMetadataAccessor();
  lVar12 = *(long *)(UVar7.unknown + -8);
  pcVar14 = *(code **)(lVar12 + 8);
  (*pcVar14)((long)puVar1 + (long)iVar4 + (long)iVar3,UVar7.unknown);
  iVar4 = *(int *)(lVar6 + 0x18);
  lVar10 = (long)puVar1 + (long)iVar4 + (long)iVar3;
  (**(code **)(lVar12 + 0x30))(lVar10,1,UVar7.unknown);
  if ((int)lVar10 == 0) {
    (*pcVar14)((long)puVar1 + (long)iVar4 + (long)iVar3,UVar7.unknown);
  }
  _swift_bridgeObjectRelease
            (*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x1c) + (long)iVar3 + 8));
  iVar4 = *(int *)(lVar6 + 0x2c);
  DVar8 = Foundation::Date::typeMetadataAccessor();
  lVar12 = *(long *)(DVar8.unknown + -8);
  lVar10 = (long)puVar1 + (long)iVar4 + (long)iVar3;
  (**(code **)(lVar12 + 0x30))(lVar10,1,DVar8.unknown);
  if ((int)lVar10 == 0) {
    (**(code **)(lVar12 + 8))((long)puVar1 + (long)iVar4 + (long)iVar3,DVar8.unknown);
  }
  lVar10 = *(long *)(lVar13 + 0x40);
  _swift_bridgeObjectRelease
            (*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x34) + (long)iVar3 + 8));
  _swift_bridgeObjectRelease
            (*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x3c) + (long)iVar3 + 8));
  _swift_bridgeObjectRelease
            (*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x44) + (long)iVar3));
  _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x20) + 8));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x24) + 8));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x28));
  _swift_bridgeObjectRelease(*puVar2);
  _swift_release(puVar2[1]);
  _swift_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x2c) + 8));
  _swift_deallocObject(unaff_x20,lVar10 + uVar9,uVar11 | 7);
  return;
}

