// rea decompile_all
// name: FUN_1002ff610
// address: 0x1002ff610
// body: available
// range: 0x1002ff610-0x1002ff96f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1002ff610(long *param_1,long *param_2,long param_3)

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
  code *pcVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  uVar9 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar19 = *param_2;
  *param_1 = lVar19;
  if ((uVar9 >> 0x11 & 1) == 0) {
    lVar20 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = lVar20;
    lVar11 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = lVar11;
    lVar22 = param_2[5];
    param_1[5] = lVar22;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar7 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar7;
    lVar11 = 0;
    FUN_10040211c();
    iVar10 = *(int *)(lVar11 + 0x14);
    UVar12 = Foundation::URL::typeMetadataAccessor();
    lVar17 = *(long *)(UVar12.unknown + -8);
    pcVar15 = *(code **)(lVar17 + 0x10);
    _swift_retain(lVar19);
    _swift_retain(lVar20);
    _swift_retain(lVar22);
    _swift_bridgeObjectRetain(uVar7);
    (*pcVar15)((long)puVar1 + (long)iVar10,(long)puVar2 + (long)iVar10,UVar12.unknown);
    lVar20 = (long)*(int *)(lVar11 + 0x18);
    lVar19 = (long)puVar2 + lVar20;
    (**(code **)(lVar17 + 0x30))(lVar19,1,UVar12.unknown);
    if ((int)lVar19 == 0) {
      (*pcVar15)((long)puVar1 + lVar20,(long)puVar2 + lVar20,UVar12.unknown);
      (**(code **)(lVar17 + 0x38))((long)puVar1 + lVar20,0,1,UVar12.unknown);
    }
    else {
      puVar13 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)puVar1 + lVar20),(void *)((long)puVar2 + lVar20),
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
    lVar17 = (long)*(int *)(lVar11 + 0x2c);
    DVar14 = Foundation::Date::typeMetadataAccessor();
    lVar20 = *(long *)(DVar14.unknown + -8);
    pcVar15 = *(code **)(lVar20 + 0x30);
    _swift_bridgeObjectRetain(uVar7);
    lVar19 = (long)puVar2 + lVar17;
    (*pcVar15)(lVar19,1,DVar14.unknown);
    if ((int)lVar19 == 0) {
      (**(code **)(lVar20 + 0x10))((long)puVar1 + lVar17,(long)puVar2 + lVar17,DVar14.unknown);
      (**(code **)(lVar20 + 0x38))((long)puVar1 + lVar17,0,1,DVar14.unknown);
    }
    else {
      puVar13 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar17),(void *)((long)puVar2 + lVar17),
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
    uVar7 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar7;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x40)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x40));
    uVar21 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x44));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x44)) = uVar21;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x48)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x48));
    iVar10 = *(int *)(param_3 + 0x24);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    uVar8 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar8;
    puVar1 = (undefined8 *)((long)param_2 + (long)iVar10);
    uVar23 = puVar1[1];
    uVar18 = *puVar1;
    puVar2 = (undefined8 *)((long)param_1 + (long)iVar10);
    puVar2[1] = puVar1[1];
    *puVar2 = uVar18;
    iVar10 = *(int *)(param_3 + 0x2c);
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    uVar18 = puVar1[1];
    uVar24 = *puVar1;
    puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar24;
    puVar5 = (undefined1 *)((long)param_1 + (long)iVar10);
    puVar6 = (undefined1 *)((long)param_2 + (long)iVar10);
    *puVar5 = *puVar6;
    lVar19 = *(long *)(puVar6 + 8);
    *(long *)(puVar5 + 8) = lVar19;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar21);
    _swift_bridgeObjectRetain(uVar8);
    _swift_retain(uVar23);
    _swift_bridgeObjectRetain(uVar24);
    _swift_retain(uVar18);
  }
  else {
    uVar16 = (ulong)uVar9 & 0xff;
    param_1 = (long *)(lVar19 + (uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar19);
  return param_1;
}

