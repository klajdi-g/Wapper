// rea decompile_all
// name: FUN_1002274b0
// address: 0x1002274b0
// body: available
// range: 0x1002274b0-0x1002275a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_1002274b0(byte param_1,Hasher param_2)

{
  undefined1 uVar1;
  Hasher HVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  
  uVar5 = *unaff_x20;
  Swift::Hasher::init(*(__int64 *)(uVar5 + 0x28));
  HVar2.unknown = (undefined *)(ulong)param_1;
  Swift::Hasher::_combine((__uint64)HVar2.unknown,param_2);
  uVar3 = Swift::Hasher::_finalize(HVar2);
  uVar4 = -1L << ((ulong)*(byte *)(uVar5 + 0x20) & 0x3f);
  uVar3 = uVar3 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(uVar5 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
    do {
      if (*(byte *)(*(long *)(uVar5 + 0x30) + uVar3) == param_1) {
        uVar4 = *unaff_x20;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar5 = *unaff_x20;
        if ((uVar4 & 1) == 0) {
          FUN_1001c90a4();
        }
        uVar1 = *(undefined1 *)(*(long *)(uVar5 + 0x30) + uVar3);
        FUN_100227754(uVar3);
        *unaff_x20 = uVar5;
        return uVar1;
      }
      uVar3 = uVar3 + 1 & ~uVar4;
    } while ((*(ulong *)(uVar5 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
  }
  return 4;
}

