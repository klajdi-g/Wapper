// rea decompile_all
// name: FUN_1000a8e0c
// address: 0x1000a8e0c
// body: available
// range: 0x1000a8e0c-0x1000a9013 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a8e0c(Alignment param_1,undefined8 param_2)

{
  Alignment AVar1;
  Alignment AVar2;
  void *extraout_x8;
  undefined1 auStack_1158 [552];
  undefined *local_f30;
  undefined8 local_f28;
  undefined1 auStack_f20 [424];
  undefined1 auStack_d78 [552];
  undefined1 auStack_b50 [552];
  undefined1 auStack_928 [424];
  undefined1 auStack_780 [552];
  undefined1 auStack_558 [424];
  undefined1 auStack_3b0 [424];
  undefined *local_208;
  undefined8 local_200;
  undefined1 auStack_1f8 [424];
  
  (*(code *)PTR____chkstk_darwin_100521118)();
  AVar1 = SwiftUI::Alignment::get_bottom(param_1);
  FUN_1000a9014(auStack_780);
  _memcpy(auStack_558,auStack_780,0x1a8);
  _memcpy(auStack_3b0,auStack_780,0x1a8);
  FUN_1000087e4(auStack_558,auStack_b50,&DAT_100550090,&DAT_1004218d8);
  FUN_10002a29c(auStack_3b0,&DAT_100550090,&DAT_1004218d8);
  AVar2.unknown = _memcpy(auStack_928,auStack_558,0x1a8);
  SwiftUI::Alignment::get_center(AVar2);
  local_208 = AVar1.unknown;
  local_200 = param_2;
  _memcpy(auStack_1f8,auStack_928,0x1a8);
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  _memcpy(auStack_780,&local_208,0x1b8);
  local_f30 = AVar1.unknown;
  local_f28 = param_2;
  _memcpy(auStack_f20,auStack_928,0x1a8);
  FUN_1000087e4(&local_208,auStack_b50,&DAT_100550098,&DAT_1004218e0);
  FUN_10002a29c(&local_f30,&DAT_100550098,&DAT_1004218e0);
  _memcpy(auStack_d78,auStack_780,0x228);
  _memcpy(auStack_b50,auStack_780,0x228);
  FUN_1000087e4(auStack_d78,auStack_1158,&DAT_1005500a0,&DAT_1004218e8);
  FUN_10002a29c(auStack_b50,&DAT_1005500a0,&DAT_1004218e8);
  _memcpy(extraout_x8,auStack_d78,0x228);
  return;
}

