// rea decompile_all
// name: FUN_100287eb0
// address: 0x100287eb0
// body: available
// range: 0x100287eb0-0x100287f13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100287eb0(long param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  __DataStorage *p_Var3;
  undefined1 auVar4 [16];
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = param_2 - param_1;
  }
  p_Var3 = Foundation::__DataStorage::typeMetadataAccessor();
  _swift_allocObject(p_Var3,*(undefined4 *)(p_Var3 + 0x30),*(undefined2 *)(p_Var3 + 0x34));
  p_Var3 = Foundation::__DataStorage::_init(p_Var3,param_1);
  if (uVar1 >> 0x1f == 0) {
    auVar4._0_8_ = uVar1 << 0x20;
    auVar4._8_8_ = p_Var3;
    return auVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100287f14);
  (*pcVar2)();
}

