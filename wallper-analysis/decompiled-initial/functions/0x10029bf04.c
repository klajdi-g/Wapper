// rea decompile_all
// name: FUN_10029bf04
// address: 0x10029bf04
// body: available
// range: 0x10029bf04-0x10029bfbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10029bf04(code *param_1,undefined8 param_2,_StringObject param_3,ulong param_4)

{
  UnsafeBufferPointer<__int8> UVar1;
  undefined1 local_50 [16];
  undefined *local_40;
  ulong uStack_38;
  undefined1 local_30 [16];
  
  if ((param_4 >> 0x3c & 1) == 0) {
    if ((param_4 >> 0x3d & 1) == 0) {
      if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
        UVar1 = Swift::_StringObject::get_sharedUTF8(param_3);
      }
      else {
        UVar1.unknown = (undefined *)((param_4 & 0xfffffffffffffff) + 0x20);
      }
      (*param_1)(local_30,UVar1.unknown);
    }
    else {
      uStack_38 = param_4 & 0xffffffffffffff;
      local_40 = param_3.unknown;
      (*param_1)(local_50,&local_40,param_4 >> 0x38 & 0xf);
    }
  }
  return;
}

