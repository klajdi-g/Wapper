// rea decompile_all
// name: FUN_100334738
// address: 0x100334738
// body: available
// range: 0x100334738-0x100334a0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100334738(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  RoundedCornerStyle RVar3;
  undefined *puVar4;
  undefined *puVar5;
  Color CVar6;
  undefined7 extraout_var;
  Color CVar7;
  Alignment AVar8;
  Animation AVar9;
  State SVar10;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_80;
  
  puVar4 = &DAT_10055cae8;
  FUN_100002f94(&DAT_10055cae8,&DAT_100431e48);
  lVar11 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  CVar6.unknown = (undefined *)((long)&local_140 - extraout_x8);
  puVar5 = &DAT_10053b080;
  _swift_allocObject(&DAT_10053b080,0xd0,7);
  uVar12 = unaff_x20[0x10];
  uVar14 = unaff_x20[0x13];
  uVar13 = unaff_x20[0x12];
  *(undefined8 *)(puVar5 + 0x98) = unaff_x20[0x11];
  *(undefined8 *)(puVar5 + 0x90) = uVar12;
  *(undefined8 *)(puVar5 + 0xa8) = uVar14;
  *(undefined8 *)(puVar5 + 0xa0) = uVar13;
  uVar12 = unaff_x20[0x14];
  uVar14 = unaff_x20[0x17];
  uVar13 = unaff_x20[0x16];
  *(undefined8 *)(puVar5 + 0xb8) = unaff_x20[0x15];
  *(undefined8 *)(puVar5 + 0xb0) = uVar12;
  *(undefined8 *)(puVar5 + 200) = uVar14;
  *(undefined8 *)(puVar5 + 0xc0) = uVar13;
  uVar12 = unaff_x20[8];
  uVar14 = unaff_x20[0xb];
  uVar13 = unaff_x20[10];
  *(undefined8 *)(puVar5 + 0x58) = unaff_x20[9];
  *(undefined8 *)(puVar5 + 0x50) = uVar12;
  *(undefined8 *)(puVar5 + 0x68) = uVar14;
  *(undefined8 *)(puVar5 + 0x60) = uVar13;
  uVar12 = unaff_x20[0xc];
  uVar14 = unaff_x20[0xf];
  uVar13 = unaff_x20[0xe];
  *(undefined8 *)(puVar5 + 0x78) = unaff_x20[0xd];
  *(undefined8 *)(puVar5 + 0x70) = uVar12;
  *(undefined8 *)(puVar5 + 0x88) = uVar14;
  *(undefined8 *)(puVar5 + 0x80) = uVar13;
  uVar12 = *unaff_x20;
  uVar14 = unaff_x20[3];
  uVar13 = unaff_x20[2];
  *(undefined8 *)(puVar5 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar5 + 0x10) = uVar12;
  *(undefined8 *)(puVar5 + 0x28) = uVar14;
  *(undefined8 *)(puVar5 + 0x20) = uVar13;
  uVar12 = unaff_x20[4];
  uVar14 = unaff_x20[7];
  uVar13 = unaff_x20[6];
  *(undefined8 *)(puVar5 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar5 + 0x30) = uVar12;
  *(undefined8 *)(puVar5 + 0x48) = uVar14;
  *(undefined8 *)(puVar5 + 0x40) = uVar13;
  FUN_100336150();
  FUN_100002f94(&DAT_10055cb18,&DAT_100431e58);
  FUN_1003367ac();
  SwiftUI::Button::_init();
  FUN_1000087a0(&DAT_10055caf0,&DAT_10055cae8,&DAT_100431e48,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  FUN_100037164();
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(param_1);
  (**(code **)(lVar11 + 8))(CVar6.unknown,puVar4);
  CVar6 = SwiftUI::Color::get_white(CVar6);
  puVar4 = &DAT_10055cae0;
  FUN_100002f94(&DAT_10055cae0,&DAT_100431e40);
  *(undefined **)(param_1 + *(int *)(puVar4 + 0x24)) = CVar6.unknown;
  puVar4 = &DAT_10055cad0;
  FUN_100002f94(&DAT_10055cad0,&DAT_100431e38);
  puVar5 = (undefined *)(param_1 + *(int *)(puVar4 + 0x24));
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar3 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  CVar6.unknown = puVar5;
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar3.value) + -8) + 0x68))
            (puVar5,uVar1,CONCAT71(extraout_var,RVar3.value));
  CVar6 = SwiftUI::Color::get_blue(CVar6);
  CVar7 = SwiftUI::Color::opacity(0.96,CVar6);
  _swift_release(CVar6.unknown);
  AVar8.unknown = &DAT_10054b118;
  puVar4 = &DAT_10041f7b0;
  FUN_100002f94();
  *(undefined **)(puVar5 + *(int *)(AVar8.unknown + 0x34)) = CVar7.unknown;
  *(undefined2 *)(puVar5 + *(int *)(AVar8.unknown + 0x38)) = 0x100;
  AVar8 = SwiftUI::Alignment::get_center(AVar8);
  AVar9.unknown = &DAT_10054e1b0;
  FUN_100002f94(&DAT_10054e1b0,&DAT_10041f0a0);
  iVar2 = *(int *)(AVar9.unknown + 0x24);
  *(undefined **)(puVar5 + iVar2) = AVar8.unknown;
  *(undefined **)((long)(puVar5 + iVar2) + 8) = puVar4;
  AVar9 = SwiftUI::Animation::easeInOut(0.18,AVar9);
  uStack_138 = unaff_x20[0x13];
  local_140 = unaff_x20[0x12];
  SVar10.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar10);
  puVar4 = &DAT_10055cac0;
  FUN_100002f94(&DAT_10055cac0,&DAT_100431e30);
  iVar2 = *(int *)(puVar4 + 0x24);
  *(undefined8 *)(param_1 + iVar2) = AVar9.unknown;
  *(undefined1 *)((undefined8 *)(param_1 + iVar2) + 1) = local_80;
  return;
}

