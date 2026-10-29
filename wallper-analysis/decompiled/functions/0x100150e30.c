// rea decompile_all
// name: FUN_100150e30
// address: 0x100150e30
// body: available
// range: 0x100150e30-0x100150fe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100150e30(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  Date DVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  uVar12 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar12;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  lVar3 = 0;
  FUN_100150d64();
  lVar10 = *(long *)(lVar3 + -8);
  pcVar9 = *(code **)(lVar10 + 0x30);
  _swift_bridgeObjectRetain(uVar12);
  puVar4 = puVar2;
  (*pcVar9)(puVar2,1,lVar3);
  if ((int)puVar4 == 0) {
    uVar12 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar12;
    *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar2 + 2);
    lVar11 = (long)*(int *)(lVar3 + 0x18);
    DVar5 = Foundation::Date::typeMetadataAccessor();
    lVar8 = *(long *)(DVar5.unknown + -8);
    pcVar9 = *(code **)(lVar8 + 0x30);
    _swift_bridgeObjectRetain(uVar12);
    lVar6 = (long)puVar2 + lVar11;
    (*pcVar9)(lVar6,1,DVar5.unknown);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar8 + 0x10))((long)puVar1 + lVar11,(long)puVar2 + lVar11,DVar5.unknown);
      (**(code **)(lVar8 + 0x38))((long)puVar1 + lVar11,0,1,DVar5.unknown);
    }
    else {
      puVar7 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar11),(void *)((long)puVar2 + lVar11),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    (**(code **)(lVar10 + 0x38))(puVar1,0,1,lVar3);
  }
  else {
    puVar7 = &DAT_100554cf8;
    FUN_100002f94(&DAT_100554cf8,&DAT_1004285a0);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar12 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar12;
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar12 = param_2[3];
  puVar1[4] = param_2[4];
  puVar1[3] = uVar12;
  *(undefined1 *)(puVar1 + 5) = *(undefined1 *)(param_2 + 5);
  _swift_bridgeObjectRetain();
  return param_1;
}

