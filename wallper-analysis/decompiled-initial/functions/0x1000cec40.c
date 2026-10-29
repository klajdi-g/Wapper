// rea decompile_all
// name: FUN_1000cec40
// address: 0x1000cec40
// body: available
// range: 0x1000cec40-0x1000cedc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1000cec40(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  UUID UVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  code *pcVar14;
  
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  lVar11 = *(long *)(UVar5.unknown + -8);
  pcVar13 = *(code **)(lVar11 + 0x28);
  (*pcVar13)(param_1,param_2,UVar5.unknown);
  lVar6 = 0;
  FUN_1000c8bec();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar6 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar6 + 0x14));
  uVar10 = puVar2[1];
  uVar7 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar10;
  _swift_bridgeObjectRelease(uVar7);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar6 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar6 + 0x18));
  uVar10 = puVar2[1];
  uVar7 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar10;
  _swift_bridgeObjectRelease(uVar7);
  lVar12 = (long)*(int *)(lVar6 + 0x1c);
  pcVar14 = *(code **)(lVar11 + 0x30);
  lVar6 = param_1 + lVar12;
  (*pcVar14)(lVar6,1,UVar5.unknown);
  lVar8 = param_2 + lVar12;
  (*pcVar14)(lVar8,1,UVar5.unknown);
  if ((int)lVar6 == 0) {
    if ((int)lVar8 == 0) {
      (*pcVar13)(param_1 + lVar12,param_2 + lVar12,UVar5.unknown);
      goto LAB_1000ced70;
    }
    (**(code **)(lVar11 + 8))(param_1 + lVar12,UVar5.unknown);
  }
  else if ((int)lVar8 == 0) {
    (**(code **)(lVar11 + 0x20))(param_1 + lVar12,param_2 + lVar12,UVar5.unknown);
    (**(code **)(lVar11 + 0x38))(param_1 + lVar12,0,1,UVar5.unknown);
    goto LAB_1000ced70;
  }
  puVar9 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  _memcpy((void *)(param_1 + lVar12),(void *)(param_2 + lVar12),
          *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
LAB_1000ced70:
  puVar3 = (undefined1 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar4 = (undefined1 *)(param_2 + *(int *)(param_3 + 0x14));
  *puVar3 = *puVar4;
  uVar10 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_release(uVar10);
  return param_1;
}

