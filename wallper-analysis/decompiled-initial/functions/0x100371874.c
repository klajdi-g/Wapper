// rea decompile_all
// name: FUN_100371874
// address: 0x100371874
// body: available
// range: 0x100371874-0x100371b7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100371874(undefined8 *param_1,CGFloat param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  Design DVar5;
  undefined7 extraout_var;
  Color CVar7;
  LocalizedStringKey LVar8;
  Text TVar9;
  Font FVar10;
  Text TVar11;
  Color CVar12;
  Text TVar13;
  Text TVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  ulong uVar20;
  long extraout_x8;
  code *pcVar21;
  undefined1 *puVar22;
  CGFloat size;
  String systemName;
  String stringLiteral;
  undefined8 uStack_a0;
  undefined2 auStack_98 [4];
  undefined1 auStack_90 [8];
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *puVar6;
  undefined8 uVar14;
  
  puVar6 = &DAT_10054a828;
  uVar16 = 0;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  puVar22 = auStack_90 + lVar1;
  systemName.bridgeObject = (void *)0xe400000000000000;
  systemName.str = (char *)0x73756c70;
  local_70 = (undefined *)SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_light((Weight)local_70);
  DVar5 = SwiftUI::Font::Design::typeMetadataAccessor();
  puVar6 = (undefined *)CONCAT71(extraout_var,DVar5.value);
  pcVar21 = *(code **)(*(long *)(puVar6 + -8) + 0x38);
  CVar12.unknown = puVar6;
  (*pcVar21)(puVar22,1,1);
  local_78 = (undefined *)SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(puVar22,&DAT_10054a828,&DAT_10041e3c0);
  CVar7.unknown = &DAT_100432f88;
  _swift_getKeyPath();
  local_80 = CVar7.unknown;
  CVar7 = SwiftUI::Color::get_white(CVar7);
  size.unknown = (undefined *)0x3fe0000000000000;
  local_88 = (undefined *)SwiftUI::Color::opacity(0.5,CVar7);
  _swift_release(CVar7.unknown);
  stringLiteral.bridgeObject = (void *)0xe800000000000000;
  stringLiteral.str = (char *)0x656d695420646441;
  uVar14 = 0xe800000000000000;
  LVar8 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)((long)auStack_98 + lVar1) = 0x100;
  *(undefined8 *)((long)&uStack_a0 + lVar1) = 0;
  uVar17 = (ulong)(uVar16 & 1);
  TVar9 = SwiftUI::Text::_init(LVar8);
  SwiftUI::Font::Weight::get_medium((Weight)TVar9.unknown);
  (*pcVar21)(puVar22,1,1,puVar6);
  FVar10 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(puVar22,&DAT_10054a828,&DAT_10041e3c0);
  TVar15 = TVar9;
  uVar18 = uVar14;
  uVar20 = uVar17;
  TVar11 = SwiftUI::Text::_font(FVar10.unknown);
  _swift_release(FVar10.unknown);
  FUN_100025b34(TVar9.unknown,uVar14,uVar17);
  _swift_bridgeObjectRelease();
  CVar7 = SwiftUI::Color::get_white(CVar12);
  CVar12 = SwiftUI::Color::opacity(0.5,CVar7);
  _swift_release(CVar7.unknown);
  local_68 = CVar12.unknown;
  FUN_100028d58();
  TVar9 = TVar11;
  puVar19 = TVar15.unknown;
  uVar14 = uVar18;
  TVar13 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar11.unknown,TVar15.unknown,uVar18);
  _swift_release(CVar12.unknown);
  _swift_bridgeObjectRelease(uVar20);
  puVar4 = local_70;
  puVar3 = local_78;
  puVar2 = local_80;
  puVar6 = local_88;
  *param_1 = local_70;
  param_1[1] = local_80;
  param_1[2] = local_78;
  param_1[3] = local_88;
  param_1[4] = TVar13.unknown;
  param_1[5] = TVar9.unknown;
  *(char *)(param_1 + 6) = (char)puVar19;
  param_1[7] = uVar14;
  _swift_retain();
  _swift_retain(puVar2);
  _swift_retain(puVar3);
  _swift_retain(puVar6);
  FUN_100007b14(TVar13.unknown,TVar9.unknown,puVar19);
  _swift_bridgeObjectRetain(uVar14);
  FUN_100025b34(TVar13.unknown,TVar9.unknown,puVar19);
  _swift_release(puVar6);
  _swift_release(puVar3);
  _swift_release(puVar2);
  _swift_release(puVar4);
  _swift_bridgeObjectRelease(uVar14);
  return;
}

