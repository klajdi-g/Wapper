// rea decompile_all
// name: FUN_1003c4334
// address: 0x1003c4334
// body: available
// range: 0x1003c4334-0x1003c478f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c4334(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  Color param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  Design DVar5;
  undefined *puVar6;
  StringInterpolation size;
  Text TVar7;
  Font FVar8;
  Text TVar9;
  Color CVar10;
  long lVar11;
  LocalizedStringKey LVar12;
  undefined7 extraout_var;
  Color CVar13;
  Text TVar14;
  Text TVar15;
  undefined8 uVar16;
  uint uVar17;
  StringInterpolation SVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  CGFloat CVar22;
  ulong uVar23;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar24;
  StringInterpolation stringInterpolation;
  CGFloat size_00;
  String SVar25;
  String SVar26;
  undefined8 uStack_d0;
  undefined2 auStack_c8 [4];
  undefined1 auStack_c0 [8];
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_9c;
  undefined *local_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined1 *local_80;
  undefined8 *local_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  puVar6 = &DAT_10054a828;
  local_b0 = param_3;
  uStack_a8 = param_4;
  local_78 = param_1;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80 = auStack_c0 + -extraout_x8;
  size = SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(size.unknown + -8) + 0x40));
  stringInterpolation.unknown =
       auStack_c0 + -extraout_x8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_70 = (undefined *)*param_2;
  uVar20 = param_2[1];
  local_b8 = param_2;
  uStack_68 = uVar20;
  FUN_100026df4();
  _swift_bridgeObjectRetain(uVar20);
  puVar6 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar7 = SwiftUI::Text::_init();
  size_00.unknown = (undefined *)0x4045000000000000;
  SVar25.bridgeObject = (void *)0xe700000000000000;
  SVar25.str = (char *)0x616967726f6547;
  FVar8 = SwiftUI::Font::custom(SVar25,size.unknown,param_5.unknown);
  TVar15 = TVar7;
  SVar18.unknown = puVar6;
  CVar22.unknown = size.unknown;
  TVar9 = SwiftUI::Text::_font(FVar8.unknown);
  _swift_release(FVar8.unknown);
  FUN_100025b34(TVar7.unknown,puVar6,size.unknown);
  _swift_bridgeObjectRelease();
  CVar10 = SwiftUI::Color::get_white(param_5);
  local_70 = CVar10.unknown;
  FUN_100028d58();
  TVar7 = TVar9;
  puVar6 = TVar15.unknown;
  puVar24 = SVar18.unknown;
  puStack_88 = (undefined *)SwiftUI::Text::_foregroundStyle();
  local_9c = SUB84(puVar6,0);
  local_98 = TVar7.unknown;
  local_90 = puVar24;
  FUN_100025b34(TVar9.unknown,TVar15.unknown);
  _swift_release(CVar10.unknown);
  _swift_bridgeObjectRelease(CVar22.unknown);
  puVar6 = &DAT_1004360d0;
  _swift_getKeyPath();
  SwiftUI::LocalizedStringKey::StringInterpolation::init(0xb,1);
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar18);
  lVar11 = 0;
  FUN_1003cff30(0,local_b0,uStack_a8);
  FUN_1003bce9c();
  puVar24 = *(undefined **)(lVar11 + 0x10);
  _swift_bridgeObjectRelease();
  SVar18.unknown = (undefined *)0xe400000000000000;
  CVar10.unknown = PTR___type_metadata_for_Swift_Int_100523bd8;
  local_70 = puVar24;
  SwiftUI::LocalizedStringKey::StringInterpolation::_appendInterpolation
            (&local_70,0x646c6c25,0xe400000000000000,PTR___type_metadata_for_Swift_Int_100523bd8,
             PTR___protocol_witness_table_for_Swift_Int___SwiftUI__FormatSpecifiable_in_SwiftUI_100523800
            );
  uVar16 = 0xeb00000000737265;
  SVar26.bridgeObject = (void *)0xeb00000000737265;
  SVar26.str = (char *)0x7061706c6c617720;
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar26,SVar18);
  uVar17 = (uint)SVar18.unknown;
  LVar12 = SwiftUI::LocalizedStringKey::init(stringInterpolation);
  *(undefined2 *)(stringInterpolation.unknown + -8) = 0x100;
  *(undefined8 *)(stringInterpolation.unknown + -0x10) = 0;
  uVar19 = (ulong)(uVar17 & 1);
  TVar7 = SwiftUI::Text::_init(LVar12);
  SwiftUI::Font::Weight::get_regular((Weight)TVar7.unknown);
  DVar5 = SwiftUI::Font::Design::typeMetadataAccessor();
  puVar4 = local_80;
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar5.value) + -8) + 0x38))
            (local_80,1,1,CONCAT71(extraout_var,DVar5.value));
  FVar8 = SwiftUI::Font::_system(size_00,(Font)0x0);
  FUN_10002a29c(puVar4,&DAT_10054a828,&DAT_10041e3c0);
  TVar15 = TVar7;
  uVar20 = uVar16;
  uVar23 = uVar19;
  TVar9 = SwiftUI::Text::_font(FVar8.unknown);
  _swift_release(FVar8.unknown);
  FUN_100025b34(TVar7.unknown,uVar16,uVar19);
  _swift_bridgeObjectRelease();
  CVar10 = SwiftUI::Color::get_white(CVar10);
  CVar13 = SwiftUI::Color::opacity(0.6,CVar10);
  _swift_release(CVar10.unknown);
  TVar7 = TVar9;
  puVar21 = TVar15.unknown;
  uVar16 = uVar20;
  TVar14 = SwiftUI::Text::_foregroundColor(CVar13.unknown);
  _swift_release(CVar13.unknown);
  FUN_100025b34(TVar9.unknown,TVar15.unknown,uVar20);
  _swift_bridgeObjectRelease(uVar23);
  puVar3 = puStack_88;
  puVar2 = local_90;
  puVar24 = local_98;
  uVar1 = local_9c;
  *local_78 = puStack_88;
  local_78[1] = local_98;
  *(char *)(local_78 + 2) = (char)local_9c;
  local_78[3] = local_90;
  local_78[4] = puVar6;
  local_78[5] = 2;
  *(undefined1 *)(local_78 + 6) = 0;
  local_78[7] = TVar14.unknown;
  local_78[8] = TVar7.unknown;
  *(char *)(local_78 + 9) = (char)puVar21;
  local_78[10] = uVar16;
  FUN_100007b14(puStack_88,local_98,local_9c);
  _swift_bridgeObjectRetain(puVar2);
  _swift_retain(puVar6);
  FUN_100007b14(TVar14.unknown,TVar7.unknown,puVar21);
  _swift_bridgeObjectRetain(uVar16);
  FUN_100025b34(TVar14.unknown,TVar7.unknown,puVar21);
  _swift_bridgeObjectRelease(uVar16);
  FUN_100025b34(puVar3,puVar24,uVar1);
  _swift_release(puVar6);
  _swift_bridgeObjectRelease(puVar2);
  return;
}

