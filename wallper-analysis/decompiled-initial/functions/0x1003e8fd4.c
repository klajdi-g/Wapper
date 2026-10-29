// rea decompile_all
// name: FUN_1003e8fd4
// address: 0x1003e8fd4
// body: available
// range: 0x1003e8fd4-0x1003e9c8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1003e8fd4(undefined8 *param_1,undefined8 *param_2,long param_3)

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
  long lVar10;
  URL UVar11;
  undefined *puVar12;
  Date DVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  void *pvVar17;
  void *pvVar18;
  code *pcVar19;
  long lVar20;
  undefined8 uVar21;
  code *pcVar22;
  code *pcVar23;
  long lVar24;
  long lVar25;
  code *pcVar26;
  undefined8 uVar27;
  long lVar28;
  
  *param_1 = *param_2;
  uVar21 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar21);
  lVar10 = 0;
  FUN_10040211c();
  iVar9 = *(int *)(lVar10 + 0x14);
  UVar11 = Foundation::URL::typeMetadataAccessor();
  lVar28 = *(long *)(UVar11.unknown + -8);
  pcVar19 = *(code **)(lVar28 + 0x18);
  (*pcVar19)((long)param_1 + (long)iVar9,(long)param_2 + (long)iVar9,UVar11.unknown);
  lVar24 = (long)*(int *)(lVar10 + 0x18);
  pcVar22 = *(code **)(lVar28 + 0x30);
  lVar20 = (long)param_1 + lVar24;
  (*pcVar22)(lVar20,1,UVar11.unknown);
  lVar16 = (long)param_2 + lVar24;
  (*pcVar22)(lVar16,1,UVar11.unknown);
  if ((int)lVar20 == 0) {
    if ((int)lVar16 != 0) {
      (**(code **)(lVar28 + 8))((long)param_1 + lVar24,UVar11.unknown);
      goto LAB_1003e90d8;
    }
    (*pcVar19)((long)param_1 + lVar24,(long)param_2 + lVar24,UVar11.unknown);
  }
  else if ((int)lVar16 == 0) {
    (**(code **)(lVar28 + 0x10))((long)param_1 + lVar24,(long)param_2 + lVar24,UVar11.unknown);
    (**(code **)(lVar28 + 0x38))((long)param_1 + lVar24,0,1,UVar11.unknown);
  }
  else {
LAB_1003e90d8:
    puVar12 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy((void *)((long)param_1 + lVar24),(void *)((long)param_2 + lVar24),
            *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x1c));
  *puVar1 = *puVar2;
  uVar21 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar21);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x20));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x24));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x28));
  uVar21 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = uVar21;
  lVar25 = (long)*(int *)(lVar10 + 0x2c);
  DVar13 = Foundation::Date::typeMetadataAccessor();
  lVar24 = *(long *)(DVar13.unknown + -8);
  pcVar26 = *(code **)(lVar24 + 0x30);
  lVar20 = (long)param_1 + lVar25;
  (*pcVar26)(lVar20,1,DVar13.unknown);
  lVar16 = (long)param_2 + lVar25;
  (*pcVar26)(lVar16,1,DVar13.unknown);
  if ((int)lVar20 == 0) {
    if ((int)lVar16 != 0) {
      (**(code **)(lVar24 + 8))((long)param_1 + lVar25,DVar13.unknown);
      goto LAB_1003e91f0;
    }
    (**(code **)(lVar24 + 0x18))((long)param_1 + lVar25,(long)param_2 + lVar25,DVar13.unknown);
  }
  else if ((int)lVar16 == 0) {
    (**(code **)(lVar24 + 0x10))((long)param_1 + lVar25,(long)param_2 + lVar25,DVar13.unknown);
    (**(code **)(lVar24 + 0x38))((long)param_1 + lVar25,0,1,DVar13.unknown);
  }
  else {
LAB_1003e91f0:
    puVar12 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar25),(void *)((long)param_2 + lVar25),
            *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x30));
  uVar21 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = uVar21;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x34));
  *puVar1 = *puVar2;
  uVar21 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar21);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x38));
  uVar21 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = uVar21;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x3c));
  *puVar1 = *puVar2;
  uVar21 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar21);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x40)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x40));
  lVar20 = (long)*(int *)(lVar10 + 0x44);
  uVar21 = *(undefined8 *)((long)param_1 + lVar20);
  *(undefined8 *)((long)param_1 + lVar20) = *(undefined8 *)((long)param_2 + lVar20);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar21);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x48)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x48));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar21 = *puVar1;
  *puVar1 = *puVar2;
  _swift_retain();
  _swift_release(uVar21);
  uVar21 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_retain();
  _swift_release(uVar21);
  puVar12 = &DAT_100560758;
  FUN_100002f94(&DAT_100560758,&DAT_100436160);
  puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(puVar12 + 0x20));
  puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(puVar12 + 0x20));
  lVar20 = *(long *)(lVar10 + -8);
  pcVar23 = *(code **)(lVar20 + 0x30);
  puVar14 = puVar1;
  (*pcVar23)(puVar1,1,lVar10);
  puVar15 = puVar2;
  (*pcVar23)(puVar2,1,lVar10);
  if ((int)puVar14 == 0) {
    if ((int)puVar15 != 0) {
      FUN_100029548(puVar1,FUN_10040211c);
      goto LAB_1003e9414;
    }
    *puVar1 = *puVar2;
    uVar21 = puVar1[1];
    puVar1[1] = puVar2[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar21);
    (*pcVar19)((long)puVar1 + (long)*(int *)(lVar10 + 0x14),
               (long)puVar2 + (long)*(int *)(lVar10 + 0x14),UVar11.unknown);
    lVar25 = (long)*(int *)(lVar10 + 0x18);
    lVar20 = (long)puVar1 + lVar25;
    (*pcVar22)(lVar20,1,UVar11.unknown);
    lVar16 = (long)puVar2 + lVar25;
    (*pcVar22)(lVar16,1,UVar11.unknown);
    if ((int)lVar20 == 0) {
      if ((int)lVar16 != 0) {
        (**(code **)(lVar28 + 8))((long)puVar1 + lVar25,UVar11.unknown);
        goto LAB_1003e9704;
      }
      (*pcVar19)((long)puVar1 + lVar25,(long)puVar2 + lVar25,UVar11.unknown);
    }
    else if ((int)lVar16 == 0) {
      (**(code **)(lVar28 + 0x10))((long)puVar1 + lVar25,(long)puVar2 + lVar25,UVar11.unknown);
      (**(code **)(lVar28 + 0x38))((long)puVar1 + lVar25,0,1,UVar11.unknown);
    }
    else {
LAB_1003e9704:
      puVar12 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)puVar1 + lVar25),(void *)((long)puVar2 + lVar25),
              *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x1c));
    puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x1c));
    *puVar14 = *puVar15;
    uVar21 = puVar14[1];
    puVar14[1] = puVar15[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar21);
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x20)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x20));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x24)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x24));
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x28));
    puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x28));
    uVar21 = *puVar15;
    *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar15 + 1);
    *puVar14 = uVar21;
    lVar25 = (long)*(int *)(lVar10 + 0x2c);
    lVar20 = (long)puVar1 + lVar25;
    (*pcVar26)(lVar20,1,DVar13.unknown);
    lVar16 = (long)puVar2 + lVar25;
    (*pcVar26)(lVar16,1,DVar13.unknown);
    if ((int)lVar20 == 0) {
      if ((int)lVar16 != 0) {
        (**(code **)(lVar24 + 8))((long)puVar1 + lVar25,DVar13.unknown);
        goto LAB_1003e980c;
      }
      (**(code **)(lVar24 + 0x18))((long)puVar1 + lVar25,(long)puVar2 + lVar25,DVar13.unknown);
    }
    else if ((int)lVar16 == 0) {
      (**(code **)(lVar24 + 0x10))((long)puVar1 + lVar25,(long)puVar2 + lVar25,DVar13.unknown);
      (**(code **)(lVar24 + 0x38))((long)puVar1 + lVar25,0,1,DVar13.unknown);
    }
    else {
LAB_1003e980c:
      puVar12 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar25),(void *)((long)puVar2 + lVar25),
              *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x30));
    puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x30));
    uVar21 = *puVar15;
    *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar15 + 1);
    *puVar14 = uVar21;
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x34));
    puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x34));
    *puVar14 = *puVar15;
    uVar21 = puVar14[1];
    puVar14[1] = puVar15[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar21);
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x38));
    puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x38));
    uVar21 = *puVar15;
    *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar15 + 1);
    *puVar14 = uVar21;
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x3c));
    puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x3c));
    *puVar14 = *puVar15;
    uVar21 = puVar14[1];
    puVar14[1] = puVar15[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar21);
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x40)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x40));
    lVar20 = (long)*(int *)(lVar10 + 0x44);
    uVar21 = *(undefined8 *)((long)puVar1 + lVar20);
    *(undefined8 *)((long)puVar1 + lVar20) = *(undefined8 *)((long)puVar2 + lVar20);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar21);
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x48)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x48));
  }
  else if ((int)puVar15 == 0) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    iVar9 = *(int *)(lVar10 + 0x14);
    pcVar23 = *(code **)(lVar28 + 0x10);
    _swift_bridgeObjectRetain();
    (*pcVar23)((long)puVar1 + (long)iVar9,(long)puVar2 + (long)iVar9,UVar11.unknown);
    lVar25 = (long)*(int *)(lVar10 + 0x18);
    lVar16 = (long)puVar2 + lVar25;
    (*pcVar22)(lVar16,1,UVar11.unknown);
    if ((int)lVar16 == 0) {
      (*pcVar23)((long)puVar1 + lVar25,(long)puVar2 + lVar25,UVar11.unknown);
      (**(code **)(lVar28 + 0x38))((long)puVar1 + lVar25,0,1,UVar11.unknown);
    }
    else {
      puVar12 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)puVar1 + lVar25),(void *)((long)puVar2 + lVar25),
              *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x1c));
    puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x1c));
    *puVar14 = *puVar15;
    puVar14[1] = puVar15[1];
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x20)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x20));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x24)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x24));
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x28));
    puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x28));
    uVar21 = *puVar15;
    *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar15 + 1);
    *puVar14 = uVar21;
    lVar25 = (long)*(int *)(lVar10 + 0x2c);
    _swift_bridgeObjectRetain();
    lVar16 = (long)puVar2 + lVar25;
    (*pcVar26)(lVar16,1,DVar13.unknown);
    if ((int)lVar16 == 0) {
      (**(code **)(lVar24 + 0x10))((long)puVar1 + lVar25,(long)puVar2 + lVar25,DVar13.unknown);
      (**(code **)(lVar24 + 0x38))((long)puVar1 + lVar25,0,1,DVar13.unknown);
    }
    else {
      puVar12 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar25),(void *)((long)puVar2 + lVar25),
              *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x30));
    puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x30));
    uVar21 = *puVar15;
    *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar15 + 1);
    *puVar14 = uVar21;
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x34));
    puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x34));
    *puVar14 = *puVar15;
    puVar14[1] = puVar15[1];
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x38));
    puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x38));
    uVar21 = *puVar15;
    *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar15 + 1);
    *puVar14 = uVar21;
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x3c));
    puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x3c));
    *puVar14 = *puVar15;
    uVar21 = puVar15[1];
    puVar14[1] = uVar21;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x40)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x40));
    uVar27 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x44));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x44)) = uVar27;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x48)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x48));
    pcVar26 = *(code **)(lVar20 + 0x38);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar21);
    _swift_bridgeObjectRetain(uVar27);
    (*pcVar26)(puVar1,0,1,lVar10);
  }
  else {
LAB_1003e9414:
    puVar12 = &DAT_10054ac40;
    FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar12 + -8) + 0x40));
  }
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar1 = *puVar2;
  uVar21 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar21);
  plVar3 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  plVar4 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  lVar20 = *plVar4;
  if (*plVar3 == 0) {
    if (lVar20 == 0) goto LAB_1003e9998;
    lVar16 = plVar4[1];
    *plVar3 = lVar20;
    plVar3[1] = lVar16;
    _swift_retain();
  }
  else if (lVar20 == 0) {
    _swift_release(plVar3[1]);
LAB_1003e9998:
    lVar20 = *plVar4;
    plVar3[1] = plVar4[1];
    *plVar3 = lVar20;
  }
  else {
    lVar16 = plVar4[1];
    lVar10 = plVar3[1];
    *plVar3 = lVar20;
    plVar3[1] = lVar16;
    _swift_retain();
    _swift_release(lVar10);
  }
  plVar3 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  plVar4 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  lVar20 = *plVar4;
  if (*plVar3 == 0) {
    if (lVar20 == 0) goto LAB_1003e99f4;
    lVar16 = plVar4[1];
    *plVar3 = lVar20;
    plVar3[1] = lVar16;
    _swift_retain();
  }
  else if (lVar20 == 0) {
    _swift_release(plVar3[1]);
LAB_1003e99f4:
    lVar20 = *plVar4;
    plVar3[1] = plVar4[1];
    *plVar3 = lVar20;
  }
  else {
    lVar16 = plVar4[1];
    lVar10 = plVar3[1];
    *plVar3 = lVar20;
    plVar3[1] = lVar16;
    _swift_retain();
    _swift_release(lVar10);
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar21 = *puVar1;
  *puVar1 = *puVar2;
  _swift_retain();
  _swift_release(uVar21);
  puVar1[1] = puVar2[1];
  puVar5 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar6 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *puVar5 = *puVar6;
  uVar21 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar6 + 8);
  _swift_retain();
  _swift_release(uVar21);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *puVar1 = *puVar2;
  uVar21 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_retain();
  _swift_release(uVar21);
  pvVar7 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  pvVar8 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  pvVar17 = pvVar7;
  (*pcVar22)(pvVar7,1,UVar11.unknown);
  pvVar18 = pvVar8;
  (*pcVar22)(pvVar8,1,UVar11.unknown);
  if ((int)pvVar17 == 0) {
    if ((int)pvVar18 == 0) {
      (*pcVar19)(pvVar7,pvVar8,UVar11.unknown);
      goto LAB_1003e9b38;
    }
    (**(code **)(lVar28 + 8))(pvVar7,UVar11.unknown);
  }
  else if ((int)pvVar18 == 0) {
    (**(code **)(lVar28 + 0x10))(pvVar7,pvVar8,UVar11.unknown);
    (**(code **)(lVar28 + 0x38))(pvVar7,0,1,UVar11.unknown);
    goto LAB_1003e9b38;
  }
  puVar12 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  _memcpy(pvVar7,pvVar8,*(size_t *)(*(long *)(puVar12 + -8) + 0x40));
LAB_1003e9b38:
  puVar12 = &DAT_100560760;
  FUN_100002f94(&DAT_100560760,&DAT_100436168);
  lVar20 = (long)*(int *)(puVar12 + 0x1c);
  uVar21 = *(undefined8 *)((long)pvVar7 + lVar20);
  *(undefined8 *)((long)pvVar7 + lVar20) = *(undefined8 *)((long)pvVar8 + lVar20);
  _swift_retain();
  _swift_release(uVar21);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  *puVar1 = *puVar2;
  uVar21 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar21);
  uVar21 = puVar1[2];
  puVar1[2] = puVar2[2];
  _swift_retain();
  _swift_release(uVar21);
  puVar5 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x44));
  puVar6 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  *puVar5 = *puVar6;
  uVar21 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar6 + 8);
  _swift_retain();
  _swift_release(uVar21);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x48));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x48));
  *puVar1 = *param_2;
  uVar21 = puVar1[1];
  puVar1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar21);
  uVar21 = puVar1[2];
  puVar1[2] = param_2[2];
  _swift_retain();
  _swift_release(uVar21);
  return param_1;
}

