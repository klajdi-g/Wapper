// rea decompile_all
// name: FUN_1000557e0
// address: 0x1000557e0
// body: available
// range: 0x1000557e0-0x100056023 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100055f28 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000557e0(undefined8 param_1,void *param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  Color CVar9;
  State SVar10;
  undefined *puVar11;
  EnvironmentObject<undefined> EVar12;
  undefined8 *puVar13;
  EnvironmentObject<undefined> EVar14;
  undefined *puVar15;
  UnitPoint UVar16;
  undefined **ppuVar17;
  AnyTransition AVar18;
  long extraout_x8;
  long extraout_x8_00;
  long lVar19;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  Alignment AVar23;
  undefined *puVar24;
  ulong local_320 [2];
  undefined *local_310;
  undefined *puStack_308;
  undefined *local_300;
  undefined *local_2f8;
  undefined8 *local_2f0;
  long local_2e8;
  long local_2e0;
  undefined *local_2d8;
  long local_2d0;
  long local_2c8;
  long local_2c0;
  long local_2b8;
  undefined *local_2b0;
  long local_2a8;
  undefined *puStack_2a0;
  undefined *local_298;
  undefined8 local_290;
  undefined *local_288;
  undefined *puStack_280;
  undefined *local_278;
  undefined *puStack_270;
  ulong local_230;
  undefined *puStack_228;
  undefined *local_220;
  undefined *puStack_218;
  undefined8 *local_210;
  undefined *puStack_208;
  undefined *local_200;
  ulong uStack_1f8;
  ulong local_1f0;
  undefined *puStack_1e8;
  undefined *local_1e0;
  ulong local_1d0;
  undefined *puStack_1c8;
  undefined *local_1c0;
  undefined *puStack_1b8;
  undefined8 *local_1b0;
  undefined *puStack_1a8;
  undefined *local_1a0;
  ulong local_198;
  ulong uStack_190;
  undefined *puStack_188;
  undefined *local_180;
  
  puVar6 = &DAT_10054d8c8;
  local_290 = param_1;
  FUN_100002f94(&DAT_10054d8c8,&DAT_10041e550);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = (undefined8 *)((long)local_320 - extraout_x8);
  local_298 = (undefined *)SwiftUI::OpacityTransition::typeMetadataAccessor();
  local_2b8 = *(long *)(local_298 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_2b8 + 0x40));
  lVar19 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_2c0 = lVar19;
  local_2b0 = (undefined *)SwiftUI::ScaleTransition::typeMetadataAccessor();
  local_2e0 = *(long *)(local_2b0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_2e0 + 0x40));
  lVar19 = lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_10054b370;
  local_2e8 = lVar19;
  FUN_100002f94(&DAT_10054b370,&DAT_10041c6c0);
  local_2a8 = *(long *)(puVar7 + -8);
  puStack_2a0 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_2a8 + 0x40));
  lVar19 = lVar19 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_2d0 = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar19 - extraout_x12;
  puVar7 = &DAT_10054d8d0;
  local_2c8 = lVar19;
  FUN_100002f94(&DAT_10054d8d0,&DAT_10041f190);
  local_2f0 = *(undefined8 **)(puVar7 + -8);
  local_2d8 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)((long)local_2f0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar23.unknown = (undefined *)(lVar19 - extraout_x8_03);
  puVar7 = &DAT_10054d8d8;
  FUN_100002f94(&DAT_10054d8d8,&DAT_10041e560);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = (long)AVar23.unknown - extraout_x8_04;
  uVar20 = *(undefined8 *)((long)param_2 + 0xb8);
  puVar8 = &DAT_10041e260;
  _swift_getKeyPath(&DAT_10041e260);
  CVar9.unknown = &DAT_10041e288;
  _swift_getKeyPath();
  Combine::Published::_get_subscript(&local_1d0,uVar20,puVar8,CVar9.unknown);
  _swift_release(puVar8);
  _swift_release();
  if (((byte)local_1d0 & 1) == 0) {
    puStack_1c8 = *(undefined **)((long)param_2 + 0x118);
    local_1d0 = *(ulong *)((long)param_2 + 0x110);
    SVar10.unknown = &DAT_10054ab50;
    local_300 = puVar7;
    local_2f8 = puVar6;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::get_wrappedValue(SVar10);
    puVar6 = &DAT_100526e90;
    _swift_allocObject(&DAT_100526e90,0x168,7);
    _memcpy(puVar6 + 0x10,param_2,0x158);
    local_220 = (undefined *)0x6c75622e7473696c;
    puStack_218 = (undefined *)0xeb0000000074656c;
    local_210 = (undefined8 *)CONCAT71(local_210._1_7_,(undefined1)local_230);
    _swift_retain(puVar6);
    FUN_100058a6c(param_2,&local_1d0);
    FUN_100002f94(&DAT_10054d8e0,&DAT_10041f1b0);
    FUN_1000599d4();
    SwiftUI::Button::_init();
    local_1d0 = CONCAT71(local_1d0._1_7_,(undefined1)local_230);
    puVar7 = &DAT_10054d8f0;
    FUN_1000087a0(&DAT_10054d8f0,&DAT_10054d8d0,&DAT_10041f190,
                  PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
    puVar11 = puVar7;
    FUN_100003038();
    puVar8 = local_2d8;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (lVar19,&local_1d0,local_2d8,&DAT_100525378,puVar7,puVar11);
    _swift_release(puVar6);
    (**(code **)((long)local_2f0 + 8))();
    puStack_308 = (undefined *)SwiftUI::Alignment::get_topTrailing(AVar23);
    lVar21 = *(long *)((long)param_2 + 0xa0);
    if (lVar21 == 0) {
      FUN_1001b7378(0);
      FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100056024);
      (*pcVar5)();
    }
    puVar6 = &DAT_10041e570;
    local_310 = puVar8;
    local_2f0 = puVar13;
    local_2d8 = (undefined *)lVar19;
    _swift_getKeyPath(&DAT_10041e570);
    puVar7 = &DAT_10041e598;
    _swift_getKeyPath(&DAT_10041e598);
    _swift_retain(lVar21);
    Combine::Published::_get_subscript(&local_1d0);
    _swift_release(puVar6);
    _swift_release(puVar7);
    _swift_release(lVar21);
    if ((local_1d0 & 1) == 0) {
      FUN_1001b7378(0);
      puVar6 = &DAT_100553df0;
      FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
      EVar12 = SwiftUI::EnvironmentObject::init();
      FUN_100279594(0);
      puVar13 = &DAT_100553dd0;
      FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
      EVar14 = SwiftUI::EnvironmentObject::init();
      FUN_100226ac0(0);
      puVar7 = &DAT_10054aa48;
      FUN_1000036d0(&DAT_10054aa48,FUN_100226ac0,&TargetProtocolConformanceDescriptor_10042b420);
      puStack_208 = (undefined *)SwiftUI::EnvironmentObject::init();
      local_230 = 0x4036000000000000;
      local_1f0 = 0x4020000000000000;
      uStack_1f8 = 0xc020000000000000;
      local_1d0 = 0x4036000000000000;
      uStack_190 = 0x4020000000000000;
      local_198 = 0xc020000000000000;
      puStack_228 = EVar12.unknown;
      local_220 = puVar6;
      puStack_218 = EVar14.unknown;
      local_210 = puVar13;
      local_200 = puVar7;
      puStack_1c8 = EVar12.unknown;
      local_1c0 = puVar6;
      puStack_1b8 = EVar14.unknown;
      local_1b0 = puVar13;
      puStack_1a8 = puStack_208;
      local_1a0 = puVar7;
      FUN_1000087e4(&local_230,&local_288,&DAT_10054d8f8,&DAT_10041e5b8);
      FUN_10002a29c(&local_1d0,&DAT_10054d8f8,&DAT_10041e5b8);
      puVar6 = puStack_218;
      puVar7 = local_200;
      puVar8 = puStack_208;
      puVar11 = puStack_228;
      uVar22 = local_230;
      puVar24 = local_220;
      puVar13 = local_210;
    }
    else {
      uStack_1f8 = 0;
      local_1f0 = 0;
      puVar6 = (undefined *)0x0;
      puVar7 = (undefined *)0x0;
      puVar8 = (undefined *)0x0;
      puVar11 = (undefined *)0x1;
      uVar22 = 0;
      puVar24 = (undefined *)0x0;
      puVar13 = (undefined8 *)0x0;
    }
    puVar3 = puStack_308;
    puVar2 = local_310;
    puStack_1e8 = puStack_308;
    local_1e0 = local_310;
    puVar15 = &DAT_10054d900;
    local_320[0] = uStack_1f8;
    local_320[1] = local_1f0;
    local_230 = uVar22;
    puStack_228 = puVar11;
    local_220 = puVar24;
    puStack_218 = puVar6;
    local_210 = puVar13;
    puStack_208 = puVar8;
    local_200 = puVar7;
    FUN_100002f94(&DAT_10054d900,&DAT_10041e5c0);
    puVar1 = (ulong *)((long)local_2d8 + (long)*(int *)(puVar15 + 0x24));
    puVar1[5] = (ulong)puStack_208;
    puVar1[4] = (ulong)local_210;
    puVar1[7] = uStack_1f8;
    puVar1[6] = (ulong)local_200;
    puVar1[9] = (ulong)puStack_1e8;
    puVar1[8] = local_1f0;
    puVar1[10] = (ulong)local_1e0;
    puVar1[1] = (ulong)puStack_228;
    *puVar1 = local_230;
    puVar1[3] = (ulong)puStack_218;
    puVar1[2] = (ulong)local_220;
    local_198 = local_320[0];
    uStack_190 = local_320[1];
    puStack_188 = puVar3;
    local_180 = puVar2;
    local_1d0 = uVar22;
    puStack_1c8 = puVar11;
    local_1c0 = puVar24;
    puStack_1b8 = puVar6;
    local_1b0 = puVar13;
    puStack_1a8 = puVar8;
    local_1a0 = puVar7;
    FUN_1000087e4(&local_230,&local_288,&DAT_10054d908,&DAT_10041e5c8);
    UVar16.unknown = (undefined *)&local_1d0;
    FUN_10002a29c(UVar16.unknown,&DAT_10054d908,&DAT_10041e5c8);
    UVar16 = SwiftUI::UnitPoint::get_center(UVar16);
    lVar19 = local_2e8;
    SwiftUI::ScaleTransition::init(1e-05,UVar16);
    lVar4 = local_2c0;
    SwiftUI::OpacityTransition::init();
    puVar6 = &DAT_10054b3e8;
    FUN_1000036d0(&DAT_10054b3e8,PTR_typeMetadataAccessor_1005222b8,
                  PTR_SwiftUI__SwiftUI__ScaleTransition_>SwiftUI__Transition_1005222b0);
    puVar7 = &DAT_10054ae80;
    FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                  PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
    puVar24 = local_298;
    puVar8 = local_2b0;
    lVar21 = local_2c8;
    (extension_SwiftUI)::SwiftUI::Transition::_combined
              (local_2c8,lVar4,local_2b0,local_298,puVar6,puVar7);
    (**(code **)(local_2b8 + 8))(lVar4,puVar24);
    (**(code **)(local_2e0 + 8))(lVar19,puVar8);
    puVar11 = puStack_2a0;
    lVar19 = local_2a8;
    (**(code **)(local_2a8 + 0x10))(local_2d0,lVar21,puStack_2a0);
    local_288 = puVar8;
    puStack_280 = puVar24;
    ppuVar17 = &local_288;
    local_278 = puVar6;
    puStack_270 = puVar7;
    _swift_getOpaqueTypeConformance2
              (ppuVar17,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_Transition_combined<A_where_A1:_SwiftUI_Transition>(with:_A1)__>_some>>_100521c60
               ,1);
    AVar18 = SwiftUI::AnyTransition::_init(ppuVar17,puVar11,ppuVar17);
    (**(code **)(lVar19 + 8))(lVar21,puVar11);
    puVar6 = local_2d8;
    puVar13 = local_2f0;
    *(undefined **)((long)local_2d8 + (long)*(int *)(local_300 + 0x24)) = AVar18.unknown;
    FUN_1000087e4(local_2d8,local_2f0,&DAT_10054d8d8,&DAT_10041e560);
    _swift_storeEnumTagMultiPayload(puVar13,local_2f8,0);
    FUN_100059a74();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar13);
    FUN_10002a29c(puVar6,&DAT_10054d8d8,&DAT_10041e560);
  }
  else {
    CVar9 = SwiftUI::Color::get_clear(CVar9);
    *puVar13 = CVar9.unknown;
    _swift_storeEnumTagMultiPayload(puVar13,puVar6,1);
    FUN_100059a74();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar13);
  }
  return;
}

