// rea decompile_all
// name: FUN_10038ddb8
// address: 0x10038ddb8
// body: available
// range: 0x10038ddb8-0x10038e10f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10038ddb8(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  UUID UVar4;
  long lVar5;
  Date DVar6;
  undefined *puVar7;
  size_t sVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  undefined8 uVar17;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar13 = *(long *)(UVar4.unknown + -8);
  (**(code **)(lVar13 + 0x18))(param_1,param_2,UVar4.unknown);
  lVar5 = 0;
  FUN_10025ee04();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar5 + 0x14));
  *puVar1 = *puVar2;
  uVar11 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  iVar3 = *(int *)(lVar5 + 0x18);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar6.unknown + -8) + 0x18))(param_1 + iVar3,param_2 + iVar3,DVar6.unknown)
  ;
  *(undefined1 *)(param_1 + *(int *)(lVar5 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(lVar5 + 0x1c));
  lVar9 = (long)*(int *)(lVar5 + 0x20);
  uVar11 = *(undefined8 *)(param_1 + lVar9);
  *(undefined8 *)(param_1 + lVar9) = *(undefined8 *)(param_2 + lVar9);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  *(undefined1 *)(param_1 + *(int *)(lVar5 + 0x24)) =
       *(undefined1 *)(param_2 + *(int *)(lVar5 + 0x24));
  *(undefined1 *)(param_1 + *(int *)(lVar5 + 0x28)) =
       *(undefined1 *)(param_2 + *(int *)(lVar5 + 0x28));
  *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x2c)) =
       *(undefined8 *)(param_2 + *(int *)(lVar5 + 0x2c));
  *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x30)) =
       *(undefined8 *)(param_2 + *(int *)(lVar5 + 0x30));
  lVar5 = (long)*(int *)(lVar5 + 0x34);
  uVar11 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = *(undefined8 *)(param_2 + lVar5);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  lVar5 = (long)*(int *)(param_3 + 0x14);
  uVar11 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = *(undefined8 *)(param_2 + lVar5);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  if (param_1 != param_2) {
    lVar12 = (long)*(int *)(param_3 + 0x18);
    FUN_100029548(param_1 + lVar12,FUN_1001d537c);
    lVar9 = 0;
    FUN_1001d537c();
    lVar5 = param_2 + lVar12;
    _swift_getEnumCaseMultiPayload(lVar5,lVar9);
    if ((int)lVar5 == 1) {
      (**(code **)(lVar13 + 0x10))(param_1 + lVar12,param_2 + lVar12,UVar4.unknown);
      _swift_storeEnumTagMultiPayload(param_1 + lVar12,lVar9,1);
    }
    else {
      _memcpy((void *)(param_1 + lVar12),(void *)(param_2 + lVar12),
              *(size_t *)(*(long *)(lVar9 + -8) + 0x40));
    }
  }
  lVar14 = (long)*(int *)(param_3 + 0x1c);
  lVar12 = 0;
  FUN_1001d537c();
  lVar15 = *(long *)(lVar12 + -8);
  pcVar16 = *(code **)(lVar15 + 0x30);
  lVar5 = param_1 + lVar14;
  (*pcVar16)(lVar5,1,lVar12);
  lVar9 = param_2 + lVar14;
  (*pcVar16)(lVar9,1,lVar12);
  if ((int)lVar5 == 0) {
    if ((int)lVar9 != 0) {
      FUN_100029548(param_1 + lVar14,FUN_1001d537c);
      goto LAB_10038dffc;
    }
    if (param_1 == param_2) goto LAB_10038e0a4;
    FUN_100029548(param_1 + lVar14,FUN_1001d537c);
    lVar5 = param_2 + lVar14;
    _swift_getEnumCaseMultiPayload(lVar5,lVar12);
    if ((int)lVar5 == 1) {
      (**(code **)(lVar13 + 0x10))(param_1 + lVar14,param_2 + lVar14,UVar4.unknown);
      _swift_storeEnumTagMultiPayload(param_1 + lVar14,lVar12,1);
      goto LAB_10038e0a4;
    }
    sVar8 = *(size_t *)(lVar15 + 0x40);
  }
  else {
    if ((int)lVar9 == 0) {
      lVar5 = param_2 + lVar14;
      _swift_getEnumCaseMultiPayload(lVar5,lVar12);
      if ((int)lVar5 == 1) {
        (**(code **)(lVar13 + 0x10))(param_1 + lVar14,param_2 + lVar14,UVar4.unknown);
        _swift_storeEnumTagMultiPayload(param_1 + lVar14,lVar12,1);
      }
      else {
        _memcpy((void *)(param_1 + lVar14),(void *)(param_2 + lVar14),*(size_t *)(lVar15 + 0x40));
      }
      (**(code **)(lVar15 + 0x38))(param_1 + lVar14,0,1,lVar12);
      goto LAB_10038e0a4;
    }
LAB_10038dffc:
    puVar7 = &DAT_100550ec0;
    FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
    sVar8 = *(size_t *)(*(long *)(puVar7 + -8) + 0x40);
  }
  _memcpy((void *)(param_1 + lVar14),(void *)(param_2 + lVar14),sVar8);
LAB_10038e0a4:
  lVar5 = (long)*(int *)(param_3 + 0x20);
  uVar11 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = *(undefined8 *)(param_2 + lVar5);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  uVar10 = puVar1[1];
  uVar11 = puVar2[1];
  uVar17 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar17;
  _swift_retain(uVar11);
  _swift_release(uVar10);
  return param_1;
}

