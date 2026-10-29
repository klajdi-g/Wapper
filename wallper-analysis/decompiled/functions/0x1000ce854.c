// rea decompile_all
// name: FUN_1000ce854
// address: 0x1000ce854
// body: available
// range: 0x1000ce854-0x1000ce98f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1000ce854(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  UUID UVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  code *pcVar13;
  
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  lVar10 = *(long *)(UVar7.unknown + -8);
  pcVar11 = *(code **)(lVar10 + 0x10);
  (*pcVar11)(param_1,param_2,UVar7.unknown);
  lVar8 = 0;
  FUN_1000c8bec();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar8 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar8 + 0x14));
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar8 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar8 + 0x18));
  uVar6 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  lVar12 = (long)*(int *)(lVar8 + 0x1c);
  pcVar13 = *(code **)(lVar10 + 0x30);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  lVar8 = param_2 + lVar12;
  (*pcVar13)(lVar8,1,UVar7.unknown);
  if ((int)lVar8 == 0) {
    (*pcVar11)(param_1 + lVar12,param_2 + lVar12,UVar7.unknown);
    (**(code **)(lVar10 + 0x38))(param_1 + lVar12,0,1,UVar7.unknown);
  }
  else {
    puVar9 = &DAT_10054a9c8;
    FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
    _memcpy((void *)(param_1 + lVar12),(void *)(param_2 + lVar12),
            *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  puVar3 = (undefined1 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar4 = (undefined1 *)(param_2 + *(int *)(param_3 + 0x14));
  *puVar3 = *puVar4;
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_retain();
  return param_1;
}

