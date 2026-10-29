// rea decompile_all
// name: thunk_FUN_100069e50
// address: 0x100069e28
// body: available
// range: 0x100069e28-0x100069e2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_100069e50(void)

{
  undefined8 *puVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  UUID UVar8;
  undefined *puVar9;
  Date DVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  long lVar15;
  
  lVar6 = 0;
  FUN_10006866c();
  lVar11 = *(long *)(lVar6 + -8);
  bVar3 = *(byte *)(lVar11 + 0x50);
  uVar14 = (ulong)bVar3 + 0x10 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  lVar7 = 0;
  FUN_10025ee04();
  puVar1 = (undefined8 *)(unaff_x20 + uVar14);
  _swift_release(*puVar1);
  _swift_release(puVar1[1]);
  _swift_release(puVar1[4]);
  _swift_release(puVar1[6]);
  _swift_release(puVar1[8]);
  lVar2 = (long)puVar1 + (long)*(int *)(lVar6 + 0x24);
  UVar8 = Foundation::UUID::typeMetadataAccessor();
  lVar12 = *(long *)(UVar8.unknown + -8);
  pcVar13 = *(code **)(lVar12 + 0x30);
  lVar15 = lVar2;
  (*pcVar13)(lVar2,1,UVar8.unknown);
  if ((int)lVar15 == 0) {
    (**(code **)(lVar12 + 8))(lVar2,UVar8.unknown);
  }
  puVar9 = &DAT_10054dd90;
  FUN_100002f94(&DAT_10054dd90,&DAT_10041ec00);
  _swift_release(*(undefined8 *)(lVar2 + *(int *)(puVar9 + 0x1c)));
  lVar2 = (long)puVar1 + (long)*(int *)(lVar6 + 0x28);
  lVar15 = lVar2;
  (*pcVar13)(lVar2,1,UVar8.unknown);
  if ((int)lVar15 == 0) {
    (**(code **)(lVar12 + 8))(lVar2,UVar8.unknown);
  }
  bVar4 = *(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar14 = *(long *)(lVar11 + 0x40) + (ulong)bVar4 + uVar14 & ((ulong)bVar4 ^ 0xffffffffffffffff);
  lVar15 = *(long *)(*(long *)(lVar7 + -8) + 0x40);
  _swift_release(*(undefined8 *)(lVar2 + *(int *)(puVar9 + 0x1c)));
  iVar5 = *(int *)(lVar6 + 0x2c);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)iVar5 + 8));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)iVar5 + 0x10));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x30) + 8));
  lVar2 = unaff_x20 + uVar14;
  (**(code **)(lVar12 + 8))(lVar2,UVar8.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar7 + 0x14) + 8));
  iVar5 = *(int *)(lVar7 + 0x18);
  DVar10 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar10.unknown + -8) + 8))(lVar2 + iVar5,DVar10.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar7 + 0x20)));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar7 + 0x34)));
  _swift_deallocObject(unaff_x20,uVar14 + lVar15,bVar3 | bVar4 | 7);
  return;
}

