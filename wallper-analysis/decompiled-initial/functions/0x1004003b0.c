// rea decompile_all
// name: FUN_1004003b0
// address: 0x1004003b0
// body: available
// range: 0x1004003b0-0x1004005c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1004003b0(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  Date DVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    lVar5 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar5;
    lVar7 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar7;
    lVar8 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = lVar8;
    lVar10 = (long)*(int *)(param_3 + 0x20);
    DVar3 = Foundation::Date::typeMetadataAccessor();
    lVar8 = *(long *)(DVar3.unknown + -8);
    pcVar9 = *(code **)(lVar8 + 0x30);
    _swift_bridgeObjectRetain(lVar5);
    _swift_bridgeObjectRetain(lVar7);
    lVar5 = (long)param_2 + lVar10;
    (*pcVar9)(lVar5,1,DVar3.unknown);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar8 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar3.unknown);
      (**(code **)(lVar8 + 0x38))((long)param_1 + lVar10,0,1,DVar3.unknown);
    }
    else {
      puVar4 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
              *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
    }
    iVar1 = *(int *)(param_3 + 0x28);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
    lVar7 = (long)*(int *)(param_3 + 0x2c);
    lVar5 = (long)param_2 + lVar7;
    (*pcVar9)(lVar5,1,DVar3.unknown);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,DVar3.unknown);
      (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,DVar3.unknown);
    }
    else {
      puVar4 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
              *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
    }
    lVar7 = (long)*(int *)(param_3 + 0x30);
    lVar5 = (long)param_2 + lVar7;
    (*pcVar9)(lVar5,1,DVar3.unknown);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,DVar3.unknown);
      (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,DVar3.unknown);
    }
    else {
      puVar4 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
              *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
    }
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar6 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar5 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

