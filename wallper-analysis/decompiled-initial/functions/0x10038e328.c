// rea decompile_all
// name: FUN_10038e328
// address: 0x10038e328
// body: available
// range: 0x10038e328-0x10038e63f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10038e328(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  UUID UVar4;
  long lVar5;
  undefined8 uVar6;
  Date DVar7;
  undefined8 uVar8;
  undefined *puVar9;
  size_t sVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar13 = *(long *)(UVar4.unknown + -8);
  (**(code **)(lVar13 + 0x28))(param_1,param_2,UVar4.unknown);
  lVar5 = 0;
  FUN_10025ee04();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar5 + 0x14));
  uVar8 = puVar2[1];
  uVar6 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar8;
  _swift_bridgeObjectRelease(uVar6);
  iVar3 = *(int *)(lVar5 + 0x18);
  DVar7 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar7.unknown + -8) + 0x28))(param_1 + iVar3,param_2 + iVar3,DVar7.unknown)
  ;
  *(undefined1 *)(param_1 + *(int *)(lVar5 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(lVar5 + 0x1c));
  lVar11 = (long)*(int *)(lVar5 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + lVar11);
  *(undefined8 *)(param_1 + lVar11) = *(undefined8 *)(param_2 + lVar11);
  _swift_bridgeObjectRelease(uVar8);
  *(undefined1 *)(param_1 + *(int *)(lVar5 + 0x24)) =
       *(undefined1 *)(param_2 + *(int *)(lVar5 + 0x24));
  *(undefined1 *)(param_1 + *(int *)(lVar5 + 0x28)) =
       *(undefined1 *)(param_2 + *(int *)(lVar5 + 0x28));
  *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x2c)) =
       *(undefined8 *)(param_2 + *(int *)(lVar5 + 0x2c));
  *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x30)) =
       *(undefined8 *)(param_2 + *(int *)(lVar5 + 0x30));
  lVar5 = (long)*(int *)(lVar5 + 0x34);
  uVar8 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = *(undefined8 *)(param_2 + lVar5);
  _swift_bridgeObjectRelease(uVar8);
  lVar5 = (long)*(int *)(param_3 + 0x14);
  uVar8 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = *(undefined8 *)(param_2 + lVar5);
  _swift_bridgeObjectRelease(uVar8);
  if (param_1 != param_2) {
    lVar12 = (long)*(int *)(param_3 + 0x18);
    FUN_100029548(param_1 + lVar12,FUN_1001d537c);
    lVar11 = 0;
    FUN_1001d537c();
    lVar5 = param_2 + lVar12;
    _swift_getEnumCaseMultiPayload(lVar5,lVar11);
    if ((int)lVar5 == 1) {
      (**(code **)(lVar13 + 0x20))(param_1 + lVar12,param_2 + lVar12,UVar4.unknown);
      _swift_storeEnumTagMultiPayload(param_1 + lVar12,lVar11,1);
    }
    else {
      _memcpy((void *)(param_1 + lVar12),(void *)(param_2 + lVar12),
              *(size_t *)(*(long *)(lVar11 + -8) + 0x40));
    }
  }
  lVar14 = (long)*(int *)(param_3 + 0x1c);
  lVar12 = 0;
  FUN_1001d537c();
  lVar15 = *(long *)(lVar12 + -8);
  pcVar16 = *(code **)(lVar15 + 0x30);
  lVar5 = param_1 + lVar14;
  (*pcVar16)(lVar5,1,lVar12);
  lVar11 = param_2 + lVar14;
  (*pcVar16)(lVar11,1,lVar12);
  if ((int)lVar5 == 0) {
    if ((int)lVar11 != 0) {
      FUN_100029548(param_1 + lVar14,FUN_1001d537c);
      goto LAB_10038e544;
    }
    if (param_1 == param_2) goto LAB_10038e5ec;
    FUN_100029548(param_1 + lVar14,FUN_1001d537c);
    lVar5 = param_2 + lVar14;
    _swift_getEnumCaseMultiPayload(lVar5,lVar12);
    if ((int)lVar5 == 1) {
      (**(code **)(lVar13 + 0x20))(param_1 + lVar14,param_2 + lVar14,UVar4.unknown);
      _swift_storeEnumTagMultiPayload(param_1 + lVar14,lVar12,1);
      goto LAB_10038e5ec;
    }
    sVar10 = *(size_t *)(lVar15 + 0x40);
  }
  else {
    if ((int)lVar11 == 0) {
      lVar5 = param_2 + lVar14;
      _swift_getEnumCaseMultiPayload(lVar5,lVar12);
      if ((int)lVar5 == 1) {
        (**(code **)(lVar13 + 0x20))(param_1 + lVar14,param_2 + lVar14,UVar4.unknown);
        _swift_storeEnumTagMultiPayload(param_1 + lVar14,lVar12,1);
      }
      else {
        _memcpy((void *)(param_1 + lVar14),(void *)(param_2 + lVar14),*(size_t *)(lVar15 + 0x40));
      }
      (**(code **)(lVar15 + 0x38))(param_1 + lVar14,0,1,lVar12);
      goto LAB_10038e5ec;
    }
LAB_10038e544:
    puVar9 = &DAT_100550ec0;
    FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
    sVar10 = *(size_t *)(*(long *)(puVar9 + -8) + 0x40);
  }
  _memcpy((void *)(param_1 + lVar14),(void *)(param_2 + lVar14),sVar10);
LAB_10038e5ec:
  lVar5 = (long)*(int *)(param_3 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = *(undefined8 *)(param_2 + lVar5);
  _swift_bridgeObjectRelease(uVar8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  uVar8 = puVar1[1];
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  uVar6 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar6;
  _swift_release(uVar8);
  return param_1;
}

