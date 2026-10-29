// rea decompile_all
// name: FUN_1000af78c
// address: 0x1000af78c
// body: available
// range: 0x1000af78c-0x1000af86b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000af78c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = &DAT_10054eed0;
  FUN_100002f94(&DAT_10054eed0,&DAT_1004211b0);
  lVar6 = *(long *)(puVar2 + -8);
  lVar5 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)(lVar5 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffb0 + -extraout_x8;
  puVar3 = &DAT_10054fb28;
  FUN_100002f94(&DAT_10054fb28,&DAT_1004211b8);
  if (*(long *)(*(long *)(puVar3 + -8) + 0x40) == lVar5) {
    (**(code **)(lVar6 + 0x10))(puVar4,param_2,puVar2);
    (*param_3)(param_1,puVar4);
    (**(code **)(lVar6 + 8))(puVar4,puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000af86c);
  (*pcVar1)();
}

