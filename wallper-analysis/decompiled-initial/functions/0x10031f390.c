// rea decompile_all
// name: FUN_10031f390
// address: 0x10031f390
// body: available
// range: 0x10031f390-0x10031f983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10031f390(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  URL UVar10;
  long lVar11;
  Date DVar12;
  undefined *puVar13;
  undefined8 uVar14;
  code *pcVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  uVar14 = param_2[1];
  uVar6 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar14;
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  lVar7 = 0;
  FUN_10040211c();
  lVar17 = *(long *)(lVar7 + -8);
  pcVar15 = *(code **)(lVar17 + 0x30);
  puVar8 = puVar1;
  (*pcVar15)(puVar1,1,lVar7);
  puVar9 = puVar2;
  (*pcVar15)(puVar2,1,lVar7);
  if ((int)puVar8 == 0) {
    if ((int)puVar9 == 0) {
      uVar14 = puVar2[1];
      uVar6 = puVar1[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar14;
      _swift_bridgeObjectRelease(uVar6);
      iVar5 = *(int *)(lVar7 + 0x14);
      UVar10 = Foundation::URL::typeMetadataAccessor();
      lVar19 = *(long *)(UVar10.unknown + -8);
      pcVar15 = *(code **)(lVar19 + 0x28);
      (*pcVar15)((long)puVar1 + (long)iVar5,(long)puVar2 + (long)iVar5,UVar10.unknown);
      lVar18 = (long)*(int *)(lVar7 + 0x18);
      pcVar16 = *(code **)(lVar19 + 0x30);
      lVar17 = (long)puVar1 + lVar18;
      (*pcVar16)(lVar17,1,UVar10.unknown);
      lVar11 = (long)puVar2 + lVar18;
      (*pcVar16)(lVar11,1,UVar10.unknown);
      if ((int)lVar17 == 0) {
        if ((int)lVar11 != 0) {
          (**(code **)(lVar19 + 8))((long)puVar1 + lVar18,UVar10.unknown);
          goto LAB_10031f704;
        }
        (*pcVar15)((long)puVar1 + lVar18,(long)puVar2 + lVar18,UVar10.unknown);
      }
      else if ((int)lVar11 == 0) {
        (**(code **)(lVar19 + 0x20))((long)puVar1 + lVar18,(long)puVar2 + lVar18,UVar10.unknown);
        (**(code **)(lVar19 + 0x38))((long)puVar1 + lVar18,0,1,UVar10.unknown);
      }
      else {
LAB_10031f704:
        puVar13 = &DAT_100553d90;
        FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
        _memcpy((void *)((long)puVar1 + lVar18),(void *)((long)puVar2 + lVar18),
                *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
      }
      puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x1c));
      puVar9 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x1c));
      uVar14 = puVar9[1];
      uVar6 = puVar8[1];
      *puVar8 = *puVar9;
      puVar8[1] = uVar14;
      _swift_bridgeObjectRelease(uVar6);
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x20)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x20));
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x24)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x24));
      puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x28));
      puVar9 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x28));
      *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar9 + 1);
      *puVar8 = *puVar9;
      lVar18 = (long)*(int *)(lVar7 + 0x2c);
      DVar12 = Foundation::Date::typeMetadataAccessor();
      lVar19 = *(long *)(DVar12.unknown + -8);
      pcVar15 = *(code **)(lVar19 + 0x30);
      lVar17 = (long)puVar1 + lVar18;
      (*pcVar15)(lVar17,1,DVar12.unknown);
      lVar11 = (long)puVar2 + lVar18;
      (*pcVar15)(lVar11,1,DVar12.unknown);
      if ((int)lVar17 == 0) {
        if ((int)lVar11 != 0) {
          (**(code **)(lVar19 + 8))((long)puVar1 + lVar18,DVar12.unknown);
          goto LAB_10031f804;
        }
        (**(code **)(lVar19 + 0x28))((long)puVar1 + lVar18,(long)puVar2 + lVar18,DVar12.unknown);
      }
      else if ((int)lVar11 == 0) {
        (**(code **)(lVar19 + 0x20))((long)puVar1 + lVar18,(long)puVar2 + lVar18,DVar12.unknown);
        (**(code **)(lVar19 + 0x38))((long)puVar1 + lVar18,0,1,DVar12.unknown);
      }
      else {
LAB_10031f804:
        puVar13 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar18),(void *)((long)puVar2 + lVar18),
                *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
      }
      puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x30));
      puVar9 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x30));
      *puVar8 = *puVar9;
      *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar9 + 1);
      puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x34));
      puVar9 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x34));
      uVar14 = puVar9[1];
      uVar6 = puVar8[1];
      *puVar8 = *puVar9;
      puVar8[1] = uVar14;
      _swift_bridgeObjectRelease(uVar6);
      puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x38));
      puVar9 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x38));
      *puVar8 = *puVar9;
      *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar9 + 1);
      puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x3c));
      puVar9 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x3c));
      uVar14 = puVar9[1];
      uVar6 = puVar8[1];
      *puVar8 = *puVar9;
      puVar8[1] = uVar14;
      _swift_bridgeObjectRelease(uVar6);
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x40)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x40));
      lVar17 = (long)*(int *)(lVar7 + 0x44);
      uVar14 = *(undefined8 *)((long)puVar1 + lVar17);
      *(undefined8 *)((long)puVar1 + lVar17) = *(undefined8 *)((long)puVar2 + lVar17);
      _swift_bridgeObjectRelease(uVar14);
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x48)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x48));
      goto LAB_10031f8cc;
    }
    FUN_10002f1dc(puVar1);
  }
  else if ((int)puVar9 == 0) {
    uVar14 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar14;
    iVar5 = *(int *)(lVar7 + 0x14);
    UVar10 = Foundation::URL::typeMetadataAccessor();
    lVar19 = *(long *)(UVar10.unknown + -8);
    pcVar15 = *(code **)(lVar19 + 0x20);
    (*pcVar15)((long)puVar1 + (long)iVar5,(long)puVar2 + (long)iVar5,UVar10.unknown);
    lVar18 = (long)*(int *)(lVar7 + 0x18);
    lVar11 = (long)puVar2 + lVar18;
    (**(code **)(lVar19 + 0x30))(lVar11,1,UVar10.unknown);
    if ((int)lVar11 == 0) {
      (*pcVar15)((long)puVar1 + lVar18,(long)puVar2 + lVar18,UVar10.unknown);
      (**(code **)(lVar19 + 0x38))((long)puVar1 + lVar18,0,1,UVar10.unknown);
    }
    else {
      puVar13 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)puVar1 + lVar18),(void *)((long)puVar2 + lVar18),
              *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x1c));
    uVar14 = *puVar8;
    puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x1c));
    puVar9[1] = puVar8[1];
    *puVar9 = uVar14;
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x20)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x20));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x24)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x24));
    puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x28));
    puVar9 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x28));
    *puVar8 = *puVar9;
    *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar9 + 1);
    lVar19 = (long)*(int *)(lVar7 + 0x2c);
    DVar12 = Foundation::Date::typeMetadataAccessor();
    lVar18 = *(long *)(DVar12.unknown + -8);
    lVar11 = (long)puVar2 + lVar19;
    (**(code **)(lVar18 + 0x30))(lVar11,1,DVar12.unknown);
    if ((int)lVar11 == 0) {
      (**(code **)(lVar18 + 0x20))((long)puVar1 + lVar19,(long)puVar2 + lVar19,DVar12.unknown);
      (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar19,0,1,DVar12.unknown);
    }
    else {
      puVar13 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar19),(void *)((long)puVar2 + lVar19),
              *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x30));
    puVar9 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x30));
    *puVar8 = *puVar9;
    *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar9 + 1);
    puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x34));
    uVar14 = *puVar8;
    puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x34));
    puVar9[1] = puVar8[1];
    *puVar9 = uVar14;
    puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x38));
    puVar9 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x38));
    *puVar8 = *puVar9;
    *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar9 + 1);
    puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x3c));
    uVar14 = *puVar8;
    puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x3c));
    puVar9[1] = puVar8[1];
    *puVar9 = uVar14;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x40)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x40));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x44)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x44));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x48)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x48));
    (**(code **)(lVar17 + 0x38))(puVar1,0,1,lVar7);
    goto LAB_10031f8cc;
  }
  puVar13 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar13 + -8) + 0x40));
LAB_10031f8cc:
  iVar5 = *(int *)(param_3 + 0x1c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  uVar14 = puVar1[1];
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
  uVar6 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar6;
  _swift_release(uVar14);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar14 = *puVar1;
  *puVar1 = *puVar2;
  _swift_release(uVar14);
  puVar1[1] = puVar2[1];
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar3 = *puVar4;
  uVar14 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_release(uVar14);
  return param_1;
}

