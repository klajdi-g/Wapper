// rea decompile_all
// name: FUN_1000f9650
// address: 0x1000f9650
// body: available
// range: 0x1000f9650-0x1000f98b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1000f9650(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 uVar6;
  URL UVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  
  uVar10 = param_2[1];
  uVar6 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar10;
  _swift_bridgeObjectRelease(uVar6);
  lVar12 = (long)*(int *)(param_3 + 0x14);
  UVar7 = Foundation::URL::typeMetadataAccessor();
  lVar13 = *(long *)(UVar7.unknown + -8);
  pcVar14 = *(code **)(lVar13 + 0x30);
  lVar11 = (long)param_1 + lVar12;
  (*pcVar14)(lVar11,1,UVar7.unknown);
  lVar8 = (long)param_2 + lVar12;
  (*pcVar14)(lVar8,1,UVar7.unknown);
  if ((int)lVar11 == 0) {
    if ((int)lVar8 == 0) {
      (**(code **)(lVar13 + 0x28))((long)param_1 + lVar12,(long)param_2 + lVar12,UVar7.unknown);
      goto LAB_1000f9734;
    }
    (**(code **)(lVar13 + 8))((long)param_1 + lVar12,UVar7.unknown);
  }
  else if ((int)lVar8 == 0) {
    (**(code **)(lVar13 + 0x20))((long)param_1 + lVar12,(long)param_2 + lVar12,UVar7.unknown);
    (**(code **)(lVar13 + 0x38))((long)param_1 + lVar12,0,1,UVar7.unknown);
    goto LAB_1000f9734;
  }
  puVar9 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
          *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
LAB_1000f9734:
  iVar5 = *(int *)(param_3 + 0x1c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
  uVar10 = puVar2[1];
  uVar6 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar10;
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar10 = puVar2[1];
  uVar6 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar10;
  _swift_bridgeObjectRelease(uVar6);
  lVar11 = (long)*(int *)(param_3 + 0x24);
  uVar10 = *(undefined8 *)((long)param_1 + lVar11);
  *(undefined8 *)((long)param_1 + lVar11) = *(undefined8 *)((long)param_2 + lVar11);
  _swift_bridgeObjectRelease(uVar10);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar10 = puVar2[1];
  uVar6 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar10;
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  uVar10 = puVar1[1];
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar6 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar6;
  _swift_release(uVar10);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar10 = puVar2[1];
  uVar6 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar10;
  _swift_release(uVar6);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *puVar3 = *puVar4;
  uVar10 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_release(uVar10);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *puVar3 = *puVar4;
  uVar10 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_release(uVar10);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  *puVar3 = *puVar4;
  uVar10 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_release(uVar10);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  uVar6 = puVar1[1];
  uVar10 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar10;
  _swift_release(uVar6);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x44));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  *puVar3 = *puVar4;
  uVar10 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_release(uVar10);
  return param_1;
}

