// rea decompile_all
// name: FUN_100392924
// address: 0x100392924
// body: available
// range: 0x100392924-0x10039317b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100392924(long param_1,long param_2,long param_3)

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
  long lVar18;
  code *pcVar19;
  long lVar20;
  code *pcVar21;
  long lVar22;
  code *pcVar23;
  long lVar24;
  long lVar25;
  
  UVar8 = Foundation::UUID::typeMetadataAccessor();
  lVar24 = *(long *)(UVar8.unknown + -8);
  (**(code **)(lVar24 + 0x28))(param_1,param_2,UVar8.unknown);
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
  lVar18 = *(long *)(DVar11.unknown + -8);
  pcVar19 = *(code **)(lVar18 + 0x28);
  (*pcVar19)(param_1 + iVar7,param_2 + iVar7,DVar11.unknown);
  *(undefined1 *)(param_1 + *(int *)(lVar9 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(lVar9 + 0x1c));
  lVar20 = (long)*(int *)(lVar9 + 0x20);
  uVar12 = *(undefined8 *)(param_1 + lVar20);
  *(undefined8 *)(param_1 + lVar20) = *(undefined8 *)(param_2 + lVar20);
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
      (**(code **)(lVar24 + 0x20))(pvVar3,pvVar4,UVar8.unknown);
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
  lVar20 = *(long *)(lVar9 + -8);
  pcVar21 = *(code **)(lVar20 + 0x30);
  puVar14 = puVar1;
  (*pcVar21)(puVar1,1,lVar9);
  puVar15 = puVar2;
  (*pcVar21)(puVar2,1,lVar9);
  if ((int)puVar14 == 0) {
    if ((int)puVar15 == 0) {
      uVar12 = puVar2[1];
      uVar10 = puVar1[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar12;
      _swift_bridgeObjectRelease(uVar10);
      iVar7 = *(int *)(lVar9 + 0x14);
      UVar16 = Foundation::URL::typeMetadataAccessor();
      lVar22 = *(long *)(UVar16.unknown + -8);
      pcVar21 = *(code **)(lVar22 + 0x28);
      (*pcVar21)((long)puVar1 + (long)iVar7,(long)puVar2 + (long)iVar7,UVar16.unknown);
      lVar25 = (long)*(int *)(lVar9 + 0x18);
      pcVar23 = *(code **)(lVar22 + 0x30);
      lVar20 = (long)puVar1 + lVar25;
      (*pcVar23)(lVar20,1,UVar16.unknown);
      lVar24 = (long)puVar2 + lVar25;
      (*pcVar23)(lVar24,1,UVar16.unknown);
      if ((int)lVar20 == 0) {
        if ((int)lVar24 != 0) {
          (**(code **)(lVar22 + 8))((long)puVar1 + lVar25,UVar16.unknown);
          goto LAB_100392e88;
        }
        (*pcVar21)((long)puVar1 + lVar25,(long)puVar2 + lVar25,UVar16.unknown);
      }
      else if ((int)lVar24 == 0) {
        (**(code **)(lVar22 + 0x20))((long)puVar1 + lVar25,(long)puVar2 + lVar25,UVar16.unknown);
        (**(code **)(lVar22 + 0x38))((long)puVar1 + lVar25,0,1,UVar16.unknown);
      }
      else {
LAB_100392e88:
        puVar17 = &DAT_100553d90;
        FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
        _memcpy((void *)((long)puVar1 + lVar25),(void *)((long)puVar2 + lVar25),
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
      lVar22 = (long)*(int *)(lVar9 + 0x2c);
      pcVar21 = *(code **)(lVar18 + 0x30);
      lVar20 = (long)puVar1 + lVar22;
      (*pcVar21)(lVar20,1,DVar11.unknown);
      lVar24 = (long)puVar2 + lVar22;
      (*pcVar21)(lVar24,1,DVar11.unknown);
      if ((int)lVar20 == 0) {
        if ((int)lVar24 != 0) {
          (**(code **)(lVar18 + 8))((long)puVar1 + lVar22,DVar11.unknown);
          goto LAB_100392f88;
        }
        (*pcVar19)((long)puVar1 + lVar22,(long)puVar2 + lVar22,DVar11.unknown);
      }
      else if ((int)lVar24 == 0) {
        (**(code **)(lVar18 + 0x20))((long)puVar1 + lVar22,(long)puVar2 + lVar22,DVar11.unknown);
        (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar22,0,1,DVar11.unknown);
      }
      else {
LAB_100392f88:
        puVar17 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar22),(void *)((long)puVar2 + lVar22),
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
      lVar18 = (long)*(int *)(lVar9 + 0x44);
      uVar12 = *(undefined8 *)((long)puVar1 + lVar18);
      *(undefined8 *)((long)puVar1 + lVar18) = *(undefined8 *)((long)puVar2 + lVar18);
      _swift_bridgeObjectRelease(uVar12);
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x48)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x48));
      goto LAB_10039304c;
    }
    FUN_100029548(puVar1,FUN_10040211c);
  }
  else if ((int)puVar15 == 0) {
    uVar12 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar12;
    iVar7 = *(int *)(lVar9 + 0x14);
    UVar16 = Foundation::URL::typeMetadataAccessor();
    lVar25 = *(long *)(UVar16.unknown + -8);
    pcVar19 = *(code **)(lVar25 + 0x20);
    (*pcVar19)((long)puVar1 + (long)iVar7,(long)puVar2 + (long)iVar7,UVar16.unknown);
    lVar22 = (long)*(int *)(lVar9 + 0x18);
    lVar24 = (long)puVar2 + lVar22;
    (**(code **)(lVar25 + 0x30))(lVar24,1,UVar16.unknown);
    if ((int)lVar24 == 0) {
      (*pcVar19)((long)puVar1 + lVar22,(long)puVar2 + lVar22,UVar16.unknown);
      (**(code **)(lVar25 + 0x38))((long)puVar1 + lVar22,0,1,UVar16.unknown);
    }
    else {
      puVar17 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)puVar1 + lVar22),(void *)((long)puVar2 + lVar22),
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
    lVar22 = (long)*(int *)(lVar9 + 0x2c);
    lVar24 = (long)puVar2 + lVar22;
    (**(code **)(lVar18 + 0x30))(lVar24,1,DVar11.unknown);
    if ((int)lVar24 == 0) {
      (**(code **)(lVar18 + 0x20))((long)puVar1 + lVar22,(long)puVar2 + lVar22,DVar11.unknown);
      (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar22,0,1,DVar11.unknown);
    }
    else {
      puVar17 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar22),(void *)((long)puVar2 + lVar22),
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
    (**(code **)(lVar20 + 0x38))(puVar1,0,1,lVar9);
    goto LAB_10039304c;
  }
  puVar17 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar17 + -8) + 0x40));
LAB_10039304c:
  iVar7 = *(int *)(param_3 + 0x20);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x1c));
  *(undefined1 *)(param_1 + iVar7) = *(undefined1 *)(param_2 + iVar7);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  uVar12 = puVar1[1];
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  uVar10 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar10;
  _swift_release(uVar12);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x28));
  uVar12 = *puVar1;
  *puVar1 = *puVar2;
  _swift_release(uVar12);
  puVar1[1] = puVar2[1];
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x2c));
  uVar12 = *puVar1;
  *puVar1 = *puVar2;
  _swift_release(uVar12);
  puVar1[1] = puVar2[1];
  puVar5 = (undefined1 *)(param_1 + *(int *)(param_3 + 0x30));
  puVar6 = (undefined1 *)(param_2 + *(int *)(param_3 + 0x30));
  *puVar5 = *puVar6;
  uVar12 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar6 + 8);
  _swift_release(uVar12);
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

