// rea decompile_all
// name: FUN_1000c85c4
// address: 0x1000c85c4
// body: available
// range: 0x1000c85c4-0x1000c86c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1000c85c4(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  UUID UVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  code *pcVar11;
  
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  lVar9 = *(long *)(UVar5.unknown + -8);
  pcVar10 = *(code **)(lVar9 + 0x10);
  (*pcVar10)(param_1,param_2,UVar5.unknown);
  iVar4 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)(param_1 + iVar4);
  puVar2 = (undefined8 *)(param_2 + iVar4);
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  lVar8 = (long)*(int *)(param_3 + 0x1c);
  pcVar11 = *(code **)(lVar9 + 0x30);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  lVar6 = param_2 + lVar8;
  (*pcVar11)(lVar6,1,UVar5.unknown);
  if ((int)lVar6 == 0) {
    (*pcVar10)(param_1 + lVar8,param_2 + lVar8,UVar5.unknown);
    (**(code **)(lVar9 + 0x38))(param_1 + lVar8,0,1,UVar5.unknown);
  }
  else {
    puVar7 = &DAT_10054a9c8;
    FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
    _memcpy((void *)(param_1 + lVar8),(void *)(param_2 + lVar8),
            *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  return param_1;
}

