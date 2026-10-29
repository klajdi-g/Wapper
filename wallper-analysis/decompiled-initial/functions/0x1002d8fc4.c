// rea decompile_all
// name: FUN_1002d8fc4
// address: 0x1002d8fc4
// body: available
// range: 0x1002d8fc4-0x1002d90cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002d90c8 to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d8fc4(undefined8 *param_1,Color param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  Color CVar1;
  LocalizedStringKey LVar2;
  Text TVar3;
  undefined8 uVar4;
  ulong uVar5;
  String stringLiteral;
  
  CVar1 = SwiftUI::Color::get_yellow(param_2);
  uVar4 = 0xeb0000000079654b;
  stringLiteral.bridgeObject = (void *)0xeb0000000079654b;
  stringLiteral.str = (char *)0x2065736e6563694c;
  LVar2 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  uVar5 = (ulong)(param_4 & 1);
  TVar3 = SwiftUI::Text::_init(LVar2);
  *param_1 = 0x6c6c69662e79656b;
  param_1[1] = 0xe800000000000000;
  param_1[2] = 0x4036000000000000;
  param_1[3] = CVar1.unknown;
  param_1[4] = TVar3.unknown;
  param_1[5] = uVar4;
  *(char *)(param_1 + 6) = (char)uVar5;
  param_1[7] = param_5;
  _swift_bridgeObjectRetain(0xe800000000000000);
  _swift_retain(CVar1.unknown);
  FUN_100007b14(TVar3.unknown,uVar4,uVar5);
  _swift_bridgeObjectRetain(param_5);
  FUN_100025b34(TVar3.unknown,uVar4,uVar5);
  _swift_release(CVar1.unknown);
  _swift_bridgeObjectRelease(0xe800000000000000);
  _swift_bridgeObjectRelease(param_5);
  return;
}

