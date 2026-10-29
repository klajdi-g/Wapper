// rea decompile_all
// name: FUN_10006acbc
// address: 0x10006acbc
// body: available
// range: 0x10006acbc-0x10006af2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10006acbc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  URL UVar6;
  long lVar7;
  undefined *puVar8;
  Date DVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  code *pcVar13;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  lVar5 = 0;
  FUN_10040211c();
  iVar4 = *(int *)(lVar5 + 0x14);
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar12 = *(long *)(UVar6.unknown + -8);
  pcVar13 = *(code **)(lVar12 + 0x10);
  _swift_bridgeObjectRetain(uVar3);
  (*pcVar13)((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,UVar6.unknown);
  lVar10 = (long)*(int *)(lVar5 + 0x18);
  lVar7 = (long)param_2 + lVar10;
  (**(code **)(lVar12 + 0x30))(lVar7,1,UVar6.unknown);
  if ((int)lVar7 == 0) {
    (*pcVar13)((long)param_1 + lVar10,(long)param_2 + lVar10,UVar6.unknown);
    (**(code **)(lVar12 + 0x38))((long)param_1 + lVar10,0,1,UVar6.unknown);
  }
  else {
    puVar8 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x1c));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x20));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0x24));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x28));
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = *puVar2;
  lVar10 = (long)*(int *)(lVar5 + 0x2c);
  DVar9 = Foundation::Date::typeMetadataAccessor();
  lVar12 = *(long *)(DVar9.unknown + -8);
  pcVar13 = *(code **)(lVar12 + 0x30);
  _swift_bridgeObjectRetain(uVar3);
  lVar7 = (long)param_2 + lVar10;
  (*pcVar13)(lVar7,1,DVar9.unknown);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar12 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar9.unknown);
    (**(code **)(lVar12 + 0x38))((long)param_1 + lVar10,0,1,DVar9.unknown);
  }
  else {
    puVar8 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x30));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x34));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x38));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x3c));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x40)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0x40));
  uVar11 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x44));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x44)) = uVar11;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x48)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0x48));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar11);
  return param_1;
}

