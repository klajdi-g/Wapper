// rea decompile_all
// name: FUN_10040cf84
// address: 0x10040cf84
// body: available
// range: 0x10040cf84-0x10040d37b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10040cf84(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  Date DVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  
  *param_1 = *param_2;
  uVar7 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  uVar7 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar7;
  param_1[4] = param_2[4];
  uVar7 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  param_1[6] = param_2[6];
  uVar7 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar7 = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[9] = uVar7;
  uVar7 = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xb] = uVar7;
  uVar7 = param_2[0xd];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  param_1[0xd] = uVar7;
  param_1[0xf] = param_2[0xf];
  uVar7 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  param_1[0x11] = param_2[0x11];
  uVar7 = param_1[0x12];
  param_1[0x12] = param_2[0x12];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  uVar7 = param_2[0x13];
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  param_1[0x13] = uVar7;
  param_1[0x15] = param_2[0x15];
  uVar7 = param_1[0x16];
  param_1[0x16] = param_2[0x16];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  param_1[0x17] = param_2[0x17];
  uVar7 = param_1[0x18];
  param_1[0x18] = param_2[0x18];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  lVar10 = (long)*(int *)(param_3 + 0x48);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar3.unknown + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar6 = (long)param_1 + lVar10;
  (*pcVar9)(lVar6,1,DVar3.unknown);
  lVar4 = (long)param_2 + lVar10;
  (*pcVar9)(lVar4,1,DVar3.unknown);
  if ((int)lVar6 == 0) {
    if ((int)lVar4 != 0) {
      (**(code **)(lVar8 + 8))((long)param_1 + lVar10,DVar3.unknown);
      goto LAB_10040d170;
    }
    (**(code **)(lVar8 + 0x18))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar3.unknown);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar8 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar3.unknown);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar10,0,1,DVar3.unknown);
  }
  else {
LAB_10040d170:
    puVar5 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  *puVar1 = *puVar2;
  uVar7 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  lVar6 = (long)*(int *)(param_3 + 0x50);
  uVar7 = *(undefined8 *)((long)param_1 + lVar6);
  *(undefined8 *)((long)param_1 + lVar6) = *(undefined8 *)((long)param_2 + lVar6);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  lVar10 = (long)*(int *)(param_3 + 0x54);
  lVar6 = (long)param_1 + lVar10;
  (*pcVar9)(lVar6,1,DVar3.unknown);
  lVar4 = (long)param_2 + lVar10;
  (*pcVar9)(lVar4,1,DVar3.unknown);
  if ((int)lVar6 == 0) {
    if ((int)lVar4 == 0) {
      (**(code **)(lVar8 + 0x18))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar3.unknown);
      goto LAB_10040d27c;
    }
    (**(code **)(lVar8 + 8))((long)param_1 + lVar10,DVar3.unknown);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar8 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar3.unknown);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar10,0,1,DVar3.unknown);
    goto LAB_10040d27c;
  }
  puVar5 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
          *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
LAB_10040d27c:
  lVar10 = (long)*(int *)(param_3 + 0x58);
  lVar6 = (long)param_1 + lVar10;
  (*pcVar9)(lVar6,1,DVar3.unknown);
  lVar4 = (long)param_2 + lVar10;
  (*pcVar9)(lVar4,1,DVar3.unknown);
  if ((int)lVar6 == 0) {
    if ((int)lVar4 == 0) {
      (**(code **)(lVar8 + 0x18))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar3.unknown);
      return param_1;
    }
    (**(code **)(lVar8 + 8))((long)param_1 + lVar10,DVar3.unknown);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar8 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar3.unknown);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar10,0,1,DVar3.unknown);
    return param_1;
  }
  puVar5 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
          *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  return param_1;
}

