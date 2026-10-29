// rea decompile_all
// name: FUN_1000c8918
// address: 0x1000c8918
// body: available
// range: 0x1000c8918-0x1000c8a67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1000c8918(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  UUID UVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar10 = *(long *)(UVar4.unknown + -8);
  pcVar11 = *(code **)(lVar10 + 0x28);
  (*pcVar11)(param_1,param_2,UVar4.unknown);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar3 = puVar2[1];
  uVar5 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  uVar3 = puVar2[1];
  uVar5 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar5);
  lVar9 = (long)*(int *)(param_3 + 0x1c);
  pcVar12 = *(code **)(lVar10 + 0x30);
  lVar6 = param_1 + lVar9;
  (*pcVar12)(lVar6,1,UVar4.unknown);
  lVar7 = param_2 + lVar9;
  (*pcVar12)(lVar7,1,UVar4.unknown);
  if ((int)lVar6 == 0) {
    if ((int)lVar7 == 0) {
      (*pcVar11)(param_1 + lVar9,param_2 + lVar9,UVar4.unknown);
      return param_1;
    }
    (**(code **)(lVar10 + 8))(param_1 + lVar9,UVar4.unknown);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar10 + 0x20))(param_1 + lVar9,param_2 + lVar9,UVar4.unknown);
    (**(code **)(lVar10 + 0x38))(param_1 + lVar9,0,1,UVar4.unknown);
    return param_1;
  }
  puVar8 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  _memcpy((void *)(param_1 + lVar9),(void *)(param_2 + lVar9),
          *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  return param_1;
}

