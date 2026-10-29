// rea decompile_all
// name: FUN_10005498c
// address: 0x10005498c
// body: available
// range: 0x10005498c-0x100055303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100055224 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10005498c(undefined8 param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined *puVar9;
  UUID UVar10;
  undefined *puVar11;
  Color CVar12;
  State SVar13;
  UnitPoint UVar14;
  undefined **ppuVar15;
  AnyTransition AVar16;
  long extraout_x8;
  long extraout_x8_00;
  long lVar17;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined *puVar18;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined *puVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  code *pcVar23;
  void *local_2a0;
  long local_298;
  undefined *local_290;
  long local_288;
  undefined *local_280;
  long local_278;
  long local_270;
  long local_268;
  long local_260;
  long local_258;
  long local_250;
  long local_248;
  undefined *local_240;
  long local_238;
  undefined *puStack_230;
  undefined *local_228;
  long local_220;
  long local_218;
  undefined *local_210;
  undefined *local_208;
  undefined8 *local_200;
  undefined8 local_1f8;
  undefined *local_1f0;
  undefined *puStack_1e8;
  undefined *local_1e0;
  undefined *puStack_1d8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  char local_69;
  
  puVar9 = &DAT_10054d9c0;
  local_1f8 = param_1;
  FUN_100002f94(&DAT_10054d9c0,&DAT_10041e6b8);
  local_208 = puVar9;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_200 = (undefined8 *)((long)&local_2a0 - extraout_x8);
  local_228 = (undefined *)SwiftUI::OpacityTransition::typeMetadataAccessor();
  local_248 = *(long *)(local_228 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_248 + 0x40));
  lVar17 = ((long)&local_2a0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_250 = lVar17;
  local_240 = (undefined *)SwiftUI::ScaleTransition::typeMetadataAccessor();
  local_270 = *(long *)(local_240 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_270 + 0x40));
  lVar17 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_10054b370;
  local_278 = lVar17;
  FUN_100002f94(&DAT_10054b370,&DAT_10041c6c0);
  local_238 = *(long *)(puVar9 + -8);
  puStack_230 = puVar9;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_238 + 0x40));
  lVar17 = lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_260 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12;
  puVar9 = &DAT_10054d8d0;
  local_258 = lVar17;
  FUN_100002f94(&DAT_10054d8d0,&DAT_10041f190);
  local_288 = *(long *)(puVar9 + -8);
  local_280 = puVar9;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_288 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar18 = (undefined *)(lVar17 - extraout_x8_03);
  puVar9 = &DAT_10054d9c8;
  local_290 = puVar18;
  FUN_100002f94(&DAT_10054d9c8,&DAT_10041e6c0);
  local_210 = puVar9;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)puVar18 - extraout_x8_04;
  local_268 = lVar17;
  UVar10 = Foundation::UUID::typeMetadataAccessor();
  local_218 = *(long *)(UVar10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_218 + 0x40));
  lVar17 = lVar17 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_10054a9c0;
  local_298 = lVar17;
  FUN_100002f94(&DAT_10054a9c0,&DAT_100422d20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar19 = (undefined *)(lVar17 - extraout_x8_06);
  puVar18 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar18 + -8) + 0x40));
  lVar17 = (long)puVar19 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
  local_220 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar22 = lVar17 - extraout_x12_01;
  uVar20 = *(undefined8 *)((long)param_2 + 0xb8);
  puVar18 = &DAT_10041e260;
  _swift_getKeyPath(&DAT_10041e260);
  CVar12.unknown = &DAT_10041e288;
  _swift_getKeyPath();
  Combine::Published::_get_subscript(&local_1f0,uVar20,puVar18,CVar12.unknown);
  _swift_release(puVar18);
  _swift_release();
  if (((byte)local_1f0 & 1) == 0) {
    lVar21 = *(long *)((long)param_2 + 0xa0);
    local_2a0 = param_2;
    if (lVar21 == 0) {
      FUN_1001b7378(0);
      FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x100055304);
      (*pcVar23)();
    }
    puVar18 = &DAT_10041e6d0;
    _swift_getKeyPath(&DAT_10041e6d0);
    puVar11 = &DAT_10041e6f8;
    _swift_getKeyPath(&DAT_10041e6f8);
    _swift_retain(lVar21);
    Combine::Published::_get_subscript(lVar22);
    _swift_release(lVar21);
    _swift_release(puVar18);
    _swift_release(puVar11);
    lVar4 = local_218;
    (**(code **)(local_218 + 0x38))(lVar17,1,1,UVar10.unknown);
    iVar1 = *(int *)(puVar9 + 0x30);
    FUN_1000087e4(lVar22,puVar19,&DAT_10054a9c8,&DAT_10041bbe0);
    FUN_1000087e4(lVar17,puVar19 + iVar1,&DAT_10054a9c8,&DAT_10041bbe0);
    pcVar23 = *(code **)(lVar4 + 0x30);
    puVar9 = puVar19;
    (*pcVar23)(puVar19,1,UVar10.unknown);
    lVar21 = local_220;
    if ((int)puVar9 == 1) {
      FUN_10002a29c(lVar17,&DAT_10054a9c8,&DAT_10041bbe0);
      FUN_10002a29c(lVar22,&DAT_10054a9c8,&DAT_10041bbe0);
      puVar9 = puVar19 + iVar1;
      (*pcVar23)(puVar9,1,UVar10.unknown);
      if ((int)puVar9 != 1) {
LAB_100054e58:
        FUN_10002a29c(puVar19,&DAT_10054a9c0,&DAT_100422d20);
        CVar12.unknown = puVar19;
        goto LAB_100054e70;
      }
      FUN_10002a29c(puVar19,&DAT_10054a9c8,&DAT_10041bbe0);
    }
    else {
      FUN_1000087e4(puVar19,local_220,&DAT_10054a9c8,&DAT_10041bbe0);
      puVar9 = puVar19 + iVar1;
      (*pcVar23)(puVar9,1,UVar10.unknown);
      lVar3 = local_298;
      if ((int)puVar9 == 1) {
        FUN_10002a29c(lVar17,&DAT_10054a9c8,&DAT_10041bbe0);
        FUN_10002a29c(lVar22,&DAT_10054a9c8,&DAT_10041bbe0);
        (**(code **)(lVar4 + 8))(lVar21,UVar10.unknown);
        goto LAB_100054e58;
      }
      (**(code **)(lVar4 + 0x20))(local_298,puVar19 + iVar1,UVar10.unknown);
      puVar9 = &DAT_10054a130;
      FUN_1000036d0(&DAT_10054a130,PTR_typeMetadataAccessor_100520bd8,
                    PTR_Foundation__Foundation__UUID_>Swift__Equatable_100520bf8);
      bVar8 = Swift::Equatable::___infix(lVar21,lVar3,UVar10.unknown,puVar9);
      pcVar23 = *(code **)(lVar4 + 8);
      (*pcVar23)(lVar3,UVar10.unknown);
      FUN_10002a29c(lVar17,&DAT_10054a9c8,&DAT_10041bbe0);
      FUN_10002a29c(lVar22,&DAT_10054a9c8,&DAT_10041bbe0);
      (*pcVar23)(lVar21,UVar10.unknown);
      FUN_10002a29c(puVar19,&DAT_10054a9c8,&DAT_10041bbe0);
      CVar12.unknown = puVar19;
      if (!bVar8) goto LAB_100054e70;
    }
    pvVar2 = local_2a0;
    uStack_88 = *(undefined8 *)((long)local_2a0 + 0x108);
    local_90 = *(undefined8 *)((long)local_2a0 + 0x100);
    puStack_1e8 = *(undefined **)((long)local_2a0 + 0x108);
    local_1f0 = *(undefined **)((long)local_2a0 + 0x100);
    SVar13.unknown = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::get_wrappedValue(SVar13);
    local_80 = 0x69662e7472616568;
    if (local_69 == '\0') {
      local_80 = 0x7472616568;
    }
    uVar20 = 0xea00000000006c6c;
    if (local_69 == '\0') {
      uVar20 = 0xe500000000000000;
    }
    SwiftUI::State::get_wrappedValue(SVar13);
    uVar7 = (byte)local_1f0;
    puVar9 = &DAT_100526ee0;
    _swift_allocObject(&DAT_100526ee0,0x168,7);
    _memcpy(puVar9 + 0x10,pvVar2,0x158);
    local_70 = uVar7;
    uStack_78 = uVar20;
    FUN_100058a6c(pvVar2,&local_1f0);
    _swift_retain(puVar9);
    FUN_100002f94(&DAT_10054d8e0,&DAT_10041f1b0);
    FUN_1000599d4();
    UVar14.unknown = local_290;
    SwiftUI::Button::_init();
    local_1f0 = (undefined *)CONCAT71(local_1f0._1_7_,uVar7);
    puVar18 = &DAT_10054d8f0;
    FUN_1000087a0(&DAT_10054d8f0,&DAT_10054d8d0,&DAT_10041f190,
                  PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
    puVar11 = puVar18;
    FUN_100003038();
    lVar22 = local_268;
    puVar19 = local_280;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (local_268,&local_1f0,local_280,&DAT_100525378,puVar18,puVar11);
    _swift_release(puVar9);
    _swift_bridgeObjectRelease(uVar20);
    (**(code **)(local_288 + 8))(UVar14.unknown,puVar19);
    UVar14 = SwiftUI::UnitPoint::get_center(UVar14);
    lVar17 = local_278;
    SwiftUI::ScaleTransition::init(1e-05,UVar14);
    lVar4 = local_250;
    SwiftUI::OpacityTransition::init();
    puVar9 = &DAT_10054b3e8;
    FUN_1000036d0(&DAT_10054b3e8,PTR_typeMetadataAccessor_1005222b8,
                  PTR_SwiftUI__SwiftUI__ScaleTransition_>SwiftUI__Transition_1005222b0);
    puVar18 = &DAT_10054ae80;
    FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                  PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
    puVar5 = local_228;
    puVar19 = local_240;
    lVar21 = local_258;
    (extension_SwiftUI)::SwiftUI::Transition::_combined
              (local_258,lVar4,local_240,local_228,puVar9,puVar18);
    (**(code **)(local_248 + 8))(lVar4,puVar5);
    (**(code **)(local_270 + 8))(lVar17,puVar19);
    puVar11 = puStack_230;
    lVar17 = local_238;
    (**(code **)(local_238 + 0x10))(local_260,lVar21,puStack_230);
    local_1f0 = puVar19;
    puStack_1e8 = puVar5;
    ppuVar15 = &local_1f0;
    local_1e0 = puVar9;
    puStack_1d8 = puVar18;
    _swift_getOpaqueTypeConformance2
              (ppuVar15,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_Transition_combined<A_where_A1:_SwiftUI_Transition>(with:_A1)__>_some>>_100521c60
               ,1);
    AVar16 = SwiftUI::AnyTransition::_init(ppuVar15,puVar11,ppuVar15);
    (**(code **)(lVar17 + 8))(lVar21,puVar11);
    puVar6 = local_200;
    *(undefined **)(lVar22 + *(int *)(local_210 + 0x24)) = AVar16.unknown;
    FUN_1000087e4(lVar22,local_200,&DAT_10054d9c8,&DAT_10041e6c0);
    _swift_storeEnumTagMultiPayload(puVar6,local_208,0);
    FUN_10005a01c();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar6);
    FUN_10002a29c(lVar22,&DAT_10054d9c8,&DAT_10041e6c0);
  }
  else {
LAB_100054e70:
    CVar12 = SwiftUI::Color::get_clear(CVar12);
    puVar6 = local_200;
    puVar9 = local_208;
    *local_200 = CVar12.unknown;
    _swift_storeEnumTagMultiPayload(puVar6,puVar9,1);
    FUN_10005a01c();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar6);
  }
  return;
}

