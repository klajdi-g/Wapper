// rea decompile_all
// name: FUN_10017410c
// address: 0x10017410c
// body: available
// range: 0x10017410c-0x1001741c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10017410c(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  long *plVar5;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  plVar1 = (long *)(param_1 + 0x10);
  _swift_weakLoadStrong();
  if (plVar1 != (long *)0x0) {
    puVar2 = &DAT_1004296c0;
    _swift_getKeyPath(&DAT_1004296c0);
    puVar3 = &DAT_1004296e8;
    _swift_getKeyPath(&DAT_1004296e8);
    pcVar4 = (code *)auStack_68;
    plVar5 = plVar1;
    Combine::Published::_modify_subscript();
    *plVar5 = *plVar5 + 1;
    (*pcVar4)(auStack_68,0);
    _swift_release(plVar1);
    _swift_release(puVar2);
    _swift_release(puVar3);
  }
  return;
}

