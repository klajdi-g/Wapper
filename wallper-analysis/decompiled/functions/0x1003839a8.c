// rea decompile_all
// name: FUN_1003839a8
// address: 0x1003839a8
// body: available
// range: 0x1003839a8-0x100383ab3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003839a8(long param_1,Alignment param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  RoundedCornerStyle RVar4;
  undefined *puVar5;
  RoundedRectangle RVar6;
  undefined7 extraout_var;
  undefined1 auVar7 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  FUN_100029504(param_2.unknown,param_1,FUN_10040211c);
  SwiftUI::Alignment::get_center(param_2);
  SwiftUI::_FrameLayout::_init((Alignment)0x4064000000000000);
  puVar5 = &DAT_10055e940;
  FUN_100002f94(&DAT_10055e940,&DAT_100434188);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar5 + 0x24));
  puVar1[1] = uStack_58;
  *puVar1 = local_60;
  puVar1[3] = uStack_48;
  puVar1[2] = uStack_50;
  puVar1[5] = uStack_38;
  puVar1[4] = local_40;
  puVar5 = &DAT_10055e910;
  FUN_100002f94(&DAT_10055e910,&DAT_100434180);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar5 + 0x24));
  RVar6 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  iVar3 = *(int *)(RVar6.unknown + 0x14);
  uVar2 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar4 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar4.value) + -8) + 0x68))
            ((long)puVar1 + (long)iVar3,uVar2,CONCAT71(extraout_var,RVar4.value));
  auVar7 = NEON_fmov(0x4020000000000000,8);
  puVar1[1] = auVar7._8_8_;
  *puVar1 = auVar7._0_8_;
  puVar5 = &DAT_10054acd0;
  FUN_100002f94(&DAT_10054acd0,&DAT_100421df0);
  *(undefined2 *)((long)puVar1 + (long)*(int *)(puVar5 + 0x24)) = 0x100;
  return;
}

