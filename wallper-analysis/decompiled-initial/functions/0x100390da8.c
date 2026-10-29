// rea decompile_all
// name: FUN_100390da8
// address: 0x100390da8
// body: available
// range: 0x100390da8-0x100391347 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_100390da8(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  UUID UVar10;
  long lVar11;
  Date DVar12;
  void *pvVar13;
  undefined8 *puVar14;
  URL UVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  code *pcVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  
  uVar8 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar8 >> 0x11 & 1) == 0) {
    UVar10 = Foundation::UUID::typeMetadataAccessor();
    pcVar22 = *(code **)(*(long *)(UVar10.unknown + -8) + 0x10);
    (*pcVar22)(param_1,param_2,UVar10.unknown);
    lVar11 = 0;
    FUN_10025ee04();
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x14));
    uVar25 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar25;
    iVar9 = *(int *)(lVar11 + 0x18);
    DVar12 = Foundation::Date::typeMetadataAccessor();
    lVar19 = *(long *)(DVar12.unknown + -8);
    pcVar26 = *(code **)(lVar19 + 0x10);
    _swift_bridgeObjectRetain(uVar25);
    (*pcVar26)((long)param_1 + (long)iVar9,(long)param_2 + (long)iVar9,DVar12.unknown);
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar11 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar11 + 0x1c));
    uVar25 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x20));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x20)) = uVar25;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar11 + 0x24)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar11 + 0x24));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar11 + 0x28)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar11 + 0x28));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x2c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x2c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x30));
    uVar27 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x34));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x34)) = uVar27;
    pvVar3 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    pvVar4 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    lVar11 = 0;
    FUN_1001d537c();
    _swift_bridgeObjectRetain(uVar25);
    _swift_bridgeObjectRetain(uVar27);
    pvVar13 = pvVar4;
    _swift_getEnumCaseMultiPayload(pvVar4,lVar11);
    if ((int)pvVar13 == 1) {
      (*pcVar22)(pvVar3,pvVar4,UVar10.unknown);
      _swift_storeEnumTagMultiPayload(pvVar3,lVar11,1);
    }
    else {
      _memcpy(pvVar3,pvVar4,*(size_t *)(*(long *)(lVar11 + -8) + 0x40));
    }
    lVar11 = 0;
    FUN_1001d59ac();
    puVar1 = (undefined8 *)((long)pvVar3 + (long)*(int *)(lVar11 + 0x14));
    puVar2 = (undefined8 *)((long)pvVar4 + (long)*(int *)(lVar11 + 0x14));
    uVar25 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar25;
    puVar1 = (undefined8 *)((long)pvVar3 + (long)*(int *)(lVar11 + 0x18));
    puVar2 = (undefined8 *)((long)pvVar4 + (long)*(int *)(lVar11 + 0x18));
    uVar27 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar27;
    puVar1 = (undefined8 *)((long)pvVar3 + (long)*(int *)(lVar11 + 0x1c));
    puVar2 = (undefined8 *)((long)pvVar4 + (long)*(int *)(lVar11 + 0x1c));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    puVar1 = (undefined8 *)((long)pvVar3 + (long)*(int *)(lVar11 + 0x20));
    puVar2 = (undefined8 *)((long)pvVar4 + (long)*(int *)(lVar11 + 0x20));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    uVar28 = *(undefined8 *)((long)pvVar4 + (long)*(int *)(lVar11 + 0x24));
    *(undefined8 *)((long)pvVar3 + (long)*(int *)(lVar11 + 0x24)) = uVar28;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    lVar11 = 0;
    FUN_10040211c();
    lVar21 = *(long *)(lVar11 + -8);
    pcVar22 = *(code **)(lVar21 + 0x30);
    _swift_bridgeObjectRetain(uVar25);
    _swift_bridgeObjectRetain(uVar27);
    _swift_bridgeObjectRetain(uVar28);
    puVar14 = puVar2;
    (*pcVar22)(puVar2,1,lVar11);
    if ((int)puVar14 == 0) {
      uVar25 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar25;
      iVar9 = *(int *)(lVar11 + 0x14);
      UVar15 = Foundation::URL::typeMetadataAccessor();
      lVar29 = *(long *)(UVar15.unknown + -8);
      pcVar22 = *(code **)(lVar29 + 0x10);
      _swift_bridgeObjectRetain(uVar25);
      (*pcVar22)((long)puVar1 + (long)iVar9,(long)puVar2 + (long)iVar9,UVar15.unknown);
      lVar23 = (long)*(int *)(lVar11 + 0x18);
      lVar16 = (long)puVar2 + lVar23;
      (**(code **)(lVar29 + 0x30))(lVar16,1,UVar15.unknown);
      if ((int)lVar16 == 0) {
        (*pcVar22)((long)puVar1 + lVar23,(long)puVar2 + lVar23,UVar15.unknown);
        (**(code **)(lVar29 + 0x38))((long)puVar1 + lVar23,0,1,UVar15.unknown);
      }
      else {
        puVar17 = &DAT_100553d90;
        FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
        _memcpy((void *)((long)puVar1 + lVar23),(void *)((long)puVar2 + lVar23),
                *(size_t *)(*(long *)(puVar17 + -8) + 0x40));
      }
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x1c));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x1c));
      uVar25 = puVar5[1];
      *puVar14 = *puVar5;
      puVar14[1] = uVar25;
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x20)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x20));
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x24)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x24));
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x28));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x28));
      *puVar14 = *puVar5;
      *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar5 + 1);
      lVar23 = (long)*(int *)(lVar11 + 0x2c);
      pcVar22 = *(code **)(lVar19 + 0x30);
      _swift_bridgeObjectRetain();
      lVar16 = (long)puVar2 + lVar23;
      (*pcVar22)(lVar16,1,DVar12.unknown);
      if ((int)lVar16 == 0) {
        (*pcVar26)((long)puVar1 + lVar23,(long)puVar2 + lVar23,DVar12.unknown);
        (**(code **)(lVar19 + 0x38))((long)puVar1 + lVar23,0,1,DVar12.unknown);
      }
      else {
        puVar17 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar23),(void *)((long)puVar2 + lVar23),
                *(size_t *)(*(long *)(puVar17 + -8) + 0x40));
      }
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x30));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x30));
      *puVar14 = *puVar5;
      *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar5 + 1);
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x34));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x34));
      uVar25 = puVar5[1];
      *puVar14 = *puVar5;
      puVar14[1] = uVar25;
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x38));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x38));
      *puVar14 = *puVar5;
      *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar5 + 1);
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x3c));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x3c));
      uVar25 = puVar5[1];
      *puVar14 = *puVar5;
      puVar14[1] = uVar25;
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x40)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x40));
      uVar27 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x44));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x44)) = uVar27;
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x48)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x48));
      pcVar22 = *(code **)(lVar21 + 0x38);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar25);
      _swift_bridgeObjectRetain(uVar27);
      (*pcVar22)(puVar1,0,1,lVar11);
    }
    else {
      puVar17 = &DAT_10054ac40;
      FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar17 + -8) + 0x40));
    }
    iVar9 = *(int *)(param_3 + 0x20);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    *(undefined1 *)((long)param_1 + (long)iVar9) = *(undefined1 *)((long)param_2 + (long)iVar9);
    iVar9 = *(int *)(param_3 + 0x28);
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    uVar18 = puVar1[1];
    uVar25 = *puVar1;
    puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar25;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
    uVar25 = *puVar2;
    uVar27 = puVar2[1];
    *puVar1 = uVar25;
    puVar1[1] = uVar27;
    iVar9 = *(int *)(param_3 + 0x30);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    uVar27 = *puVar2;
    uVar28 = puVar2[1];
    *puVar1 = uVar27;
    puVar1[1] = uVar28;
    puVar6 = (undefined1 *)((long)param_1 + (long)iVar9);
    puVar7 = (undefined1 *)((long)param_2 + (long)iVar9);
    *puVar6 = *puVar7;
    uVar24 = *(undefined8 *)(puVar7 + 8);
    *(undefined8 *)(puVar6 + 8) = uVar24;
    iVar9 = *(int *)(param_3 + 0x38);
    puVar6 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
    puVar7 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
    *puVar6 = *puVar7;
    uVar28 = *(undefined8 *)(puVar7 + 8);
    *(undefined8 *)(puVar6 + 8) = uVar28;
    puVar6 = (undefined1 *)((long)param_1 + (long)iVar9);
    puVar7 = (undefined1 *)((long)param_2 + (long)iVar9);
    *puVar6 = *puVar7;
    lVar11 = *(long *)(puVar7 + 8);
    *(long *)(puVar6 + 8) = lVar11;
    _swift_retain(uVar18);
    _swift_retain(uVar25);
    _swift_retain(uVar27);
    _swift_retain(uVar24);
    _swift_retain(uVar28);
  }
  else {
    lVar11 = *param_2;
    *param_1 = lVar11;
    uVar20 = (ulong)uVar8 & 0xff;
    param_1 = (long *)(lVar11 + (uVar20 + 0x10 & (uVar20 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar11);
  return param_1;
}

