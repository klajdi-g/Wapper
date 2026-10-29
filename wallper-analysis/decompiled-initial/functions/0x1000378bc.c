// rea decompile_all
// name: FUN_1000378bc
// address: 0x1000378bc
// body: available
// range: 0x1000378bc-0x100037bbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1000378bc(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  URL UVar11;
  undefined *puVar12;
  Date DVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  code *pcVar19;
  
  uVar8 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar8 >> 0x11 & 1) == 0) {
    lVar15 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar15;
    lVar10 = 0;
    FUN_10040211c();
    iVar9 = *(int *)(lVar10 + 0x14);
    UVar11 = Foundation::URL::typeMetadataAccessor();
    lVar18 = *(long *)(UVar11.unknown + -8);
    pcVar19 = *(code **)(lVar18 + 0x10);
    _swift_bridgeObjectRetain(lVar15);
    (*pcVar19)((long)param_1 + (long)iVar9,(long)param_2 + (long)iVar9,UVar11.unknown);
    lVar16 = (long)*(int *)(lVar10 + 0x18);
    lVar15 = (long)param_2 + lVar16;
    (**(code **)(lVar18 + 0x30))(lVar15,1,UVar11.unknown);
    if ((int)lVar15 == 0) {
      (*pcVar19)((long)param_1 + lVar16,(long)param_2 + lVar16,UVar11.unknown);
      (**(code **)(lVar18 + 0x38))((long)param_1 + lVar16,0,1,UVar11.unknown);
    }
    else {
      puVar12 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)param_1 + lVar16),(void *)((long)param_2 + lVar16),
              *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x1c));
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x20)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x20));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x24)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x24));
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x28));
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    *puVar1 = *puVar2;
    lVar16 = (long)*(int *)(lVar10 + 0x2c);
    DVar13 = Foundation::Date::typeMetadataAccessor();
    lVar18 = *(long *)(DVar13.unknown + -8);
    pcVar19 = *(code **)(lVar18 + 0x30);
    _swift_bridgeObjectRetain(uVar5);
    lVar15 = (long)param_2 + lVar16;
    (*pcVar19)(lVar15,1,DVar13.unknown);
    if ((int)lVar15 == 0) {
      (**(code **)(lVar18 + 0x10))((long)param_1 + lVar16,(long)param_2 + lVar16,DVar13.unknown);
      (**(code **)(lVar18 + 0x38))((long)param_1 + lVar16,0,1,DVar13.unknown);
    }
    else {
      puVar12 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)param_1 + lVar16),(void *)((long)param_2 + lVar16),
              *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x30));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x30));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x34));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x34));
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x38));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x38));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x3c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x3c));
    uVar6 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x40)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x40));
    uVar17 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x44));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x44)) = uVar17;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x48)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x48));
    iVar9 = *(int *)(param_3 + 0x18);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    *(undefined1 *)((long)param_1 + (long)iVar9) = *(undefined1 *)((long)param_2 + (long)iVar9);
    iVar9 = *(int *)(param_3 + 0x20);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar5 = *puVar2;
    uVar7 = puVar2[1];
    *puVar1 = uVar5;
    puVar1[1] = uVar7;
    puVar3 = (undefined1 *)((long)param_1 + (long)iVar9);
    puVar4 = (undefined1 *)((long)param_2 + (long)iVar9);
    *puVar3 = *puVar4;
    lVar15 = *(long *)(puVar4 + 8);
    *(long *)(puVar3 + 8) = lVar15;
    iVar9 = *(int *)(param_3 + 0x28);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    *(undefined8 *)((long)param_1 + (long)iVar9) = *(undefined8 *)((long)param_2 + (long)iVar9);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar17);
    _swift_retain(uVar5);
  }
  else {
    lVar15 = *param_2;
    *param_1 = lVar15;
    uVar14 = (ulong)uVar8 & 0xff;
    param_1 = (long *)(lVar15 + (uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar15);
  return param_1;
}

