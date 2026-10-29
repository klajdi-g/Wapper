// rea decompile_all
// name: FUN_1003915b4
// address: 0x1003915b4
// body: available
// range: 0x1003915b4-0x100391b2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1003915b4(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  UUID UVar9;
  long lVar10;
  Date DVar11;
  void *pvVar12;
  undefined8 *puVar13;
  URL UVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  code *pcVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  code *pcVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  
  UVar9 = Foundation::UUID::typeMetadataAccessor();
  pcVar21 = *(code **)(*(long *)(UVar9.unknown + -8) + 0x10);
  (*pcVar21)(param_1,param_2,UVar9.unknown);
  lVar10 = 0;
  FUN_10025ee04();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar10 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar10 + 0x14));
  uVar24 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar24;
  iVar8 = *(int *)(lVar10 + 0x18);
  DVar11 = Foundation::Date::typeMetadataAccessor();
  lVar18 = *(long *)(DVar11.unknown + -8);
  pcVar25 = *(code **)(lVar18 + 0x10);
  _swift_bridgeObjectRetain(uVar24);
  (*pcVar25)(param_1 + iVar8,param_2 + iVar8,DVar11.unknown);
  *(undefined1 *)(param_1 + *(int *)(lVar10 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(lVar10 + 0x1c));
  uVar24 = *(undefined8 *)(param_2 + *(int *)(lVar10 + 0x20));
  *(undefined8 *)(param_1 + *(int *)(lVar10 + 0x20)) = uVar24;
  *(undefined1 *)(param_1 + *(int *)(lVar10 + 0x24)) =
       *(undefined1 *)(param_2 + *(int *)(lVar10 + 0x24));
  *(undefined1 *)(param_1 + *(int *)(lVar10 + 0x28)) =
       *(undefined1 *)(param_2 + *(int *)(lVar10 + 0x28));
  *(undefined8 *)(param_1 + *(int *)(lVar10 + 0x2c)) =
       *(undefined8 *)(param_2 + *(int *)(lVar10 + 0x2c));
  *(undefined8 *)(param_1 + *(int *)(lVar10 + 0x30)) =
       *(undefined8 *)(param_2 + *(int *)(lVar10 + 0x30));
  uVar26 = *(undefined8 *)(param_2 + *(int *)(lVar10 + 0x34));
  *(undefined8 *)(param_1 + *(int *)(lVar10 + 0x34)) = uVar26;
  pvVar3 = (void *)(param_1 + *(int *)(param_3 + 0x14));
  pvVar4 = (void *)(param_2 + *(int *)(param_3 + 0x14));
  lVar10 = 0;
  FUN_1001d537c();
  _swift_bridgeObjectRetain(uVar24);
  _swift_bridgeObjectRetain(uVar26);
  pvVar12 = pvVar4;
  _swift_getEnumCaseMultiPayload(pvVar4,lVar10);
  if ((int)pvVar12 == 1) {
    (*pcVar21)(pvVar3,pvVar4,UVar9.unknown);
    _swift_storeEnumTagMultiPayload(pvVar3,lVar10,1);
  }
  else {
    _memcpy(pvVar3,pvVar4,*(size_t *)(*(long *)(lVar10 + -8) + 0x40));
  }
  lVar10 = 0;
  FUN_1001d59ac();
  puVar1 = (undefined8 *)((long)pvVar3 + (long)*(int *)(lVar10 + 0x14));
  puVar2 = (undefined8 *)((long)pvVar4 + (long)*(int *)(lVar10 + 0x14));
  uVar24 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar24;
  puVar1 = (undefined8 *)((long)pvVar3 + (long)*(int *)(lVar10 + 0x18));
  puVar2 = (undefined8 *)((long)pvVar4 + (long)*(int *)(lVar10 + 0x18));
  uVar26 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar26;
  puVar1 = (undefined8 *)((long)pvVar3 + (long)*(int *)(lVar10 + 0x1c));
  puVar2 = (undefined8 *)((long)pvVar4 + (long)*(int *)(lVar10 + 0x1c));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)pvVar3 + (long)*(int *)(lVar10 + 0x20));
  puVar2 = (undefined8 *)((long)pvVar4 + (long)*(int *)(lVar10 + 0x20));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  uVar27 = *(undefined8 *)((long)pvVar4 + (long)*(int *)(lVar10 + 0x24));
  *(undefined8 *)((long)pvVar3 + (long)*(int *)(lVar10 + 0x24)) = uVar27;
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  lVar10 = 0;
  FUN_10040211c();
  lVar19 = *(long *)(lVar10 + -8);
  pcVar21 = *(code **)(lVar19 + 0x30);
  _swift_bridgeObjectRetain(uVar24);
  _swift_bridgeObjectRetain(uVar26);
  _swift_bridgeObjectRetain(uVar27);
  puVar13 = puVar2;
  (*pcVar21)(puVar2,1,lVar10);
  if ((int)puVar13 == 0) {
    uVar24 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar24;
    iVar8 = *(int *)(lVar10 + 0x14);
    UVar14 = Foundation::URL::typeMetadataAccessor();
    lVar28 = *(long *)(UVar14.unknown + -8);
    pcVar21 = *(code **)(lVar28 + 0x10);
    _swift_bridgeObjectRetain(uVar24);
    (*pcVar21)((long)puVar1 + (long)iVar8,(long)puVar2 + (long)iVar8,UVar14.unknown);
    lVar22 = (long)*(int *)(lVar10 + 0x18);
    lVar15 = (long)puVar2 + lVar22;
    (**(code **)(lVar28 + 0x30))(lVar15,1,UVar14.unknown);
    if ((int)lVar15 == 0) {
      (*pcVar21)((long)puVar1 + lVar22,(long)puVar2 + lVar22,UVar14.unknown);
      (**(code **)(lVar28 + 0x38))((long)puVar1 + lVar22,0,1,UVar14.unknown);
    }
    else {
      puVar16 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)puVar1 + lVar22),(void *)((long)puVar2 + lVar22),
              *(size_t *)(*(long *)(puVar16 + -8) + 0x40));
    }
    puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x1c));
    puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x1c));
    uVar24 = puVar5[1];
    *puVar13 = *puVar5;
    puVar13[1] = uVar24;
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x20)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x20));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x24)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x24));
    puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x28));
    puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x28));
    *puVar13 = *puVar5;
    *(undefined1 *)(puVar13 + 1) = *(undefined1 *)(puVar5 + 1);
    lVar22 = (long)*(int *)(lVar10 + 0x2c);
    pcVar21 = *(code **)(lVar18 + 0x30);
    _swift_bridgeObjectRetain();
    lVar15 = (long)puVar2 + lVar22;
    (*pcVar21)(lVar15,1,DVar11.unknown);
    if ((int)lVar15 == 0) {
      (*pcVar25)((long)puVar1 + lVar22,(long)puVar2 + lVar22,DVar11.unknown);
      (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar22,0,1,DVar11.unknown);
    }
    else {
      puVar16 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar22),(void *)((long)puVar2 + lVar22),
              *(size_t *)(*(long *)(puVar16 + -8) + 0x40));
    }
    puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x30));
    puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x30));
    *puVar13 = *puVar5;
    *(undefined1 *)(puVar13 + 1) = *(undefined1 *)(puVar5 + 1);
    puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x34));
    puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x34));
    uVar24 = puVar5[1];
    *puVar13 = *puVar5;
    puVar13[1] = uVar24;
    puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x38));
    puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x38));
    *puVar13 = *puVar5;
    *(undefined1 *)(puVar13 + 1) = *(undefined1 *)(puVar5 + 1);
    puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x3c));
    puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x3c));
    uVar24 = puVar5[1];
    *puVar13 = *puVar5;
    puVar13[1] = uVar24;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x40)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x40));
    uVar26 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x44));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x44)) = uVar26;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x48)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x48));
    pcVar21 = *(code **)(lVar19 + 0x38);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar24);
    _swift_bridgeObjectRetain(uVar26);
    (*pcVar21)(puVar1,0,1,lVar10);
  }
  else {
    puVar16 = &DAT_10054ac40;
    FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar16 + -8) + 0x40));
  }
  iVar8 = *(int *)(param_3 + 0x20);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x1c));
  *(undefined1 *)(param_1 + iVar8) = *(undefined1 *)(param_2 + iVar8);
  iVar8 = *(int *)(param_3 + 0x28);
  puVar1 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  uVar17 = puVar1[1];
  uVar24 = *puVar1;
  puVar2 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar24;
  puVar1 = (undefined8 *)(param_1 + iVar8);
  puVar2 = (undefined8 *)(param_2 + iVar8);
  uVar24 = *puVar2;
  uVar26 = puVar2[1];
  *puVar1 = uVar24;
  puVar1[1] = uVar26;
  iVar8 = *(int *)(param_3 + 0x30);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x2c));
  uVar26 = *puVar2;
  uVar27 = puVar2[1];
  *puVar1 = uVar26;
  puVar1[1] = uVar27;
  puVar6 = (undefined1 *)(param_1 + iVar8);
  puVar7 = (undefined1 *)(param_2 + iVar8);
  *puVar6 = *puVar7;
  uVar23 = *(undefined8 *)(puVar7 + 8);
  *(undefined8 *)(puVar6 + 8) = uVar23;
  iVar8 = *(int *)(param_3 + 0x38);
  puVar6 = (undefined1 *)(param_1 + *(int *)(param_3 + 0x34));
  puVar7 = (undefined1 *)(param_2 + *(int *)(param_3 + 0x34));
  *puVar6 = *puVar7;
  uVar20 = *(undefined8 *)(puVar7 + 8);
  *(undefined8 *)(puVar6 + 8) = uVar20;
  puVar6 = (undefined1 *)(param_1 + iVar8);
  puVar7 = (undefined1 *)(param_2 + iVar8);
  *puVar6 = *puVar7;
  uVar27 = *(undefined8 *)(puVar7 + 8);
  *(undefined8 *)(puVar6 + 8) = uVar27;
  _swift_retain(uVar17);
  _swift_retain(uVar24);
  _swift_retain(uVar26);
  _swift_retain(uVar23);
  _swift_retain(uVar20);
  _swift_retain(uVar27);
  return param_1;
}

