// rea decompile_all
// name: FUN_1001093ec
// address: 0x1001093ec
// body: available
// range: 0x1001093ec-0x100109517 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


double FUN_1001093ec(long param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  double *pdVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  undefined1 local_31;
  State local_30;
  undefined8 uStack_28;
  
  lVar4 = 0;
  FUN_100126a5c();
  if (*(char *)(param_1 + *(int *)(lVar4 + 0x1c)) == '\x01') {
    plVar1 = (long *)(param_1 + *(int *)(lVar4 + 0x28));
    dVar8 = 0.0;
    if ((char)plVar1[1] != '\x01') {
      dVar8 = (double)*plVar1;
    }
    puVar2 = (ulong *)(param_1 + *(int *)(lVar4 + 0x2c));
    if (((char)puVar2[1] == '\x01') || (uVar6 = *puVar2, (long)uVar6 < 1)) {
      dVar7 = 0.15;
    }
    else {
      dVar8 = dVar8 / (double)uVar6;
      dVar7 = 1.0;
      if ((dVar8 < 1.0) && (dVar7 = dVar8, dVar8 < 0.0)) {
        dVar7 = 0.0;
      }
    }
  }
  else {
    pdVar3 = (double *)(param_1 + *(int *)(lVar4 + 0x24));
    dVar7 = 0.0;
    if (*(char *)(pdVar3 + 1) != '\x01') {
      dVar7 = *pdVar3;
    }
    if (0.97 <= dVar7) {
      uStack_28 = *(undefined8 *)(param_2 + 0x58);
      local_30.unknown = *(undefined **)(param_2 + 0x50);
      local_31 = 1;
      puVar5 = &DAT_10054ab50;
      FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
      SwiftUI::State::set_wrappedValue(&local_30,&local_31,puVar5);
      dVar7 = 0.97;
    }
  }
  return dVar7;
}

