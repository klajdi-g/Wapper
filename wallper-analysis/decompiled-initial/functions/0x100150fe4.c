// rea decompile_all
// name: FUN_100150fe4
// address: 0x100150fe4
// body: available
// range: 0x100150fe4-0x1001512e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100150fe4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Date DVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  size_t sVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  *param_1 = *param_2;
  uVar11 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar7 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  lVar1 = 0;
  FUN_100150d64();
  lVar13 = *(long *)(lVar1 + -8);
  pcVar10 = *(code **)(lVar13 + 0x30);
  puVar2 = puVar5;
  (*pcVar10)(puVar5,1,lVar1);
  puVar3 = puVar7;
  (*pcVar10)(puVar7,1,lVar1);
  if ((int)puVar2 == 0) {
    if ((int)puVar3 != 0) {
      FUN_100029548(puVar5,FUN_100150d64);
      goto LAB_100151110;
    }
    *puVar5 = *puVar7;
    uVar11 = puVar5[1];
    puVar5[1] = puVar7[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar11);
    *(undefined1 *)(puVar5 + 2) = *(undefined1 *)(puVar7 + 2);
    lVar12 = (long)*(int *)(lVar1 + 0x18);
    DVar4 = Foundation::Date::typeMetadataAccessor();
    lVar9 = *(long *)(DVar4.unknown + -8);
    pcVar10 = *(code **)(lVar9 + 0x30);
    lVar1 = (long)puVar5 + lVar12;
    (*pcVar10)(lVar1,1,DVar4.unknown);
    lVar13 = (long)puVar7 + lVar12;
    (*pcVar10)(lVar13,1,DVar4.unknown);
    if ((int)lVar1 == 0) {
      if ((int)lVar13 == 0) {
        (**(code **)(lVar9 + 0x18))((long)puVar5 + lVar12,(long)puVar7 + lVar12,DVar4.unknown);
        goto LAB_100151224;
      }
      (**(code **)(lVar9 + 8))((long)puVar5 + lVar12,DVar4.unknown);
    }
    else if ((int)lVar13 == 0) {
      (**(code **)(lVar9 + 0x10))((long)puVar5 + lVar12,(long)puVar7 + lVar12,DVar4.unknown);
      (**(code **)(lVar9 + 0x38))((long)puVar5 + lVar12,0,1,DVar4.unknown);
      goto LAB_100151224;
    }
    puVar6 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    sVar8 = *(size_t *)(*(long *)(puVar6 + -8) + 0x40);
    puVar5 = (undefined8 *)((long)puVar5 + lVar12);
    puVar7 = (undefined8 *)((long)puVar7 + lVar12);
  }
  else {
    if ((int)puVar3 == 0) {
      *puVar5 = *puVar7;
      uVar11 = puVar7[1];
      puVar5[1] = uVar11;
      *(undefined1 *)(puVar5 + 2) = *(undefined1 *)(puVar7 + 2);
      lVar14 = (long)*(int *)(lVar1 + 0x18);
      DVar4 = Foundation::Date::typeMetadataAccessor();
      lVar9 = *(long *)(DVar4.unknown + -8);
      pcVar10 = *(code **)(lVar9 + 0x30);
      _swift_bridgeObjectRetain(uVar11);
      lVar12 = (long)puVar7 + lVar14;
      (*pcVar10)(lVar12,1,DVar4.unknown);
      if ((int)lVar12 == 0) {
        (**(code **)(lVar9 + 0x10))((long)puVar5 + lVar14,(long)puVar7 + lVar14,DVar4.unknown);
        (**(code **)(lVar9 + 0x38))((long)puVar5 + lVar14,0,1,DVar4.unknown);
      }
      else {
        puVar6 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar5 + lVar14),(void *)((long)puVar7 + lVar14),
                *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
      }
      (**(code **)(lVar13 + 0x38))(puVar5,0,1,lVar1);
      goto LAB_100151224;
    }
LAB_100151110:
    puVar6 = &DAT_100554cf8;
    FUN_100002f94(&DAT_100554cf8,&DAT_1004285a0);
    sVar8 = *(size_t *)(*(long *)(puVar6 + -8) + 0x40);
  }
  _memcpy(puVar5,puVar7,sVar8);
LAB_100151224:
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *puVar5 = *param_2;
  uVar11 = puVar5[1];
  puVar5[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  *(undefined1 *)(puVar5 + 2) = *(undefined1 *)(param_2 + 2);
  puVar5[3] = param_2[3];
  puVar5[4] = param_2[4];
  *(undefined1 *)(puVar5 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}

