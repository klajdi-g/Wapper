// rea decompile_all
// name: FUN_100037ce4
// address: 0x100037ce4
// body: available
// range: 0x100037ce4-0x100037fbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100037ce4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  URL UVar9;
  long lVar10;
  undefined *puVar11;
  Date DVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  code *pcVar17;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  lVar8 = 0;
  FUN_10040211c();
  iVar7 = *(int *)(lVar8 + 0x14);
  UVar9 = Foundation::URL::typeMetadataAccessor();
  lVar15 = *(long *)(UVar9.unknown + -8);
  pcVar17 = *(code **)(lVar15 + 0x10);
  _swift_bridgeObjectRetain(uVar5);
  (*pcVar17)((long)param_1 + (long)iVar7,(long)param_2 + (long)iVar7,UVar9.unknown);
  lVar13 = (long)*(int *)(lVar8 + 0x18);
  lVar10 = (long)param_2 + lVar13;
  (**(code **)(lVar15 + 0x30))(lVar10,1,UVar9.unknown);
  if ((int)lVar10 == 0) {
    (*pcVar17)((long)param_1 + lVar13,(long)param_2 + lVar13,UVar9.unknown);
    (**(code **)(lVar15 + 0x38))((long)param_1 + lVar13,0,1,UVar9.unknown);
  }
  else {
    puVar11 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x1c));
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x20));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x24));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x28));
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = *puVar2;
  lVar13 = (long)*(int *)(lVar8 + 0x2c);
  DVar12 = Foundation::Date::typeMetadataAccessor();
  lVar15 = *(long *)(DVar12.unknown + -8);
  pcVar17 = *(code **)(lVar15 + 0x30);
  _swift_bridgeObjectRetain(uVar5);
  lVar10 = (long)param_2 + lVar13;
  (*pcVar17)(lVar10,1,DVar12.unknown);
  if ((int)lVar10 == 0) {
    (**(code **)(lVar15 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar12.unknown);
    (**(code **)(lVar15 + 0x38))((long)param_1 + lVar13,0,1,DVar12.unknown);
  }
  else {
    puVar11 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x30));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x34));
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x38));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x3c));
  uVar6 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x40)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x40));
  uVar14 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x44));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x44)) = uVar14;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x48)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x48));
  iVar7 = *(int *)(param_3 + 0x18);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *(undefined1 *)((long)param_1 + (long)iVar7) = *(undefined1 *)((long)param_2 + (long)iVar7);
  iVar7 = *(int *)(param_3 + 0x20);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar5 = *puVar2;
  uVar16 = puVar2[1];
  *puVar1 = uVar5;
  puVar1[1] = uVar16;
  puVar3 = (undefined1 *)((long)param_1 + (long)iVar7);
  puVar4 = (undefined1 *)((long)param_2 + (long)iVar7);
  *puVar3 = *puVar4;
  uVar16 = *(undefined8 *)(puVar4 + 8);
  *(undefined8 *)(puVar3 + 8) = uVar16;
  iVar7 = *(int *)(param_3 + 0x28);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *(undefined8 *)((long)param_1 + (long)iVar7) = *(undefined8 *)((long)param_2 + (long)iVar7);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar14);
  _swift_retain(uVar5);
  _swift_retain(uVar16);
  return param_1;
}

