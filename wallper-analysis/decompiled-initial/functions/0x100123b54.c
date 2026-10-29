// rea decompile_all
// name: FUN_100123b54
// address: 0x100123b54
// body: available
// range: 0x100123b54-0x100123c27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100123b54(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  Published *param_5,undefined8 param_6)

{
  undefined *puVar1;
  long extraout_x8;
  undefined8 uVar2;
  
  puVar1 = &DAT_100551e50;
  FUN_100002f94(&DAT_100551e50,&DAT_100429e60);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = *param_2;
  _swift_getKeyPath(param_5);
  _swift_getKeyPath(param_6);
  FUN_1000087e4(param_1,&stack0xffffffffffffffb0 + -extraout_x8,&DAT_100551e50,&DAT_100429e60);
  _swift_retain(uVar2);
  Combine::Published::_set_subscript
            (param_5,&stack0xffffffffffffffb0 + -extraout_x8,uVar2,param_5,param_6);
  return;
}

