// rea decompile_all
// name: FUN_100396164
// address: 0x100396164
// body: available
// range: 0x100396164-0x100396587 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_100396164(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  URL UVar12;
  undefined *puVar13;
  Date DVar14;
  UUID UVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  code *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar9 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar9 >> 0x11 & 1) == 0) {
    *param_1 = *param_2;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar7 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar7;
    lVar11 = 0;
    FUN_10040211c();
    iVar10 = *(int *)(lVar11 + 0x14);
    UVar12 = Foundation::URL::typeMetadataAccessor();
    lVar20 = *(long *)(UVar12.unknown + -8);
    pcVar21 = *(code **)(lVar20 + 0x10);
    _swift_bridgeObjectRetain(uVar7);
    (*pcVar21)((long)puVar1 + (long)iVar10,(long)puVar2 + (long)iVar10,UVar12.unknown);
    lVar19 = (long)*(int *)(lVar11 + 0x18);
    lVar17 = (long)puVar2 + lVar19;
    (**(code **)(lVar20 + 0x30))(lVar17,1,UVar12.unknown);
    if ((int)lVar17 == 0) {
      (*pcVar21)((long)puVar1 + lVar19,(long)puVar2 + lVar19,UVar12.unknown);
      (**(code **)(lVar20 + 0x38))((long)puVar1 + lVar19,0,1,UVar12.unknown);
    }
    else {
      puVar13 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)puVar1 + lVar19),(void *)((long)puVar2 + lVar19),
              *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x1c));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x1c));
    uVar7 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar7;
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x20)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x20));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x24)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x24));
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x28));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x28));
    *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
    *puVar3 = *puVar4;
    lVar19 = (long)*(int *)(lVar11 + 0x2c);
    DVar14 = Foundation::Date::typeMetadataAccessor();
    lVar20 = *(long *)(DVar14.unknown + -8);
    pcVar21 = *(code **)(lVar20 + 0x30);
    _swift_bridgeObjectRetain(uVar7);
    lVar17 = (long)puVar2 + lVar19;
    (*pcVar21)(lVar17,1,DVar14.unknown);
    if ((int)lVar17 == 0) {
      (**(code **)(lVar20 + 0x10))((long)puVar1 + lVar19,(long)puVar2 + lVar19,DVar14.unknown);
      (**(code **)(lVar20 + 0x38))((long)puVar1 + lVar19,0,1,DVar14.unknown);
    }
    else {
      puVar13 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar19),(void *)((long)puVar2 + lVar19),
              *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x30));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x30));
    *puVar3 = *puVar4;
    *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x34));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x34));
    uVar7 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar7;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x38));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x38));
    *puVar3 = *puVar4;
    *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x3c));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x3c));
    uVar8 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar8;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x40)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x40));
    uVar23 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x44));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x44)) = uVar23;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x48)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x48));
    lVar17 = (long)param_1 + (long)*(int *)(param_3 + 0x18);
    lVar11 = (long)param_2 + (long)*(int *)(param_3 + 0x18);
    UVar15 = Foundation::UUID::typeMetadataAccessor();
    pcVar21 = *(code **)(*(long *)(UVar15.unknown + -8) + 0x10);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar23);
    (*pcVar21)(lVar17,lVar11,UVar15.unknown);
    lVar19 = 0;
    FUN_10025ee04();
    puVar1 = (undefined8 *)(lVar17 + *(int *)(lVar19 + 0x14));
    puVar2 = (undefined8 *)(lVar11 + *(int *)(lVar19 + 0x14));
    uVar7 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar7;
    iVar10 = *(int *)(lVar19 + 0x18);
    pcVar21 = *(code **)(lVar20 + 0x10);
    _swift_bridgeObjectRetain();
    (*pcVar21)(lVar17 + iVar10,lVar11 + iVar10,DVar14.unknown);
    *(undefined1 *)(lVar17 + *(int *)(lVar19 + 0x1c)) =
         *(undefined1 *)(lVar11 + *(int *)(lVar19 + 0x1c));
    *(undefined8 *)(lVar17 + *(int *)(lVar19 + 0x20)) =
         *(undefined8 *)(lVar11 + *(int *)(lVar19 + 0x20));
    *(undefined1 *)(lVar17 + *(int *)(lVar19 + 0x24)) =
         *(undefined1 *)(lVar11 + *(int *)(lVar19 + 0x24));
    *(undefined1 *)(lVar17 + *(int *)(lVar19 + 0x28)) =
         *(undefined1 *)(lVar11 + *(int *)(lVar19 + 0x28));
    *(undefined8 *)(lVar17 + *(int *)(lVar19 + 0x2c)) =
         *(undefined8 *)(lVar11 + *(int *)(lVar19 + 0x2c));
    *(undefined8 *)(lVar17 + *(int *)(lVar19 + 0x30)) =
         *(undefined8 *)(lVar11 + *(int *)(lVar19 + 0x30));
    uVar22 = *(undefined8 *)(lVar11 + *(int *)(lVar19 + 0x34));
    *(undefined8 *)(lVar17 + *(int *)(lVar19 + 0x34)) = uVar22;
    iVar10 = *(int *)(param_3 + 0x20);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar10);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar10);
    uVar7 = *puVar2;
    uVar8 = puVar2[1];
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    iVar10 = *(int *)(param_3 + 0x28);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    uVar8 = *puVar2;
    uVar23 = puVar2[1];
    *puVar1 = uVar8;
    puVar1[1] = uVar23;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar10);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar10);
    uVar23 = *puVar2;
    uVar18 = puVar2[1];
    *puVar1 = uVar23;
    puVar1[1] = uVar18;
    iVar10 = *(int *)(param_3 + 0x30);
    puVar5 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
    puVar6 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    *puVar5 = *puVar6;
    uVar18 = *(undefined8 *)(puVar6 + 8);
    *(undefined8 *)(puVar5 + 8) = uVar18;
    puVar5 = (undefined1 *)((long)param_1 + (long)iVar10);
    puVar6 = (undefined1 *)((long)param_2 + (long)iVar10);
    *puVar5 = *puVar6;
    lVar17 = *(long *)(puVar6 + 8);
    *(long *)(puVar5 + 8) = lVar17;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar22);
    _swift_retain(uVar7);
    _swift_retain(uVar8);
    _swift_retain(uVar23);
    _swift_retain(uVar18);
  }
  else {
    lVar17 = *param_2;
    *param_1 = lVar17;
    uVar16 = (ulong)uVar9 & 0xff;
    param_1 = (long *)(lVar17 + (uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar17);
  return param_1;
}

