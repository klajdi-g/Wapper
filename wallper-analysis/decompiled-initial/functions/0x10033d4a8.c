// rea decompile_all
// name: FUN_10033d4a8
// address: 0x10033d4a8
// body: available
// range: 0x10033d4a8-0x10033d76b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033d4a8(undefined8 *param_1,long param_2,undefined8 param_3,uint param_4,Color param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  LocalizedStringKey LVar5;
  Text TVar6;
  Font FVar7;
  Text TVar8;
  Color CVar9;
  Text TVar10;
  CGFloat CVar11;
  Text TVar13;
  CGFloat size;
  undefined8 uVar14;
  undefined *puVar15;
  long extraout_x8;
  long extraout_x12;
  long lVar16;
  String stringLiteral;
  String SVar17;
  undefined8 uStack_c0;
  undefined2 auStack_b8 [4];
  long local_b0;
  undefined *local_a8;
  long local_a0;
  undefined *local_98 [6];
  undefined8 uStack_68;
  undefined8 uVar12;
  
  puVar4 = &DAT_10055ce80;
  local_b0 = param_2;
  local_98[0] = (undefined *)param_1;
  FUN_100002f94(&DAT_10055ce80,&DAT_100432358);
  local_a8 = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar16 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_a0 = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar16 - extraout_x12;
  stringLiteral.bridgeObject = (void *)0xe500000000000000;
  stringLiteral.str = (char *)0x636973754d;
  uVar12 = 0xe500000000000000;
  LVar5 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)(lVar16 + -8) = 0x100;
  *(undefined8 *)(lVar16 + -0x10) = 0;
  size.unknown = (undefined *)(ulong)(param_4 & 1);
  TVar6 = SwiftUI::Text::_init(LVar5);
  SVar17.bridgeObject = (void *)0xe700000000000000;
  SVar17.str = (char *)0x616967726f6547;
  FVar7 = SwiftUI::Font::custom(SVar17,size,param_5.unknown);
  TVar13 = TVar6;
  uVar14 = uVar12;
  CVar11.unknown = size.unknown;
  TVar8 = SwiftUI::Text::_font(FVar7.unknown);
  _swift_release(FVar7.unknown);
  FUN_100025b34(TVar6.unknown,uVar12,size.unknown);
  _swift_bridgeObjectRelease();
  CVar9 = SwiftUI::Color::get_white(param_5);
  local_98[1] = CVar9.unknown;
  FUN_100028d58();
  TVar6 = TVar8;
  puVar15 = TVar13.unknown;
  uVar12 = uVar14;
  TVar10 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar8.unknown,TVar13.unknown,uVar14);
  _swift_release(CVar9.unknown);
  _swift_bridgeObjectRelease();
  FUN_10033d76c(lVar16);
  SwiftUI::Alignment::get_center((Alignment)CVar11.unknown);
  SwiftUI::_FrameLayout::_init((Alignment)0x0);
  puVar4 = local_98[1];
  lVar2 = local_a0;
  puVar1 = (undefined8 *)(lVar16 + *(int *)(local_a8 + 0x24));
  puVar1[1] = local_98[2];
  *puVar1 = puVar4;
  puVar1[3] = local_98[4];
  puVar1[2] = local_98[3];
  puVar1[5] = uStack_68;
  puVar1[4] = local_98[5];
  FUN_1000087e4(lVar16,lVar2,&DAT_10055ce80,&DAT_100432358);
  puVar3 = local_98[0];
  *(undefined **)local_98[0] = TVar10.unknown;
  *(undefined **)((long)local_98[0] + 8) = TVar6.unknown;
  *(char *)((long)local_98[0] + 0x10) = (char)puVar15;
  *(undefined8 *)((long)local_98[0] + 0x18) = uVar12;
  puVar4 = &DAT_10055ce88;
  FUN_100002f94(&DAT_10055ce88,&DAT_100432360);
  FUN_1000087e4(lVar2,(long)puVar3 + (long)*(int *)(puVar4 + 0x30),&DAT_10055ce80,&DAT_100432358);
  FUN_100007b14(TVar10.unknown,TVar6.unknown,puVar15);
  _swift_bridgeObjectRetain(uVar12);
  FUN_10002a29c(lVar16,&DAT_10055ce80,&DAT_100432358);
  FUN_10002a29c(lVar2,&DAT_10055ce80,&DAT_100432358);
  FUN_100025b34(TVar10.unknown,TVar6.unknown,puVar15);
  _swift_bridgeObjectRelease(uVar12);
  return;
}

