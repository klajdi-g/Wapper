// rea decompile_all
// name: FUN_1000c8838
// address: 0x1000c8838
// body: available
// range: 0x1000c8838-0x1000c8917 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1000c8838(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  UUID UVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar8 = *(long *)(UVar4.unknown + -8);
  pcVar9 = *(code **)(lVar8 + 0x20);
  (*pcVar9)(param_1,param_2,UVar4.unknown);
  iVar1 = *(int *)(param_3 + 0x18);
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar10 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  puVar2 = (undefined8 *)(param_2 + iVar1);
  uVar10 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  lVar7 = (long)*(int *)(param_3 + 0x1c);
  lVar5 = param_2 + lVar7;
  (**(code **)(lVar8 + 0x30))(lVar5,1,UVar4.unknown);
  if ((int)lVar5 == 0) {
    (*pcVar9)(param_1 + lVar7,param_2 + lVar7,UVar4.unknown);
    (**(code **)(lVar8 + 0x38))(param_1 + lVar7,0,1,UVar4.unknown);
  }
  else {
    puVar6 = &DAT_10054a9c8;
    FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
    _memcpy((void *)(param_1 + lVar7),(void *)(param_2 + lVar7),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  return param_1;
}

