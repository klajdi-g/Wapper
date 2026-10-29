// rea decompile_all
// name: FUN_100391b2c
// address: 0x100391b2c
// body: available
// range: 0x100391b2c-0x1003924ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100391b2c(long param_1,long param_2,long param_3)

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
  Date DVar10;
  void *pvVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  URL UVar14;
  undefined *puVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  undefined8 uVar19;
  code *pcVar20;
  long lVar21;
  code *pcVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  
  UVar8 = Foundation::UUID::typeMetadataAccessor();
  lVar24 = *(long *)(UVar8.unknown + -8);
  (**(code **)(lVar24 + 0x18))(param_1,param_2,UVar8.unknown);
  lVar9 = 0;
  FUN_10025ee04();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar9 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar9 + 0x14));
  *puVar1 = *puVar2;
  uVar19 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar19);
  iVar7 = *(int *)(lVar9 + 0x18);
  DVar10 = Foundation::Date::typeMetadataAccessor();
  lVar16 = *(long *)(DVar10.unknown + -8);
  pcVar17 = *(code **)(lVar16 + 0x18);
  (*pcVar17)(param_1 + iVar7,param_2 + iVar7,DVar10.unknown);
  *(undefined1 *)(param_1 + *(int *)(lVar9 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(lVar9 + 0x1c));
  lVar18 = (long)*(int *)(lVar9 + 0x20);
  uVar19 = *(undefined8 *)(param_1 + lVar18);
  *(undefined8 *)(param_1 + lVar18) = *(undefined8 *)(param_2 + lVar18);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar19);
  *(undefined1 *)(param_1 + *(int *)(lVar9 + 0x24)) =
       *(undefined1 *)(param_2 + *(int *)(lVar9 + 0x24));
  *(undefined1 *)(param_1 + *(int *)(lVar9 + 0x28)) =
       *(undefined1 *)(param_2 + *(int *)(lVar9 + 0x28));
  *(undefined8 *)(param_1 + *(int *)(lVar9 + 0x2c)) =
       *(undefined8 *)(param_2 + *(int *)(lVar9 + 0x2c));
  *(undefined8 *)(param_1 + *(int *)(lVar9 + 0x30)) =
       *(undefined8 *)(param_2 + *(int *)(lVar9 + 0x30));
  lVar9 = (long)*(int *)(lVar9 + 0x34);
  uVar19 = *(undefined8 *)(param_1 + lVar9);
  *(undefined8 *)(param_1 + lVar9) = *(undefined8 *)(param_2 + lVar9);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar19);
  pvVar3 = (void *)(param_1 + *(int *)(param_3 + 0x14));
  pvVar4 = (void *)(param_2 + *(int *)(param_3 + 0x14));
  if (param_1 != param_2) {
    FUN_100029548(pvVar3,FUN_1001d537c);
    lVar9 = 0;
    FUN_1001d537c();
    pvVar11 = pvVar4;
    _swift_getEnumCaseMultiPayload(pvVar4,lVar9);
    if ((int)pvVar11 == 1) {
      (**(code **)(lVar24 + 0x10))(pvVar3,pvVar4,UVar8.unknown);
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
  *puVar1 = *puVar2;
  uVar19 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar19);
  puVar1 = (undefined8 *)((long)pvVar3 + (long)*(int *)(lVar9 + 0x18));
  puVar2 = (undefined8 *)((long)pvVar4 + (long)*(int *)(lVar9 + 0x18));
  *puVar1 = *puVar2;
  uVar19 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar19);
  puVar1 = (undefined8 *)((long)pvVar3 + (long)*(int *)(lVar9 + 0x1c));
  puVar2 = (undefined8 *)((long)pvVar4 + (long)*(int *)(lVar9 + 0x1c));
  uVar19 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = uVar19;
  puVar1 = (undefined8 *)((long)pvVar3 + (long)*(int *)(lVar9 + 0x20));
  puVar2 = (undefined8 *)((long)pvVar4 + (long)*(int *)(lVar9 + 0x20));
  uVar19 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = uVar19;
  lVar9 = (long)*(int *)(lVar9 + 0x24);
  uVar19 = *(undefined8 *)((long)pvVar3 + lVar9);
  *(undefined8 *)((long)pvVar3 + lVar9) = *(undefined8 *)((long)pvVar4 + lVar9);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar19);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  lVar9 = 0;
  FUN_10040211c();
  lVar18 = *(long *)(lVar9 + -8);
  pcVar20 = *(code **)(lVar18 + 0x30);
  puVar12 = puVar1;
  (*pcVar20)(puVar1,1,lVar9);
  puVar13 = puVar2;
  (*pcVar20)(puVar2,1,lVar9);
  if ((int)puVar12 == 0) {
    if ((int)puVar13 == 0) {
      *puVar1 = *puVar2;
      uVar19 = puVar1[1];
      puVar1[1] = puVar2[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar19);
      iVar7 = *(int *)(lVar9 + 0x14);
      UVar14 = Foundation::URL::typeMetadataAccessor();
      lVar21 = *(long *)(UVar14.unknown + -8);
      pcVar20 = *(code **)(lVar21 + 0x18);
      (*pcVar20)((long)puVar1 + (long)iVar7,(long)puVar2 + (long)iVar7,UVar14.unknown);
      lVar25 = (long)*(int *)(lVar9 + 0x18);
      pcVar22 = *(code **)(lVar21 + 0x30);
      lVar18 = (long)puVar1 + lVar25;
      (*pcVar22)(lVar18,1,UVar14.unknown);
      lVar24 = (long)puVar2 + lVar25;
      (*pcVar22)(lVar24,1,UVar14.unknown);
      if ((int)lVar18 == 0) {
        if ((int)lVar24 != 0) {
          (**(code **)(lVar21 + 8))((long)puVar1 + lVar25,UVar14.unknown);
          goto LAB_100392144;
        }
        (*pcVar20)((long)puVar1 + lVar25,(long)puVar2 + lVar25,UVar14.unknown);
      }
      else if ((int)lVar24 == 0) {
        (**(code **)(lVar21 + 0x10))((long)puVar1 + lVar25,(long)puVar2 + lVar25,UVar14.unknown);
        (**(code **)(lVar21 + 0x38))((long)puVar1 + lVar25,0,1,UVar14.unknown);
      }
      else {
LAB_100392144:
        puVar15 = &DAT_100553d90;
        FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
        _memcpy((void *)((long)puVar1 + lVar25),(void *)((long)puVar2 + lVar25),
                *(size_t *)(*(long *)(puVar15 + -8) + 0x40));
      }
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x1c));
      puVar13 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x1c));
      *puVar12 = *puVar13;
      uVar19 = puVar12[1];
      puVar12[1] = puVar13[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar19);
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x20)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x20));
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x24)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x24));
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x28));
      puVar13 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x28));
      uVar19 = *puVar13;
      *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(puVar13 + 1);
      *puVar12 = uVar19;
      lVar21 = (long)*(int *)(lVar9 + 0x2c);
      pcVar20 = *(code **)(lVar16 + 0x30);
      lVar18 = (long)puVar1 + lVar21;
      (*pcVar20)(lVar18,1,DVar10.unknown);
      lVar24 = (long)puVar2 + lVar21;
      (*pcVar20)(lVar24,1,DVar10.unknown);
      if ((int)lVar18 == 0) {
        if ((int)lVar24 != 0) {
          (**(code **)(lVar16 + 8))((long)puVar1 + lVar21,DVar10.unknown);
          goto LAB_100392254;
        }
        (*pcVar17)((long)puVar1 + lVar21,(long)puVar2 + lVar21,DVar10.unknown);
      }
      else if ((int)lVar24 == 0) {
        (**(code **)(lVar16 + 0x10))((long)puVar1 + lVar21,(long)puVar2 + lVar21,DVar10.unknown);
        (**(code **)(lVar16 + 0x38))((long)puVar1 + lVar21,0,1,DVar10.unknown);
      }
      else {
LAB_100392254:
        puVar15 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar21),(void *)((long)puVar2 + lVar21),
                *(size_t *)(*(long *)(puVar15 + -8) + 0x40));
      }
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x30));
      puVar13 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x30));
      uVar19 = *puVar13;
      *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(puVar13 + 1);
      *puVar12 = uVar19;
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x34));
      puVar13 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x34));
      *puVar12 = *puVar13;
      uVar19 = puVar12[1];
      puVar12[1] = puVar13[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar19);
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x38));
      puVar13 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x38));
      uVar19 = *puVar13;
      *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(puVar13 + 1);
      *puVar12 = uVar19;
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x3c));
      puVar13 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x3c));
      *puVar12 = *puVar13;
      uVar19 = puVar12[1];
      puVar12[1] = puVar13[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar19);
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x40)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x40));
      lVar16 = (long)*(int *)(lVar9 + 0x44);
      uVar19 = *(undefined8 *)((long)puVar1 + lVar16);
      *(undefined8 *)((long)puVar1 + lVar16) = *(undefined8 *)((long)puVar2 + lVar16);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar19);
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x48)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x48));
      goto LAB_100392340;
    }
    FUN_100029548(puVar1,FUN_10040211c);
  }
  else if ((int)puVar13 == 0) {
    *puVar1 = *puVar2;
    uVar19 = puVar2[1];
    puVar1[1] = uVar19;
    iVar7 = *(int *)(lVar9 + 0x14);
    UVar14 = Foundation::URL::typeMetadataAccessor();
    lVar25 = *(long *)(UVar14.unknown + -8);
    pcVar17 = *(code **)(lVar25 + 0x10);
    _swift_bridgeObjectRetain(uVar19);
    (*pcVar17)((long)puVar1 + (long)iVar7,(long)puVar2 + (long)iVar7,UVar14.unknown);
    lVar21 = (long)*(int *)(lVar9 + 0x18);
    lVar24 = (long)puVar2 + lVar21;
    (**(code **)(lVar25 + 0x30))(lVar24,1,UVar14.unknown);
    if ((int)lVar24 == 0) {
      (*pcVar17)((long)puVar1 + lVar21,(long)puVar2 + lVar21,UVar14.unknown);
      (**(code **)(lVar25 + 0x38))((long)puVar1 + lVar21,0,1,UVar14.unknown);
    }
    else {
      puVar15 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)puVar1 + lVar21),(void *)((long)puVar2 + lVar21),
              *(size_t *)(*(long *)(puVar15 + -8) + 0x40));
    }
    puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x1c));
    puVar13 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x1c));
    *puVar12 = *puVar13;
    puVar12[1] = puVar13[1];
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x20)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x20));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x24)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x24));
    puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x28));
    puVar13 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x28));
    uVar19 = *puVar13;
    *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(puVar13 + 1);
    *puVar12 = uVar19;
    lVar21 = (long)*(int *)(lVar9 + 0x2c);
    pcVar17 = *(code **)(lVar16 + 0x30);
    _swift_bridgeObjectRetain();
    lVar24 = (long)puVar2 + lVar21;
    (*pcVar17)(lVar24,1,DVar10.unknown);
    if ((int)lVar24 == 0) {
      (**(code **)(lVar16 + 0x10))((long)puVar1 + lVar21,(long)puVar2 + lVar21,DVar10.unknown);
      (**(code **)(lVar16 + 0x38))((long)puVar1 + lVar21,0,1,DVar10.unknown);
    }
    else {
      puVar15 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar21),(void *)((long)puVar2 + lVar21),
              *(size_t *)(*(long *)(puVar15 + -8) + 0x40));
    }
    puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x30));
    puVar13 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x30));
    uVar19 = *puVar13;
    *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(puVar13 + 1);
    *puVar12 = uVar19;
    puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x34));
    puVar13 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x34));
    *puVar12 = *puVar13;
    puVar12[1] = puVar13[1];
    puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x38));
    puVar13 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x38));
    uVar19 = *puVar13;
    *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(puVar13 + 1);
    *puVar12 = uVar19;
    puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x3c));
    puVar13 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x3c));
    *puVar12 = *puVar13;
    uVar19 = puVar13[1];
    puVar12[1] = uVar19;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x40)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x40));
    uVar23 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x44));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x44)) = uVar23;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x48)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x48));
    pcVar17 = *(code **)(lVar18 + 0x38);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar19);
    _swift_bridgeObjectRetain(uVar23);
    (*pcVar17)(puVar1,0,1,lVar9);
    goto LAB_100392340;
  }
  puVar15 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar15 + -8) + 0x40));
LAB_100392340:
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x1c));
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x20)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x20));
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  uVar23 = puVar1[1];
  uVar19 = puVar2[1];
  uVar26 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar26;
  _swift_retain(uVar19);
  _swift_release(uVar23);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x28));
  uVar19 = *puVar1;
  *puVar1 = *puVar2;
  _swift_retain();
  _swift_release(uVar19);
  puVar1[1] = puVar2[1];
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x2c));
  uVar19 = *puVar1;
  *puVar1 = *puVar2;
  _swift_retain();
  _swift_release(uVar19);
  puVar1[1] = puVar2[1];
  puVar5 = (undefined1 *)(param_1 + *(int *)(param_3 + 0x30));
  puVar6 = (undefined1 *)(param_2 + *(int *)(param_3 + 0x30));
  *puVar5 = *puVar6;
  uVar19 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar6 + 8);
  _swift_retain();
  _swift_release(uVar19);
  puVar5 = (undefined1 *)(param_1 + *(int *)(param_3 + 0x34));
  puVar6 = (undefined1 *)(param_2 + *(int *)(param_3 + 0x34));
  *puVar5 = *puVar6;
  uVar19 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar6 + 8);
  _swift_retain();
  _swift_release(uVar19);
  puVar5 = (undefined1 *)(param_1 + *(int *)(param_3 + 0x38));
  puVar6 = (undefined1 *)(param_2 + *(int *)(param_3 + 0x38));
  *puVar5 = *puVar6;
  uVar19 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar6 + 8);
  _swift_retain();
  _swift_release(uVar19);
  return param_1;
}

