// rea decompile_all
// name: FUN_10031d118
// address: 0x10031d118
// body: available
// range: 0x10031d118-0x10031d3c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_10031d118(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  URL UVar8;
  undefined *puVar9;
  Date DVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  code *pcVar16;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    lVar12 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar12;
    lVar7 = 0;
    FUN_10040211c();
    iVar6 = *(int *)(lVar7 + 0x14);
    UVar8 = Foundation::URL::typeMetadataAccessor();
    lVar15 = *(long *)(UVar8.unknown + -8);
    pcVar16 = *(code **)(lVar15 + 0x10);
    _swift_bridgeObjectRetain(lVar12);
    (*pcVar16)((long)param_1 + (long)iVar6,(long)param_2 + (long)iVar6,UVar8.unknown);
    lVar13 = (long)*(int *)(lVar7 + 0x18);
    lVar12 = (long)param_2 + lVar13;
    (**(code **)(lVar15 + 0x30))(lVar12,1,UVar8.unknown);
    if ((int)lVar12 == 0) {
      (*pcVar16)((long)param_1 + lVar13,(long)param_2 + lVar13,UVar8.unknown);
      (**(code **)(lVar15 + 0x38))((long)param_1 + lVar13,0,1,UVar8.unknown);
    }
    else {
      puVar9 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
              *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x1c));
    uVar4 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x20)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x20));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x24)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar7 + 0x24));
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x28));
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    *puVar1 = *puVar2;
    lVar13 = (long)*(int *)(lVar7 + 0x2c);
    DVar10 = Foundation::Date::typeMetadataAccessor();
    lVar15 = *(long *)(DVar10.unknown + -8);
    pcVar16 = *(code **)(lVar15 + 0x30);
    _swift_bridgeObjectRetain(uVar4);
    lVar12 = (long)param_2 + lVar13;
    (*pcVar16)(lVar12,1,DVar10.unknown);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar15 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar10.unknown);
      (**(code **)(lVar15 + 0x38))((long)param_1 + lVar13,0,1,DVar10.unknown);
    }
    else {
      puVar9 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
              *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x30));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x30));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x34));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x34));
    uVar4 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x38));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x38));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x3c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x3c));
    uVar4 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x40)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar7 + 0x40));
    uVar14 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x44));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x44)) = uVar14;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x48)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar7 + 0x48));
    plVar3 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    param_2 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    lVar12 = *param_2;
    lVar7 = param_2[1];
    *plVar3 = lVar12;
    plVar3[1] = lVar7;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar14);
  }
  else {
    lVar12 = *param_2;
    *param_1 = lVar12;
    uVar11 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar12 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar12);
  return param_1;
}

