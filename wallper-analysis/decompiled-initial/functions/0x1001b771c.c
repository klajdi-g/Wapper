// rea decompile_all
// name: FUN_1001b771c
// address: 0x1001b771c
// body: available
// range: 0x1001b771c-0x1001b784b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_1001b771c(void *param_1,void *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  UUID UVar3;
  void *pvVar4;
  void *pvVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar8 = *(long *)(UVar3.unknown + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  pvVar4 = param_1;
  (*pcVar9)(param_1,1,UVar3.unknown);
  pvVar5 = param_2;
  (*pcVar9)(param_2,1,UVar3.unknown);
  if ((int)pvVar4 == 0) {
    if ((int)pvVar5 == 0) {
      (**(code **)(lVar8 + 0x18))(param_1,param_2,UVar3.unknown);
      goto LAB_1001b77ec;
    }
    (**(code **)(lVar8 + 8))(param_1,UVar3.unknown);
  }
  else if ((int)pvVar5 == 0) {
    (**(code **)(lVar8 + 0x10))(param_1,param_2,UVar3.unknown);
    (**(code **)(lVar8 + 0x38))(param_1,0,1,UVar3.unknown);
    goto LAB_1001b77ec;
  }
  puVar6 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
LAB_1001b77ec:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  uVar7 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  return param_1;
}

