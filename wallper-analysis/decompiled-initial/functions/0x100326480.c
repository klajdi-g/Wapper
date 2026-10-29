// rea decompile_all
// name: FUN_100326480
// address: 0x100326480
// body: available
// range: 0x100326480-0x10032653b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100326480(undefined1 param_1,long param_2,Published *param_3,undefined8 param_4)

{
  StateObject SVar1;
  undefined1 local_51;
  
  SVar1.unknown = *(undefined **)(param_2 + 0x10);
  FUN_10002ea18(0);
  FUN_1000036d0(&DAT_10055c5e8,FUN_10002ea18,&TargetProtocolConformanceDescriptor_10041cd50);
  SwiftUI::StateObject::get_wrappedValue(SVar1);
  _swift_getKeyPath(param_3);
  _swift_getKeyPath(param_4);
  local_51 = param_1;
  Combine::Published::_set_subscript(param_3,&local_51,SVar1.unknown,param_3,param_4);
  return;
}

