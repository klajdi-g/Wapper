// rea decompile_all
// name: FUN_1003050b8
// address: 0x1003050b8
// body: available
// range: 0x1003050b8-0x100305c1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003059bc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003050b8(undefined8 *param_1,NSImage *param_2)

{
  NSImage *pNVar1;
  EdgeInsets capInsets;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  ResizingMode RVar7;
  bool bVar8;
  URL UVar9;
  Color CVar10;
  Color CVar11;
  UnitPoint UVar12;
  Gradient gradient;
  State SVar13;
  Image IVar14;
  Image IVar15;
  OpacityTransition OVar16;
  undefined **ppuVar17;
  AnyTransition AVar18;
  Color CVar19;
  UnitPoint startPoint;
  UnitPoint endPoint;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar20;
  long extraout_x8_01;
  long lVar21;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined *puVar22;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar23;
  undefined8 uVar24;
  CGFloat url;
  undefined *puVar25;
  long lVar26;
  long local_2a0;
  EdgeInsets local_298;
  long local_290;
  undefined *local_288;
  long local_280;
  long local_278;
  long local_270;
  long local_268;
  long local_260;
  undefined *local_258;
  undefined *local_250;
  long local_248;
  undefined *local_240;
  long local_238;
  long local_230;
  undefined *local_228;
  undefined *local_220;
  undefined8 *local_218;
  undefined *local_210;
  NSImage *local_208;
  long local_200;
  long local_1f8;
  undefined8 *local_1f0;
  undefined *local_1e8;
  NSImage *local_1e0;
  undefined *puStack_1d8;
  undefined2 local_1d0;
  undefined6 uStack_1ce;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined *local_1b8;
  undefined8 uStack_1b0;
  undefined2 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  NSImage *local_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined *puStack_168;
  NSImage *local_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined *puStack_138;
  NSImage *local_130;
  undefined *puStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined *puStack_108;
  undefined1 local_100;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  puVar22 = &DAT_10055ba98;
  local_208 = param_2;
  local_1f0 = param_1;
  FUN_100002f94(&DAT_10055ba98,&DAT_1004306b0);
  local_230 = *(long *)(puVar22 + -8);
  local_210 = puVar22;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_230 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar22 = &DAT_10055baa0;
  local_240 = (undefined *)((long)&local_2a0 - extraout_x8);
  FUN_100002f94(&DAT_10055baa0,&DAT_1004306b8);
  local_220 = puVar22;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar22 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar20 = (undefined8 *)((undefined *)((long)&local_2a0 - extraout_x8) + -extraout_x8_00);
  local_218 = puVar20;
  local_258 = (undefined *)SwiftUI::ScaleTransition::typeMetadataAccessor();
  local_278 = *(long *)(local_258 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_278 + 0x40));
  lVar21 = (long)puVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar22 = &DAT_10055baa8;
  local_280 = lVar21;
  FUN_100002f94(&DAT_10055baa8,&DAT_1004306c0);
  local_260 = *(long *)(puVar22 + -8);
  local_250 = puVar22;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_260 + 0x40));
  lVar21 = lVar21 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_270 = lVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = lVar21 - extraout_x12;
  local_268 = lVar21;
  RVar7 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  local_288 = (undefined *)CONCAT71((int7)((ulong)puVar22 >> 8),RVar7.value);
  local_290 = *(long *)(local_288 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_290 + 0x40));
  puVar22 = (undefined *)(lVar21 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  local_298.unknown = puVar22;
  local_228 = (undefined *)SwiftUI::OpacityTransition::typeMetadataAccessor();
  local_238 = *(long *)(local_228 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_238 + 0x40));
  lVar21 = (long)puVar22 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_2a0 = lVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = lVar21 - extraout_x12_00;
  puVar22 = &DAT_100553d90;
  local_248 = lVar21;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar22 + -8) + 0x40));
  url.unknown = (undefined *)(lVar21 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar23 = (long)url.unknown - extraout_x12_01;
  UVar9 = Foundation::URL::typeMetadataAccessor();
  lVar26 = *(long *)(UVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar26 + 0x40));
  puVar25 = (undefined *)(lVar23 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0));
  puVar22 = &DAT_10055bab0;
  FUN_100002f94(&DAT_10055bab0,&DAT_1004306c8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar22 + -8) + 0x40));
  lVar21 = (long)puVar25 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
  local_1f8 = lVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_200 = lVar21 - extraout_x12_02;
  CVar19.unknown = &DAT_10054af98;
  FUN_100002f94(&DAT_10054af98,&DAT_10041c1a0);
  startPoint.unknown = (undefined *)0x30;
  endPoint.unknown = (undefined *)0x7;
  _swift_allocObject();
  *(undefined8 *)(CVar19.unknown + 0x18) = 4;
  *(undefined8 *)(CVar19.unknown + 0x10) = 2;
  CVar10 = SwiftUI::Color::get_white(CVar19);
  CVar11 = SwiftUI::Color::opacity(0.18,CVar10);
  _swift_release();
  *(undefined **)(CVar19.unknown + 0x20) = CVar11.unknown;
  UVar12.unknown = (undefined *)SwiftUI::Color::get_white(CVar10);
  CVar11 = SwiftUI::Color::opacity(0.05,(Color)UVar12.unknown);
  pNVar1 = local_208;
  _swift_release();
  *(undefined **)(CVar19.unknown + 0x28) = CVar11.unknown;
  UVar12 = SwiftUI::UnitPoint::get_topLeading(UVar12);
  SwiftUI::UnitPoint::get_bottomTrailing(UVar12);
  gradient = SwiftUI::Gradient::init();
  SwiftUI::LinearGradient::init(gradient,startPoint,endPoint);
  FUN_1000087e4(pNVar1,lVar23,&DAT_100553d90,&DAT_10041bf10);
  lVar21 = lVar23;
  local_1e8 = UVar9.unknown;
  (**(code **)(lVar26 + 0x30))(lVar23,1,UVar9.unknown);
  if ((int)lVar21 == 1) {
    FUN_10002a29c(lVar23,&DAT_100553d90,&DAT_10041bf10);
    uVar24 = 1;
    lVar23 = local_200;
  }
  else {
    UVar9.unknown = puVar25;
    (**(code **)(lVar26 + 0x20))(puVar25,lVar23,local_1e8);
    bVar8 = Foundation::URL::get_isFileURL(UVar9);
    puVar22 = local_1e8;
    if (bVar8) {
      lVar21 = 0;
      local_240 = puVar25;
      local_230 = lVar26;
      FUN_10030a830();
      pNVar1 = pNVar1 + *(int *)(lVar21 + 0x14);
      puStack_e8 = *(undefined **)(pNVar1 + 8);
      local_f0 = *(undefined **)pNVar1;
      SVar13.unknown = &DAT_10054eed8;
      FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
      SwiftUI::State::get_wrappedValue(SVar13);
      if (local_130 == (NSImage *)0x0) {
        CVar19 = SwiftUI::Color::get_black((Color)0x0);
        CVar11 = SwiftUI::Color::opacity(0.4,CVar19);
        _swift_release(CVar19.unknown);
        lVar21 = local_248;
        SwiftUI::OpacityTransition::init();
        puVar25 = local_228;
        lVar23 = local_238;
        (**(code **)(local_238 + 0x10))(local_2a0,lVar21,local_228);
        puVar22 = &DAT_10054ae80;
        FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                      PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
        AVar18 = SwiftUI::AnyTransition::_init(puVar22,puVar25,puVar22);
        (**(code **)(lVar23 + 8))(lVar21,puVar25);
        uStack_118 = 0;
        local_120 = 0;
        puStack_108 = (undefined *)0x0;
        local_110 = 0;
        local_100 = 1;
        local_130 = (NSImage *)CVar11;
        puStack_128 = AVar18.unknown;
        FUN_100002f94(&DAT_10055baf0,&DAT_1004306f0);
        FUN_100002f94(&DAT_10054ae78,&DAT_10041c0d0);
        FUN_10030c7d0();
        FUN_100028c28();
        (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)&local_130);
      }
      else {
        local_208 = local_130;
        IVar14 = SwiftUI::Image::init(local_130);
        puVar22 = local_288;
        lVar21 = local_290;
        capInsets.unknown = local_298.unknown;
        IVar15.unknown = local_288;
        (**(code **)(local_290 + 0x68))
                  (local_298.unknown,
                   *(undefined4 *)
                    PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_1005232f0
                  );
        IVar15 = SwiftUI::Image::resizable(capInsets,(ResizingMode)(__int8)IVar14.unknown,IVar15);
        _swift_release(IVar14.unknown);
        (**(code **)(lVar21 + 8))(capInsets.unknown,puVar22);
        lVar26 = local_248;
        OVar16 = SwiftUI::OpacityTransition::init();
        UVar12 = SwiftUI::UnitPoint::get_center(OVar16.unknown);
        lVar21 = local_280;
        SwiftUI::ScaleTransition::init(1e-05,UVar12);
        puVar22 = &DAT_10054ae80;
        FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                      PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
        puVar25 = &DAT_10054b3e8;
        FUN_1000036d0(&DAT_10054b3e8,PTR_typeMetadataAccessor_1005222b8,
                      PTR_SwiftUI__SwiftUI__ScaleTransition_>SwiftUI__Transition_1005222b0);
        puVar4 = local_228;
        puVar2 = local_258;
        lVar23 = local_268;
        (extension_SwiftUI)::SwiftUI::Transition::_combined
                  (local_268,lVar21,local_228,local_258,puVar22,puVar25);
        (**(code **)(local_278 + 8))(lVar21,puVar2);
        (**(code **)(local_238 + 8))(lVar26,puVar4);
        puVar3 = local_250;
        lVar21 = local_260;
        puStack_1d8 = (undefined *)0x0;
        local_1d0 = 0x101;
        local_1c8 = 0;
        local_1c0 = 0x1010101;
        local_1e0 = (NSImage *)IVar15;
        (**(code **)(local_260 + 0x10))(local_270,lVar23,local_250);
        local_f0 = puVar4;
        puStack_e8 = puVar2;
        ppuVar17 = &local_f0;
        local_e0 = puVar22;
        puStack_d8 = puVar25;
        _swift_getOpaqueTypeConformance2
                  (ppuVar17,
                   PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_Transition_combined<A_where_A1:_SwiftUI_Transition>(with:_A1)__>_some>>_100521c60
                   ,1);
        AVar18 = SwiftUI::AnyTransition::_init(ppuVar17,puVar3,ppuVar17);
        (**(code **)(lVar21 + 8))(lVar23,puVar3);
        local_120 = CONCAT62(uStack_1ce,local_1d0);
        puStack_128 = puStack_1d8;
        local_130 = local_1e0;
        uStack_118 = local_1c8;
        local_110 = CONCAT44(local_110._4_4_,local_1c0);
        uStack_1b0 = 0;
        local_1a8 = 0x101;
        local_1a0 = 0;
        local_198 = 0x1010101;
        local_1b8 = IVar15.unknown;
        FUN_1000087e4(&local_1e0,&local_f0,&DAT_10055bb00,&DAT_1004306f8);
        FUN_10002a29c(&local_1b8,&DAT_10055bb00,&DAT_1004306f8);
        puStack_188 = puStack_128;
        local_190 = local_130;
        uStack_178 = uStack_118;
        uStack_180 = local_120;
        local_170 = local_110;
        puStack_158 = puStack_128;
        local_160 = local_130;
        uStack_148 = uStack_118;
        uStack_150 = local_120;
        local_140 = local_110;
        puStack_168 = AVar18.unknown;
        puStack_138 = AVar18.unknown;
        FUN_1000087e4(&local_190,&local_f0,&DAT_10055baf0,&DAT_1004306f0);
        FUN_10002a29c(&local_160,&DAT_10055baf0,&DAT_1004306f0);
        puStack_128 = puStack_188;
        local_130 = local_190;
        uStack_118 = uStack_178;
        local_120 = uStack_180;
        puStack_108 = puStack_168;
        local_110 = local_170;
        local_100 = 0;
        FUN_100002f94(&DAT_10055baf0,&DAT_1004306f0);
        FUN_100002f94(&DAT_10054ae78,&DAT_10041c0d0);
        FUN_10030c7d0();
        FUN_100028c28();
        (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)&local_130);
      }
      uVar5 = uStack_c8;
      uVar24 = local_d0;
      puVar4 = puStack_d8;
      puVar3 = local_e0;
      puVar2 = puStack_e8;
      puVar25 = local_f0;
      puVar20 = local_218;
      puVar22 = local_220;
      *local_218 = local_f0;
      puVar20[1] = puVar2;
      puVar20[2] = puVar3;
      puVar20[3] = puVar4;
      puVar20[4] = uVar24;
      puVar20[5] = uVar5;
      uVar6 = local_c0;
      *(undefined1 *)(puVar20 + 6) = local_c0;
      _swift_storeEnumTagMultiPayload(puVar20,puVar22,0);
      FUN_10030ca40(puVar25,puVar2,puVar3,puVar4,uVar24,uVar5,uVar6);
      FUN_100002f94(&DAT_10055bb28,&DAT_100430718);
      FUN_10030c9c8();
      FUN_1000087a0(&DAT_10055bb38,&DAT_10055ba98,&DAT_1004306b0,
                    PTR_SwiftUI__SwiftUI__AsyncImage<undefined>_>SwiftUI__View_100521b88);
      lVar23 = local_200;
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar20);
      (**(code **)(local_230 + 8))(local_240,local_1e8);
      FUN_10030ca78(local_f0,puStack_e8,local_e0,puStack_d8,local_d0,uStack_c8,local_c0);
    }
    else {
      (**(code **)(lVar26 + 0x10))(url.unknown,puVar25,local_1e8);
      (**(code **)(lVar26 + 0x38))(url.unknown,0,1,puVar22);
      FUN_100002f94(&DAT_10055bac8,&DAT_1004306e0);
      FUN_10030c6e0();
      puVar22 = local_240;
      SwiftUI::AsyncImage::_init(url,(Transaction)0x0);
      puVar2 = local_210;
      puVar20 = local_218;
      lVar21 = local_230;
      (**(code **)(local_230 + 0x10))(local_218,puVar22,local_210);
      _swift_storeEnumTagMultiPayload(puVar20,local_220,1);
      FUN_100002f94(&DAT_10055bb28,&DAT_100430718);
      FUN_10030c9c8();
      FUN_1000087a0(&DAT_10055bb38,&DAT_10055ba98,&DAT_1004306b0,
                    PTR_SwiftUI__SwiftUI__AsyncImage<undefined>_>SwiftUI__View_100521b88);
      lVar23 = local_200;
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar20);
      (**(code **)(lVar21 + 8))(puVar22,puVar2);
      (**(code **)(lVar26 + 8))(puVar25,local_1e8);
    }
    uVar24 = 0;
  }
  puVar22 = &DAT_10055bab8;
  FUN_100002f94(&DAT_10055bab8,&DAT_1004306d0);
  (**(code **)(*(long *)(puVar22 + -8) + 0x38))(lVar23,uVar24,1,puVar22);
  lVar21 = local_1f8;
  FUN_1000087e4(lVar23,local_1f8,&DAT_10055bab0,&DAT_1004306c8);
  puVar20 = local_1f0;
  *local_1f0 = local_b8;
  local_1f0[4] = uStack_98;
  local_1f0[3] = local_a0;
  local_1f0[2] = uStack_a8;
  local_1f0[1] = local_b0;
  puVar22 = &DAT_10055bac0;
  FUN_100002f94(&DAT_10055bac0,&DAT_1004306d8);
  FUN_1000087e4(lVar21,(long)puVar20 + (long)*(int *)(puVar22 + 0x30),&DAT_10055bab0,&DAT_1004306c8)
  ;
  _swift_bridgeObjectRetain(local_b8);
  FUN_10002a29c(lVar23,&DAT_10055bab0,&DAT_1004306c8);
  FUN_10002a29c(lVar21,&DAT_10055bab0,&DAT_1004306c8);
  _swift_bridgeObjectRelease(local_b8);
  return;
}

