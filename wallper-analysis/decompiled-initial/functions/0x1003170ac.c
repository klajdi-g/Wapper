// rea decompile_all
// name: FUN_1003170ac
// address: 0x1003170ac
// body: available
// range: 0x1003170ac-0x10031732b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003170ac(undefined8 *param_1,CGFloat param_2,long param_3)

{
  undefined *puVar1;
  Design DVar2;
  undefined *puVar3;
  undefined7 extraout_var;
  State SVar5;
  ulong uVar6;
  Text TVar7;
  Font FVar8;
  Text TVar9;
  undefined *puVar10;
  Text TVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  long extraout_x8;
  code *pcVar15;
  long lVar16;
  CGFloat size;
  String systemName;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  undefined *puStack_68;
  long lVar4;
  
  puVar3 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)&local_90 - extraout_x8;
  systemName.bridgeObject = (void *)0x80000001004e6040;
  systemName.str = (char *)0xd000000000000013;
  local_80 = (undefined *)SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_medium((Weight)local_80);
  DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,DVar2.value);
  pcVar15 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  lVar13 = lVar4;
  (*pcVar15)(lVar16,1,1,lVar4);
  local_88 = (undefined *)SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar16,&DAT_10054a828,&DAT_10041e3c0);
  puVar3 = &DAT_100430d60;
  _swift_getKeyPath();
  puStack_68 = *(undefined **)(param_3 + 0x80);
  size.unknown = *(undefined **)(param_3 + 0x78);
  SVar5.unknown = &DAT_10055bd28;
  puVar10 = &DAT_100430a48;
  local_90 = puVar3;
  local_70 = size.unknown;
  FUN_100002f94();
  SwiftUI::State::get_wrappedValue(SVar5);
  uVar6 = (ulong)local_71;
  FUN_100402c10();
  local_70 = (undefined *)uVar6;
  puStack_68 = puVar10;
  FUN_100026df4();
  puVar3 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar7 = SwiftUI::Text::_init();
  SwiftUI::Font::Weight::get_medium((Weight)TVar7.unknown);
  (*pcVar15)(lVar16,1,1,lVar4);
  FVar8 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(lVar16,&DAT_10054a828,&DAT_10041e3c0);
  TVar11 = TVar7;
  puVar12 = puVar3;
  uVar14 = uVar6;
  TVar9 = SwiftUI::Text::_font(FVar8.unknown);
  _swift_release(FVar8.unknown);
  FUN_100025b34(TVar7.unknown,puVar3,uVar6);
  _swift_bridgeObjectRelease(lVar13);
  puVar1 = local_80;
  puVar10 = local_88;
  puVar3 = local_90;
  *param_1 = local_80;
  param_1[1] = local_90;
  param_1[2] = local_88;
  param_1[3] = TVar9.unknown;
  param_1[4] = TVar11.unknown;
  *(char *)(param_1 + 5) = (char)puVar12;
  param_1[6] = uVar14;
  _swift_retain(local_80);
  _swift_retain(puVar3);
  _swift_retain(puVar10);
  FUN_100007b14(TVar9.unknown,TVar11.unknown,puVar12);
  _swift_bridgeObjectRetain(uVar14);
  FUN_100025b34(TVar9.unknown,TVar11.unknown,puVar12);
  _swift_release(puVar10);
  _swift_release(puVar3);
  _swift_release(puVar1);
  _swift_bridgeObjectRelease(uVar14);
  return;
}

