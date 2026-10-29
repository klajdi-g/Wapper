// rea decompile_all
// name: FUN_1003b4ea0
// address: 0x1003b4ea0
// body: available
// range: 0x1003b4ea0-0x1003b519b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b4ea0(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  Design DVar4;
  undefined *puVar5;
  State SVar6;
  undefined7 extraout_var;
  char *pcVar8;
  LocalizedStringKey LVar9;
  Text TVar10;
  Font FVar11;
  Text TVar12;
  Text TVar13;
  uint uVar14;
  ulong uVar15;
  void *pvVar16;
  long lVar17;
  ulong uVar18;
  long extraout_x8;
  void *pvVar19;
  long lVar20;
  code *pcVar21;
  CGFloat CVar22;
  String systemName;
  String stringLiteral;
  undefined8 uStack_a0;
  undefined2 auStack_98 [4];
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  char local_71;
  undefined *local_70;
  undefined8 uStack_68;
  long lVar7;
  
  puVar5 = &DAT_10054a828;
  uVar14 = 0;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  lVar20 = (long)&local_90 + lVar1;
  uStack_68 = *(undefined8 *)(param_2 + 0x50);
  CVar22.unknown = *(undefined **)(param_2 + 0x48);
  SVar6.unknown = &DAT_10054ab50;
  local_70 = CVar22.unknown;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar6);
  pcVar8 = (char *)0x72616d6b63656863;
  if (local_71 == '\0') {
    pcVar8 = (char *)0x642e6e6f2e636f64;
  }
  pvVar19 = (void *)0xe90000000000006b;
  if (local_71 == '\0') {
    pvVar19 = (void *)0xea0000000000636f;
  }
  systemName.bridgeObject = pvVar19;
  systemName.str = pcVar8;
  local_80 = (undefined *)SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_medium((Weight)local_80);
  DVar4 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var,DVar4.value);
  pcVar21 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
  lVar17 = lVar7;
  (*pcVar21)(lVar20,1,1,lVar7);
  local_88 = (undefined *)SwiftUI::Font::_system(CVar22,(Font)0x0);
  FUN_10002a29c(lVar20,&DAT_10054a828);
  puVar5 = &DAT_100435730;
  _swift_getKeyPath();
  uStack_68 = *(undefined8 *)(param_2 + 0x50);
  CVar22.unknown = *(undefined **)(param_2 + 0x48);
  local_90 = puVar5;
  local_70 = CVar22.unknown;
  SwiftUI::State::get_wrappedValue(SVar6);
  if (local_71 == '\x01') {
    pcVar8 = (char *)0x646569706f43;
    pvVar19 = (void *)0xe600000000000000;
  }
  else {
    pcVar8 = (char *)0x79706f43;
    pvVar19 = (void *)0xe400000000000000;
  }
  stringLiteral.bridgeObject = pvVar19;
  stringLiteral.str = pcVar8;
  LVar9 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)((long)auStack_98 + lVar1) = 0x100;
  *(undefined8 *)((long)&uStack_a0 + lVar1) = 0;
  uVar15 = (ulong)(uVar14 & 1);
  TVar10 = SwiftUI::Text::_init(LVar9);
  SwiftUI::Font::Weight::get_medium((Weight)TVar10.unknown);
  (*pcVar21)(lVar20,1,1,lVar7);
  FVar11 = SwiftUI::Font::_system(CVar22,(Font)0x0);
  FUN_10002a29c(lVar20,&DAT_10054a828,&DAT_10041e3c0);
  TVar13 = TVar10;
  pvVar16 = pvVar19;
  uVar18 = uVar15;
  TVar12 = SwiftUI::Text::_font(FVar11.unknown);
  _swift_release(FVar11.unknown);
  FUN_100025b34(TVar10.unknown,pvVar19,uVar15);
  _swift_bridgeObjectRelease(lVar17);
  puVar3 = local_80;
  puVar2 = local_88;
  puVar5 = local_90;
  *param_1 = local_80;
  param_1[1] = local_90;
  param_1[2] = local_88;
  param_1[3] = TVar12.unknown;
  param_1[4] = TVar13.unknown;
  *(char *)(param_1 + 5) = (char)pvVar16;
  param_1[6] = uVar18;
  _swift_retain(local_80);
  _swift_retain(puVar5);
  _swift_retain(puVar2);
  FUN_100007b14(TVar12.unknown,TVar13.unknown,pvVar16);
  _swift_bridgeObjectRetain(uVar18);
  FUN_100025b34(TVar12.unknown,TVar13.unknown,pvVar16);
  _swift_release(puVar2);
  _swift_release(puVar5);
  _swift_release(puVar3);
  _swift_bridgeObjectRelease(uVar18);
  return;
}

