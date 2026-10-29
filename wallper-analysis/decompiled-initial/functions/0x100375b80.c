// rea decompile_all
// name: FUN_100375b80
// address: 0x100375b80
// body: available
// range: 0x100375b80-0x100375edb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100375b80(undefined8 *param_1,CGFloat param_2,long param_3,code *param_4)

{
  String *pSVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  Design DVar7;
  long lVar8;
  undefined7 extraout_var;
  Color CVar10;
  LocalizedStringKey LVar11;
  Text TVar12;
  Font FVar13;
  Text TVar14;
  Color CVar15;
  Text TVar16;
  undefined8 uVar17;
  Text TVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  ulong uVar23;
  long extraout_x8;
  CGFloat size;
  code *pcVar24;
  undefined1 *puVar25;
  String SVar26;
  undefined8 uStack_b0;
  undefined2 auStack_a8 [4];
  undefined1 auStack_a0 [8];
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *puVar9;
  
  puVar9 = &DAT_10054a828;
  uVar19 = 0;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  puVar25 = auStack_a0 + lVar3;
  lVar8 = 0;
  (*param_4)();
  iVar2 = *(int *)(lVar8 + 0x14);
  lVar8 = 0;
  FUN_1001d59ac();
  pSVar1 = (String *)(param_3 + iVar2 + (long)*(int *)(lVar8 + 0x18));
  SVar26 = *pSVar1;
  _swift_bridgeObjectRetain(pSVar1->bridgeObject);
  local_80 = (undefined *)SwiftUI::Image::init(SVar26);
  SwiftUI::Font::Weight::get_light((Weight)local_80);
  DVar7 = SwiftUI::Font::Design::typeMetadataAccessor();
  puVar9 = (undefined *)CONCAT71(extraout_var,DVar7.value);
  pcVar24 = *(code **)(*(long *)(puVar9 + -8) + 0x38);
  CVar15.unknown = puVar9;
  (*pcVar24)(puVar25,1,1);
  local_88 = (undefined *)SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(puVar25,&DAT_10054a828,&DAT_10041e3c0);
  CVar10.unknown = &DAT_100432f88;
  _swift_getKeyPath();
  local_90 = CVar10.unknown;
  CVar10 = SwiftUI::Color::get_white(CVar10);
  size.unknown = (undefined *)0x3fd6666666666666;
  local_98 = (undefined *)SwiftUI::Color::opacity(0.35,CVar10);
  _swift_release(CVar10.unknown);
  uVar17 = 0x80000001004e6cf0;
  SVar26.bridgeObject = (void *)0x80000001004e6cf0;
  SVar26.str = (char *)0xd000000000000010;
  LVar11 = SwiftUI::LocalizedStringKey::init(SVar26);
  *(undefined2 *)((long)auStack_a8 + lVar3) = 0x100;
  *(undefined8 *)((long)&uStack_b0 + lVar3) = 0;
  uVar20 = (ulong)(uVar19 & 1);
  TVar12 = SwiftUI::Text::_init(LVar11);
  SwiftUI::Font::Weight::get_medium((Weight)TVar12.unknown);
  (*pcVar24)(puVar25,1,1,puVar9);
  FVar13 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(puVar25,&DAT_10054a828,&DAT_10041e3c0);
  TVar18 = TVar12;
  uVar21 = uVar17;
  uVar23 = uVar20;
  TVar14 = SwiftUI::Text::_font(FVar13.unknown);
  _swift_release(FVar13.unknown);
  FUN_100025b34(TVar12.unknown,uVar17,uVar20);
  _swift_bridgeObjectRelease();
  CVar10 = SwiftUI::Color::get_white(CVar15);
  CVar15 = SwiftUI::Color::opacity(0.45,CVar10);
  _swift_release(CVar10.unknown);
  local_78 = CVar15.unknown;
  FUN_100028d58();
  TVar12 = TVar14;
  puVar22 = TVar18.unknown;
  uVar17 = uVar21;
  TVar16 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar14.unknown,TVar18.unknown,uVar21);
  _swift_release(CVar15.unknown);
  _swift_bridgeObjectRelease(uVar23);
  puVar6 = local_80;
  puVar5 = local_88;
  puVar4 = local_90;
  puVar9 = local_98;
  *param_1 = local_80;
  param_1[1] = local_90;
  param_1[2] = local_88;
  param_1[3] = local_98;
  param_1[4] = TVar16.unknown;
  param_1[5] = TVar12.unknown;
  *(char *)(param_1 + 6) = (char)puVar22;
  param_1[7] = uVar17;
  _swift_retain();
  _swift_retain(puVar4);
  _swift_retain(puVar5);
  _swift_retain(puVar9);
  FUN_100007b14(TVar16.unknown,TVar12.unknown,puVar22);
  _swift_bridgeObjectRetain(uVar17);
  FUN_100025b34(TVar16.unknown,TVar12.unknown,puVar22);
  _swift_release(puVar9);
  _swift_release(puVar5);
  _swift_release(puVar4);
  _swift_release(puVar6);
  _swift_bridgeObjectRelease(uVar17);
  return;
}

