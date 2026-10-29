// rea decompile_all
// name: FUN_100065bb4
// address: 0x100065bb4
// body: available
// range: 0x100065bb4-0x100065eef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100065bb4(undefined8 *param_1,CGFloat param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  Design DVar2;
  undefined *puVar3;
  undefined7 extraout_var;
  undefined *puVar5;
  ulong uVar6;
  Text TVar7;
  Font FVar8;
  Text TVar9;
  Image IVar10;
  undefined *puVar11;
  Text TVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  long extraout_x8;
  long lVar16;
  CGFloat size;
  CGFloat size_00;
  String systemName;
  String systemName_00;
  ulong local_a0;
  long local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  code *local_78;
  ulong local_70;
  undefined *puStack_68;
  long lVar4;
  
  puVar3 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)&local_a0 - extraout_x8;
  systemName.bridgeObject = (void *)0xe700000000000000;
  systemName.str = (char *)0x656c6666756873;
  local_80 = (undefined *)SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_semibold((Weight)local_80);
  DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,DVar2.value);
  local_78 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  lVar14 = lVar4;
  local_98 = lVar4;
  (*local_78)(lVar16,1,1,lVar4);
  size.unknown = (undefined *)0x4028000000000000;
  local_88 = (undefined *)SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar16,&DAT_10054a828,&DAT_10041e3c0);
  puVar3 = &DAT_10041eeb0;
  _swift_getKeyPath();
  puVar5 = &DAT_10041ebb0;
  local_90 = puVar3;
  _swift_getKeyPath();
  puVar3 = &DAT_10041ebd8;
  _swift_getKeyPath(&DAT_10041ebd8);
  puVar11 = puVar5;
  Combine::Published::_get_subscript(&local_70,param_4,puVar5,puVar3);
  _swift_release(puVar5);
  _swift_release(puVar3);
  uVar6 = local_70 & 0xff;
  FUN_100215cec();
  local_70 = uVar6;
  puStack_68 = puVar11;
  FUN_100026df4();
  puVar3 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar7 = SwiftUI::Text::_init();
  SwiftUI::Font::Weight::get_medium((Weight)TVar7.unknown);
  (*local_78)(lVar16,1,1,lVar4);
  size_00.unknown = (undefined *)0x4026000000000000;
  FVar8 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(lVar16,&DAT_10054a828,&DAT_10041e3c0);
  TVar12 = TVar7;
  puVar13 = puVar3;
  uVar15 = uVar6;
  TVar9 = SwiftUI::Text::_font(FVar8.unknown);
  local_a0 = uVar15;
  _swift_release(FVar8.unknown);
  FUN_100025b34(TVar7.unknown,puVar3,uVar6);
  _swift_bridgeObjectRelease(lVar14);
  systemName_00.bridgeObject = (void *)0xec0000006e776f64;
  systemName_00.str = (char *)0x2e6e6f7276656863;
  IVar10 = SwiftUI::Image::init(systemName_00);
  SwiftUI::Font::Weight::get_bold((Weight)IVar10.unknown);
  (*local_78)(lVar16,1,1,local_98);
  FVar8 = SwiftUI::Font::_system(size_00,(Font)0x0);
  FUN_10002a29c(lVar16,&DAT_10054a828,&DAT_10041e3c0);
  puVar3 = &DAT_10041eeb0;
  _swift_getKeyPath();
  puVar1 = local_80;
  puVar11 = local_88;
  puVar5 = local_90;
  uVar15 = local_a0;
  *param_1 = local_80;
  param_1[1] = local_90;
  param_1[2] = local_88;
  param_1[3] = TVar9.unknown;
  param_1[4] = TVar12.unknown;
  *(char *)(param_1 + 5) = (char)puVar13;
  param_1[6] = local_a0;
  param_1[7] = IVar10.unknown;
  param_1[8] = puVar3;
  param_1[9] = FVar8.unknown;
  param_1[10] = 0x3fe6666666666666;
  _swift_retain(local_80);
  _swift_retain(puVar5);
  _swift_retain(puVar11);
  FUN_100007b14(TVar9.unknown,TVar12.unknown,puVar13);
  _swift_bridgeObjectRetain(uVar15);
  FUN_100025b34(TVar9.unknown,TVar12.unknown,puVar13);
  _swift_release(puVar11);
  _swift_release(puVar5);
  _swift_release(puVar1);
  _swift_bridgeObjectRelease(uVar15);
  return;
}

