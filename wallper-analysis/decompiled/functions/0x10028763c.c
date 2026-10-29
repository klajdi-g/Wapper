// rea decompile_all
// name: FUN_10028763c
// address: 0x10028763c
// body: available
// range: 0x10028763c-0x1002876b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10028763c(ulong param_1,UTF8View param_2,ulong param_3)

{
  Index IVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1 >> 0xe & 3;
  if (((param_3 >> 0x3c & 1) == 0) || (((ulong)param_2.unknown >> 0x3b & 1) != 0)) {
    IVar1 = Swift::String::UTF16View::index((Index)0xf,param_1 >> 0x10,param_2.unknown);
    uVar2 = (ulong)(IVar1.unknown + uVar3 * 0x10000) & 0xffffffffffff0000;
    if (uVar3 == 0) {
      uVar2 = (ulong)IVar1.unknown & 0xfffffffffffffffc | param_1 & 3;
    }
    uVar2 = uVar2 | 4;
  }
  else {
    IVar1 = Swift::String::UTF8View::_foreignIndex((Index)0xf,param_1 >> 0x10,param_2);
    uVar2 = (ulong)(IVar1.unknown + uVar3 * 0x10000) & 0xffffffffffff0000;
    if (uVar3 == 0) {
      uVar2 = (ulong)IVar1.unknown & 0xfffffffffffffffc | param_1 & 3;
    }
    uVar2 = uVar2 | 8;
  }
  return uVar2;
}

