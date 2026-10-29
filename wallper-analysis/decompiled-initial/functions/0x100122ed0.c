// rea decompile_all
// name: FUN_100122ed0
// address: 0x100122ed0
// body: available
// range: 0x100122ed0-0x100122fab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100122ed0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  undefined1 auStack_60 [32];
  
  uStack_78 = param_1[1];
  local_80 = *param_1;
  local_68 = param_1[3];
  uStack_70 = param_1[2];
  if (local_68 == 0) {
    FUN_10002a29c(&local_80,&DAT_10054d428,&DAT_100420300);
    FUN_10027eb2c(auStack_60,param_2,param_3);
    _swift_bridgeObjectRelease(param_3);
    FUN_10002a29c(auStack_60,&DAT_10054d428,&DAT_100420300);
  }
  else {
    FUN_100007d88(&local_80,auStack_60);
    uVar1 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar1);
    local_80 = *unaff_x20;
    FUN_100340514(auStack_60,param_2,param_3,uVar1);
    _swift_bridgeObjectRelease(param_3);
    *unaff_x20 = local_80;
  }
  return;
}

