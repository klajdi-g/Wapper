// rea decompile_all
// name: FUN_100393424
// address: 0x100393424
// body: available
// range: 0x100393424-0x100393aa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_100393424(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  UUID UVar10;
  long lVar11;
  Date DVar12;
  void *pvVar13;
  long lVar14;
  undefined8 *puVar15;
  URL UVar16;
  long lVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  code *pcVar22;
  long lVar23;
  long lVar24;
  code *pcVar25;
  undefined8 uVar26;
  long lVar27;
  code *pcVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  uVar8 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar8 >> 0x11 & 1) == 0) {
    UVar10 = Foundation::UUID::typeMetadataAccessor();
    pcVar22 = *(code **)(*(long *)(UVar10.unknown + -8) + 0x10);
    (*pcVar22)(param_1,param_2,UVar10.unknown);
    lVar11 = 0;
    FUN_10025ee04();
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x14));
    uVar29 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar29;
    iVar9 = *(int *)(lVar11 + 0x18);
    DVar12 = Foundation::Date::typeMetadataAccessor();
    lVar20 = *(long *)(DVar12.unknown + -8);
    pcVar28 = *(code **)(lVar20 + 0x10);
    _swift_bridgeObjectRetain(uVar29);
    (*pcVar28)((long)param_1 + (long)iVar9,(long)param_2 + (long)iVar9,DVar12.unknown);
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar11 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar11 + 0x1c));
    uVar29 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x20));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x20)) = uVar29;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar11 + 0x24)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar11 + 0x24));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar11 + 0x28)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar11 + 0x28));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x2c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x2c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x30));
    uVar30 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x34));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x34)) = uVar30;
    pvVar3 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    pvVar4 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    lVar11 = 0;
    FUN_1001d537c();
    _swift_bridgeObjectRetain(uVar29);
    _swift_bridgeObjectRetain(uVar30);
    pvVar13 = pvVar4;
    _swift_getEnumCaseMultiPayload(pvVar4,lVar11);
    if ((int)pvVar13 == 1) {
      (*pcVar22)(pvVar3,pvVar4,UVar10.unknown);
      _swift_storeEnumTagMultiPayload(pvVar3,lVar11,1);
    }
    else {
      _memcpy(pvVar3,pvVar4,*(size_t *)(*(long *)(lVar11 + -8) + 0x40));
    }
    lVar14 = 0;
    FUN_1001d59ac();
    puVar1 = (undefined8 *)((long)pvVar3 + (long)*(int *)(lVar14 + 0x14));
    puVar2 = (undefined8 *)((long)pvVar4 + (long)*(int *)(lVar14 + 0x14));
    uVar29 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar29;
    puVar1 = (undefined8 *)((long)pvVar3 + (long)*(int *)(lVar14 + 0x18));
    puVar2 = (undefined8 *)((long)pvVar4 + (long)*(int *)(lVar14 + 0x18));
    uVar30 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar30;
    puVar1 = (undefined8 *)((long)pvVar3 + (long)*(int *)(lVar14 + 0x1c));
    puVar2 = (undefined8 *)((long)pvVar4 + (long)*(int *)(lVar14 + 0x1c));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    puVar1 = (undefined8 *)((long)pvVar3 + (long)*(int *)(lVar14 + 0x20));
    puVar2 = (undefined8 *)((long)pvVar4 + (long)*(int *)(lVar14 + 0x20));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    uVar26 = *(undefined8 *)((long)pvVar4 + (long)*(int *)(lVar14 + 0x24));
    *(undefined8 *)((long)pvVar3 + (long)*(int *)(lVar14 + 0x24)) = uVar26;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    lVar14 = 0;
    FUN_10040211c();
    lVar23 = *(long *)(lVar14 + -8);
    pcVar25 = *(code **)(lVar23 + 0x30);
    _swift_bridgeObjectRetain(uVar29);
    _swift_bridgeObjectRetain(uVar30);
    _swift_bridgeObjectRetain(uVar26);
    puVar15 = puVar2;
    (*pcVar25)(puVar2,1,lVar14);
    if ((int)puVar15 == 0) {
      uVar29 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar29;
      iVar9 = *(int *)(lVar14 + 0x14);
      UVar16 = Foundation::URL::typeMetadataAccessor();
      lVar27 = *(long *)(UVar16.unknown + -8);
      pcVar25 = *(code **)(lVar27 + 0x10);
      _swift_bridgeObjectRetain(uVar29);
      (*pcVar25)((long)puVar1 + (long)iVar9,(long)puVar2 + (long)iVar9,UVar16.unknown);
      lVar24 = (long)*(int *)(lVar14 + 0x18);
      lVar17 = (long)puVar2 + lVar24;
      (**(code **)(lVar27 + 0x30))(lVar17,1,UVar16.unknown);
      if ((int)lVar17 == 0) {
        (*pcVar25)((long)puVar1 + lVar24,(long)puVar2 + lVar24,UVar16.unknown);
        (**(code **)(lVar27 + 0x38))((long)puVar1 + lVar24,0,1,UVar16.unknown);
      }
      else {
        puVar18 = &DAT_100553d90;
        FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
        _memcpy((void *)((long)puVar1 + lVar24),(void *)((long)puVar2 + lVar24),
                *(size_t *)(*(long *)(puVar18 + -8) + 0x40));
      }
      puVar15 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x1c));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x1c));
      uVar29 = puVar5[1];
      *puVar15 = *puVar5;
      puVar15[1] = uVar29;
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x20)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x20));
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x24)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x24));
      puVar15 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x28));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x28));
      *puVar15 = *puVar5;
      *(undefined1 *)(puVar15 + 1) = *(undefined1 *)(puVar5 + 1);
      lVar24 = (long)*(int *)(lVar14 + 0x2c);
      pcVar25 = *(code **)(lVar20 + 0x30);
      _swift_bridgeObjectRetain();
      lVar17 = (long)puVar2 + lVar24;
      (*pcVar25)(lVar17,1,DVar12.unknown);
      if ((int)lVar17 == 0) {
        (*pcVar28)((long)puVar1 + lVar24,(long)puVar2 + lVar24,DVar12.unknown);
        (**(code **)(lVar20 + 0x38))((long)puVar1 + lVar24,0,1,DVar12.unknown);
      }
      else {
        puVar18 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar24),(void *)((long)puVar2 + lVar24),
                *(size_t *)(*(long *)(puVar18 + -8) + 0x40));
      }
      puVar15 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x30));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x30));
      *puVar15 = *puVar5;
      *(undefined1 *)(puVar15 + 1) = *(undefined1 *)(puVar5 + 1);
      puVar15 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x34));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x34));
      uVar29 = puVar5[1];
      *puVar15 = *puVar5;
      puVar15[1] = uVar29;
      puVar15 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x38));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x38));
      *puVar15 = *puVar5;
      *(undefined1 *)(puVar15 + 1) = *(undefined1 *)(puVar5 + 1);
      puVar15 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x3c));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x3c));
      uVar29 = puVar5[1];
      *puVar15 = *puVar5;
      puVar15[1] = uVar29;
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x40)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x40));
      uVar30 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x44));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x44)) = uVar30;
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x48)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x48));
      pcVar28 = *(code **)(lVar23 + 0x38);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar29);
      _swift_bridgeObjectRetain(uVar30);
      (*pcVar28)(puVar1,0,1,lVar14);
    }
    else {
      puVar18 = &DAT_10054ac40;
      FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar18 + -8) + 0x40));
    }
    iVar9 = *(int *)(param_3 + 0x20);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    *(undefined1 *)((long)param_1 + (long)iVar9) = *(undefined1 *)((long)param_2 + (long)iVar9);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    uVar29 = puVar2[1];
    uVar30 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar30;
    _swift_retain(uVar30);
    _swift_retain(uVar29);
    puVar18 = &DAT_10055eb98;
    FUN_100002f94(&DAT_10055eb98,&DAT_1004343f8);
    lVar14 = (long)*(int *)(puVar18 + 0x20);
    lVar23 = *(long *)(lVar11 + -8);
    lVar20 = (long)puVar2 + lVar14;
    (**(code **)(lVar23 + 0x30))(lVar20,1,lVar11);
    if ((int)lVar20 == 0) {
      lVar20 = (long)puVar2 + lVar14;
      _swift_getEnumCaseMultiPayload(lVar20,lVar11);
      if ((int)lVar20 == 1) {
        (*pcVar22)((long)puVar1 + lVar14,(long)puVar2 + lVar14,UVar10.unknown);
        _swift_storeEnumTagMultiPayload((long)puVar1 + lVar14,lVar11,1);
      }
      else {
        _memcpy((void *)((long)puVar1 + lVar14),(void *)((long)puVar2 + lVar14),
                *(size_t *)(lVar23 + 0x40));
      }
      (**(code **)(lVar23 + 0x38))((long)puVar1 + lVar14,0,1,lVar11);
    }
    else {
      puVar18 = &DAT_100550ec0;
      FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
      _memcpy((void *)((long)puVar1 + lVar14),(void *)((long)puVar2 + lVar14),
              *(size_t *)(*(long *)(puVar18 + -8) + 0x40));
    }
    iVar9 = *(int *)(param_3 + 0x2c);
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    uVar19 = puVar1[1];
    uVar29 = *puVar1;
    puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar29;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
    uVar29 = *puVar2;
    uVar30 = puVar2[1];
    *puVar1 = uVar29;
    puVar1[1] = uVar30;
    iVar9 = *(int *)(param_3 + 0x34);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    uVar30 = *puVar2;
    uVar26 = puVar2[1];
    *puVar1 = uVar30;
    puVar1[1] = uVar26;
    puVar6 = (undefined1 *)((long)param_1 + (long)iVar9);
    puVar7 = (undefined1 *)((long)param_2 + (long)iVar9);
    *puVar6 = *puVar7;
    uVar26 = *(undefined8 *)(puVar7 + 8);
    *(undefined8 *)(puVar6 + 8) = uVar26;
    puVar6 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
    puVar7 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
    *puVar6 = *puVar7;
    lVar11 = *(long *)(puVar7 + 8);
    *(long *)(puVar6 + 8) = lVar11;
    _swift_retain(uVar19);
    _swift_retain(uVar29);
    _swift_retain(uVar30);
    _swift_retain(uVar26);
  }
  else {
    lVar11 = *param_2;
    *param_1 = lVar11;
    uVar21 = (ulong)uVar8 & 0xff;
    param_1 = (long *)(lVar11 + (uVar21 + 0x10 & (uVar21 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar11);
  return param_1;
}

