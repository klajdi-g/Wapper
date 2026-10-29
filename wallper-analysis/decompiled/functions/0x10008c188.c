// rea decompile_all
// name: FUN_10008c188
// address: 0x10008c188
// body: available
// range: 0x10008c188-0x10008c827 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008c188(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  double *pdVar3;
  Alignment AVar4;
  long lVar5;
  UnitPoint UVar6;
  State SVar7;
  undefined *puVar8;
  void *extraout_x8;
  long extraout_x8_00;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  double dVar12;
  undefined8 local_14f0;
  undefined8 uStack_14e8;
  undefined8 local_14e0;
  undefined8 uStack_14d8;
  undefined1 auStack_14c8 [272];
  undefined1 auStack_13b8 [272];
  undefined *local_12a8;
  undefined *local_12a0;
  undefined1 auStack_1298 [336];
  undefined1 auStack_1148 [352];
  undefined1 auStack_fe8 [352];
  undefined *local_e88;
  undefined *local_e80;
  undefined1 auStack_e78 [336];
  undefined1 auStack_d28 [288];
  double local_c08;
  undefined8 local_c00;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  undefined8 local_be0;
  undefined8 local_bd8;
  undefined8 uStack_bd0;
  undefined1 auStack_bc8 [288];
  double local_aa8;
  undefined8 local_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  char local_a68;
  undefined7 uStack_a67;
  double local_908;
  double local_900;
  undefined1 auStack_7a8 [272];
  undefined1 auStack_698 [272];
  undefined *local_588;
  undefined8 local_580;
  undefined1 auStack_578 [272];
  undefined *local_468;
  undefined8 local_460;
  undefined1 auStack_458 [272];
  undefined1 auStack_348 [288];
  double local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  double local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  (*(code *)PTR____chkstk_darwin_100521118)();
  AVar4.unknown = (undefined *)0x0;
  uVar10 = param_2;
  FUN_10009e280();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(AVar4.unknown + -8) + 0x40));
  lVar11 = (long)&local_14f0 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_10008a1fc(lVar11);
  AVar4 = SwiftUI::Alignment::get_center(AVar4);
  FUN_10008eed0(&local_1e8,param_1,lVar11,param_2);
  _memcpy(auStack_7a8,&local_1e8,0x110);
  _memcpy(auStack_698,&local_1e8,0x110);
  FUN_1000087e4(auStack_7a8,auStack_348,&DAT_10054f3d0,&DAT_100420930);
  FUN_10002a29c(auStack_698,&DAT_10054f3d0,&DAT_100420930);
  _memcpy(auStack_348,auStack_7a8,0x110);
  FUN_100095498(lVar11);
  lVar5 = 0;
  FUN_100097a30();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x28));
  local_1e8 = *puVar1;
  local_1e0 = puVar1[1];
  UVar6.unknown = &DAT_10054ac50;
  FUN_100002f94(&DAT_10054ac50,&DAT_10041dd60);
  SVar7.unknown = UVar6.unknown;
  SwiftUI::State::get_wrappedValue((State)UVar6.unknown);
  uVar9 = 0x3f91df46a2529d39;
  dVar12 = local_908 * 0.017453292519943295;
  SwiftUI::UnitPoint::get_center((UnitPoint)SVar7.unknown);
  local_588 = AVar4.unknown;
  local_580 = uVar10;
  _memcpy(auStack_578,auStack_348,0x110);
  _memcpy(&local_a68,&local_588,0x120);
  local_468 = AVar4.unknown;
  local_460 = uVar10;
  _memcpy(auStack_458,auStack_348,0x110);
  FUN_1000087e4(&local_588,&local_1e8,&DAT_10054f3d8,&DAT_100420938);
  FUN_10002a29c(&local_468,&DAT_10054f3d8,&DAT_100420938);
  _memcpy(auStack_348,&local_a68,0x120);
  local_220 = 0;
  uStack_14d8 = 0;
  local_14e0 = 0x3ff0000000000000;
  uStack_210 = 0;
  local_218 = 0x3ff0000000000000;
  uStack_14e8 = 0x3fe0000000000000;
  local_14f0 = 0;
  uStack_1f0 = 0x3fe0000000000000;
  local_1f8 = 0;
  local_228 = dVar12;
  local_200 = uVar9;
  _memcpy(&local_1e8,&local_a68,0x120);
  local_c0 = 0;
  uStack_b0 = uStack_14d8;
  local_b8 = local_14e0;
  uStack_90 = uStack_14e8;
  local_98 = local_14f0;
  local_c8 = dVar12;
  local_a0 = uVar9;
  FUN_1000087e4(auStack_348,&local_908,&DAT_10054f3e0,&DAT_100420940);
  FUN_10002a29c(&local_1e8,&DAT_10054f3e0,&DAT_100420940);
  puVar2 = (undefined1 *)(param_1 + *(int *)(lVar5 + 0x24));
  local_900 = *(double *)(puVar2 + 8);
  local_908 = (double)CONCAT71(local_908._1_7_,*puVar2);
  SVar7.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar7);
  if (local_a68 == '\x01') {
    AVar4.unknown = &DAT_10054efb8;
    puVar8 = &DAT_100420510;
    FUN_100002f94();
    SwiftUI::State::get_wrappedValue((State)AVar4.unknown);
    AVar4 = SwiftUI::Alignment::get_center(AVar4);
    FUN_10008eed0(&local_908,param_1,lVar11,(uint)param_2 & 1);
    _memcpy(auStack_14c8,&local_908,0x110);
    _memcpy(auStack_13b8,&local_908,0x110);
    FUN_1000087e4(auStack_14c8,&local_a68,&DAT_10054f3d0,&DAT_100420930);
    FUN_10002a29c(auStack_13b8,&DAT_10054f3d0,&DAT_100420930);
    _memcpy(auStack_bc8,auStack_14c8,0x110);
    FUN_100095498(lVar11);
    pdVar3 = (double *)(param_1 + *(int *)(lVar5 + 0x2c));
    local_908 = *pdVar3;
    local_900 = pdVar3[1];
    SwiftUI::State::get_wrappedValue((State)UVar6.unknown);
    uVar10 = 0x3f91df46a2529d39;
    dVar12 = (double)CONCAT71(uStack_a67,local_a68) * 0.017453292519943295;
    SwiftUI::UnitPoint::get_center(UVar6);
    local_12a8 = AVar4.unknown;
    local_12a0 = puVar8;
    _memcpy(auStack_1298,auStack_bc8,0x110);
    _memcpy(&local_a68,&local_12a8,0x120);
    local_e88 = AVar4.unknown;
    local_e80 = puVar8;
    _memcpy(auStack_e78,auStack_bc8,0x110);
    FUN_1000087e4(&local_12a8,&local_908,&DAT_10054f3d8,&DAT_100420938);
    FUN_10002a29c(&local_e88,&DAT_10054f3d8,&DAT_100420938);
    _memcpy(auStack_d28,&local_a68,0x120);
    local_c00 = 0;
    uStack_bf0 = uStack_14d8;
    local_bf8 = local_14e0;
    uStack_bd0 = uStack_14e8;
    local_bd8 = local_14f0;
    local_c08 = dVar12;
    local_be0 = uVar10;
    _memcpy(auStack_bc8,&local_a68,0x120);
    local_aa0 = 0;
    uStack_a90 = uStack_14d8;
    local_a98 = local_14e0;
    uStack_a70 = uStack_14e8;
    local_a78 = local_14f0;
    local_aa8 = dVar12;
    local_a80 = uVar10;
    FUN_1000087e4(auStack_d28,&local_908,&DAT_10054f3e0,&DAT_100420940);
    FUN_10002a29c(auStack_bc8,&DAT_10054f3e0,&DAT_100420940);
    _memcpy(&local_a68,auStack_d28,0x160);
    FUN_10002a200(&local_a68);
    _memcpy(&local_908,&local_a68,0x160);
  }
  else {
    FUN_100098ce0(&local_908);
  }
  _memcpy(&local_e88,auStack_348,0x160);
  _memcpy(&local_a68,&local_908,0x160);
  _memcpy(auStack_d28,auStack_348,0x160);
  _memcpy(auStack_1148,auStack_348,0x160);
  _memcpy(auStack_bc8,&local_908,0x160);
  _memcpy(auStack_fe8,&local_908,0x160);
  _memcpy(extraout_x8,auStack_1148,0x2c0);
  FUN_1000087e4(auStack_d28,&local_12a8,&DAT_10054f3e0,&DAT_100420940);
  FUN_1000087e4(auStack_bc8,&local_12a8,&DAT_10054f3e8,&DAT_100420948);
  FUN_10002a29c(&local_a68,&DAT_10054f3e8,&DAT_100420948);
  FUN_10002a29c(&local_e88,&DAT_10054f3e0,&DAT_100420940);
  return;
}

