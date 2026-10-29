// rea decompile_all
// name: FUN_10039540c
// address: 0x10039540c
// body: available
// range: 0x10039540c-0x100395dcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10039540c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  UUID UVar8;
  long lVar9;
  undefined8 uVar10;
  Date DVar11;
  undefined8 uVar12;
  void *pvVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  URL UVar16;
  undefined *puVar17;
  size_t sVar18;
  long lVar19;
  code *pcVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  long lVar24;
  code *pcVar25;
  long lVar26;
  long lVar27;
  
  UVar8 = Foundation::UUID::typeMetadataAccessor();
  lVar27 = *(long *)(UVar8.unknown + -8);
  (**(code **)(lVar27 + 0x28))(param_1,param_2,UVar8.unknown);
  lVar9 = 0;
  FUN_10025ee04();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar9 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar9 + 0x14));
  uVar12 = puVar2[1];
  uVar10 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar12;
  _swift_bridgeObjectRelease(uVar10);
  iVar7 = *(int *)(lVar9 + 0x18);
  DVar11 = Foundation::Date::typeMetadataAccessor();
  lVar19 = *(long *)(DVar11.unknown + -8);
  pcVar20 = *(code **)(lVar19 + 0x28);
  (*pcVar20)(param_1 + iVar7,param_2 + iVar7,DVar11.unknown);
  *(undefined1 *)(param_1 + *(int *)(lVar9 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(lVar9 + 0x1c));
  lVar21 = (long)*(int *)(lVar9 + 0x20);
  uVar12 = *(undefined8 *)(param_1 + lVar21);
  *(undefined8 *)(param_1 + lVar21) = *(undefined8 *)(param_2 + lVar21);
  _swift_bridgeObjectRelease(uVar12);
  *(undefined1 *)(param_1 + *(int *)(lVar9 + 0x24)) =
       *(undefined1 *)(param_2 + *(int *)(lVar9 + 0x24));
  *(undefined1 *)(param_1 + *(int *)(lVar9 + 0x28)) =
       *(undefined1 *)(param_2 + *(int *)(lVar9 + 0x28));
  *(undefined8 *)(param_1 + *(int *)(lVar9 + 0x2c)) =
       *(undefined8 *)(param_2 + *(int *)(lVar9 + 0x2c));
  *(undefined8 *)(param_1 + *(int *)(lVar9 + 0x30)) =
       *(undefined8 *)(param_2 + *(int *)(lVar9 + 0x30));
  lVar9 = (long)*(int *)(lVar9 + 0x34);
  uVar12 = *(undefined8 *)(param_1 + lVar9);
  *(undefined8 *)(param_1 + lVar9) = *(undefined8 *)(param_2 + lVar9);
  _swift_bridgeObjectRelease(uVar12);
  pvVar3 = (void *)(param_1 + *(int *)(param_3 + 0x14));
  pvVar4 = (void *)(param_2 + *(int *)(param_3 + 0x14));
  if (param_1 != param_2) {
    FUN_100029548(pvVar3,FUN_1001d537c);
    lVar9 = 0;
    FUN_1001d537c();
    pvVar13 = pvVar4;
    _swift_getEnumCaseMultiPayload(pvVar4,lVar9);
    if ((int)pvVar13 == 1) {
      (**(code **)(lVar27 + 0x20))(pvVar3,pvVar4,UVar8.unknown);
      _swift_storeEnumTagMultiPayload(pvVar3,lVar9,1);
    }
    else {
      _memcpy(pvVar3,pvVar4,*(size_t *)(*(long *)(lVar9 + -8) + 0x40));
    }
  }
  lVar9 = 0;
  FUN_1001d59ac();
  puVar1 = (undefined8 *)((long)pvVar3 + (long)*(int *)(lVar9 + 0x14));
  puVar2 = (undefined8 *)((long)pvVar4 + (long)*(int *)(lVar9 + 0x14));
  uVar12 = puVar2[1];
  uVar10 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar12;
  _swift_bridgeObjectRelease(uVar10);
  puVar1 = (undefined8 *)((long)pvVar3 + (long)*(int *)(lVar9 + 0x18));
  puVar2 = (undefined8 *)((long)pvVar4 + (long)*(int *)(lVar9 + 0x18));
  uVar12 = puVar2[1];
  uVar10 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar12;
  _swift_bridgeObjectRelease(uVar10);
  puVar1 = (undefined8 *)((long)pvVar3 + (long)*(int *)(lVar9 + 0x1c));
  puVar2 = (undefined8 *)((long)pvVar4 + (long)*(int *)(lVar9 + 0x1c));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)pvVar3 + (long)*(int *)(lVar9 + 0x20));
  puVar2 = (undefined8 *)((long)pvVar4 + (long)*(int *)(lVar9 + 0x20));
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = *puVar2;
  lVar9 = (long)*(int *)(lVar9 + 0x24);
  uVar12 = *(undefined8 *)((long)pvVar3 + lVar9);
  *(undefined8 *)((long)pvVar3 + lVar9) = *(undefined8 *)((long)pvVar4 + lVar9);
  _swift_bridgeObjectRelease(uVar12);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  lVar9 = 0;
  FUN_10040211c();
  lVar21 = *(long *)(lVar9 + -8);
  pcVar22 = *(code **)(lVar21 + 0x30);
  puVar14 = puVar1;
  (*pcVar22)(puVar1,1,lVar9);
  puVar15 = puVar2;
  (*pcVar22)(puVar2,1,lVar9);
  if ((int)puVar14 == 0) {
    if ((int)puVar15 != 0) {
      FUN_100029548(puVar1,FUN_10040211c);
      goto LAB_100395710;
    }
    uVar12 = puVar2[1];
    uVar10 = puVar1[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar12;
    _swift_bridgeObjectRelease(uVar10);
    iVar7 = *(int *)(lVar9 + 0x14);
    UVar16 = Foundation::URL::typeMetadataAccessor();
    lVar24 = *(long *)(UVar16.unknown + -8);
    pcVar22 = *(code **)(lVar24 + 0x28);
    (*pcVar22)((long)puVar1 + (long)iVar7,(long)puVar2 + (long)iVar7,UVar16.unknown);
    lVar23 = (long)*(int *)(lVar9 + 0x18);
    pcVar25 = *(code **)(lVar24 + 0x30);
    lVar21 = (long)puVar1 + lVar23;
    (*pcVar25)(lVar21,1,UVar16.unknown);
    lVar26 = (long)puVar2 + lVar23;
    (*pcVar25)(lVar26,1,UVar16.unknown);
    if ((int)lVar21 == 0) {
      if ((int)lVar26 != 0) {
        (**(code **)(lVar24 + 8))((long)puVar1 + lVar23,UVar16.unknown);
        goto LAB_10039597c;
      }
      (*pcVar22)((long)puVar1 + lVar23,(long)puVar2 + lVar23,UVar16.unknown);
    }
    else if ((int)lVar26 == 0) {
      (**(code **)(lVar24 + 0x20))((long)puVar1 + lVar23,(long)puVar2 + lVar23,UVar16.unknown);
      (**(code **)(lVar24 + 0x38))((long)puVar1 + lVar23,0,1,UVar16.unknown);
    }
    else {
LAB_10039597c:
      puVar17 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)puVar1 + lVar23),(void *)((long)puVar2 + lVar23),
              *(size_t *)(*(long *)(puVar17 + -8) + 0x40));
    }
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x1c));
    puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x1c));
    uVar12 = puVar15[1];
    uVar10 = puVar14[1];
    *puVar14 = *puVar15;
    puVar14[1] = uVar12;
    _swift_bridgeObjectRelease(uVar10);
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x20)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x20));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x24)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x24));
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x28));
    puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x28));
    *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar15 + 1);
    *puVar14 = *puVar15;
    lVar23 = (long)*(int *)(lVar9 + 0x2c);
    pcVar22 = *(code **)(lVar19 + 0x30);
    lVar21 = (long)puVar1 + lVar23;
    (*pcVar22)(lVar21,1,DVar11.unknown);
    lVar26 = (long)puVar2 + lVar23;
    (*pcVar22)(lVar26,1,DVar11.unknown);
    if ((int)lVar21 == 0) {
      if ((int)lVar26 != 0) {
        (**(code **)(lVar19 + 8))((long)puVar1 + lVar23,DVar11.unknown);
        goto LAB_100395a7c;
      }
      (*pcVar20)((long)puVar1 + lVar23,(long)puVar2 + lVar23,DVar11.unknown);
    }
    else if ((int)lVar26 == 0) {
      (**(code **)(lVar19 + 0x20))((long)puVar1 + lVar23,(long)puVar2 + lVar23,DVar11.unknown);
      (**(code **)(lVar19 + 0x38))((long)puVar1 + lVar23,0,1,DVar11.unknown);
    }
    else {
LAB_100395a7c:
      puVar17 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar23),(void *)((long)puVar2 + lVar23),
              *(size_t *)(*(long *)(puVar17 + -8) + 0x40));
    }
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x30));
    puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x30));
    *puVar14 = *puVar15;
    *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar15 + 1);
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x34));
    puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x34));
    uVar12 = puVar15[1];
    uVar10 = puVar14[1];
    *puVar14 = *puVar15;
    puVar14[1] = uVar12;
    _swift_bridgeObjectRelease(uVar10);
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x38));
    puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x38));
    *puVar14 = *puVar15;
    *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar15 + 1);
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x3c));
    puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x3c));
    uVar12 = puVar15[1];
    uVar10 = puVar14[1];
    *puVar14 = *puVar15;
    puVar14[1] = uVar12;
    _swift_bridgeObjectRelease(uVar10);
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x40)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x40));
    lVar19 = (long)*(int *)(lVar9 + 0x44);
    uVar12 = *(undefined8 *)((long)puVar1 + lVar19);
    *(undefined8 *)((long)puVar1 + lVar19) = *(undefined8 *)((long)puVar2 + lVar19);
    _swift_bridgeObjectRelease(uVar12);
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x48)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x48));
  }
  else if ((int)puVar15 == 0) {
    uVar12 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar12;
    iVar7 = *(int *)(lVar9 + 0x14);
    UVar16 = Foundation::URL::typeMetadataAccessor();
    lVar24 = *(long *)(UVar16.unknown + -8);
    pcVar20 = *(code **)(lVar24 + 0x20);
    (*pcVar20)((long)puVar1 + (long)iVar7,(long)puVar2 + (long)iVar7,UVar16.unknown);
    lVar23 = (long)*(int *)(lVar9 + 0x18);
    lVar26 = (long)puVar2 + lVar23;
    (**(code **)(lVar24 + 0x30))(lVar26,1,UVar16.unknown);
    if ((int)lVar26 == 0) {
      (*pcVar20)((long)puVar1 + lVar23,(long)puVar2 + lVar23,UVar16.unknown);
      (**(code **)(lVar24 + 0x38))((long)puVar1 + lVar23,0,1,UVar16.unknown);
    }
    else {
      puVar17 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)puVar1 + lVar23),(void *)((long)puVar2 + lVar23),
              *(size_t *)(*(long *)(puVar17 + -8) + 0x40));
    }
    puVar14 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x1c));
    uVar12 = *puVar14;
    puVar15 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x1c));
    puVar15[1] = puVar14[1];
    *puVar15 = uVar12;
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x20)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x20));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x24)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x24));
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x28));
    puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x28));
    *puVar14 = *puVar15;
    *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar15 + 1);
    lVar23 = (long)*(int *)(lVar9 + 0x2c);
    lVar26 = (long)puVar2 + lVar23;
    (**(code **)(lVar19 + 0x30))(lVar26,1,DVar11.unknown);
    if ((int)lVar26 == 0) {
      (**(code **)(lVar19 + 0x20))((long)puVar1 + lVar23,(long)puVar2 + lVar23,DVar11.unknown);
      (**(code **)(lVar19 + 0x38))((long)puVar1 + lVar23,0,1,DVar11.unknown);
    }
    else {
      puVar17 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar23),(void *)((long)puVar2 + lVar23),
              *(size_t *)(*(long *)(puVar17 + -8) + 0x40));
    }
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x30));
    puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x30));
    *puVar14 = *puVar15;
    *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar15 + 1);
    puVar14 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x34));
    uVar12 = *puVar14;
    puVar15 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x34));
    puVar15[1] = puVar14[1];
    *puVar15 = uVar12;
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x38));
    puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x38));
    *puVar14 = *puVar15;
    *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar15 + 1);
    puVar14 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x3c));
    uVar12 = *puVar14;
    puVar15 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x3c));
    puVar15[1] = puVar14[1];
    *puVar15 = uVar12;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x40)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x40));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x44)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x44));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x48)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x48));
    (**(code **)(lVar21 + 0x38))(puVar1,0,1,lVar9);
  }
  else {
LAB_100395710:
    puVar17 = &DAT_10054ac40;
    FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar17 + -8) + 0x40));
  }
  iVar7 = *(int *)(param_3 + 0x20);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x1c));
  *(undefined1 *)(param_1 + iVar7) = *(undefined1 *)(param_2 + iVar7);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  uVar12 = *puVar1;
  *puVar1 = *puVar2;
  _swift_release(uVar12);
  uVar12 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_release(uVar12);
  puVar17 = &DAT_10055eb98;
  FUN_100002f94(&DAT_10055eb98,&DAT_1004343f8);
  lVar26 = (long)*(int *)(puVar17 + 0x20);
  lVar21 = 0;
  FUN_1001d537c();
  lVar23 = *(long *)(lVar21 + -8);
  pcVar20 = *(code **)(lVar23 + 0x30);
  lVar9 = (long)puVar1 + lVar26;
  (*pcVar20)(lVar9,1,lVar21);
  lVar19 = (long)puVar2 + lVar26;
  (*pcVar20)(lVar19,1,lVar21);
  if ((int)lVar9 == 0) {
    if ((int)lVar19 != 0) {
      FUN_100029548((long)puVar1 + lVar26,FUN_1001d537c);
      goto LAB_100395c28;
    }
    if (param_1 == param_2) goto LAB_100395cd0;
    FUN_100029548((long)puVar1 + lVar26,FUN_1001d537c);
    lVar9 = (long)puVar2 + lVar26;
    _swift_getEnumCaseMultiPayload(lVar9,lVar21);
    if ((int)lVar9 == 1) {
      (**(code **)(lVar27 + 0x20))((long)puVar1 + lVar26,(long)puVar2 + lVar26,UVar8.unknown);
      _swift_storeEnumTagMultiPayload((long)puVar1 + lVar26,lVar21,1);
      goto LAB_100395cd0;
    }
    sVar18 = *(size_t *)(lVar23 + 0x40);
  }
  else {
    if ((int)lVar19 == 0) {
      lVar9 = (long)puVar2 + lVar26;
      _swift_getEnumCaseMultiPayload(lVar9,lVar21);
      if ((int)lVar9 == 1) {
        (**(code **)(lVar27 + 0x20))((long)puVar1 + lVar26,(long)puVar2 + lVar26,UVar8.unknown);
        _swift_storeEnumTagMultiPayload((long)puVar1 + lVar26,lVar21,1);
      }
      else {
        _memcpy((void *)((long)puVar1 + lVar26),(void *)((long)puVar2 + lVar26),
                *(size_t *)(lVar23 + 0x40));
      }
      (**(code **)(lVar23 + 0x38))((long)puVar1 + lVar26,0,1,lVar21);
      goto LAB_100395cd0;
    }
LAB_100395c28:
    puVar17 = &DAT_100550ec0;
    FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
    sVar18 = *(size_t *)(*(long *)(puVar17 + -8) + 0x40);
  }
  _memcpy((void *)((long)puVar1 + lVar26),(void *)((long)puVar2 + lVar26),sVar18);
LAB_100395cd0:
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x28));
  uVar12 = puVar1[1];
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x28));
  uVar10 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar10;
  _swift_release(uVar12);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x2c));
  uVar12 = *puVar1;
  *puVar1 = *puVar2;
  _swift_release(uVar12);
  puVar1[1] = puVar2[1];
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x30));
  uVar12 = *puVar1;
  *puVar1 = *puVar2;
  _swift_release(uVar12);
  puVar1[1] = puVar2[1];
  puVar5 = (undefined1 *)(param_1 + *(int *)(param_3 + 0x34));
  puVar6 = (undefined1 *)(param_2 + *(int *)(param_3 + 0x34));
  *puVar5 = *puVar6;
  uVar12 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar6 + 8);
  _swift_release(uVar12);
  puVar5 = (undefined1 *)(param_1 + *(int *)(param_3 + 0x38));
  puVar6 = (undefined1 *)(param_2 + *(int *)(param_3 + 0x38));
  *puVar5 = *puVar6;
  uVar12 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar6 + 8);
  _swift_release(uVar12);
  return param_1;
}

