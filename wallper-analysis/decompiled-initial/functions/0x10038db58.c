// rea decompile_all
// name: FUN_10038db58
// address: 0x10038db58
// body: available
// range: 0x10038db58-0x10038ddb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10038db58(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  UUID UVar4;
  long lVar5;
  Date DVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  code *pcVar15;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  pcVar14 = *(code **)(*(long *)(UVar4.unknown + -8) + 0x10);
  (*pcVar14)(param_1,param_2,UVar4.unknown);
  lVar5 = 0;
  FUN_10025ee04();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar5 + 0x14));
  uVar10 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar10;
  iVar3 = *(int *)(lVar5 + 0x18);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  pcVar15 = *(code **)(*(long *)(DVar6.unknown + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar10);
  (*pcVar15)(param_1 + iVar3,param_2 + iVar3,DVar6.unknown);
  *(undefined1 *)(param_1 + *(int *)(lVar5 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(lVar5 + 0x1c));
  uVar10 = *(undefined8 *)(param_2 + *(int *)(lVar5 + 0x20));
  *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x20)) = uVar10;
  *(undefined1 *)(param_1 + *(int *)(lVar5 + 0x24)) =
       *(undefined1 *)(param_2 + *(int *)(lVar5 + 0x24));
  *(undefined1 *)(param_1 + *(int *)(lVar5 + 0x28)) =
       *(undefined1 *)(param_2 + *(int *)(lVar5 + 0x28));
  *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x2c)) =
       *(undefined8 *)(param_2 + *(int *)(lVar5 + 0x2c));
  *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x30)) =
       *(undefined8 *)(param_2 + *(int *)(lVar5 + 0x30));
  uVar12 = *(undefined8 *)(param_2 + *(int *)(lVar5 + 0x34));
  *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x34)) = uVar12;
  lVar8 = (long)*(int *)(param_3 + 0x18);
  uVar13 = *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) = uVar13;
  lVar7 = 0;
  FUN_1001d537c();
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar13);
  lVar5 = param_2 + lVar8;
  _swift_getEnumCaseMultiPayload(lVar5,lVar7);
  if ((int)lVar5 == 1) {
    (*pcVar14)(param_1 + lVar8,param_2 + lVar8,UVar4.unknown);
    _swift_storeEnumTagMultiPayload(param_1 + lVar8,lVar7,1);
    lVar5 = *(long *)(lVar7 + -8);
  }
  else {
    lVar5 = *(long *)(lVar7 + -8);
    _memcpy((void *)(param_1 + lVar8),(void *)(param_2 + lVar8),*(size_t *)(lVar5 + 0x40));
  }
  lVar11 = (long)*(int *)(param_3 + 0x1c);
  lVar8 = param_2 + lVar11;
  (**(code **)(lVar5 + 0x30))(lVar8,1,lVar7);
  if ((int)lVar8 == 0) {
    lVar8 = param_2 + lVar11;
    _swift_getEnumCaseMultiPayload(lVar8,lVar7);
    if ((int)lVar8 == 1) {
      (*pcVar14)(param_1 + lVar11,param_2 + lVar11,UVar4.unknown);
      _swift_storeEnumTagMultiPayload(param_1 + lVar11,lVar7,1);
    }
    else {
      _memcpy((void *)(param_1 + lVar11),(void *)(param_2 + lVar11),*(size_t *)(lVar5 + 0x40));
    }
    (**(code **)(lVar5 + 0x38))(param_1 + lVar11,0,1,lVar7);
  }
  else {
    puVar9 = &DAT_100550ec0;
    FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
    _memcpy((void *)(param_1 + lVar11),(void *)(param_2 + lVar11),
            *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x24);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x20)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x20));
  puVar1 = (undefined8 *)(param_2 + iVar3);
  uVar10 = puVar1[1];
  uVar12 = *puVar1;
  puVar2 = (undefined8 *)(param_1 + iVar3);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar12;
  _swift_bridgeObjectRetain();
  _swift_retain(uVar10);
  return param_1;
}

