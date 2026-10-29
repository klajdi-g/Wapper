// rea decompile_all
// name: FUN_1003e8870
// address: 0x1003e8870
// body: available
// range: 0x1003e8870-0x1003e8fd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_1003e8870(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  void *pvVar8;
  void *pvVar9;
  int iVar10;
  long lVar11;
  URL UVar12;
  undefined *puVar13;
  Date DVar14;
  undefined8 *puVar15;
  void *pvVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  code *pcVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  code *pcVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  uVar21 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar21;
  lVar11 = 0;
  FUN_10040211c();
  iVar10 = *(int *)(lVar11 + 0x14);
  UVar12 = Foundation::URL::typeMetadataAccessor();
  lVar22 = *(long *)(UVar12.unknown + -8);
  pcVar24 = *(code **)(lVar22 + 0x10);
  _swift_bridgeObjectRetain(uVar21);
  (*pcVar24)((long)param_1 + (long)iVar10,(long)param_2 + (long)iVar10,UVar12.unknown);
  lVar19 = (long)*(int *)(lVar11 + 0x18);
  pcVar17 = *(code **)(lVar22 + 0x30);
  lVar18 = (long)param_2 + lVar19;
  (*pcVar17)(lVar18,1,UVar12.unknown);
  if ((int)lVar18 == 0) {
    (*pcVar24)((long)param_1 + lVar19,(long)param_2 + lVar19,UVar12.unknown);
    (**(code **)(lVar22 + 0x38))((long)param_1 + lVar19,0,1,UVar12.unknown);
  }
  else {
    puVar13 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy((void *)((long)param_1 + lVar19),(void *)((long)param_2 + lVar19),
            *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x1c));
  uVar21 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar21;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x20));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar11 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar11 + 0x24));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x28));
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = *puVar2;
  lVar19 = (long)*(int *)(lVar11 + 0x2c);
  DVar14 = Foundation::Date::typeMetadataAccessor();
  lVar27 = *(long *)(DVar14.unknown + -8);
  pcVar20 = *(code **)(lVar27 + 0x30);
  _swift_bridgeObjectRetain(uVar21);
  lVar18 = (long)param_2 + lVar19;
  (*pcVar20)(lVar18,1,DVar14.unknown);
  if ((int)lVar18 == 0) {
    (**(code **)(lVar27 + 0x10))((long)param_1 + lVar19,(long)param_2 + lVar19,DVar14.unknown);
    (**(code **)(lVar27 + 0x38))((long)param_1 + lVar19,0,1,DVar14.unknown);
  }
  else {
    puVar13 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar19),(void *)((long)param_2 + lVar19),
            *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x30));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x34));
  uVar21 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar21;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x38));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x3c));
  uVar21 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar21;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar11 + 0x40)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar11 + 0x40));
  uVar23 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x44));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x44)) = uVar23;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar11 + 0x48)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar11 + 0x48));
  iVar10 = *(int *)(param_3 + 0x18);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar10);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar10);
  uVar25 = puVar2[1];
  uVar28 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar28;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar21);
  _swift_bridgeObjectRetain(uVar23);
  _swift_retain(uVar28);
  _swift_retain(uVar25);
  puVar13 = &DAT_100560758;
  FUN_100002f94(&DAT_100560758,&DAT_100436160);
  puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(puVar13 + 0x20));
  puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(puVar13 + 0x20));
  lVar18 = *(long *)(lVar11 + -8);
  puVar15 = puVar2;
  (**(code **)(lVar18 + 0x30))(puVar2,1,lVar11);
  if ((int)puVar15 == 0) {
    uVar21 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar21;
    iVar10 = *(int *)(lVar11 + 0x14);
    _swift_bridgeObjectRetain();
    (*pcVar24)((long)puVar1 + (long)iVar10,(long)puVar2 + (long)iVar10,UVar12.unknown);
    lVar26 = (long)*(int *)(lVar11 + 0x18);
    lVar19 = (long)puVar2 + lVar26;
    (*pcVar17)(lVar19,1,UVar12.unknown);
    if ((int)lVar19 == 0) {
      (*pcVar24)((long)puVar1 + lVar26,(long)puVar2 + lVar26,UVar12.unknown);
      (**(code **)(lVar22 + 0x38))((long)puVar1 + lVar26,0,1,UVar12.unknown);
    }
    else {
      puVar13 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)puVar1 + lVar26),(void *)((long)puVar2 + lVar26),
              *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    puVar15 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x1c));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x1c));
    uVar21 = puVar3[1];
    *puVar15 = *puVar3;
    puVar15[1] = uVar21;
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x20)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x20));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x24)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x24));
    puVar15 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x28));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x28));
    *(undefined1 *)(puVar15 + 1) = *(undefined1 *)(puVar3 + 1);
    *puVar15 = *puVar3;
    lVar26 = (long)*(int *)(lVar11 + 0x2c);
    _swift_bridgeObjectRetain();
    lVar19 = (long)puVar2 + lVar26;
    (*pcVar20)(lVar19,1,DVar14.unknown);
    if ((int)lVar19 == 0) {
      (**(code **)(lVar27 + 0x10))((long)puVar1 + lVar26,(long)puVar2 + lVar26,DVar14.unknown);
      (**(code **)(lVar27 + 0x38))((long)puVar1 + lVar26,0,1,DVar14.unknown);
    }
    else {
      puVar13 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar26),(void *)((long)puVar2 + lVar26),
              *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    puVar15 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x30));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x30));
    *puVar15 = *puVar3;
    *(undefined1 *)(puVar15 + 1) = *(undefined1 *)(puVar3 + 1);
    puVar15 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x34));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x34));
    uVar21 = puVar3[1];
    *puVar15 = *puVar3;
    puVar15[1] = uVar21;
    puVar15 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x38));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x38));
    *puVar15 = *puVar3;
    *(undefined1 *)(puVar15 + 1) = *(undefined1 *)(puVar3 + 1);
    puVar15 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x3c));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x3c));
    uVar21 = puVar3[1];
    *puVar15 = *puVar3;
    puVar15[1] = uVar21;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x40)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x40));
    uVar23 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x44));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x44)) = uVar23;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x48)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x48));
    pcVar20 = *(code **)(lVar18 + 0x38);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar21);
    _swift_bridgeObjectRetain(uVar23);
    (*pcVar20)(puVar1,0,1,lVar11);
  }
  else {
    puVar13 = &DAT_10054ac40;
    FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar13 + -8) + 0x40));
  }
  iVar10 = *(int *)(param_3 + 0x20);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *(undefined1 *)((long)param_1 + (long)iVar10) = *(undefined1 *)((long)param_2 + (long)iVar10);
  iVar10 = *(int *)(param_3 + 0x28);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar21 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar21;
  plVar4 = (long *)((long)param_1 + (long)iVar10);
  plVar5 = (long *)((long)param_2 + (long)iVar10);
  lVar18 = *plVar5;
  _swift_bridgeObjectRetain();
  if (lVar18 == 0) {
    lVar18 = *plVar5;
    plVar4[1] = plVar5[1];
    *plVar4 = lVar18;
  }
  else {
    lVar11 = plVar5[1];
    *plVar4 = lVar18;
    plVar4[1] = lVar11;
    _swift_retain();
  }
  plVar4 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  plVar5 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  if (*plVar5 == 0) {
    lVar18 = *plVar5;
    plVar4[1] = plVar5[1];
    *plVar4 = lVar18;
  }
  else {
    lVar18 = plVar5[1];
    *plVar4 = *plVar5;
    plVar4[1] = lVar18;
    _swift_retain();
  }
  iVar10 = *(int *)(param_3 + 0x34);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar21 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar21;
  puVar6 = (undefined1 *)((long)param_1 + (long)iVar10);
  puVar7 = (undefined1 *)((long)param_2 + (long)iVar10);
  *puVar6 = *puVar7;
  uVar21 = *(undefined8 *)(puVar7 + 8);
  *(undefined8 *)(puVar6 + 8) = uVar21;
  iVar10 = *(int *)(param_3 + 0x3c);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  uVar25 = *puVar1;
  uVar23 = puVar1[1];
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar25;
  pvVar8 = (void *)((long)param_1 + (long)iVar10);
  pvVar9 = (void *)((long)param_2 + (long)iVar10);
  _swift_retain();
  _swift_retain(uVar21);
  _swift_retain(uVar25,uVar23);
  pvVar16 = pvVar9;
  (*pcVar17)(pvVar9,1,UVar12.unknown);
  if ((int)pvVar16 == 0) {
    (*pcVar24)(pvVar8,pvVar9,UVar12.unknown);
    (**(code **)(lVar22 + 0x38))(pvVar8,0,1,UVar12.unknown);
  }
  else {
    puVar13 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy(pvVar8,pvVar9,*(size_t *)(*(long *)(puVar13 + -8) + 0x40));
  }
  puVar13 = &DAT_100560760;
  FUN_100002f94(&DAT_100560760,&DAT_100436168);
  *(undefined8 *)((long)pvVar8 + (long)*(int *)(puVar13 + 0x1c)) =
       *(undefined8 *)((long)pvVar9 + (long)*(int *)(puVar13 + 0x1c));
  iVar10 = *(int *)(param_3 + 0x44);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  *puVar1 = *puVar2;
  uVar23 = puVar2[2];
  uVar28 = puVar2[1];
  puVar1[2] = puVar2[2];
  puVar1[1] = uVar28;
  puVar6 = (undefined1 *)((long)param_1 + (long)iVar10);
  puVar7 = (undefined1 *)((long)param_2 + (long)iVar10);
  *puVar6 = *puVar7;
  uVar25 = *(undefined8 *)(puVar7 + 8);
  *(undefined8 *)(puVar6 + 8) = uVar25;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x48));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x48));
  *puVar1 = *param_2;
  uVar21 = param_2[2];
  uVar29 = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[1] = uVar29;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar28);
  _swift_retain(uVar23);
  _swift_retain(uVar25);
  _swift_bridgeObjectRetain(uVar29);
  _swift_retain(uVar21);
  return param_1;
}

