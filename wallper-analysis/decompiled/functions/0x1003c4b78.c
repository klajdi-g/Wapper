// rea decompile_all
// name: FUN_1003c4b78
// address: 0x1003c4b78
// body: available
// range: 0x1003c4b78-0x1003c4def inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c4b78(undefined8 *param_1,CGFloat param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  Design DVar4;
  undefined *puVar5;
  undefined7 extraout_var;
  LocalizedStringKey LVar7;
  Text TVar8;
  Font FVar9;
  Text TVar10;
  undefined8 uVar11;
  Text TVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  long extraout_x8;
  code *pcVar18;
  undefined1 *puVar19;
  CGFloat size;
  String systemName;
  String stringLiteral;
  undefined8 uStack_90;
  undefined2 auStack_88 [4];
  undefined1 auStack_80 [8];
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  long lVar6;
  
  puVar5 = &DAT_10054a828;
  uVar13 = 0;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  puVar19 = auStack_80 + lVar1;
  systemName.bridgeObject = (void *)0x80000001004e7080;
  systemName.str = (char *)0xd000000000000010;
  local_68 = (undefined *)SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_regular((Weight)local_68);
  DVar4 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar6 = CONCAT71(extraout_var,DVar4.value);
  pcVar18 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  lVar16 = lVar6;
  (*pcVar18)(puVar19,1,1,lVar6);
  size.unknown = (undefined *)0x4026000000000000;
  local_70 = (undefined *)SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(puVar19,&DAT_10054a828);
  puVar5 = &DAT_100435fb0;
  _swift_getKeyPath();
  uVar11 = 0xe90000000000006f;
  stringLiteral.bridgeObject = (void *)0xe90000000000006f;
  stringLiteral.str = (char *)0x6564695620646441;
  local_78 = puVar5;
  LVar7 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)((long)auStack_88 + lVar1) = 0x100;
  *(undefined8 *)((long)&uStack_90 + lVar1) = 0;
  uVar14 = (ulong)(uVar13 & 1);
  TVar8 = SwiftUI::Text::_init(LVar7);
  SwiftUI::Font::Weight::get_regular((Weight)TVar8.unknown);
  (*pcVar18)(puVar19,1,1,lVar6);
  FVar9 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(puVar19,&DAT_10054a828,&DAT_10041e3c0);
  TVar12 = TVar8;
  uVar15 = uVar11;
  uVar17 = uVar14;
  TVar10 = SwiftUI::Text::_font(FVar9.unknown);
  _swift_release(FVar9.unknown);
  FUN_100025b34(TVar8.unknown,uVar11,uVar14);
  _swift_bridgeObjectRelease(lVar16);
  puVar3 = local_68;
  puVar2 = local_70;
  puVar5 = local_78;
  *param_1 = local_68;
  param_1[1] = local_78;
  param_1[2] = local_70;
  param_1[3] = TVar10.unknown;
  param_1[4] = TVar12.unknown;
  *(char *)(param_1 + 5) = (char)uVar15;
  param_1[6] = uVar17;
  _swift_retain(local_68);
  _swift_retain(puVar5);
  _swift_retain(puVar2);
  FUN_100007b14(TVar10.unknown,TVar12.unknown,uVar15);
  _swift_bridgeObjectRetain(uVar17);
  FUN_100025b34(TVar10.unknown,TVar12.unknown,uVar15);
  _swift_release(puVar2);
  _swift_release(puVar5);
  _swift_release(puVar3);
  _swift_bridgeObjectRelease(uVar17);
  return;
}

