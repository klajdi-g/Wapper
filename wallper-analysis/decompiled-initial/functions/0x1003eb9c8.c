// rea decompile_all
// name: FUN_1003eb9c8
// address: 0x1003eb9c8
// body: available
// range: 0x1003eb9c8-0x1003ebd4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1003eb9c8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  URL UVar9;
  long lVar10;
  undefined *puVar11;
  Date DVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  
  uVar19 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar19;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  lVar7 = 0;
  FUN_10040211c();
  lVar17 = *(long *)(lVar7 + -8);
  pcVar15 = *(code **)(lVar17 + 0x30);
  _swift_bridgeObjectRetain(uVar19);
  puVar8 = puVar2;
  (*pcVar15)(puVar2,1,lVar7);
  if ((int)puVar8 == 0) {
    uVar19 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar19;
    iVar6 = *(int *)(lVar7 + 0x14);
    UVar9 = Foundation::URL::typeMetadataAccessor();
    lVar18 = *(long *)(UVar9.unknown + -8);
    pcVar15 = *(code **)(lVar18 + 0x10);
    _swift_bridgeObjectRetain(uVar19);
    (*pcVar15)((long)puVar1 + (long)iVar6,(long)puVar2 + (long)iVar6,UVar9.unknown);
    lVar16 = (long)*(int *)(lVar7 + 0x18);
    lVar10 = (long)puVar2 + lVar16;
    (**(code **)(lVar18 + 0x30))(lVar10,1,UVar9.unknown);
    if ((int)lVar10 == 0) {
      (*pcVar15)((long)puVar1 + lVar16,(long)puVar2 + lVar16,UVar9.unknown);
      (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar16,0,1,UVar9.unknown);
    }
    else {
      puVar11 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)puVar1 + lVar16),(void *)((long)puVar2 + lVar16),
              *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x1c));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x1c));
    uVar19 = puVar3[1];
    *puVar8 = *puVar3;
    puVar8[1] = uVar19;
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x20)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x20));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x24)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x24));
    puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x28));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x28));
    *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar3 + 1);
    *puVar8 = *puVar3;
    lVar18 = (long)*(int *)(lVar7 + 0x2c);
    DVar12 = Foundation::Date::typeMetadataAccessor();
    lVar16 = *(long *)(DVar12.unknown + -8);
    pcVar15 = *(code **)(lVar16 + 0x30);
    _swift_bridgeObjectRetain(uVar19);
    lVar10 = (long)puVar2 + lVar18;
    (*pcVar15)(lVar10,1,DVar12.unknown);
    if ((int)lVar10 == 0) {
      (**(code **)(lVar16 + 0x10))((long)puVar1 + lVar18,(long)puVar2 + lVar18,DVar12.unknown);
      (**(code **)(lVar16 + 0x38))((long)puVar1 + lVar18,0,1,DVar12.unknown);
    }
    else {
      puVar11 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar18),(void *)((long)puVar2 + lVar18),
              *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x30));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x30));
    *puVar8 = *puVar3;
    *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar3 + 1);
    puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x34));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x34));
    uVar19 = puVar3[1];
    *puVar8 = *puVar3;
    puVar8[1] = uVar19;
    puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x38));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x38));
    *puVar8 = *puVar3;
    *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar3 + 1);
    puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x3c));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x3c));
    uVar19 = puVar3[1];
    *puVar8 = *puVar3;
    puVar8[1] = uVar19;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x40)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x40));
    uVar13 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x44));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x44)) = uVar13;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x48)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x48));
    pcVar15 = *(code **)(lVar17 + 0x38);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar19);
    _swift_bridgeObjectRetain(uVar13);
    (*pcVar15)(puVar1,0,1,lVar7);
  }
  else {
    puVar11 = &DAT_10054ac40;
    FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar11 + -8) + 0x40));
  }
  iVar6 = *(int *)(param_3 + 0x1c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *(undefined1 *)((long)param_1 + (long)iVar6) = *(undefined1 *)((long)param_2 + (long)iVar6);
  iVar6 = *(int *)(param_3 + 0x24);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar19 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar19;
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar6);
  uVar14 = puVar1[1];
  uVar19 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar6);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar19;
  iVar6 = *(int *)(param_3 + 0x2c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar19 = *puVar2;
  uVar13 = puVar2[1];
  *puVar1 = uVar19;
  puVar1[1] = uVar13;
  puVar4 = (undefined1 *)((long)param_1 + (long)iVar6);
  puVar5 = (undefined1 *)((long)param_2 + (long)iVar6);
  *puVar4 = *puVar5;
  uVar13 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar4 + 8) = uVar13;
  _swift_bridgeObjectRetain();
  _swift_retain(uVar14);
  _swift_retain(uVar19);
  _swift_retain(uVar13);
  return param_1;
}

