// rea decompile_all
// name: FUN_10033d9f4
// address: 0x10033d9f4
// body: available
// range: 0x10033d9f4-0x10033dfb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010033df24 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10033d9f4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,Color param_5)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  Design DVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  VerticalAlignment VVar8;
  AnyTransition AVar9;
  undefined *puVar10;
  LocalizedStringKey LVar11;
  Text TVar12;
  Font FVar13;
  Text TVar14;
  Color CVar15;
  Color CVar16;
  Text TVar17;
  Text TVar18;
  uint uVar19;
  undefined *puVar20;
  ulong uVar21;
  void *pvVar22;
  ulong uVar23;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar24;
  long extraout_x12;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  long lVar28;
  String stringLiteral;
  undefined8 auStack_c0 [2];
  undefined *apuStack_b0 [3];
  ulong local_98 [3];
  undefined *puStack_80;
  undefined8 local_78;
  undefined *local_70;
  char local_62;
  char local_61;
  
  puVar5 = &DAT_10054a828;
  apuStack_b0[2] = (undefined *)param_3;
  local_78 = param_1;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar28 = (long)apuStack_b0 - extraout_x8;
  puVar5 = &DAT_10055ceb0;
  FUN_100002f94(&DAT_10055ceb0,&DAT_100432418);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar26 = (undefined8 *)(lVar28 - extraout_x8_00);
  puStack_80 = (undefined *)SwiftUI::OpacityTransition::typeMetadataAccessor();
  local_98[2] = *(ulong *)(puStack_80 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_98[2] + 0x40));
  lVar24 = (long)puVar26 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_98[0] = lVar24;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar24 = lVar24 - extraout_x12;
  puVar6 = &DAT_10055ceb8;
  local_98[1] = lVar24;
  FUN_100002f94(&DAT_10055ceb8,&DAT_100432420);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar25 = (undefined8 *)(lVar24 - extraout_x8_02);
  uVar27 = *(undefined8 *)(param_2 + 8);
  puVar7 = &DAT_1004322c0;
  _swift_getKeyPath(&DAT_1004322c0);
  VVar8.unknown = &DAT_1004322e8;
  _swift_getKeyPath();
  Combine::Published::_get_subscript(&local_61,uVar27,puVar7,VVar8.unknown);
  _swift_release(puVar7);
  _swift_release();
  if ((local_61 == '\x01') && (param_4 != 0)) {
    VVar8 = SwiftUI::VerticalAlignment::get_center(VVar8);
    *puVar25 = VVar8.unknown;
    puVar25[1] = 0x4022000000000000;
    *(undefined1 *)(puVar25 + 2) = 0;
    puVar7 = &DAT_10055cee8;
    FUN_100002f94(&DAT_10055cee8,&DAT_100432438);
    puVar10 = apuStack_b0[2];
    FUN_10033dfb8((long)puVar25 + (long)*(int *)(puVar7 + 0x2c),param_2,apuStack_b0[2],param_4);
    puVar7 = &DAT_10055ced8;
    FUN_100002f94(&DAT_10055ced8,&DAT_100432430);
    iVar3 = *(int *)(puVar7 + 0x34);
    *(undefined8 *)((long)puVar25 + (long)iVar3) = puVar10;
    ((undefined8 *)((long)puVar25 + (long)iVar3))[1] = param_4;
    _swift_bridgeObjectRetain(param_4);
    uVar23 = local_98[1];
    SwiftUI::OpacityTransition::init();
    puVar10 = puStack_80;
    uVar21 = local_98[2];
    (**(code **)(local_98[2] + 0x10))(local_98[0],uVar23,puStack_80);
    puVar7 = &DAT_10054ae80;
    FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                  PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
    AVar9 = SwiftUI::AnyTransition::_init(puVar7,puVar10,puVar7);
    (**(code **)(uVar21 + 8))(uVar23,puVar10);
    *(undefined **)((long)puVar25 + (long)*(int *)(puVar6 + 0x24)) = AVar9.unknown;
    FUN_1000087e4(puVar25,puVar26,&DAT_10055ceb8,&DAT_100432420);
    _swift_storeEnumTagMultiPayload(puVar26,puVar5,0);
    FUN_100002f94(&DAT_10055cec0,&DAT_100432428);
    FUN_100341df0();
    FUN_100341ea8();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar26);
    FUN_10002a29c(puVar25,&DAT_10055ceb8,&DAT_100432420);
  }
  else {
    puVar7 = &DAT_1004322c0;
    _swift_getKeyPath(&DAT_1004322c0);
    puVar10 = &DAT_1004322e8;
    _swift_getKeyPath(&DAT_1004322e8);
    puVar20 = puVar10;
    Combine::Published::_get_subscript(&local_62,uVar27,puVar7,puVar10);
    uVar19 = (uint)puVar20;
    _swift_release(puVar7);
    _swift_release(puVar10);
    pcVar1 = "p follows whatever you play.";
    if (local_62 == '\0') {
      pcVar1 = "N/A (not fetched yet)";
    }
    pcVar2 = (char *)0xd000000000000035;
    if (local_62 == '\0') {
      pcVar2 = (char *)0xd00000000000003c;
    }
    stringLiteral.bridgeObject = (void *)((ulong)pcVar1 | 0x8000000000000000);
    stringLiteral.str = pcVar2;
    LVar11 = SwiftUI::LocalizedStringKey::init(stringLiteral);
    *(undefined2 *)(puVar25 + -1) = 0x100;
    puVar25[-2] = 0;
    uVar21 = (ulong)(uVar19 & 1);
    TVar12 = SwiftUI::Text::_init(LVar11);
    DVar4 = SwiftUI::Font::Design::typeMetadataAccessor();
    lVar24 = CONCAT71((int7)((ulong)TVar12.unknown >> 8),DVar4.value);
    (**(code **)(*(long *)(lVar24 + -8) + 0x38))(lVar28,1,1,lVar24);
    FVar13 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
    FUN_10002a29c(lVar28,&DAT_10054a828,&DAT_10041e3c0);
    TVar18 = TVar12;
    pvVar22 = stringLiteral.bridgeObject;
    uVar23 = uVar21;
    TVar14 = SwiftUI::Text::_font(FVar13.unknown);
    apuStack_b0[1] = puVar5;
    apuStack_b0[2] = puVar6;
    _swift_release(FVar13.unknown);
    FUN_100025b34(TVar12.unknown,stringLiteral.bridgeObject,uVar21);
    _swift_bridgeObjectRelease();
    CVar15 = SwiftUI::Color::get_white(param_5);
    CVar16 = SwiftUI::Color::opacity(0.6,CVar15);
    _swift_release(CVar15.unknown);
    local_70 = CVar16.unknown;
    FUN_100028d58();
    TVar12 = TVar14;
    puVar7 = TVar18.unknown;
    stringLiteral.bridgeObject = pvVar22;
    TVar17 = SwiftUI::Text::_foregroundStyle();
    FUN_100025b34(TVar14.unknown,TVar18.unknown,pvVar22);
    _swift_release(CVar16.unknown);
    _swift_bridgeObjectRelease(uVar23);
    uVar23 = local_98[1];
    SwiftUI::OpacityTransition::init();
    puVar6 = puStack_80;
    uVar21 = local_98[2];
    (**(code **)(local_98[2] + 0x10))(local_98[0],uVar23,puStack_80);
    puVar5 = &DAT_10054ae80;
    FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                  PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
    AVar9 = SwiftUI::AnyTransition::_init(puVar5,puVar6,puVar5);
    (**(code **)(uVar21 + 8))(uVar23,puVar6);
    *puVar26 = TVar17.unknown;
    puVar26[1] = TVar12.unknown;
    *(char *)(puVar26 + 2) = (char)puVar7;
    puVar26[3] = stringLiteral.bridgeObject;
    puVar26[4] = AVar9.unknown;
    _swift_storeEnumTagMultiPayload(puVar26,apuStack_b0[1],1);
    FUN_100002f94(&DAT_10055cec0,&DAT_100432428);
    FUN_100341df0();
    FUN_100341ea8();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar26);
  }
  return;
}

