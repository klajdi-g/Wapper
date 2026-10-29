// rea decompile_all
// name: FUN_100169d70
// address: 0x100169d70
// body: available
// range: 0x100169d70-0x10016a00f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100169d70(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  Date DVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  code *pcVar13;
  
  *param_1 = *param_2;
  uVar8 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  param_1[2] = param_2[2];
  uVar8 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  param_1[4] = param_2[4];
  uVar8 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  uVar8 = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[6] = uVar8;
  uVar8 = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = uVar8;
  lVar10 = (long)*(int *)(param_3 + 0x24);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar12 = *(long *)(DVar4.unknown + -8);
  pcVar13 = *(code **)(lVar12 + 0x30);
  lVar5 = (long)param_1 + lVar10;
  (*pcVar13)(lVar5,1,DVar4.unknown);
  lVar6 = (long)param_2 + lVar10;
  (*pcVar13)(lVar6,1,DVar4.unknown);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 != 0) {
      (**(code **)(lVar12 + 8))((long)param_1 + lVar10,DVar4.unknown);
      goto LAB_100169e9c;
    }
    (**(code **)(lVar12 + 0x18))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar4.unknown);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar12 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar4.unknown);
    (**(code **)(lVar12 + 0x38))((long)param_1 + lVar10,0,1,DVar4.unknown);
  }
  else {
LAB_100169e9c:
    puVar7 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar8 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = uVar8;
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  uVar9 = puVar2[1];
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    if (uVar9 >> 0x3c < 0xf) {
      uVar11 = *puVar2;
      FUN_10011a30c(uVar11,uVar9);
      uVar8 = *puVar1;
      uVar3 = puVar1[1];
      *puVar1 = uVar11;
      puVar1[1] = uVar9;
      FUN_100093624(uVar8,uVar3);
      goto LAB_100169f78;
    }
    FUN_10016a010(puVar1);
  }
  else if (uVar9 >> 0x3c < 0xf) {
    uVar8 = *puVar2;
    FUN_10011a30c(uVar8,uVar9);
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
    goto LAB_100169f78;
  }
  uVar8 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar8;
LAB_100169f78:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *puVar1 = *puVar2;
  uVar8 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  uVar8 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = uVar8;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  uVar8 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  *puVar1 = uVar8;
  return param_1;
}

