// rea decompile_all
// name: FUN_100300508
// address: 0x100300508
// body: available
// range: 0x100300508-0x1003008d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100300508(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  URL UVar11;
  long lVar12;
  undefined *puVar13;
  Date DVar14;
  long lVar15;
  code *pcVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  
  uVar8 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar8);
  uVar9 = param_1[2];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar8;
  _swift_release(uVar9);
  uVar8 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar8;
  uVar8 = param_1[5];
  param_1[5] = param_2[5];
  _swift_release(uVar8);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar8 = puVar2[1];
  uVar9 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar8;
  _swift_bridgeObjectRelease(uVar9);
  lVar10 = 0;
  FUN_10040211c();
  iVar7 = *(int *)(lVar10 + 0x14);
  UVar11 = Foundation::URL::typeMetadataAccessor();
  lVar19 = *(long *)(UVar11.unknown + -8);
  pcVar17 = *(code **)(lVar19 + 0x28);
  (*pcVar17)((long)puVar1 + (long)iVar7,(long)puVar2 + (long)iVar7,UVar11.unknown);
  lVar18 = (long)*(int *)(lVar10 + 0x18);
  pcVar16 = *(code **)(lVar19 + 0x30);
  lVar15 = (long)puVar1 + lVar18;
  (*pcVar16)(lVar15,1,UVar11.unknown);
  lVar12 = (long)puVar2 + lVar18;
  (*pcVar16)(lVar12,1,UVar11.unknown);
  if ((int)lVar15 == 0) {
    if ((int)lVar12 != 0) {
      (**(code **)(lVar19 + 8))((long)puVar1 + lVar18,UVar11.unknown);
      goto LAB_100300638;
    }
    (*pcVar17)((long)puVar1 + lVar18,(long)puVar2 + lVar18,UVar11.unknown);
  }
  else if ((int)lVar12 == 0) {
    (**(code **)(lVar19 + 0x20))((long)puVar1 + lVar18,(long)puVar2 + lVar18,UVar11.unknown);
    (**(code **)(lVar19 + 0x38))((long)puVar1 + lVar18,0,1,UVar11.unknown);
  }
  else {
LAB_100300638:
    puVar13 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy((void *)((long)puVar1 + lVar18),(void *)((long)puVar2 + lVar18),
            *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x1c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x1c));
  uVar8 = puVar4[1];
  uVar9 = puVar3[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar8;
  _swift_bridgeObjectRelease(uVar9);
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x20)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x20));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x24)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x24));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x28));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x28));
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  *puVar3 = *puVar4;
  lVar18 = (long)*(int *)(lVar10 + 0x2c);
  DVar14 = Foundation::Date::typeMetadataAccessor();
  lVar19 = *(long *)(DVar14.unknown + -8);
  pcVar16 = *(code **)(lVar19 + 0x30);
  lVar15 = (long)puVar1 + lVar18;
  (*pcVar16)(lVar15,1,DVar14.unknown);
  lVar12 = (long)puVar2 + lVar18;
  (*pcVar16)(lVar12,1,DVar14.unknown);
  if ((int)lVar15 == 0) {
    if ((int)lVar12 == 0) {
      (**(code **)(lVar19 + 0x28))((long)puVar1 + lVar18,(long)puVar2 + lVar18,DVar14.unknown);
      goto LAB_100300760;
    }
    (**(code **)(lVar19 + 8))((long)puVar1 + lVar18,DVar14.unknown);
  }
  else if ((int)lVar12 == 0) {
    (**(code **)(lVar19 + 0x20))((long)puVar1 + lVar18,(long)puVar2 + lVar18,DVar14.unknown);
    (**(code **)(lVar19 + 0x38))((long)puVar1 + lVar18,0,1,DVar14.unknown);
    goto LAB_100300760;
  }
  puVar13 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  _memcpy((void *)((long)puVar1 + lVar18),(void *)((long)puVar2 + lVar18),
          *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
LAB_100300760:
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x30));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x30));
  *puVar3 = *puVar4;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x34));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x34));
  uVar8 = puVar4[1];
  uVar9 = puVar3[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar8;
  _swift_bridgeObjectRelease(uVar9);
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x38));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x38));
  *puVar3 = *puVar4;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x3c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x3c));
  uVar8 = puVar4[1];
  uVar9 = puVar3[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar8;
  _swift_bridgeObjectRelease(uVar9);
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x40)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x40));
  lVar15 = (long)*(int *)(lVar10 + 0x44);
  uVar8 = *(undefined8 *)((long)puVar1 + lVar15);
  *(undefined8 *)((long)puVar1 + lVar15) = *(undefined8 *)((long)puVar2 + lVar15);
  _swift_bridgeObjectRelease(uVar8);
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x48)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x48));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar8 = puVar2[1];
  uVar9 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar8;
  _swift_bridgeObjectRelease(uVar9);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  uVar8 = puVar1[1];
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar9 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar9;
  _swift_release(uVar8);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar8 = *puVar1;
  *puVar1 = *puVar2;
  _swift_bridgeObjectRelease(uVar8);
  uVar8 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_release(uVar8);
  puVar5 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar6 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar5 = *puVar6;
  uVar8 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar6 + 8);
  _swift_release(uVar8);
  return param_1;
}

