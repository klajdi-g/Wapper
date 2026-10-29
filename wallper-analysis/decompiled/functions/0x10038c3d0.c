// rea decompile_all
// name: FUN_10038c3d0
// address: 0x10038c3d0
// body: available
// range: 0x10038c3d0-0x10038c757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10038c3d0(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  UUID UVar7;
  long lVar8;
  Date DVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  void *pvVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  code *pcVar17;
  undefined8 uVar18;
  code *pcVar19;
  
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  pcVar19 = *(code **)(*(long *)(UVar7.unknown + -8) + 0x10);
  (*pcVar19)(param_1,param_2,UVar7.unknown);
  lVar8 = 0;
  FUN_10025ee04();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar8 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar8 + 0x14));
  uVar14 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar14;
  iVar6 = *(int *)(lVar8 + 0x18);
  DVar9 = Foundation::Date::typeMetadataAccessor();
  pcVar17 = *(code **)(*(long *)(DVar9.unknown + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar14);
  (*pcVar17)(param_1 + iVar6,param_2 + iVar6,DVar9.unknown);
  *(undefined1 *)(param_1 + *(int *)(lVar8 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(lVar8 + 0x1c));
  uVar14 = *(undefined8 *)(param_2 + *(int *)(lVar8 + 0x20));
  *(undefined8 *)(param_1 + *(int *)(lVar8 + 0x20)) = uVar14;
  *(undefined1 *)(param_1 + *(int *)(lVar8 + 0x24)) =
       *(undefined1 *)(param_2 + *(int *)(lVar8 + 0x24));
  *(undefined1 *)(param_1 + *(int *)(lVar8 + 0x28)) =
       *(undefined1 *)(param_2 + *(int *)(lVar8 + 0x28));
  *(undefined8 *)(param_1 + *(int *)(lVar8 + 0x2c)) =
       *(undefined8 *)(param_2 + *(int *)(lVar8 + 0x2c));
  *(undefined8 *)(param_1 + *(int *)(lVar8 + 0x30)) =
       *(undefined8 *)(param_2 + *(int *)(lVar8 + 0x30));
  uVar16 = *(undefined8 *)(param_2 + *(int *)(lVar8 + 0x34));
  *(undefined8 *)(param_1 + *(int *)(lVar8 + 0x34)) = uVar16;
  lVar11 = (long)*(int *)(param_3 + 0x18);
  uVar18 = *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) = uVar18;
  lVar10 = 0;
  FUN_1001d537c();
  _swift_bridgeObjectRetain(uVar14);
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(uVar18);
  lVar8 = param_2 + lVar11;
  _swift_getEnumCaseMultiPayload(lVar8,lVar10);
  if ((int)lVar8 == 1) {
    (*pcVar19)(param_1 + lVar11,param_2 + lVar11,UVar7.unknown);
    _swift_storeEnumTagMultiPayload(param_1 + lVar11,lVar10,1);
    lVar8 = *(long *)(lVar10 + -8);
  }
  else {
    lVar8 = *(long *)(lVar10 + -8);
    _memcpy((void *)(param_1 + lVar11),(void *)(param_2 + lVar11),*(size_t *)(lVar8 + 0x40));
  }
  lVar15 = (long)*(int *)(param_3 + 0x1c);
  pcVar17 = *(code **)(lVar8 + 0x30);
  lVar11 = param_2 + lVar15;
  (*pcVar17)(lVar11,1,lVar10);
  if ((int)lVar11 == 0) {
    lVar11 = param_2 + lVar15;
    _swift_getEnumCaseMultiPayload(lVar11,lVar10);
    if ((int)lVar11 == 1) {
      (*pcVar19)(param_1 + lVar15,param_2 + lVar15,UVar7.unknown);
      _swift_storeEnumTagMultiPayload(param_1 + lVar15,lVar10,1);
    }
    else {
      _memcpy((void *)(param_1 + lVar15),(void *)(param_2 + lVar15),*(size_t *)(lVar8 + 0x40));
    }
    (**(code **)(lVar8 + 0x38))(param_1 + lVar15,0,1,lVar10);
  }
  else {
    puVar12 = &DAT_100550ec0;
    FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
    _memcpy((void *)(param_1 + lVar15),(void *)(param_2 + lVar15),
            *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
  }
  iVar6 = *(int *)(param_3 + 0x24);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x20)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x20));
  puVar1 = (undefined8 *)(param_2 + iVar6);
  uVar14 = *puVar1;
  puVar2 = (undefined8 *)(param_1 + iVar6);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar14;
  iVar6 = *(int *)(param_3 + 0x2c);
  puVar2 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x28));
  puVar3 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x28));
  uVar14 = *puVar3;
  uVar16 = puVar3[1];
  *puVar2 = uVar14;
  puVar2[1] = uVar16;
  uVar16 = puVar1[1];
  pvVar4 = (void *)(param_1 + iVar6);
  pvVar5 = (void *)(param_2 + iVar6);
  _swift_bridgeObjectRetain();
  _swift_retain(uVar16);
  _swift_retain(uVar14);
  pvVar13 = pvVar5;
  (*pcVar17)(pvVar5,1,lVar10);
  if ((int)pvVar13 == 0) {
    pvVar13 = pvVar5;
    _swift_getEnumCaseMultiPayload(pvVar5,lVar10);
    if ((int)pvVar13 == 1) {
      (*pcVar19)(pvVar4,pvVar5,UVar7.unknown);
      _swift_storeEnumTagMultiPayload(pvVar4,lVar10,1);
    }
    else {
      _memcpy(pvVar4,pvVar5,*(size_t *)(lVar8 + 0x40));
    }
    (**(code **)(lVar8 + 0x38))(pvVar4,0,1,lVar10);
  }
  else {
    puVar12 = &DAT_100550ec0;
    FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
    _memcpy(pvVar4,pvVar5,*(size_t *)(*(long *)(puVar12 + -8) + 0x40));
  }
  puVar12 = &DAT_10055dca8;
  FUN_100002f94(&DAT_10055dca8,&DAT_1004334a8);
  *(undefined8 *)((long)pvVar4 + (long)*(int *)(puVar12 + 0x1c)) =
       *(undefined8 *)((long)pvVar5 + (long)*(int *)(puVar12 + 0x1c));
  puVar1 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x30));
  uVar14 = puVar1[1];
  uVar16 = *puVar1;
  puVar2 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x30));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar16;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar16);
  _swift_retain(uVar14);
  return param_1;
}

