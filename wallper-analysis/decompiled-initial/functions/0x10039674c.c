// rea decompile_all
// name: FUN_10039674c
// address: 0x10039674c
// body: available
// range: 0x10039674c-0x100396b4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10039674c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  URL UVar11;
  long lVar12;
  undefined *puVar13;
  Date DVar14;
  UUID UVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  code *pcVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar7 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar7;
  lVar10 = 0;
  FUN_10040211c();
  iVar9 = *(int *)(lVar10 + 0x14);
  UVar11 = Foundation::URL::typeMetadataAccessor();
  lVar19 = *(long *)(UVar11.unknown + -8);
  pcVar20 = *(code **)(lVar19 + 0x10);
  _swift_bridgeObjectRetain(uVar7);
  (*pcVar20)((long)puVar1 + (long)iVar9,(long)puVar2 + (long)iVar9,UVar11.unknown);
  lVar18 = (long)*(int *)(lVar10 + 0x18);
  lVar12 = (long)puVar2 + lVar18;
  (**(code **)(lVar19 + 0x30))(lVar12,1,UVar11.unknown);
  if ((int)lVar12 == 0) {
    (*pcVar20)((long)puVar1 + lVar18,(long)puVar2 + lVar18,UVar11.unknown);
    (**(code **)(lVar19 + 0x38))((long)puVar1 + lVar18,0,1,UVar11.unknown);
  }
  else {
    puVar13 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy((void *)((long)puVar1 + lVar18),(void *)((long)puVar2 + lVar18),
            *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x1c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x1c));
  uVar7 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar7;
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x20)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x20));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x24)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x24));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x28));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x28));
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  *puVar3 = *puVar4;
  lVar19 = (long)*(int *)(lVar10 + 0x2c);
  DVar14 = Foundation::Date::typeMetadataAccessor();
  lVar18 = *(long *)(DVar14.unknown + -8);
  pcVar20 = *(code **)(lVar18 + 0x30);
  _swift_bridgeObjectRetain(uVar7);
  lVar12 = (long)puVar2 + lVar19;
  (*pcVar20)(lVar12,1,DVar14.unknown);
  if ((int)lVar12 == 0) {
    (**(code **)(lVar18 + 0x10))((long)puVar1 + lVar19,(long)puVar2 + lVar19,DVar14.unknown);
    (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar19,0,1,DVar14.unknown);
  }
  else {
    puVar13 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)puVar1 + lVar19),(void *)((long)puVar2 + lVar19),
            *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x30));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x30));
  *puVar3 = *puVar4;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x34));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x34));
  uVar7 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar7;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x38));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x38));
  *puVar3 = *puVar4;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x3c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x3c));
  uVar8 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar8;
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x40)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x40));
  uVar22 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x44));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x44)) = uVar22;
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x48)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x48));
  lVar12 = (long)param_1 + (long)*(int *)(param_3 + 0x18);
  lVar10 = (long)param_2 + (long)*(int *)(param_3 + 0x18);
  UVar15 = Foundation::UUID::typeMetadataAccessor();
  pcVar20 = *(code **)(*(long *)(UVar15.unknown + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar22);
  (*pcVar20)(lVar12,lVar10,UVar15.unknown);
  lVar19 = 0;
  FUN_10025ee04();
  puVar1 = (undefined8 *)(lVar12 + *(int *)(lVar19 + 0x14));
  puVar2 = (undefined8 *)(lVar10 + *(int *)(lVar19 + 0x14));
  uVar7 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar7;
  iVar9 = *(int *)(lVar19 + 0x18);
  pcVar20 = *(code **)(lVar18 + 0x10);
  _swift_bridgeObjectRetain();
  (*pcVar20)(lVar12 + iVar9,lVar10 + iVar9,DVar14.unknown);
  *(undefined1 *)(lVar12 + *(int *)(lVar19 + 0x1c)) =
       *(undefined1 *)(lVar10 + *(int *)(lVar19 + 0x1c));
  *(undefined8 *)(lVar12 + *(int *)(lVar19 + 0x20)) =
       *(undefined8 *)(lVar10 + *(int *)(lVar19 + 0x20));
  *(undefined1 *)(lVar12 + *(int *)(lVar19 + 0x24)) =
       *(undefined1 *)(lVar10 + *(int *)(lVar19 + 0x24));
  *(undefined1 *)(lVar12 + *(int *)(lVar19 + 0x28)) =
       *(undefined1 *)(lVar10 + *(int *)(lVar19 + 0x28));
  *(undefined8 *)(lVar12 + *(int *)(lVar19 + 0x2c)) =
       *(undefined8 *)(lVar10 + *(int *)(lVar19 + 0x2c));
  *(undefined8 *)(lVar12 + *(int *)(lVar19 + 0x30)) =
       *(undefined8 *)(lVar10 + *(int *)(lVar19 + 0x30));
  uVar21 = *(undefined8 *)(lVar10 + *(int *)(lVar19 + 0x34));
  *(undefined8 *)(lVar12 + *(int *)(lVar19 + 0x34)) = uVar21;
  iVar9 = *(int *)(param_3 + 0x20);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  iVar9 = *(int *)(param_3 + 0x28);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar8 = *puVar2;
  uVar22 = puVar2[1];
  *puVar1 = uVar8;
  puVar1[1] = uVar22;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
  uVar22 = *puVar2;
  uVar16 = puVar2[1];
  *puVar1 = uVar22;
  puVar1[1] = uVar16;
  iVar9 = *(int *)(param_3 + 0x30);
  puVar5 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar6 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar5 = *puVar6;
  uVar17 = *(undefined8 *)(puVar6 + 8);
  *(undefined8 *)(puVar5 + 8) = uVar17;
  puVar5 = (undefined1 *)((long)param_1 + (long)iVar9);
  puVar6 = (undefined1 *)((long)param_2 + (long)iVar9);
  *puVar5 = *puVar6;
  uVar16 = *(undefined8 *)(puVar6 + 8);
  *(undefined8 *)(puVar5 + 8) = uVar16;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar21);
  _swift_retain(uVar7);
  _swift_retain(uVar8);
  _swift_retain(uVar22);
  _swift_retain(uVar17);
  _swift_retain(uVar16);
  return param_1;
}

