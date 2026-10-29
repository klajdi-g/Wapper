// rea decompile_all
// name: FUN_1000a3600
// address: 0x1000a3600
// body: available
// range: 0x1000a3600-0x1000a3987 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000a37f8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000a3600(ulong *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  AnyTransition AVar8;
  undefined8 uVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x8_00;
  code *pcVar11;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar12;
  long local_2b0 [4];
  undefined *puStack_290;
  long local_288;
  undefined1 auStack_280 [128];
  ulong local_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong local_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong local_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong local_1a0;
  undefined8 uStack_18f;
  ulong local_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong local_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong local_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong local_120;
  undefined8 uStack_10f;
  ulong local_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong local_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  undefined8 local_80;
  undefined8 uStack_78;
  
  local_2b0[0] = param_3;
  puStack_290 = (undefined *)SwiftUI::OpacityTransition::typeMetadataAccessor();
  local_2b0[3] = *(long *)(puStack_290 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_2b0[3] + 0x40));
  lVar10 = (long)local_2b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_2b0[1] = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar10 - extraout_x12;
  puVar6 = &DAT_10054fae8;
  local_2b0[2] = lVar10;
  FUN_100002f94(&DAT_10054fae8,&USHORT_1004210e0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar10 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_288 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar10 - extraout_x12_00;
  uVar12 = param_2[1];
  local_80 = *param_2;
  uVar9 = param_2[9];
  uVar1 = param_2[10];
  uVar2 = *(undefined1 *)((long)param_2 + 0x5a);
  uStack_78 = uVar12;
  FUN_1000087e4(&local_80,&local_100,&DAT_10054d438,&DAT_10041ddb0);
  _swift_bridgeObjectRetain(uVar1);
  FUN_10004702c(&local_100,uVar12,uVar9,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar1);
  FUN_10002a29c(&local_80,&DAT_10054d438,&DAT_10041ddb0);
  uVar7 = (ulong)*(byte *)(param_2 + 0xb);
  if (*(byte *)(param_2 + 0xb) == 0xc) {
    SwiftUI::AppStorage::get_wrappedValue((undefined *)param_2[8]);
    FUN_100078414(local_180,uStack_178);
    uVar7 = local_180;
    if (((uint)local_180 & 0xff) != 0xc) goto LAB_1000a3790;
  }
  else {
LAB_1000a3790:
    if ((uVar7 & 0xff) != 0) {
      FUN_1000a3988(lVar10,param_2,local_2b0[0]);
      lVar3 = local_2b0[2];
      SwiftUI::OpacityTransition::init();
      puVar5 = puStack_290;
      lVar4 = local_2b0[3];
      (**(code **)(local_2b0[3] + 0x10))(local_2b0[1],lVar3,puStack_290);
      puVar6 = &DAT_10054ae80;
      FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                    PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
      AVar8 = SwiftUI::AnyTransition::_init(puVar6,puVar5,puVar6);
      (**(code **)(lVar4 + 8))(lVar3,puVar5);
      puVar6 = &DAT_10054faf0;
      FUN_100002f94(&DAT_10054faf0,&USHORT_1004210f0);
      *(undefined **)(lVar10 + *(int *)(puVar6 + 0x24)) = AVar8.unknown;
      pcVar11 = *(code **)(*(long *)(puVar6 + -8) + 0x38);
      uVar9 = 0;
      goto LAB_1000a386c;
    }
  }
  puVar6 = &DAT_10054faf0;
  FUN_100002f94(&DAT_10054faf0,&USHORT_1004210f0);
  pcVar11 = *(code **)(*(long *)(puVar6 + -8) + 0x38);
  uVar9 = 1;
LAB_1000a386c:
  (*pcVar11)(lVar10,uVar9,1,puVar6);
  lVar3 = local_288;
  uStack_1b8 = uStack_b8;
  local_1c0 = local_c0;
  uStack_1a8 = uStack_a8;
  uStack_1b0 = uStack_b0;
  local_1a0 = local_a0;
  uStack_18f = uStack_8f;
  uStack_1f8 = uStack_f8;
  local_200 = local_100;
  uStack_1e8 = uStack_e8;
  uStack_1f0 = uStack_f0;
  uStack_1d8 = uStack_d8;
  local_1e0 = local_e0;
  uStack_1c8 = uStack_c8;
  uStack_1d0 = uStack_d0;
  FUN_1000087e4(lVar10,local_288,&DAT_10054fae8,&USHORT_1004210e0);
  uStack_138 = uStack_b8;
  local_140 = local_c0;
  uStack_128 = uStack_a8;
  uStack_130 = uStack_b0;
  local_120 = local_a0;
  uStack_10f = uStack_8f;
  uStack_178 = uStack_f8;
  local_180 = local_100;
  uStack_168 = uStack_e8;
  uStack_170 = uStack_f0;
  uStack_158 = uStack_d8;
  local_160 = local_e0;
  uStack_148 = uStack_c8;
  uStack_150 = uStack_d0;
  *(undefined8 *)((long)param_1 + 0x71) = uStack_8f;
  *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_90,uStack_97);
  param_1[0xb] = uStack_a8;
  param_1[10] = uStack_b0;
  param_1[0xd] = CONCAT71(uStack_97,uStack_98);
  param_1[0xc] = local_a0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  param_1[9] = uStack_b8;
  param_1[8] = local_c0;
  param_1[3] = uStack_e8;
  param_1[2] = uStack_f0;
  param_1[5] = uStack_d8;
  param_1[4] = local_e0;
  param_1[1] = uStack_f8;
  *param_1 = local_100;
  puVar6 = &DAT_10054faf8;
  FUN_100002f94(&DAT_10054faf8,&USHORT_1004210f8);
  FUN_1000087e4(lVar3,(long)param_1 + (long)*(int *)(puVar6 + 0x30),&DAT_10054fae8,&USHORT_1004210e0
               );
  FUN_100047eec(&local_180,auStack_280);
  FUN_10002a29c(lVar10,&DAT_10054fae8,&USHORT_1004210e0);
  FUN_10002a29c(lVar3,&DAT_10054fae8,&USHORT_1004210e0);
  FUN_100077990(&local_200);
  return;
}

