// rea decompile_all
// name: FUN_1003b5fb0
// address: 0x1003b5fb0
// body: available
// range: 0x1003b5fb0-0x1003b6433 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003b61ac */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003b5fb0(undefined8 *param_1,long param_2,undefined8 param_3,uint param_4,Color param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  Design DVar6;
  TruncationMode TVar7;
  undefined *puVar8;
  LocalizedStringKey LVar9;
  Text TVar10;
  Font FVar11;
  Text TVar12;
  Color CVar13;
  CGFloat CVar14;
  Color CVar16;
  Text TVar17;
  undefined *puVar18;
  Text TVar19;
  CGFloat size;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  long extraout_x8;
  long extraout_x8_00;
  long lVar23;
  long extraout_x12;
  undefined8 *puVar24;
  CGFloat size_00;
  String stringLiteral;
  String SVar25;
  undefined8 auStack_d0 [2];
  long alStack_c0 [3];
  undefined4 local_a4;
  undefined *local_a0 [4];
  long local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long lVar15;
  
  puVar8 = &DAT_10054a828;
  alStack_c0[1] = param_2;
  local_78 = param_1;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_10055a5e0;
  alStack_c0[2] = (long)alStack_c0 - extraout_x8;
  FUN_100002f94(&DAT_10055a5e0,&DAT_10042e6a0);
  local_a0[3] = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar23 = ((long)alStack_c0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_80 = lVar23;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar24 = (undefined8 *)(lVar23 - extraout_x12);
  puVar18 = (undefined *)0x80000001004e6ff0;
  stringLiteral.bridgeObject = (void *)0x80000001004e6ff0;
  stringLiteral.str = (char *)0xd00000000000001a;
  LVar9 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)(puVar24 + -1) = 0x100;
  puVar24[-2] = 0;
  size.unknown = (undefined *)(ulong)(param_4 & 1);
  TVar10 = SwiftUI::Text::_init(LVar9);
  size_00.unknown = (undefined *)0x4036000000000000;
  SVar25.bridgeObject = (void *)0xe700000000000000;
  SVar25.str = (char *)0x616967726f6547;
  FVar11 = SwiftUI::Font::custom(SVar25,size,param_5.unknown);
  TVar19 = TVar10;
  puVar8 = puVar18;
  CVar14.unknown = size.unknown;
  TVar12 = SwiftUI::Text::_font(FVar11.unknown);
  _swift_release(FVar11.unknown);
  FUN_100025b34(TVar10.unknown,puVar18,size.unknown);
  _swift_bridgeObjectRelease();
  CVar13 = SwiftUI::Color::get_white(param_5);
  TVar10 = TVar12;
  puVar18 = TVar19.unknown;
  CVar16.unknown = puVar8;
  local_a0[2] = (undefined *)SwiftUI::Text::_foregroundColor(CVar13.unknown);
  local_a4 = SUB84(puVar18,0);
  local_a0[0] = TVar10.unknown;
  local_a0[1] = CVar16.unknown;
  _swift_release(CVar13.unknown);
  FUN_100025b34(TVar12.unknown,TVar19.unknown,puVar8);
  _swift_bridgeObjectRelease(CVar14.unknown);
  local_70 = *(undefined8 *)(alStack_c0[1] + 0x10);
  uVar1 = *(undefined8 *)(alStack_c0[1] + 0x18);
  uStack_68 = uVar1;
  FUN_100026df4();
  _swift_bridgeObjectRetain(uVar1);
  puVar8 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar10 = SwiftUI::Text::_init
                     (CVar14.unknown,PTR___type_metadata_for_Swift_String_100523a98,CVar14.unknown);
  SwiftUI::Font::Weight::get_regular((Weight)TVar10.unknown);
  DVar6 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar23 = alStack_c0[2];
  lVar15 = CONCAT71((int7)((ulong)TVar10.unknown >> 8),DVar6.value);
  (**(code **)(*(long *)(lVar15 + -8) + 0x38))(alStack_c0[2],1,1,lVar15);
  FVar11 = SwiftUI::Font::_system(size_00,(Font)0x0);
  FUN_10002a29c(lVar23,&DAT_10054a828,&DAT_10041e3c0);
  TVar19 = TVar10;
  puVar18 = puVar8;
  puVar21 = CVar14.unknown;
  TVar12 = SwiftUI::Text::_font(FVar11.unknown);
  _swift_release(FVar11.unknown);
  FUN_100025b34(TVar10.unknown,puVar8,CVar14.unknown);
  _swift_bridgeObjectRelease();
  CVar16 = SwiftUI::Color::get_white(CVar16);
  CVar13 = SwiftUI::Color::opacity(0.75,CVar16);
  _swift_release(CVar16.unknown);
  TVar10 = TVar12;
  puVar20 = TVar19.unknown;
  puVar22 = puVar18;
  TVar17 = SwiftUI::Text::_foregroundColor(CVar13.unknown);
  _swift_release(CVar13.unknown);
  FUN_100025b34(TVar12.unknown,TVar19.unknown,puVar18);
  _swift_bridgeObjectRelease(puVar21);
  puVar8 = &DAT_100435840;
  _swift_getKeyPath();
  iVar3 = *(int *)(local_a0[3] + 0x24);
  puVar18 = &DAT_10055a5e8;
  FUN_100002f94(&DAT_10055a5e8,&DAT_10042e6d8);
  iVar4 = *(int *)(puVar18 + 0x1c);
  uVar2 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_Text_TruncationMode_tail_SwiftUI_Text_TruncationMode_Type___>_SwiftUI_Text_TruncationMode_100522d98
  ;
  TVar7 = SwiftUI::Text::TruncationMode::typeMetadataAccessor();
  lVar23 = CONCAT71((int7)((ulong)puVar18 >> 8),TVar7.value);
  (**(code **)(*(long *)(lVar23 + -8) + 0x68))
            ((long)puVar24 + (long)iVar3 + (long)iVar4,uVar2,lVar23);
  puVar18 = &DAT_100435870;
  _swift_getKeyPath();
  *(undefined **)((long)puVar24 + (long)iVar3) = puVar18;
  *puVar24 = TVar17.unknown;
  puVar24[1] = TVar10.unknown;
  *(char *)(puVar24 + 2) = (char)puVar20;
  puVar24[3] = puVar22;
  puVar24[4] = puVar8;
  puVar24[5] = 1;
  *(undefined1 *)(puVar24 + 6) = 0;
  lVar23 = local_80;
  FUN_1000087e4(puVar24,local_80,&DAT_10055a5e0,&DAT_10042e6a0);
  puVar5 = local_78;
  puVar21 = local_a0[2];
  puVar20 = local_a0[1];
  puVar18 = local_a0[0];
  uVar2 = local_a4;
  *local_78 = local_a0[2];
  local_78[1] = local_a0[0];
  *(char *)(local_78 + 2) = (char)local_a4;
  local_78[3] = local_a0[1];
  puVar8 = &DAT_10055fe18;
  FUN_100002f94(&DAT_10055fe18,&DAT_1004358f0);
  FUN_1000087e4(lVar23,(long)puVar5 + (long)*(int *)(puVar8 + 0x30),&DAT_10055a5e0,&DAT_10042e6a0);
  FUN_100007b14(puVar21,puVar18,uVar2);
  _swift_bridgeObjectRetain(puVar20);
  FUN_10002a29c(puVar24,&DAT_10055a5e0,&DAT_10042e6a0);
  FUN_10002a29c(lVar23,&DAT_10055a5e0,&DAT_10042e6a0);
  FUN_100025b34(puVar21,puVar18,uVar2);
  _swift_bridgeObjectRelease(puVar20);
  return;
}

