// rea decompile_all
// name: FUN_1003d874c
// address: 0x1003d874c
// body: available
// range: 0x1003d874c-0x1003d8d0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003d874c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  Color param_5)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  PlainButtonStyle PVar7;
  long lVar8;
  undefined *puVar9;
  Text TVar10;
  Font FVar11;
  Text TVar12;
  Color CVar13;
  Text TVar14;
  State SVar15;
  undefined *puVar16;
  Text TVar17;
  CGFloat CVar18;
  long extraout_x8;
  long lVar19;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar20;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 extraout_x13;
  undefined *puVar21;
  CGFloat size;
  undefined8 uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  String SVar27;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  long local_90;
  undefined8 local_88;
  undefined8 *local_80;
  char local_71;
  long local_70;
  undefined *local_68;
  
  PVar7 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  lVar24 = *(long *)(PVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar24 + 0x40));
  lVar25 = (long)&local_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  FUN_1003e4bc8();
  local_f0 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar25 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_10054b348;
  local_e8 = extraout_x12;
  local_e0 = lVar19;
  FUN_100002f94(&DAT_10054b348,&DAT_100430ef0);
  lVar26 = *(long *)(puVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar19 - extraout_x8_00;
  size.unknown = &DAT_10055c1f8;
  puVar16 = &DAT_1004367e0;
  FUN_100002f94();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(size.unknown + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_90 = (lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_00;
  plVar1 = (long *)(param_2 + *(int *)(lVar8 + 0x24));
  puVar21 = (undefined *)plVar1[1];
  local_d8 = lVar19;
  local_d0 = lVar26;
  local_c8 = puVar9;
  local_c0 = lVar25;
  local_b8 = lVar24;
  local_b0 = PVar7.unknown;
  local_a8 = lVar8;
  local_88 = extraout_x13;
  local_80 = param_1;
  if (puVar21 == (undefined *)0x0) {
    size.unknown = *(undefined **)(param_2 + *(int *)(lVar8 + 0x30));
    if (size.unknown == (undefined *)0x0) {
      FUN_100279594(0);
      FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1003d8d10);
      (*pcVar6)();
    }
    _swift_retain(size.unknown);
    lVar8 = param_2;
    FUN_10026a7c8();
    _swift_release();
    puVar21 = (undefined *)0x0;
  }
  else {
    lVar8 = *plVar1;
    puVar16 = puVar21;
  }
  local_70 = lVar8;
  local_68 = puVar16;
  FUN_100026df4();
  _swift_bridgeObjectRetain(puVar21);
  puVar9 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar10 = SwiftUI::Text::_init();
  SVar27.bridgeObject = (void *)0xe700000000000000;
  SVar27.str = (char *)0x616967726f6547;
  FVar11 = SwiftUI::Font::custom(SVar27,size,param_5.unknown);
  TVar17 = TVar10;
  puVar16 = puVar9;
  CVar18.unknown = size.unknown;
  TVar12 = SwiftUI::Text::_font(FVar11.unknown);
  _swift_release(FVar11.unknown);
  FUN_100025b34(TVar10.unknown,puVar9,size.unknown);
  _swift_bridgeObjectRelease();
  CVar13 = SwiftUI::Color::get_white(param_5);
  TVar10 = TVar12;
  puVar21 = TVar17.unknown;
  puVar9 = puVar16;
  TVar14 = SwiftUI::Text::_foregroundColor(CVar13.unknown);
  local_98 = puVar9;
  _swift_release(CVar13.unknown);
  FUN_100025b34(TVar12.unknown,TVar17.unknown,puVar16);
  _swift_bridgeObjectRelease(CVar18.unknown);
  puVar9 = &DAT_1004360d0;
  _swift_getKeyPath();
  local_a0 = puVar9;
  if ((*(byte *)(param_2 + *(int *)(local_a8 + 0x20)) & 1) == 0) {
    uVar22 = 1;
    lVar8 = local_90;
  }
  else {
    puVar2 = (undefined1 *)(param_2 + *(int *)(local_a8 + 0x34));
    local_68 = *(undefined **)(puVar2 + 8);
    local_70 = CONCAT71(local_70._1_7_,*puVar2);
    SVar15.unknown = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::get_wrappedValue(SVar15);
    lVar8 = local_90;
    lVar19 = local_e0;
    if (local_71 == '\x01') {
      FUN_100029504(param_2,local_e0,FUN_1003e4bc8);
      uVar20 = (ulong)*(byte *)(local_f0 + 0x50);
      uVar23 = uVar20 + 0x10 & (uVar20 ^ 0xffffffffffffffff);
      puVar9 = &DAT_10053e068;
      _swift_allocObject(&DAT_10053e068,uVar23 + local_e8,uVar20 | 7);
      FUN_100007e64(lVar19,puVar9 + uVar23,FUN_1003e4bc8);
      FUN_100002f94(&DAT_10054b280,&DAT_10041c5b0);
      FUN_1000297fc();
      lVar19 = local_d8;
      SwiftUI::Button::_init();
      lVar24 = local_c0;
      SwiftUI::PlainButtonStyle::init();
      puVar9 = &DAT_10054b4f0;
      FUN_1000087a0(&DAT_10054b4f0,&DAT_10054b348,&DAT_100430ef0,
                    PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
      puVar16 = &DAT_10054a8b0;
      FUN_1000036d0(&DAT_10054a8b0,PTR_typeMetadataAccessor_100522380,
                    PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370)
      ;
      puVar4 = local_b0;
      puVar3 = local_c8;
      (extension_SwiftUI)::SwiftUI::View::_buttonStyle
                (lVar8,lVar24,local_c8,local_b0,puVar9,puVar16);
      (**(code **)(local_b8 + 8))(lVar24,puVar4);
      (**(code **)(local_d0 + 8))(lVar19,puVar3);
      uVar22 = 0;
    }
    else {
      uVar22 = 1;
    }
  }
  puVar9 = &DAT_10055c218;
  FUN_100002f94(&DAT_10055c218,&DAT_100430f20);
  (**(code **)(*(long *)(puVar9 + -8) + 0x38))(lVar8,uVar22,1,puVar9);
  FUN_1000087e4(lVar8,local_88,&DAT_10055c1f8,&DAT_1004367e0);
  puVar5 = local_80;
  puVar3 = local_98;
  puVar16 = local_a0;
  *local_80 = TVar14.unknown;
  local_80[1] = TVar10.unknown;
  *(char *)(local_80 + 2) = (char)puVar21;
  local_80[3] = local_98;
  local_80[4] = local_a0;
  local_80[5] = 1;
  *(undefined1 *)(local_80 + 6) = 0;
  puVar9 = &DAT_100560b20;
  FUN_100002f94(&DAT_100560b20,&DAT_1004367f0);
  FUN_1000087e4(local_88,(long)puVar5 + (long)*(int *)(puVar9 + 0x30),&DAT_10055c1f8,&DAT_1004367e0)
  ;
  FUN_100007b14(TVar14.unknown,TVar10.unknown,puVar21);
  _swift_bridgeObjectRetain(puVar3);
  _swift_retain(puVar16);
  FUN_10002a29c(lVar8,&DAT_10055c1f8,&DAT_1004367e0);
  FUN_10002a29c(local_88,&DAT_10055c1f8,&DAT_1004367e0);
  FUN_100025b34(TVar14.unknown,TVar10.unknown,puVar21);
  _swift_release(puVar16);
  _swift_bridgeObjectRelease(puVar3);
  return;
}

