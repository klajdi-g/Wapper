// rea decompile_all
// name: FUN_1001698f4
// address: 0x1001698f4
// body: available
// range: 0x1001698f4-0x100169aef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1001698f4(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  Date DVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  code *pcVar14;
  
  uVar6 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar6 >> 0x11 & 1) == 0) {
    lVar9 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar9;
    lVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar3;
    lVar4 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar4;
    param_1[6] = param_2[6];
    *(char *)(param_1 + 7) = (char)param_2[7];
    lVar10 = param_2[8];
    *(char *)(param_1 + 9) = (char)param_2[9];
    param_1[8] = lVar10;
    lVar10 = (long)*(int *)(param_3 + 0x24);
    DVar7 = Foundation::Date::typeMetadataAccessor();
    lVar13 = *(long *)(DVar7.unknown + -8);
    pcVar14 = *(code **)(lVar13 + 0x30);
    _swift_bridgeObjectRetain(lVar9);
    _swift_bridgeObjectRetain(lVar3);
    _swift_bridgeObjectRetain(lVar4);
    lVar9 = (long)param_2 + lVar10;
    (*pcVar14)(lVar9,1,DVar7.unknown);
    if ((int)lVar9 == 0) {
      (**(code **)(lVar13 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar7.unknown);
      (**(code **)(lVar13 + 0x38))((long)param_1 + lVar10,0,1,DVar7.unknown);
    }
    else {
      puVar8 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
              *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    iVar5 = *(int *)(param_3 + 0x2c);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    iVar5 = *(int *)(param_3 + 0x34);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
    uVar11 = puVar2[1];
    if (uVar11 >> 0x3c < 0xf) {
      uVar12 = *puVar2;
      FUN_10011a30c(uVar12,uVar11);
      *puVar1 = uVar12;
      puVar1[1] = uVar11;
    }
    else {
      uVar12 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar12;
    }
    iVar5 = *(int *)(param_3 + 0x3c);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
    uVar12 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar12;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    *puVar1 = *puVar2;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    _swift_bridgeObjectRetain();
  }
  else {
    lVar9 = *param_2;
    *param_1 = lVar9;
    uVar11 = (ulong)uVar6 & 0xff;
    param_1 = (long *)(lVar9 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

