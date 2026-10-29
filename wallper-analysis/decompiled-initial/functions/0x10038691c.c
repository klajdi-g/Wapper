// rea decompile_all
// name: FUN_10038691c
// address: 0x10038691c
// body: available
// range: 0x10038691c-0x100386d33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10038691c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  UUID UVar7;
  undefined8 uVar8;
  undefined *puVar9;
  DismissAction DVar10;
  long lVar11;
  void *pvVar12;
  void *pvVar13;
  undefined8 uVar14;
  size_t sVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  lVar16 = *(long *)(UVar7.unknown + -8);
  (**(code **)(lVar16 + 0x28))(param_1,param_2,UVar7.unknown);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar8 = *puVar1;
  *puVar1 = *puVar2;
  _swift_release(uVar8);
  puVar1[1] = puVar2[1];
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  uVar8 = *puVar1;
  *puVar1 = *puVar2;
  _swift_release(uVar8);
  puVar1[1] = puVar2[1];
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar8 = *puVar1;
  *puVar1 = *puVar2;
  _swift_release(uVar8);
  puVar1[1] = puVar2[1];
  if (param_1 != param_2) {
    lVar17 = (long)*(int *)(param_3 + 0x20);
    puVar9 = &DAT_10055c948;
    FUN_10002a29c(param_1 + lVar17,&DAT_10055c948,&DAT_100435240);
    FUN_100002f94(&DAT_10055c948,&DAT_100435240);
    lVar11 = param_2 + lVar17;
    _swift_getEnumCaseMultiPayload(lVar11,puVar9);
    if ((int)lVar11 == 1) {
      DVar10 = SwiftUI::DismissAction::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar10.unknown + -8) + 0x20))
                (param_1 + lVar17,param_2 + lVar17,DVar10.unknown);
      _swift_storeEnumTagMultiPayload(param_1 + lVar17,puVar9,1);
    }
    else {
      _memcpy((void *)(param_1 + lVar17),(void *)(param_2 + lVar17),
              *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    }
  }
  pvVar3 = (void *)(param_1 + *(int *)(param_3 + 0x24));
  pvVar4 = (void *)(param_2 + *(int *)(param_3 + 0x24));
  lVar11 = 0;
  FUN_1001d537c();
  lVar17 = *(long *)(lVar11 + -8);
  pcVar18 = *(code **)(lVar17 + 0x30);
  pvVar12 = pvVar3;
  (*pcVar18)(pvVar3,1,lVar11);
  pvVar13 = pvVar4;
  (*pcVar18)(pvVar4,1,lVar11);
  if ((int)pvVar12 == 0) {
    if ((int)pvVar13 != 0) {
      FUN_100029548(pvVar3,FUN_1001d537c);
      goto LAB_100386b14;
    }
    if (param_1 == param_2) goto LAB_100386bc0;
    FUN_100029548(pvVar3,FUN_1001d537c);
    pvVar12 = pvVar4;
    _swift_getEnumCaseMultiPayload(pvVar4,lVar11);
    if ((int)pvVar12 == 1) {
      (**(code **)(lVar16 + 0x20))(pvVar3,pvVar4,UVar7.unknown);
      _swift_storeEnumTagMultiPayload(pvVar3,lVar11,1);
      goto LAB_100386bc0;
    }
    sVar15 = *(size_t *)(lVar17 + 0x40);
  }
  else {
    if ((int)pvVar13 == 0) {
      pvVar12 = pvVar4;
      _swift_getEnumCaseMultiPayload(pvVar4,lVar11);
      if ((int)pvVar12 == 1) {
        (**(code **)(lVar16 + 0x20))(pvVar3,pvVar4,UVar7.unknown);
        _swift_storeEnumTagMultiPayload(pvVar3,lVar11,1);
      }
      else {
        _memcpy(pvVar3,pvVar4,*(size_t *)(lVar17 + 0x40));
      }
      (**(code **)(lVar17 + 0x38))(pvVar3,0,1,lVar11);
      goto LAB_100386bc0;
    }
LAB_100386b14:
    puVar9 = &DAT_100550ec0;
    FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
    sVar15 = *(size_t *)(*(long *)(puVar9 + -8) + 0x40);
  }
  _memcpy(pvVar3,pvVar4,sVar15);
LAB_100386bc0:
  puVar9 = &DAT_10055dca8;
  FUN_100002f94(&DAT_10055dca8,&DAT_1004334a8);
  lVar16 = (long)*(int *)(puVar9 + 0x1c);
  uVar8 = *(undefined8 *)((long)pvVar3 + lVar16);
  *(undefined8 *)((long)pvVar3 + lVar16) = *(undefined8 *)((long)pvVar4 + lVar16);
  _swift_release(uVar8);
  puVar5 = (undefined1 *)(param_1 + *(int *)(param_3 + 0x28));
  puVar6 = (undefined1 *)(param_2 + *(int *)(param_3 + 0x28));
  *puVar5 = *puVar6;
  uVar8 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar6 + 8);
  _swift_release(uVar8);
  puVar5 = (undefined1 *)(param_1 + *(int *)(param_3 + 0x2c));
  puVar6 = (undefined1 *)(param_2 + *(int *)(param_3 + 0x2c));
  *puVar5 = *puVar6;
  uVar8 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar6 + 8);
  _swift_release(uVar8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x30));
  uVar8 = puVar2[1];
  uVar14 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar8;
  _swift_bridgeObjectRelease(uVar14);
  uVar8 = puVar1[2];
  puVar1[2] = puVar2[2];
  _swift_release(uVar8);
  puVar5 = (undefined1 *)(param_1 + *(int *)(param_3 + 0x34));
  puVar6 = (undefined1 *)(param_2 + *(int *)(param_3 + 0x34));
  *puVar5 = *puVar6;
  uVar8 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar6 + 8);
  _swift_release(uVar8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x38));
  uVar8 = puVar2[1];
  uVar14 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar8;
  _swift_bridgeObjectRelease(uVar14);
  uVar8 = puVar1[2];
  puVar1[2] = puVar2[2];
  _swift_release(uVar8);
  puVar5 = (undefined1 *)(param_1 + *(int *)(param_3 + 0x3c));
  puVar6 = (undefined1 *)(param_2 + *(int *)(param_3 + 0x3c));
  *puVar5 = *puVar6;
  uVar8 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar6 + 8);
  _swift_release(uVar8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x40));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x40));
  uVar14 = puVar1[1];
  uVar8 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar8;
  _swift_release(uVar14);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x44));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x44));
  uVar14 = puVar1[1];
  uVar8 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar8;
  _swift_release(uVar14);
  return param_1;
}

