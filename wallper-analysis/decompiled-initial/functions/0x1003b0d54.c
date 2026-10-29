// rea decompile_all
// name: FUN_1003b0d54
// address: 0x1003b0d54
// body: available
// range: 0x1003b0d54-0x1003b0da3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b0d54(void)

{
  long lVar1;
  ulong uVar2;
  AppStorage *unaff_x20;
  undefined1 local_11;
  
  lVar1 = 0;
  FUN_1003afcec();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  local_11 = 1;
  SwiftUI::AppStorage::set_wrappedValue
            (unaff_x20,&local_11,
             *(undefined8 *)
              ((long)&unaff_x20[6].unknown + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff))),
             PTR___type_metadata_for_Swift_Bool_100523b70);
  return;
}

