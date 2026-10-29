// rea decompile_all
// name: FUN_1003094f8
// address: 0x1003094f8
// body: available
// range: 0x1003094f8-0x1003097eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1003094f8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  URL UVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  Date DVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  code *pcVar17;
  undefined8 uVar18;
  
  uVar5 = *param_2;
  uVar6 = param_2[1];
  *param_1 = uVar5;
  param_1[1] = uVar6;
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  iVar8 = *(int *)(param_3 + 0x18);
  UVar9 = Foundation::URL::typeMetadataAccessor();
  lVar16 = *(long *)(UVar9.unknown + -8);
  pcVar17 = *(code **)(lVar16 + 0x10);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  (*pcVar17)((long)param_1 + (long)iVar8,(long)param_2 + (long)iVar8,UVar9.unknown);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  lVar10 = 0;
  FUN_10040211c();
  iVar8 = *(int *)(lVar10 + 0x14);
  _swift_bridgeObjectRetain(uVar5);
  (*pcVar17)((long)puVar1 + (long)iVar8,(long)puVar2 + (long)iVar8,UVar9.unknown);
  lVar14 = (long)*(int *)(lVar10 + 0x18);
  lVar11 = (long)puVar2 + lVar14;
  (**(code **)(lVar16 + 0x30))(lVar11,1,UVar9.unknown);
  if ((int)lVar11 == 0) {
    (*pcVar17)((long)puVar1 + lVar14,(long)puVar2 + lVar14,UVar9.unknown);
    (**(code **)(lVar16 + 0x38))((long)puVar1 + lVar14,0,1,UVar9.unknown);
  }
  else {
    puVar12 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy((void *)((long)puVar1 + lVar14),(void *)((long)puVar2 + lVar14),
            *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x1c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x1c));
  uVar5 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar5;
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x20)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x20));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x24)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x24));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x28));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x28));
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  *puVar3 = *puVar4;
  lVar14 = (long)*(int *)(lVar10 + 0x2c);
  DVar13 = Foundation::Date::typeMetadataAccessor();
  lVar16 = *(long *)(DVar13.unknown + -8);
  pcVar17 = *(code **)(lVar16 + 0x30);
  _swift_bridgeObjectRetain(uVar5);
  lVar11 = (long)puVar2 + lVar14;
  (*pcVar17)(lVar11,1,DVar13.unknown);
  if ((int)lVar11 == 0) {
    (**(code **)(lVar16 + 0x10))((long)puVar1 + lVar14,(long)puVar2 + lVar14,DVar13.unknown);
    (**(code **)(lVar16 + 0x38))((long)puVar1 + lVar14,0,1,DVar13.unknown);
  }
  else {
    puVar12 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)puVar1 + lVar14),(void *)((long)puVar2 + lVar14),
            *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x30));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x30));
  *puVar3 = *puVar4;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x34));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x34));
  uVar5 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar5;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x38));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x38));
  *puVar3 = *puVar4;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x3c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x3c));
  uVar6 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar6;
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x40)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x40));
  uVar15 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x44));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x44)) = uVar15;
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x48)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x48));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar18 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar18;
  uVar5 = param_2[1];
  uVar7 = param_2[2];
  puVar1[2] = uVar7;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar15);
  _swift_retain(uVar18);
  _swift_retain(uVar5);
  _swift_bridgeObjectRetain(uVar7);
  return param_1;
}

