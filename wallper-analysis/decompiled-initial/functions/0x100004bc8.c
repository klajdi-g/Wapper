// rea decompile_all
// name: FUN_100004bc8
// address: 0x100004bc8
// body: available
// range: 0x100004bc8-0x100004c83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100004bc8(AnyHashable param_1,ulong param_2,AnyHashable param_3)

{
  bool bVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_78 [40];
  
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar3 = 0;
  }
  else {
    do {
      FUN_100007d98(*(long *)(unaff_x20 + 0x30) + param_2 * 0x28,auStack_78);
      bVar1 = Swift::AnyHashable::___infix((AnyHashable)auStack_78,param_1,param_3);
      uVar3 = (ulong)bVar1;
      FUN_100007dd4(auStack_78);
      if (bVar1) break;
      param_2 = param_2 + 1 & ~uVar2;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = param_2;
  return auVar4;
}

