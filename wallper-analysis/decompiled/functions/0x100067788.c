// rea decompile_all
// name: FUN_100067788
// address: 0x100067788
// body: available
// range: 0x100067788-0x100067a07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_100067788(long *param_1,long *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  UUID UVar12;
  void *pvVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  undefined8 uVar23;
  
  uVar11 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar20 = *param_2;
  *param_1 = lVar20;
  if ((uVar11 >> 0x11 & 1) == 0) {
    lVar21 = param_2[1];
    param_1[1] = lVar21;
    *(char *)(param_1 + 2) = (char)param_2[2];
    lVar7 = param_2[4];
    param_1[3] = param_2[3];
    param_1[4] = lVar7;
    lVar8 = param_2[6];
    param_1[5] = param_2[5];
    param_1[6] = lVar8;
    lVar19 = param_2[7];
    lVar9 = param_2[8];
    lVar17 = param_2[9];
    param_1[8] = lVar9;
    param_1[9] = lVar17;
    pvVar1 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    pvVar2 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    param_1[7] = lVar19;
    UVar12 = Foundation::UUID::typeMetadataAccessor();
    lVar19 = *(long *)(UVar12.unknown + -8);
    pcVar22 = *(code **)(lVar19 + 0x30);
    _swift_retain(lVar20);
    _swift_retain(lVar21);
    _swift_retain(lVar7);
    _swift_retain(lVar8);
    _swift_retain(lVar9);
    pvVar13 = pvVar2;
    (*pcVar22)(pvVar2,1,UVar12.unknown);
    if ((int)pvVar13 == 0) {
      (**(code **)(lVar19 + 0x10))(pvVar1,pvVar2,UVar12.unknown);
      (**(code **)(lVar19 + 0x38))(pvVar1,0,1,UVar12.unknown);
    }
    else {
      puVar14 = &DAT_10054a9c8;
      FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
      _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar14 + -8) + 0x40));
    }
    puVar14 = &DAT_10054dd90;
    FUN_100002f94(&DAT_10054dd90,&DAT_10041ec00);
    *(undefined8 *)((long)pvVar1 + (long)*(int *)(puVar14 + 0x1c)) =
         *(undefined8 *)((long)pvVar2 + (long)*(int *)(puVar14 + 0x1c));
    pvVar1 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
    pvVar2 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    _swift_retain();
    pvVar13 = pvVar2;
    (*pcVar22)(pvVar2,1,UVar12.unknown);
    if ((int)pvVar13 == 0) {
      (**(code **)(lVar19 + 0x10))(pvVar1,pvVar2,UVar12.unknown);
      (**(code **)(lVar19 + 0x38))(pvVar1,0,1,UVar12.unknown);
    }
    else {
      puVar15 = &DAT_10054a9c8;
      FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
      _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar15 + -8) + 0x40));
    }
    *(undefined8 *)((long)pvVar1 + (long)*(int *)(puVar14 + 0x1c)) =
         *(undefined8 *)((long)pvVar2 + (long)*(int *)(puVar14 + 0x1c));
    iVar10 = *(int *)(param_3 + 0x30);
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
    puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    *puVar3 = *puVar4;
    uVar18 = puVar4[2];
    uVar23 = puVar4[1];
    puVar3[2] = puVar4[2];
    puVar3[1] = uVar23;
    puVar5 = (undefined1 *)((long)param_1 + (long)iVar10);
    puVar6 = (undefined1 *)((long)param_2 + (long)iVar10);
    *puVar5 = *puVar6;
    lVar20 = *(long *)(puVar6 + 8);
    *(long *)(puVar5 + 8) = lVar20;
    _swift_retain();
    _swift_bridgeObjectRetain(uVar23);
    _swift_retain(uVar18);
  }
  else {
    uVar16 = (ulong)uVar11 & 0xff;
    param_1 = (long *)(lVar20 + (uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar20);
  return param_1;
}

