// rea decompile_all
// name: FUN_1003ea274
// address: 0x1003ea274
// body: available
// range: 0x1003ea274-0x1003ead97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1003ea274(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  URL UVar12;
  undefined *puVar13;
  Date DVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  void *pvVar19;
  void *pvVar20;
  code *pcVar21;
  long lVar22;
  code *pcVar23;
  code *pcVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  code *pcVar28;
  
  uVar15 = param_2[1];
  uVar10 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar15;
  _swift_bridgeObjectRelease(uVar10);
  lVar11 = 0;
  FUN_10040211c();
  iVar9 = *(int *)(lVar11 + 0x14);
  UVar12 = Foundation::URL::typeMetadataAccessor();
  lVar27 = *(long *)(UVar12.unknown + -8);
  pcVar21 = *(code **)(lVar27 + 0x28);
  (*pcVar21)((long)param_1 + (long)iVar9,(long)param_2 + (long)iVar9,UVar12.unknown);
  lVar25 = (long)*(int *)(lVar11 + 0x18);
  pcVar23 = *(code **)(lVar27 + 0x30);
  lVar22 = (long)param_1 + lVar25;
  (*pcVar23)(lVar22,1,UVar12.unknown);
  lVar18 = (long)param_2 + lVar25;
  (*pcVar23)(lVar18,1,UVar12.unknown);
  if ((int)lVar22 == 0) {
    if ((int)lVar18 != 0) {
      (**(code **)(lVar27 + 8))((long)param_1 + lVar25,UVar12.unknown);
      goto LAB_1003ea368;
    }
    (*pcVar21)((long)param_1 + lVar25,(long)param_2 + lVar25,UVar12.unknown);
  }
  else if ((int)lVar18 == 0) {
    (**(code **)(lVar27 + 0x20))((long)param_1 + lVar25,(long)param_2 + lVar25,UVar12.unknown);
    (**(code **)(lVar27 + 0x38))((long)param_1 + lVar25,0,1,UVar12.unknown);
  }
  else {
LAB_1003ea368:
    puVar13 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy((void *)((long)param_1 + lVar25),(void *)((long)param_2 + lVar25),
            *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x1c));
  uVar15 = puVar2[1];
  uVar10 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar15;
  _swift_bridgeObjectRelease(uVar10);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x20));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar11 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar11 + 0x24));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x28));
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = *puVar2;
  lVar26 = (long)*(int *)(lVar11 + 0x2c);
  DVar14 = Foundation::Date::typeMetadataAccessor();
  lVar25 = *(long *)(DVar14.unknown + -8);
  pcVar28 = *(code **)(lVar25 + 0x30);
  lVar22 = (long)param_1 + lVar26;
  (*pcVar28)(lVar22,1,DVar14.unknown);
  lVar18 = (long)param_2 + lVar26;
  (*pcVar28)(lVar18,1,DVar14.unknown);
  if ((int)lVar22 == 0) {
    if ((int)lVar18 != 0) {
      (**(code **)(lVar25 + 8))((long)param_1 + lVar26,DVar14.unknown);
      goto LAB_1003ea474;
    }
    (**(code **)(lVar25 + 0x28))((long)param_1 + lVar26,(long)param_2 + lVar26,DVar14.unknown);
  }
  else if ((int)lVar18 == 0) {
    (**(code **)(lVar25 + 0x20))((long)param_1 + lVar26,(long)param_2 + lVar26,DVar14.unknown);
    (**(code **)(lVar25 + 0x38))((long)param_1 + lVar26,0,1,DVar14.unknown);
  }
  else {
LAB_1003ea474:
    puVar13 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar26),(void *)((long)param_2 + lVar26),
            *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x30));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x34));
  uVar15 = puVar2[1];
  uVar10 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar15;
  _swift_bridgeObjectRelease(uVar10);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x38));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x3c));
  uVar15 = puVar2[1];
  uVar10 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar15;
  _swift_bridgeObjectRelease(uVar10);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar11 + 0x40)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar11 + 0x40));
  lVar22 = (long)*(int *)(lVar11 + 0x44);
  uVar15 = *(undefined8 *)((long)param_1 + lVar22);
  *(undefined8 *)((long)param_1 + lVar22) = *(undefined8 *)((long)param_2 + lVar22);
  _swift_bridgeObjectRelease(uVar15);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar11 + 0x48)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar11 + 0x48));
  iVar9 = *(int *)(param_3 + 0x18);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
  uVar15 = *puVar1;
  *puVar1 = *puVar2;
  _swift_release(uVar15);
  uVar15 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_release(uVar15);
  puVar13 = &DAT_100560758;
  FUN_100002f94(&DAT_100560758,&DAT_100436160);
  puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(puVar13 + 0x20));
  puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(puVar13 + 0x20));
  lVar22 = *(long *)(lVar11 + -8);
  pcVar24 = *(code **)(lVar22 + 0x30);
  puVar16 = puVar1;
  (*pcVar24)(puVar1,1,lVar11);
  puVar17 = puVar2;
  (*pcVar24)(puVar2,1,lVar11);
  if ((int)puVar16 == 0) {
    if ((int)puVar17 != 0) {
      FUN_100029548(puVar1,FUN_10040211c);
      goto LAB_1003ea644;
    }
    uVar15 = puVar2[1];
    uVar10 = puVar1[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar15;
    _swift_bridgeObjectRelease(uVar10);
    (*pcVar21)((long)puVar1 + (long)*(int *)(lVar11 + 0x14),
               (long)puVar2 + (long)*(int *)(lVar11 + 0x14),UVar12.unknown);
    lVar26 = (long)*(int *)(lVar11 + 0x18);
    lVar22 = (long)puVar1 + lVar26;
    (*pcVar23)(lVar22,1,UVar12.unknown);
    lVar18 = (long)puVar2 + lVar26;
    (*pcVar23)(lVar18,1,UVar12.unknown);
    if ((int)lVar22 == 0) {
      if ((int)lVar18 != 0) {
        (**(code **)(lVar27 + 8))((long)puVar1 + lVar26,UVar12.unknown);
        goto LAB_1003eaba0;
      }
      (*pcVar21)((long)puVar1 + lVar26,(long)puVar2 + lVar26,UVar12.unknown);
    }
    else if ((int)lVar18 == 0) {
      (**(code **)(lVar27 + 0x20))((long)puVar1 + lVar26,(long)puVar2 + lVar26,UVar12.unknown);
      (**(code **)(lVar27 + 0x38))((long)puVar1 + lVar26,0,1,UVar12.unknown);
    }
    else {
LAB_1003eaba0:
      puVar13 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)puVar1 + lVar26),(void *)((long)puVar2 + lVar26),
              *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    puVar16 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x1c));
    puVar17 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x1c));
    uVar15 = puVar17[1];
    uVar10 = puVar16[1];
    *puVar16 = *puVar17;
    puVar16[1] = uVar15;
    _swift_bridgeObjectRelease(uVar10);
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x20)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x20));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x24)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x24));
    puVar16 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x28));
    puVar17 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x28));
    *(undefined1 *)(puVar16 + 1) = *(undefined1 *)(puVar17 + 1);
    *puVar16 = *puVar17;
    lVar26 = (long)*(int *)(lVar11 + 0x2c);
    lVar22 = (long)puVar1 + lVar26;
    (*pcVar28)(lVar22,1,DVar14.unknown);
    lVar18 = (long)puVar2 + lVar26;
    (*pcVar28)(lVar18,1,DVar14.unknown);
    if ((int)lVar22 == 0) {
      if ((int)lVar18 != 0) {
        (**(code **)(lVar25 + 8))((long)puVar1 + lVar26,DVar14.unknown);
        goto LAB_1003eac98;
      }
      (**(code **)(lVar25 + 0x28))((long)puVar1 + lVar26,(long)puVar2 + lVar26,DVar14.unknown);
    }
    else if ((int)lVar18 == 0) {
      (**(code **)(lVar25 + 0x20))((long)puVar1 + lVar26,(long)puVar2 + lVar26,DVar14.unknown);
      (**(code **)(lVar25 + 0x38))((long)puVar1 + lVar26,0,1,DVar14.unknown);
    }
    else {
LAB_1003eac98:
      puVar13 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar26),(void *)((long)puVar2 + lVar26),
              *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    puVar16 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x30));
    puVar17 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x30));
    *puVar16 = *puVar17;
    *(undefined1 *)(puVar16 + 1) = *(undefined1 *)(puVar17 + 1);
    puVar16 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x34));
    puVar17 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x34));
    uVar15 = puVar17[1];
    uVar10 = puVar16[1];
    *puVar16 = *puVar17;
    puVar16[1] = uVar15;
    _swift_bridgeObjectRelease(uVar10);
    puVar16 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x38));
    puVar17 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x38));
    *puVar16 = *puVar17;
    *(undefined1 *)(puVar16 + 1) = *(undefined1 *)(puVar17 + 1);
    puVar16 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x3c));
    puVar17 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x3c));
    uVar15 = puVar17[1];
    uVar10 = puVar16[1];
    *puVar16 = *puVar17;
    puVar16[1] = uVar15;
    _swift_bridgeObjectRelease(uVar10);
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x40)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x40));
    lVar22 = (long)*(int *)(lVar11 + 0x44);
    uVar15 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined8 *)((long)puVar1 + lVar22) = *(undefined8 *)((long)puVar2 + lVar22);
    _swift_bridgeObjectRelease(uVar15);
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x48)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x48));
  }
  else if ((int)puVar17 == 0) {
    uVar15 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar15;
    pcVar24 = *(code **)(lVar27 + 0x20);
    (*pcVar24)((long)puVar1 + (long)*(int *)(lVar11 + 0x14),
               (long)puVar2 + (long)*(int *)(lVar11 + 0x14),UVar12.unknown);
    lVar26 = (long)*(int *)(lVar11 + 0x18);
    lVar18 = (long)puVar2 + lVar26;
    (*pcVar23)(lVar18,1,UVar12.unknown);
    if ((int)lVar18 == 0) {
      (*pcVar24)((long)puVar1 + lVar26,(long)puVar2 + lVar26,UVar12.unknown);
      (**(code **)(lVar27 + 0x38))((long)puVar1 + lVar26,0,1,UVar12.unknown);
    }
    else {
      puVar13 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)puVar1 + lVar26),(void *)((long)puVar2 + lVar26),
              *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    puVar16 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x1c));
    uVar15 = *puVar16;
    puVar17 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x1c));
    puVar17[1] = puVar16[1];
    *puVar17 = uVar15;
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x20)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x20));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x24)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x24));
    puVar16 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x28));
    puVar17 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x28));
    *puVar16 = *puVar17;
    *(undefined1 *)(puVar16 + 1) = *(undefined1 *)(puVar17 + 1);
    lVar26 = (long)*(int *)(lVar11 + 0x2c);
    lVar18 = (long)puVar2 + lVar26;
    (*pcVar28)(lVar18,1,DVar14.unknown);
    if ((int)lVar18 == 0) {
      (**(code **)(lVar25 + 0x20))((long)puVar1 + lVar26,(long)puVar2 + lVar26,DVar14.unknown);
      (**(code **)(lVar25 + 0x38))((long)puVar1 + lVar26,0,1,DVar14.unknown);
    }
    else {
      puVar13 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar26),(void *)((long)puVar2 + lVar26),
              *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    puVar16 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x30));
    puVar17 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x30));
    *puVar16 = *puVar17;
    *(undefined1 *)(puVar16 + 1) = *(undefined1 *)(puVar17 + 1);
    puVar16 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x34));
    uVar15 = *puVar16;
    puVar17 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x34));
    puVar17[1] = puVar16[1];
    *puVar17 = uVar15;
    puVar16 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x38));
    puVar17 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x38));
    *puVar16 = *puVar17;
    *(undefined1 *)(puVar16 + 1) = *(undefined1 *)(puVar17 + 1);
    puVar16 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x3c));
    uVar15 = *puVar16;
    puVar17 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x3c));
    puVar17[1] = puVar16[1];
    *puVar17 = uVar15;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x40)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x40));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x44)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x44));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x48)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x48));
    (**(code **)(lVar22 + 0x38))(puVar1,0,1,lVar11);
  }
  else {
LAB_1003ea644:
    puVar13 = &DAT_10054ac40;
    FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar13 + -8) + 0x40));
  }
  iVar9 = *(int *)(param_3 + 0x20);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *(undefined1 *)((long)param_1 + (long)iVar9) = *(undefined1 *)((long)param_2 + (long)iVar9);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar15 = puVar2[1];
  uVar10 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar15;
  _swift_bridgeObjectRelease(uVar10);
  plVar3 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  plVar4 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  lVar22 = *plVar4;
  if (*plVar3 == 0) {
    if (lVar22 == 0) goto LAB_1003ea934;
    lVar18 = plVar4[1];
    *plVar3 = lVar22;
    plVar3[1] = lVar18;
  }
  else if (lVar22 == 0) {
    _swift_release(plVar3[1]);
LAB_1003ea934:
    lVar22 = *plVar4;
    plVar3[1] = plVar4[1];
    *plVar3 = lVar22;
  }
  else {
    lVar11 = plVar4[1];
    lVar18 = plVar3[1];
    *plVar3 = lVar22;
    plVar3[1] = lVar11;
    _swift_release(lVar18);
  }
  plVar3 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  plVar4 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  lVar22 = *plVar4;
  if (*plVar3 == 0) {
    if (lVar22 == 0) goto LAB_1003ea984;
    lVar18 = plVar4[1];
    *plVar3 = lVar22;
    plVar3[1] = lVar18;
  }
  else if (lVar22 == 0) {
    _swift_release(plVar3[1]);
LAB_1003ea984:
    lVar22 = *plVar4;
    plVar3[1] = plVar4[1];
    *plVar3 = lVar22;
  }
  else {
    lVar11 = plVar4[1];
    lVar18 = plVar3[1];
    *plVar3 = lVar22;
    plVar3[1] = lVar11;
    _swift_release(lVar18);
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar15 = *puVar1;
  *puVar1 = *puVar2;
  _swift_release(uVar15);
  puVar1[1] = puVar2[1];
  puVar5 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar6 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *puVar5 = *puVar6;
  uVar15 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar6 + 8);
  _swift_release(uVar15);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *puVar1 = *puVar2;
  uVar15 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_release(uVar15);
  pvVar7 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  pvVar8 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  pvVar19 = pvVar7;
  (*pcVar23)(pvVar7,1,UVar12.unknown);
  pvVar20 = pvVar8;
  (*pcVar23)(pvVar8,1,UVar12.unknown);
  if ((int)pvVar19 == 0) {
    if ((int)pvVar20 == 0) {
      (*pcVar21)(pvVar7,pvVar8,UVar12.unknown);
      goto LAB_1003eaaa8;
    }
    (**(code **)(lVar27 + 8))(pvVar7,UVar12.unknown);
  }
  else if ((int)pvVar20 == 0) {
    (**(code **)(lVar27 + 0x20))(pvVar7,pvVar8,UVar12.unknown);
    (**(code **)(lVar27 + 0x38))(pvVar7,0,1,UVar12.unknown);
    goto LAB_1003eaaa8;
  }
  puVar13 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  _memcpy(pvVar7,pvVar8,*(size_t *)(*(long *)(puVar13 + -8) + 0x40));
LAB_1003eaaa8:
  puVar13 = &DAT_100560760;
  FUN_100002f94(&DAT_100560760,&DAT_100436168);
  lVar22 = (long)*(int *)(puVar13 + 0x1c);
  uVar15 = *(undefined8 *)((long)pvVar7 + lVar22);
  *(undefined8 *)((long)pvVar7 + lVar22) = *(undefined8 *)((long)pvVar8 + lVar22);
  _swift_release(uVar15);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  uVar15 = puVar2[1];
  uVar10 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar15;
  _swift_bridgeObjectRelease(uVar10);
  uVar15 = puVar1[2];
  puVar1[2] = puVar2[2];
  _swift_release(uVar15);
  puVar5 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x44));
  puVar6 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  *puVar5 = *puVar6;
  uVar15 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar6 + 8);
  _swift_release(uVar15);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x48));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x48));
  uVar15 = param_2[1];
  uVar10 = puVar1[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar15;
  _swift_bridgeObjectRelease(uVar10);
  uVar15 = puVar1[2];
  puVar1[2] = param_2[2];
  _swift_release(uVar15);
  return param_1;
}

