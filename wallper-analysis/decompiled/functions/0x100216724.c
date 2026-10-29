// rea decompile_all
// name: FUN_100216724
// address: 0x100216724
// body: available
// range: 0x100216724-0x1002167df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_100216724(uint param_1,undefined *param_2)

{
  ulong uVar1;
  Hasher HVar2;
  ulong uVar3;
  Hasher HVar4;
  
  if (*(long *)(param_2 + 0x10) == 0) {
    return 0;
  }
  HVar4.unknown = (undefined *)(ulong)(param_1 & 0xff);
  HVar2.unknown = param_2;
  Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
  Swift::Hasher::_combine((__uint64)HVar4.unknown,HVar2);
  uVar1 = Swift::Hasher::_finalize(HVar4);
  uVar3 = -1L << ((ulong)(byte)param_2[0x20] & 0x3f);
  uVar1 = uVar1 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_2 + (uVar1 >> 6) * 8 + 0x38) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if ((uint)*(byte *)(*(long *)(param_2 + 0x30) + uVar1) == (param_1 & 0xff)) {
        return 1;
      }
      uVar1 = uVar1 + 1 & ~uVar3;
    } while ((*(ulong *)(param_2 + (uVar1 >> 6) * 8 + 0x38) >> (uVar1 & 0x3f) & 1) != 0);
  }
  return 0;
}

