// rea decompile_all
// name: FUN_100151460
// address: 0x100151460
// body: available
// range: 0x100151460-0x1001516f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100151460(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  Date DVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  Date DVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  size_t sVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  
  uVar15 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar15;
  _swift_bridgeObjectRelease(uVar1);
  puVar7 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar9 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  DVar2.unknown = (undefined *)0x0;
  FUN_100150d64();
  lVar11 = *(long *)(DVar2.unknown + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  puVar3 = puVar7;
  (*pcVar12)(puVar7,1,DVar2.unknown);
  puVar4 = puVar9;
  (*pcVar12)(puVar9,1,DVar2.unknown);
  if ((int)puVar3 == 0) {
    if ((int)puVar4 != 0) {
      FUN_100029548(puVar7,FUN_100150d64);
      goto LAB_100151560;
    }
    uVar15 = puVar9[1];
    uVar1 = puVar7[1];
    *puVar7 = *puVar9;
    puVar7[1] = uVar15;
    _swift_bridgeObjectRelease(uVar1);
    *(undefined1 *)(puVar7 + 2) = *(undefined1 *)(puVar9 + 2);
    lVar13 = (long)*(int *)(DVar2.unknown + 0x18);
    DVar2 = Foundation::Date::typeMetadataAccessor();
    lVar14 = *(long *)(DVar2.unknown + -8);
    pcVar12 = *(code **)(lVar14 + 0x30);
    lVar11 = (long)puVar7 + lVar13;
    (*pcVar12)(lVar11,1,DVar2.unknown);
    lVar6 = (long)puVar9 + lVar13;
    (*pcVar12)(lVar6,1,DVar2.unknown);
    if ((int)lVar11 == 0) {
      if ((int)lVar6 == 0) {
        (**(code **)(lVar14 + 0x28))((long)puVar7 + lVar13,(long)puVar9 + lVar13,DVar2.unknown);
        goto LAB_10015164c;
      }
      (**(code **)(lVar14 + 8))((long)puVar7 + lVar13,DVar2.unknown);
    }
    else if ((int)lVar6 == 0) {
      (**(code **)(lVar14 + 0x20))((long)puVar7 + lVar13,(long)puVar9 + lVar13,DVar2.unknown);
      pcVar12 = *(code **)(lVar14 + 0x38);
      puVar7 = (undefined8 *)((long)puVar7 + lVar13);
      goto LAB_10015163c;
    }
    puVar8 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    sVar10 = *(size_t *)(*(long *)(puVar8 + -8) + 0x40);
    puVar7 = (undefined8 *)((long)puVar7 + lVar13);
    puVar9 = (undefined8 *)((long)puVar9 + lVar13);
  }
  else {
    if ((int)puVar4 == 0) {
      uVar15 = *puVar9;
      puVar7[1] = puVar9[1];
      *puVar7 = uVar15;
      *(undefined1 *)(puVar7 + 2) = *(undefined1 *)(puVar9 + 2);
      lVar13 = (long)*(int *)(DVar2.unknown + 0x18);
      DVar5 = Foundation::Date::typeMetadataAccessor();
      lVar14 = *(long *)(DVar5.unknown + -8);
      lVar6 = (long)puVar9 + lVar13;
      (**(code **)(lVar14 + 0x30))(lVar6,1,DVar5.unknown);
      if ((int)lVar6 == 0) {
        (**(code **)(lVar14 + 0x20))((long)puVar7 + lVar13,(long)puVar9 + lVar13,DVar5.unknown);
        (**(code **)(lVar14 + 0x38))((long)puVar7 + lVar13,0,1,DVar5.unknown);
      }
      else {
        puVar8 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar7 + lVar13),(void *)((long)puVar9 + lVar13),
                *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
      }
      pcVar12 = *(code **)(lVar11 + 0x38);
LAB_10015163c:
      (*pcVar12)(puVar7,0,1,DVar2.unknown);
      goto LAB_10015164c;
    }
LAB_100151560:
    puVar8 = &DAT_100554cf8;
    FUN_100002f94(&DAT_100554cf8,&DAT_1004285a0);
    sVar10 = *(size_t *)(*(long *)(puVar8 + -8) + 0x40);
  }
  _memcpy(puVar7,puVar9,sVar10);
LAB_10015164c:
  puVar7 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar15 = param_2[1];
  uVar1 = puVar7[1];
  *puVar7 = *param_2;
  puVar7[1] = uVar15;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(puVar7 + 2) = *(undefined1 *)(param_2 + 2);
  uVar15 = param_2[3];
  puVar7[4] = param_2[4];
  puVar7[3] = uVar15;
  *(undefined1 *)(puVar7 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}

