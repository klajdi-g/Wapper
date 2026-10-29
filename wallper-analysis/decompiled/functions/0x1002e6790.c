// rea decompile_all
// name: FUN_1002e6790
// address: 0x1002e6790
// body: available
// range: 0x1002e6790-0x1002e689f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002e6790(undefined8 *param_1,char *param_2,undefined8 param_3,byte param_4,
                  undefined8 param_5)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  LocalizedStringKey LVar5;
  Text TVar6;
  void *pvVar7;
  String stringLiteral;
  
  cVar2 = *param_2;
  if (cVar2 == '\0') {
    pcVar4 = (char *)0x616c70207065654b;
    pvVar7 = (void *)0xec000000676e6979;
  }
  else if (cVar2 == '\x01') {
    pcVar4 = (char *)0xd00000000000001d;
    pvVar7 = (void *)0x80000001004e54e0;
  }
  else {
    pvVar7 = (void *)0x80000001004e54c0;
    pcVar4 = (char *)0xd000000000000018;
  }
  stringLiteral.bridgeObject = pvVar7;
  stringLiteral.str = pcVar4;
  LVar5 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  param_4 = param_4 & 1;
  TVar6 = SwiftUI::Text::_init(LVar5);
  bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0x1a,0,0,0x1a,0,0);
  cVar1 = cVar2;
  if ((bVar3 & 1) != 0) {
    cVar1 = '\x01';
  }
  *param_1 = TVar6.unknown;
  param_1[1] = pvVar7;
  *(byte *)(param_1 + 2) = param_4;
  param_1[3] = param_5;
  *(char *)(param_1 + 4) = cVar2;
  *(char *)((long)param_1 + 0x21) = cVar1;
  return;
}

