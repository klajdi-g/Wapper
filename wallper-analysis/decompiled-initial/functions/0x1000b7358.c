// rea decompile_all
// name: FUN_1000b7358
// address: 0x1000b7358
// body: available
// range: 0x1000b7358-0x1000b74e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b7358(undefined8 *param_1,CGFloat param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,undefined8 param_6)

{
  long lVar1;
  Design DVar2;
  undefined *puVar3;
  LocalizedStringKey LVar4;
  Text TVar5;
  undefined7 extraout_var;
  Font FVar6;
  Text TVar7;
  undefined8 uVar8;
  Text TVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long extraout_x8;
  String stringLiteral;
  undefined8 uStack_70;
  undefined2 auStack_68 [4];
  
  puVar3 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  uVar8 = 0xed00006c6169726f;
  stringLiteral.bridgeObject = (void *)0xed00006c6169726f;
  stringLiteral.str = (char *)0x7475742070696b53;
  LVar4 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)((long)auStack_68 + lVar1) = 0x100;
  *(undefined8 *)((long)&uStack_70 + lVar1) = 0;
  uVar10 = (ulong)(param_5 & 1);
  TVar5 = SwiftUI::Text::_init(LVar4);
  SwiftUI::Font::Weight::get_medium((Weight)TVar5.unknown);
  DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar2.value) + -8) + 0x38))
            (&stack0xffffffffffffffa0 + lVar1,1,1,CONCAT71(extraout_var,DVar2.value));
  FVar6 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(&stack0xffffffffffffffa0 + lVar1,&DAT_10054a828,&DAT_10041e3c0);
  TVar9 = TVar5;
  uVar11 = uVar8;
  uVar12 = uVar10;
  TVar7 = SwiftUI::Text::_font(FVar6.unknown);
  _swift_release(FVar6.unknown);
  FUN_100025b34(TVar5.unknown,uVar8,uVar10);
  _swift_bridgeObjectRelease(param_6);
  *param_1 = TVar7.unknown;
  param_1[1] = TVar9.unknown;
  *(char *)(param_1 + 2) = (char)uVar11;
  param_1[3] = uVar12;
  return;
}

