// rea decompile_all
// name: FUN_10039707c
// address: 0x10039707c
// body: available
// range: 0x10039707c-0x1003973a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10039707c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  URL UVar7;
  long lVar8;
  undefined *puVar9;
  Date DVar10;
  UUID UVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar15 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar15;
  lVar6 = 0;
  FUN_10040211c();
  iVar3 = *(int *)(lVar6 + 0x14);
  UVar7 = Foundation::URL::typeMetadataAccessor();
  lVar13 = *(long *)(UVar7.unknown + -8);
  pcVar14 = *(code **)(lVar13 + 0x20);
  (*pcVar14)((long)puVar1 + (long)iVar3,(long)puVar2 + (long)iVar3,UVar7.unknown);
  lVar12 = (long)*(int *)(lVar6 + 0x18);
  lVar8 = (long)puVar2 + lVar12;
  (**(code **)(lVar13 + 0x30))(lVar8,1,UVar7.unknown);
  if ((int)lVar8 == 0) {
    (*pcVar14)((long)puVar1 + lVar12,(long)puVar2 + lVar12,UVar7.unknown);
    (**(code **)(lVar13 + 0x38))((long)puVar1 + lVar12,0,1,UVar7.unknown);
  }
  else {
    puVar9 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy((void *)((long)puVar1 + lVar12),(void *)((long)puVar2 + lVar12),
            *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x1c));
  uVar15 = *puVar4;
  puVar5 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x1c));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar15;
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x20)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x20));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x24)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x24));
  puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x28));
  puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x28));
  *puVar4 = *puVar5;
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar5 + 1);
  lVar13 = (long)*(int *)(lVar6 + 0x2c);
  DVar10 = Foundation::Date::typeMetadataAccessor();
  lVar12 = *(long *)(DVar10.unknown + -8);
  lVar8 = (long)puVar2 + lVar13;
  (**(code **)(lVar12 + 0x30))(lVar8,1,DVar10.unknown);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar12 + 0x20))((long)puVar1 + lVar13,(long)puVar2 + lVar13,DVar10.unknown);
    (**(code **)(lVar12 + 0x38))((long)puVar1 + lVar13,0,1,DVar10.unknown);
  }
  else {
    puVar9 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)puVar1 + lVar13),(void *)((long)puVar2 + lVar13),
            *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x30));
  puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x30));
  *puVar4 = *puVar5;
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar5 + 1);
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x34));
  uVar15 = *puVar4;
  puVar5 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x34));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar15;
  puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x38));
  puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x38));
  *puVar4 = *puVar5;
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar5 + 1);
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x3c));
  uVar15 = *puVar4;
  puVar5 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x3c));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar15;
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x40)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x40));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x44)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x44));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x48)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x48));
  lVar8 = (long)param_1 + (long)*(int *)(param_3 + 0x18);
  lVar6 = (long)param_2 + (long)*(int *)(param_3 + 0x18);
  UVar11 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar11.unknown + -8) + 0x20))(lVar8,lVar6,UVar11.unknown);
  lVar13 = 0;
  FUN_10025ee04();
  puVar1 = (undefined8 *)(lVar6 + *(int *)(lVar13 + 0x14));
  uVar15 = *puVar1;
  puVar2 = (undefined8 *)(lVar8 + *(int *)(lVar13 + 0x14));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar15;
  (**(code **)(lVar12 + 0x20))
            (lVar8 + *(int *)(lVar13 + 0x18),lVar6 + *(int *)(lVar13 + 0x18),DVar10.unknown);
  *(undefined1 *)(lVar8 + *(int *)(lVar13 + 0x1c)) =
       *(undefined1 *)(lVar6 + *(int *)(lVar13 + 0x1c));
  *(undefined8 *)(lVar8 + *(int *)(lVar13 + 0x20)) =
       *(undefined8 *)(lVar6 + *(int *)(lVar13 + 0x20));
  *(undefined1 *)(lVar8 + *(int *)(lVar13 + 0x24)) =
       *(undefined1 *)(lVar6 + *(int *)(lVar13 + 0x24));
  *(undefined1 *)(lVar8 + *(int *)(lVar13 + 0x28)) =
       *(undefined1 *)(lVar6 + *(int *)(lVar13 + 0x28));
  *(undefined8 *)(lVar8 + *(int *)(lVar13 + 0x2c)) =
       *(undefined8 *)(lVar6 + *(int *)(lVar13 + 0x2c));
  *(undefined8 *)(lVar8 + *(int *)(lVar13 + 0x30)) =
       *(undefined8 *)(lVar6 + *(int *)(lVar13 + 0x30));
  *(undefined8 *)(lVar8 + *(int *)(lVar13 + 0x34)) =
       *(undefined8 *)(lVar6 + *(int *)(lVar13 + 0x34));
  iVar3 = *(int *)(param_3 + 0x20);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar15 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar15;
  iVar3 = *(int *)(param_3 + 0x28);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar15 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar15;
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar15 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar15;
  iVar3 = *(int *)(param_3 + 0x30);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar15 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar15;
  param_2 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar15 = *param_2;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar1[1] = param_2[1];
  *puVar1 = uVar15;
  return param_1;
}

