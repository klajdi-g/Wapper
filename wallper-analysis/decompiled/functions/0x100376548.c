// rea decompile_all
// name: FUN_100376548
// address: 0x100376548
// body: available
// range: 0x100376548-0x100376a7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003766e8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100376548(undefined8 *param_1,CGFloat param_2,undefined8 *param_3)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 *puVar4;
  Design DVar5;
  undefined *puVar6;
  Image IVar7;
  Color CVar9;
  undefined8 uVar10;
  Text TVar11;
  Font FVar12;
  Font FVar13;
  Text TVar14;
  Text TVar15;
  Color CVar16;
  Text TVar17;
  ContentTransition CVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  long extraout_x8;
  undefined8 *puVar22;
  long extraout_x8_00;
  CGFloat size;
  long extraout_x12;
  long lVar23;
  long lVar24;
  code *pcVar25;
  CGFloat size_00;
  String SVar26;
  code *local_c0 [4];
  undefined *local_a0;
  undefined *local_98;
  long local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *puStack_68;
  undefined *puVar8;
  
  puVar6 = &DAT_10054b5f8;
  local_88 = param_1;
  FUN_100002f94(&DAT_10054b5f8,&DAT_10041c990);
  local_c0[3] = (code *)puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar23 = (long)local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_90 = lVar23;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar22 = (undefined8 *)(lVar23 - extraout_x12);
  puVar6 = &DAT_10054a828;
  puVar8 = puVar6;
  local_80 = puVar22;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = (long)puVar22 - extraout_x8_00;
  SVar26 = *(String *)(param_3 + 1);
  _swift_bridgeObjectRetain(param_3[2]);
  IVar7 = SwiftUI::Image::init(SVar26);
  local_78 = IVar7.unknown;
  SwiftUI::Font::Weight::get_semibold((Weight)IVar7.unknown);
  DVar5 = SwiftUI::Font::Design::typeMetadataAccessor();
  puVar8 = (undefined *)CONCAT71((int7)((ulong)IVar7.unknown >> 8),DVar5.value);
  lVar24 = *(long *)(puVar8 + -8);
  pcVar25 = *(code **)(lVar24 + 0x38);
  CVar16.unknown = puVar8;
  (*pcVar25)(lVar23,1,1);
  local_c0[0] = pcVar25;
  local_98 = (undefined *)SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar23,&DAT_10054a828,&DAT_10041e3c0);
  CVar9.unknown = &DAT_100432f88;
  _swift_getKeyPath();
  local_a0 = CVar9.unknown;
  CVar9 = SwiftUI::Color::get_white(CVar9);
  size.unknown = (undefined *)0x3fe6666666666666;
  local_c0[2] = (code *)SwiftUI::Color::opacity(0.7,CVar9);
  _swift_release(CVar9.unknown);
  uVar10 = *param_3;
  FUN_10025f020();
  local_70 = (undefined *)uVar10;
  puStack_68 = puVar6;
  FUN_100026df4();
  puVar6 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar11 = SwiftUI::Text::_init(uVar10,PTR___type_metadata_for_Swift_String_100523a98,uVar10);
  SwiftUI::Font::Weight::get_medium((Weight)TVar11.unknown);
  local_c0[1] = (code *)puVar8;
  (**(code **)(lVar24 + 0x68))
            (lVar23,*(undefined4 *)
                     PTR___enum_case_for_SwiftUI_Font_Design_rounded_SwiftUI_Font_Design_Type___>_SwiftUI_Font_Design_100522cd8
             ,puVar8);
  (*pcVar25)(lVar23,0,1,puVar8);
  size_00.unknown = (undefined *)0x402a000000000000;
  FVar12 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(lVar23,&DAT_10054a828,&DAT_10041e3c0);
  FVar13 = SwiftUI::Font::monospacedDigit(FVar12);
  _swift_release(FVar12.unknown);
  TVar17 = TVar11;
  puVar8 = puVar6;
  uVar20 = uVar10;
  TVar14 = SwiftUI::Text::_font(FVar13.unknown);
  _swift_release(FVar13.unknown);
  FUN_100025b34(TVar11.unknown,puVar6,uVar10);
  _swift_bridgeObjectRelease();
  CVar9 = SwiftUI::Color::get_white(CVar16);
  local_70 = CVar9.unknown;
  FUN_100028d58();
  TVar11 = TVar14;
  puVar19 = TVar17.unknown;
  puVar21 = puVar8;
  TVar15 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar14.unknown,TVar17.unknown,puVar8);
  _swift_release(CVar9.unknown);
  _swift_bridgeObjectRelease(uVar20);
  puVar4 = local_80;
  puVar22 = (undefined8 *)((long)local_80 + (long)*(int *)(local_c0[3] + 0x24));
  CVar18.unknown = &DAT_10041c7e0;
  FUN_100002f94();
  SwiftUI::ContentTransition::numericText(false,CVar18);
  puVar6 = &DAT_100432fc0;
  _swift_getKeyPath();
  *puVar22 = puVar6;
  *puVar4 = TVar15.unknown;
  puVar4[1] = TVar11.unknown;
  *(char *)(puVar4 + 2) = (char)puVar19;
  puVar4[3] = puVar21;
  SVar26.bridgeObject = (void *)0x80000001004e6870;
  SVar26.str = (char *)0xd000000000000017;
  local_c0[3] = (code *)SwiftUI::Image::init(SVar26);
  SwiftUI::Font::Weight::get_semibold((Weight)local_c0[3]);
  (*local_c0[0])(lVar23,1,1,local_c0[1]);
  local_c0[1] = (code *)SwiftUI::Font::_system(size_00,(Font)0x0);
  FUN_10002a29c(lVar23,&DAT_10054a828,&DAT_10041e3c0);
  CVar9.unknown = &DAT_100432f88;
  _swift_getKeyPath();
  local_c0[0] = (code *)CVar9.unknown;
  CVar9 = SwiftUI::Color::get_white(CVar9);
  CVar16 = SwiftUI::Color::opacity(0.55,CVar9);
  _swift_release(CVar9.unknown);
  lVar23 = local_90;
  FUN_1000087e4(puVar4,local_90,&DAT_10054b5f8,&DAT_10041c990);
  puVar21 = local_78;
  puVar22 = local_88;
  puVar19 = local_98;
  puVar8 = local_a0;
  pcVar2 = local_c0[2];
  *local_88 = local_78;
  local_88[1] = local_a0;
  local_88[2] = local_98;
  local_88[3] = local_c0[2];
  puVar6 = &DAT_10055d8c8;
  FUN_100002f94(&DAT_10055d8c8,&DAT_100432ff0);
  FUN_1000087e4(lVar23,(long)puVar22 + (long)*(int *)(puVar6 + 0x30),&DAT_10054b5f8,&DAT_10041c990);
  pcVar3 = local_c0[3];
  pcVar1 = local_c0[1];
  pcVar25 = local_c0[0];
  puVar22 = (undefined8 *)((long)puVar22 + (long)*(int *)(puVar6 + 0x40));
  *puVar22 = local_c0[3];
  puVar22[1] = local_c0[0];
  puVar22[2] = local_c0[1];
  puVar22[3] = CVar16.unknown;
  _swift_retain(puVar21);
  _swift_retain(puVar8);
  _swift_retain(puVar19);
  _swift_retain(pcVar2);
  _swift_retain(pcVar3);
  _swift_retain(pcVar25);
  _swift_retain(pcVar1);
  _swift_retain(CVar16.unknown);
  FUN_10002a29c(local_80,&DAT_10054b5f8,&DAT_10041c990);
  _swift_release(CVar16.unknown);
  _swift_release(pcVar1);
  _swift_release(pcVar25);
  _swift_release(pcVar3);
  FUN_10002a29c(lVar23,&DAT_10054b5f8,&DAT_10041c990);
  _swift_release(pcVar2);
  _swift_release(puVar19);
  _swift_release(puVar8);
  _swift_release(local_78);
  return;
}

