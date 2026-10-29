// rea decompile_all
// name: FUN_1002c8654
// address: 0x1002c8654
// body: available
// range: 0x1002c8654-0x1002c8757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002c8754 to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c8654(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,LocalizedStringKey param_6)

{
  byte bVar1;
  Color CVar2;
  Text TVar3;
  ulong uVar4;
  
  CVar2.unknown = (undefined *)0x0;
  FUN_100170d98();
  bVar1 = param_6.unknown[*(int *)(CVar2.unknown + 0x28)];
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      CVar2 = SwiftUI::Color::get_secondary(CVar2);
    }
    else {
      CVar2 = SwiftUI::Color::get_green(CVar2);
    }
  }
  else if (bVar1 == 2) {
    CVar2 = SwiftUI::Color::get_yellow(CVar2);
  }
  else {
    CVar2 = SwiftUI::Color::get_red(CVar2);
  }
  FUN_1002cb09c();
  uVar4 = (ulong)(param_4 & 1);
  TVar3 = SwiftUI::Text::_init(param_6);
  *param_1 = CVar2.unknown;
  param_1[1] = TVar3.unknown;
  param_1[2] = param_3;
  *(char *)(param_1 + 3) = (char)uVar4;
  param_1[4] = param_5;
  _swift_retain(CVar2.unknown);
  FUN_100007b14(TVar3.unknown,param_3,uVar4);
  _swift_bridgeObjectRetain(param_5);
  FUN_100025b34(TVar3.unknown,param_3,uVar4);
  _swift_release(CVar2.unknown);
  _swift_bridgeObjectRelease(param_5);
  return;
}

