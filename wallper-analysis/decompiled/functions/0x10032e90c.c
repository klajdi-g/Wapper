// rea decompile_all
// name: FUN_10032e90c
// address: 0x10032e90c
// body: available
// range: 0x10032e90c-0x10032ebcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10032e90c(undefined8 *param_1,CGFloat param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,byte param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  Design DVar6;
  undefined *puVar7;
  undefined7 extraout_var;
  Text TVar9;
  Font FVar10;
  Text TVar11;
  undefined *puVar12;
  Text TVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  long extraout_x8;
  undefined1 *puVar17;
  code *pcVar18;
  CGFloat size;
  String systemName;
  undefined1 auStack_90 [8];
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long lVar8;
  
  puVar7 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = auStack_90 + -extraout_x8;
  pcVar1 = (char *)0xd000000000000012;
  pcVar3 = "Wallper/StatusDot.swift";
  if (param_6 != 2) {
    pcVar1 = (char *)0xd000000000000010;
    pcVar3 = "will not update.";
  }
  pcVar2 = "Not selected on any monitor";
  pcVar4 = (char *)0xd000000000000015;
  if (param_6 != 0) {
    pcVar2 = "ol pick up its colours.";
    pcVar4 = (char *)0xd00000000000001d;
  }
  if (param_6 < 2) {
    pcVar3 = pcVar2;
    pcVar1 = pcVar4;
  }
  systemName.bridgeObject = (void *)((ulong)pcVar3 | 0x8000000000000000);
  systemName.str = pcVar1;
  local_78 = (undefined *)SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_semibold((Weight)local_78);
  DVar6 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar8 = CONCAT71(extraout_var,DVar6.value);
  pcVar18 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
  lVar15 = lVar8;
  (*pcVar18)(puVar17,1,1,lVar8);
  size.unknown = (undefined *)0x402a000000000000;
  local_80 = (undefined *)SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(puVar17,&DAT_10054a828,&DAT_10041e3c0);
  puVar7 = &DAT_100431cb8;
  _swift_getKeyPath();
  local_88 = puVar7;
  local_70 = param_4;
  uStack_68 = param_5;
  FUN_100026df4();
  _swift_bridgeObjectRetain(param_5);
  puVar12 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar9 = SwiftUI::Text::_init();
  SwiftUI::Font::Weight::get_medium((Weight)TVar9.unknown);
  (*pcVar18)(puVar17,1,1,lVar8);
  FVar10 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(puVar17,&DAT_10054a828,&DAT_10041e3c0);
  TVar13 = TVar9;
  puVar14 = puVar12;
  puVar16 = puVar7;
  TVar11 = SwiftUI::Text::_font(FVar10.unknown);
  _swift_release(FVar10.unknown);
  FUN_100025b34(TVar9.unknown,puVar12,puVar7);
  _swift_bridgeObjectRelease(lVar15);
  puVar5 = local_78;
  puVar12 = local_80;
  puVar7 = local_88;
  *param_1 = local_78;
  param_1[1] = local_88;
  param_1[2] = local_80;
  param_1[3] = TVar11.unknown;
  param_1[4] = TVar13.unknown;
  *(char *)(param_1 + 5) = (char)puVar14;
  param_1[6] = puVar16;
  _swift_retain();
  _swift_retain(puVar7);
  _swift_retain(puVar12);
  FUN_100007b14(TVar11.unknown,TVar13.unknown,puVar14);
  _swift_bridgeObjectRetain(puVar16);
  FUN_100025b34(TVar11.unknown,TVar13.unknown,puVar14);
  _swift_release(puVar12);
  _swift_release(puVar7);
  _swift_release(puVar5);
  _swift_bridgeObjectRelease(puVar16);
  return;
}

