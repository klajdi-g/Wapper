// rea decompile_all
// name: FUN_100309080
// address: 0x100309080
// body: available
// range: 0x100309080-0x1003093a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_100309080(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  URL UVar10;
  long lVar11;
  undefined *puVar12;
  Date DVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  code *pcVar19;
  undefined8 uVar20;
  
  uVar8 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar15 = *param_2;
  *param_1 = lVar15;
  if ((uVar8 >> 0x11 & 1) == 0) {
    lVar11 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = lVar11;
    param_1[3] = param_2[3];
    iVar9 = *(int *)(param_3 + 0x18);
    UVar10 = Foundation::URL::typeMetadataAccessor();
    lVar18 = *(long *)(UVar10.unknown + -8);
    pcVar19 = *(code **)(lVar18 + 0x10);
    _swift_retain(lVar15);
    _swift_retain(lVar11);
    (*pcVar19)((long)param_1 + (long)iVar9,(long)param_2 + (long)iVar9,UVar10.unknown);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    lVar11 = 0;
    FUN_10040211c();
    iVar9 = *(int *)(lVar11 + 0x14);
    _swift_bridgeObjectRetain(uVar5);
    (*pcVar19)((long)puVar1 + (long)iVar9,(long)puVar2 + (long)iVar9,UVar10.unknown);
    lVar16 = (long)*(int *)(lVar11 + 0x18);
    lVar15 = (long)puVar2 + lVar16;
    (**(code **)(lVar18 + 0x30))(lVar15,1,UVar10.unknown);
    if ((int)lVar15 == 0) {
      (*pcVar19)((long)puVar1 + lVar16,(long)puVar2 + lVar16,UVar10.unknown);
      (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar16,0,1,UVar10.unknown);
    }
    else {
      puVar12 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)puVar1 + lVar16),(void *)((long)puVar2 + lVar16),
              *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x1c));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x1c));
    uVar5 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar5;
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x20)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x20));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x24)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x24));
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x28));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x28));
    *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
    *puVar3 = *puVar4;
    lVar16 = (long)*(int *)(lVar11 + 0x2c);
    DVar13 = Foundation::Date::typeMetadataAccessor();
    lVar18 = *(long *)(DVar13.unknown + -8);
    pcVar19 = *(code **)(lVar18 + 0x30);
    _swift_bridgeObjectRetain(uVar5);
    lVar15 = (long)puVar2 + lVar16;
    (*pcVar19)(lVar15,1,DVar13.unknown);
    if ((int)lVar15 == 0) {
      (**(code **)(lVar18 + 0x10))((long)puVar1 + lVar16,(long)puVar2 + lVar16,DVar13.unknown);
      (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar16,0,1,DVar13.unknown);
    }
    else {
      puVar12 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar16),(void *)((long)puVar2 + lVar16),
              *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x30));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x30));
    *puVar3 = *puVar4;
    *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x34));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x34));
    uVar5 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar5;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x38));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x38));
    *puVar3 = *puVar4;
    *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x3c));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x3c));
    uVar6 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar6;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x40)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x40));
    uVar17 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x44));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x44)) = uVar17;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x48)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x48));
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    uVar20 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar20;
    uVar5 = puVar2[1];
    uVar7 = puVar2[2];
    puVar1[2] = uVar7;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar17);
    _swift_retain(uVar20);
    _swift_retain(uVar5);
    _swift_bridgeObjectRetain(uVar7);
  }
  else {
    uVar14 = (ulong)uVar8 & 0xff;
    param_1 = (long *)(lVar15 + (uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff)));
    _swift_retain(lVar15);
  }
  return param_1;
}

