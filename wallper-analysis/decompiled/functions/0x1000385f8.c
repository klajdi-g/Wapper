// rea decompile_all
// name: FUN_1000385f8
// address: 0x1000385f8
// body: available
// range: 0x1000385f8-0x100038967 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1000385f8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  URL UVar8;
  long lVar9;
  undefined *puVar10;
  Date DVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  code *pcVar17;
  
  uVar12 = param_2[1];
  uVar6 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar12;
  _swift_bridgeObjectRelease(uVar6);
  lVar7 = 0;
  FUN_10040211c();
  iVar5 = *(int *)(lVar7 + 0x14);
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar15 = *(long *)(UVar8.unknown + -8);
  pcVar16 = *(code **)(lVar15 + 0x28);
  (*pcVar16)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,UVar8.unknown);
  lVar14 = (long)*(int *)(lVar7 + 0x18);
  pcVar17 = *(code **)(lVar15 + 0x30);
  lVar13 = (long)param_1 + lVar14;
  (*pcVar17)(lVar13,1,UVar8.unknown);
  lVar9 = (long)param_2 + lVar14;
  (*pcVar17)(lVar9,1,UVar8.unknown);
  if ((int)lVar13 == 0) {
    if ((int)lVar9 != 0) {
      (**(code **)(lVar15 + 8))((long)param_1 + lVar14,UVar8.unknown);
      goto LAB_1000386dc;
    }
    (*pcVar16)((long)param_1 + lVar14,(long)param_2 + lVar14,UVar8.unknown);
  }
  else if ((int)lVar9 == 0) {
    (**(code **)(lVar15 + 0x20))((long)param_1 + lVar14,(long)param_2 + lVar14,UVar8.unknown);
    (**(code **)(lVar15 + 0x38))((long)param_1 + lVar14,0,1,UVar8.unknown);
  }
  else {
LAB_1000386dc:
    puVar10 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy((void *)((long)param_1 + lVar14),(void *)((long)param_2 + lVar14),
            *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x1c));
  uVar12 = puVar2[1];
  uVar6 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar12;
  _swift_bridgeObjectRelease(uVar6);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x20));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar7 + 0x24));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x28));
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = *puVar2;
  lVar14 = (long)*(int *)(lVar7 + 0x2c);
  DVar11 = Foundation::Date::typeMetadataAccessor();
  lVar15 = *(long *)(DVar11.unknown + -8);
  pcVar16 = *(code **)(lVar15 + 0x30);
  lVar13 = (long)param_1 + lVar14;
  (*pcVar16)(lVar13,1,DVar11.unknown);
  lVar9 = (long)param_2 + lVar14;
  (*pcVar16)(lVar9,1,DVar11.unknown);
  if ((int)lVar13 == 0) {
    if ((int)lVar9 == 0) {
      (**(code **)(lVar15 + 0x28))((long)param_1 + lVar14,(long)param_2 + lVar14,DVar11.unknown);
      goto LAB_100038804;
    }
    (**(code **)(lVar15 + 8))((long)param_1 + lVar14,DVar11.unknown);
  }
  else if ((int)lVar9 == 0) {
    (**(code **)(lVar15 + 0x20))((long)param_1 + lVar14,(long)param_2 + lVar14,DVar11.unknown);
    (**(code **)(lVar15 + 0x38))((long)param_1 + lVar14,0,1,DVar11.unknown);
    goto LAB_100038804;
  }
  puVar10 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  _memcpy((void *)((long)param_1 + lVar14),(void *)((long)param_2 + lVar14),
          *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
LAB_100038804:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x30));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x34));
  uVar12 = puVar2[1];
  uVar6 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar12;
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x38));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x3c));
  uVar12 = puVar2[1];
  uVar6 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar12;
  _swift_bridgeObjectRelease(uVar6);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x40)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar7 + 0x40));
  lVar13 = (long)*(int *)(lVar7 + 0x44);
  uVar12 = *(undefined8 *)((long)param_1 + lVar13);
  *(undefined8 *)((long)param_1 + lVar13) = *(undefined8 *)((long)param_2 + lVar13);
  _swift_bridgeObjectRelease(uVar12);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x48)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar7 + 0x48));
  iVar5 = *(int *)(param_3 + 0x18);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *(undefined1 *)((long)param_1 + (long)iVar5) = *(undefined1 *)((long)param_2 + (long)iVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar12 = *puVar1;
  *puVar1 = *puVar2;
  _swift_release(uVar12);
  puVar1[1] = puVar2[1];
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *puVar3 = *puVar4;
  uVar12 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_release(uVar12);
  iVar5 = *(int *)(param_3 + 0x28);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *(undefined8 *)((long)param_1 + (long)iVar5) = *(undefined8 *)((long)param_2 + (long)iVar5);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  return param_1;
}

