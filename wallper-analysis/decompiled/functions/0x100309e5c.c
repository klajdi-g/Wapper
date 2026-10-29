// rea decompile_all
// name: FUN_100309e5c
// address: 0x100309e5c
// body: available
// range: 0x100309e5c-0x10030a1e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100309e5c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  URL UVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  Date DVar12;
  long lVar13;
  code *pcVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  
  uVar6 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar6);
  uVar7 = param_1[2];
  uVar6 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar6;
  _swift_release(uVar7);
  param_1[3] = param_2[3];
  iVar5 = *(int *)(param_3 + 0x18);
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar17 = *(long *)(UVar8.unknown + -8);
  pcVar15 = *(code **)(lVar17 + 0x28);
  (*pcVar15)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,UVar8.unknown);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar6 = puVar2[1];
  uVar7 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  _swift_bridgeObjectRelease(uVar7);
  lVar9 = 0;
  FUN_10040211c();
  (*pcVar15)((long)puVar1 + (long)*(int *)(lVar9 + 0x14),(long)puVar2 + (long)*(int *)(lVar9 + 0x14)
             ,UVar8.unknown);
  lVar16 = (long)*(int *)(lVar9 + 0x18);
  pcVar14 = *(code **)(lVar17 + 0x30);
  lVar13 = (long)puVar1 + lVar16;
  (*pcVar14)(lVar13,1,UVar8.unknown);
  lVar10 = (long)puVar2 + lVar16;
  (*pcVar14)(lVar10,1,UVar8.unknown);
  if ((int)lVar13 == 0) {
    if ((int)lVar10 != 0) {
      (**(code **)(lVar17 + 8))((long)puVar1 + lVar16,UVar8.unknown);
      goto LAB_100309f90;
    }
    (*pcVar15)((long)puVar1 + lVar16,(long)puVar2 + lVar16,UVar8.unknown);
  }
  else if ((int)lVar10 == 0) {
    (**(code **)(lVar17 + 0x20))((long)puVar1 + lVar16,(long)puVar2 + lVar16,UVar8.unknown);
    (**(code **)(lVar17 + 0x38))((long)puVar1 + lVar16,0,1,UVar8.unknown);
  }
  else {
LAB_100309f90:
    puVar11 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy((void *)((long)puVar1 + lVar16),(void *)((long)puVar2 + lVar16),
            *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x1c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x1c));
  uVar6 = puVar4[1];
  uVar7 = puVar3[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar6;
  _swift_bridgeObjectRelease(uVar7);
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x20)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x20));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x24)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x24));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x28));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x28));
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  *puVar3 = *puVar4;
  lVar17 = (long)*(int *)(lVar9 + 0x2c);
  DVar12 = Foundation::Date::typeMetadataAccessor();
  lVar16 = *(long *)(DVar12.unknown + -8);
  pcVar14 = *(code **)(lVar16 + 0x30);
  lVar13 = (long)puVar1 + lVar17;
  (*pcVar14)(lVar13,1,DVar12.unknown);
  lVar10 = (long)puVar2 + lVar17;
  (*pcVar14)(lVar10,1,DVar12.unknown);
  if ((int)lVar13 == 0) {
    if ((int)lVar10 == 0) {
      (**(code **)(lVar16 + 0x28))((long)puVar1 + lVar17,(long)puVar2 + lVar17,DVar12.unknown);
      goto LAB_10030a0b8;
    }
    (**(code **)(lVar16 + 8))((long)puVar1 + lVar17,DVar12.unknown);
  }
  else if ((int)lVar10 == 0) {
    (**(code **)(lVar16 + 0x20))((long)puVar1 + lVar17,(long)puVar2 + lVar17,DVar12.unknown);
    (**(code **)(lVar16 + 0x38))((long)puVar1 + lVar17,0,1,DVar12.unknown);
    goto LAB_10030a0b8;
  }
  puVar11 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  _memcpy((void *)((long)puVar1 + lVar17),(void *)((long)puVar2 + lVar17),
          *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
LAB_10030a0b8:
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x30));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x30));
  *puVar3 = *puVar4;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x34));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x34));
  uVar6 = puVar4[1];
  uVar7 = puVar3[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar6;
  _swift_bridgeObjectRelease(uVar7);
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x38));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x38));
  *puVar3 = *puVar4;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x3c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x3c));
  uVar6 = puVar4[1];
  uVar7 = puVar3[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar6;
  _swift_bridgeObjectRelease(uVar7);
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x40)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x40));
  lVar13 = (long)*(int *)(lVar9 + 0x44);
  uVar6 = *(undefined8 *)((long)puVar1 + lVar13);
  *(undefined8 *)((long)puVar1 + lVar13) = *(undefined8 *)((long)puVar2 + lVar13);
  _swift_bridgeObjectRelease(uVar6);
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x48)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x48));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar6 = *puVar1;
  *puVar1 = *param_2;
  _swift_release(uVar6);
  uVar6 = puVar1[1];
  puVar1[1] = param_2[1];
  _swift_release(uVar6);
  uVar6 = puVar1[2];
  puVar1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar6);
  return param_1;
}

