// rea decompile_all
// name: FUN_100396b4c
// address: 0x100396b4c
// body: available
// range: 0x100396b4c-0x10039707b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100396b4c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  long lVar8;
  URL UVar9;
  long lVar10;
  undefined *puVar11;
  Date DVar12;
  UUID UVar13;
  long lVar14;
  code *pcVar15;
  code *pcVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  uVar17 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar17);
  lVar8 = 0;
  FUN_10040211c();
  iVar7 = *(int *)(lVar8 + 0x14);
  UVar9 = Foundation::URL::typeMetadataAccessor();
  lVar19 = *(long *)(UVar9.unknown + -8);
  pcVar16 = *(code **)(lVar19 + 0x18);
  (*pcVar16)((long)puVar1 + (long)iVar7,(long)puVar2 + (long)iVar7,UVar9.unknown);
  lVar18 = (long)*(int *)(lVar8 + 0x18);
  pcVar15 = *(code **)(lVar19 + 0x30);
  lVar14 = (long)puVar1 + lVar18;
  (*pcVar15)(lVar14,1,UVar9.unknown);
  lVar10 = (long)puVar2 + lVar18;
  (*pcVar15)(lVar10,1,UVar9.unknown);
  if ((int)lVar14 == 0) {
    if ((int)lVar10 != 0) {
      (**(code **)(lVar19 + 8))((long)puVar1 + lVar18,UVar9.unknown);
      goto LAB_100396c54;
    }
    (*pcVar16)((long)puVar1 + lVar18,(long)puVar2 + lVar18,UVar9.unknown);
  }
  else if ((int)lVar10 == 0) {
    (**(code **)(lVar19 + 0x10))((long)puVar1 + lVar18,(long)puVar2 + lVar18,UVar9.unknown);
    (**(code **)(lVar19 + 0x38))((long)puVar1 + lVar18,0,1,UVar9.unknown);
  }
  else {
LAB_100396c54:
    puVar11 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy((void *)((long)puVar1 + lVar18),(void *)((long)puVar2 + lVar18),
            *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x1c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x1c));
  *puVar3 = *puVar4;
  uVar17 = puVar3[1];
  puVar3[1] = puVar4[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar17);
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x20)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x20));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x24)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x24));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x28));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x28));
  uVar17 = *puVar4;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  *puVar3 = uVar17;
  lVar19 = (long)*(int *)(lVar8 + 0x2c);
  DVar12 = Foundation::Date::typeMetadataAccessor();
  lVar18 = *(long *)(DVar12.unknown + -8);
  pcVar15 = *(code **)(lVar18 + 0x30);
  lVar14 = (long)puVar1 + lVar19;
  (*pcVar15)(lVar14,1,DVar12.unknown);
  lVar10 = (long)puVar2 + lVar19;
  (*pcVar15)(lVar10,1,DVar12.unknown);
  if ((int)lVar14 == 0) {
    if ((int)lVar10 == 0) {
      (**(code **)(lVar18 + 0x18))((long)puVar1 + lVar19,(long)puVar2 + lVar19,DVar12.unknown);
      goto LAB_100396d8c;
    }
    (**(code **)(lVar18 + 8))((long)puVar1 + lVar19,DVar12.unknown);
  }
  else if ((int)lVar10 == 0) {
    (**(code **)(lVar18 + 0x10))((long)puVar1 + lVar19,(long)puVar2 + lVar19,DVar12.unknown);
    (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar19,0,1,DVar12.unknown);
    goto LAB_100396d8c;
  }
  puVar11 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  _memcpy((void *)((long)puVar1 + lVar19),(void *)((long)puVar2 + lVar19),
          *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
LAB_100396d8c:
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x30));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x30));
  uVar17 = *puVar4;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  *puVar3 = uVar17;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x34));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x34));
  *puVar3 = *puVar4;
  uVar17 = puVar3[1];
  puVar3[1] = puVar4[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar17);
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x38));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x38));
  uVar17 = *puVar4;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  *puVar3 = uVar17;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x3c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x3c));
  *puVar3 = *puVar4;
  uVar17 = puVar3[1];
  puVar3[1] = puVar4[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar17);
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x40)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x40));
  lVar14 = (long)*(int *)(lVar8 + 0x44);
  uVar17 = *(undefined8 *)((long)puVar1 + lVar14);
  *(undefined8 *)((long)puVar1 + lVar14) = *(undefined8 *)((long)puVar2 + lVar14);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar17);
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x48)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x48));
  lVar14 = (long)param_1 + (long)*(int *)(param_3 + 0x18);
  lVar10 = (long)param_2 + (long)*(int *)(param_3 + 0x18);
  UVar13 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar13.unknown + -8) + 0x18))(lVar14,lVar10,UVar13.unknown);
  lVar8 = 0;
  FUN_10025ee04();
  puVar1 = (undefined8 *)(lVar14 + *(int *)(lVar8 + 0x14));
  puVar2 = (undefined8 *)(lVar10 + *(int *)(lVar8 + 0x14));
  *puVar1 = *puVar2;
  uVar17 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar17);
  (**(code **)(lVar18 + 0x18))
            (lVar14 + *(int *)(lVar8 + 0x18),lVar10 + *(int *)(lVar8 + 0x18),DVar12.unknown);
  *(undefined1 *)(lVar14 + *(int *)(lVar8 + 0x1c)) =
       *(undefined1 *)(lVar10 + *(int *)(lVar8 + 0x1c));
  lVar18 = (long)*(int *)(lVar8 + 0x20);
  uVar17 = *(undefined8 *)(lVar14 + lVar18);
  *(undefined8 *)(lVar14 + lVar18) = *(undefined8 *)(lVar10 + lVar18);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar17);
  *(undefined1 *)(lVar14 + *(int *)(lVar8 + 0x24)) =
       *(undefined1 *)(lVar10 + *(int *)(lVar8 + 0x24));
  *(undefined1 *)(lVar14 + *(int *)(lVar8 + 0x28)) =
       *(undefined1 *)(lVar10 + *(int *)(lVar8 + 0x28));
  *(undefined8 *)(lVar14 + *(int *)(lVar8 + 0x2c)) =
       *(undefined8 *)(lVar10 + *(int *)(lVar8 + 0x2c));
  *(undefined8 *)(lVar14 + *(int *)(lVar8 + 0x30)) =
       *(undefined8 *)(lVar10 + *(int *)(lVar8 + 0x30));
  lVar8 = (long)*(int *)(lVar8 + 0x34);
  uVar17 = *(undefined8 *)(lVar14 + lVar8);
  *(undefined8 *)(lVar14 + lVar8) = *(undefined8 *)(lVar10 + lVar8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar17);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar17 = *puVar1;
  *puVar1 = *puVar2;
  _swift_retain();
  _swift_release(uVar17);
  puVar1[1] = puVar2[1];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar17 = *puVar1;
  *puVar1 = *puVar2;
  _swift_retain();
  _swift_release(uVar17);
  puVar1[1] = puVar2[1];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar17 = *puVar1;
  *puVar1 = *puVar2;
  _swift_retain();
  _swift_release(uVar17);
  puVar1[1] = puVar2[1];
  puVar5 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar6 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar5 = *puVar6;
  uVar17 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar6 + 8);
  _swift_retain();
  _swift_release(uVar17);
  puVar5 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar6 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *puVar5 = *puVar6;
  uVar17 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar6 + 8);
  _swift_retain();
  _swift_release(uVar17);
  return param_1;
}

