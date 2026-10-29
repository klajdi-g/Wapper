// rea decompile_all
// name: FUN_1003866cc
// address: 0x1003866cc
// body: available
// range: 0x1003866cc-0x10038691b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1003866cc(long param_1,long param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  UUID UVar6;
  undefined *puVar7;
  DismissAction DVar8;
  long lVar9;
  void *pvVar10;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  pcVar11 = *(code **)(*(long *)(UVar6.unknown + -8) + 0x20);
  (*pcVar11)(param_1,param_2,UVar6.unknown);
  iVar3 = *(int *)(param_3 + 0x18);
  puVar4 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar13 = *puVar4;
  puVar5 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar13;
  puVar4 = (undefined8 *)(param_2 + iVar3);
  uVar13 = *puVar4;
  puVar5 = (undefined8 *)(param_1 + iVar3);
  puVar5[1] = puVar4[1];
  *puVar5 = uVar13;
  lVar12 = (long)*(int *)(param_3 + 0x20);
  puVar4 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar13 = *puVar4;
  puVar5 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar13;
  puVar7 = &DAT_10055c948;
  FUN_100002f94(&DAT_10055c948,&DAT_100435240);
  lVar9 = param_2 + lVar12;
  _swift_getEnumCaseMultiPayload(lVar9,puVar7);
  if ((int)lVar9 == 1) {
    DVar8 = SwiftUI::DismissAction::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar8.unknown + -8) + 0x20))
              (param_1 + lVar12,param_2 + lVar12,DVar8.unknown);
    _swift_storeEnumTagMultiPayload(param_1 + lVar12,puVar7,1);
  }
  else {
    _memcpy((void *)(param_1 + lVar12),(void *)(param_2 + lVar12),
            *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  pvVar1 = (void *)(param_1 + *(int *)(param_3 + 0x24));
  pvVar2 = (void *)(param_2 + *(int *)(param_3 + 0x24));
  lVar9 = 0;
  FUN_1001d537c();
  lVar12 = *(long *)(lVar9 + -8);
  pvVar10 = pvVar2;
  (**(code **)(lVar12 + 0x30))(pvVar2,1,lVar9);
  if ((int)pvVar10 == 0) {
    pvVar10 = pvVar2;
    _swift_getEnumCaseMultiPayload(pvVar2,lVar9);
    if ((int)pvVar10 == 1) {
      (*pcVar11)(pvVar1,pvVar2,UVar6.unknown);
      _swift_storeEnumTagMultiPayload(pvVar1,lVar9,1);
    }
    else {
      _memcpy(pvVar1,pvVar2,*(size_t *)(lVar12 + 0x40));
    }
    (**(code **)(lVar12 + 0x38))(pvVar1,0,1,lVar9);
  }
  else {
    puVar7 = &DAT_100550ec0;
    FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
    _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  puVar7 = &DAT_10055dca8;
  FUN_100002f94(&DAT_10055dca8,&DAT_1004334a8);
  *(undefined8 *)((long)pvVar1 + (long)*(int *)(puVar7 + 0x1c)) =
       *(undefined8 *)((long)pvVar2 + (long)*(int *)(puVar7 + 0x1c));
  iVar3 = *(int *)(param_3 + 0x2c);
  puVar4 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x28));
  uVar13 = *puVar4;
  puVar5 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x28));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar13;
  puVar4 = (undefined8 *)(param_2 + iVar3);
  uVar13 = *puVar4;
  puVar5 = (undefined8 *)(param_1 + iVar3);
  puVar5[1] = puVar4[1];
  *puVar5 = uVar13;
  iVar3 = *(int *)(param_3 + 0x34);
  puVar4 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x30));
  puVar5 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x30));
  puVar4[2] = puVar5[2];
  uVar13 = *puVar5;
  puVar4[1] = puVar5[1];
  *puVar4 = uVar13;
  puVar4 = (undefined8 *)(param_2 + iVar3);
  uVar13 = *puVar4;
  puVar5 = (undefined8 *)(param_1 + iVar3);
  puVar5[1] = puVar4[1];
  *puVar5 = uVar13;
  iVar3 = *(int *)(param_3 + 0x3c);
  puVar4 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x38));
  puVar5 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x38));
  uVar13 = *puVar5;
  puVar4[1] = puVar5[1];
  *puVar4 = uVar13;
  puVar4[2] = puVar5[2];
  puVar4 = (undefined8 *)(param_2 + iVar3);
  uVar13 = *puVar4;
  puVar5 = (undefined8 *)(param_1 + iVar3);
  puVar5[1] = puVar4[1];
  *puVar5 = uVar13;
  iVar3 = *(int *)(param_3 + 0x44);
  puVar4 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x40));
  uVar13 = *puVar4;
  puVar5 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x40));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar13;
  puVar4 = (undefined8 *)(param_2 + iVar3);
  uVar13 = *puVar4;
  puVar5 = (undefined8 *)(param_1 + iVar3);
  puVar5[1] = puVar4[1];
  *puVar5 = uVar13;
  return param_1;
}

