// rea decompile_all
// name: FUN_100032ad0
// address: 0x100032ad0
// body: available
// range: 0x100032ad0-0x100032ceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100032ad0(undefined8 *param_1,CGFloat param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,uint param_8,
                  Color param_9)

{
  long lVar1;
  Design DVar2;
  LocalizedStringKey LVar3;
  Text TVar4;
  undefined7 extraout_var;
  Font FVar5;
  Text TVar6;
  Color CVar7;
  Color CVar8;
  Text TVar9;
  Set SVar10;
  Text TVar12;
  undefined *puVar13;
  long extraout_x8;
  undefined8 uVar14;
  String stringLiteral;
  undefined8 uStack_80;
  undefined2 auStack_78 [4];
  undefined1 auStack_70 [8];
  undefined *local_68;
  undefined8 uVar11;
  
  puVar13 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  stringLiteral.bridgeObject = (void *)0xa300000000000000;
  stringLiteral.str = (char *)0xa280e2;
  uVar11 = 0xa300000000000000;
  LVar3 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)((long)auStack_78 + lVar1) = 0x100;
  *(undefined8 *)((long)&uStack_80 + lVar1) = 0;
  puVar13 = (undefined *)(ulong)(param_8 & 1);
  TVar4 = SwiftUI::Text::_init(LVar3);
  SwiftUI::Font::Weight::get_medium((Weight)TVar4.unknown);
  DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar2.value) + -8) + 0x38))
            (auStack_70 + lVar1,1,1,CONCAT71(extraout_var,DVar2.value));
  FVar5 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(auStack_70 + lVar1,&DAT_10054a828,&DAT_10041e3c0);
  TVar12 = TVar4;
  uVar14 = uVar11;
  SVar10.unknown = puVar13;
  TVar6 = SwiftUI::Text::_font(FVar5.unknown);
  _swift_release(FVar5.unknown);
  FUN_100025b34(TVar4.unknown,uVar11,puVar13);
  _swift_bridgeObjectRelease();
  CVar7 = SwiftUI::Color::get_white(param_9);
  CVar8 = SwiftUI::Color::opacity(0.35,CVar7);
  _swift_release(CVar7.unknown);
  local_68 = CVar8.unknown;
  FUN_100028d58();
  TVar4 = TVar6;
  puVar13 = TVar12.unknown;
  uVar11 = uVar14;
  TVar9 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar6.unknown,TVar12.unknown,uVar14);
  _swift_release(CVar8.unknown);
  _swift_bridgeObjectRelease();
  SVar10 = SwiftUI::Edge::Set::get_horizontal(SVar10);
  uVar14 = 0x4010000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar10.unknown);
  *(char *)(param_1 + 4) = (char)SVar10.unknown;
  param_1[5] = uVar14;
  param_1[6] = param_3;
  param_1[7] = param_4;
  param_1[8] = param_5;
  *(undefined1 *)(param_1 + 9) = 0;
  *param_1 = TVar9.unknown;
  param_1[1] = TVar4.unknown;
  *(char *)(param_1 + 2) = (char)puVar13;
  param_1[3] = uVar11;
  return;
}

