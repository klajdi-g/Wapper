// rea decompile_all
// name: FUN_100110540
// address: 0x100110540
// body: available
// range: 0x100110540-0x10011066b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100110540(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  String stringLiteral;
  undefined8 uVar3;
  
  stringLiteral.bridgeObject = (void *)0xe700000000000000;
  stringLiteral.str = (char *)0x65736e6563694c;
  uVar3 = 0xe700000000000000;
  SwiftUI::LocalizedStringKey::init(stringLiteral);
  puVar1 = &DAT_10052cae8;
  _swift_allocObject(&DAT_10052cae8,0x30,7);
  uVar5 = *unaff_x20;
  uVar7 = unaff_x20[3];
  uVar6 = unaff_x20[2];
  uVar2 = unaff_x20[2];
  uVar4 = *unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  *(undefined8 *)(puVar1 + 0x28) = uVar7;
  *(undefined8 *)(puVar1 + 0x20) = uVar6;
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  FUN_100002f94(&DAT_10054b570,&DAT_100433140);
  FUN_1000087a0(&DAT_10054b568,&DAT_10054b570,&DAT_100433140,
                PTR_SwiftUI__SwiftUI__Label<undefined,undefined>_>SwiftUI__View_100523358);
  SwiftUI::Button::_init();
  _swift_bridgeObjectRelease(in_x3);
  _swift_bridgeObjectRelease(uVar3);
  return;
}

