// rea decompile_all
// name: FUN_10038c758
// address: 0x10038c758
// body: available
// range: 0x10038c758-0x10038cc8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10038c758(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  UUID UVar6;
  long lVar7;
  Date DVar8;
  undefined *puVar9;
  void *pvVar10;
  void *pvVar11;
  size_t sVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  undefined8 uVar21;
  
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  lVar18 = *(long *)(UVar6.unknown + -8);
  (**(code **)(lVar18 + 0x18))(param_1,param_2,UVar6.unknown);
  lVar7 = 0;
  FUN_10025ee04();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar7 + 0x14));
  *puVar1 = *puVar2;
  uVar14 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar14);
  iVar5 = *(int *)(lVar7 + 0x18);
  DVar8 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar8.unknown + -8) + 0x18))(param_1 + iVar5,param_2 + iVar5,DVar8.unknown)
  ;
  *(undefined1 *)(param_1 + *(int *)(lVar7 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(lVar7 + 0x1c));
  lVar13 = (long)*(int *)(lVar7 + 0x20);
  uVar14 = *(undefined8 *)(param_1 + lVar13);
  *(undefined8 *)(param_1 + lVar13) = *(undefined8 *)(param_2 + lVar13);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar14);
  *(undefined1 *)(param_1 + *(int *)(lVar7 + 0x24)) =
       *(undefined1 *)(param_2 + *(int *)(lVar7 + 0x24));
  *(undefined1 *)(param_1 + *(int *)(lVar7 + 0x28)) =
       *(undefined1 *)(param_2 + *(int *)(lVar7 + 0x28));
  *(undefined8 *)(param_1 + *(int *)(lVar7 + 0x2c)) =
       *(undefined8 *)(param_2 + *(int *)(lVar7 + 0x2c));
  *(undefined8 *)(param_1 + *(int *)(lVar7 + 0x30)) =
       *(undefined8 *)(param_2 + *(int *)(lVar7 + 0x30));
  lVar7 = (long)*(int *)(lVar7 + 0x34);
  uVar14 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = *(undefined8 *)(param_2 + lVar7);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar14);
  lVar7 = (long)*(int *)(param_3 + 0x14);
  uVar14 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = *(undefined8 *)(param_2 + lVar7);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar14);
  if (param_1 != param_2) {
    lVar15 = (long)*(int *)(param_3 + 0x18);
    FUN_100029548(param_1 + lVar15,FUN_1001d537c);
    lVar13 = 0;
    FUN_1001d537c();
    lVar7 = param_2 + lVar15;
    _swift_getEnumCaseMultiPayload(lVar7,lVar13);
    if ((int)lVar7 == 1) {
      (**(code **)(lVar18 + 0x10))(param_1 + lVar15,param_2 + lVar15,UVar6.unknown);
      _swift_storeEnumTagMultiPayload(param_1 + lVar15,lVar13,1);
    }
    else {
      _memcpy((void *)(param_1 + lVar15),(void *)(param_2 + lVar15),
              *(size_t *)(*(long *)(lVar13 + -8) + 0x40));
    }
  }
  lVar17 = (long)*(int *)(param_3 + 0x1c);
  lVar15 = 0;
  FUN_1001d537c();
  lVar20 = *(long *)(lVar15 + -8);
  pcVar19 = *(code **)(lVar20 + 0x30);
  lVar7 = param_1 + lVar17;
  (*pcVar19)(lVar7,1,lVar15);
  lVar13 = param_2 + lVar17;
  (*pcVar19)(lVar13,1,lVar15);
  if ((int)lVar7 == 0) {
    if ((int)lVar13 != 0) {
      FUN_100029548(param_1 + lVar17,FUN_1001d537c);
      goto LAB_10038c9a0;
    }
    if (param_1 != param_2) {
      FUN_100029548(param_1 + lVar17,FUN_1001d537c);
      lVar7 = param_2 + lVar17;
      _swift_getEnumCaseMultiPayload(lVar7,lVar15);
      if ((int)lVar7 == 1) {
        (**(code **)(lVar18 + 0x10))(param_1 + lVar17,param_2 + lVar17,UVar6.unknown);
        _swift_storeEnumTagMultiPayload(param_1 + lVar17,lVar15,1);
        goto LAB_10038ca48;
      }
      sVar12 = *(size_t *)(lVar20 + 0x40);
      goto LAB_10038c9bc;
    }
  }
  else {
    if ((int)lVar13 == 0) {
      lVar7 = param_2 + lVar17;
      _swift_getEnumCaseMultiPayload(lVar7,lVar15);
      if ((int)lVar7 == 1) {
        (**(code **)(lVar18 + 0x10))(param_1 + lVar17,param_2 + lVar17,UVar6.unknown);
        _swift_storeEnumTagMultiPayload(param_1 + lVar17,lVar15,1);
      }
      else {
        _memcpy((void *)(param_1 + lVar17),(void *)(param_2 + lVar17),*(size_t *)(lVar20 + 0x40));
      }
      (**(code **)(lVar20 + 0x38))(param_1 + lVar17,0,1,lVar15);
      goto LAB_10038ca48;
    }
LAB_10038c9a0:
    puVar9 = &DAT_100550ec0;
    FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
    sVar12 = *(size_t *)(*(long *)(puVar9 + -8) + 0x40);
LAB_10038c9bc:
    _memcpy((void *)(param_1 + lVar17),(void *)(param_2 + lVar17),sVar12);
  }
LAB_10038ca48:
  lVar7 = (long)*(int *)(param_3 + 0x20);
  uVar14 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = *(undefined8 *)(param_2 + lVar7);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar14);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  uVar16 = puVar1[1];
  uVar14 = puVar2[1];
  uVar21 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar21;
  _swift_retain(uVar14);
  _swift_release(uVar16);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x28));
  uVar14 = *puVar1;
  *puVar1 = *puVar2;
  _swift_retain();
  _swift_release(uVar14);
  puVar1[1] = puVar2[1];
  pvVar3 = (void *)(param_1 + *(int *)(param_3 + 0x2c));
  pvVar4 = (void *)(param_2 + *(int *)(param_3 + 0x2c));
  pvVar10 = pvVar3;
  (*pcVar19)(pvVar3,1,lVar15);
  pvVar11 = pvVar4;
  (*pcVar19)(pvVar4,1,lVar15);
  if ((int)pvVar10 == 0) {
    if ((int)pvVar11 != 0) {
      FUN_100029548(pvVar3,FUN_1001d537c);
      goto LAB_10038cb48;
    }
    if (param_1 == param_2) goto LAB_10038cbf0;
    FUN_100029548(pvVar3,FUN_1001d537c);
    pvVar10 = pvVar4;
    _swift_getEnumCaseMultiPayload(pvVar4,lVar15);
    if ((int)pvVar10 == 1) {
      (**(code **)(lVar18 + 0x10))(pvVar3,pvVar4,UVar6.unknown);
      _swift_storeEnumTagMultiPayload(pvVar3,lVar15,1);
      goto LAB_10038cbf0;
    }
    sVar12 = *(size_t *)(lVar20 + 0x40);
  }
  else {
    if ((int)pvVar11 == 0) {
      pvVar10 = pvVar4;
      _swift_getEnumCaseMultiPayload(pvVar4,lVar15);
      if ((int)pvVar10 == 1) {
        (**(code **)(lVar18 + 0x10))(pvVar3,pvVar4,UVar6.unknown);
        _swift_storeEnumTagMultiPayload(pvVar3,lVar15,1);
      }
      else {
        _memcpy(pvVar3,pvVar4,*(size_t *)(lVar20 + 0x40));
      }
      (**(code **)(lVar20 + 0x38))(pvVar3,0,1,lVar15);
      goto LAB_10038cbf0;
    }
LAB_10038cb48:
    puVar9 = &DAT_100550ec0;
    FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
    sVar12 = *(size_t *)(*(long *)(puVar9 + -8) + 0x40);
  }
  _memcpy(pvVar3,pvVar4,sVar12);
LAB_10038cbf0:
  puVar9 = &DAT_10055dca8;
  FUN_100002f94(&DAT_10055dca8,&DAT_1004334a8);
  lVar7 = (long)*(int *)(puVar9 + 0x1c);
  uVar14 = *(undefined8 *)((long)pvVar3 + lVar7);
  *(undefined8 *)((long)pvVar3 + lVar7) = *(undefined8 *)((long)pvVar4 + lVar7);
  _swift_retain();
  _swift_release(uVar14);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x30));
  uVar14 = *puVar1;
  *puVar1 = *puVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar14);
  uVar14 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_retain();
  _swift_release(uVar14);
  return param_1;
}

