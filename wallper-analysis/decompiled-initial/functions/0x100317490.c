// rea decompile_all
// name: FUN_100317490
// address: 0x100317490
// body: available
// range: 0x100317490-0x100317573 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100317490(undefined1 *param_1,void *param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 auStack_198 [312];
  undefined1 local_60;
  void *local_58;
  
  uVar1 = *param_1;
  _swift_allocObject(param_3,0x132,7);
  _memcpy((void *)(param_3 + 0x10),param_2,0x121);
  *(undefined1 *)(param_3 + 0x131) = uVar1;
  local_60 = uVar1;
  local_58 = param_2;
  FUN_1003181f4(param_2,auStack_198);
  FUN_100002f94(&DAT_10055c060,&DAT_100430dc0);
  FUN_1000087a0(&DAT_10055c068,&DAT_10055c060,&DAT_100430dc0,
                PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_1005233f8);
  SwiftUI::Button::_init();
  return;
}

