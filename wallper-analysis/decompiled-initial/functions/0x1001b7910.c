// rea decompile_all
// name: FUN_1001b7910
// address: 0x1001b7910
// body: available
// range: 0x1001b7910-0x1001b7a2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_1001b7910(void *param_1,void *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  UUID UVar4;
  void *pvVar5;
  void *pvVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar9 = *(long *)(UVar4.unknown + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  pvVar5 = param_1;
  (*pcVar10)(param_1,1,UVar4.unknown);
  pvVar6 = param_2;
  (*pcVar10)(param_2,1,UVar4.unknown);
  if ((int)pvVar5 == 0) {
    if ((int)pvVar6 == 0) {
      (**(code **)(lVar9 + 0x28))(param_1,param_2,UVar4.unknown);
      goto LAB_1001b79e0;
    }
    (**(code **)(lVar9 + 8))(param_1,UVar4.unknown);
  }
  else if ((int)pvVar6 == 0) {
    (**(code **)(lVar9 + 0x20))(param_1,param_2,UVar4.unknown);
    (**(code **)(lVar9 + 0x38))(param_1,0,1,UVar4.unknown);
    goto LAB_1001b79e0;
  }
  puVar7 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
LAB_1001b79e0:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar3 = puVar2[1];
  uVar8 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar8);
  return param_1;
}

