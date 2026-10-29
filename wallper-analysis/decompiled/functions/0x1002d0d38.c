// rea decompile_all
// name: FUN_1002d0d38
// address: 0x1002d0d38
// body: available
// range: 0x1002d0d38-0x1002d0daf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d0d38(undefined8 *param_1,Color param_2,undefined8 param_3,byte param_4,
                  undefined8 param_5)

{
  Color CVar1;
  LocalizedStringKey LVar2;
  undefined8 uVar3;
  String stringLiteral;
  
  CVar1 = SwiftUI::Color::get_orange(param_2);
  uVar3 = 0x80000001004e4b30;
  stringLiteral.bridgeObject = (void *)0x80000001004e4b30;
  stringLiteral.str = (char *)0xd00000000000001f;
  LVar2 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *param_1 = 0x6461622e6c6c6562;
  param_1[1] = 0xef6c6c69662e6567;
  param_1[2] = CVar1.unknown;
  param_1[3] = LVar2.unknown;
  param_1[4] = uVar3;
  *(byte *)(param_1 + 5) = param_4 & 1;
  param_1[6] = param_5;
  return;
}

