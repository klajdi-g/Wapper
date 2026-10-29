// rea decompile_all
// name: FUN_10011e2ec
// address: 0x10011e2ec
// body: available
// range: 0x10011e2ec-0x10011e65f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010011e450 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10011e2ec(long param_1,CGFloat param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  Color param_6)

{
  byte bVar1;
  undefined8 *puVar2;
  Design DVar3;
  undefined *puVar4;
  VerticalAlignment VVar5;
  Text TVar6;
  Font FVar7;
  Text TVar8;
  Color CVar9;
  Color CVar10;
  Text TVar11;
  undefined *puVar12;
  Text TVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar17;
  long lVar18;
  long extraout_x12;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *apuStack_90 [2];
  long local_80 [2];
  undefined *local_70;
  undefined *puStack_68;
  
  puVar4 = &DAT_10054a828;
  local_80[1] = param_1;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = (long)apuStack_90 - extraout_x8;
  VVar5.unknown = &DAT_100553690;
  FUN_100002f94(&DAT_100553690,&DAT_1004266f8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(VVar5.unknown + -8) + 0x40));
  lVar18 = lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_80[0] = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar19 = (undefined8 *)(lVar18 - extraout_x12);
  VVar5 = SwiftUI::VerticalAlignment::get_center(VVar5);
  *puVar19 = VVar5.unknown;
  puVar19[1] = 0x4014000000000000;
  *(undefined1 *)(puVar19 + 2) = 0;
  puVar4 = &DAT_100553698;
  puVar12 = &DAT_100426700;
  FUN_100002f94();
  apuStack_90[1] = puVar19;
  FUN_10011e660((long)puVar19 + (long)*(int *)(puVar4 + 0x2c),param_3);
  lVar18 = 0;
  FUN_10040211c();
  bVar1 = *(byte *)(param_3 + *(int *)(lVar18 + 0x24));
  uVar17 = (ulong)bVar1;
  uVar15 = 0x6c61636f4c;
  if (*(char *)(param_3 + *(int *)(lVar18 + 0x40)) == '\0') {
    uVar15 = 0x726568744f;
  }
  if (bVar1 == 0xe) {
    puVar12 = (undefined *)0xe500000000000000;
    uVar17 = uVar15;
  }
  else {
    FUN_100402278();
  }
  local_70 = (undefined *)uVar17;
  puStack_68 = puVar12;
  FUN_100026df4();
  puVar4 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar6 = SwiftUI::Text::_init(uVar17,PTR___type_metadata_for_Swift_String_100523a98,uVar17);
  SwiftUI::Font::Weight::get_light((Weight)TVar6.unknown);
  DVar3 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar18 = CONCAT71((int7)((ulong)TVar6.unknown >> 8),DVar3.value);
  (**(code **)(*(long *)(lVar18 + -8) + 0x38))(lVar20,1,1,lVar18);
  FVar7 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar20,&DAT_10054a828,&DAT_10041e3c0);
  TVar13 = TVar6;
  puVar12 = puVar4;
  uVar15 = uVar17;
  TVar8 = SwiftUI::Text::_font(FVar7.unknown);
  _swift_release(FVar7.unknown);
  FUN_100025b34(TVar6.unknown,puVar4,uVar17);
  _swift_bridgeObjectRelease();
  CVar9 = SwiftUI::Color::get_white(param_6);
  CVar10 = SwiftUI::Color::opacity(0.6,CVar9);
  _swift_release(CVar9.unknown);
  local_70 = CVar10.unknown;
  FUN_100028d58();
  TVar6 = TVar8;
  puVar14 = TVar13.unknown;
  puVar16 = puVar12;
  TVar11 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar8.unknown,TVar13.unknown,puVar12);
  _swift_release(CVar10.unknown);
  _swift_bridgeObjectRelease(uVar15);
  lVar18 = local_80[0];
  puVar2 = apuStack_90[1];
  FUN_1000087e4(apuStack_90[1],local_80[0],&DAT_100553690,&DAT_1004266f8);
  lVar20 = local_80[1];
  FUN_1000087e4(lVar18,local_80[1],&DAT_100553690,&DAT_1004266f8);
  puVar4 = &DAT_1005536a0;
  FUN_100002f94(&DAT_1005536a0,&DAT_100426708);
  puVar19 = (undefined8 *)(lVar20 + *(int *)(puVar4 + 0x30));
  *puVar19 = TVar11.unknown;
  puVar19[1] = TVar6.unknown;
  *(char *)(puVar19 + 2) = (char)puVar14;
  puVar19[3] = puVar16;
  FUN_100007b14(TVar11.unknown,TVar6.unknown,puVar14);
  _swift_bridgeObjectRetain(puVar16);
  FUN_10002a29c(puVar2,&DAT_100553690,&DAT_1004266f8);
  FUN_100025b34(TVar11.unknown,TVar6.unknown,puVar14);
  _swift_bridgeObjectRelease(puVar16);
  FUN_10002a29c(lVar18,&DAT_100553690,&DAT_1004266f8);
  return;
}

