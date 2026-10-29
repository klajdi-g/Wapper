// rea decompile_all
// name: FUN_100070298
// address: 0x100070298
// body: available
// range: 0x100070298-0x10007071f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100070298(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  ControlSize CVar5;
  ColorScheme CVar6;
  Design DVar7;
  undefined *puVar8;
  undefined *puVar9;
  State SVar10;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined *puVar11;
  undefined *puVar12;
  char *pcVar13;
  LocalizedStringKey LVar14;
  Text TVar15;
  undefined7 extraout_var_01;
  Font FVar16;
  Text TVar17;
  void *pvVar18;
  Text TVar19;
  uint uVar20;
  undefined *puVar21;
  ulong uVar22;
  void *pvVar23;
  ulong uVar24;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar25;
  undefined8 *puVar26;
  long lVar27;
  long lVar28;
  CGFloat size;
  String stringLiteral;
  undefined8 uStack_a0;
  undefined2 auStack_98 [4];
  undefined *local_90 [3];
  undefined8 uStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  puVar8 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar27 = (long)local_90 - extraout_x8;
  puVar8 = &DAT_10054e728;
  FUN_100002f94(&DAT_10054e728,&DAT_10041f7e0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar26 = (undefined8 *)(lVar27 - extraout_x8_00);
  puVar9 = &DAT_10054e730;
  FUN_100002f94(&DAT_10054e730,&DAT_10041f7e8);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar28 = (long)puVar26 - extraout_x8_01;
  uStack_68 = *(undefined8 *)(param_2 + 0x40);
  size.unknown = *(undefined **)(param_2 + 0x38);
  SVar10.unknown = &DAT_10054ab50;
  local_70 = size.unknown;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar10);
  if (uStack_78._7_1_ == '\x01') {
    (extension_SwiftUI)::SwiftUI::ProgressView::_init();
    puVar11 = &DAT_10054e748;
    FUN_100002f94(&DAT_10054e748,&DAT_10041f7f0);
    iVar2 = *(int *)(puVar11 + 0x24);
    puVar11 = &DAT_10054b210;
    FUN_100002f94(&DAT_10054b210,&DAT_10041c420);
    iVar3 = *(int *)(puVar11 + 0x1c);
    uVar1 = *(undefined4 *)
             PTR___enum_case_for_SwiftUI_ControlSize_small_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100521cb0
    ;
    CVar5 = SwiftUI::ControlSize::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,CVar5.value) + -8) + 0x68))
              (lVar28 + iVar2 + (long)iVar3,uVar1,CONCAT71(extraout_var,CVar5.value));
    puVar11 = &DAT_10041f810;
    _swift_getKeyPath();
    *(undefined **)(lVar28 + iVar2) = puVar11;
    iVar2 = *(int *)(puVar9 + 0x24);
    puVar9 = &DAT_10054e770;
    FUN_100002f94(&DAT_10054e770,&DAT_10041f808);
    iVar3 = *(int *)(puVar9 + 0x1c);
    uVar1 = *(undefined4 *)
             PTR___enum_case_for_SwiftUI_ColorScheme_dark_SwiftUI_ColorScheme_Type___>_SwiftUI_ColorScheme_100521c88
    ;
    CVar6 = SwiftUI::ColorScheme::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var_00,CVar6.value) + -8) + 0x68))
              (lVar28 + iVar2 + (long)iVar3,uVar1,CONCAT71(extraout_var_00,CVar6.value));
    puVar9 = &DAT_10041f840;
    _swift_getKeyPath();
    *(undefined **)(lVar28 + iVar2) = puVar9;
    FUN_1000087e4(lVar28,puVar26,&DAT_10054e730,&DAT_10041f7e8);
    _swift_storeEnumTagMultiPayload(puVar26,puVar8,0);
    FUN_100073f84();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar26);
    FUN_10002a29c(lVar28,&DAT_10054e730,&DAT_10041f7e8);
  }
  else {
    lVar25 = *(long *)(param_2 + 0x28);
    if (lVar25 == 0) {
      FUN_100231228(0);
      FUN_1000036d0(&DAT_10054d6a8,FUN_100231228,&TargetProtocolConformanceDescriptor_10042bb2c);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100070720);
      (*pcVar4)();
    }
    puVar11 = &DAT_10041f6d0;
    _swift_getKeyPath(&DAT_10041f6d0);
    puVar12 = &DAT_10041f6f8;
    _swift_getKeyPath();
    _swift_retain(lVar25);
    puVar21 = puVar12;
    Combine::Published::_get_subscript(&local_70);
    uVar20 = (uint)puVar21;
    _swift_release(puVar11);
    _swift_release(puVar12);
    _swift_release(lVar25);
    if ((char)local_70 == '\x04') {
      pcVar13 = (char *)0x4e20657461647055;
      pvVar18 = (void *)0xea0000000000776f;
    }
    else {
      pcVar13 = (char *)0x7055207972746552;
      pvVar18 = (void *)0xec00000065746164;
    }
    stringLiteral.bridgeObject = pvVar18;
    stringLiteral.str = pcVar13;
    local_90[0] = puVar8;
    local_90[1] = puVar9;
    local_90[2] = (undefined *)param_1;
    LVar14 = SwiftUI::LocalizedStringKey::init(stringLiteral);
    *(undefined2 *)(lVar28 + -8) = 0x100;
    *(undefined8 *)(lVar28 + -0x10) = 0;
    uVar22 = (ulong)(uVar20 & 1);
    TVar15 = SwiftUI::Text::_init(LVar14);
    SwiftUI::Font::Weight::get_medium((Weight)TVar15.unknown);
    DVar7 = SwiftUI::Font::Design::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var_01,DVar7.value) + -8) + 0x38))
              (lVar27,1,1,CONCAT71(extraout_var_01,DVar7.value));
    FVar16 = SwiftUI::Font::_system(size,(Font)0x0);
    FUN_10002a29c(lVar27,&DAT_10054a828,&DAT_10041e3c0);
    TVar19 = TVar15;
    pvVar23 = pvVar18;
    uVar24 = uVar22;
    TVar17 = SwiftUI::Text::_font(FVar16.unknown);
    _swift_release(FVar16.unknown);
    FUN_100025b34(TVar15.unknown,pvVar18,uVar22);
    _swift_bridgeObjectRelease(param_5);
    *puVar26 = TVar17.unknown;
    puVar26[1] = TVar19.unknown;
    *(char *)(puVar26 + 2) = (char)pvVar23;
    puVar26[3] = uVar24;
    _swift_storeEnumTagMultiPayload(puVar26,local_90[0],1);
    FUN_100073f84();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar26);
  }
  return;
}

