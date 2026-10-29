// rea decompile_all
// name: FUN_1003a4ff4
// address: 0x1003a4ff4
// body: available
// range: 0x1003a4ff4-0x1003a5347 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003a5114 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003a4ff4(long param_1,CGFloat param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,Color param_6)

{
  undefined8 *puVar1;
  Design DVar2;
  undefined *puVar3;
  VerticalAlignment VVar4;
  Text TVar5;
  Font FVar6;
  Text TVar7;
  Color CVar8;
  Color CVar9;
  Text TVar10;
  undefined *puVar11;
  Text TVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long extraout_x8;
  long extraout_x8_00;
  long lVar16;
  long extraout_x12;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *apuStack_90 [2];
  long local_80 [2];
  undefined *local_70;
  undefined *puStack_68;
  
  puVar3 = &DAT_10054a828;
  local_80[1] = param_1;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)apuStack_90 - extraout_x8;
  VVar4.unknown = &DAT_10055f628;
  FUN_100002f94(&DAT_10055f628,&DAT_100434df8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(VVar4.unknown + -8) + 0x40));
  lVar16 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_80[0] = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar17 = (undefined8 *)(lVar16 - extraout_x12);
  VVar4 = SwiftUI::VerticalAlignment::get_center(VVar4);
  *puVar17 = VVar4.unknown;
  puVar17[1] = 0x4018000000000000;
  *(undefined1 *)(puVar17 + 2) = 0;
  puVar3 = &DAT_10055f630;
  puVar11 = &DAT_100434e00;
  apuStack_90[1] = puVar17;
  FUN_100002f94();
  FUN_1003a5348((long)puVar17 + (long)*(int *)(puVar3 + 0x2c));
  FUN_1001d6588();
  local_70 = (undefined *)param_3;
  puStack_68 = puVar11;
  FUN_100026df4();
  puVar3 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar5 = SwiftUI::Text::_init(param_3,PTR___type_metadata_for_Swift_String_100523a98,param_3);
  SwiftUI::Font::Weight::get_light((Weight)TVar5.unknown);
  DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar16 = CONCAT71((int7)((ulong)TVar5.unknown >> 8),DVar2.value);
  (**(code **)(*(long *)(lVar16 + -8) + 0x38))(lVar18,1,1,lVar16);
  FVar6 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar18,&DAT_10054a828,&DAT_10041e3c0);
  TVar12 = TVar5;
  puVar11 = puVar3;
  uVar14 = param_3;
  TVar7 = SwiftUI::Text::_font(FVar6.unknown);
  _swift_release(FVar6.unknown);
  FUN_100025b34(TVar5.unknown,puVar3,param_3);
  _swift_bridgeObjectRelease();
  CVar8 = SwiftUI::Color::get_white(param_6);
  CVar9 = SwiftUI::Color::opacity(0.6,CVar8);
  _swift_release(CVar8.unknown);
  local_70 = CVar9.unknown;
  FUN_100028d58();
  TVar5 = TVar7;
  puVar13 = TVar12.unknown;
  puVar15 = puVar11;
  TVar10 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar7.unknown,TVar12.unknown,puVar11);
  _swift_release(CVar9.unknown);
  _swift_bridgeObjectRelease(uVar14);
  puVar3 = &DAT_100434ce0;
  _swift_getKeyPath();
  lVar16 = local_80[0];
  puVar1 = apuStack_90[1];
  FUN_1000087e4(apuStack_90[1],local_80[0],&DAT_10055f628,&DAT_100434df8);
  lVar18 = local_80[1];
  FUN_1000087e4(lVar16,local_80[1],&DAT_10055f628,&DAT_100434df8);
  puVar11 = &DAT_10055f638;
  FUN_100002f94(&DAT_10055f638,&DAT_100434e08);
  puVar17 = (undefined8 *)(lVar18 + *(int *)(puVar11 + 0x30));
  *puVar17 = TVar10.unknown;
  puVar17[1] = TVar5.unknown;
  *(char *)(puVar17 + 2) = (char)puVar13;
  puVar17[3] = puVar15;
  puVar17[4] = puVar3;
  puVar17[5] = 1;
  *(undefined1 *)(puVar17 + 6) = 0;
  FUN_100007b14(TVar10.unknown,TVar5.unknown,puVar13);
  _swift_bridgeObjectRetain(puVar15);
  _swift_retain(puVar3);
  FUN_10002a29c(puVar1,&DAT_10055f628,&DAT_100434df8);
  FUN_100025b34(TVar10.unknown,TVar5.unknown,puVar13);
  _swift_release(puVar3);
  _swift_bridgeObjectRelease(puVar15);
  FUN_10002a29c(lVar16,&DAT_10055f628,&DAT_100434df8);
  return;
}

