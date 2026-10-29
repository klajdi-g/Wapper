// rea decompile_all
// name: FUN_100305c1c
// address: 0x100305c1c
// body: available
// range: 0x100305c1c-0x100306517 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100306244 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100305c1c(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  ResizingMode RVar2;
  AsyncImagePhase AVar3;
  int iVar4;
  OpacityTransition OVar5;
  Image IVar7;
  AnyTransition AVar8;
  Color CVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  Color CVar14;
  long lVar15;
  EdgeInsets capInsets;
  undefined8 uStack_210;
  undefined *local_208;
  long local_200;
  undefined *local_1f8;
  long local_1f0;
  undefined8 *local_1e8;
  undefined *local_1e0;
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
  undefined *local_190;
  undefined *puStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined *puStack_168;
  undefined *local_160;
  undefined *puStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined *puStack_138;
  undefined *local_120;
  undefined *puStack_118;
  ulong local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined *puStack_f8;
  ushort local_f0;
  undefined *local_e0;
  undefined *puStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined *puStack_b8;
  undefined2 local_b0;
  undefined *local_a0;
  undefined *puStack_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined *puStack_78;
  ushort local_70;
  undefined *puVar6;
  
  local_1e8 = param_1;
  RVar2 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  local_1f8 = (undefined *)CONCAT71((int7)((ulong)param_2 >> 8),RVar2.value);
  lVar11 = *(long *)(local_1f8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  capInsets.unknown = (undefined *)((long)&uStack_210 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  OVar5 = SwiftUI::OpacityTransition::typeMetadataAccessor();
  local_1f0 = *(long *)(OVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1f0 + 0x40));
  lVar15 = (long)capInsets.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar15 - extraout_x12;
  AVar3 = SwiftUI::AsyncImagePhase::typeMetadataAccessor();
  puVar6 = (undefined *)CONCAT71((int7)((ulong)OVar5.unknown >> 8),AVar3.value);
  lVar13 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  CVar14.unknown = (undefined *)(lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar13 + 0x10))(CVar14.unknown,param_2,puVar6);
  CVar9.unknown = CVar14.unknown;
  (**(code **)(lVar13 + 0x58))(CVar14.unknown,puVar6);
  lVar10 = local_1f0;
  iVar4 = (int)CVar9.unknown;
  cVar1 = (char)&stack0xfffffffffffffff0;
  if (iVar4 == *(int *)
                PTR___enum_case_for_SwiftUI_AsyncImagePhase_success_SwiftUI_AsyncImagePhase_Type___>__SwiftUI_Image___>_SwiftUI_AsyncImagePhase_1005221f0
     ) {
    (**(code **)(lVar13 + 0x60))(CVar14.unknown,puVar6);
    puVar6 = local_1f8;
    lVar10 = *(long *)CVar14.unknown;
    IVar7.unknown = local_1f8;
    local_200 = lVar10;
    (**(code **)(lVar11 + 0x68))
              (capInsets.unknown,
               *(undefined4 *)
                PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_1005232f0
              );
    IVar7 = SwiftUI::Image::resizable(capInsets,(ResizingMode)(__int8)lVar10,IVar7);
    (**(code **)(lVar11 + 8))(capInsets.unknown,puVar6);
    SwiftUI::OpacityTransition::init();
    lVar10 = local_1f0;
    puStack_1d8 = (undefined *)0x0;
    local_1d0 = 0x101;
    local_1c8 = 0;
    local_1c0 = 0x1010101;
    local_1e0 = IVar7.unknown;
    (**(code **)(local_1f0 + 0x10))(lVar15,lVar12,OVar5.unknown);
    puVar6 = &DAT_10054ae80;
    FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                  PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
    AVar8 = SwiftUI::AnyTransition::_init(puVar6,OVar5.unknown,puVar6);
    (**(code **)(lVar10 + 8))(lVar12,OVar5.unknown);
    local_d0 = CONCAT62(uStack_1ce,local_1d0);
    puStack_d8 = puStack_1d8;
    local_e0 = local_1e0;
    uStack_c8 = local_1c8;
    local_c0 = CONCAT44(local_c0._4_4_,local_1c0);
    uStack_1b0 = 0;
    local_1a8 = 0x101;
    local_1a0 = 0;
    local_198 = 0x1010101;
    local_1b8 = IVar7.unknown;
    FUN_1000087e4(&local_1e0,&local_a0,&DAT_10055bb00,&DAT_1004306f8);
    FUN_10002a29c(&local_1b8,&DAT_10055bb00,&DAT_1004306f8);
    puStack_188 = puStack_d8;
    local_190 = local_e0;
    uStack_178 = uStack_c8;
    uStack_180 = local_d0;
    local_170 = local_c0;
    puStack_158 = puStack_d8;
    local_160 = local_e0;
    uStack_148 = uStack_c8;
    uStack_150 = local_d0;
    local_140 = local_c0;
    puStack_168 = AVar8.unknown;
    puStack_138 = AVar8.unknown;
    FUN_1000087e4(&local_190,&local_a0,&DAT_10055baf0,&DAT_1004306f0);
    FUN_10002a29c(&local_160,&DAT_10055baf0,&DAT_1004306f0);
    puStack_98 = puStack_188;
    local_a0 = local_190;
    uStack_88 = uStack_178;
    local_90 = uStack_180;
    puStack_78 = puStack_168;
    local_80 = local_170;
    local_70 = CONCAT11(local_70._1_1_,1);
    FUN_1000087e4(&local_190,&local_e0,&DAT_10055baf0,&DAT_1004306f0);
    FUN_1000087e4(&local_190,&local_e0,&DAT_10055baf0,&DAT_1004306f0);
    FUN_100002f94(&DAT_10054ae78,&DAT_10041c0d0);
    FUN_100002f94(&DAT_10055baf0,&DAT_1004306f0);
    FUN_100028c28();
    FUN_10030c7d0();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar1 + 0x70));
    local_e0 = local_120;
    puStack_d8 = puStack_118;
    local_d0 = local_110;
    uStack_c8 = uStack_108;
    local_c0 = local_100;
    puStack_b8 = puStack_f8;
    local_b0 = (ushort)(byte)local_f0;
    FUN_10030caf8();
    FUN_100002f94(&DAT_10055bae0,&DAT_1004306e8);
    FUN_100002f94(&DAT_10055bb20,&DAT_100430710);
    FUN_10030c758();
    FUN_10030c958();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar1 + 0x30));
    _swift_release(local_200);
    FUN_10002a29c(&local_190,&DAT_10055baf0,&DAT_1004306f0);
    FUN_10002a29c(&local_190,&DAT_10055baf0,&DAT_1004306f0);
  }
  else {
    local_200 = lVar13;
    local_1f8 = puVar6;
    if (iVar4 == *(int *)
                  PTR___enum_case_for_SwiftUI_AsyncImagePhase_failure_SwiftUI_AsyncImagePhase_Type___>__Swift_Error___>_SwiftUI_AsyncImagePhase_1005221e8
       ) {
      (**(code **)(lVar13 + 8))(CVar14.unknown,puVar6);
      CVar9 = SwiftUI::Color::get_black(CVar14);
      CVar14 = SwiftUI::Color::opacity(0.4,CVar9);
      _swift_release(CVar9.unknown);
      SwiftUI::OpacityTransition::init();
      (**(code **)(lVar10 + 0x10))(lVar15,lVar12,OVar5.unknown);
      puVar6 = &DAT_10054ae80;
      FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                    PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
      AVar8 = SwiftUI::AnyTransition::_init(puVar6,OVar5.unknown,puVar6);
      (**(code **)(lVar10 + 8))(lVar12,OVar5.unknown);
      local_90 = local_90 & 0xffffffffffffff00;
      local_a0 = CVar14.unknown;
      puStack_98 = AVar8.unknown;
      _swift_retain(CVar14.unknown);
      _swift_retain(AVar8.unknown);
      FUN_100002f94(&DAT_10054ae78,&DAT_10041c0d0);
      FUN_100028c28();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar1 + 0x70));
      local_e0 = local_120;
      puStack_d8 = puStack_118;
      local_d0 = CONCAT71(local_d0._1_7_,(undefined1)local_110);
      local_b0 = CONCAT11(1,(undefined1)local_b0);
      FUN_10030cab0(local_120,puStack_118,local_110 & 0xff);
      FUN_100002f94(&DAT_10055bae0,&DAT_1004306e8);
      FUN_100002f94(&DAT_10055bb20,&DAT_100430710);
      FUN_10030c758();
      FUN_10030c958();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar1 + 0x30));
      _swift_release(AVar8.unknown);
      _swift_release(CVar14.unknown);
      FUN_10030cad4(local_120,puStack_118,local_110 & 0xff);
      goto LAB_100306490;
    }
    uStack_210._4_4_ =
         *(int *)
          PTR___enum_case_for_SwiftUI_AsyncImagePhase_empty_SwiftUI_AsyncImagePhase_Type___>_SwiftUI_AsyncImagePhase_1005221e0
    ;
    CVar9 = SwiftUI::Color::get_black(CVar9);
    local_208 = (undefined *)SwiftUI::Color::opacity(0.4,CVar9);
    _swift_release(CVar9.unknown);
    SwiftUI::OpacityTransition::init();
    (**(code **)(lVar10 + 0x10))(lVar15,lVar12,OVar5.unknown);
    puVar6 = &DAT_10054ae80;
    FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                  PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
    AVar8 = SwiftUI::AnyTransition::_init(puVar6,OVar5.unknown,puVar6);
    (**(code **)(lVar10 + 8))(lVar12,OVar5.unknown);
    puVar6 = local_208;
    puStack_98 = AVar8.unknown;
    if (iVar4 != uStack_210._4_4_) {
      local_a0 = local_208;
      local_90 = CONCAT71(local_90._1_7_,1);
      _swift_retain(local_208);
      _swift_retain(AVar8.unknown);
      FUN_100002f94(&DAT_10054ae78,&DAT_10041c0d0);
      FUN_100028c28();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar1 + 0x70));
      local_e0 = local_120;
      puStack_d8 = puStack_118;
      local_d0 = CONCAT71(local_d0._1_7_,(undefined1)local_110);
      local_b0 = CONCAT11(1,(undefined1)local_b0);
      FUN_10030cab0(local_120,puStack_118,local_110 & 0xff);
      FUN_100002f94(&DAT_10055bae0,&DAT_1004306e8);
      FUN_100002f94(&DAT_10055bb20,&DAT_100430710);
      FUN_10030c758();
      FUN_10030c958();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar1 + 0x30));
      _swift_release(AVar8.unknown);
      _swift_release(puVar6);
      FUN_10030cad4(local_120,puStack_118,local_110 & 0xff);
      (**(code **)(local_200 + 8))(CVar14.unknown,local_1f8);
      goto LAB_100306490;
    }
    local_a0 = local_208;
    uStack_88 = 0;
    local_90 = 0;
    puStack_78 = (undefined *)0x0;
    local_80 = 0;
    local_70 = local_70 & 0xff00;
    _swift_retain_n(local_208,2);
    _swift_retain_n(AVar8.unknown,2);
    FUN_100002f94(&DAT_10054ae78,&DAT_10041c0d0);
    FUN_100002f94(&DAT_10055baf0,&DAT_1004306f0);
    FUN_100028c28();
    FUN_10030c7d0();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar1 + 0x70));
    local_e0 = local_120;
    puStack_d8 = puStack_118;
    local_d0 = local_110;
    uStack_c8 = uStack_108;
    local_c0 = local_100;
    puStack_b8 = puStack_f8;
    local_b0 = (ushort)(byte)local_f0;
    FUN_10030caf8();
    FUN_100002f94(&DAT_10055bae0,&DAT_1004306e8);
    FUN_100002f94(&DAT_10055bb20,&DAT_100430710);
    FUN_10030c758();
    FUN_10030c958();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar1 + 0x30));
    _swift_release_n(AVar8.unknown,2);
    _swift_release_n(puVar6,2);
  }
  FUN_10030cb30(local_120,puStack_118,local_110,uStack_108,local_100,puStack_f8,(byte)local_f0);
LAB_100306490:
  puStack_118 = puStack_98;
  local_120 = local_a0;
  uStack_108 = uStack_88;
  local_110 = local_90;
  puStack_f8 = puStack_78;
  local_100 = local_80;
  local_f0 = local_70;
  local_1e8[1] = puStack_98;
  *local_1e8 = local_a0;
  local_1e8[3] = uStack_88;
  local_1e8[2] = local_90;
  local_1e8[5] = puStack_78;
  local_1e8[4] = local_80;
  *(ushort *)(local_1e8 + 6) = local_70;
  uStack_c8 = uStack_88;
  local_d0 = local_90;
  puStack_b8 = puStack_78;
  local_c0 = local_80;
  puStack_d8 = puStack_98;
  local_e0 = local_a0;
  local_b0 = local_70;
  FUN_1000087e4(&local_120,&local_160,&DAT_10055bac8,&DAT_1004306e0);
  FUN_10002a29c(&local_e0,&DAT_10055bac8,&DAT_1004306e0);
  return;
}

