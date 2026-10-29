// rea decompile_all
// name: FUN_100375518
// address: 0x100375518
// body: available
// range: 0x100375518-0x100375b7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003759e8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100375518(undefined8 *param_1,undefined8 param_2,long param_3,code *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  Color CVar7;
  long lVar8;
  AnyTransition AVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  HorizontalAlignment HVar15;
  long alStack_2b0 [2];
  undefined *local_2a0;
  long local_298 [3];
  undefined *local_280 [2];
  long local_270 [2];
  undefined8 *local_260 [2];
  undefined1 auStack_250 [88];
  undefined7 uStack_1f8;
  undefined1 local_1f1;
  undefined7 uStack_1f0;
  undefined1 uStack_1e9;
  undefined7 uStack_1e8;
  undefined *local_1b0;
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 local_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined *local_170;
  undefined8 uStack_168;
  undefined *local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined7 local_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 local_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 local_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 local_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined *local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  
  local_298[2] = param_3;
  local_260[1] = param_1;
  local_2a0 = (undefined *)SwiftUI::OpacityTransition::typeMetadataAccessor();
  local_298[1] = *(long *)(local_2a0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_298[1] + 0x40));
  lVar10 = (long)alStack_2b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_298[0] = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar10 - extraout_x12;
  puVar5 = &DAT_10055eeb0;
  alStack_2b0[1] = lVar10;
  FUN_100002f94(&DAT_10055eeb0,&DAT_1004346d8);
  local_260[0] = (undefined8 *)puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar10 - extraout_x8_00;
  puVar5 = &DAT_10055eeb8;
  FUN_100002f94(&DAT_10055eeb8,&DAT_1004346e0);
  local_280[0] = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = (undefined8 *)(lVar10 - extraout_x8_01);
  puVar5 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  HVar15.unknown = (undefined *)((long)puVar13 - extraout_x8_02);
  lVar6 = 0;
  FUN_10040211c();
  lVar14 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  lVar12 = (long)HVar15.unknown - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  CVar7.unknown = &DAT_10055eec0;
  FUN_100002f94(&DAT_10055eec0,&DAT_1004346e8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(CVar7.unknown + -8) + 0x40));
  lVar11 = lVar12 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_270[1] = lVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_270[0] = lVar11 - extraout_x12_00;
  CVar7 = SwiftUI::Color::get_white(CVar7);
  local_280[1] = (undefined *)SwiftUI::Color::opacity(0.05,CVar7);
  _swift_release(CVar7.unknown);
  lVar8 = 0;
  (*param_4)();
  lVar11 = local_298[2];
  FUN_1000087e4(local_298[2] + *(int *)(lVar8 + 0x18),HVar15.unknown,&DAT_10054ac40,&DAT_10041ce70);
  puVar5 = HVar15.unknown;
  (**(code **)(lVar14 + 0x30))(HVar15.unknown,1,lVar6);
  if ((int)puVar5 == 1) {
    FUN_10002a29c(HVar15.unknown,&DAT_10054ac40,&DAT_10041ce70);
    HVar15 = SwiftUI::HorizontalAlignment::get_center(HVar15);
    FUN_100375b80(&local_d8,param_2,lVar11,param_4);
    uStack_198 = uStack_c0;
    uStack_197 = uStack_bf;
    uStack_1a0 = local_c8;
    uStack_19f = uStack_c7;
    uStack_1a8 = uStack_d0;
    local_1b0 = local_d8;
    uStack_188 = uStack_b0;
    uStack_187 = uStack_af;
    local_190 = local_b8;
    uStack_18f = uStack_b7;
    uStack_178 = uStack_a0;
    uStack_177 = uStack_9f;
    uStack_180 = local_a8;
    uStack_17f = uStack_a7;
    uStack_168 = uStack_d0;
    local_170 = local_d8;
    FUN_1000087e4(&local_1b0,&local_130,&DAT_1005522b8,&DAT_100424610);
    FUN_10002a29c(&local_170,&DAT_1005522b8,&DAT_100424610);
    uStack_1e9 = (undefined1)uStack_1a8;
    uStack_1e8 = (undefined7)((ulong)uStack_1a8 >> 8);
    local_1f1 = SUB81(local_1b0,0);
    uStack_1f0 = (undefined7)((ulong)local_1b0 >> 8);
    uStack_117 = uStack_1f0;
    uStack_110 = uStack_1e9;
    local_11f = uStack_1f8;
    uStack_118 = local_1f1;
    uStack_df = uStack_177;
    uStack_e7 = uStack_17f;
    uStack_e0 = uStack_178;
    local_ef = uStack_187;
    uStack_e8 = uStack_180;
    uStack_f7 = uStack_18f;
    uStack_f0 = uStack_188;
    local_ff = uStack_197;
    uStack_f8 = local_190;
    uStack_107 = uStack_19f;
    uStack_100 = uStack_198;
    local_10f = uStack_1e8;
    uStack_108 = uStack_1a0;
    uStack_128 = 0x4020000000000000;
    local_120 = 0;
    uStack_d0 = 0x4020000000000000;
    local_c8 = 0;
    uStack_bf = uStack_1f0;
    local_b8 = uStack_1e9;
    uStack_c0 = local_1f1;
    uStack_b7 = uStack_1e8;
    local_130 = HVar15.unknown;
    local_d8 = HVar15.unknown;
    FUN_1000087e4(&local_130,auStack_250,&DAT_10055e828,&DAT_100434030);
    FUN_10002a29c(&local_d8,&DAT_10055e828,&DAT_100434030);
    uVar2 = CONCAT71(local_10f,uStack_110);
    puVar13[5] = CONCAT71(uStack_107,uStack_108);
    puVar13[4] = uVar2;
    puVar13[7] = CONCAT71(uStack_f7,uStack_f8);
    puVar13[6] = CONCAT71(local_ff,uStack_100);
    puVar13[9] = CONCAT71(uStack_e7,uStack_e8);
    puVar13[8] = CONCAT71(local_ef,uStack_f0);
    puVar13[10] = CONCAT71(uStack_df,uStack_e0);
    puVar5 = local_130;
    uVar3 = CONCAT71(uStack_117,uStack_118);
    uVar2 = CONCAT71(local_11f,local_120);
    puVar13[1] = uStack_128;
    *puVar13 = puVar5;
    puVar13[3] = uVar3;
    puVar13[2] = uVar2;
    _swift_storeEnumTagMultiPayload(puVar13,local_280[0],1);
    FUN_100002f94(&DAT_10055e828,&DAT_100434030);
    FUN_100398c0c();
    FUN_1000087a0(&DAT_10055eee0,&DAT_10055e828,&DAT_100434030,
                  PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_1005234c0);
    lVar11 = local_270[0];
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar13);
  }
  else {
    FUN_100007e64(HVar15.unknown,lVar12,FUN_10040211c);
    lVar11 = lVar12;
    lVar6 = lVar10;
    FUN_100029504(lVar12,lVar10,FUN_10040211c);
    FUN_10026ac6c();
    puVar5 = &DAT_10055eed8;
    FUN_100002f94(&DAT_10055eed8,&DAT_1004346f0);
    iVar1 = *(int *)(puVar5 + 0x34);
    *(long *)(lVar10 + iVar1) = lVar11;
    ((long *)(lVar10 + iVar1))[1] = lVar6;
    lVar11 = alStack_2b0[1];
    SwiftUI::OpacityTransition::init();
    lVar6 = local_298[1];
    puVar4 = local_2a0;
    (**(code **)(local_298[1] + 0x10))(local_298[0],lVar11,local_2a0);
    puVar5 = &DAT_10054ae80;
    FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                  PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
    AVar9 = SwiftUI::AnyTransition::_init(puVar5,puVar4,puVar5);
    (**(code **)(lVar6 + 8))(lVar11,puVar4);
    *(undefined **)(lVar10 + *(int *)((long)local_260[0] + 0x24)) = AVar9.unknown;
    FUN_1000087e4(lVar10,puVar13,&DAT_10055eeb0,&DAT_1004346d8);
    _swift_storeEnumTagMultiPayload(puVar13,local_280[0],0);
    FUN_100002f94(&DAT_10055e828,&DAT_100434030);
    FUN_100398c0c();
    FUN_1000087a0(&DAT_10055eee0,&DAT_10055e828,&DAT_100434030,
                  PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_1005234c0);
    lVar11 = local_270[0];
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar13);
    FUN_10002a29c(lVar10,&DAT_10055eeb0,&DAT_1004346d8);
    FUN_100029548(lVar12,FUN_10040211c);
  }
  lVar6 = local_270[1];
  FUN_1000087e4(lVar11,local_270[1],&DAT_10055eec0,&DAT_1004346e8);
  puVar13 = local_260[1];
  puVar4 = local_280[1];
  *local_260[1] = local_280[1];
  *(undefined2 *)(local_260[1] + 1) = 0x100;
  puVar5 = &DAT_10055eee8;
  FUN_100002f94(&DAT_10055eee8,&DAT_1004346f8);
  FUN_1000087e4(lVar6,(long)puVar13 + (long)*(int *)(puVar5 + 0x30),&DAT_10055eec0,&DAT_1004346e8);
  _swift_retain(puVar4);
  FUN_10002a29c(lVar11,&DAT_10055eec0,&DAT_1004346e8);
  FUN_10002a29c(lVar6,&DAT_10055eec0,&DAT_1004346e8);
  _swift_release(puVar4);
  return;
}

