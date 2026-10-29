// rea decompile_all
// name: FUN_1003bd108
// address: 0x1003bd108
// body: available
// range: 0x1003bd108-0x1003bd347 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003bd33c) */

undefined8 FUN_1003bd108(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  State SVar3;
  code *pcVar4;
  code *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  byte local_61;
  undefined8 local_60;
  undefined8 local_58;
  
  puVar1 = (undefined1 *)(unaff_x20 + *(int *)(param_2 + 0x78));
  uVar2 = *puVar1;
  uVar6 = *(undefined8 *)(puVar1 + 8);
  SVar3.unknown = &DAT_100560308;
  local_58 = uVar6;
  local_60._0_1_ = uVar2;
  FUN_100002f94(&DAT_100560308,&DAT_100435de8);
  SwiftUI::State::get_wrappedValue(SVar3);
  if (local_61 == 0) {
    _swift_bridgeObjectRetain(param_1);
    return param_1;
  }
  local_60 = CONCAT71(local_60._1_7_,uVar2);
  local_58 = uVar6;
  SwiftUI::State::get_wrappedValue(SVar3);
  if (local_61 < 4) {
    if (local_61 < 2) {
      _swift_bridgeObjectRetain(param_1);
      goto LAB_1003bd2d0;
    }
    if (local_61 == 2) {
      local_60 = param_1;
      _swift_bridgeObjectRetain(param_1);
      pcVar4 = FUN_1003dfb20;
      pcVar5 = FUN_1003dd928;
    }
    else {
      local_60 = param_1;
      _swift_bridgeObjectRetain(param_1);
      pcVar4 = FUN_1003df654;
      pcVar5 = FUN_1003dcb94;
    }
  }
  else if (local_61 < 6) {
    if (local_61 == 4) {
      local_60 = param_1;
      _swift_bridgeObjectRetain(param_1);
      pcVar4 = FUN_1003df41c;
      pcVar5 = FUN_1003dc398;
    }
    else {
      local_60 = param_1;
      _swift_bridgeObjectRetain(param_1);
      pcVar4 = FUN_1003df25c;
      pcVar5 = FUN_1003dbc8c;
    }
  }
  else if (local_61 == 6) {
    local_60 = param_1;
    _swift_bridgeObjectRetain(param_1);
    pcVar4 = FUN_1003defe8;
    pcVar5 = FUN_1003db420;
  }
  else if (local_61 == 7) {
    local_60 = param_1;
    _swift_bridgeObjectRetain(param_1);
    pcVar4 = FUN_1003dee20;
    pcVar5 = FUN_1003dad68;
  }
  else {
    local_60 = param_1;
    _swift_bridgeObjectRetain(param_1);
    pcVar4 = FUN_1003decbc;
    pcVar5 = FUN_1003da80c;
  }
  FUN_1003bb7f0(&local_60,pcVar4,pcVar5);
  param_1 = local_60;
LAB_1003bd2d0:
  puVar1 = (undefined1 *)(unaff_x20 + *(int *)(param_2 + 0x7c));
  local_58 = *(undefined8 *)(puVar1 + 8);
  local_60 = CONCAT71(local_60._1_7_,*puVar1);
  SVar3.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar3);
  if ((local_61 & 1) == 0) {
    FUN_1003bd520(param_1);
  }
  return param_1;
}

