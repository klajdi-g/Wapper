// rea decompile_all
// name: FUN_10040c6c0
// address: 0x10040c6c0
// body: available
// range: 0x10040c6c0-0x10040c75b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010040c754) */

void FUN_10040c6c0(undefined8 param_1,char param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_28;
  
  local_28 = param_1;
  if (param_2 == '\0') {
    _swift_bridgeObjectRetain();
    puVar1 = PTR_get_distantPast_100520b10;
    puVar2 = PTR_>_infix_100520b38;
  }
  else {
    if (param_2 != '\x01') {
      _swift_bridgeObjectRetain();
      FUN_10040273c(&local_28);
      return;
    }
    _swift_bridgeObjectRetain();
    puVar1 = PTR_get_distantFuture_100520b18;
    puVar2 = PTR_<_infix_100520b40;
  }
  FUN_1004025fc(&local_28,puVar1,puVar2);
  return;
}

