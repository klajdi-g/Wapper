// rea decompile_all
// name: FUN_10038cf90
// address: 0x10038cf90
// body: available
// range: 0x10038cf90-0x10038d467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10038cf90(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  UUID UVar6;
  long lVar7;
  undefined8 uVar8;
  Date DVar9;
  undefined8 uVar10;
  undefined *puVar11;
  void *pvVar12;
  void *pvVar13;
  size_t sVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  lVar18 = *(long *)(UVar6.unknown + -8);
  (**(code **)(lVar18 + 0x28))(param_1,param_2,UVar6.unknown);
  lVar7 = 0;
  FUN_10025ee04();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar7 + 0x14));
  uVar10 = puVar2[1];
  uVar8 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar10;
  _swift_bridgeObjectRelease(uVar8);
  iVar5 = *(int *)(lVar7 + 0x18);
  DVar9 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar9.unknown + -8) + 0x28))(param_1 + iVar5,param_2 + iVar5,DVar9.unknown)
  ;
  *(undefined1 *)(param_1 + *(int *)(lVar7 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(lVar7 + 0x1c));
  lVar15 = (long)*(int *)(lVar7 + 0x20);
  uVar10 = *(undefined8 *)(param_1 + lVar15);
  *(undefined8 *)(param_1 + lVar15) = *(undefined8 *)(param_2 + lVar15);
  _swift_bridgeObjectRelease(uVar10);
  *(undefined1 *)(param_1 + *(int *)(lVar7 + 0x24)) =
       *(undefined1 *)(param_2 + *(int *)(lVar7 + 0x24));
  *(undefined1 *)(param_1 + *(int *)(lVar7 + 0x28)) =
       *(undefined1 *)(param_2 + *(int *)(lVar7 + 0x28));
  *(undefined8 *)(param_1 + *(int *)(lVar7 + 0x2c)) =
       *(undefined8 *)(param_2 + *(int *)(lVar7 + 0x2c));
  *(undefined8 *)(param_1 + *(int *)(lVar7 + 0x30)) =
       *(undefined8 *)(param_2 + *(int *)(lVar7 + 0x30));
  lVar7 = (long)*(int *)(lVar7 + 0x34);
  uVar10 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = *(undefined8 *)(param_2 + lVar7);
  _swift_bridgeObjectRelease(uVar10);
  lVar7 = (long)*(int *)(param_3 + 0x14);
  uVar10 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = *(undefined8 *)(param_2 + lVar7);
  _swift_bridgeObjectRelease(uVar10);
  if (param_1 != param_2) {
    lVar16 = (long)*(int *)(param_3 + 0x18);
    FUN_100029548(param_1 + lVar16,FUN_1001d537c);
    lVar15 = 0;
    FUN_1001d537c();
    lVar7 = param_2 + lVar16;
    _swift_getEnumCaseMultiPayload(lVar7,lVar15);
    if ((int)lVar7 == 1) {
      (**(code **)(lVar18 + 0x20))(param_1 + lVar16,param_2 + lVar16,UVar6.unknown);
      _swift_storeEnumTagMultiPayload(param_1 + lVar16,lVar15,1);
    }
    else {
      _memcpy((void *)(param_1 + lVar16),(void *)(param_2 + lVar16),
              *(size_t *)(*(long *)(lVar15 + -8) + 0x40));
    }
  }
  lVar17 = (long)*(int *)(param_3 + 0x1c);
  lVar16 = 0;
  FUN_1001d537c();
  lVar20 = *(long *)(lVar16 + -8);
  pcVar19 = *(code **)(lVar20 + 0x30);
  lVar7 = param_1 + lVar17;
  (*pcVar19)(lVar7,1,lVar16);
  lVar15 = param_2 + lVar17;
  (*pcVar19)(lVar15,1,lVar16);
  if ((int)lVar7 == 0) {
    if ((int)lVar15 != 0) {
      FUN_100029548(param_1 + lVar17,FUN_1001d537c);
      goto LAB_10038d1b0;
    }
    if (param_1 != param_2) {
      FUN_100029548(param_1 + lVar17,FUN_1001d537c);
      lVar7 = param_2 + lVar17;
      _swift_getEnumCaseMultiPayload(lVar7,lVar16);
      if ((int)lVar7 == 1) {
        (**(code **)(lVar18 + 0x20))(param_1 + lVar17,param_2 + lVar17,UVar6.unknown);
        _swift_storeEnumTagMultiPayload(param_1 + lVar17,lVar16,1);
        goto LAB_10038d258;
      }
      sVar14 = *(size_t *)(lVar20 + 0x40);
      goto LAB_10038d1cc;
    }
  }
  else {
    if ((int)lVar15 == 0) {
      lVar7 = param_2 + lVar17;
      _swift_getEnumCaseMultiPayload(lVar7,lVar16);
      if ((int)lVar7 == 1) {
        (**(code **)(lVar18 + 0x20))(param_1 + lVar17,param_2 + lVar17,UVar6.unknown);
        _swift_storeEnumTagMultiPayload(param_1 + lVar17,lVar16,1);
      }
      else {
        _memcpy((void *)(param_1 + lVar17),(void *)(param_2 + lVar17),*(size_t *)(lVar20 + 0x40));
      }
      (**(code **)(lVar20 + 0x38))(param_1 + lVar17,0,1,lVar16);
      goto LAB_10038d258;
    }
LAB_10038d1b0:
    puVar11 = &DAT_100550ec0;
    FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
    sVar14 = *(size_t *)(*(long *)(puVar11 + -8) + 0x40);
LAB_10038d1cc:
    _memcpy((void *)(param_1 + lVar17),(void *)(param_2 + lVar17),sVar14);
  }
LAB_10038d258:
  lVar7 = (long)*(int *)(param_3 + 0x20);
  uVar10 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = *(undefined8 *)(param_2 + lVar7);
  _swift_bridgeObjectRelease(uVar10);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  uVar10 = puVar1[1];
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  uVar8 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar8;
  _swift_release(uVar10);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x28));
  uVar10 = *puVar1;
  *puVar1 = *puVar2;
  _swift_release(uVar10);
  puVar1[1] = puVar2[1];
  pvVar3 = (void *)(param_1 + *(int *)(param_3 + 0x2c));
  pvVar4 = (void *)(param_2 + *(int *)(param_3 + 0x2c));
  pvVar12 = pvVar3;
  (*pcVar19)(pvVar3,1,lVar16);
  pvVar13 = pvVar4;
  (*pcVar19)(pvVar4,1,lVar16);
  if ((int)pvVar12 == 0) {
    if ((int)pvVar13 != 0) {
      FUN_100029548(pvVar3,FUN_1001d537c);
      goto LAB_10038d338;
    }
    if (param_1 == param_2) goto LAB_10038d3e0;
    FUN_100029548(pvVar3,FUN_1001d537c);
    pvVar12 = pvVar4;
    _swift_getEnumCaseMultiPayload(pvVar4,lVar16);
    if ((int)pvVar12 == 1) {
      (**(code **)(lVar18 + 0x20))(pvVar3,pvVar4,UVar6.unknown);
      _swift_storeEnumTagMultiPayload(pvVar3,lVar16,1);
      goto LAB_10038d3e0;
    }
    sVar14 = *(size_t *)(lVar20 + 0x40);
  }
  else {
    if ((int)pvVar13 == 0) {
      pvVar12 = pvVar4;
      _swift_getEnumCaseMultiPayload(pvVar4,lVar16);
      if ((int)pvVar12 == 1) {
        (**(code **)(lVar18 + 0x20))(pvVar3,pvVar4,UVar6.unknown);
        _swift_storeEnumTagMultiPayload(pvVar3,lVar16,1);
      }
      else {
        _memcpy(pvVar3,pvVar4,*(size_t *)(lVar20 + 0x40));
      }
      (**(code **)(lVar20 + 0x38))(pvVar3,0,1,lVar16);
      goto LAB_10038d3e0;
    }
LAB_10038d338:
    puVar11 = &DAT_100550ec0;
    FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
    sVar14 = *(size_t *)(*(long *)(puVar11 + -8) + 0x40);
  }
  _memcpy(pvVar3,pvVar4,sVar14);
LAB_10038d3e0:
  puVar11 = &DAT_10055dca8;
  FUN_100002f94(&DAT_10055dca8,&DAT_1004334a8);
  lVar7 = (long)*(int *)(puVar11 + 0x1c);
  uVar10 = *(undefined8 *)((long)pvVar3 + lVar7);
  *(undefined8 *)((long)pvVar3 + lVar7) = *(undefined8 *)((long)pvVar4 + lVar7);
  _swift_release(uVar10);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x30));
  uVar10 = *puVar1;
  *puVar1 = *puVar2;
  _swift_bridgeObjectRelease(uVar10);
  uVar10 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_release(uVar10);
  return param_1;
}

