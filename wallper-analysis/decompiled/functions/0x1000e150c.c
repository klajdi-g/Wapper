// rea decompile_all
// name: FUN_1000e150c
// address: 0x1000e150c
// body: available
// range: 0x1000e150c-0x1000e17fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1000e150c(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  URL UVar10;
  undefined *puVar11;
  Date DVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  code *pcVar19;
  undefined8 uVar20;
  
  uVar7 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar7 >> 0x11 & 1) == 0) {
    lVar14 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar14;
    lVar9 = 0;
    FUN_10040211c();
    iVar8 = *(int *)(lVar9 + 0x14);
    UVar10 = Foundation::URL::typeMetadataAccessor();
    lVar18 = *(long *)(UVar10.unknown + -8);
    pcVar19 = *(code **)(lVar18 + 0x10);
    _swift_bridgeObjectRetain(lVar14);
    (*pcVar19)((long)param_1 + (long)iVar8,(long)param_2 + (long)iVar8,UVar10.unknown);
    lVar16 = (long)*(int *)(lVar9 + 0x18);
    lVar14 = (long)param_2 + lVar16;
    (**(code **)(lVar18 + 0x30))(lVar14,1,UVar10.unknown);
    if ((int)lVar14 == 0) {
      (*pcVar19)((long)param_1 + lVar16,(long)param_2 + lVar16,UVar10.unknown);
      (**(code **)(lVar18 + 0x38))((long)param_1 + lVar16,0,1,UVar10.unknown);
    }
    else {
      puVar11 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)param_1 + lVar16),(void *)((long)param_2 + lVar16),
              *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x1c));
    uVar20 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar20;
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x20)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x20));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x24)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x24));
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x28));
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    *puVar1 = *puVar2;
    lVar16 = (long)*(int *)(lVar9 + 0x2c);
    DVar12 = Foundation::Date::typeMetadataAccessor();
    lVar18 = *(long *)(DVar12.unknown + -8);
    pcVar19 = *(code **)(lVar18 + 0x30);
    _swift_bridgeObjectRetain(uVar20);
    lVar14 = (long)param_2 + lVar16;
    (*pcVar19)(lVar14,1,DVar12.unknown);
    if ((int)lVar14 == 0) {
      (**(code **)(lVar18 + 0x10))((long)param_1 + lVar16,(long)param_2 + lVar16,DVar12.unknown);
      (**(code **)(lVar18 + 0x38))((long)param_1 + lVar16,0,1,DVar12.unknown);
    }
    else {
      puVar11 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)param_1 + lVar16),(void *)((long)param_2 + lVar16),
              *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x30));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x30));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x34));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x34));
    uVar20 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar20;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x38));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x38));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x3c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x3c));
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x40)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x40));
    uVar17 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x44));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x44)) = uVar17;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x48)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x48));
    iVar8 = *(int *)(param_3 + 0x18);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    puVar1 = (undefined8 *)((long)param_2 + (long)iVar8);
    uVar15 = puVar1[1];
    uVar20 = *puVar1;
    puVar2 = (undefined8 *)((long)param_1 + (long)iVar8);
    puVar2[1] = puVar1[1];
    *puVar2 = uVar20;
    iVar8 = *(int *)(param_3 + 0x20);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar20 = *puVar2;
    uVar6 = puVar2[1];
    *puVar1 = uVar20;
    puVar1[1] = uVar6;
    puVar3 = (undefined1 *)((long)param_1 + (long)iVar8);
    puVar4 = (undefined1 *)((long)param_2 + (long)iVar8);
    *puVar3 = *puVar4;
    lVar14 = *(long *)(puVar4 + 8);
    *(long *)(puVar3 + 8) = lVar14;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar17);
    _swift_retain(uVar15);
    _swift_retain(uVar20);
  }
  else {
    lVar14 = *param_2;
    *param_1 = lVar14;
    uVar13 = (ulong)uVar7 & 0xff;
    param_1 = (long *)(lVar14 + (uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar14);
  return param_1;
}

