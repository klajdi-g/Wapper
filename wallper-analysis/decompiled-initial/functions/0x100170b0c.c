// rea decompile_all
// name: FUN_100170b0c
// address: 0x100170b0c
// body: available
// range: 0x100170b0c-0x100170c73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100170b0c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  URL UVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  uVar1 = param_2[1];
  uVar3 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar3);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[4];
  uVar3 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar3);
  uVar1 = param_2[6];
  uVar3 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  _swift_bridgeObjectRelease(uVar3);
  param_1[7] = param_2[7];
  lVar8 = (long)*(int *)(param_3 + 0x24);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar4.unknown + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar5 = (long)param_1 + lVar8;
  (*pcVar10)(lVar5,1,UVar4.unknown);
  lVar6 = (long)param_2 + lVar8;
  (*pcVar10)(lVar6,1,UVar4.unknown);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 == 0) {
      (**(code **)(lVar9 + 0x28))((long)param_1 + lVar8,(long)param_2 + lVar8,UVar4.unknown);
      goto LAB_100170c20;
    }
    (**(code **)(lVar9 + 8))((long)param_1 + lVar8,UVar4.unknown);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar9 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,UVar4.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,UVar4.unknown);
    goto LAB_100170c20;
  }
  puVar7 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  _memcpy((void *)((long)param_1 + lVar8),(void *)((long)param_2 + lVar8),
          *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
LAB_100170c20:
  iVar2 = *(int *)(param_3 + 0x2c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *(undefined1 *)((long)param_1 + (long)iVar2) = *(undefined1 *)((long)param_2 + (long)iVar2);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  return param_1;
}

