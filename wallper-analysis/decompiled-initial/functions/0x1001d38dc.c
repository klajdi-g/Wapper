// rea decompile_all
// name: FUN_1001d38dc
// address: 0x1001d38dc
// body: available
// range: 0x1001d38dc-0x1001d39ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1001d38dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  Substring SVar2;
  undefined1 auStack_70 [16];
  undefined8 *local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0x7c;
  uStack_48 = 0xe100000000000000;
  local_60 = &local_50;
  _swift_bridgeObjectRetain(param_2);
  lVar1 = 0x7fffffffffffffff;
  FUN_1001b49f4(0x7fffffffffffffff,1,FUN_1001d3ef4,auStack_70,param_1,param_2);
  if (*(long *)(lVar1 + 0x10) == 0) {
    _swift_bridgeObjectRelease();
    SVar2 = Swift::Substring::init((String)(ZEXT816(0xe000000000000000) << 0x40));
  }
  else {
    SVar2.unknown = *(undefined **)(lVar1 + 0x20);
    _swift_bridgeObjectRetain(*(undefined8 *)(lVar1 + 0x38));
    _swift_bridgeObjectRelease(lVar1);
  }
  return SVar2.unknown;
}

