// rea decompile_all
// name: FUN_10031e9e4
// address: 0x10031e9e4
// body: available
// range: 0x10031e9e4-0x10031f0b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10031e9e4(undefined8 *param_1,undefined8 *param_2,long param_3)

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
  code *pcVar13;
  code *pcVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  
  *param_1 = *param_2;
  uVar15 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar15);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  lVar6 = 0;
  FUN_10040211c();
  lVar18 = *(long *)(lVar6 + -8);
  pcVar13 = *(code **)(lVar18 + 0x30);
  puVar7 = puVar1;
  (*pcVar13)(puVar1,1,lVar6);
  puVar8 = puVar2;
  (*pcVar13)(puVar2,1,lVar6);
  if ((int)puVar7 == 0) {
    if ((int)puVar8 == 0) {
      *puVar1 = *puVar2;
      uVar15 = puVar1[1];
      puVar1[1] = puVar2[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar15);
      iVar5 = *(int *)(lVar6 + 0x14);
      UVar9 = Foundation::URL::typeMetadataAccessor();
      lVar19 = *(long *)(UVar9.unknown + -8);
      pcVar13 = *(code **)(lVar19 + 0x18);
      (*pcVar13)((long)puVar1 + (long)iVar5,(long)puVar2 + (long)iVar5,UVar9.unknown);
      lVar16 = (long)*(int *)(lVar6 + 0x18);
      pcVar14 = *(code **)(lVar19 + 0x30);
      lVar18 = (long)puVar1 + lVar16;
      (*pcVar14)(lVar18,1,UVar9.unknown);
      lVar10 = (long)puVar2 + lVar16;
      (*pcVar14)(lVar10,1,UVar9.unknown);
      if ((int)lVar18 == 0) {
        if ((int)lVar10 != 0) {
          (**(code **)(lVar19 + 8))((long)puVar1 + lVar16,UVar9.unknown);
          goto LAB_10031eddc;
        }
        (*pcVar13)((long)puVar1 + lVar16,(long)puVar2 + lVar16,UVar9.unknown);
      }
      else if ((int)lVar10 == 0) {
        (**(code **)(lVar19 + 0x10))((long)puVar1 + lVar16,(long)puVar2 + lVar16,UVar9.unknown);
        (**(code **)(lVar19 + 0x38))((long)puVar1 + lVar16,0,1,UVar9.unknown);
      }
      else {
LAB_10031eddc:
        puVar12 = &DAT_100553d90;
        FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
        _memcpy((void *)((long)puVar1 + lVar16),(void *)((long)puVar2 + lVar16),
                *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
      }
      puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x1c));
      puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x1c));
      *puVar7 = *puVar8;
      uVar15 = puVar7[1];
      puVar7[1] = puVar8[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar15);
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x20)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x20));
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x24)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x24));
      puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x28));
      puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x28));
      uVar15 = *puVar8;
      *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar8 + 1);
      *puVar7 = uVar15;
      lVar16 = (long)*(int *)(lVar6 + 0x2c);
      DVar11 = Foundation::Date::typeMetadataAccessor();
      lVar19 = *(long *)(DVar11.unknown + -8);
      pcVar13 = *(code **)(lVar19 + 0x30);
      lVar18 = (long)puVar1 + lVar16;
      (*pcVar13)(lVar18,1,DVar11.unknown);
      lVar10 = (long)puVar2 + lVar16;
      (*pcVar13)(lVar10,1,DVar11.unknown);
      if ((int)lVar18 == 0) {
        if ((int)lVar10 != 0) {
          (**(code **)(lVar19 + 8))((long)puVar1 + lVar16,DVar11.unknown);
          goto LAB_10031eeec;
        }
        (**(code **)(lVar19 + 0x18))((long)puVar1 + lVar16,(long)puVar2 + lVar16,DVar11.unknown);
      }
      else if ((int)lVar10 == 0) {
        (**(code **)(lVar19 + 0x10))((long)puVar1 + lVar16,(long)puVar2 + lVar16,DVar11.unknown);
        (**(code **)(lVar19 + 0x38))((long)puVar1 + lVar16,0,1,DVar11.unknown);
      }
      else {
LAB_10031eeec:
        puVar12 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar16),(void *)((long)puVar2 + lVar16),
                *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
      }
      puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x30));
      puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x30));
      uVar15 = *puVar8;
      *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar8 + 1);
      *puVar7 = uVar15;
      puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x34));
      puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x34));
      *puVar7 = *puVar8;
      uVar15 = puVar7[1];
      puVar7[1] = puVar8[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar15);
      puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x38));
      puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x38));
      uVar15 = *puVar8;
      *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar8 + 1);
      *puVar7 = uVar15;
      puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x3c));
      puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x3c));
      *puVar7 = *puVar8;
      uVar15 = puVar7[1];
      puVar7[1] = puVar8[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar15);
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x40)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x40));
      lVar18 = (long)*(int *)(lVar6 + 0x44);
      uVar15 = *(undefined8 *)((long)puVar1 + lVar18);
      *(undefined8 *)((long)puVar1 + lVar18) = *(undefined8 *)((long)puVar2 + lVar18);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar15);
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x48)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x48));
      goto LAB_10031efdc;
    }
    FUN_10002f1dc(puVar1);
  }
  else if ((int)puVar8 == 0) {
    *puVar1 = *puVar2;
    uVar15 = puVar2[1];
    puVar1[1] = uVar15;
    iVar5 = *(int *)(lVar6 + 0x14);
    UVar9 = Foundation::URL::typeMetadataAccessor();
    lVar19 = *(long *)(UVar9.unknown + -8);
    pcVar13 = *(code **)(lVar19 + 0x10);
    _swift_bridgeObjectRetain(uVar15);
    (*pcVar13)((long)puVar1 + (long)iVar5,(long)puVar2 + (long)iVar5,UVar9.unknown);
    lVar16 = (long)*(int *)(lVar6 + 0x18);
    lVar10 = (long)puVar2 + lVar16;
    (**(code **)(lVar19 + 0x30))(lVar10,1,UVar9.unknown);
    if ((int)lVar10 == 0) {
      (*pcVar13)((long)puVar1 + lVar16,(long)puVar2 + lVar16,UVar9.unknown);
      (**(code **)(lVar19 + 0x38))((long)puVar1 + lVar16,0,1,UVar9.unknown);
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
    uVar15 = *puVar8;
    *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar8 + 1);
    *puVar7 = uVar15;
    lVar19 = (long)*(int *)(lVar6 + 0x2c);
    DVar11 = Foundation::Date::typeMetadataAccessor();
    lVar16 = *(long *)(DVar11.unknown + -8);
    pcVar13 = *(code **)(lVar16 + 0x30);
    _swift_bridgeObjectRetain(uVar17);
    lVar10 = (long)puVar2 + lVar19;
    (*pcVar13)(lVar10,1,DVar11.unknown);
    if ((int)lVar10 == 0) {
      (**(code **)(lVar16 + 0x10))((long)puVar1 + lVar19,(long)puVar2 + lVar19,DVar11.unknown);
      (**(code **)(lVar16 + 0x38))((long)puVar1 + lVar19,0,1,DVar11.unknown);
    }
    else {
      puVar12 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar19),(void *)((long)puVar2 + lVar19),
              *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x30));
    puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x30));
    uVar15 = *puVar8;
    *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar8 + 1);
    *puVar7 = uVar15;
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x34));
    puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x34));
    *puVar7 = *puVar8;
    puVar7[1] = puVar8[1];
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x38));
    puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x38));
    uVar15 = *puVar8;
    *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar8 + 1);
    *puVar7 = uVar15;
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x3c));
    puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x3c));
    *puVar7 = *puVar8;
    uVar15 = puVar8[1];
    puVar7[1] = uVar15;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x40)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x40));
    uVar17 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x44));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x44)) = uVar17;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x48)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x48));
    pcVar13 = *(code **)(lVar18 + 0x38);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar15);
    _swift_bridgeObjectRetain(uVar17);
    (*pcVar13)(puVar1,0,1,lVar6);
    goto LAB_10031efdc;
  }
  puVar12 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar12 + -8) + 0x40));
LAB_10031efdc:
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar17 = puVar1[1];
  uVar15 = puVar2[1];
  uVar20 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar20;
  _swift_retain(uVar15);
  _swift_release(uVar17);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar15 = *puVar1;
  *puVar1 = *puVar2;
  _swift_retain();
  _swift_release(uVar15);
  puVar1[1] = puVar2[1];
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar3 = *puVar4;
  uVar15 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_retain();
  _swift_release(uVar15);
  return param_1;
}

