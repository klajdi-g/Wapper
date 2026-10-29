// rea decompile_all
// name: FUN_10037fd08
// address: 0x10037fd08
// body: available
// range: 0x10037fd08-0x10037fecb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037fd08(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  RoundedCornerStyle RVar5;
  long lVar6;
  State SVar7;
  undefined7 extraout_var;
  Color CVar8;
  Alignment AVar9;
  Set SVar10;
  undefined *puVar11;
  undefined8 uVar12;
  code *pcVar13;
  char local_71;
  undefined7 uStack_6f;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar6 = 0;
  FUN_10038ffac();
  puVar1 = (undefined1 *)(param_6 + *(int *)(lVar6 + 0x30));
  uVar4 = *puVar1;
  uVar12 = *(undefined8 *)(puVar1 + 8);
  SVar7.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar7);
  if (local_71 != '\x01') {
    puVar11 = &DAT_10055f070;
    FUN_100002f94(&DAT_10055f070,&DAT_100434820);
    pcVar13 = *(code **)(*(long *)(puVar11 + -8) + 0x38);
  }
  else {
    uVar3 = *(undefined4 *)
             PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
    ;
    RVar5 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
    CVar8.unknown = param_1;
    (**(code **)(*(long *)(CONCAT71(extraout_var,RVar5.value) + -8) + 0x68))
              (param_1,uVar3,CONCAT71(extraout_var,RVar5.value));
    CVar8 = SwiftUI::Color::get_white(CVar8);
    AVar9.unknown = &DAT_10054b118;
    FUN_100002f94(&DAT_10054b118,&DAT_10041f7b0);
    *(undefined **)(param_1 + *(int *)(AVar9.unknown + 0x34)) = CVar8.unknown;
    *(undefined2 *)(param_1 + *(int *)(AVar9.unknown + 0x38)) = 0x100;
    SwiftUI::Alignment::get_center(AVar9);
    SwiftUI::_FrameLayout::_init((Alignment)0x0);
    SVar10.unknown = &DAT_10055f078;
    FUN_100002f94(&DAT_10055f078,&DAT_100434828);
    puVar2 = (undefined8 *)(param_1 + *(int *)(SVar10.unknown + 0x24));
    puVar2[1] = uVar12;
    *puVar2 = CONCAT71(uStack_6f,uVar4);
    puVar2[3] = uStack_58;
    puVar2[2] = uStack_60;
    puVar2[5] = uStack_48;
    puVar2[4] = local_50;
    SVar10 = SwiftUI::Edge::Set::get_horizontal(SVar10);
    uVar12 = 0x4028000000000000;
    SwiftUI::EdgeInsets::init((CGFloat)SVar10.unknown);
    puVar11 = &DAT_10055f070;
    FUN_100002f94(&DAT_10055f070,&DAT_100434820);
    puVar1 = param_1 + *(int *)(puVar11 + 0x24);
    *puVar1 = (char)SVar10.unknown;
    *(undefined8 *)(puVar1 + 8) = uVar12;
    *(undefined8 *)(puVar1 + 0x10) = uStack_60;
    *(undefined8 *)(puVar1 + 0x18) = param_4;
    *(undefined8 *)(puVar1 + 0x20) = param_5;
    puVar1[0x28] = 0;
    pcVar13 = *(code **)(*(long *)(puVar11 + -8) + 0x38);
  }
  (*pcVar13)(param_1,local_71 != '\x01',1,puVar11);
  return;
}

