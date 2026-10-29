// rea decompile_all
// name: FUN_100147c68
// address: 0x100147c68
// body: available
// range: 0x100147c68-0x100147d03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100147c68(ID param_1,long param_2)

{
  undefined *puVar1;
  undefined1 local_61;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  objc_stub::lock(param_1);
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    _swift_beginAccess(param_2 + 0x10,auStack_60,1,0);
    *(undefined1 *)(param_2 + 0x10) = 1;
    local_61 = 0;
    puVar1 = &DAT_100554ab0;
    FUN_100002f94(&DAT_100554ab0,&DAT_100427c60);
    Swift::CheckedContinuation::resume(&local_61,puVar1);
  }
  objc_stub::unlock(param_1);
  return;
}

