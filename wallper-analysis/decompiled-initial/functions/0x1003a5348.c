// rea decompile_all
// name: FUN_1003a5348
// address: 0x1003a5348
// body: available
// range: 0x1003a5348-0x1003a5abf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003a54c0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003a5348(undefined8 *param_1,CGFloat param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,Color param_6)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  byte bVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  Design DVar11;
  undefined *puVar12;
  long lVar13;
  Text TVar14;
  Font FVar15;
  Text TVar16;
  Color CVar17;
  Image IVar18;
  Color CVar19;
  Color CVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  LocalizedStringKey LVar24;
  Text TVar25;
  long lVar26;
  long lVar27;
  long extraout_x8;
  long lVar28;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar29;
  undefined8 uVar30;
  CGFloat size;
  String systemName;
  String systemName_00;
  String stringLiteral;
  long local_110;
  long local_108;
  long local_100;
  undefined *local_f8;
  undefined4 local_ec;
  undefined *local_e8;
  undefined *puStack_e0;
  undefined *local_d8;
  long local_d0;
  long local_c8;
  undefined8 *local_c0;
  long local_b8;
  code *local_b0;
  long lStack_a8;
  long local_a0;
  ulong local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined *puStack_70;
  
  puVar12 = &DAT_1005536a8;
  local_108 = param_3;
  local_c0 = param_1;
  FUN_100002f94(&DAT_1005536a8,&DAT_100426710);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar12 + -8) + 0x40));
  lVar28 = (long)&local_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_b8 = lVar28;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar28 = lVar28 - extraout_x12;
  puVar12 = &DAT_10055f640;
  local_c8 = lVar28;
  FUN_100002f94(&DAT_10055f640,&DAT_100434e10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar12 + -8) + 0x40));
  lVar28 = lVar28 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar28;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar28 = lVar28 - extraout_x12_00;
  puVar12 = &DAT_10054a828;
  local_a0 = lVar28;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar28 = lVar28 - extraout_x8_01;
  lVar13 = 0;
  FUN_10025ee04();
  puVar1 = (undefined8 *)(param_3 + *(int *)(lVar13 + 0x14));
  local_88 = (undefined *)*puVar1;
  puVar12 = (undefined *)puVar1[1];
  local_100 = lVar13;
  puStack_80 = puVar12;
  FUN_100026df4();
  _swift_bridgeObjectRetain(puVar12);
  puVar12 = PTR___type_metadata_for_Swift_String_100523a98;
  local_110 = lVar13;
  TVar14 = SwiftUI::Text::_init(lVar13,PTR___type_metadata_for_Swift_String_100523a98,lVar13);
  SwiftUI::Font::Weight::get_medium((Weight)TVar14.unknown);
  DVar11 = SwiftUI::Font::Design::typeMetadataAccessor();
  lStack_a8 = CONCAT71((int7)((ulong)TVar14.unknown >> 8),DVar11.value);
  local_b0 = *(code **)(*(long *)(lStack_a8 + -8) + 0x38);
  (*local_b0)(lVar28,1,1);
  size.unknown = (undefined *)0x402e000000000000;
  FVar15 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar28,&DAT_10054a828,&DAT_10041e3c0);
  TVar25 = TVar14;
  puVar21 = puVar12;
  lVar26 = lVar13;
  TVar16 = SwiftUI::Text::_font(FVar15.unknown);
  _swift_release(FVar15.unknown);
  lVar27 = local_108;
  FUN_100025b34(TVar14.unknown,puVar12,lVar13);
  _swift_bridgeObjectRelease();
  CVar17 = SwiftUI::Color::get_white(param_6);
  local_88 = CVar17.unknown;
  FUN_100028d58();
  TVar14 = TVar16;
  puVar12 = TVar25.unknown;
  puVar22 = puVar21;
  puStack_e0 = (undefined *)SwiftUI::Text::_foregroundStyle();
  local_ec = SUB84(puVar12,0);
  local_e8 = TVar14.unknown;
  local_d8 = puVar22;
  FUN_100025b34(TVar16.unknown,TVar25.unknown,puVar21);
  _swift_release(CVar17.unknown);
  _swift_bridgeObjectRelease(lVar26);
  puVar12 = &DAT_100434ce0;
  _swift_getKeyPath();
  bVar4 = *(byte *)(lVar27 + *(int *)(local_100 + 0x1c));
  uVar29 = (ulong)bVar4;
  local_f8 = puVar12;
  if (bVar4 == 0) {
    uVar30 = 1;
    lVar26 = local_a0;
  }
  else {
    pvVar2 = (void *)0xea00000000006c6c;
    pcVar5 = (char *)0x69662e6b636f6c63;
    if (bVar4 != 2) {
      pvVar2 = (void *)0x80000001004dc390;
      pcVar5 = (char *)0xd000000000000018;
    }
    pvVar3 = (void *)0x80000001004dc3b0;
    pcVar6 = (char *)0xd000000000000016;
    if (bVar4 != 1) {
      pvVar3 = pvVar2;
      pcVar6 = pcVar5;
    }
    systemName.bridgeObject = pvVar3;
    systemName.str = pcVar6;
    IVar18 = SwiftUI::Image::init(systemName);
    SwiftUI::Font::Weight::get_semibold((Weight)IVar18.unknown);
    (*local_b0)(lVar28,1,1,lStack_a8);
    FVar15 = SwiftUI::Font::_system(size,(Font)0x0);
    puVar12 = &DAT_10054a828;
    FUN_10002a29c(lVar28,&DAT_10054a828,&DAT_10041e3c0);
    CVar17.unknown = &DAT_100434c08;
    _swift_getKeyPath();
    CVar19 = SwiftUI::Color::get_white(CVar17);
    size.unknown = (undefined *)0x3fe0000000000000;
    CVar20 = SwiftUI::Color::opacity(0.5,CVar19);
    _swift_release(CVar19.unknown);
    local_88 = IVar18.unknown;
    puStack_80 = CVar17.unknown;
    local_78 = FVar15.unknown;
    puStack_70 = CVar20.unknown;
    FUN_10025eed8();
    puVar21 = &DAT_10054b280;
    local_98 = uVar29;
    puStack_90 = puVar12;
    FUN_100002f94(&DAT_10054b280,&DAT_10041c5b0);
    puVar22 = puVar21;
    FUN_1000297fc();
    lVar26 = local_a0;
    (extension_SwiftUI)::SwiftUI::View::_help
              (local_a0,&local_98,puVar21,PTR___type_metadata_for_Swift_String_100523a98,puVar22,
               local_110);
    _swift_release(CVar20.unknown);
    _swift_release(FVar15.unknown);
    _swift_release(CVar17.unknown);
    _swift_release(IVar18.unknown);
    _swift_bridgeObjectRelease(puVar12);
    uVar30 = 0;
  }
  puVar12 = &DAT_10055f648;
  FUN_100002f94(&DAT_10055f648,&DAT_100434e18);
  (**(code **)(*(long *)(puVar12 + -8) + 0x38))(lVar26,uVar30,1,puVar12);
  lVar23 = 0;
  FUN_1003a67f8();
  lVar13 = local_c8;
  bVar10 = *(char *)(lVar27 + *(int *)(lVar23 + 0x18)) != '\x01';
  if (!bVar10) {
    systemName_00.bridgeObject = (void *)0x80000001004dbcf0;
    systemName_00.str = (char *)0xd000000000000010;
    IVar18 = SwiftUI::Image::init(systemName_00);
    SwiftUI::Font::Weight::get_semibold((Weight)IVar18.unknown);
    lVar27 = lStack_a8;
    (*local_b0)(lVar28,1,1,lStack_a8);
    FVar15 = SwiftUI::Font::_system(size,(Font)0x0);
    FUN_10002a29c(lVar28,&DAT_10054a828,&DAT_10041e3c0);
    CVar17.unknown = &DAT_100434c08;
    _swift_getKeyPath();
    CVar19 = SwiftUI::Color::get_white(CVar17);
    CVar20 = SwiftUI::Color::opacity(0.7,CVar19);
    _swift_release(CVar19.unknown);
    uVar30 = 0xeb00000000776f6e;
    stringLiteral.bridgeObject = (void *)0xeb00000000776f6e;
    stringLiteral.str = (char *)0x20676e6979616c50;
    local_88 = IVar18.unknown;
    puStack_80 = CVar17.unknown;
    local_78 = FVar15.unknown;
    puStack_70 = CVar20.unknown;
    LVar24 = SwiftUI::LocalizedStringKey::init(stringLiteral);
    FUN_100002f94(&DAT_10054b280,&DAT_10041c5b0);
    FUN_1000297fc();
    (extension_SwiftUI)::SwiftUI::View::_help(LVar24);
    _swift_release(CVar20.unknown);
    _swift_release(FVar15.unknown);
    _swift_release(CVar17.unknown);
    _swift_release(IVar18.unknown);
    lVar26 = local_a0;
    _swift_bridgeObjectRelease(lVar27);
    _swift_bridgeObjectRelease(uVar30);
  }
  puVar12 = &DAT_1005536b0;
  FUN_100002f94(&DAT_1005536b0,&DAT_100426748);
  (**(code **)(*(long *)(puVar12 + -8) + 0x38))(lVar13,bVar10,1,puVar12);
  lVar27 = local_d0;
  FUN_1000087e4(lVar26,local_d0,&DAT_10055f640,&DAT_100434e10);
  lVar26 = local_b8;
  FUN_1000087e4(lVar13,local_b8,&DAT_1005536a8,&DAT_100426710);
  puVar1 = local_c0;
  puVar9 = local_d8;
  puVar8 = puStack_e0;
  puVar22 = local_e8;
  uVar7 = local_ec;
  puVar21 = local_f8;
  *local_c0 = puStack_e0;
  local_c0[1] = local_e8;
  *(char *)(local_c0 + 2) = (char)local_ec;
  local_c0[3] = local_d8;
  local_c0[4] = local_f8;
  local_c0[5] = 1;
  *(undefined1 *)(local_c0 + 6) = 0;
  puVar12 = &DAT_10055f650;
  FUN_100002f94(&DAT_10055f650,&DAT_100434e20);
  FUN_1000087e4(lVar27,(long)puVar1 + (long)*(int *)(puVar12 + 0x30),&DAT_10055f640,&DAT_100434e10);
  FUN_1000087e4(lVar26,(long)puVar1 + (long)*(int *)(puVar12 + 0x40),&DAT_1005536a8,&DAT_100426710);
  FUN_100007b14(puVar8,puVar22,uVar7);
  _swift_bridgeObjectRetain(puVar9);
  _swift_retain(puVar21);
  FUN_10002a29c(lVar13,&DAT_1005536a8,&DAT_100426710);
  FUN_10002a29c(local_a0,&DAT_10055f640,&DAT_100434e10);
  FUN_10002a29c(lVar26,&DAT_1005536a8,&DAT_100426710);
  FUN_10002a29c(lVar27,&DAT_10055f640,&DAT_100434e10);
  FUN_100025b34(puVar8,puVar22,uVar7);
  _swift_release(puVar21);
  _swift_bridgeObjectRelease(puVar9);
  return;
}

