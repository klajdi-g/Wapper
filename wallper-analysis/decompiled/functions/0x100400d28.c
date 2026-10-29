// rea decompile_all
// name: FUN_100400d28
// address: 0x100400d28
// body: available
// range: 0x100400d28-0x100400fd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100400d28(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  Date DVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  
  uVar10 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar10;
  _swift_bridgeObjectRelease(uVar2);
  uVar10 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar10;
  _swift_bridgeObjectRelease(uVar2);
  uVar10 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar10;
  lVar9 = (long)*(int *)(param_3 + 0x20);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar7 = *(long *)(DVar3.unknown + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar4 = (long)param_1 + lVar9;
  (*pcVar8)(lVar4,1,DVar3.unknown);
  lVar5 = (long)param_2 + lVar9;
  (*pcVar8)(lVar5,1,DVar3.unknown);
  if ((int)lVar4 == 0) {
    if ((int)lVar5 != 0) {
      (**(code **)(lVar7 + 8))((long)param_1 + lVar9,DVar3.unknown);
      goto LAB_100400dfc;
    }
    (**(code **)(lVar7 + 0x28))((long)param_1 + lVar9,(long)param_2 + lVar9,DVar3.unknown);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar9,(long)param_2 + lVar9,DVar3.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,DVar3.unknown);
  }
  else {
LAB_100400dfc:
    puVar6 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x28);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
  lVar9 = (long)*(int *)(param_3 + 0x2c);
  lVar4 = (long)param_1 + lVar9;
  (*pcVar8)(lVar4,1,DVar3.unknown);
  lVar5 = (long)param_2 + lVar9;
  (*pcVar8)(lVar5,1,DVar3.unknown);
  if ((int)lVar4 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar7 + 0x28))((long)param_1 + lVar9,(long)param_2 + lVar9,DVar3.unknown);
      goto LAB_100400ed4;
    }
    (**(code **)(lVar7 + 8))((long)param_1 + lVar9,DVar3.unknown);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar9,(long)param_2 + lVar9,DVar3.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,DVar3.unknown);
    goto LAB_100400ed4;
  }
  puVar6 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
          *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
LAB_100400ed4:
  lVar9 = (long)*(int *)(param_3 + 0x30);
  lVar4 = (long)param_1 + lVar9;
  (*pcVar8)(lVar4,1,DVar3.unknown);
  lVar5 = (long)param_2 + lVar9;
  (*pcVar8)(lVar5,1,DVar3.unknown);
  if ((int)lVar4 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar7 + 0x28))((long)param_1 + lVar9,(long)param_2 + lVar9,DVar3.unknown);
      return param_1;
    }
    (**(code **)(lVar7 + 8))((long)param_1 + lVar9,DVar3.unknown);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar9,(long)param_2 + lVar9,DVar3.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,DVar3.unknown);
    return param_1;
  }
  puVar6 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
          *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  return param_1;
}

