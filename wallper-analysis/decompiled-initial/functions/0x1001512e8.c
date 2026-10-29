// rea decompile_all
// name: FUN_1001512e8
// address: 0x1001512e8
// body: available
// range: 0x1001512e8-0x10015145f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1001512e8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  Date DVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar11 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  lVar3 = 0;
  FUN_100150d64();
  lVar8 = *(long *)(lVar3 + -8);
  puVar4 = puVar2;
  (**(code **)(lVar8 + 0x30))(puVar2,1,lVar3);
  if ((int)puVar4 == 0) {
    uVar11 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar11;
    *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar2 + 2);
    lVar9 = (long)*(int *)(lVar3 + 0x18);
    DVar5 = Foundation::Date::typeMetadataAccessor();
    lVar10 = *(long *)(DVar5.unknown + -8);
    lVar6 = (long)puVar2 + lVar9;
    (**(code **)(lVar10 + 0x30))(lVar6,1,DVar5.unknown);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar10 + 0x20))((long)puVar1 + lVar9,(long)puVar2 + lVar9,DVar5.unknown);
      (**(code **)(lVar10 + 0x38))((long)puVar1 + lVar9,0,1,DVar5.unknown);
    }
    else {
      puVar7 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar9),(void *)((long)puVar2 + lVar9),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    (**(code **)(lVar8 + 0x38))(puVar1,0,1,lVar3);
  }
  else {
    puVar7 = &DAT_100554cf8;
    FUN_100002f94(&DAT_100554cf8,&DAT_1004285a0);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  puVar1[1] = param_2[1];
  *puVar1 = uVar11;
  puVar1[3] = uVar13;
  puVar1[2] = uVar12;
  uVar11 = *(undefined8 *)((long)param_2 + 0x19);
  *(undefined8 *)((long)puVar1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
  *(undefined8 *)((long)puVar1 + 0x19) = uVar11;
  return param_1;
}

