// rea decompile_all
// name: FUN_1000f9210
// address: 0x1000f9210
// body: available
// range: 0x1000f9210-0x1000f9513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1000f9210(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  URL UVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  
  *param_1 = *param_2;
  uVar9 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  lVar11 = (long)*(int *)(param_3 + 0x14);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar12 = *(long *)(UVar5.unknown + -8);
  pcVar13 = *(code **)(lVar12 + 0x30);
  lVar8 = (long)param_1 + lVar11;
  (*pcVar13)(lVar8,1,UVar5.unknown);
  lVar6 = (long)param_2 + lVar11;
  (*pcVar13)(lVar6,1,UVar5.unknown);
  if ((int)lVar8 == 0) {
    if ((int)lVar6 == 0) {
      (**(code **)(lVar12 + 0x18))((long)param_1 + lVar11,(long)param_2 + lVar11,UVar5.unknown);
      goto LAB_1000f9304;
    }
    (**(code **)(lVar12 + 8))((long)param_1 + lVar11,UVar5.unknown);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar12 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,UVar5.unknown);
    (**(code **)(lVar12 + 0x38))((long)param_1 + lVar11,0,1,UVar5.unknown);
    goto LAB_1000f9304;
  }
  puVar7 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
          *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
LAB_1000f9304:
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *puVar1 = *puVar2;
  uVar9 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *puVar1 = *puVar2;
  uVar9 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  lVar8 = (long)*(int *)(param_3 + 0x24);
  uVar9 = *(undefined8 *)((long)param_1 + lVar8);
  *(undefined8 *)((long)param_1 + lVar8) = *(undefined8 *)((long)param_2 + lVar8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *puVar1 = *puVar2;
  uVar9 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar10 = puVar1[1];
  uVar9 = puVar2[1];
  uVar14 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar14;
  _swift_retain(uVar9);
  _swift_release(uVar10);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *puVar1 = *puVar2;
  uVar9 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_retain();
  _swift_release(uVar9);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *puVar3 = *puVar4;
  uVar9 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_retain();
  _swift_release(uVar9);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *puVar3 = *puVar4;
  uVar9 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_retain();
  _swift_release(uVar9);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  *puVar3 = *puVar4;
  uVar9 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_retain();
  _swift_release(uVar9);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  *puVar1 = *puVar2;
  uVar9 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_retain();
  _swift_release(uVar9);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x44));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  *puVar3 = *puVar4;
  uVar9 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_retain();
  _swift_release(uVar9);
  return param_1;
}

