// rea decompile_all
// name: FUN_10004cbac
// address: 0x10004cbac
// body: available
// range: 0x10004cbac-0x10004cf2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004cbac(ulong *param_1,long param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  State SVar5;
  undefined *puVar6;
  undefined *puVar7;
  EnvironmentObject<undefined> EVar8;
  EnvironmentObject<undefined> EVar9;
  State<undefined> SVar10;
  UnitPoint scale;
  AnyTransition AVar11;
  AnyTransition with;
  AnyTransition AVar12;
  UnitPoint anchor;
  TargetProtocolConformanceDescriptor *pTVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auStack_278 [88];
  ulong local_220;
  ulong uStack_218;
  ulong local_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *local_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  undefined *puStack_1d8;
  ulong local_1d0;
  ulong uStack_1c8;
  undefined7 uStack_1bf;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined1 local_198;
  undefined7 uStack_197;
  ulong local_190;
  undefined *puStack_188;
  ulong local_180;
  ulong uStack_178;
  undefined1 local_170;
  undefined *local_168;
  undefined *puStack_160;
  undefined *local_158;
  undefined *puStack_150;
  undefined1 local_148;
  ulong local_140;
  undefined *puStack_138;
  ulong local_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined *puStack_118;
  undefined *local_110;
  undefined *puStack_108;
  undefined *puStack_100;
  ulong uStack_f8;
  ulong local_f0;
  undefined *puStack_e8;
  ulong local_e0;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  ulong local_90;
  undefined *puStack_88;
  undefined8 local_80;
  
  uStack_c8 = *(ulong *)(param_2 + 0x128);
  local_d0 = *(ulong *)(param_2 + 0x120);
  SVar5.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar5);
  uVar15 = 0;
  uStack_128 = 0;
  if ((char)local_130 == '\x01') {
    lVar14 = *(long *)(param_2 + 0x80);
    if (lVar14 == 0) {
      FUN_1001373cc(0);
      FUN_1000036d0(&DAT_100553de0,FUN_1001373cc,&TargetProtocolConformanceDescriptor_100426ef0);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10004cf2c);
      (*pcVar4)();
    }
    puVar6 = &DAT_10041e0f8;
    _swift_getKeyPath(&DAT_10041e0f8);
    puVar7 = &DAT_10041e120;
    _swift_getKeyPath(&DAT_10041e120);
    _swift_retain(lVar14);
    Combine::Published::_get_subscript(&local_d0);
    _swift_release(puVar6);
    _swift_release(puVar7);
    _swift_release(lVar14);
    if ((local_d0 & 1) == 0) {
      local_e0 = 0;
      uStack_120 = 0;
      puStack_118 = (undefined *)0x0;
      local_110 = (undefined *)0x0;
      puStack_108 = (undefined *)0x0;
      puStack_100 = (undefined *)0x0;
      uStack_f8 = 0;
      local_f0 = 0;
      puStack_e8 = (undefined *)0x0;
      uVar15 = 0;
      uStack_128 = 0;
    }
    else {
      uStack_128 = *(undefined8 *)(param_2 + 0x128);
      local_130 = *(ulong *)(param_2 + 0x120);
      SwiftUI::State::get_projectedValue(SVar5);
      uVar2 = uStack_c8;
      uVar15 = local_d0;
      FUN_1001373cc(0);
      puVar6 = &DAT_100553de0;
      FUN_1000036d0(&DAT_100553de0,FUN_1001373cc,&TargetProtocolConformanceDescriptor_100426ef0);
      EVar8 = SwiftUI::EnvironmentObject::init();
      FUN_100231228(0);
      puVar7 = &DAT_10054d6a8;
      pTVar13 = &TargetProtocolConformanceDescriptor_10042bb2c;
      FUN_1000036d0(&DAT_10054d6a8,FUN_100231228);
      EVar9 = SwiftUI::EnvironmentObject::init();
      local_130 = local_130 & 0xffffffffffffff00;
      anchor.unknown = PTR___type_metadata_for_Swift_Bool_100523b70;
      SVar10 = SwiftUI::State::init(&local_d0);
      uVar3 = uStack_c8;
      uVar1 = (undefined1)local_d0;
      scale = SwiftUI::UnitPoint::get_bottom(SVar10.unknown);
      AVar11 = SwiftUI::AnyTransition::scale(scale.unknown,anchor,(AnyTransition)pTVar13);
      with = SwiftUI::AnyTransition::get_opacity(AVar11);
      AVar12 = SwiftUI::AnyTransition::combined(with,AVar11);
      _swift_release(AVar11.unknown);
      _swift_release(with.unknown);
      local_1d0 = uVar15;
      uStack_1c8 = uVar2;
      local_198 = uVar1;
      local_190 = uVar3;
      uStack_1e8 = CONCAT71(uStack_197,uVar1);
      uStack_1e0 = uVar3;
      local_210 = CONCAT71(uStack_1bf,(undefined1)local_c0);
      uStack_218 = uVar2;
      local_220 = uVar15;
      local_180 = uVar15;
      uStack_178 = uVar2;
      local_170 = (undefined1)local_c0;
      local_148 = uVar1;
      local_140 = uVar3;
      puStack_208 = EVar8.unknown;
      puStack_200 = puVar6;
      puStack_1f8 = EVar9.unknown;
      local_1f0 = puVar7;
      puStack_1d8 = AVar12.unknown;
      local_1b8 = EVar8.unknown;
      local_1b0 = puVar6;
      puStack_1a8 = EVar9.unknown;
      puStack_1a0 = puVar7;
      puStack_188 = AVar12.unknown;
      local_168 = EVar8.unknown;
      puStack_160 = puVar6;
      local_158 = EVar9.unknown;
      puStack_150 = puVar7;
      puStack_138 = AVar12.unknown;
      FUN_1000087e4(&local_1d0,&local_d0,&DAT_10054d6b0,&DAT_10041e1e8);
      FUN_10002a29c(&local_180,&DAT_10054d6b0,&DAT_10041e1e8);
      puStack_108 = puStack_1f8;
      local_110 = puStack_200;
      uStack_f8 = uStack_1e8;
      puStack_100 = local_1f0;
      puStack_e8 = puStack_1d8;
      local_f0 = uStack_1e0;
      uStack_128 = uStack_218;
      local_130 = local_220;
      puStack_118 = puStack_208;
      uStack_120 = local_210;
      local_e0 = 0x4026000000000000;
      puStack_a8 = puStack_1f8;
      local_b0 = puStack_200;
      uStack_98 = uStack_1e8;
      puStack_a0 = local_1f0;
      puStack_88 = puStack_1d8;
      local_90 = uStack_1e0;
      uStack_c8 = uStack_218;
      local_d0 = local_220;
      puStack_b8 = puStack_208;
      local_c0 = local_210;
      local_80 = 0x4026000000000000;
      FUN_1000087e4(&local_130,auStack_278,&DAT_10054d6b8,&DAT_10041e1f0);
      FUN_10002a29c(&local_d0,&DAT_10054d6b8,&DAT_10041e1f0);
      uVar15 = local_130;
    }
  }
  else {
    local_e0 = 0;
    uStack_120 = 0;
    puStack_118 = (undefined *)0x0;
    local_110 = (undefined *)0x0;
    puStack_108 = (undefined *)0x0;
    puStack_100 = (undefined *)0x0;
    uStack_f8 = 0;
    local_f0 = 0;
    puStack_e8 = (undefined *)0x0;
  }
  param_1[1] = uStack_128;
  *param_1 = uVar15;
  param_1[3] = (ulong)puStack_118;
  param_1[2] = uStack_120;
  param_1[5] = (ulong)puStack_108;
  param_1[4] = (ulong)local_110;
  param_1[7] = uStack_f8;
  param_1[6] = (ulong)puStack_100;
  param_1[9] = (ulong)puStack_e8;
  param_1[8] = local_f0;
  param_1[10] = local_e0;
  return;
}

