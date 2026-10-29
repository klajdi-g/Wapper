// rea decompile_all
// name: FUN_100385eec
// address: 0x100385eec
// body: available
// range: 0x100385eec-0x100386227 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100385eec(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  bool bVar10;
  UUID UVar11;
  undefined *puVar12;
  DismissAction DVar13;
  long lVar14;
  void *pvVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  code *pcVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  UVar11 = Foundation::UUID::typeMetadataAccessor();
  pcVar20 = *(code **)(*(long *)(UVar11.unknown + -8) + 0x10);
  (*pcVar20)(param_1,param_2,UVar11.unknown);
  iVar9 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar7 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar7;
  puVar1 = (undefined8 *)(param_1 + iVar9);
  puVar2 = (undefined8 *)(param_2 + iVar9);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  lVar22 = (long)*(int *)(param_3 + 0x20);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar8 = *puVar2;
  uVar16 = puVar2[1];
  *puVar1 = uVar8;
  puVar1[1] = uVar16;
  _swift_retain();
  _swift_retain(uVar7);
  _swift_retain(uVar8);
  puVar12 = &DAT_10055c948;
  FUN_100002f94(&DAT_10055c948,&DAT_100435240);
  lVar14 = param_2 + lVar22;
  _swift_getEnumCaseMultiPayload(lVar14,puVar12);
  bVar10 = (int)lVar14 != 1;
  if (bVar10) {
    *(undefined8 *)(param_1 + lVar22) = *(undefined8 *)(param_2 + lVar22);
    _swift_retain();
  }
  else {
    DVar13 = SwiftUI::DismissAction::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar13.unknown + -8) + 0x10))
              (param_1 + lVar22,param_2 + lVar22,DVar13.unknown);
  }
  _swift_storeEnumTagMultiPayload(param_1 + lVar22,puVar12,!bVar10);
  pvVar3 = (void *)(param_1 + *(int *)(param_3 + 0x24));
  pvVar4 = (void *)(param_2 + *(int *)(param_3 + 0x24));
  lVar14 = 0;
  FUN_1001d537c();
  lVar22 = *(long *)(lVar14 + -8);
  pvVar15 = pvVar4;
  (**(code **)(lVar22 + 0x30))(pvVar4,1,lVar14);
  if ((int)pvVar15 == 0) {
    pvVar15 = pvVar4;
    _swift_getEnumCaseMultiPayload(pvVar4,lVar14);
    if ((int)pvVar15 == 1) {
      (*pcVar20)(pvVar3,pvVar4,UVar11.unknown);
      _swift_storeEnumTagMultiPayload(pvVar3,lVar14,1);
    }
    else {
      _memcpy(pvVar3,pvVar4,*(size_t *)(lVar22 + 0x40));
    }
    (**(code **)(lVar22 + 0x38))(pvVar3,0,1,lVar14);
  }
  else {
    puVar12 = &DAT_100550ec0;
    FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
    _memcpy(pvVar3,pvVar4,*(size_t *)(*(long *)(puVar12 + -8) + 0x40));
  }
  puVar12 = &DAT_10055dca8;
  FUN_100002f94(&DAT_10055dca8,&DAT_1004334a8);
  *(undefined8 *)((long)pvVar3 + (long)*(int *)(puVar12 + 0x1c)) =
       *(undefined8 *)((long)pvVar4 + (long)*(int *)(puVar12 + 0x1c));
  iVar9 = *(int *)(param_3 + 0x2c);
  puVar5 = (undefined1 *)(param_1 + *(int *)(param_3 + 0x28));
  puVar6 = (undefined1 *)(param_2 + *(int *)(param_3 + 0x28));
  *puVar5 = *puVar6;
  uVar16 = *(undefined8 *)(puVar6 + 8);
  *(undefined8 *)(puVar5 + 8) = uVar16;
  puVar5 = (undefined1 *)(param_1 + iVar9);
  puVar6 = (undefined1 *)(param_2 + iVar9);
  *puVar5 = *puVar6;
  uVar17 = *(undefined8 *)(puVar6 + 8);
  *(undefined8 *)(puVar5 + 8) = uVar17;
  iVar9 = *(int *)(param_3 + 0x34);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x30));
  *puVar1 = *puVar2;
  uVar18 = puVar2[2];
  uVar24 = puVar2[1];
  puVar1[2] = puVar2[2];
  puVar1[1] = uVar24;
  puVar5 = (undefined1 *)(param_1 + iVar9);
  puVar6 = (undefined1 *)(param_2 + iVar9);
  *puVar5 = *puVar6;
  uVar19 = *(undefined8 *)(puVar6 + 8);
  *(undefined8 *)(puVar5 + 8) = uVar19;
  iVar9 = *(int *)(param_3 + 0x3c);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x38));
  *puVar1 = *puVar2;
  uVar21 = puVar2[2];
  uVar25 = puVar2[1];
  puVar1[2] = puVar2[2];
  puVar1[1] = uVar25;
  puVar5 = (undefined1 *)(param_1 + iVar9);
  puVar6 = (undefined1 *)(param_2 + iVar9);
  *puVar5 = *puVar6;
  uVar23 = *(undefined8 *)(puVar6 + 8);
  *(undefined8 *)(puVar5 + 8) = uVar23;
  iVar9 = *(int *)(param_3 + 0x44);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x40));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x40));
  uVar7 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar7;
  puVar1 = (undefined8 *)(param_1 + iVar9);
  puVar2 = (undefined8 *)(param_2 + iVar9);
  uVar8 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar8;
  _swift_retain();
  _swift_retain(uVar16);
  _swift_retain(uVar17);
  _swift_bridgeObjectRetain(uVar24);
  _swift_retain(uVar18);
  _swift_retain(uVar19);
  _swift_bridgeObjectRetain(uVar25);
  _swift_retain(uVar21);
  _swift_retain(uVar23);
  _swift_retain(uVar7);
  _swift_retain(uVar8);
  return param_1;
}

