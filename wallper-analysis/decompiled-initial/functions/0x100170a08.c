// rea decompile_all
// name: FUN_100170a08
// address: 0x100170a08
// body: available
// range: 0x100170a08-0x100170b0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100170a08(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  URL UVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar7 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar7;
  uVar7 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar7;
  param_1[7] = param_2[7];
  lVar5 = (long)*(int *)(param_3 + 0x24);
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar2.unknown + -8);
  lVar3 = (long)param_2 + lVar5;
  (**(code **)(lVar6 + 0x30))(lVar3,1,UVar2.unknown);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar6 + 0x20))((long)param_1 + lVar5,(long)param_2 + lVar5,UVar2.unknown);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,UVar2.unknown);
  }
  else {
    puVar4 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy((void *)((long)param_1 + lVar5),(void *)((long)param_2 + lVar5),
            *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x2c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  return param_1;
}

