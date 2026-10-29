// rea decompile_all
// name: thunk_FUN_1003a3e18
// address: 0x1003a7df0
// body: available
// range: 0x1003a7df0-0x1003a7df3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_1003a3e18(void)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  UUID UVar5;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  lVar4 = 0;
  FUN_10039c2bc();
  lVar11 = *(long *)(lVar4 + -8);
  uVar9 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar10 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  puVar1 = (undefined8 *)(unaff_x20 + uVar10);
  _swift_release(*puVar1);
  _swift_release(puVar1[2]);
  lVar2 = (long)puVar1 + (long)*(int *)(lVar4 + 0x18);
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  lVar12 = *(long *)(UVar5.unknown + -8);
  pcVar7 = *(code **)(lVar12 + 0x30);
  lVar8 = lVar2;
  (*pcVar7)(lVar2,1,UVar5.unknown);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar12 + 8))(lVar2,UVar5.unknown);
  }
  puVar6 = &DAT_10054dd90;
  FUN_100002f94(&DAT_10054dd90,&DAT_10041ec00);
  _swift_release(*(undefined8 *)(lVar2 + *(int *)(puVar6 + 0x1c)));
  iVar3 = *(int *)(lVar4 + 0x1c);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)iVar3 + 8));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)iVar3 + 0x10));
  lVar2 = (long)puVar1 + (long)*(int *)(lVar4 + 0x20);
  lVar8 = lVar2;
  (*pcVar7)(lVar2,1,UVar5.unknown);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar12 + 8))(lVar2,UVar5.unknown);
  }
  lVar8 = *(long *)(lVar11 + 0x40);
  _swift_release(*(undefined8 *)(lVar2 + *(int *)(puVar6 + 0x1c)));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x24) + 8));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x28) + 8));
  puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x2c));
  _swift_bridgeObjectRelease(*puVar1);
  _swift_release(puVar1[1]);
  _swift_deallocObject(unaff_x20,lVar8 + uVar10,uVar9 | 7);
  return;
}

