// rea decompile_all
// name: FUN_10000898c
// address: 0x10000898c
// body: available
// range: 0x10000898c-0x100008a07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000089f0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10000898c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  long extraout_x12;
  
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(undefined8 *)(*(long *)(param_2 + -8) + 0x40),param_1,param_1);
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  SwiftUI::AnyView::_init(param_1,param_2,param_3);
  return;
}

