// rea decompile_all
// name: FUN_1003186a0
// address: 0x1003186a0
// body: available
// range: 0x1003186a0-0x1003189ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003187e0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003186a0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  Design DVar5;
  undefined *puVar6;
  Alignment AVar7;
  _FrameLayout _Var8;
  Text TVar9;
  Font FVar10;
  Text TVar11;
  Color CVar12;
  Color CVar13;
  Text TVar14;
  Text TVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  long extraout_x8;
  long extraout_x8_00;
  long lVar21;
  long extraout_x12;
  long lVar22;
  CGFloat size;
  long alStack_c0 [9];
  undefined8 uStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  puVar6 = &DAT_10054a828;
  alStack_c0[3] = param_1;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = (long)alStack_c0 - extraout_x8;
  puVar6 = &DAT_10055c440;
  FUN_100002f94(&DAT_10055c440,&DAT_1004310c0);
  AVar7.unknown = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar21 = lVar22 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  alStack_c0[2] = lVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = lVar21 - extraout_x12;
  FUN_1003189f0(lVar21);
  SwiftUI::Alignment::get_center(AVar7);
  uVar18 = 0;
  _Var8 = SwiftUI::_FrameLayout::_init((Alignment)0x4034000000000000);
  puVar1 = (undefined8 *)(lVar21 + *(int *)(puVar6 + 0x24));
  alStack_c0[1] = lVar21;
  puVar1[1] = alStack_c0[7];
  *puVar1 = alStack_c0[6];
  puVar1[3] = uStack_78;
  puVar1[2] = alStack_c0[8];
  puVar1[5] = uStack_68;
  puVar1[4] = local_70;
  alStack_c0[4] = *param_2;
  uVar2 = param_2[1];
  alStack_c0[5] = uVar2;
  FUN_100026df4();
  _swift_bridgeObjectRetain(uVar2);
  puVar6 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar9 = SwiftUI::Text::_init
                    (_Var8.unknown,PTR___type_metadata_for_Swift_String_100523a98,_Var8.unknown);
  size.unknown = local_70;
  SwiftUI::Font::Weight::get_medium((Weight)TVar9.unknown);
  DVar5 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar21 = CONCAT71((int7)((ulong)TVar9.unknown >> 8),DVar5.value);
  (**(code **)(*(long *)(lVar21 + -8) + 0x38))(lVar22,1,1,lVar21);
  FVar10 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(lVar22,&DAT_10054a828,&DAT_10041e3c0);
  TVar15 = TVar9;
  puVar16 = puVar6;
  puVar19 = _Var8.unknown;
  TVar11 = SwiftUI::Text::_font(FVar10.unknown);
  _swift_release(FVar10.unknown);
  FUN_100025b34(TVar9.unknown,puVar6,_Var8.unknown);
  _swift_bridgeObjectRelease(uVar18);
  CVar12.unknown = (undefined *)0x0;
  FUN_10031cb80();
  bVar3 = *(byte *)((long)param_2 + (long)*(int *)(CVar12.unknown + 0x18));
  CVar13 = SwiftUI::Color::get_white(CVar12);
  CVar12 = CVar13;
  if ((bVar3 & 1) == 0) {
    CVar12 = SwiftUI::Color::opacity(0.85,CVar13);
    _swift_release(CVar13.unknown);
  }
  TVar9 = TVar11;
  puVar17 = TVar15.unknown;
  puVar20 = puVar16;
  TVar14 = SwiftUI::Text::_foregroundColor(CVar12.unknown);
  _swift_release(CVar12.unknown);
  FUN_100025b34(TVar11.unknown,TVar15.unknown,puVar16);
  _swift_bridgeObjectRelease(puVar19);
  lVar22 = alStack_c0[2];
  lVar21 = alStack_c0[1];
  FUN_1000087e4(alStack_c0[1],alStack_c0[2],&DAT_10055c440,&DAT_1004310c0);
  lVar4 = alStack_c0[3];
  FUN_1000087e4(lVar22,alStack_c0[3],&DAT_10055c440,&DAT_1004310c0);
  puVar6 = &DAT_10055c448;
  FUN_100002f94(&DAT_10055c448,&DAT_1004310c8);
  puVar1 = (undefined8 *)(lVar4 + *(int *)(puVar6 + 0x30));
  *puVar1 = TVar14.unknown;
  puVar1[1] = TVar9.unknown;
  *(char *)(puVar1 + 2) = (char)puVar17;
  puVar1[3] = puVar20;
  FUN_100007b14(TVar14.unknown,TVar9.unknown,puVar17);
  _swift_bridgeObjectRetain(puVar20);
  FUN_10002a29c(lVar21,&DAT_10055c440,&DAT_1004310c0);
  FUN_100025b34(TVar14.unknown,TVar9.unknown,puVar17);
  _swift_bridgeObjectRelease(puVar20);
  FUN_10002a29c(lVar22,&DAT_10055c440,&DAT_1004310c0);
  return;
}

