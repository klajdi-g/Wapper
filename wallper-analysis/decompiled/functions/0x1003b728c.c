// rea decompile_all
// name: FUN_1003b728c
// address: 0x1003b728c
// body: available
// range: 0x1003b728c-0x1003b7657 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b728c(undefined8 *param_1,CGFloat param_2,undefined8 param_3,undefined8 param_4,
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
  Text TVar11;
  undefined *puVar12;
  Text TVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  ulong uVar20;
  long extraout_x8;
  long lVar21;
  String stringLiteral;
  String stringLiteral_00;
  undefined8 uStack_a0;
  undefined2 auStack_98 [4];
  code *local_90;
  long lStack_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined8 *local_68;
  
  puVar4 = &DAT_10054a828;
  local_68 = param_1;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  lVar21 = (long)&local_90 + lVar1;
  puVar12 = (undefined *)0x80000001004e6ed0;
  stringLiteral.bridgeObject = (void *)0x80000001004e6ed0;
  stringLiteral.str = (char *)0xd00000000000001a;
  LVar5 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)((long)auStack_98 + lVar1) = 0x100;
  *(undefined8 *)((long)&uStack_a0 + lVar1) = 0;
  uVar16 = (ulong)(param_5 & 1);
  TVar6 = SwiftUI::Text::_init(LVar5);
  SwiftUI::Font::Weight::get_semibold((Weight)TVar6.unknown);
  DVar3 = SwiftUI::Font::Design::typeMetadataAccessor();
  lStack_88 = CONCAT71(extraout_var,DVar3.value);
  local_90 = *(code **)(*(long *)(lStack_88 + -8) + 0x38);
  (*local_90)(lVar21,1,1,lStack_88);
  FVar7 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar21,&DAT_10054a828,&DAT_10041e3c0);
  TVar13 = TVar6;
  puVar4 = puVar12;
  uVar20 = uVar16;
  TVar8 = SwiftUI::Text::_font(FVar7.unknown);
  _swift_release(FVar7.unknown);
  FUN_100025b34(TVar6.unknown,puVar12,uVar16);
  _swift_bridgeObjectRelease();
  CVar9 = SwiftUI::Color::get_white(param_6);
  CVar10 = SwiftUI::Color::opacity(0.6,CVar9);
  _swift_release(CVar9.unknown);
  TVar6 = TVar8;
  puVar17 = TVar13.unknown;
  CVar9.unknown = puVar4;
  local_70 = (undefined *)SwiftUI::Text::_foregroundColor(CVar10.unknown);
  local_80 = TVar6.unknown;
  local_78 = CVar9.unknown;
  _swift_release(CVar10.unknown);
  FUN_100025b34(TVar8.unknown,TVar13.unknown,puVar4);
  uVar15 = (uint)puVar4;
  _swift_bridgeObjectRelease(uVar20);
  uVar14 = 0x80000001004e6ef0;
  stringLiteral_00.bridgeObject = (void *)0x80000001004e6ef0;
  stringLiteral_00.str = (char *)0xd000000000000083;
  LVar5 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  *(undefined2 *)((long)auStack_98 + lVar1) = 0x100;
  *(undefined8 *)((long)&uStack_a0 + lVar1) = 0;
  uVar16 = (ulong)(uVar15 & 1);
  TVar6 = SwiftUI::Text::_init(LVar5);
  (*local_90)(lVar21,1,1,lStack_88);
  FVar7 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
  FUN_10002a29c(lVar21,&DAT_10054a828,&DAT_10041e3c0);
  TVar13 = TVar6;
  uVar18 = uVar14;
  uVar20 = uVar16;
  TVar8 = SwiftUI::Text::_font(FVar7.unknown);
  _swift_release(FVar7.unknown);
  FUN_100025b34(TVar6.unknown,uVar14,uVar16);
  _swift_bridgeObjectRelease();
  CVar9 = SwiftUI::Color::get_white(CVar9);
  CVar10 = SwiftUI::Color::opacity(0.72,CVar9);
  _swift_release(CVar9.unknown);
  TVar6 = TVar8;
  puVar19 = TVar13.unknown;
  uVar14 = uVar18;
  TVar11 = SwiftUI::Text::_foregroundColor(CVar10.unknown);
  _swift_release(CVar10.unknown);
  FUN_100025b34(TVar8.unknown,TVar13.unknown,uVar18);
  _swift_bridgeObjectRelease(uVar20);
  puVar2 = local_70;
  puVar12 = local_78;
  puVar4 = local_80;
  *local_68 = local_70;
  local_68[1] = local_80;
  *(char *)(local_68 + 2) = (char)puVar17;
  local_68[3] = local_78;
  local_68[4] = TVar11.unknown;
  local_68[5] = TVar6.unknown;
  *(char *)(local_68 + 6) = (char)puVar19;
  local_68[7] = uVar14;
  *(undefined2 *)(local_68 + 8) = 0x100;
  FUN_100007b14(local_70,local_80,puVar17);
  _swift_bridgeObjectRetain(puVar12);
  FUN_100007b14(TVar11.unknown,TVar6.unknown,puVar19);
  _swift_bridgeObjectRetain(uVar14);
  FUN_100025b34(TVar11.unknown,TVar6.unknown,puVar19);
  _swift_bridgeObjectRelease(uVar14);
  FUN_100025b34(puVar2,puVar4,puVar17);
  _swift_bridgeObjectRelease(puVar12);
  return;
}

