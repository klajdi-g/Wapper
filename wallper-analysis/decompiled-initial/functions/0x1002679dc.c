// rea decompile_all
// name: FUN_1002679dc
// address: 0x1002679dc
// body: available
// range: 0x1002679dc-0x100267b07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1002679dc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  UUID UVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  lVar7 = (long)*(int *)(param_3 + 0x18);
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar8 = *(long *)(UVar3.unknown + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar4 = (long)param_1 + lVar7;
  (*pcVar9)(lVar4,1,UVar3.unknown);
  lVar5 = (long)param_2 + lVar7;
  (*pcVar9)(lVar5,1,UVar3.unknown);
  if ((int)lVar4 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar8 + 0x28))((long)param_1 + lVar7,(long)param_2 + lVar7,UVar3.unknown);
      goto LAB_100267ac8;
    }
    (**(code **)(lVar8 + 8))((long)param_1 + lVar7,UVar3.unknown);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar8 + 0x20))((long)param_1 + lVar7,(long)param_2 + lVar7,UVar3.unknown);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,UVar3.unknown);
    goto LAB_100267ac8;
  }
  puVar6 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
          *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
LAB_100267ac8:
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  return param_1;
}

