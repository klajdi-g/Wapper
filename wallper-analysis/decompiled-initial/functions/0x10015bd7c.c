// rea decompile_all
// name: FUN_10015bd7c
// address: 0x10015bd7c
// body: available
// range: 0x10015bd7c-0x10015be8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015bd7c(ulong param_1,ulong param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6,long param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_98 [24];
  ulong local_80;
  ulong uStack_78;
  undefined8 local_70;
  long lStack_68;
  undefined8 local_60;
  long lStack_58;
  
  if (param_2 != 0) {
    uVar1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uVar2 = 0;
      if (param_4 != 0) {
        uVar2 = param_3;
      }
      lVar3 = -0x2000000000000000;
      if (param_4 != 0) {
        lVar3 = param_4;
      }
      uVar4 = 0;
      if (param_6 != 0) {
        uVar4 = param_5;
      }
      lVar5 = -0x2000000000000000;
      if (param_6 != 0) {
        lVar5 = param_6;
      }
      _swift_bridgeObjectRetain(param_6);
      _swift_bridgeObjectRetain(param_2);
      _swift_bridgeObjectRetain(param_4);
      goto LAB_10015be18;
    }
    param_2 = 0;
  }
  param_1 = 0;
  uVar2 = 0;
  lVar3 = 0;
  uVar4 = 0;
  lVar5 = 0;
LAB_10015be18:
  local_80 = param_1;
  uStack_78 = param_2;
  local_70 = uVar2;
  lStack_68 = lVar3;
  local_60 = uVar4;
  lStack_58 = lVar5;
  _swift_beginAccess(param_7 + 0x10,auStack_98,0,0);
  param_7 = param_7 + 0x10;
  _swift_weakLoadStrong();
  if (param_7 != 0) {
    FUN_10015be90(&local_80);
    _swift_release(param_7);
  }
  FUN_10016409c(param_1,param_2,uVar2,lVar3,uVar4,lVar5);
  return;
}

