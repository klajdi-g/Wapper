// rea decompile_all
// name: FUN_100303800
// address: 0x100303800
// body: available
// range: 0x100303800-0x100303bf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100303800(undefined8 *param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  RoundedCornerStyle RVar5;
  undefined *puVar6;
  undefined *puVar7;
  Color CVar8;
  undefined7 extraout_var;
  Color CVar9;
  Alignment AVar10;
  undefined *puVar11;
  Animation AVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  undefined *local_80;
  undefined8 *local_78;
  
  puVar6 = &DAT_1005508e0;
  local_78 = param_1;
  FUN_100002f94(&DAT_1005508e0,&DAT_1004222f0);
  lVar13 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  CVar8.unknown = (undefined *)((long)&local_80 - extraout_x8);
  puVar7 = &DAT_10055b820;
  FUN_100002f94(&DAT_10055b820,&DAT_1004302c8);
  local_80 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar14 = (long)CVar8.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar14 - extraout_x12;
  puVar7 = &DAT_100539d90;
  _swift_allocObject(&DAT_100539d90,0x28,7);
  puVar7[0x10] = param_2;
  *(undefined8 *)(puVar7 + 0x18) = param_3;
  *(undefined8 *)(puVar7 + 0x20) = param_4;
  _swift_retain(param_4);
  FUN_100002f94(&DAT_10054a840,&DAT_100422300);
  FUN_1000fbd60();
  SwiftUI::Button::_init();
  FUN_1000087a0(&DAT_100550900,&DAT_1005508e0,&DAT_1004222f0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  FUN_100037164();
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(lVar15);
  (**(code **)(lVar13 + 8))(CVar8.unknown,puVar6);
  CVar8 = SwiftUI::Color::get_white(CVar8);
  puVar6 = &DAT_100550908;
  FUN_100002f94(&DAT_100550908,&DAT_100422310);
  *(undefined **)(lVar15 + *(int *)(puVar6 + 0x24)) = CVar8.unknown;
  puVar6 = &DAT_10055b828;
  FUN_100002f94(&DAT_10055b828,&DAT_100431e20);
  puVar6 = (undefined *)(lVar15 + *(int *)(puVar6 + 0x24));
  uVar2 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar5 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  CVar8.unknown = puVar6;
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar5.value) + -8) + 0x68))
            (puVar6,uVar2,CONCAT71(extraout_var,RVar5.value));
  CVar8 = SwiftUI::Color::get_blue(CVar8);
  bVar4 = (param_2 & 1) == 0;
  dVar16 = 0.96;
  if (bVar4) {
    dVar16 = 0.4;
  }
  dVar17 = 1.0;
  if (bVar4) {
    dVar17 = 0.4;
  }
  CVar9 = SwiftUI::Color::opacity(dVar16,CVar8);
  _swift_release(CVar8.unknown);
  puVar7 = &DAT_10041f7b0;
  AVar10.unknown = &DAT_10054b118;
  FUN_100002f94();
  *(undefined **)(puVar6 + *(int *)(AVar10.unknown + 0x34)) = CVar9.unknown;
  *(undefined2 *)(puVar6 + *(int *)(AVar10.unknown + 0x38)) = 0x100;
  AVar10 = SwiftUI::Alignment::get_center(AVar10);
  puVar11 = &DAT_10054e1b0;
  FUN_100002f94(&DAT_10054e1b0,&DAT_10041f0a0);
  iVar3 = *(int *)(puVar11 + 0x24);
  *(undefined **)(puVar6 + iVar3) = AVar10.unknown;
  *(undefined **)((long)(puVar6 + iVar3) + 8) = puVar7;
  puVar6 = &DAT_1004302d0;
  _swift_getKeyPath();
  puVar7 = &DAT_100539db8;
  _swift_allocObject(&DAT_100539db8,0x11,7);
  puVar7[0x10] = param_2 ^ 1;
  puVar11 = &DAT_10055b830;
  FUN_100002f94(&DAT_10055b830,&DAT_100430300);
  puVar1 = (undefined8 *)(lVar15 + *(int *)(puVar11 + 0x24));
  *puVar1 = puVar6;
  puVar1[1] = FUN_10006bca0;
  puVar1[2] = puVar7;
  AVar12.unknown = &DAT_10055b838;
  FUN_100002f94(&DAT_10055b838,&DAT_100431f20);
  *(double *)(lVar15 + *(int *)(AVar12.unknown + 0x24)) = dVar17;
  AVar12 = SwiftUI::Animation::spring(0.3,0.85,0.0,AVar12);
  iVar3 = *(int *)(local_80 + 0x24);
  *(undefined8 *)(lVar15 + iVar3) = AVar12.unknown;
  *(byte *)((undefined8 *)(lVar15 + iVar3) + 1) = param_2;
  FUN_1000087e4(lVar15,lVar14,&DAT_10055b820,&DAT_1004302c8);
  puVar1 = local_78;
  *local_78 = 0;
  *(undefined1 *)(local_78 + 1) = 1;
  puVar6 = &DAT_10055b840;
  FUN_100002f94(&DAT_10055b840,&DAT_100430310);
  FUN_1000087e4(lVar14,(long)puVar1 + (long)*(int *)(puVar6 + 0x30),&DAT_10055b820,&DAT_1004302c8);
  FUN_10002a29c(lVar15,&DAT_10055b820,&DAT_1004302c8);
  FUN_10002a29c(lVar14,&DAT_10055b820,&DAT_1004302c8);
  return;
}

