// rea decompile_all
// name: FUN_100096068
// address: 0x100096068
// body: available
// range: 0x100096068-0x1000964bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long * FUN_100096068(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  Date DVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long lVar16;
  code *pcVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  code *pcVar21;
  long lVar22;
  
  uVar9 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar9 >> 0x11 & 1) == 0) {
    lVar6 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar6;
    param_1[2] = param_2[2];
    lVar22 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = lVar22;
    lVar16 = param_2[6];
    lVar11 = param_2[7];
    param_1[5] = param_2[5];
    param_1[6] = lVar16;
    param_1[7] = lVar11;
    *(char *)(param_1 + 8) = (char)param_2[8];
    lVar11 = 0;
    FUN_10009e280();
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x2c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x2c));
    *puVar1 = *puVar2;
    lVar12 = 0;
    FUN_10015f8e8();
    iVar10 = *(int *)(lVar12 + 0x14);
    DVar13 = Foundation::Date::typeMetadataAccessor();
    pcVar21 = *(code **)(*(long *)(DVar13.unknown + -8) + 0x10);
    _swift_bridgeObjectRetain(lVar6);
    _swift_bridgeObjectRetain(lVar22);
    _swift_bridgeObjectRetain(lVar16);
    (*pcVar21)((long)puVar1 + (long)iVar10,(long)puVar2 + (long)iVar10,DVar13.unknown);
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x18)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x18));
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x30));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x30));
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    *puVar1 = *puVar2;
    iVar10 = *(int *)(param_3 + 0x18);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    *(undefined2 *)((long)param_1 + (long)iVar10) = *(undefined2 *)((long)param_2 + (long)iVar10);
    iVar10 = *(int *)(param_3 + 0x20);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    puVar3 = (undefined1 *)((long)param_1 + (long)iVar10);
    puVar4 = (undefined1 *)((long)param_2 + (long)iVar10);
    *puVar3 = *puVar4;
    *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
    iVar10 = *(int *)(param_3 + 0x28);
    puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    *puVar3 = *puVar4;
    uVar19 = *(undefined8 *)(puVar4 + 8);
    *(undefined8 *)(puVar3 + 8) = uVar19;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar10);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar10);
    uVar7 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar7;
    iVar10 = *(int *)(param_3 + 0x30);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    uVar8 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar8;
    puVar3 = (undefined1 *)((long)param_1 + (long)iVar10);
    puVar4 = (undefined1 *)((long)param_2 + (long)iVar10);
    *puVar3 = *puVar4;
    uVar20 = *(undefined8 *)(puVar4 + 8);
    *(undefined8 *)(puVar3 + 8) = uVar20;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
    lVar16 = *(long *)(lVar11 + -8);
    pcVar17 = *(code **)(lVar16 + 0x30);
    _swift_retain();
    _swift_retain(uVar19);
    _swift_retain(uVar7);
    _swift_retain(uVar8);
    _swift_retain(uVar20);
    puVar14 = puVar2;
    (*pcVar17)(puVar2,1,lVar11);
    if ((int)puVar14 == 0) {
      uVar7 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar7;
      puVar1[2] = puVar2[2];
      uVar19 = puVar2[3];
      puVar1[4] = puVar2[4];
      puVar1[3] = uVar19;
      uVar7 = puVar2[6];
      uVar8 = puVar2[7];
      puVar1[5] = puVar2[5];
      puVar1[6] = uVar7;
      puVar1[7] = uVar8;
      *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(puVar2 + 8);
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x2c));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x2c));
      *puVar14 = *puVar5;
      iVar10 = *(int *)(lVar12 + 0x14);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar19);
      _swift_bridgeObjectRetain(uVar7);
      (*pcVar21)((long)puVar14 + (long)iVar10,(long)puVar5 + (long)iVar10,DVar13.unknown);
      *(undefined8 *)((long)puVar14 + (long)*(int *)(lVar12 + 0x18)) =
           *(undefined8 *)((long)puVar5 + (long)*(int *)(lVar12 + 0x18));
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x30));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x30));
      *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar5 + 1);
      *puVar14 = *puVar5;
      (**(code **)(lVar16 + 0x38))(puVar1,0,1,lVar11);
    }
    else {
      puVar15 = &DAT_10054c040;
      FUN_100002f94(&DAT_10054c040,&DAT_100420500);
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar15 + -8) + 0x40));
    }
    puVar15 = &DAT_10054efb0;
    FUN_100002f94(&DAT_10054efb0,&DAT_100421520);
    *(undefined8 *)((long)puVar1 + (long)*(int *)(puVar15 + 0x1c)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(puVar15 + 0x1c));
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
    uVar8 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar8;
    puVar1[2] = puVar2[2];
    uVar20 = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1[3] = uVar20;
    uVar7 = puVar2[6];
    uVar19 = puVar2[7];
    puVar1[5] = puVar2[5];
    puVar1[6] = uVar7;
    puVar1[7] = uVar19;
    *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(puVar2 + 8);
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x2c));
    puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x2c));
    *puVar14 = *puVar5;
    iVar10 = *(int *)(lVar12 + 0x14);
    _swift_retain();
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uVar7);
    (*pcVar21)((long)puVar14 + (long)iVar10,(long)puVar5 + (long)iVar10,DVar13.unknown);
    *(undefined8 *)((long)puVar14 + (long)*(int *)(lVar12 + 0x18)) =
         *(undefined8 *)((long)puVar5 + (long)*(int *)(lVar12 + 0x18));
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x30));
    puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x30));
    *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar5 + 1);
    *puVar14 = *puVar5;
    puVar15 = &DAT_10054efb8;
    FUN_100002f94(&DAT_10054efb8,&DAT_100420510);
    *(undefined8 *)((long)puVar1 + (long)*(int *)(puVar15 + 0x1c)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(puVar15 + 0x1c));
  }
  else {
    lVar16 = *param_2;
    *param_1 = lVar16;
    uVar18 = (ulong)uVar9 & 0xff;
    param_1 = (long *)(lVar16 + (uVar18 + 0x10 & (uVar18 ^ 0xffffffffffffffff)));
  }
  _swift_retain();
  return param_1;
}

