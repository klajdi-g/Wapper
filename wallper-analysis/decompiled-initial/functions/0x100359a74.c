// rea decompile_all
// name: FUN_100359a74
// address: 0x100359a74
// body: available
// range: 0x100359a74-0x10035a7e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010035a420 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100359a74(undefined8 param_1,Color param_2)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  RoundedCornerStyle RVar4;
  Glass GVar5;
  Color CVar6;
  DefaultGlassEffectShape DVar7;
  code *pcVar8;
  Alignment AVar9;
  undefined *puVar10;
  Glass GVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  undefined1 *puVar15;
  AnyView AVar16;
  Glass GVar17;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar18;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined8 *unaff_x20;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  code *pcVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  code *local_260 [5];
  long local_238;
  undefined *local_230;
  long local_228 [2];
  undefined1 *local_218 [4];
  undefined8 local_1f8;
  undefined8 uStack_1f7;
  undefined8 auStack_1ef [15];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
  code *local_f0;
  undefined *puStack_e8;
  code *local_e0;
  code *pcStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  uStack_128 = unaff_x20[9];
  local_130 = unaff_x20[8];
  uStack_118 = unaff_x20[0xb];
  uStack_120 = unaff_x20[10];
  local_110 = unaff_x20[0xc];
  uStack_108 = (undefined1)unaff_x20[0xd];
  uStack_ff = *(undefined8 *)((long)unaff_x20 + 0x71);
  uStack_107 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x69);
  uStack_100 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x69) >> 0x38);
  uStack_168 = unaff_x20[1];
  local_170 = *unaff_x20;
  uStack_158 = unaff_x20[3];
  uStack_160 = unaff_x20[2];
  uStack_148 = unaff_x20[5];
  local_150 = unaff_x20[4];
  uStack_138 = unaff_x20[7];
  uStack_140 = unaff_x20[6];
  local_1f8 = param_1;
  bVar3 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  local_218[2] = param_2.unknown;
  if ((bVar3 & 1) == 0) {
    if (param_2.unknown == (undefined *)0x0) {
      puVar20 = &DAT_100553788;
      FUN_100002f94(&DAT_100553788,&DAT_10042fce0);
      local_218[3] = (undefined1 *)local_260;
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar21 = (long)local_260 - extraout_x8_15;
      uStack_a8 = unaff_x20[9];
      local_b0 = unaff_x20[8];
      uStack_98 = unaff_x20[0xb];
      uStack_a0 = unaff_x20[10];
      local_90 = unaff_x20[0xc];
      uStack_88 = (undefined1)unaff_x20[0xd];
      uStack_7f = *(undefined8 *)((long)unaff_x20 + 0x71);
      uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x69);
      uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x69) >> 0x38);
      puStack_e8 = (undefined *)unaff_x20[1];
      local_f0 = (code *)*unaff_x20;
      pcStack_d8 = (code *)unaff_x20[3];
      local_e0 = (code *)unaff_x20[2];
      uStack_c8 = unaff_x20[5];
      local_d0 = unaff_x20[4];
      uStack_b8 = unaff_x20[7];
      uStack_c0 = unaff_x20[6];
      FUN_100352f6c(lVar21);
      puVar20 = &DAT_10055dc28;
      FUN_100002f94(&DAT_10055dc28,&DAT_100433390);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar19 = lVar21 - extraout_x8_16;
      FUN_1000087e4(lVar21,lVar19,&DAT_100553788,&DAT_10042fce0);
      _swift_storeEnumTagMultiPayload(lVar19,puVar20,1);
      FUN_100002f94(&DAT_100553768,&DAT_1004267c8);
      FUN_1000372f4(&DAT_100553760,&DAT_100553768,&DAT_1004267c8,FUN_100122844);
      FUN_1000372f4(&DAT_100553780,&DAT_100553788,&DAT_10042fce0,FUN_1001228dc);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar19);
      FUN_10002a29c(lVar21,&DAT_100553788,&DAT_10042fce0);
    }
    else {
      puVar20 = &DAT_100553778;
      FUN_100002f94(&DAT_100553778,&DAT_1004333a0);
      local_218[3] = (undefined1 *)local_260;
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar19 = -extraout_x8_04;
      puVar24 = (undefined8 *)((long)local_260 + lVar19);
      lVar21 = (long)puVar24 + (long)*(int *)(puVar20 + 0x24);
      uVar1 = *(undefined4 *)
               PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
      ;
      RVar4 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
      lVar22 = CONCAT71((int7)((ulong)puVar20 >> 8),RVar4.value);
      (**(code **)(*(long *)(lVar22 + -8) + 0x68))(lVar21,uVar1,lVar22);
      _swift_retain();
      CVar6 = SwiftUI::Color::opacity(0.96,param_2);
      AVar9.unknown = &DAT_10054b118;
      puVar20 = &DAT_10041f7b0;
      FUN_100002f94();
      *(undefined **)(lVar21 + *(int *)(AVar9.unknown + 0x34)) = CVar6.unknown;
      *(undefined2 *)(lVar21 + *(int *)(AVar9.unknown + 0x38)) = 0x100;
      AVar9 = SwiftUI::Alignment::get_center(AVar9);
      uStack_a8 = unaff_x20[9];
      local_b0 = unaff_x20[8];
      uStack_98 = unaff_x20[0xb];
      uStack_a0 = unaff_x20[10];
      local_90 = unaff_x20[0xc];
      uStack_88 = (undefined1)unaff_x20[0xd];
      uStack_7f = *(undefined8 *)((long)unaff_x20 + 0x71);
      uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x69);
      uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x69) >> 0x38);
      puStack_e8 = (undefined *)unaff_x20[1];
      local_f0 = (code *)*unaff_x20;
      pcStack_d8 = (code *)unaff_x20[3];
      local_e0 = (code *)unaff_x20[2];
      uStack_c8 = unaff_x20[5];
      local_d0 = unaff_x20[4];
      uStack_b8 = unaff_x20[7];
      uStack_c0 = unaff_x20[6];
      puVar10 = &DAT_10054e1b0;
      FUN_100002f94(&DAT_10054e1b0,&DAT_10041f0a0);
      iVar2 = *(int *)(puVar10 + 0x24);
      *(undefined8 *)(lVar21 + iVar2) = AVar9.unknown;
      ((undefined8 *)(lVar21 + iVar2))[1] = puVar20;
      uVar27 = unaff_x20[4];
      uVar26 = unaff_x20[7];
      uVar25 = unaff_x20[6];
      *(undefined8 *)((long)&local_238 + lVar19) = unaff_x20[5];
      *(undefined8 *)((long)local_260 + lVar19 + 0x20) = uVar27;
      *(undefined8 *)((long)local_228 + lVar19) = uVar26;
      *(undefined8 *)((long)&local_230 + lVar19) = uVar25;
      uVar27 = *unaff_x20;
      uVar26 = unaff_x20[3];
      uVar25 = unaff_x20[2];
      *(undefined8 *)((long)local_260 + lVar19 + 8) = unaff_x20[1];
      *puVar24 = uVar27;
      *(undefined8 *)((long)local_260 + lVar19 + 0x18) = uVar26;
      *(undefined8 *)((long)local_260 + lVar19 + 0x10) = uVar25;
      uVar25 = *(undefined8 *)((long)unaff_x20 + 0x69);
      *(undefined8 *)((long)auStack_1ef + lVar19) = *(undefined8 *)((long)unaff_x20 + 0x71);
      *(undefined8 *)((long)auStack_1ef + lVar19 + -8) = uVar25;
      uVar25 = unaff_x20[10];
      uVar27 = unaff_x20[0xd];
      uVar26 = unaff_x20[0xc];
      *(undefined8 *)((long)local_218 + lVar19 + 0x10) = unaff_x20[0xb];
      *(undefined8 *)((long)local_218 + lVar19 + 8) = uVar25;
      *(undefined8 *)((long)&stack0xfffffffffffffe08 + lVar19) = uVar27;
      *(undefined8 *)((long)local_218 + lVar19 + 0x18) = uVar26;
      uVar25 = unaff_x20[8];
      *(undefined8 *)((long)local_228 + lVar19 + 0x10) = unaff_x20[9];
      *(undefined8 *)((long)local_228 + lVar19 + 8) = uVar25;
      puVar20 = &DAT_100553768;
      FUN_100002f94(&DAT_100553768,&DAT_1004267c8);
      local_218[0] = puVar20;
      local_218[1] = (undefined1 *)puVar24;
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar21 = (long)puVar24 - extraout_x8_05;
      puVar20 = &DAT_10055dc30;
      FUN_100002f94(&DAT_10055dc30,&DAT_1004333c8);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar19 = lVar21 - extraout_x8_06;
      FUN_1000087e4(puVar24,lVar19,&DAT_100553778,&DAT_1004333a0);
      _swift_storeEnumTagMultiPayload(lVar19,puVar20,1);
      FUN_1000087e4(&local_f0,(long)((long)register0x00000008 + -0x1f7) + 7,&DAT_10054a840,
                    &DAT_100422300);
      FUN_100122844();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar19);
      puVar20 = &DAT_10055dc28;
      FUN_100002f94(&DAT_10055dc28,&DAT_100433390);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar19 = lVar21 - extraout_x8_07;
      FUN_1000087e4(lVar21,lVar19,&DAT_100553768,&DAT_1004267c8);
      _swift_storeEnumTagMultiPayload(lVar19,puVar20,0);
      FUN_100002f94(&DAT_100553788,&DAT_10042fce0);
      FUN_1000372f4(&DAT_100553760,&DAT_100553768,&DAT_1004267c8,FUN_100122844);
      FUN_1000372f4(&DAT_100553780,&DAT_100553788,&DAT_10042fce0,FUN_1001228dc);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar19);
      _swift_release(local_218[2]);
      FUN_10002a29c(lVar21,&DAT_100553768,&DAT_1004267c8);
      FUN_10002a29c(puVar24,&DAT_100553778,&DAT_1004333a0);
    }
  }
  else {
    puVar20 = &DAT_10055dc38;
    FUN_100002f94(&DAT_10055dc38,&DAT_1004333d0);
    local_228[1] = *(long *)(*(long *)(puVar20 + -8) + 0x40);
    local_218[0] = puVar20;
    local_218[1] = (undefined1 *)local_260;
    (*(code *)PTR____chkstk_darwin_100521118)(local_228[1] + 0xfU & 0xfffffffffffffff0);
    lVar21 = (long)local_260 - extraout_x8;
    puVar20 = &DAT_10055dc40;
    GVar17.unknown = &DAT_1004333d8;
    local_228[0] = lVar21;
    local_218[3] = (undefined1 *)lVar21;
    if (param_2.unknown == (undefined *)0x0) {
      FUN_100002f94();
      local_230 = *(undefined **)(puVar20 + -8);
      local_218[2] = puVar20;
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(local_230 + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar21 = lVar21 - extraout_x8_08;
      GVar11 = SwiftUI::Glass::typeMetadataAccessor();
      lVar19 = *(long *)(GVar11.unknown + -8);
      GVar5 = GVar11;
      local_260[4] = (code *)GVar11;
      local_238 = lVar21;
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar19 + 0x40));
      puVar20 = (undefined *)(lVar21 - (extraout_x8_09 + 0xfU & 0xfffffffffffffff0));
      (*(code *)PTR____chkstk_darwin_100521118)();
      SwiftUI::Glass::get_regular(GVar5);
      SwiftUI::Glass::interactive(true,GVar17);
      local_260[3] = *(code **)(lVar19 + 8);
      (*local_260[3])((long)puVar20 - extraout_x12_01,GVar11.unknown);
      DVar7 = SwiftUI::DefaultGlassEffectShape::typeMetadataAccessor();
      lVar19 = *(long *)(DVar7.unknown + -8);
      local_260[2] = (code *)puVar20;
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar19 + 0x40));
      lVar22 = (long)puVar20 - (extraout_x8_10 + 0xfU & 0xfffffffffffffff0);
      SwiftUI::DefaultGlassEffectShape::init();
      pcVar12 = (code *)&DAT_10054a840;
      FUN_100002f94(&DAT_10054a840,&DAT_100422300);
      pcVar13 = pcVar12;
      local_260[1] = pcVar12;
      FUN_1000fbd60();
      pcVar14 = pcVar13;
      FUN_100009808();
      (extension_SwiftUI)::SwiftUI::View::_glassEffect
                (lVar21,puVar20,lVar22,pcVar12,DVar7.unknown,pcVar13,pcVar14);
      (**(code **)(lVar19 + 8))(lVar22,DVar7.unknown);
      (*local_260[3])(puVar20,local_260[4]);
      lVar19 = local_238;
      puVar20 = &DAT_10055dc48;
      FUN_100002f94(&DAT_10055dc48,&DAT_1004333e0);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar15 = local_218[2];
      puVar10 = local_230;
      lVar19 = lVar19 - extraout_x8_11;
      (**(code **)(local_230 + 0x10))(lVar19,lVar21,local_218[2]);
      _swift_storeEnumTagMultiPayload(lVar19,puVar20,1);
      local_f0 = local_260[1];
      puStack_e8 = DVar7.unknown;
      local_e0 = pcVar13;
      pcStack_d8 = pcVar14;
      _swift_getOpaqueTypeConformance2
                (&local_f0,
                 PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_glassEffect<A_where_A1:_SwiftUI_Shape>(_:_SwiftUI_Glass,in:_A1)__>_some>>_100522ed0
                 ,1);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar19);
      (**(code **)(puVar10 + 8))(lVar21,puVar15);
    }
    else {
      FUN_100002f94();
      local_238 = *(long *)(puVar20 + -8);
      local_230 = puVar20;
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(local_238 + 0x40) + 0xfU & 0xfffffffffffffff0);
      pcVar18 = (code *)(lVar21 - extraout_x8_00);
      local_260[3] = pcVar18;
      GVar5 = SwiftUI::Glass::typeMetadataAccessor();
      lVar21 = *(long *)(GVar5.unknown + -8);
      local_260[4] = pcVar18;
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar21 + 0x40));
      pcVar18 = pcVar18 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
      (*(code *)PTR____chkstk_darwin_100521118)();
      (*(code *)PTR____chkstk_darwin_100521118)();
      CVar6.unknown = param_2.unknown;
      _swift_retain();
      SwiftUI::Glass::get_regular((Glass)CVar6.unknown);
      CVar6 = SwiftUI::Color::opacity(0.85,param_2);
      SwiftUI::Glass::_tint((Glass)CVar6.unknown);
      _swift_release(CVar6.unknown);
      pcVar23 = *(code **)(lVar21 + 8);
      GVar17 = GVar5;
      local_260[2] = (code *)GVar5;
      (*pcVar23)(((long)pcVar18 - extraout_x12) - extraout_x12_00);
      SwiftUI::Glass::interactive(true,GVar17);
      (*pcVar23)((long)pcVar18 - extraout_x12,GVar5.unknown);
      DVar7 = SwiftUI::DefaultGlassEffectShape::typeMetadataAccessor();
      lVar21 = *(long *)(DVar7.unknown + -8);
      local_260[1] = pcVar18;
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar21 + 0x40));
      lVar19 = (long)pcVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
      SwiftUI::DefaultGlassEffectShape::init();
      pcVar12 = (code *)&DAT_10054a840;
      FUN_100002f94(&DAT_10054a840,&DAT_100422300);
      pcVar8 = pcVar12;
      FUN_1000fbd60();
      pcVar14 = pcVar8;
      FUN_100009808();
      pcVar13 = local_260[3];
      local_260[0] = pcVar14;
      (extension_SwiftUI)::SwiftUI::View::_glassEffect
                (local_260[3],pcVar18,lVar19,pcVar12,DVar7.unknown,pcVar8,pcVar14);
      (**(code **)(lVar21 + 8))(lVar19,DVar7.unknown);
      (*pcVar23)(pcVar18,local_260[2]);
      pcVar14 = local_260[4];
      puVar20 = &DAT_10055dc48;
      FUN_100002f94(&DAT_10055dc48,&DAT_1004333e0);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar10 = local_230;
      lVar21 = local_238;
      lVar19 = (long)pcVar14 - extraout_x8_03;
      (**(code **)(local_238 + 0x10))(lVar19,pcVar13,local_230);
      _swift_storeEnumTagMultiPayload(lVar19,puVar20,0);
      pcStack_d8 = local_260[0];
      local_f0 = pcVar12;
      puStack_e8 = DVar7.unknown;
      local_e0 = pcVar8;
      _swift_getOpaqueTypeConformance2
                (&local_f0,
                 PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_glassEffect<A_where_A1:_SwiftUI_Shape>(_:_SwiftUI_Glass,in:_A1)__>_some>>_100522ed0
                 ,1);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar19);
      _swift_release(local_218[2]);
      (**(code **)(lVar21 + 8))(pcVar13,puVar10);
    }
    lVar21 = local_228[0];
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar15 = local_218[3];
    FUN_1000087e4(local_218[3],lVar21 - (extraout_x12_02 + 0xfU & 0xfffffffffffffff0),&DAT_10055dc38
                  ,&DAT_1004333d0);
    FUN_1003858f4();
    AVar16 = SwiftUI::AnyView::_init(puVar15,local_218[0],puVar15);
    puVar20 = &DAT_100553768;
    FUN_100002f94(&DAT_100553768,&DAT_1004267c8);
    local_218[2] = (undefined1 *)lVar21;
    local_218[0] = puVar20;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar21 = lVar21 - extraout_x8_12;
    puVar20 = &DAT_10055dc30;
    FUN_100002f94(&DAT_10055dc30,&DAT_1004333c8);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar24 = (undefined8 *)(lVar21 - extraout_x8_13);
    *puVar24 = AVar16.unknown;
    _swift_storeEnumTagMultiPayload(puVar24);
    _swift_retain(AVar16.unknown);
    FUN_100002f94(&DAT_100553778,&DAT_1004333a0);
    FUN_100122844();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar24);
    puVar20 = &DAT_10055dc28;
    FUN_100002f94(&DAT_10055dc28,&DAT_100433390);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar19 = lVar21 - extraout_x8_14;
    FUN_1000087e4(lVar21,lVar19,&DAT_100553768,&DAT_1004267c8);
    _swift_storeEnumTagMultiPayload(lVar19,puVar20,0);
    FUN_100002f94(&DAT_100553788,&DAT_10042fce0);
    FUN_1000372f4(&DAT_100553760,&DAT_100553768,&DAT_1004267c8,FUN_100122844);
    FUN_1000372f4(&DAT_100553780,&DAT_100553788,&DAT_10042fce0,FUN_1001228dc);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar19);
    _swift_release(AVar16.unknown);
    FUN_10002a29c(lVar21,&DAT_100553768,&DAT_1004267c8);
    FUN_10002a29c(local_218[3],&DAT_10055dc38,&DAT_1004333d0);
  }
  return;
}

