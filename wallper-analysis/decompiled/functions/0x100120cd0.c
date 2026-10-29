// rea decompile_all
// name: FUN_100120cd0
// address: 0x100120cd0
// body: available
// range: 0x100120cd0-0x100120f2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100120cd0(undefined8 *param_1,CGFloat param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  String systemName;
  undefined *puVar2;
  Design DVar3;
  undefined *puVar4;
  undefined7 extraout_var;
  Text TVar6;
  Font FVar7;
  Text TVar8;
  undefined *puVar9;
  Text TVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  long extraout_x8;
  code *pcVar14;
  undefined1 *puVar15;
  CGFloat size;
  undefined1 auStack_90 [8];
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long lVar5;
  
  puVar4 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = auStack_90 + -extraout_x8;
  systemName = *(String *)(param_3 + 2);
  _swift_bridgeObjectRetain(param_3[3]);
  local_78 = (undefined *)SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_medium((Weight)local_78);
  DVar3 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,DVar3.value);
  pcVar14 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  lVar12 = lVar5;
  (*pcVar14)(puVar15,1,1,lVar5);
  size.unknown = (undefined *)0x4026000000000000;
  local_80 = (undefined *)SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(puVar15,&DAT_10054a828,&DAT_10041e3c0);
  puVar4 = &DAT_1004264d8;
  _swift_getKeyPath();
  local_70 = *param_3;
  uVar1 = param_3[1];
  local_88 = puVar4;
  uStack_68 = uVar1;
  FUN_100026df4();
  _swift_bridgeObjectRetain(uVar1);
  puVar9 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar6 = SwiftUI::Text::_init();
  SwiftUI::Font::Weight::get_medium((Weight)TVar6.unknown);
  (*pcVar14)(puVar15,1,1,lVar5);
  FVar7 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(puVar15,&DAT_10054a828,&DAT_10041e3c0);
  TVar10 = TVar6;
  puVar11 = puVar9;
  puVar13 = puVar4;
  TVar8 = SwiftUI::Text::_font(FVar7.unknown);
  _swift_release(FVar7.unknown);
  FUN_100025b34(TVar6.unknown,puVar9,puVar4);
  _swift_bridgeObjectRelease(lVar12);
  puVar2 = local_78;
  puVar9 = local_80;
  puVar4 = local_88;
  *param_1 = local_78;
  param_1[1] = local_88;
  param_1[2] = local_80;
  param_1[3] = TVar8.unknown;
  param_1[4] = TVar10.unknown;
  *(char *)(param_1 + 5) = (char)puVar11;
  param_1[6] = puVar13;
  _swift_retain(local_78);
  _swift_retain(puVar4);
  _swift_retain(puVar9);
  FUN_100007b14(TVar8.unknown,TVar10.unknown,puVar11);
  _swift_bridgeObjectRetain(puVar13);
  FUN_100025b34(TVar8.unknown,TVar10.unknown,puVar11);
  _swift_release(puVar9);
  _swift_release(puVar4);
  _swift_release(puVar2);
  _swift_bridgeObjectRelease(puVar13);
  return;
}

