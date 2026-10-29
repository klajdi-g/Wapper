// rea decompile_all
// name: FUN_100400888
// address: 0x100400888
// body: available
// range: 0x100400888-0x100400b5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100400888(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Date DVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  
  *param_1 = *param_2;
  uVar5 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  param_1[2] = param_2[2];
  uVar5 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  lVar8 = (long)*(int *)(param_3 + 0x20);
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar6 = *(long *)(DVar1.unknown + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  lVar2 = (long)param_1 + lVar8;
  (*pcVar7)(lVar2,1,DVar1.unknown);
  lVar3 = (long)param_2 + lVar8;
  (*pcVar7)(lVar3,1,DVar1.unknown);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 != 0) {
      (**(code **)(lVar6 + 8))((long)param_1 + lVar8,DVar1.unknown);
      goto LAB_100400984;
    }
    (**(code **)(lVar6 + 0x18))((long)param_1 + lVar8,(long)param_2 + lVar8,DVar1.unknown);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar6 + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,DVar1.unknown);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar8,0,1,DVar1.unknown);
  }
  else {
LAB_100400984:
    puVar4 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar8),(void *)((long)param_2 + lVar8),
            *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  }
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  lVar8 = (long)*(int *)(param_3 + 0x2c);
  lVar2 = (long)param_1 + lVar8;
  (*pcVar7)(lVar2,1,DVar1.unknown);
  lVar3 = (long)param_2 + lVar8;
  (*pcVar7)(lVar3,1,DVar1.unknown);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar6 + 0x18))((long)param_1 + lVar8,(long)param_2 + lVar8,DVar1.unknown);
      goto LAB_100400a60;
    }
    (**(code **)(lVar6 + 8))((long)param_1 + lVar8,DVar1.unknown);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar6 + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,DVar1.unknown);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar8,0,1,DVar1.unknown);
    goto LAB_100400a60;
  }
  puVar4 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  _memcpy((void *)((long)param_1 + lVar8),(void *)((long)param_2 + lVar8),
          *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
LAB_100400a60:
  lVar8 = (long)*(int *)(param_3 + 0x30);
  lVar2 = (long)param_1 + lVar8;
  (*pcVar7)(lVar2,1,DVar1.unknown);
  lVar3 = (long)param_2 + lVar8;
  (*pcVar7)(lVar3,1,DVar1.unknown);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar6 + 0x18))((long)param_1 + lVar8,(long)param_2 + lVar8,DVar1.unknown);
      return param_1;
    }
    (**(code **)(lVar6 + 8))((long)param_1 + lVar8,DVar1.unknown);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar6 + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,DVar1.unknown);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar8,0,1,DVar1.unknown);
    return param_1;
  }
  puVar4 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  _memcpy((void *)((long)param_1 + lVar8),(void *)((long)param_2 + lVar8),
          *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  return param_1;
}

