// rea decompile_all
// name: FUN_10039b3d4
// address: 0x10039b3d4
// body: available
// range: 0x10039b3d4-0x10039b643 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_10039b3d4(long *param_1,long *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  UUID UVar10;
  void *pvVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  code *pcVar19;
  undefined8 uVar20;
  
  uVar9 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar15 = *param_2;
  *param_1 = lVar15;
  if ((uVar9 >> 0x11 & 1) == 0) {
    lVar7 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = lVar7;
    param_1[3] = param_2[3];
    pvVar1 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    pvVar2 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    UVar10 = Foundation::UUID::typeMetadataAccessor();
    lVar18 = *(long *)(UVar10.unknown + -8);
    pcVar19 = *(code **)(lVar18 + 0x30);
    _swift_retain(lVar15);
    _swift_retain(lVar7);
    pvVar11 = pvVar2;
    (*pcVar19)(pvVar2,1,UVar10.unknown);
    if ((int)pvVar11 == 0) {
      (**(code **)(lVar18 + 0x10))(pvVar1,pvVar2,UVar10.unknown);
      (**(code **)(lVar18 + 0x38))(pvVar1,0,1,UVar10.unknown);
    }
    else {
      puVar12 = &DAT_10054a9c8;
      FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
      _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    puVar12 = &DAT_10054dd90;
    FUN_100002f94(&DAT_10054dd90,&DAT_10041ec00);
    *(undefined8 *)((long)pvVar1 + (long)*(int *)(puVar12 + 0x1c)) =
         *(undefined8 *)((long)pvVar2 + (long)*(int *)(puVar12 + 0x1c));
    iVar8 = *(int *)(param_3 + 0x20);
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    *puVar3 = *puVar4;
    uVar16 = puVar4[1];
    uVar17 = puVar4[2];
    puVar3[2] = puVar4[2];
    puVar3[1] = uVar16;
    pvVar1 = (void *)((long)param_1 + (long)iVar8);
    pvVar2 = (void *)((long)param_2 + (long)iVar8);
    _swift_retain();
    _swift_bridgeObjectRetain(uVar16);
    _swift_retain(uVar17);
    pvVar11 = pvVar2;
    (*pcVar19)(pvVar2,1,UVar10.unknown);
    if ((int)pvVar11 == 0) {
      (**(code **)(lVar18 + 0x10))(pvVar1,pvVar2,UVar10.unknown);
      (**(code **)(lVar18 + 0x38))(pvVar1,0,1,UVar10.unknown);
    }
    else {
      puVar13 = &DAT_10054a9c8;
      FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
      _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    *(undefined8 *)((long)pvVar1 + (long)*(int *)(puVar12 + 0x1c)) =
         *(undefined8 *)((long)pvVar2 + (long)*(int *)(puVar12 + 0x1c));
    iVar8 = *(int *)(param_3 + 0x28);
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    uVar17 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar17;
    puVar5 = (undefined1 *)((long)param_1 + (long)iVar8);
    puVar6 = (undefined1 *)((long)param_2 + (long)iVar8);
    *puVar5 = *puVar6;
    uVar16 = *(undefined8 *)(puVar6 + 8);
    *(undefined8 *)(puVar5 + 8) = uVar16;
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    lVar15 = puVar3[1];
    uVar20 = *puVar3;
    puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
    puVar4[1] = puVar3[1];
    *puVar4 = uVar20;
    _swift_retain();
    _swift_retain(uVar17);
    _swift_retain(uVar16);
    _swift_bridgeObjectRetain(uVar20);
  }
  else {
    uVar14 = (ulong)uVar9 & 0xff;
    param_1 = (long *)(lVar15 + (uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar15);
  return param_1;
}

