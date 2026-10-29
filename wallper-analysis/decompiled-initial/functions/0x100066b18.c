// rea decompile_all
// name: FUN_100066b18
// address: 0x100066b18
// body: available
// range: 0x100066b18-0x100066dc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100066b18(undefined8 *param_1,CGFloat param_2,AppStorage param_3)

{
  char *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  Design DVar5;
  undefined *puVar6;
  undefined7 extraout_var;
  LocalizedStringKey LVar8;
  Text TVar9;
  Font FVar10;
  Text TVar11;
  undefined8 uVar12;
  Text TVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  long extraout_x8;
  void *pvVar19;
  code *pcVar20;
  long lVar21;
  CGFloat size;
  String systemName;
  String stringLiteral;
  undefined8 uStack_90;
  undefined2 auStack_88 [4];
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  char local_61;
  long lVar7;
  
  puVar6 = &DAT_10054a828;
  uVar14 = 0;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  lVar21 = (long)&local_80 + lVar2;
  SwiftUI::AppStorage::get_wrappedValue(param_3);
  pcVar1 = (char *)0x6c69662e6b636f6c;
  if (local_61 == '\0') {
    pcVar1 = (char *)0x6b636f6c;
  }
  pvVar19 = (void *)0xe90000000000006c;
  if (local_61 == '\0') {
    pvVar19 = (void *)0xe400000000000000;
  }
  systemName.bridgeObject = pvVar19;
  systemName.str = pcVar1;
  local_70 = (undefined *)SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_semibold((Weight)local_70);
  DVar5 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var,DVar5.value);
  pcVar20 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
  lVar17 = lVar7;
  (*pcVar20)(lVar21,1,1,lVar7);
  size.unknown = (undefined *)0x4028000000000000;
  local_78 = (undefined *)SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar21,&DAT_10054a828);
  puVar6 = &DAT_10041eeb0;
  _swift_getKeyPath();
  uVar12 = 0xeb000000006e6565;
  stringLiteral.bridgeObject = (void *)0xeb000000006e6565;
  stringLiteral.str = (char *)0x726353206b636f4c;
  local_80 = puVar6;
  LVar8 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)((long)auStack_88 + lVar2) = 0x100;
  *(undefined8 *)((long)&uStack_90 + lVar2) = 0;
  uVar15 = (ulong)(uVar14 & 1);
  TVar9 = SwiftUI::Text::_init(LVar8);
  SwiftUI::Font::Weight::get_medium((Weight)TVar9.unknown);
  (*pcVar20)(lVar21,1,1,lVar7);
  FVar10 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(lVar21,&DAT_10054a828,&DAT_10041e3c0);
  TVar13 = TVar9;
  uVar16 = uVar12;
  uVar18 = uVar15;
  TVar11 = SwiftUI::Text::_font(FVar10.unknown);
  _swift_release(FVar10.unknown);
  FUN_100025b34(TVar9.unknown,uVar12,uVar15);
  _swift_bridgeObjectRelease(lVar17);
  puVar4 = local_70;
  puVar3 = local_78;
  puVar6 = local_80;
  *param_1 = local_70;
  param_1[1] = local_80;
  param_1[2] = local_78;
  param_1[3] = TVar11.unknown;
  param_1[4] = TVar13.unknown;
  *(char *)(param_1 + 5) = (char)uVar16;
  param_1[6] = uVar18;
  _swift_retain();
  _swift_retain(puVar6);
  _swift_retain(puVar3);
  FUN_100007b14(TVar11.unknown,TVar13.unknown,uVar16);
  _swift_bridgeObjectRetain(uVar18);
  FUN_100025b34(TVar11.unknown,TVar13.unknown,uVar16);
  _swift_release(puVar3);
  _swift_release(puVar6);
  _swift_release(puVar4);
  _swift_bridgeObjectRelease(uVar18);
  return;
}

