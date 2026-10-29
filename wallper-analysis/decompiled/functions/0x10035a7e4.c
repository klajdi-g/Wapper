// rea decompile_all
// name: FUN_10035a7e4
// address: 0x10035a7e4
// body: available
// range: 0x10035a7e4-0x10035b5a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010035b1d0 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10035a7e4(undefined8 param_1,Color param_2)

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
  undefined1 *puVar18;
  long extraout_x8_00;
  code *pcVar19;
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
  undefined *puVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auStack_320 [8];
  code *local_318 [5];
  long local_2f0;
  undefined1 *local_2e8 [2];
  long local_2d8;
  undefined1 *local_2d0 [12];
  undefined1 auStack_270 [128];
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_140;
  code *local_130;
  undefined *puStack_128;
  code *local_120;
  code *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  
  uStack_168 = unaff_x20[0x11];
  local_170 = unaff_x20[0x10];
  uStack_158 = unaff_x20[0x13];
  uStack_160 = unaff_x20[0x12];
  uStack_148 = unaff_x20[0x15];
  local_150 = unaff_x20[0x14];
  local_140 = *(undefined1 *)(unaff_x20 + 0x16);
  uStack_1a8 = unaff_x20[9];
  local_1b0 = unaff_x20[8];
  uStack_198 = unaff_x20[0xb];
  uStack_1a0 = unaff_x20[10];
  uStack_188 = unaff_x20[0xd];
  local_190 = unaff_x20[0xc];
  uStack_178 = unaff_x20[0xf];
  uStack_180 = unaff_x20[0xe];
  uStack_1e8 = unaff_x20[1];
  local_1f0 = *unaff_x20;
  uStack_1d8 = unaff_x20[3];
  uStack_1e0 = unaff_x20[2];
  uStack_1c8 = unaff_x20[5];
  local_1d0 = unaff_x20[4];
  uStack_1b8 = unaff_x20[7];
  uStack_1c0 = unaff_x20[6];
  local_2d0[4] = (undefined1 *)param_1;
  bVar3 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  local_2d0[2] = param_2.unknown;
  if ((bVar3 & 1) == 0) {
    if (param_2.unknown == (undefined *)0x0) {
      puVar20 = &DAT_100553418;
      FUN_100002f94(&DAT_100553418,&DAT_100433290);
      local_2d0[3] = auStack_320;
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar18 = auStack_320 + -extraout_x8_15;
      uStack_a8 = unaff_x20[0x11];
      local_b0 = unaff_x20[0x10];
      uStack_98 = unaff_x20[0x13];
      uStack_a0 = unaff_x20[0x12];
      uStack_88 = unaff_x20[0x15];
      local_90 = unaff_x20[0x14];
      local_80 = *(undefined1 *)(unaff_x20 + 0x16);
      uStack_e8 = unaff_x20[9];
      local_f0 = unaff_x20[8];
      uStack_d8 = unaff_x20[0xb];
      uStack_e0 = unaff_x20[10];
      uStack_c8 = unaff_x20[0xd];
      local_d0 = unaff_x20[0xc];
      uStack_b8 = unaff_x20[0xf];
      uStack_c0 = unaff_x20[0xe];
      puStack_128 = (undefined *)unaff_x20[1];
      local_130 = (code *)*unaff_x20;
      local_118 = (code *)unaff_x20[3];
      local_120 = (code *)unaff_x20[2];
      uStack_108 = unaff_x20[5];
      local_110 = unaff_x20[4];
      uStack_f8 = unaff_x20[7];
      uStack_100 = unaff_x20[6];
      FUN_100353710(puVar18);
      puVar20 = &DAT_10055dba8;
      FUN_100002f94(&DAT_10055dba8,&DAT_100433298);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar21 = (long)puVar18 - extraout_x8_16;
      FUN_1000087e4(puVar18,lVar21,&DAT_100553418,&DAT_100433290);
      _swift_storeEnumTagMultiPayload(lVar21,puVar20,1);
      FUN_100002f94(&DAT_1005533f8,&DAT_1004332a0);
      FUN_1000372f4(&DAT_1005533f0,&DAT_1005533f8,&DAT_1004332a0,FUN_1001212f8);
      FUN_1000372f4(&DAT_100553410,&DAT_100553418,&DAT_100433290,FUN_100121390);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar21);
      FUN_10002a29c(puVar18,&DAT_100553418,&DAT_100433290);
    }
    else {
      puVar20 = &DAT_100553408;
      FUN_100002f94(&DAT_100553408,&DAT_1004264c0);
      local_2d0[3] = auStack_320;
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar21 = -extraout_x8_04;
      puVar25 = (undefined8 *)(auStack_320 + lVar21);
      puVar18 = (undefined1 *)((long)puVar25 + (long)*(int *)(puVar20 + 0x24));
      uVar1 = *(undefined4 *)
               PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
      ;
      RVar4 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
      lVar23 = CONCAT71((int7)((ulong)puVar20 >> 8),RVar4.value);
      (**(code **)(*(long *)(lVar23 + -8) + 0x68))(puVar18,uVar1,lVar23);
      _swift_retain();
      CVar6 = SwiftUI::Color::opacity(0.96,param_2);
      AVar9.unknown = &DAT_10054b118;
      puVar20 = &DAT_10041f7b0;
      FUN_100002f94();
      *(undefined **)(puVar18 + *(int *)(AVar9.unknown + 0x34)) = CVar6.unknown;
      *(undefined2 *)(puVar18 + *(int *)(AVar9.unknown + 0x38)) = 0x100;
      AVar9 = SwiftUI::Alignment::get_center(AVar9);
      uStack_a8 = unaff_x20[0x11];
      local_b0 = unaff_x20[0x10];
      uStack_98 = unaff_x20[0x13];
      uStack_a0 = unaff_x20[0x12];
      uStack_88 = unaff_x20[0x15];
      local_90 = unaff_x20[0x14];
      local_80 = *(undefined1 *)(unaff_x20 + 0x16);
      uStack_e8 = unaff_x20[9];
      local_f0 = unaff_x20[8];
      uStack_d8 = unaff_x20[0xb];
      uStack_e0 = unaff_x20[10];
      uStack_c8 = unaff_x20[0xd];
      local_d0 = unaff_x20[0xc];
      uStack_b8 = unaff_x20[0xf];
      uStack_c0 = unaff_x20[0xe];
      puStack_128 = (undefined *)unaff_x20[1];
      local_130 = (code *)*unaff_x20;
      local_118 = (code *)unaff_x20[3];
      local_120 = (code *)unaff_x20[2];
      uStack_108 = unaff_x20[5];
      local_110 = unaff_x20[4];
      uStack_f8 = unaff_x20[7];
      uStack_100 = unaff_x20[6];
      puVar10 = &DAT_10054e1b0;
      FUN_100002f94(&DAT_10054e1b0,&DAT_10041f0a0);
      iVar2 = *(int *)(puVar10 + 0x24);
      *(undefined **)(puVar18 + iVar2) = AVar9.unknown;
      *(undefined **)((long)(puVar18 + iVar2) + 8) = puVar20;
      uVar28 = unaff_x20[4];
      uVar27 = unaff_x20[7];
      uVar26 = unaff_x20[6];
      *(undefined8 *)((long)local_318 + lVar21 + 0x20) = unaff_x20[5];
      *(undefined8 *)((long)local_318 + lVar21 + 0x18) = uVar28;
      *(undefined8 *)((long)local_2e8 + lVar21) = uVar27;
      *(undefined8 *)((long)&local_2f0 + lVar21) = uVar26;
      uVar28 = *unaff_x20;
      uVar27 = unaff_x20[3];
      uVar26 = unaff_x20[2];
      *(undefined8 *)((long)local_318 + lVar21) = unaff_x20[1];
      *puVar25 = uVar28;
      *(undefined8 *)((long)local_318 + lVar21 + 0x10) = uVar27;
      *(undefined8 *)((long)local_318 + lVar21 + 8) = uVar26;
      uVar28 = unaff_x20[0xc];
      uVar27 = unaff_x20[0xf];
      uVar26 = unaff_x20[0xe];
      *(undefined8 *)((long)local_2d0 + lVar21 + 0x18) = unaff_x20[0xd];
      *(undefined8 *)((long)local_2d0 + lVar21 + 0x10) = uVar28;
      *(undefined8 *)((long)local_2d0 + lVar21 + 0x28U) = uVar27;
      *(undefined8 *)((long)local_2d0 + lVar21 + 0x20) = uVar26;
      uVar28 = unaff_x20[8];
      uVar27 = unaff_x20[0xb];
      uVar26 = unaff_x20[10];
      *(undefined8 *)((long)local_2d0 + lVar21 + -8) = unaff_x20[9];
      *(undefined8 *)((long)local_2e8 + lVar21 + 8) = uVar28;
      *(undefined8 *)((long)local_2d0 + lVar21 + 8) = uVar27;
      *(undefined8 *)((long)local_2d0 + lVar21) = uVar26;
      auStack_270[lVar21] = *(undefined1 *)(unaff_x20 + 0x16);
      uVar26 = unaff_x20[0x12];
      uVar28 = unaff_x20[0x15];
      uVar27 = unaff_x20[0x14];
      *(undefined8 *)((long)local_2d0 + lVar21 + 0x48U) = unaff_x20[0x13];
      *(undefined8 *)((long)local_2d0 + lVar21 + 0x40U) = uVar26;
      *(undefined8 *)((long)local_2d0 + lVar21 + 0x58U) = uVar28;
      *(undefined8 *)((long)local_2d0 + lVar21 + 0x50U) = uVar27;
      uVar26 = unaff_x20[0x10];
      *(undefined8 *)((long)local_2d0 + lVar21 + 0x38U) = unaff_x20[0x11];
      *(undefined8 *)((long)local_2d0 + lVar21 + 0x30U) = uVar26;
      puVar20 = &DAT_1005533f8;
      FUN_100002f94(&DAT_1005533f8,&DAT_1004332a0);
      local_2d0[0] = puVar20;
      local_2d0[1] = (undefined1 *)puVar25;
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar21 = (long)puVar25 - extraout_x8_05;
      puVar20 = &DAT_10055dbb0;
      FUN_100002f94(&DAT_10055dbb0,&DAT_1004332d0);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar23 = lVar21 - extraout_x8_06;
      FUN_1000087e4(puVar25,lVar23,&DAT_100553408,&DAT_1004264c0);
      _swift_storeEnumTagMultiPayload(lVar23,puVar20,1);
      FUN_1000087e4(&local_130,local_2d0 + 5,&DAT_10054e3e8,&DAT_100430ce0);
      FUN_1001212f8();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar23);
      puVar20 = &DAT_10055dba8;
      FUN_100002f94(&DAT_10055dba8,&DAT_100433298);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar23 = lVar21 - extraout_x8_07;
      FUN_1000087e4(lVar21,lVar23,&DAT_1005533f8,&DAT_1004332a0);
      _swift_storeEnumTagMultiPayload(lVar23,puVar20,0);
      FUN_100002f94(&DAT_100553418,&DAT_100433290);
      FUN_1000372f4(&DAT_1005533f0,&DAT_1005533f8,&DAT_1004332a0,FUN_1001212f8);
      FUN_1000372f4(&DAT_100553410,&DAT_100553418,&DAT_100433290,FUN_100121390);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar23);
      _swift_release(local_2d0[2]);
      FUN_10002a29c(lVar21,&DAT_1005533f8,&DAT_1004332a0);
      FUN_10002a29c(puVar25,&DAT_100553408,&DAT_1004264c0);
    }
  }
  else {
    puVar20 = &DAT_10055dbb8;
    FUN_100002f94(&DAT_10055dbb8,&DAT_1004332d8);
    local_2d8 = *(long *)(*(long *)(puVar20 + -8) + 0x40);
    local_2d0[0] = puVar20;
    local_2d0[1] = auStack_320;
    (*(code *)PTR____chkstk_darwin_100521118)(local_2d8 + 0xfU & 0xfffffffffffffff0);
    puVar18 = auStack_320 + -extraout_x8;
    puVar20 = &DAT_10055dbc0;
    GVar17.unknown = &DAT_1004332e0;
    local_2e8[1] = puVar18;
    local_2d0[3] = puVar18;
    if (param_2.unknown == (undefined *)0x0) {
      FUN_100002f94();
      local_2e8[0] = *(undefined1 **)(puVar20 + -8);
      local_2d0[2] = puVar20;
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(local_2e8[0] + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar24 = (long)puVar18 - extraout_x8_08;
      GVar11 = SwiftUI::Glass::typeMetadataAccessor();
      lVar21 = *(long *)(GVar11.unknown + -8);
      GVar5 = GVar11;
      local_318[4] = (code *)GVar11;
      local_2f0 = lVar24;
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar21 + 0x40));
      puVar20 = (undefined *)(lVar24 - (extraout_x8_09 + 0xfU & 0xfffffffffffffff0));
      (*(code *)PTR____chkstk_darwin_100521118)();
      SwiftUI::Glass::get_regular(GVar5);
      SwiftUI::Glass::interactive(true,GVar17);
      local_318[3] = *(code **)(lVar21 + 8);
      (*local_318[3])((long)puVar20 - extraout_x12_01,GVar11.unknown);
      DVar7 = SwiftUI::DefaultGlassEffectShape::typeMetadataAccessor();
      lVar21 = *(long *)(DVar7.unknown + -8);
      local_318[2] = (code *)puVar20;
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar21 + 0x40));
      lVar23 = (long)puVar20 - (extraout_x8_10 + 0xfU & 0xfffffffffffffff0);
      SwiftUI::DefaultGlassEffectShape::init();
      pcVar12 = (code *)&DAT_10054e3e8;
      FUN_100002f94(&DAT_10054e3e8,&DAT_100430ce0);
      pcVar13 = pcVar12;
      local_318[1] = pcVar12;
      FUN_10006bae0();
      pcVar14 = pcVar13;
      FUN_100009808();
      (extension_SwiftUI)::SwiftUI::View::_glassEffect
                (lVar24,puVar20,lVar23,pcVar12,DVar7.unknown,pcVar13,pcVar14);
      (**(code **)(lVar21 + 8))(lVar23,DVar7.unknown);
      (*local_318[3])(puVar20,local_318[4]);
      lVar21 = local_2f0;
      puVar20 = &DAT_10055dbc8;
      FUN_100002f94(&DAT_10055dbc8,&DAT_1004332e8);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar15 = local_2d0[2];
      puVar18 = local_2e8[0];
      lVar21 = lVar21 - extraout_x8_11;
      (**(code **)(local_2e8[0] + 0x10))(lVar21,lVar24,local_2d0[2]);
      _swift_storeEnumTagMultiPayload(lVar21,puVar20,1);
      local_130 = local_318[1];
      puStack_128 = DVar7.unknown;
      local_120 = pcVar13;
      local_118 = pcVar14;
      _swift_getOpaqueTypeConformance2
                (&local_130,
                 PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_glassEffect<A_where_A1:_SwiftUI_Shape>(_:_SwiftUI_Glass,in:_A1)__>_some>>_100522ed0
                 ,1);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar21);
      (**(code **)(puVar18 + 8))(lVar24,puVar15);
    }
    else {
      FUN_100002f94();
      local_2f0 = *(long *)(puVar20 + -8);
      local_2e8[0] = puVar20;
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(local_2f0 + 0x40) + 0xfU & 0xfffffffffffffff0);
      pcVar19 = (code *)(puVar18 + -extraout_x8_00);
      local_318[3] = pcVar19;
      GVar5 = SwiftUI::Glass::typeMetadataAccessor();
      lVar21 = *(long *)(GVar5.unknown + -8);
      local_318[4] = pcVar19;
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar21 + 0x40));
      pcVar19 = pcVar19 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
      (*(code *)PTR____chkstk_darwin_100521118)();
      (*(code *)PTR____chkstk_darwin_100521118)();
      CVar6.unknown = param_2.unknown;
      _swift_retain();
      SwiftUI::Glass::get_regular((Glass)CVar6.unknown);
      CVar6 = SwiftUI::Color::opacity(0.85,param_2);
      SwiftUI::Glass::_tint((Glass)CVar6.unknown);
      _swift_release(CVar6.unknown);
      pcVar22 = *(code **)(lVar21 + 8);
      GVar17 = GVar5;
      local_318[2] = (code *)GVar5;
      (*pcVar22)(((long)pcVar19 - extraout_x12) - extraout_x12_00);
      SwiftUI::Glass::interactive(true,GVar17);
      (*pcVar22)((long)pcVar19 - extraout_x12,GVar5.unknown);
      DVar7 = SwiftUI::DefaultGlassEffectShape::typeMetadataAccessor();
      lVar21 = *(long *)(DVar7.unknown + -8);
      local_318[1] = pcVar19;
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar21 + 0x40));
      lVar23 = (long)pcVar19 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
      SwiftUI::DefaultGlassEffectShape::init();
      pcVar12 = (code *)&DAT_10054e3e8;
      FUN_100002f94(&DAT_10054e3e8,&DAT_100430ce0);
      pcVar8 = pcVar12;
      FUN_10006bae0();
      pcVar14 = pcVar8;
      FUN_100009808();
      pcVar13 = local_318[3];
      local_318[0] = pcVar14;
      (extension_SwiftUI)::SwiftUI::View::_glassEffect
                (local_318[3],pcVar19,lVar23,pcVar12,DVar7.unknown,pcVar8,pcVar14);
      (**(code **)(lVar21 + 8))(lVar23,DVar7.unknown);
      (*pcVar22)(pcVar19,local_318[2]);
      pcVar14 = local_318[4];
      puVar20 = &DAT_10055dbc8;
      FUN_100002f94(&DAT_10055dbc8,&DAT_1004332e8);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar18 = local_2e8[0];
      lVar21 = local_2f0;
      lVar23 = (long)pcVar14 - extraout_x8_03;
      (**(code **)(local_2f0 + 0x10))(lVar23,pcVar13,local_2e8[0]);
      _swift_storeEnumTagMultiPayload(lVar23,puVar20,0);
      local_118 = local_318[0];
      local_130 = pcVar12;
      puStack_128 = DVar7.unknown;
      local_120 = pcVar8;
      _swift_getOpaqueTypeConformance2
                (&local_130,
                 PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_glassEffect<A_where_A1:_SwiftUI_Shape>(_:_SwiftUI_Glass,in:_A1)__>_some>>_100522ed0
                 ,1);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar23);
      _swift_release(local_2d0[2]);
      (**(code **)(lVar21 + 8))(pcVar13,puVar18);
    }
    puVar18 = local_2e8[1];
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar15 = local_2d0[3];
    FUN_1000087e4(local_2d0[3],(long)puVar18 - (extraout_x12_02 + 0xfU & 0xfffffffffffffff0),
                  &DAT_10055dbb8,&DAT_1004332d8);
    FUN_100385774();
    AVar16 = SwiftUI::AnyView::_init(puVar15,local_2d0[0],puVar15);
    puVar20 = &DAT_1005533f8;
    FUN_100002f94(&DAT_1005533f8,&DAT_1004332a0);
    local_2d0[2] = puVar18;
    local_2d0[0] = puVar20;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar21 = (long)puVar18 - extraout_x8_12;
    puVar20 = &DAT_10055dbb0;
    FUN_100002f94(&DAT_10055dbb0,&DAT_1004332d0);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar25 = (undefined8 *)(lVar21 - extraout_x8_13);
    *puVar25 = AVar16.unknown;
    _swift_storeEnumTagMultiPayload(puVar25);
    _swift_retain(AVar16.unknown);
    FUN_100002f94(&DAT_100553408,&DAT_1004264c0);
    FUN_1001212f8();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar25);
    puVar20 = &DAT_10055dba8;
    FUN_100002f94(&DAT_10055dba8,&DAT_100433298);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar23 = lVar21 - extraout_x8_14;
    FUN_1000087e4(lVar21,lVar23,&DAT_1005533f8,&DAT_1004332a0);
    _swift_storeEnumTagMultiPayload(lVar23,puVar20,0);
    FUN_100002f94(&DAT_100553418,&DAT_100433290);
    FUN_1000372f4(&DAT_1005533f0,&DAT_1005533f8,&DAT_1004332a0,FUN_1001212f8);
    FUN_1000372f4(&DAT_100553410,&DAT_100553418,&DAT_100433290,FUN_100121390);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar23);
    _swift_release(AVar16.unknown);
    FUN_10002a29c(lVar21,&DAT_1005533f8,&DAT_1004332a0);
    FUN_10002a29c(local_2d0[3],&DAT_10055dbb8,&DAT_1004332d8);
  }
  return;
}

