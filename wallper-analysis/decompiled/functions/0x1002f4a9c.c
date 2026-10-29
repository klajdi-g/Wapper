// rea decompile_all
// name: FUN_1002f4a9c
// address: 0x1002f4a9c
// body: available
// range: 0x1002f4a9c-0x1002f4db3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f4a9c(long param_1,long param_2,undefined8 param_3,StringInterpolation param_4,
                  HierarchicalShapeStyle param_5)

{
  undefined8 *puVar1;
  long lVar2;
  StringInterpolation SVar3;
  VerticalAlignment VVar4;
  undefined *puVar5;
  LocalizedStringKey LVar6;
  Text TVar7;
  Font FVar8;
  Text TVar9;
  HierarchicalShapeStyle HVar10;
  Text TVar11;
  undefined8 uVar12;
  Text TVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  ulong uVar18;
  long extraout_x8;
  long extraout_x8_00;
  long lVar19;
  long extraout_x12;
  undefined8 *puVar20;
  String SVar21;
  undefined8 auStack_90 [2];
  long alStack_80 [3];
  undefined4 local_64;
  
  alStack_80[2] = param_1;
  SVar3 = SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar3.unknown + -8) + 0x40));
  SVar3.unknown = (undefined *)((long)alStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  VVar4.unknown = &DAT_10055b440;
  FUN_100002f94(&DAT_10055b440,&DAT_10042fcc0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(VVar4.unknown + -8) + 0x40));
  lVar19 = (long)SVar3.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  alStack_80[1] = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar20 = (undefined8 *)(lVar19 - extraout_x12);
  VVar4 = SwiftUI::VerticalAlignment::get_center(VVar4);
  *puVar20 = VVar4.unknown;
  puVar20[1] = 0x4018000000000000;
  *(undefined1 *)(puVar20 + 2) = 0;
  puVar5 = &DAT_10055b448;
  FUN_100002f94(&DAT_10055b448,&DAT_10042fcc8);
  FUN_1002f4db4((long)puVar20 + (long)*(int *)(puVar5 + 0x2c),param_2);
  SwiftUI::LocalizedStringKey::StringInterpolation::init(5,2);
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),param_4);
  lVar19 = 0;
  FUN_1002f58e8();
  SwiftUI::LocalizedStringKey::StringInterpolation::appendInterpolation
            (*(String *)(param_2 + *(int *)(lVar19 + 0x24)),param_4);
  SVar21.bridgeObject = (void *)0xa500000000000000;
  SVar21.str = (char *)0x209380e220;
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar21,param_4);
  SwiftUI::LocalizedStringKey::StringInterpolation::appendInterpolation
            (*(String *)(param_2 + *(int *)(lVar19 + 0x20)),param_4);
  uVar12 = 0xe000000000000000;
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),param_4);
  uVar14 = (uint)param_4.unknown;
  LVar6 = SwiftUI::LocalizedStringKey::init(SVar3);
  *(undefined2 *)(puVar20 + -1) = 0x100;
  puVar20[-2] = 0;
  uVar15 = (ulong)(uVar14 & 1);
  TVar7 = SwiftUI::Text::_init(LVar6);
  FVar8 = SwiftUI::Font::get_subheadline(TVar7.unknown);
  TVar13 = TVar7;
  uVar16 = uVar12;
  uVar18 = uVar15;
  TVar9 = SwiftUI::Text::_font(FVar8.unknown);
  _swift_release(FVar8.unknown);
  FUN_100025b34(TVar7.unknown,uVar12,uVar15);
  _swift_bridgeObjectRelease();
  HVar10 = SwiftUI::HierarchicalShapeStyle::get_secondary(param_5);
  local_64 = SUB84(HVar10.unknown,0);
  FUN_100025b4c();
  TVar7 = TVar9;
  puVar17 = TVar13.unknown;
  uVar12 = uVar16;
  TVar11 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar9.unknown,TVar13.unknown,uVar16);
  _swift_bridgeObjectRelease(uVar18);
  lVar19 = alStack_80[1];
  FUN_1000087e4(puVar20,alStack_80[1],&DAT_10055b440,&DAT_10042fcc0);
  lVar2 = alStack_80[2];
  FUN_1000087e4(lVar19,alStack_80[2],&DAT_10055b440,&DAT_10042fcc0);
  puVar5 = &DAT_10055b450;
  FUN_100002f94(&DAT_10055b450,&DAT_10042fcd0);
  puVar1 = (undefined8 *)(lVar2 + *(int *)(puVar5 + 0x30));
  *puVar1 = TVar11.unknown;
  puVar1[1] = TVar7.unknown;
  *(char *)(puVar1 + 2) = (char)puVar17;
  puVar1[3] = uVar12;
  FUN_100007b14(TVar11.unknown,TVar7.unknown,puVar17);
  _swift_bridgeObjectRetain(uVar12);
  FUN_10002a29c(puVar20,&DAT_10055b440,&DAT_10042fcc0);
  FUN_100025b34(TVar11.unknown,TVar7.unknown,puVar17);
  _swift_bridgeObjectRelease(uVar12);
  FUN_10002a29c(lVar19,&DAT_10055b440,&DAT_10042fcc0);
  return;
}

