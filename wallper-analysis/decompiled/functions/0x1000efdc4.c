// rea decompile_all
// name: FUN_1000efdc4
// address: 0x1000efdc4
// body: available
// range: 0x1000efdc4-0x1000f0033 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000efdc4(undefined8 *param_1,CGFloat param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  Design DVar5;
  undefined *puVar6;
  undefined7 extraout_var;
  long lVar8;
  Text TVar9;
  Font FVar10;
  Text TVar11;
  Text TVar12;
  undefined *puVar13;
  long lVar14;
  long extraout_x8;
  code *pcVar15;
  undefined1 *puVar16;
  CGFloat size;
  String systemName;
  undefined1 auStack_90 [8];
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
  puVar16 = auStack_90 + -extraout_x8;
  systemName.bridgeObject = (void *)0x80000001004dd760;
  systemName.str = (char *)0xd000000000000013;
  local_78 = (undefined *)SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_semibold((Weight)local_78);
  DVar5 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var,DVar5.value);
  pcVar15 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
  lVar14 = lVar7;
  (*pcVar15)(puVar16,1,1,lVar7);
  size.unknown = (undefined *)0x4028000000000000;
  local_80 = (undefined *)SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(puVar16,&DAT_10054a828,&DAT_10041e3c0);
  puVar6 = &DAT_1004244c8;
  _swift_getKeyPath();
  lVar8 = 0;
  local_88 = puVar6;
  FUN_1000f834c();
  puVar1 = (undefined8 *)(param_3 + *(int *)(lVar8 + 0x28));
  local_70 = *puVar1;
  uVar2 = puVar1[1];
  uStack_68 = uVar2;
  FUN_100026df4();
  _swift_bridgeObjectRetain(uVar2);
  puVar6 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar9 = SwiftUI::Text::_init();
  SwiftUI::Font::Weight::get_semibold((Weight)TVar9.unknown);
  (*pcVar15)(puVar16,1,1,lVar7);
  FVar10 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(puVar16,&DAT_10054a828,&DAT_10041e3c0);
  TVar12 = TVar9;
  puVar13 = puVar6;
  lVar7 = lVar8;
  TVar11 = SwiftUI::Text::_font(FVar10.unknown);
  _swift_release(FVar10.unknown);
  FUN_100025b34(TVar9.unknown,puVar6,lVar8);
  _swift_bridgeObjectRelease(lVar14);
  puVar4 = local_78;
  puVar3 = local_80;
  puVar6 = local_88;
  *param_1 = local_78;
  param_1[1] = local_88;
  param_1[2] = local_80;
  param_1[3] = TVar11.unknown;
  param_1[4] = TVar12.unknown;
  *(char *)(param_1 + 5) = (char)puVar13;
  param_1[6] = lVar7;
  _swift_retain(local_78);
  _swift_retain(puVar6);
  _swift_retain(puVar3);
  FUN_100007b14(TVar11.unknown,TVar12.unknown,puVar13);
  _swift_bridgeObjectRetain(lVar7);
  FUN_100025b34(TVar11.unknown,TVar12.unknown,puVar13);
  _swift_release(puVar3);
  _swift_release(puVar6);
  _swift_release(puVar4);
  _swift_bridgeObjectRelease(lVar7);
  return;
}

