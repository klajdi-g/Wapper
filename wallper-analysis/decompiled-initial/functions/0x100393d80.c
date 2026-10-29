// rea decompile_all
// name: FUN_100393d80
// address: 0x100393d80
// body: available
// range: 0x100393d80-0x1003943d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100393d80(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  UUID UVar9;
  long lVar10;
  Date DVar11;
  void *pvVar12;
  long lVar13;
  undefined8 *puVar14;
  URL UVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  code *pcVar20;
  long lVar21;
  long lVar22;
  code *pcVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  code *pcVar28;
  undefined8 uVar29;
  
  UVar9 = Foundation::UUID::typeMetadataAccessor();
  pcVar20 = *(code **)(*(long *)(UVar9.unknown + -8) + 0x10);
  (*pcVar20)(param_1,param_2,UVar9.unknown);
  lVar10 = 0;
  FUN_10025ee04();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar10 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar10 + 0x14));
  uVar27 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar27;
  iVar8 = *(int *)(lVar10 + 0x18);
  DVar11 = Foundation::Date::typeMetadataAccessor();
  lVar19 = *(long *)(DVar11.unknown + -8);
  pcVar28 = *(code **)(lVar19 + 0x10);
  _swift_bridgeObjectRetain(uVar27);
  (*pcVar28)(param_1 + iVar8,param_2 + iVar8,DVar11.unknown);
  *(undefined1 *)(param_1 + *(int *)(lVar10 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(lVar10 + 0x1c));
  uVar27 = *(undefined8 *)(param_2 + *(int *)(lVar10 + 0x20));
  *(undefined8 *)(param_1 + *(int *)(lVar10 + 0x20)) = uVar27;
  *(undefined1 *)(param_1 + *(int *)(lVar10 + 0x24)) =
       *(undefined1 *)(param_2 + *(int *)(lVar10 + 0x24));
  *(undefined1 *)(param_1 + *(int *)(lVar10 + 0x28)) =
       *(undefined1 *)(param_2 + *(int *)(lVar10 + 0x28));
  *(undefined8 *)(param_1 + *(int *)(lVar10 + 0x2c)) =
       *(undefined8 *)(param_2 + *(int *)(lVar10 + 0x2c));
  *(undefined8 *)(param_1 + *(int *)(lVar10 + 0x30)) =
       *(undefined8 *)(param_2 + *(int *)(lVar10 + 0x30));
  uVar29 = *(undefined8 *)(param_2 + *(int *)(lVar10 + 0x34));
  *(undefined8 *)(param_1 + *(int *)(lVar10 + 0x34)) = uVar29;
  pvVar3 = (void *)(param_1 + *(int *)(param_3 + 0x14));
  pvVar4 = (void *)(param_2 + *(int *)(param_3 + 0x14));
  lVar10 = 0;
  FUN_1001d537c();
  _swift_bridgeObjectRetain(uVar27);
  _swift_bridgeObjectRetain(uVar29);
  pvVar12 = pvVar4;
  _swift_getEnumCaseMultiPayload(pvVar4,lVar10);
  if ((int)pvVar12 == 1) {
    (*pcVar20)(pvVar3,pvVar4,UVar9.unknown);
    _swift_storeEnumTagMultiPayload(pvVar3,lVar10,1);
  }
  else {
    _memcpy(pvVar3,pvVar4,*(size_t *)(*(long *)(lVar10 + -8) + 0x40));
  }
  lVar13 = 0;
  FUN_1001d59ac();
  puVar1 = (undefined8 *)((long)pvVar3 + (long)*(int *)(lVar13 + 0x14));
  puVar2 = (undefined8 *)((long)pvVar4 + (long)*(int *)(lVar13 + 0x14));
  uVar27 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar27;
  puVar1 = (undefined8 *)((long)pvVar3 + (long)*(int *)(lVar13 + 0x18));
  puVar2 = (undefined8 *)((long)pvVar4 + (long)*(int *)(lVar13 + 0x18));
  uVar29 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar29;
  puVar1 = (undefined8 *)((long)pvVar3 + (long)*(int *)(lVar13 + 0x1c));
  puVar2 = (undefined8 *)((long)pvVar4 + (long)*(int *)(lVar13 + 0x1c));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)pvVar3 + (long)*(int *)(lVar13 + 0x20));
  puVar2 = (undefined8 *)((long)pvVar4 + (long)*(int *)(lVar13 + 0x20));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  uVar24 = *(undefined8 *)((long)pvVar4 + (long)*(int *)(lVar13 + 0x24));
  *(undefined8 *)((long)pvVar3 + (long)*(int *)(lVar13 + 0x24)) = uVar24;
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  lVar13 = 0;
  FUN_10040211c();
  lVar21 = *(long *)(lVar13 + -8);
  pcVar23 = *(code **)(lVar21 + 0x30);
  _swift_bridgeObjectRetain(uVar27);
  _swift_bridgeObjectRetain(uVar29);
  _swift_bridgeObjectRetain(uVar24);
  puVar14 = puVar2;
  (*pcVar23)(puVar2,1,lVar13);
  if ((int)puVar14 == 0) {
    uVar27 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar27;
    iVar8 = *(int *)(lVar13 + 0x14);
    UVar15 = Foundation::URL::typeMetadataAccessor();
    lVar25 = *(long *)(UVar15.unknown + -8);
    pcVar23 = *(code **)(lVar25 + 0x10);
    _swift_bridgeObjectRetain(uVar27);
    (*pcVar23)((long)puVar1 + (long)iVar8,(long)puVar2 + (long)iVar8,UVar15.unknown);
    lVar22 = (long)*(int *)(lVar13 + 0x18);
    lVar16 = (long)puVar2 + lVar22;
    (**(code **)(lVar25 + 0x30))(lVar16,1,UVar15.unknown);
    if ((int)lVar16 == 0) {
      (*pcVar23)((long)puVar1 + lVar22,(long)puVar2 + lVar22,UVar15.unknown);
      (**(code **)(lVar25 + 0x38))((long)puVar1 + lVar22,0,1,UVar15.unknown);
    }
    else {
      puVar17 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)puVar1 + lVar22),(void *)((long)puVar2 + lVar22),
              *(size_t *)(*(long *)(puVar17 + -8) + 0x40));
    }
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x1c));
    puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x1c));
    uVar27 = puVar5[1];
    *puVar14 = *puVar5;
    puVar14[1] = uVar27;
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x20)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x20));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x24)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x24));
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x28));
    puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x28));
    *puVar14 = *puVar5;
    *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar5 + 1);
    lVar22 = (long)*(int *)(lVar13 + 0x2c);
    pcVar23 = *(code **)(lVar19 + 0x30);
    _swift_bridgeObjectRetain();
    lVar16 = (long)puVar2 + lVar22;
    (*pcVar23)(lVar16,1,DVar11.unknown);
    if ((int)lVar16 == 0) {
      (*pcVar28)((long)puVar1 + lVar22,(long)puVar2 + lVar22,DVar11.unknown);
      (**(code **)(lVar19 + 0x38))((long)puVar1 + lVar22,0,1,DVar11.unknown);
    }
    else {
      puVar17 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar22),(void *)((long)puVar2 + lVar22),
              *(size_t *)(*(long *)(puVar17 + -8) + 0x40));
    }
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x30));
    puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x30));
    *puVar14 = *puVar5;
    *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar5 + 1);
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x34));
    puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x34));
    uVar27 = puVar5[1];
    *puVar14 = *puVar5;
    puVar14[1] = uVar27;
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x38));
    puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x38));
    *puVar14 = *puVar5;
    *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar5 + 1);
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x3c));
    puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x3c));
    uVar27 = puVar5[1];
    *puVar14 = *puVar5;
    puVar14[1] = uVar27;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x40)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x40));
    uVar29 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x44));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x44)) = uVar29;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x48)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x48));
    pcVar28 = *(code **)(lVar21 + 0x38);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar27);
    _swift_bridgeObjectRetain(uVar29);
    (*pcVar28)(puVar1,0,1,lVar13);
  }
  else {
    puVar17 = &DAT_10054ac40;
    FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar17 + -8) + 0x40));
  }
  iVar8 = *(int *)(param_3 + 0x20);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x1c));
  *(undefined1 *)(param_1 + iVar8) = *(undefined1 *)(param_2 + iVar8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  uVar27 = puVar2[1];
  uVar29 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar29;
  _swift_retain(uVar29);
  _swift_retain(uVar27);
  puVar17 = &DAT_10055eb98;
  FUN_100002f94(&DAT_10055eb98,&DAT_1004343f8);
  lVar13 = (long)*(int *)(puVar17 + 0x20);
  lVar21 = *(long *)(lVar10 + -8);
  lVar19 = (long)puVar2 + lVar13;
  (**(code **)(lVar21 + 0x30))(lVar19,1,lVar10);
  if ((int)lVar19 == 0) {
    lVar19 = (long)puVar2 + lVar13;
    _swift_getEnumCaseMultiPayload(lVar19,lVar10);
    if ((int)lVar19 == 1) {
      (*pcVar20)((long)puVar1 + lVar13,(long)puVar2 + lVar13,UVar9.unknown);
      _swift_storeEnumTagMultiPayload((long)puVar1 + lVar13,lVar10,1);
    }
    else {
      _memcpy((void *)((long)puVar1 + lVar13),(void *)((long)puVar2 + lVar13),
              *(size_t *)(lVar21 + 0x40));
    }
    (**(code **)(lVar21 + 0x38))((long)puVar1 + lVar13,0,1,lVar10);
  }
  else {
    puVar17 = &DAT_100550ec0;
    FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
    _memcpy((void *)((long)puVar1 + lVar13),(void *)((long)puVar2 + lVar13),
            *(size_t *)(*(long *)(puVar17 + -8) + 0x40));
  }
  iVar8 = *(int *)(param_3 + 0x2c);
  puVar1 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x28));
  uVar18 = puVar1[1];
  uVar27 = *puVar1;
  puVar2 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x28));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar27;
  puVar1 = (undefined8 *)(param_1 + iVar8);
  puVar2 = (undefined8 *)(param_2 + iVar8);
  uVar27 = *puVar2;
  uVar29 = puVar2[1];
  *puVar1 = uVar27;
  puVar1[1] = uVar29;
  iVar8 = *(int *)(param_3 + 0x34);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x30));
  uVar29 = *puVar2;
  uVar24 = puVar2[1];
  *puVar1 = uVar29;
  puVar1[1] = uVar24;
  puVar6 = (undefined1 *)(param_1 + iVar8);
  puVar7 = (undefined1 *)(param_2 + iVar8);
  *puVar6 = *puVar7;
  uVar26 = *(undefined8 *)(puVar7 + 8);
  *(undefined8 *)(puVar6 + 8) = uVar26;
  puVar6 = (undefined1 *)(param_1 + *(int *)(param_3 + 0x38));
  puVar7 = (undefined1 *)(param_2 + *(int *)(param_3 + 0x38));
  *puVar6 = *puVar7;
  uVar24 = *(undefined8 *)(puVar7 + 8);
  *(undefined8 *)(puVar6 + 8) = uVar24;
  _swift_retain(uVar18);
  _swift_retain(uVar27);
  _swift_retain(uVar29);
  _swift_retain(uVar26);
  _swift_retain(uVar24);
  return param_1;
}

