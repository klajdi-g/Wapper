// rea decompile_all
// name: FUN_1000ddc14
// address: 0x1000ddc14
// body: available
// range: 0x1000ddc14-0x1000de083 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ddc14(undefined8 *param_1,CGFloat param_2,long *param_3,undefined8 param_4,uint param_5
                  ,Color param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  Design DVar3;
  StringInterpolation SVar4;
  LocalizedStringKey LVar5;
  Text TVar6;
  undefined7 extraout_var;
  Font FVar7;
  Text TVar8;
  Color CVar9;
  Color CVar10;
  Text TVar11;
  Text TVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  ulong uVar20;
  long extraout_x8;
  long extraout_x8_00;
  long lVar21;
  CGFloat size;
  StringInterpolation stringInterpolation;
  String stringLiteral;
  undefined8 uStack_c0;
  undefined2 auStack_b8 [4];
  long local_b0;
  undefined *local_a8;
  code *local_a0;
  long lStack_98;
  undefined *local_90;
  undefined *local_88;
  undefined *puStack_80;
  long *local_78;
  undefined8 *local_70;
  undefined *local_68;
  undefined *puVar12;
  
  local_78 = param_3;
  local_70 = param_1;
  SVar4 = SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar4.unknown + -8) + 0x40));
  stringInterpolation.unknown =
       (undefined *)((long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar12 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = (long)stringInterpolation.unknown - extraout_x8_00;
  stringLiteral.bridgeObject = (void *)0xe700000000000000;
  stringLiteral.str = (char *)0x73746c75736552;
  puVar12 = (undefined *)0xe700000000000000;
  LVar5 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)(lVar21 + -8) = 0x100;
  *(undefined8 *)(lVar21 + -0x10) = 0;
  uVar16 = (ulong)(param_5 & 1);
  TVar6 = SwiftUI::Text::_init(LVar5);
  SwiftUI::Font::Weight::get_semibold((Weight)TVar6.unknown);
  DVar3 = SwiftUI::Font::Design::typeMetadataAccessor();
  lStack_98 = CONCAT71(extraout_var,DVar3.value);
  local_a0 = *(code **)(*(long *)(lStack_98 + -8) + 0x38);
  (*local_a0)(lVar21,1,1,lStack_98);
  local_b0 = lVar21;
  FVar7 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar21,&DAT_10054a828,&DAT_10041e3c0);
  TVar13 = TVar6;
  SVar4.unknown = puVar12;
  uVar20 = uVar16;
  TVar8 = SwiftUI::Text::_font(FVar7.unknown);
  _swift_release(FVar7.unknown);
  FUN_100025b34(TVar6.unknown,puVar12,uVar16);
  _swift_bridgeObjectRelease();
  CVar9 = SwiftUI::Color::get_white(param_6);
  size.unknown = (undefined *)0x3fe6666666666666;
  CVar10 = SwiftUI::Color::opacity(0.7,CVar9);
  _swift_release();
  local_68 = CVar10.unknown;
  FUN_100028d58();
  TVar6 = TVar8;
  puVar17 = TVar13.unknown;
  puVar12 = SVar4.unknown;
  local_a8 = CVar9.unknown;
  puStack_80 = (undefined *)SwiftUI::Text::_foregroundStyle();
  local_90 = TVar6.unknown;
  local_88 = puVar12;
  FUN_100025b34(TVar8.unknown,TVar13.unknown);
  _swift_release(CVar10.unknown);
  _swift_bridgeObjectRelease(uVar20);
  SwiftUI::LocalizedStringKey::StringInterpolation::init(0,1);
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar4);
  local_68 = *(undefined **)(*local_78 + 0x10);
  SVar4.unknown = (undefined *)0xe400000000000000;
  CVar10.unknown = PTR___type_metadata_for_Swift_Int_100523bd8;
  SwiftUI::LocalizedStringKey::StringInterpolation::_appendInterpolation
            (&local_68,0x646c6c25,0xe400000000000000,PTR___type_metadata_for_Swift_Int_100523bd8,
             PTR___protocol_witness_table_for_Swift_Int___SwiftUI__FormatSpecifiable_in_SwiftUI_100523800
            );
  uVar14 = 0xe000000000000000;
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar4);
  uVar15 = (uint)SVar4.unknown;
  LVar5 = SwiftUI::LocalizedStringKey::init(stringInterpolation);
  *(undefined2 *)(lVar21 + -8) = 0x100;
  *(undefined8 *)(lVar21 + -0x10) = 0;
  uVar16 = (ulong)(uVar15 & 1);
  TVar6 = SwiftUI::Text::_init(LVar5);
  SwiftUI::Font::Weight::get_regular((Weight)TVar6.unknown);
  lVar21 = local_b0;
  (*local_a0)(local_b0,1,1,lStack_98);
  FVar7 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(lVar21,&DAT_10054a828,&DAT_10041e3c0);
  TVar13 = TVar6;
  uVar18 = uVar14;
  uVar20 = uVar16;
  TVar8 = SwiftUI::Text::_font(FVar7.unknown);
  _swift_release(FVar7.unknown);
  FUN_100025b34(TVar6.unknown,uVar14,uVar16);
  _swift_bridgeObjectRelease();
  CVar10 = SwiftUI::Color::get_white(CVar10);
  CVar9 = SwiftUI::Color::opacity(0.5,CVar10);
  _swift_release(CVar10.unknown);
  TVar6 = TVar8;
  puVar19 = TVar13.unknown;
  uVar14 = uVar18;
  local_68 = CVar9.unknown;
  TVar11 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar8.unknown,TVar13.unknown,uVar18);
  _swift_release(CVar9.unknown);
  _swift_bridgeObjectRelease(uVar20);
  puVar2 = puStack_80;
  puVar1 = local_88;
  puVar12 = local_90;
  *local_70 = puStack_80;
  local_70[1] = local_90;
  *(char *)(local_70 + 2) = (char)puVar17;
  local_70[3] = local_88;
  local_70[4] = 0;
  *(undefined1 *)(local_70 + 5) = 1;
  local_70[6] = TVar11.unknown;
  local_70[7] = TVar6.unknown;
  *(char *)(local_70 + 8) = (char)puVar19;
  local_70[9] = uVar14;
  FUN_100007b14(puStack_80,local_90,puVar17);
  _swift_bridgeObjectRetain(puVar1);
  FUN_100007b14(TVar11.unknown,TVar6.unknown,puVar19);
  _swift_bridgeObjectRetain(uVar14);
  FUN_100025b34(TVar11.unknown,TVar6.unknown,puVar19);
  _swift_bridgeObjectRelease(uVar14);
  FUN_100025b34(puVar2,puVar12,puVar17);
  _swift_bridgeObjectRelease(puVar1);
  return;
}

