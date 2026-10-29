// rea decompile_all
// name: FUN_10002e808
// address: 0x10002e808
// body: available
// range: 0x10002e808-0x10002e8b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_10002e808(__uint64 *param_1,undefined8 param_2,Hasher param_3)

{
  ulong uVar1;
  ulong uVar2;
  __uint64 _Var3;
  
  if (*(long *)(param_3.unknown + 0x10) == 0) {
    return 0;
  }
  _Var3 = *param_1;
  uVar1 = Swift::Hasher::_hash(*(__int64 *)(param_3.unknown + 0x28),_Var3,param_3);
  uVar2 = -1L << ((ulong)(byte)param_3.unknown[0x20] & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_3.unknown + (uVar1 >> 6) * 8 + 0x38) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if (*(__uint64 *)(*(long *)(param_3.unknown + 0x30) + uVar1 * 8) == _Var3) {
        return 1;
      }
      uVar1 = uVar1 + 1 & ~uVar2;
    } while ((*(ulong *)(param_3.unknown + (uVar1 >> 6) * 8 + 0x38) >> (uVar1 & 0x3f) & 1) != 0);
  }
  return 0;
}

