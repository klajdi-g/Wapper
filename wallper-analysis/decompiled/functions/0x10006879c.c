// rea decompile_all
// name: thunk_FUN_1000687e0
// address: 0x10006879c
// body: available
// range: 0x10006879c-0x10006879f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_1000687e0(void)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  UUID UVar5;
  long lVar6;
  undefined *puVar7;
  long unaff_x20;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  
  lVar4 = 0;
  FUN_10006866c();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  puVar1 = (undefined8 *)(unaff_x20 + (uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff)));
  _swift_release(*puVar1);
  _swift_release(puVar1[1]);
  _swift_release(puVar1[4]);
  _swift_release(puVar1[6]);
  _swift_release(puVar1[8]);
  lVar2 = (long)puVar1 + (long)*(int *)(lVar4 + 0x24);
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  lVar10 = *(long *)(UVar5.unknown + -8);
  pcVar9 = *(code **)(lVar10 + 0x30);
  lVar6 = lVar2;
  (*pcVar9)(lVar2,1,UVar5.unknown);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar10 + 8))(lVar2,UVar5.unknown);
  }
  puVar7 = &DAT_10054dd90;
  FUN_100002f94(&DAT_10054dd90,&DAT_10041ec00);
  _swift_release(*(undefined8 *)(lVar2 + *(int *)(puVar7 + 0x1c)));
  lVar2 = (long)puVar1 + (long)*(int *)(lVar4 + 0x28);
  lVar6 = lVar2;
  (*pcVar9)(lVar2,1,UVar5.unknown);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar10 + 8))(lVar2,UVar5.unknown);
  }
  _swift_release(*(undefined8 *)(lVar2 + *(int *)(puVar7 + 0x1c)));
  iVar3 = *(int *)(lVar4 + 0x2c);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)iVar3 + 8));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)iVar3 + 0x10));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x30) + 8));
  _swift_deallocObject();
  return;
}

