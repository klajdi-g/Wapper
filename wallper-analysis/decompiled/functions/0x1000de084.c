// rea decompile_all
// name: FUN_1000de084
// address: 0x1000de084
// body: available
// range: 0x1000de084-0x1000de473 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000de084(undefined8 *param_1,CGFloat param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,Color param_6)

{
  long lVar1;
  undefined *puVar2;
  Design DVar3;
  undefined *puVar4;
  LocalizedStringKey LVar5;
  Text TVar6;
  undefined7 extraout_var;
  Font FVar7;
  Text TVar8;
  Color CVar9;
  Color CVar10;
  Color CVar11;
  Text TVar12;
  undefined *puVar13;
  Text TVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  ulong uVar21;
  long extraout_x8;
  CGFloat size;
  long lVar22;
  String stringLiteral;
  String stringLiteral_00;
  undefined8 uStack_b0;
  undefined2 auStack_a8 [4];
  undefined *local_a0;
  code *local_98;
  long lStack_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined8 *local_70;
  undefined *local_68;
  
  puVar4 = &DAT_10054a828;
  local_70 = param_1;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  lVar22 = (long)&local_a0 + lVar1;
  puVar13 = (undefined *)0x80000001004dd550;
  stringLiteral.bridgeObject = (void *)0x80000001004dd550;
  stringLiteral.str = (char *)0xd000000000000013;
  LVar5 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)((long)auStack_a8 + lVar1) = 0x100;
  *(undefined8 *)((long)&uStack_b0 + lVar1) = 0;
  uVar17 = (ulong)(param_5 & 1);
  TVar6 = SwiftUI::Text::_init(LVar5);
  SwiftUI::Font::Weight::get_medium((Weight)TVar6.unknown);
  DVar3 = SwiftUI::Font::Design::typeMetadataAccessor();
  lStack_90 = CONCAT71(extraout_var,DVar3.value);
  local_98 = *(code **)(*(long *)(lStack_90 + -8) + 0x38);
  (*local_98)(lVar22,1,1,lStack_90);
  FVar7 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar22,&DAT_10054a828,&DAT_10041e3c0);
  TVar14 = TVar6;
  puVar4 = puVar13;
  uVar21 = uVar17;
  TVar8 = SwiftUI::Text::_font(FVar7.unknown);
  _swift_release(FVar7.unknown);
  FUN_100025b34(TVar6.unknown,puVar13,uVar17);
  _swift_bridgeObjectRelease();
  CVar9 = SwiftUI::Color::get_white(param_6);
  size.unknown = (undefined *)0x3fe999999999999a;
  CVar10 = SwiftUI::Color::opacity(0.8,CVar9);
  _swift_release();
  local_68 = CVar10.unknown;
  FUN_100028d58();
  TVar6 = TVar8;
  puVar18 = TVar14.unknown;
  CVar11.unknown = puVar4;
  local_a0 = CVar9.unknown;
  local_78 = (undefined *)SwiftUI::Text::_foregroundStyle();
  local_88 = TVar6.unknown;
  local_80 = CVar11.unknown;
  FUN_100025b34(TVar8.unknown,TVar14.unknown,puVar4);
  uVar16 = (uint)puVar4;
  _swift_release(CVar10.unknown);
  _swift_bridgeObjectRelease(uVar21);
  uVar15 = 0x80000001004dd570;
  stringLiteral_00.bridgeObject = (void *)0x80000001004dd570;
  stringLiteral_00.str = (char *)0xd000000000000024;
  LVar5 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  *(undefined2 *)((long)auStack_a8 + lVar1) = 0x100;
  *(undefined8 *)((long)&uStack_b0 + lVar1) = 0;
  uVar17 = (ulong)(uVar16 & 1);
  TVar6 = SwiftUI::Text::_init(LVar5);
  SwiftUI::Font::Weight::get_regular((Weight)TVar6.unknown);
  (*local_98)(lVar22,1,1,lStack_90);
  FVar7 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(lVar22,&DAT_10054a828,&DAT_10041e3c0);
  TVar14 = TVar6;
  uVar19 = uVar15;
  uVar21 = uVar17;
  TVar8 = SwiftUI::Text::_font(FVar7.unknown);
  _swift_release(FVar7.unknown);
  FUN_100025b34(TVar6.unknown,uVar15,uVar17);
  _swift_bridgeObjectRelease();
  CVar11 = SwiftUI::Color::get_white(CVar11);
  CVar10 = SwiftUI::Color::opacity(0.6,CVar11);
  _swift_release(CVar11.unknown);
  TVar6 = TVar8;
  puVar20 = TVar14.unknown;
  uVar15 = uVar19;
  local_68 = CVar10.unknown;
  TVar12 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar8.unknown,TVar14.unknown,uVar19);
  _swift_release(CVar10.unknown);
  _swift_bridgeObjectRelease(uVar21);
  puVar2 = local_78;
  puVar13 = local_80;
  puVar4 = local_88;
  *local_70 = local_78;
  local_70[1] = local_88;
  *(char *)(local_70 + 2) = (char)puVar18;
  local_70[3] = local_80;
  local_70[4] = TVar12.unknown;
  local_70[5] = TVar6.unknown;
  *(char *)(local_70 + 6) = (char)puVar20;
  local_70[7] = uVar15;
  FUN_100007b14(local_78,local_88,puVar18);
  _swift_bridgeObjectRetain(puVar13);
  FUN_100007b14(TVar12.unknown,TVar6.unknown,puVar20);
  _swift_bridgeObjectRetain(uVar15);
  FUN_100025b34(TVar12.unknown,TVar6.unknown,puVar20);
  _swift_bridgeObjectRelease(uVar15);
  FUN_100025b34(puVar2,puVar4,puVar18);
  _swift_bridgeObjectRelease(puVar13);
  return;
}

