// rea decompile_all
// name: FUN_10038cc90
// address: 0x10038cc90
// body: available
// range: 0x10038cc90-0x10038cf8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10038cc90(long param_1,long param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  UUID UVar6;
  long lVar7;
  Date DVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  void *pvVar12;
  long lVar13;
  code *pcVar14;
  code *pcVar15;
  undefined8 uVar16;
  
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  pcVar14 = *(code **)(*(long *)(UVar6.unknown + -8) + 0x20);
  (*pcVar14)(param_1,param_2,UVar6.unknown);
  lVar7 = 0;
  FUN_10025ee04();
  puVar4 = (undefined8 *)(param_2 + *(int *)(lVar7 + 0x14));
  uVar16 = *puVar4;
  puVar5 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x14));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar16;
  iVar3 = *(int *)(lVar7 + 0x18);
  DVar8 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar8.unknown + -8) + 0x20))(param_1 + iVar3,param_2 + iVar3,DVar8.unknown)
  ;
  *(undefined1 *)(param_1 + *(int *)(lVar7 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(lVar7 + 0x1c));
  *(undefined8 *)(param_1 + *(int *)(lVar7 + 0x20)) =
       *(undefined8 *)(param_2 + *(int *)(lVar7 + 0x20));
  *(undefined1 *)(param_1 + *(int *)(lVar7 + 0x24)) =
       *(undefined1 *)(param_2 + *(int *)(lVar7 + 0x24));
  *(undefined1 *)(param_1 + *(int *)(lVar7 + 0x28)) =
       *(undefined1 *)(param_2 + *(int *)(lVar7 + 0x28));
  *(undefined8 *)(param_1 + *(int *)(lVar7 + 0x2c)) =
       *(undefined8 *)(param_2 + *(int *)(lVar7 + 0x2c));
  *(undefined8 *)(param_1 + *(int *)(lVar7 + 0x30)) =
       *(undefined8 *)(param_2 + *(int *)(lVar7 + 0x30));
  *(undefined8 *)(param_1 + *(int *)(lVar7 + 0x34)) =
       *(undefined8 *)(param_2 + *(int *)(lVar7 + 0x34));
  lVar10 = (long)*(int *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  lVar9 = 0;
  FUN_1001d537c();
  lVar7 = param_2 + lVar10;
  _swift_getEnumCaseMultiPayload(lVar7,lVar9);
  if ((int)lVar7 == 1) {
    (*pcVar14)(param_1 + lVar10,param_2 + lVar10,UVar6.unknown);
    _swift_storeEnumTagMultiPayload(param_1 + lVar10,lVar9,1);
    lVar7 = *(long *)(lVar9 + -8);
  }
  else {
    lVar7 = *(long *)(lVar9 + -8);
    _memcpy((void *)(param_1 + lVar10),(void *)(param_2 + lVar10),*(size_t *)(lVar7 + 0x40));
  }
  lVar13 = (long)*(int *)(param_3 + 0x1c);
  pcVar15 = *(code **)(lVar7 + 0x30);
  lVar10 = param_2 + lVar13;
  (*pcVar15)(lVar10,1,lVar9);
  if ((int)lVar10 == 0) {
    lVar10 = param_2 + lVar13;
    _swift_getEnumCaseMultiPayload(lVar10,lVar9);
    if ((int)lVar10 == 1) {
      (*pcVar14)(param_1 + lVar13,param_2 + lVar13,UVar6.unknown);
      _swift_storeEnumTagMultiPayload(param_1 + lVar13,lVar9,1);
    }
    else {
      _memcpy((void *)(param_1 + lVar13),(void *)(param_2 + lVar13),*(size_t *)(lVar7 + 0x40));
    }
    (**(code **)(lVar7 + 0x38))(param_1 + lVar13,0,1,lVar9);
  }
  else {
    puVar11 = &DAT_100550ec0;
    FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
    _memcpy((void *)(param_1 + lVar13),(void *)(param_2 + lVar13),
            *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x24);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x20)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x20));
  puVar4 = (undefined8 *)(param_2 + iVar3);
  uVar16 = *puVar4;
  puVar5 = (undefined8 *)(param_1 + iVar3);
  puVar5[1] = puVar4[1];
  *puVar5 = uVar16;
  iVar3 = *(int *)(param_3 + 0x2c);
  puVar4 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x28));
  uVar16 = *puVar4;
  puVar5 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x28));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar16;
  pvVar1 = (void *)(param_1 + iVar3);
  pvVar2 = (void *)(param_2 + iVar3);
  pvVar12 = pvVar2;
  (*pcVar15)(pvVar2,1,lVar9);
  if ((int)pvVar12 == 0) {
    pvVar12 = pvVar2;
    _swift_getEnumCaseMultiPayload(pvVar2,lVar9);
    if ((int)pvVar12 == 1) {
      (*pcVar14)(pvVar1,pvVar2,UVar6.unknown);
      _swift_storeEnumTagMultiPayload(pvVar1,lVar9,1);
    }
    else {
      _memcpy(pvVar1,pvVar2,*(size_t *)(lVar7 + 0x40));
    }
    (**(code **)(lVar7 + 0x38))(pvVar1,0,1,lVar9);
  }
  else {
    puVar11 = &DAT_100550ec0;
    FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
    _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar11 + -8) + 0x40));
  }
  puVar11 = &DAT_10055dca8;
  FUN_100002f94(&DAT_10055dca8,&DAT_1004334a8);
  *(undefined8 *)((long)pvVar1 + (long)*(int *)(puVar11 + 0x1c)) =
       *(undefined8 *)((long)pvVar2 + (long)*(int *)(puVar11 + 0x1c));
  puVar4 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x30));
  uVar16 = *puVar4;
  puVar5 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x30));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar16;
  return param_1;
}

