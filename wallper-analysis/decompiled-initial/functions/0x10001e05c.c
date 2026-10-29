// rea decompile_all
// name: FUN_10001e05c
// address: 0x10001e05c
// body: available
// range: 0x10001e05c-0x10001e353 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10001e05c(undefined8 *param_1,CGFloat param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  Design DVar2;
  undefined *puVar3;
  long lVar4;
  byte *pbVar5;
  Text TVar6;
  undefined7 extraout_var;
  Font FVar7;
  Text TVar8;
  Text TVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  byte *pbVar13;
  Color CVar14;
  long lVar15;
  Color CVar16;
  byte abStack_80 [8];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar3 = &DAT_10054a828;
  local_78 = param_1;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pbVar13 = abStack_80 + -extraout_x8;
  puVar3 = &DAT_10054b0b0;
  puVar11 = &DAT_10041c2b0;
  FUN_100002f94(&DAT_10054b0b0,&DAT_10041c2b0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  CVar16.unknown = pbVar13 + -extraout_x8_00;
  lVar4 = 0;
  FUN_100170d98();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  lVar15 = (long)CVar16.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_1000087e4(param_3,CVar16.unknown,&DAT_10054b0b0,&DAT_10041c2b0);
  pbVar5 = CVar16.unknown;
  (**(code **)(lVar12 + 0x30))(CVar16.unknown,1,lVar4);
  if ((int)pbVar5 == 1) {
    FUN_10002a29c(CVar16.unknown,&DAT_10054b0b0,&DAT_10041c2b0);
    CVar14.unknown = (byte *)0x0;
  }
  else {
    FUN_100007e64(CVar16.unknown,lVar15,FUN_100170d98);
    bVar1 = *(byte *)(lVar15 + *(int *)(lVar4 + 0x28));
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        CVar14 = SwiftUI::Color::get_secondary(CVar16);
      }
      else {
        CVar14 = SwiftUI::Color::get_green(CVar16);
      }
    }
    else if (bVar1 == 2) {
      CVar14 = SwiftUI::Color::get_yellow(CVar16);
    }
    else {
      CVar14 = SwiftUI::Color::get_red(CVar16);
    }
    FUN_100029548(lVar15,FUN_100170d98);
    CVar16.unknown = CVar14.unknown;
    _swift_retain();
  }
  local_70 = param_5;
  uStack_68 = param_6;
  FUN_100026df4();
  _swift_bridgeObjectRetain(param_6);
  puVar3 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar6 = SwiftUI::Text::_init();
  SwiftUI::Font::Weight::get_bold((Weight)TVar6.unknown);
  DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar2.value) + -8) + 0x38))
            (pbVar13,1,1,CONCAT71(extraout_var,DVar2.value));
  FVar7 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(pbVar13,&DAT_10054a828,&DAT_10041e3c0);
  TVar9 = TVar6;
  puVar10 = puVar3;
  pbVar5 = CVar16.unknown;
  TVar8 = SwiftUI::Text::_font(FVar7.unknown);
  _swift_release(FVar7.unknown);
  FUN_100025b34(TVar6.unknown,puVar3,CVar16.unknown);
  _swift_bridgeObjectRelease(puVar11);
  _swift_retain(CVar14.unknown);
  FUN_100007b14(TVar8.unknown,TVar9.unknown,puVar10);
  _swift_bridgeObjectRetain(pbVar5);
  _swift_release(CVar14.unknown);
  *local_78 = CVar14.unknown;
  local_78[1] = TVar8.unknown;
  local_78[2] = TVar9.unknown;
  *(char *)(local_78 + 3) = (char)puVar10;
  local_78[4] = pbVar5;
  FUN_100025b34(TVar8.unknown,TVar9.unknown,puVar10);
  _swift_release(CVar14.unknown);
  _swift_bridgeObjectRelease(pbVar5);
  return;
}

