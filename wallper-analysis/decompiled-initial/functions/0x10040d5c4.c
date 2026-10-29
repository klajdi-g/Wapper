// rea decompile_all
// name: FUN_10040d5c4
// address: 0x10040d5c4
// body: available
// range: 0x10040d5c4-0x10040d933 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10040d5c4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  Date DVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  
  uVar7 = param_2[1];
  uVar3 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar7;
  _swift_bridgeObjectRelease(uVar3);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar7 = param_2[5];
  uVar3 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  _swift_bridgeObjectRelease(uVar3);
  uVar7 = param_2[7];
  uVar3 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar7;
  _swift_bridgeObjectRelease(uVar3);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[0xb] = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xd] = param_2[0xd];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  uVar7 = param_2[0x10];
  uVar3 = param_1[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar7;
  _swift_bridgeObjectRelease(uVar3);
  uVar7 = param_2[0x12];
  uVar3 = param_1[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = uVar7;
  _swift_bridgeObjectRelease(uVar3);
  param_1[0x13] = param_2[0x13];
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  uVar7 = param_2[0x16];
  uVar3 = param_1[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar7;
  _swift_bridgeObjectRelease(uVar3);
  uVar7 = param_2[0x18];
  uVar3 = param_1[0x18];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = uVar7;
  _swift_bridgeObjectRelease(uVar3);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  lVar11 = (long)*(int *)(param_3 + 0x48);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar4.unknown + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar8 = (long)param_1 + lVar11;
  (*pcVar10)(lVar8,1,DVar4.unknown);
  lVar5 = (long)param_2 + lVar11;
  (*pcVar10)(lVar5,1,DVar4.unknown);
  if ((int)lVar8 == 0) {
    if ((int)lVar5 != 0) {
      (**(code **)(lVar9 + 8))((long)param_1 + lVar11,DVar4.unknown);
      goto LAB_10040d740;
    }
    (**(code **)(lVar9 + 0x28))((long)param_1 + lVar11,(long)param_2 + lVar11,DVar4.unknown);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar9 + 0x20))((long)param_1 + lVar11,(long)param_2 + lVar11,DVar4.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar11,0,1,DVar4.unknown);
  }
  else {
LAB_10040d740:
    puVar6 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  uVar7 = puVar2[1];
  uVar3 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar7;
  _swift_bridgeObjectRelease(uVar3);
  lVar8 = (long)*(int *)(param_3 + 0x50);
  uVar7 = *(undefined8 *)((long)param_1 + lVar8);
  *(undefined8 *)((long)param_1 + lVar8) = *(undefined8 *)((long)param_2 + lVar8);
  _swift_bridgeObjectRelease(uVar7);
  lVar11 = (long)*(int *)(param_3 + 0x54);
  lVar8 = (long)param_1 + lVar11;
  (*pcVar10)(lVar8,1,DVar4.unknown);
  lVar5 = (long)param_2 + lVar11;
  (*pcVar10)(lVar5,1,DVar4.unknown);
  if ((int)lVar8 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar9 + 0x28))((long)param_1 + lVar11,(long)param_2 + lVar11,DVar4.unknown);
      goto LAB_10040d834;
    }
    (**(code **)(lVar9 + 8))((long)param_1 + lVar11,DVar4.unknown);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar9 + 0x20))((long)param_1 + lVar11,(long)param_2 + lVar11,DVar4.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar11,0,1,DVar4.unknown);
    goto LAB_10040d834;
  }
  puVar6 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
          *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
LAB_10040d834:
  lVar11 = (long)*(int *)(param_3 + 0x58);
  lVar8 = (long)param_1 + lVar11;
  (*pcVar10)(lVar8,1,DVar4.unknown);
  lVar5 = (long)param_2 + lVar11;
  (*pcVar10)(lVar5,1,DVar4.unknown);
  if ((int)lVar8 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar9 + 0x28))((long)param_1 + lVar11,(long)param_2 + lVar11,DVar4.unknown);
      return param_1;
    }
    (**(code **)(lVar9 + 8))((long)param_1 + lVar11,DVar4.unknown);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar9 + 0x20))((long)param_1 + lVar11,(long)param_2 + lVar11,DVar4.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar11,0,1,DVar4.unknown);
    return param_1;
  }
  puVar6 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
          *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  return param_1;
}

