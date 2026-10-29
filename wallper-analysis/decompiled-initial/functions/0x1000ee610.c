// rea decompile_all
// name: FUN_1000ee610
// address: 0x1000ee610
// body: available
// range: 0x1000ee610-0x1000ee84b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ee610(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  BlendMode BVar3;
  Color CVar4;
  Color CVar5;
  Stop SVar6;
  Color CVar7;
  UnitPoint UVar8;
  Gradient GVar9;
  undefined *puVar10;
  undefined7 extraout_var;
  UnitPoint UVar11;
  UnitPoint UVar12;
  undefined8 uVar13;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  CVar4.unknown = &DAT_10054f3f0;
  FUN_100002f94(&DAT_10054f3f0,&DAT_100420950);
  UVar11.unknown = (undefined *)0x50;
  UVar12.unknown = (undefined *)0x7;
  _swift_allocObject();
  *(undefined8 *)(CVar4.unknown + 0x18) = 6;
  *(undefined8 *)(CVar4.unknown + 0x10) = 3;
  CVar5 = SwiftUI::Color::get_clear(CVar4);
  uVar13 = 0;
  SVar6 = SwiftUI::Gradient::Stop::init(CVar5,UVar11.unknown);
  *(undefined **)(CVar4.unknown + 0x20) = SVar6.unknown;
  *(undefined8 *)(CVar4.unknown + 0x28) = uVar13;
  CVar5 = SwiftUI::Color::get_black(SVar6.unknown);
  CVar7 = SwiftUI::Color::opacity(0.1,CVar5);
  _swift_release(CVar5.unknown);
  uVar13 = 0x3fd999999999999a;
  SVar6 = SwiftUI::Gradient::Stop::init(CVar7,UVar11.unknown);
  *(undefined **)(CVar4.unknown + 0x30) = SVar6.unknown;
  *(undefined8 *)(CVar4.unknown + 0x38) = uVar13;
  CVar5 = SwiftUI::Color::get_black(SVar6.unknown);
  CVar7 = SwiftUI::Color::opacity(0.3,CVar5);
  _swift_release(CVar5.unknown);
  uVar13 = 0x3ff0000000000000;
  SVar6 = SwiftUI::Gradient::Stop::init(CVar7,UVar11.unknown);
  *(undefined **)(CVar4.unknown + 0x40) = SVar6.unknown;
  *(undefined8 *)(CVar4.unknown + 0x48) = uVar13;
  UVar8 = SwiftUI::UnitPoint::get_leading(SVar6.unknown);
  SwiftUI::UnitPoint::get_trailing(UVar8);
  GVar9 = SwiftUI::Gradient::init();
  SwiftUI::LinearGradient::init(GVar9,UVar11,UVar12);
  puVar10 = &DAT_100552230;
  FUN_100002f94(&DAT_100552230,&DAT_100424538);
  iVar2 = *(int *)(puVar10 + 0x24);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_BlendMode_multiply_SwiftUI_BlendMode_Type___>_SwiftUI_BlendMode_100523738
  ;
  BVar3 = SwiftUI::BlendMode::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,BVar3.value) + -8) + 0x68))
            ((long)param_1 + (long)iVar2,uVar1,CONCAT71(extraout_var,BVar3.value));
  param_1[1] = uStack_98;
  *param_1 = local_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  param_1[4] = local_80;
  CVar4.unknown = &DAT_10054af98;
  FUN_100002f94(&DAT_10054af98,&DAT_10041c1a0);
  UVar11.unknown = (undefined *)0x38;
  UVar12.unknown = (undefined *)0x7;
  _swift_allocObject();
  *(undefined8 *)(CVar4.unknown + 0x18) = 6;
  *(undefined8 *)(CVar4.unknown + 0x10) = 3;
  CVar5 = SwiftUI::Color::get_white(CVar4);
  *(undefined **)(CVar4.unknown + 0x20) = CVar5.unknown;
  CVar5 = SwiftUI::Color::get_white(CVar5);
  *(undefined **)(CVar4.unknown + 0x28) = CVar5.unknown;
  CVar5 = SwiftUI::Color::get_clear(CVar5);
  *(undefined **)(CVar4.unknown + 0x30) = CVar5.unknown;
  UVar8 = SwiftUI::UnitPoint::get_leading(CVar5.unknown);
  SwiftUI::UnitPoint::get_trailing(UVar8);
  GVar9 = SwiftUI::Gradient::init();
  SwiftUI::LinearGradient::init(GVar9,UVar11,UVar12);
  puVar10 = &DAT_100552288;
  FUN_100002f94(&DAT_100552288,&DAT_100424598);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar10 + 0x24));
  *param_1 = local_78;
  param_1[4] = uStack_58;
  param_1[3] = uStack_60;
  param_1[2] = uStack_68;
  param_1[1] = local_70;
  return;
}

