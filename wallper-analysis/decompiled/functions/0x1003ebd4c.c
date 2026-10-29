// rea decompile_all
// name: FUN_1003ebd4c
// address: 0x1003ebd4c
// body: available
// range: 0x1003ebd4c-0x1003ec46b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1003ebd4c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  URL UVar9;
  long lVar10;
  Date DVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  code *pcVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  code *pcVar19;
  undefined8 uVar20;
  
  *param_1 = *param_2;
  uVar14 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar14);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  lVar6 = 0;
  FUN_10040211c();
  lVar13 = *(long *)(lVar6 + -8);
  pcVar15 = *(code **)(lVar13 + 0x30);
  puVar7 = puVar1;
  (*pcVar15)(puVar1,1,lVar6);
  puVar8 = puVar2;
  (*pcVar15)(puVar2,1,lVar6);
  if ((int)puVar7 == 0) {
    if ((int)puVar8 == 0) {
      *puVar1 = *puVar2;
      uVar14 = puVar1[1];
      puVar1[1] = puVar2[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar14);
      iVar5 = *(int *)(lVar6 + 0x14);
      UVar9 = Foundation::URL::typeMetadataAccessor();
      lVar18 = *(long *)(UVar9.unknown + -8);
      pcVar15 = *(code **)(lVar18 + 0x18);
      (*pcVar15)((long)puVar1 + (long)iVar5,(long)puVar2 + (long)iVar5,UVar9.unknown);
      lVar16 = (long)*(int *)(lVar6 + 0x18);
      pcVar19 = *(code **)(lVar18 + 0x30);
      lVar13 = (long)puVar1 + lVar16;
      (*pcVar19)(lVar13,1,UVar9.unknown);
      lVar10 = (long)puVar2 + lVar16;
      (*pcVar19)(lVar10,1,UVar9.unknown);
      if ((int)lVar13 == 0) {
        if ((int)lVar10 != 0) {
          (**(code **)(lVar18 + 8))((long)puVar1 + lVar16,UVar9.unknown);
          goto LAB_1003ec158;
        }
        (*pcVar15)((long)puVar1 + lVar16,(long)puVar2 + lVar16,UVar9.unknown);
      }
      else if ((int)lVar10 == 0) {
        (**(code **)(lVar18 + 0x10))((long)puVar1 + lVar16,(long)puVar2 + lVar16,UVar9.unknown);
        (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar16,0,1,UVar9.unknown);
      }
      else {
LAB_1003ec158:
        puVar12 = &DAT_100553d90;
        FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
        _memcpy((void *)((long)puVar1 + lVar16),(void *)((long)puVar2 + lVar16),
                *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
      }
      puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x1c));
      puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x1c));
      *puVar7 = *puVar8;
      uVar14 = puVar7[1];
      puVar7[1] = puVar8[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar14);
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x20)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x20));
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x24)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x24));
      puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x28));
      puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x28));
      uVar14 = *puVar8;
      *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar8 + 1);
      *puVar7 = uVar14;
      lVar18 = (long)*(int *)(lVar6 + 0x2c);
      DVar11 = Foundation::Date::typeMetadataAccessor();
      lVar16 = *(long *)(DVar11.unknown + -8);
      pcVar15 = *(code **)(lVar16 + 0x30);
      lVar13 = (long)puVar1 + lVar18;
      (*pcVar15)(lVar13,1,DVar11.unknown);
      lVar10 = (long)puVar2 + lVar18;
      (*pcVar15)(lVar10,1,DVar11.unknown);
      if ((int)lVar13 == 0) {
        if ((int)lVar10 != 0) {
          (**(code **)(lVar16 + 8))((long)puVar1 + lVar18,DVar11.unknown);
          goto LAB_1003ec268;
        }
        (**(code **)(lVar16 + 0x18))((long)puVar1 + lVar18,(long)puVar2 + lVar18,DVar11.unknown);
      }
      else if ((int)lVar10 == 0) {
        (**(code **)(lVar16 + 0x10))((long)puVar1 + lVar18,(long)puVar2 + lVar18,DVar11.unknown);
        (**(code **)(lVar16 + 0x38))((long)puVar1 + lVar18,0,1,DVar11.unknown);
      }
      else {
LAB_1003ec268:
        puVar12 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar18),(void *)((long)puVar2 + lVar18),
                *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
      }
      puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x30));
      puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x30));
      uVar14 = *puVar8;
      *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar8 + 1);
      *puVar7 = uVar14;
      puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x34));
      puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x34));
      *puVar7 = *puVar8;
      uVar14 = puVar7[1];
      puVar7[1] = puVar8[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar14);
      puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x38));
      puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x38));
      uVar14 = *puVar8;
      *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar8 + 1);
      *puVar7 = uVar14;
      puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x3c));
      puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x3c));
      *puVar7 = *puVar8;
      uVar14 = puVar7[1];
      puVar7[1] = puVar8[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar14);
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x40)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x40));
      lVar13 = (long)*(int *)(lVar6 + 0x44);
      uVar14 = *(undefined8 *)((long)puVar1 + lVar13);
      *(undefined8 *)((long)puVar1 + lVar13) = *(undefined8 *)((long)puVar2 + lVar13);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar14);
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x48)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x48));
      goto LAB_1003ec358;
    }
    FUN_100029548(puVar1,FUN_10040211c);
  }
  else if ((int)puVar8 == 0) {
    *puVar1 = *puVar2;
    uVar14 = puVar2[1];
    puVar1[1] = uVar14;
    iVar5 = *(int *)(lVar6 + 0x14);
    UVar9 = Foundation::URL::typeMetadataAccessor();
    lVar18 = *(long *)(UVar9.unknown + -8);
    pcVar15 = *(code **)(lVar18 + 0x10);
    _swift_bridgeObjectRetain(uVar14);
    (*pcVar15)((long)puVar1 + (long)iVar5,(long)puVar2 + (long)iVar5,UVar9.unknown);
    lVar16 = (long)*(int *)(lVar6 + 0x18);
    lVar10 = (long)puVar2 + lVar16;
    (**(code **)(lVar18 + 0x30))(lVar10,1,UVar9.unknown);
    if ((int)lVar10 == 0) {
      (*pcVar15)((long)puVar1 + lVar16,(long)puVar2 + lVar16,UVar9.unknown);
      (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar16,0,1,UVar9.unknown);
    }
    else {
      puVar12 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)puVar1 + lVar16),(void *)((long)puVar2 + lVar16),
              *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x1c));
    puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x1c));
    *puVar7 = *puVar8;
    uVar17 = puVar8[1];
    puVar7[1] = uVar17;
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x20)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x20));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x24)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x24));
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x28));
    puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x28));
    uVar14 = *puVar8;
    *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar8 + 1);
    *puVar7 = uVar14;
    lVar18 = (long)*(int *)(lVar6 + 0x2c);
    DVar11 = Foundation::Date::typeMetadataAccessor();
    lVar16 = *(long *)(DVar11.unknown + -8);
    pcVar15 = *(code **)(lVar16 + 0x30);
    _swift_bridgeObjectRetain(uVar17);
    lVar10 = (long)puVar2 + lVar18;
    (*pcVar15)(lVar10,1,DVar11.unknown);
    if ((int)lVar10 == 0) {
      (**(code **)(lVar16 + 0x10))((long)puVar1 + lVar18,(long)puVar2 + lVar18,DVar11.unknown);
      (**(code **)(lVar16 + 0x38))((long)puVar1 + lVar18,0,1,DVar11.unknown);
    }
    else {
      puVar12 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar18),(void *)((long)puVar2 + lVar18),
              *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x30));
    puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x30));
    uVar14 = *puVar8;
    *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar8 + 1);
    *puVar7 = uVar14;
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x34));
    puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x34));
    *puVar7 = *puVar8;
    puVar7[1] = puVar8[1];
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x38));
    puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x38));
    uVar14 = *puVar8;
    *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar8 + 1);
    *puVar7 = uVar14;
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x3c));
    puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x3c));
    *puVar7 = *puVar8;
    uVar14 = puVar8[1];
    puVar7[1] = uVar14;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x40)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x40));
    uVar17 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x44));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x44)) = uVar17;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x48)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x48));
    pcVar15 = *(code **)(lVar13 + 0x38);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar14);
    _swift_bridgeObjectRetain(uVar17);
    (*pcVar15)(puVar1,0,1,lVar6);
    goto LAB_1003ec358;
  }
  puVar12 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar12 + -8) + 0x40));
LAB_1003ec358:
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *puVar1 = *puVar2;
  uVar14 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar14);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar17 = puVar1[1];
  uVar14 = puVar2[1];
  uVar20 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar20;
  _swift_retain(uVar14);
  _swift_release(uVar17);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar14 = *puVar1;
  *puVar1 = *puVar2;
  _swift_retain();
  _swift_release(uVar14);
  puVar1[1] = puVar2[1];
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar3 = *puVar4;
  uVar14 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_retain();
  _swift_release(uVar14);
  return param_1;
}

