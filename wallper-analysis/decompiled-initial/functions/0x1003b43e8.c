// rea decompile_all
// name: FUN_1003b43e8
// address: 0x1003b43e8
// body: available
// range: 0x1003b43e8-0x1003b470b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_1003b43e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  RoundedCornerStyle RVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  Color CVar7;
  undefined7 extraout_var;
  Color CVar8;
  Alignment AVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_100;
  undefined8 auStack_f8 [17];
  undefined8 *local_70;
  
  puVar4 = &DAT_10055fcc0;
  FUN_100002f94(&DAT_10055fcc0,&DAT_100435700);
  lVar10 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  CVar7.unknown = (undefined *)((long)&uStack_100 - extraout_x8);
  puVar5 = &DAT_10055fcc8;
  FUN_100002f94(&DAT_10055fcc8,&DAT_100435708);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar11 = (long)CVar7.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar11 - extraout_x12;
  puVar6 = &DAT_10053d538;
  _swift_allocObject(&DAT_10053d538,0x88,7);
  uVar13 = param_2[8];
  uVar15 = param_2[0xb];
  uVar14 = param_2[10];
  *(undefined8 *)(puVar6 + 0x58) = param_2[9];
  *(undefined8 *)(puVar6 + 0x50) = uVar13;
  *(undefined8 *)(puVar6 + 0x68) = uVar15;
  *(undefined8 *)(puVar6 + 0x60) = uVar14;
  uVar13 = param_2[0xc];
  *(undefined8 *)(puVar6 + 0x78) = param_2[0xd];
  *(undefined8 *)(puVar6 + 0x70) = uVar13;
  *(undefined8 *)(puVar6 + 0x80) = param_2[0xe];
  uVar13 = *param_2;
  uVar15 = param_2[3];
  uVar14 = param_2[2];
  *(undefined8 *)(puVar6 + 0x18) = param_2[1];
  *(undefined8 *)(puVar6 + 0x10) = uVar13;
  *(undefined8 *)(puVar6 + 0x28) = uVar15;
  *(undefined8 *)(puVar6 + 0x20) = uVar14;
  uVar13 = param_2[4];
  uVar15 = param_2[7];
  uVar14 = param_2[6];
  *(undefined8 *)(puVar6 + 0x38) = param_2[5];
  *(undefined8 *)(puVar6 + 0x30) = uVar13;
  *(undefined8 *)(puVar6 + 0x48) = uVar15;
  *(undefined8 *)(puVar6 + 0x40) = uVar14;
  local_70 = param_2;
  FUN_10012ea94(param_2,auStack_f8);
  FUN_100002f94(&DAT_1005521e0,&DAT_1004244a0);
  FUN_1000fa6e8();
  SwiftUI::Button::_init();
  FUN_1000087a0(&DAT_10055fcd0,&DAT_10055fcc0,&DAT_100435700,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  FUN_100037164();
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(lVar12);
  (**(code **)(lVar10 + 8))(CVar7.unknown,puVar4);
  CVar7 = SwiftUI::Color::get_black(CVar7);
  puVar4 = &DAT_10055fcd8;
  FUN_100002f94(&DAT_10055fcd8,&DAT_100435718);
  *(undefined **)(lVar12 + *(int *)(puVar4 + 0x24)) = CVar7.unknown;
  puVar6 = (undefined *)(lVar12 + *(int *)(puVar5 + 0x24));
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar3 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  CVar7.unknown = puVar6;
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar3.value) + -8) + 0x68))
            (puVar6,uVar1,CONCAT71(extraout_var,RVar3.value));
  CVar7 = SwiftUI::Color::get_white(CVar7);
  CVar8 = SwiftUI::Color::opacity(0.96,CVar7);
  _swift_release(CVar7.unknown);
  AVar9.unknown = &DAT_10054b118;
  puVar4 = &DAT_10041f7b0;
  FUN_100002f94();
  *(undefined **)(puVar6 + *(int *)(AVar9.unknown + 0x34)) = CVar8.unknown;
  *(undefined2 *)(puVar6 + *(int *)(AVar9.unknown + 0x38)) = 0x100;
  AVar9 = SwiftUI::Alignment::get_center(AVar9);
  puVar5 = &DAT_10054e1b0;
  FUN_100002f94(&DAT_10054e1b0,&DAT_10041f0a0);
  iVar2 = *(int *)(puVar5 + 0x24);
  *(undefined **)(puVar6 + iVar2) = AVar9.unknown;
  *(undefined **)((long)(puVar6 + iVar2) + 8) = puVar4;
  FUN_1000087e4(lVar12,lVar11,&DAT_10055fcc8,&DAT_100435708);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  puVar4 = &DAT_10055fce0;
  FUN_100002f94(&DAT_10055fce0,&DAT_100435720);
  FUN_1000087e4(lVar11,(long)param_1 + (long)*(int *)(puVar4 + 0x30),&DAT_10055fcc8,&DAT_100435708);
  FUN_10002a29c(lVar12,&DAT_10055fcc8,&DAT_100435708);
  FUN_10002a29c(lVar11,&DAT_10055fcc8,&DAT_100435708);
  return;
}

