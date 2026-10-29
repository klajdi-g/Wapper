// rea decompile_all
// name: FUN_1003b8ab4
// address: 0x1003b8ab4
// body: available
// range: 0x1003b8ab4-0x1003b9067 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b8ab4(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  ResizingMode RVar3;
  AsyncImagePhase AVar4;
  int iVar5;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  Image IVar8;
  Color CVar9;
  Color CVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar12;
  Color CVar13;
  EdgeInsets capInsets;
  long lVar14;
  long lVar15;
  undefined *local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  byte local_a8;
  undefined7 uStack_a7;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined8 local_98;
  ulong uStack_90;
  uint local_88;
  undefined *local_80;
  ulong uStack_78;
  undefined3 local_70;
  undefined1 local_6d;
  undefined *puVar6;
  long lVar7;
  
  RVar3 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar6 = (undefined *)CONCAT71(extraout_var,RVar3.value);
  lVar14 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  capInsets.unknown = (undefined *)((long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  AVar4 = SwiftUI::AsyncImagePhase::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var_00,AVar4.value);
  lVar15 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  CVar13.unknown = capInsets.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar15 + 0x10))(CVar13.unknown,param_2,lVar7);
  CVar9.unknown = CVar13.unknown;
  (**(code **)(lVar15 + 0x58))(CVar13.unknown,lVar7);
  iVar5 = (int)CVar9.unknown;
  cVar2 = (char)&stack0xfffffffffffffff0;
  if (iVar5 == *(int *)
                PTR___enum_case_for_SwiftUI_AsyncImagePhase_success_SwiftUI_AsyncImagePhase_Type___>__SwiftUI_Image___>_SwiftUI_AsyncImagePhase_1005221f0
     ) {
    (**(code **)(lVar15 + 0x60))(CVar13.unknown,lVar7);
    uVar12 = *(undefined8 *)CVar13.unknown;
    IVar8.unknown = puVar6;
    (**(code **)(lVar14 + 0x68))
              (capInsets.unknown,
               *(undefined4 *)
                PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_1005232f0
              );
    IVar8 = SwiftUI::Image::resizable(capInsets,(ResizingMode)(__int8)uVar12,IVar8);
    (**(code **)(lVar14 + 8))(capInsets.unknown,puVar6);
    uStack_78 = 0;
    local_70 = 0x10101;
    local_80 = IVar8.unknown;
    _swift_retain_n(IVar8.unknown,2);
    FUN_100002f94(&DAT_100550170,&DAT_10042e8e0);
    FUN_1000b2e98();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar2 + -0x70));
    uVar11 = CONCAT71(uStack_a7,local_a8);
    local_98 = local_b0;
    local_88 = (uint)CONCAT12(local_9e,local_a0);
    _swift_retain(local_b0,uVar11,local_a0,local_9e);
    FUN_100002f94(&DAT_10055ff98,&DAT_100435a40);
    FUN_100002f94(&DAT_10055ffa8,&DAT_100435a50);
    FUN_1003bad04();
    FUN_1003bad7c();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar2 + 0x78));
    _swift_release_n(IVar8.unknown,2);
    _swift_release(uVar12);
  }
  else {
    if (iVar5 == *(int *)
                  PTR___enum_case_for_SwiftUI_AsyncImagePhase_failure_SwiftUI_AsyncImagePhase_Type___>__Swift_Error___>_SwiftUI_AsyncImagePhase_1005221e8
       ) {
      (**(code **)(lVar15 + 8))(CVar13.unknown,lVar7);
      CVar9 = SwiftUI::Color::get_black(CVar13);
      CVar13 = SwiftUI::Color::opacity(0.4,CVar9);
      _swift_release(CVar9.unknown);
      uStack_78 = uStack_78 & 0xffffffffffffff00;
      local_80 = CVar13.unknown;
      _swift_retain(CVar13.unknown);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar2 + -0x70));
      uStack_90 = (ulong)local_a8;
      local_98 = local_b0;
      local_88 = 0x1000000;
      _swift_retain(local_b0);
      FUN_100002f94(&DAT_10055ff98,&DAT_100435a40);
      FUN_100002f94(&DAT_10055ffa8,&DAT_100435a50);
      FUN_1003bad04();
      FUN_1003bad7c();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar2 + 0x78));
      _swift_release(local_b0);
      _swift_release(CVar13.unknown);
      local_c0 = local_80;
      uStack_b8 = uStack_78;
      goto LAB_1003b8e10;
    }
    iVar1 = *(int *)
             PTR___enum_case_for_SwiftUI_AsyncImagePhase_empty_SwiftUI_AsyncImagePhase_Type___>_SwiftUI_AsyncImagePhase_1005221e0
    ;
    CVar9 = SwiftUI::Color::get_black(CVar9);
    CVar10 = SwiftUI::Color::opacity(0.4,CVar9);
    _swift_release(CVar9.unknown);
    local_80 = CVar10.unknown;
    if (iVar5 != iVar1) {
      uStack_78 = CONCAT71(uStack_78._1_7_,1);
      _swift_retain(CVar10.unknown);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar2 + -0x70));
      uStack_90 = (ulong)local_a8;
      local_98 = local_b0;
      local_88 = 0x1000000;
      _swift_retain(local_b0);
      FUN_100002f94(&DAT_10055ff98,&DAT_100435a40);
      FUN_100002f94(&DAT_10055ffa8,&DAT_100435a50);
      FUN_1003bad04();
      FUN_1003bad7c();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar2 + 0x78));
      _swift_release(local_b0);
      _swift_release(CVar10.unknown);
      uStack_b8 = uStack_78;
      local_c0 = local_80;
      (**(code **)(lVar15 + 8))(CVar13.unknown,lVar7);
      goto LAB_1003b8e10;
    }
    uStack_78 = 0;
    local_70 = 0;
    _swift_retain(CVar10.unknown);
    FUN_100002f94(&DAT_100550170,&DAT_10042e8e0);
    FUN_1000b2e98();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar2 + -0x70));
    uVar11 = CONCAT71(uStack_a7,local_a8);
    local_98 = local_b0;
    local_88 = (uint)CONCAT12(local_9e,local_a0);
    _swift_retain(local_b0,uVar11,local_a0,local_9e);
    FUN_100002f94(&DAT_10055ff98,&DAT_100435a40);
    FUN_100002f94(&DAT_10055ffa8,&DAT_100435a50);
    FUN_1003bad04();
    FUN_1003bad7c();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar2 + 0x78));
    _swift_release(CVar10.unknown);
  }
  _swift_release(local_b0,uVar11,local_a0,local_9e);
  local_c0 = local_80;
  uStack_b8 = uStack_78;
LAB_1003b8e10:
  param_1[1] = uStack_b8;
  *param_1 = local_c0;
  *(short *)(param_1 + 2) = (short)local_70;
  *(char *)((long)param_1 + 0x12) = (char)((uint3)local_70 >> 0x10);
  *(undefined1 *)((long)param_1 + 0x13) = local_6d;
  return;
}

