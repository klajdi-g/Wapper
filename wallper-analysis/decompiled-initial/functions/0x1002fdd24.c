// rea decompile_all
// name: FUN_1002fdd24
// address: 0x1002fdd24
// body: available
// range: 0x1002fdd24-0x1002fe0c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002fdd24(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  Color param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  Design DVar5;
  undefined *puVar6;
  LocalizedStringKey LVar7;
  Text TVar8;
  Font FVar9;
  Text TVar10;
  Color CVar11;
  undefined7 extraout_var;
  Color CVar12;
  Color CVar13;
  Text TVar14;
  undefined *puVar15;
  Text TVar16;
  undefined8 uVar17;
  uint uVar18;
  CGFloat size;
  ulong uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  CGFloat CVar22;
  ulong uVar23;
  long extraout_x8;
  String stringLiteral;
  String SVar24;
  String stringLiteral_00;
  undefined8 uStack_b0;
  undefined2 auStack_a8 [4];
  undefined1 auStack_a0 [8];
  undefined *local_98;
  undefined1 *local_90;
  undefined4 local_84;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *local_68;
  
  puVar6 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  local_90 = auStack_a0 + lVar1;
  puVar15 = (undefined *)0xeb000000006f6564;
  stringLiteral.bridgeObject = (void *)0xeb000000006f6564;
  stringLiteral.str = (char *)0x6976206120646441;
  LVar7 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)((long)auStack_a8 + lVar1) = 0x100;
  *(undefined8 *)((long)&uStack_b0 + lVar1) = 0;
  size.unknown = (undefined *)(ulong)(param_4 & 1);
  TVar8 = SwiftUI::Text::_init(LVar7);
  SVar24.bridgeObject = (void *)0xe700000000000000;
  SVar24.str = (char *)0x616967726f6547;
  FVar9 = SwiftUI::Font::custom(SVar24,size,param_5.unknown);
  TVar16 = TVar8;
  puVar6 = puVar15;
  CVar22.unknown = size.unknown;
  TVar10 = SwiftUI::Text::_font(FVar9.unknown);
  _swift_release(FVar9.unknown);
  FUN_100025b34(TVar8.unknown,puVar15,size.unknown);
  _swift_bridgeObjectRelease();
  CVar11 = SwiftUI::Color::get_white(param_5);
  CVar12 = CVar11;
  local_68 = CVar11.unknown;
  FUN_100028d58();
  TVar8 = TVar10;
  puVar15 = TVar16.unknown;
  CVar13.unknown = puVar6;
  local_98 = CVar12.unknown;
  puStack_78 = (undefined *)SwiftUI::Text::_foregroundStyle();
  local_84 = SUB84(puVar15,0);
  local_80 = TVar8.unknown;
  local_70 = CVar13.unknown;
  FUN_100025b34(TVar10.unknown,TVar16.unknown,puVar6);
  uVar18 = (uint)puVar6;
  _swift_release(CVar11.unknown);
  _swift_bridgeObjectRelease(CVar22.unknown);
  uVar17 = 0x80000001004e5fc0;
  stringLiteral_00.bridgeObject = (void *)0x80000001004e5fc0;
  stringLiteral_00.str = (char *)0xd00000000000001b;
  LVar7 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  *(undefined2 *)((long)auStack_a8 + lVar1) = 0x100;
  *(undefined8 *)((long)&uStack_b0 + lVar1) = 0;
  uVar19 = (ulong)(uVar18 & 1);
  TVar8 = SwiftUI::Text::_init(LVar7);
  DVar5 = SwiftUI::Font::Design::typeMetadataAccessor();
  puVar2 = local_90;
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar5.value) + -8) + 0x38))
            (local_90,1,1,CONCAT71(extraout_var,DVar5.value));
  FVar9 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
  FUN_10002a29c(puVar2,&DAT_10054a828,&DAT_10041e3c0);
  TVar16 = TVar8;
  uVar20 = uVar17;
  uVar23 = uVar19;
  TVar10 = SwiftUI::Text::_font(FVar9.unknown);
  _swift_release(FVar9.unknown);
  FUN_100025b34(TVar8.unknown,uVar17,uVar19);
  _swift_bridgeObjectRelease();
  CVar12 = SwiftUI::Color::get_white(CVar13);
  CVar13 = SwiftUI::Color::opacity(0.6,CVar12);
  _swift_release(CVar12.unknown);
  TVar8 = TVar10;
  puVar21 = TVar16.unknown;
  uVar17 = uVar20;
  local_68 = CVar13.unknown;
  TVar14 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar10.unknown,TVar16.unknown,uVar20);
  _swift_release(CVar13.unknown);
  _swift_bridgeObjectRelease(uVar23);
  puVar4 = local_70;
  puVar15 = puStack_78;
  puVar6 = local_80;
  uVar3 = local_84;
  *param_1 = puStack_78;
  param_1[1] = local_80;
  *(char *)(param_1 + 2) = (char)local_84;
  param_1[3] = local_70;
  param_1[4] = TVar14.unknown;
  param_1[5] = TVar8.unknown;
  *(char *)(param_1 + 6) = (char)puVar21;
  param_1[7] = uVar17;
  FUN_100007b14(puStack_78,local_80,local_84);
  _swift_bridgeObjectRetain(puVar4);
  FUN_100007b14(TVar14.unknown,TVar8.unknown,puVar21);
  _swift_bridgeObjectRetain(uVar17);
  FUN_100025b34(TVar14.unknown,TVar8.unknown,puVar21);
  _swift_bridgeObjectRelease(uVar17);
  FUN_100025b34(puVar15,puVar6,uVar3);
  _swift_bridgeObjectRelease(puVar4);
  return;
}

