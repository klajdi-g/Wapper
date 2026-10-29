// rea decompile_all
// name: FUN_10031cdf4
// address: 0x10031cdf4
// body: available
// range: 0x10031cdf4-0x10031ce6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10031cdf4(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 local_31;
  State local_30;
  undefined8 uStack_28;
  
  puVar1 = &DAT_100554260;
  FUN_100002f94(&DAT_100554260,&DAT_100426eb0);
  local_31 = *(undefined1 *)
              (unaff_x20 +
               ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) + 0x131 &
               ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) ^ 0xffffffffffffffff)) + 0x20);
  uStack_28 = *(undefined8 *)(unaff_x20 + 0x40);
  local_30.unknown = *(undefined **)(unaff_x20 + 0x38);
  puVar1 = &DAT_10055bd08;
  FUN_100002f94(&DAT_10055bd08,&DAT_100435de0);
  SwiftUI::State::set_wrappedValue(&local_30,&local_31,puVar1);
  return;
}

