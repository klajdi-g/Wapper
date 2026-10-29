// rea decompile_all
// name: FUN_1003e7dd0
// address: 0x1003e7dd0
// body: available
// range: 0x1003e7dd0-0x1003e855b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long * FUN_1003e7dd0(long *param_1,long *param_2,long param_3)

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
  uint uVar10;
  int iVar11;
  long lVar12;
  URL UVar13;
  undefined *puVar14;
  Date DVar15;
  undefined8 *puVar16;
  void *pvVar17;
  code *pcVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  code *pcVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  
  uVar10 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar10 >> 0x11 & 1) == 0) {
    lVar20 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar20;
    lVar12 = 0;
    FUN_10040211c();
    iVar11 = *(int *)(lVar12 + 0x14);
    UVar13 = Foundation::URL::typeMetadataAccessor();
    lVar24 = *(long *)(UVar13.unknown + -8);
    pcVar26 = *(code **)(lVar24 + 0x10);
    _swift_bridgeObjectRetain(lVar20);
    (*pcVar26)((long)param_1 + (long)iVar11,(long)param_2 + (long)iVar11,UVar13.unknown);
    lVar21 = (long)*(int *)(lVar12 + 0x18);
    pcVar18 = *(code **)(lVar24 + 0x30);
    lVar20 = (long)param_2 + lVar21;
    (*pcVar18)(lVar20,1,UVar13.unknown);
    if ((int)lVar20 == 0) {
      (*pcVar26)((long)param_1 + lVar21,(long)param_2 + lVar21,UVar13.unknown);
      (**(code **)(lVar24 + 0x38))((long)param_1 + lVar21,0,1,UVar13.unknown);
    }
    else {
      puVar14 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)param_1 + lVar21),(void *)((long)param_2 + lVar21),
              *(size_t *)(*(long *)(puVar14 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar12 + 0x1c));
    uVar23 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar23;
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x20)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar12 + 0x20));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar12 + 0x24)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar12 + 0x24));
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar12 + 0x28));
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    *puVar1 = *puVar2;
    lVar21 = (long)*(int *)(lVar12 + 0x2c);
    DVar15 = Foundation::Date::typeMetadataAccessor();
    lVar29 = *(long *)(DVar15.unknown + -8);
    pcVar22 = *(code **)(lVar29 + 0x30);
    _swift_bridgeObjectRetain(uVar23);
    lVar20 = (long)param_2 + lVar21;
    (*pcVar22)(lVar20,1,DVar15.unknown);
    if ((int)lVar20 == 0) {
      (**(code **)(lVar29 + 0x10))((long)param_1 + lVar21,(long)param_2 + lVar21,DVar15.unknown);
      (**(code **)(lVar29 + 0x38))((long)param_1 + lVar21,0,1,DVar15.unknown);
    }
    else {
      puVar14 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)param_1 + lVar21),(void *)((long)param_2 + lVar21),
              *(size_t *)(*(long *)(puVar14 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x30));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar12 + 0x30));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x34));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar12 + 0x34));
    uVar23 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar23;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x38));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar12 + 0x38));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x3c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar12 + 0x3c));
    uVar23 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar23;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar12 + 0x40)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar12 + 0x40));
    uVar25 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar12 + 0x44));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x44)) = uVar25;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar12 + 0x48)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar12 + 0x48));
    iVar11 = *(int *)(param_3 + 0x18);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar11);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar11);
    uVar27 = puVar2[1];
    uVar30 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar30;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar25);
    _swift_retain(uVar30);
    _swift_retain(uVar27);
    puVar14 = &DAT_100560758;
    FUN_100002f94(&DAT_100560758,&DAT_100436160);
    puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(puVar14 + 0x20));
    puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(puVar14 + 0x20));
    lVar20 = *(long *)(lVar12 + -8);
    puVar16 = puVar2;
    (**(code **)(lVar20 + 0x30))(puVar2,1,lVar12);
    if ((int)puVar16 == 0) {
      uVar23 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar23;
      iVar11 = *(int *)(lVar12 + 0x14);
      _swift_bridgeObjectRetain();
      (*pcVar26)((long)puVar1 + (long)iVar11,(long)puVar2 + (long)iVar11,UVar13.unknown);
      lVar28 = (long)*(int *)(lVar12 + 0x18);
      lVar21 = (long)puVar2 + lVar28;
      (*pcVar18)(lVar21,1,UVar13.unknown);
      if ((int)lVar21 == 0) {
        (*pcVar26)((long)puVar1 + lVar28,(long)puVar2 + lVar28,UVar13.unknown);
        (**(code **)(lVar24 + 0x38))((long)puVar1 + lVar28,0,1,UVar13.unknown);
      }
      else {
        puVar14 = &DAT_100553d90;
        FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
        _memcpy((void *)((long)puVar1 + lVar28),(void *)((long)puVar2 + lVar28),
                *(size_t *)(*(long *)(puVar14 + -8) + 0x40));
      }
      puVar16 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x1c));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x1c));
      uVar23 = puVar3[1];
      *puVar16 = *puVar3;
      puVar16[1] = uVar23;
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x20)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x20));
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x24)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x24));
      puVar16 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x28));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x28));
      *(undefined1 *)(puVar16 + 1) = *(undefined1 *)(puVar3 + 1);
      *puVar16 = *puVar3;
      lVar28 = (long)*(int *)(lVar12 + 0x2c);
      _swift_bridgeObjectRetain();
      lVar21 = (long)puVar2 + lVar28;
      (*pcVar22)(lVar21,1,DVar15.unknown);
      if ((int)lVar21 == 0) {
        (**(code **)(lVar29 + 0x10))((long)puVar1 + lVar28,(long)puVar2 + lVar28,DVar15.unknown);
        (**(code **)(lVar29 + 0x38))((long)puVar1 + lVar28,0,1,DVar15.unknown);
      }
      else {
        puVar14 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar28),(void *)((long)puVar2 + lVar28),
                *(size_t *)(*(long *)(puVar14 + -8) + 0x40));
      }
      puVar16 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x30));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x30));
      *puVar16 = *puVar3;
      *(undefined1 *)(puVar16 + 1) = *(undefined1 *)(puVar3 + 1);
      puVar16 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x34));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x34));
      uVar23 = puVar3[1];
      *puVar16 = *puVar3;
      puVar16[1] = uVar23;
      puVar16 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x38));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x38));
      *puVar16 = *puVar3;
      *(undefined1 *)(puVar16 + 1) = *(undefined1 *)(puVar3 + 1);
      puVar16 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x3c));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x3c));
      uVar23 = puVar3[1];
      *puVar16 = *puVar3;
      puVar16[1] = uVar23;
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x40)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x40));
      uVar25 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x44));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x44)) = uVar25;
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x48)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x48));
      pcVar22 = *(code **)(lVar20 + 0x38);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(uVar25);
      (*pcVar22)(puVar1,0,1,lVar12);
    }
    else {
      puVar14 = &DAT_10054ac40;
      FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar14 + -8) + 0x40));
    }
    iVar11 = *(int *)(param_3 + 0x20);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    *(undefined1 *)((long)param_1 + (long)iVar11) = *(undefined1 *)((long)param_2 + (long)iVar11);
    iVar11 = *(int *)(param_3 + 0x28);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    uVar23 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar23;
    plVar4 = (long *)((long)param_1 + (long)iVar11);
    plVar5 = (long *)((long)param_2 + (long)iVar11);
    lVar20 = *plVar5;
    _swift_bridgeObjectRetain();
    if (lVar20 == 0) {
      lVar20 = *plVar5;
      plVar4[1] = plVar5[1];
      *plVar4 = lVar20;
    }
    else {
      lVar12 = plVar5[1];
      *plVar4 = lVar20;
      plVar4[1] = lVar12;
      _swift_retain();
    }
    plVar4 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
    plVar5 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    if (*plVar5 == 0) {
      lVar20 = *plVar5;
      plVar4[1] = plVar5[1];
      *plVar4 = lVar20;
    }
    else {
      lVar20 = plVar5[1];
      *plVar4 = *plVar5;
      plVar4[1] = lVar20;
      _swift_retain();
    }
    iVar11 = *(int *)(param_3 + 0x34);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    uVar23 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar23;
    puVar6 = (undefined1 *)((long)param_1 + (long)iVar11);
    puVar7 = (undefined1 *)((long)param_2 + (long)iVar11);
    *puVar6 = *puVar7;
    uVar23 = *(undefined8 *)(puVar7 + 8);
    *(undefined8 *)(puVar6 + 8) = uVar23;
    iVar11 = *(int *)(param_3 + 0x3c);
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
    uVar27 = *puVar1;
    uVar25 = puVar1[1];
    puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar27;
    pvVar8 = (void *)((long)param_1 + (long)iVar11);
    pvVar9 = (void *)((long)param_2 + (long)iVar11);
    _swift_retain();
    _swift_retain(uVar23);
    _swift_retain(uVar27,uVar25);
    pvVar17 = pvVar9;
    (*pcVar18)(pvVar9,1,UVar13.unknown);
    if ((int)pvVar17 == 0) {
      (*pcVar26)(pvVar8,pvVar9,UVar13.unknown);
      (**(code **)(lVar24 + 0x38))(pvVar8,0,1,UVar13.unknown);
    }
    else {
      puVar14 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy(pvVar8,pvVar9,*(size_t *)(*(long *)(puVar14 + -8) + 0x40));
    }
    puVar14 = &DAT_100560760;
    FUN_100002f94(&DAT_100560760,&DAT_100436168);
    *(undefined8 *)((long)pvVar8 + (long)*(int *)(puVar14 + 0x1c)) =
         *(undefined8 *)((long)pvVar9 + (long)*(int *)(puVar14 + 0x1c));
    iVar11 = *(int *)(param_3 + 0x44);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
    *puVar1 = *puVar2;
    uVar23 = puVar2[2];
    uVar27 = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[1] = uVar27;
    puVar6 = (undefined1 *)((long)param_1 + (long)iVar11);
    puVar7 = (undefined1 *)((long)param_2 + (long)iVar11);
    *puVar6 = *puVar7;
    uVar25 = *(undefined8 *)(puVar7 + 8);
    *(undefined8 *)(puVar6 + 8) = uVar25;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x48));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x48));
    *puVar1 = *puVar2;
    lVar20 = puVar2[2];
    uVar30 = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[1] = uVar30;
    _swift_retain();
    _swift_bridgeObjectRetain(uVar27);
    _swift_retain(uVar23);
    _swift_retain(uVar25);
    _swift_bridgeObjectRetain(uVar30);
  }
  else {
    lVar20 = *param_2;
    *param_1 = lVar20;
    uVar19 = (ulong)uVar10 & 0xff;
    param_1 = (long *)(lVar20 + (uVar19 + 0x10 & (uVar19 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar20);
  return param_1;
}

