// rea decompile_all
// name: FUN_1000c83e4
// address: 0x1000c83e4
// body: available
// range: 0x1000c83e4-0x1000c8513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1000c83e4(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  UUID UVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  code *pcVar13;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    UVar6 = Foundation::UUID::typeMetadataAccessor();
    lVar11 = *(long *)(UVar6.unknown + -8);
    pcVar12 = *(code **)(lVar11 + 0x10);
    (*pcVar12)(param_1,param_2,UVar6.unknown);
    iVar4 = *(int *)(param_3 + 0x18);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    lVar10 = (long)*(int *)(param_3 + 0x1c);
    pcVar13 = *(code **)(lVar11 + 0x30);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
    lVar8 = (long)param_2 + lVar10;
    (*pcVar13)(lVar8,1,UVar6.unknown);
    if ((int)lVar8 == 0) {
      (*pcVar12)((long)param_1 + lVar10,(long)param_2 + lVar10,UVar6.unknown);
      (**(code **)(lVar11 + 0x38))((long)param_1 + lVar10,0,1,UVar6.unknown);
    }
    else {
      puVar7 = &DAT_10054a9c8;
      FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
      _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar9 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar8 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

