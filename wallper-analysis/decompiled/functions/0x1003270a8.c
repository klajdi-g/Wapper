// rea decompile_all
// name: FUN_1003270a8
// address: 0x1003270a8
// body: available
// range: 0x1003270a8-0x100327453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003270a8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ResizingMode RVar1;
  AsyncImagePhase AVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  Color CVar5;
  Image IVar6;
  Animation AVar7;
  StateObject SVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined *local_1b0 [2];
  undefined2 local_1a0;
  undefined6 uStack_19e;
  undefined8 local_198;
  undefined1 local_190;
  undefined7 uStack_18f;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *local_178;
  undefined8 local_170;
  undefined *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  ulong local_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined1 local_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined *local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 uStack_d8;
  undefined7 local_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 local_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  undefined *puVar3;
  long lVar4;
  
  RVar1 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar3 = (undefined *)CONCAT71(extraout_var,RVar1.value);
  lVar12 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  AVar7.unknown = (undefined *)((long)local_1b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  AVar2 = SwiftUI::AsyncImagePhase::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var_00,AVar2.value);
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  puVar11 = (undefined8 *)(AVar7.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar13 + 0x10))(puVar11,param_2,lVar4);
  CVar5.unknown = (undefined *)puVar11;
  (**(code **)(lVar13 + 0x58))(puVar11,lVar4);
  if ((int)CVar5.unknown ==
      *(int *)
       PTR___enum_case_for_SwiftUI_AsyncImagePhase_success_SwiftUI_AsyncImagePhase_Type___>__SwiftUI_Image___>_SwiftUI_AsyncImagePhase_1005221f0
     ) {
    (**(code **)(lVar13 + 0x60))(puVar11,lVar4);
    uVar10 = *puVar11;
    IVar6.unknown = puVar3;
    (**(code **)(lVar12 + 0x68))
              (AVar7.unknown,
               *(undefined4 *)
                PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_1005232f0
              );
    IVar6 = SwiftUI::Image::resizable((EdgeInsets)AVar7.unknown,(ResizingMode)(__int8)uVar10,IVar6);
    (**(code **)(lVar12 + 8))(AVar7.unknown,puVar3);
    AVar7 = SwiftUI::Animation::easeOut(0.25,AVar7);
    SVar8.unknown = *(undefined **)(param_3 + 0x10);
    uVar9 = *(undefined8 *)(param_3 + 0x18);
    FUN_10002ea18(0);
    FUN_1000036d0(&DAT_10055c5e8,FUN_10002ea18,&TargetProtocolConformanceDescriptor_10041cd50);
    SwiftUI::StateObject::get_wrappedValue(SVar8);
    puVar3 = SVar8.unknown;
    FUN_10002c2e0();
    _swift_release(SVar8.unknown);
    local_1b0[1] = (undefined *)0x0;
    local_1a0 = 0x101;
    local_198 = 0x4044000000000000;
    local_190 = 0;
    uStack_188 = 0x3fe199999999999a;
    uStack_158 = 0;
    local_150 = CONCAT62(local_150._2_6_,0x101);
    local_148 = 0x4044000000000000;
    local_140 = local_140 & 0xffffffffffffff00;
    uStack_138 = 0x3fe199999999999a;
    local_128 = SUB81(puVar3,0);
    uStack_127 = (undefined7)((ulong)puVar3 >> 8);
    uStack_120 = (undefined1)uVar9;
    uStack_11f = (undefined7)((ulong)uVar9 >> 8);
    local_1b0[0] = IVar6.unknown;
    puStack_180 = AVar7.unknown;
    local_178 = puVar3;
    local_170 = uVar9;
    local_160 = IVar6.unknown;
    puStack_130 = AVar7.unknown;
    FUN_1000087e4(local_1b0,&local_c0,&DAT_10055c658,&DAT_100431448);
    FUN_10002a29c(&local_160,&DAT_10055c658,&DAT_100431448);
    local_f0 = CONCAT71(uStack_18f,local_190);
    uStack_e8 = uStack_188;
    uStack_d8 = SUB81(local_178,0);
    local_d7 = (undefined7)((ulong)local_178 >> 8);
    puStack_e0 = puStack_180;
    uStack_d0 = (undefined1)local_170;
    uStack_cf = (undefined7)((ulong)local_170 >> 8);
    uStack_100 = CONCAT62(uStack_19e,local_1a0);
    uStack_108 = local_1b0[1];
    local_110 = local_1b0[0];
    uStack_f8 = local_198;
    uStack_c8 = 0;
    FUN_1000087e4(local_1b0,&local_c0,&DAT_10055c658,&DAT_100431448);
    FUN_1000087e4(local_1b0,&local_c0,&DAT_10055c658,&DAT_100431448);
    FUN_100002f94(&DAT_10055c658,&DAT_100431448);
    FUN_10032a760();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)&local_110);
    _swift_release(uVar10);
    FUN_10002a29c(local_1b0,&DAT_10055c658,&DAT_100431448);
    FUN_10002a29c(local_1b0,&DAT_10055c658,&DAT_100431448);
  }
  else {
    local_110 = (undefined *)SwiftUI::Color::get_black(CVar5);
    uStack_c8 = 1;
    FUN_100002f94(&DAT_10055c658,&DAT_100431448);
    FUN_10032a760();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)&local_110);
    (**(code **)(lVar13 + 8))(puVar11,lVar4);
  }
  uStack_138 = uStack_98;
  local_140 = local_a0;
  puStack_130 = (undefined *)uStack_90;
  uStack_11f = (undefined7)uStack_7f;
  uStack_118 = (undefined1)((ulong)uStack_7f >> 0x38);
  uStack_158 = uStack_b8;
  local_160 = local_c0;
  local_148 = uStack_a8;
  local_150 = uStack_b0;
  param_1[5] = uStack_98;
  param_1[4] = local_a0;
  param_1[7] = CONCAT71(local_87,uStack_88);
  param_1[6] = uStack_90;
  *(undefined8 *)((long)param_1 + 0x41) = uStack_7f;
  *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_80,local_87);
  param_1[1] = uStack_b8;
  *param_1 = local_c0;
  param_1[3] = uStack_a8;
  param_1[2] = uStack_b0;
  uStack_e8 = uStack_98;
  local_f0 = local_a0;
  puStack_e0 = (undefined *)uStack_90;
  uStack_108 = uStack_b8;
  local_110 = local_c0;
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  uStack_cf = uStack_11f;
  uStack_c8 = uStack_118;
  FUN_1000087e4(&local_160,local_1b0,&DAT_10055c640,&DAT_100431440);
  FUN_10002a29c(&local_110,&DAT_10055c640,&DAT_100431440);
  return;
}

