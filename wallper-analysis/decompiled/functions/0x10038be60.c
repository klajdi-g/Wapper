// rea decompile_all
// name: FUN_10038be60
// address: 0x10038be60
// body: available
// range: 0x10038be60-0x10038c20f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_10038be60(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  UUID UVar8;
  long lVar9;
  Date DVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  void *pvVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  code *pcVar19;
  undefined8 uVar20;
  code *pcVar21;
  
  uVar6 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar6 >> 0x11 & 1) == 0) {
    UVar8 = Foundation::UUID::typeMetadataAccessor();
    pcVar21 = *(code **)(*(long *)(UVar8.unknown + -8) + 0x10);
    (*pcVar21)(param_1,param_2,UVar8.unknown);
    lVar9 = 0;
    FUN_10025ee04();
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x14));
    uVar16 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar16;
    iVar7 = *(int *)(lVar9 + 0x18);
    DVar10 = Foundation::Date::typeMetadataAccessor();
    pcVar19 = *(code **)(*(long *)(DVar10.unknown + -8) + 0x10);
    _swift_bridgeObjectRetain(uVar16);
    (*pcVar19)((long)param_1 + (long)iVar7,(long)param_2 + (long)iVar7,DVar10.unknown);
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x1c));
    uVar16 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x20));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x20)) = uVar16;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x24)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x24));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x28)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x28));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x2c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x2c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x30));
    uVar18 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x34));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x34)) = uVar18;
    lVar12 = (long)*(int *)(param_3 + 0x18);
    uVar20 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) = uVar20;
    lVar11 = 0;
    FUN_1001d537c();
    _swift_bridgeObjectRetain(uVar16);
    _swift_bridgeObjectRetain(uVar18);
    _swift_bridgeObjectRetain(uVar20);
    lVar9 = (long)param_2 + lVar12;
    _swift_getEnumCaseMultiPayload(lVar9,lVar11);
    if ((int)lVar9 == 1) {
      (*pcVar21)((long)param_1 + lVar12,(long)param_2 + lVar12,UVar8.unknown);
      _swift_storeEnumTagMultiPayload((long)param_1 + lVar12,lVar11,1);
      lVar9 = *(long *)(lVar11 + -8);
    }
    else {
      lVar9 = *(long *)(lVar11 + -8);
      _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
              *(size_t *)(lVar9 + 0x40));
    }
    lVar17 = (long)*(int *)(param_3 + 0x1c);
    pcVar19 = *(code **)(lVar9 + 0x30);
    lVar12 = (long)param_2 + lVar17;
    (*pcVar19)(lVar12,1,lVar11);
    if ((int)lVar12 == 0) {
      lVar12 = (long)param_2 + lVar17;
      _swift_getEnumCaseMultiPayload(lVar12,lVar11);
      if ((int)lVar12 == 1) {
        (*pcVar21)((long)param_1 + lVar17,(long)param_2 + lVar17,UVar8.unknown);
        _swift_storeEnumTagMultiPayload((long)param_1 + lVar17,lVar11,1);
      }
      else {
        _memcpy((void *)((long)param_1 + lVar17),(void *)((long)param_2 + lVar17),
                *(size_t *)(lVar9 + 0x40));
      }
      (**(code **)(lVar9 + 0x38))((long)param_1 + lVar17,0,1,lVar11);
    }
    else {
      puVar13 = &DAT_100550ec0;
      FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
      _memcpy((void *)((long)param_1 + lVar17),(void *)((long)param_2 + lVar17),
              *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    iVar7 = *(int *)(param_3 + 0x24);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    puVar1 = (undefined8 *)((long)param_2 + (long)iVar7);
    uVar16 = *puVar1;
    puVar2 = (undefined8 *)((long)param_1 + (long)iVar7);
    puVar2[1] = puVar1[1];
    *puVar2 = uVar16;
    iVar7 = *(int *)(param_3 + 0x2c);
    puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    uVar16 = *puVar3;
    uVar18 = puVar3[1];
    *puVar2 = uVar16;
    puVar2[1] = uVar18;
    uVar18 = puVar1[1];
    pvVar4 = (void *)((long)param_1 + (long)iVar7);
    pvVar5 = (void *)((long)param_2 + (long)iVar7);
    _swift_bridgeObjectRetain();
    _swift_retain(uVar18);
    _swift_retain(uVar16);
    pvVar14 = pvVar5;
    (*pcVar19)(pvVar5,1,lVar11);
    if ((int)pvVar14 == 0) {
      pvVar14 = pvVar5;
      _swift_getEnumCaseMultiPayload(pvVar5,lVar11);
      if ((int)pvVar14 == 1) {
        (*pcVar21)(pvVar4,pvVar5,UVar8.unknown);
        _swift_storeEnumTagMultiPayload(pvVar4,lVar11,1);
      }
      else {
        _memcpy(pvVar4,pvVar5,*(size_t *)(lVar9 + 0x40));
      }
      (**(code **)(lVar9 + 0x38))(pvVar4,0,1,lVar11);
    }
    else {
      puVar13 = &DAT_100550ec0;
      FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
      _memcpy(pvVar4,pvVar5,*(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    puVar13 = &DAT_10055dca8;
    FUN_100002f94(&DAT_10055dca8,&DAT_1004334a8);
    *(undefined8 *)((long)pvVar4 + (long)*(int *)(puVar13 + 0x1c)) =
         *(undefined8 *)((long)pvVar5 + (long)*(int *)(puVar13 + 0x1c));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    lVar9 = puVar1[1];
    uVar16 = *puVar1;
    puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar16;
    _swift_retain();
    _swift_bridgeObjectRetain(uVar16);
  }
  else {
    lVar9 = *param_2;
    *param_1 = lVar9;
    uVar15 = (ulong)uVar6 & 0xff;
    param_1 = (long *)(lVar9 + (uVar15 + 0x10 & (uVar15 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar9);
  return param_1;
}

