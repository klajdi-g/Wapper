// rea decompile_all
// name: FUN_100125e0c
// address: 0x100125e0c
// body: available
// range: 0x100125e0c-0x100125fff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_100125e0c(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  UUID UVar8;
  Date DVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  
  uVar6 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar6 >> 0x11 & 1) == 0) {
    lVar11 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar11;
    iVar7 = *(int *)(param_3 + 0x14);
    UVar8 = Foundation::UUID::typeMetadataAccessor();
    pcVar14 = *(code **)(*(long *)(UVar8.unknown + -8) + 0x10);
    _swift_bridgeObjectRetain(lVar11);
    (*pcVar14)((long)param_1 + (long)iVar7,(long)param_2 + (long)iVar7,UVar8.unknown);
    iVar7 = *(int *)(param_3 + 0x1c);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    *(undefined1 *)((long)param_1 + (long)iVar7) = *(undefined1 *)((long)param_2 + (long)iVar7);
    iVar7 = *(int *)(param_3 + 0x24);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    uVar4 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar7);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar7);
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    iVar7 = *(int *)(param_3 + 0x2c);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar7);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar7);
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    iVar7 = *(int *)(param_3 + 0x34);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    DVar9 = Foundation::Date::typeMetadataAccessor();
    lVar15 = *(long *)(DVar9.unknown + -8);
    pcVar14 = *(code **)(lVar15 + 0x10);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    (*pcVar14)((long)param_1 + (long)iVar7,(long)param_2 + (long)iVar7,DVar9.unknown);
    lVar13 = (long)*(int *)(param_3 + 0x38);
    lVar11 = (long)param_2 + lVar13;
    (**(code **)(lVar15 + 0x30))(lVar11,1,DVar9.unknown);
    if ((int)lVar11 == 0) {
      (*pcVar14)((long)param_1 + lVar13,(long)param_2 + lVar13,DVar9.unknown);
      (**(code **)(lVar15 + 0x38))((long)param_1 + lVar13,0,1,DVar9.unknown);
    }
    else {
      puVar10 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
              *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  }
  else {
    lVar11 = *param_2;
    *param_1 = lVar11;
    uVar12 = (ulong)uVar6 & 0xff;
    param_1 = (long *)(lVar11 + (uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

