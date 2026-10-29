// rea decompile_all
// name: FUN_1000c4c58
// address: 0x1000c4c58
// body: available
// range: 0x1000c4c58-0x1000c4f47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1000c4c58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  URL UVar6;
  long lVar7;
  undefined *puVar8;
  Date DVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  code *pcVar15;
  
  uVar10 = param_2[1];
  uVar4 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar10;
  _swift_bridgeObjectRelease(uVar4);
  lVar5 = 0;
  FUN_10040211c();
  iVar3 = *(int *)(lVar5 + 0x14);
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar13 = *(long *)(UVar6.unknown + -8);
  pcVar14 = *(code **)(lVar13 + 0x28);
  (*pcVar14)((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,UVar6.unknown);
  lVar12 = (long)*(int *)(lVar5 + 0x18);
  pcVar15 = *(code **)(lVar13 + 0x30);
  lVar11 = (long)param_1 + lVar12;
  (*pcVar15)(lVar11,1,UVar6.unknown);
  lVar7 = (long)param_2 + lVar12;
  (*pcVar15)(lVar7,1,UVar6.unknown);
  if ((int)lVar11 == 0) {
    if ((int)lVar7 != 0) {
      (**(code **)(lVar13 + 8))((long)param_1 + lVar12,UVar6.unknown);
      goto LAB_1000c4d38;
    }
    (*pcVar14)((long)param_1 + lVar12,(long)param_2 + lVar12,UVar6.unknown);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar13 + 0x20))((long)param_1 + lVar12,(long)param_2 + lVar12,UVar6.unknown);
    (**(code **)(lVar13 + 0x38))((long)param_1 + lVar12,0,1,UVar6.unknown);
  }
  else {
LAB_1000c4d38:
    puVar8 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
            *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x1c));
  uVar10 = puVar2[1];
  uVar4 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar10;
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x20));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0x24));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x28));
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = *puVar2;
  lVar12 = (long)*(int *)(lVar5 + 0x2c);
  DVar9 = Foundation::Date::typeMetadataAccessor();
  lVar13 = *(long *)(DVar9.unknown + -8);
  pcVar14 = *(code **)(lVar13 + 0x30);
  lVar11 = (long)param_1 + lVar12;
  (*pcVar14)(lVar11,1,DVar9.unknown);
  lVar7 = (long)param_2 + lVar12;
  (*pcVar14)(lVar7,1,DVar9.unknown);
  if ((int)lVar11 == 0) {
    if ((int)lVar7 == 0) {
      (**(code **)(lVar13 + 0x28))((long)param_1 + lVar12,(long)param_2 + lVar12,DVar9.unknown);
      goto LAB_1000c4e60;
    }
    (**(code **)(lVar13 + 8))((long)param_1 + lVar12,DVar9.unknown);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar13 + 0x20))((long)param_1 + lVar12,(long)param_2 + lVar12,DVar9.unknown);
    (**(code **)(lVar13 + 0x38))((long)param_1 + lVar12,0,1,DVar9.unknown);
    goto LAB_1000c4e60;
  }
  puVar8 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
          *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
LAB_1000c4e60:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x30));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x34));
  uVar10 = puVar2[1];
  uVar4 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar10;
  _swift_bridgeObjectRelease(uVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x38));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x3c));
  uVar10 = puVar2[1];
  uVar4 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar10;
  _swift_bridgeObjectRelease(uVar4);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x40)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0x40));
  lVar11 = (long)*(int *)(lVar5 + 0x44);
  uVar10 = *(undefined8 *)((long)param_1 + lVar11);
  *(undefined8 *)((long)param_1 + lVar11) = *(undefined8 *)((long)param_2 + lVar11);
  _swift_bridgeObjectRelease(uVar10);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x48)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0x48));
  return param_1;
}

