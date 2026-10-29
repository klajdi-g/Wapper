// rea decompile_all
// name: FUN_100053260
// address: 0x100053260
// body: available
// range: 0x100053260-0x10005358f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100053260(undefined8 *param_1,CGFloat param_2,char *param_3,void *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  Design DVar5;
  undefined *puVar6;
  undefined7 extraout_var;
  Text TVar8;
  Font FVar9;
  Text TVar10;
  Image IVar11;
  undefined *puVar12;
  Text TVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  long extraout_x8;
  long lVar17;
  code *pcVar18;
  CGFloat size;
  CGFloat size_00;
  String systemName;
  String systemName_00;
  undefined *local_a0;
  code *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long lVar7;
  
  puVar6 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)&local_a0 - extraout_x8;
  _swift_bridgeObjectRetain(param_4);
  systemName.bridgeObject = param_4;
  systemName.str = param_3;
  local_78 = (undefined *)SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_semibold((Weight)local_78);
  DVar5 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var,DVar5.value);
  pcVar18 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
  lVar15 = lVar7;
  (*pcVar18)(lVar17,1,1,lVar7);
  size.unknown = (undefined *)0x4024000000000000;
  local_98 = pcVar18;
  local_80 = (undefined *)SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar17,&DAT_10054a828,&DAT_10041e3c0);
  puVar6 = &DAT_10041e520;
  _swift_getKeyPath();
  local_88 = puVar6;
  local_70 = param_5;
  uStack_68 = param_6;
  FUN_100026df4();
  _swift_bridgeObjectRetain(param_6);
  puVar12 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar8 = SwiftUI::Text::_init();
  SwiftUI::Font::Weight::get_medium((Weight)TVar8.unknown);
  (*pcVar18)(lVar17,1,1,lVar7);
  size_00.unknown = (undefined *)0x4028000000000000;
  FVar9 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(lVar17,&DAT_10054a828,&DAT_10041e3c0);
  TVar13 = TVar8;
  puVar14 = puVar12;
  puVar16 = puVar6;
  TVar10 = SwiftUI::Text::_font(FVar9.unknown);
  local_a0 = TVar13.unknown;
  local_90 = puVar16;
  _swift_release(FVar9.unknown);
  FUN_100025b34(TVar8.unknown,puVar12,puVar6);
  _swift_bridgeObjectRelease(lVar15);
  puVar6 = &DAT_10041e3c8;
  _swift_getKeyPath();
  systemName_00.bridgeObject = (void *)0xed00007468676972;
  systemName_00.str = (char *)0x2e6e6f7276656863;
  IVar11 = SwiftUI::Image::init(systemName_00);
  SwiftUI::Font::Weight::get_bold((Weight)IVar11.unknown);
  (*local_98)(lVar17,1,1,lVar7);
  FVar9 = SwiftUI::Font::_system(size_00,(Font)0x0);
  FUN_10002a29c(lVar17,&DAT_10054a828,&DAT_10041e3c0);
  puVar12 = &DAT_10041e520;
  _swift_getKeyPath();
  puVar4 = local_78;
  puVar3 = local_80;
  puVar2 = local_88;
  puVar1 = local_90;
  puVar16 = local_a0;
  *param_1 = local_78;
  param_1[1] = local_88;
  param_1[2] = local_80;
  param_1[3] = TVar10.unknown;
  param_1[4] = local_a0;
  *(char *)(param_1 + 5) = (char)puVar14;
  param_1[6] = local_90;
  param_1[7] = puVar6;
  param_1[8] = 1;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = IVar11.unknown;
  param_1[0xb] = puVar12;
  param_1[0xc] = FVar9.unknown;
  param_1[0xd] = 0x3fe199999999999a;
  _swift_retain(local_78);
  _swift_retain(puVar2);
  _swift_retain(puVar3);
  FUN_100007b14(TVar10.unknown,puVar16,puVar14);
  _swift_bridgeObjectRetain(puVar1);
  _swift_retain(puVar6);
  FUN_100025b34(TVar10.unknown,puVar16,puVar14);
  _swift_release(puVar3);
  _swift_release(puVar2);
  _swift_release(puVar4);
  _swift_release(puVar6);
  _swift_bridgeObjectRelease(puVar1);
  return;
}

