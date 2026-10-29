// rea decompile_all
// name: FUN_1000ce990
// address: 0x1000ce990
// body: available
// range: 0x1000ce990-0x1000ceb3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1000ce990(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  UUID UVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  code *pcVar13;
  
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  lVar11 = *(long *)(UVar5.unknown + -8);
  pcVar12 = *(code **)(lVar11 + 0x18);
  (*pcVar12)(param_1,param_2,UVar5.unknown);
  lVar6 = 0;
  FUN_1000c8bec();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar6 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar6 + 0x14));
  *puVar1 = *puVar2;
  uVar9 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar6 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar6 + 0x18));
  *puVar1 = *puVar2;
  uVar9 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  lVar10 = (long)*(int *)(lVar6 + 0x1c);
  pcVar13 = *(code **)(lVar11 + 0x30);
  lVar6 = param_1 + lVar10;
  (*pcVar13)(lVar6,1,UVar5.unknown);
  lVar7 = param_2 + lVar10;
  (*pcVar13)(lVar7,1,UVar5.unknown);
  if ((int)lVar6 == 0) {
    if ((int)lVar7 == 0) {
      (*pcVar12)(param_1 + lVar10,param_2 + lVar10,UVar5.unknown);
      goto LAB_1000ceae0;
    }
    (**(code **)(lVar11 + 8))(param_1 + lVar10,UVar5.unknown);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar11 + 0x10))(param_1 + lVar10,param_2 + lVar10,UVar5.unknown);
    (**(code **)(lVar11 + 0x38))(param_1 + lVar10,0,1,UVar5.unknown);
    goto LAB_1000ceae0;
  }
  puVar8 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  _memcpy((void *)(param_1 + lVar10),(void *)(param_2 + lVar10),
          *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
LAB_1000ceae0:
  puVar3 = (undefined1 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar4 = (undefined1 *)(param_2 + *(int *)(param_3 + 0x14));
  *puVar3 = *puVar4;
  uVar9 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_retain();
  _swift_release(uVar9);
  return param_1;
}

