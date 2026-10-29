// rea decompile_all
// name: FUN_1002e8568
// address: 0x1002e8568
// body: available
// range: 0x1002e8568-0x1002e86af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002e8568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  VerticalAlignment VVar2;
  undefined *puVar3;
  LocalizedStringKey LVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined8 *puVar6;
  String stringLiteral;
  
  VVar2.unknown = &DAT_10055a860;
  FUN_100002f94(&DAT_10055a860,&DAT_10042f230);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(VVar2.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  puVar6 = (undefined8 *)(&stack0xffffffffffffffa0 + lVar1);
  VVar2 = SwiftUI::VerticalAlignment::get_center(VVar2);
  *puVar6 = VVar2.unknown;
  *(undefined8 *)(&stack0xffffffffffffffa8 + lVar1) = 0;
  (&stack0xffffffffffffffb0)[lVar1] = 1;
  puVar3 = &DAT_10055a888;
  FUN_100002f94(&DAT_10055a888,&DAT_10042ea28);
  FUN_1002e86b0((undefined1 *)((long)puVar6 + (long)*(int *)(puVar3 + 0x2c)),param_1);
  uVar5 = 0x80000001004e5500;
  stringLiteral.bridgeObject = (void *)0x80000001004e5500;
  stringLiteral.str = (char *)0xd00000000000006a;
  LVar4 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  FUN_1000087a0(&DAT_10055a890,&DAT_10055a860,&DAT_10042f230,
                PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_1005233f8);
  (extension_SwiftUI)::SwiftUI::View::_help(LVar4);
  _swift_bridgeObjectRelease(param_4);
  _swift_bridgeObjectRelease(uVar5);
  FUN_10002a29c(puVar6,&DAT_10055a860,&DAT_10042f230);
  return;
}

