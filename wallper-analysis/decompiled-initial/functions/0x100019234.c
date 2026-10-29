// rea decompile_all
// name: FUN_100019234
// address: 0x100019234
// body: available
// range: 0x100019234-0x100019667 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010001943c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100019234(undefined8 *param_1,CGFloat param_2)

{
  byte bVar1;
  int iVar2;
  Design DVar3;
  undefined *puVar4;
  Text TVar5;
  Font FVar6;
  Text TVar7;
  Color CVar8;
  Text TVar9;
  ContentTransition CVar10;
  code *pcVar11;
  Text TVar12;
  undefined *puVar13;
  undefined *puVar14;
  Color in_x3;
  undefined *puVar15;
  undefined *puVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar17;
  long extraout_x12;
  long lVar18;
  undefined8 *puVar19;
  Color CVar20;
  long lVar21;
  long lVar22;
  undefined *local_90 [2];
  long local_80;
  code *local_78 [3];
  
  puVar4 = &DAT_10054a828;
  local_78[0] = (code *)param_1;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = (long)local_90 - extraout_x8;
  puVar4 = &DAT_10054b5f8;
  FUN_100002f94(&DAT_10054b5f8,&DAT_10041c990);
  local_90[1] = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar17 = lVar21 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_80 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar19 = (undefined8 *)(lVar17 - extraout_x12);
  puVar4 = &DAT_10054b0b0;
  FUN_100002f94(&DAT_10054b0b0,&DAT_10041c2b0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  CVar20.unknown = (undefined *)((long)puVar19 - extraout_x8_01);
  lVar17 = 0;
  FUN_100170d98();
  lVar18 = *(long *)(lVar17 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  lVar22 = (long)CVar20.unknown - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  FUN_10000da30(CVar20.unknown);
  puVar4 = CVar20.unknown;
  (**(code **)(lVar18 + 0x30))(CVar20.unknown,1,lVar17);
  if ((int)puVar4 == 1) {
    pcVar11 = (code *)&DAT_10054b0b0;
    FUN_10002a29c(CVar20.unknown,&DAT_10054b0b0,&DAT_10041c2b0);
    local_90[0] = (undefined *)0x0;
  }
  else {
    FUN_100007e64(CVar20.unknown,lVar22,FUN_100170d98);
    bVar1 = *(byte *)(lVar22 + *(int *)(lVar17 + 0x28));
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        CVar20 = SwiftUI::Color::get_secondary(CVar20);
      }
      else {
        CVar20 = SwiftUI::Color::get_green(CVar20);
      }
    }
    else if (bVar1 == 2) {
      CVar20 = SwiftUI::Color::get_yellow(CVar20);
    }
    else {
      CVar20 = SwiftUI::Color::get_red(CVar20);
    }
    pcVar11 = FUN_100170d98;
    FUN_100029548(lVar22);
    local_90[0] = CVar20.unknown;
    _swift_retain();
  }
  FUN_10000cf3c();
  local_78[1] = (code *)CVar20.unknown;
  local_78[2] = pcVar11;
  FUN_100026df4();
  puVar4 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar5 = SwiftUI::Text::_init
                    (CVar20.unknown,PTR___type_metadata_for_Swift_String_100523a98,CVar20.unknown);
  SwiftUI::Font::Weight::get_regular((Weight)TVar5.unknown);
  DVar3 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar17 = CONCAT71((int7)((ulong)TVar5.unknown >> 8),DVar3.value);
  (**(code **)(*(long *)(lVar17 + -8) + 0x38))(lVar21,1,1,lVar17);
  FVar6 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar21,&DAT_10054a828,&DAT_10041e3c0);
  TVar12 = TVar5;
  puVar13 = puVar4;
  puVar15 = CVar20.unknown;
  TVar7 = SwiftUI::Text::_font(FVar6.unknown);
  _swift_release(FVar6.unknown);
  FUN_100025b34(TVar5.unknown,puVar4,CVar20.unknown);
  _swift_bridgeObjectRelease();
  CVar20 = SwiftUI::Color::get_white(in_x3);
  CVar8 = SwiftUI::Color::opacity(0.8,CVar20);
  _swift_release(CVar20.unknown);
  local_78[1] = (code *)CVar8;
  FUN_100028d58();
  TVar5 = TVar7;
  puVar14 = TVar12.unknown;
  puVar16 = puVar13;
  TVar9 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar7.unknown,TVar12.unknown,puVar13);
  _swift_release(CVar8.unknown);
  _swift_bridgeObjectRelease(puVar15);
  iVar2 = *(int *)(local_90[1] + 0x24);
  CVar10.unknown = &DAT_10054b490;
  FUN_100002f94(&DAT_10054b490,&DAT_10041c7e0);
  SwiftUI::ContentTransition::get_opacity(CVar10);
  puVar4 = &DAT_10041c8a8;
  _swift_getKeyPath();
  *(undefined **)((long)puVar19 + (long)iVar2) = puVar4;
  *puVar19 = TVar9.unknown;
  puVar19[1] = TVar5.unknown;
  *(char *)(puVar19 + 2) = (char)puVar14;
  lVar17 = local_80;
  puVar19[3] = puVar16;
  FUN_1000087e4(puVar19,local_80,&DAT_10054b5f8,&DAT_10041c990);
  pcVar11 = local_78[0];
  puVar13 = local_90[0];
  *(undefined **)local_78[0] = local_90[0];
  puVar4 = &DAT_10054b600;
  FUN_100002f94(&DAT_10054b600,&DAT_10041c998);
  FUN_1000087e4(lVar17,(long)pcVar11 + (long)*(int *)(puVar4 + 0x30),&DAT_10054b5f8,&DAT_10041c990);
  FUN_10002a29c(puVar19,&DAT_10054b5f8,&DAT_10041c990);
  FUN_10002a29c(lVar17,&DAT_10054b5f8,&DAT_10041c990);
  _swift_release(puVar13);
  return;
}

