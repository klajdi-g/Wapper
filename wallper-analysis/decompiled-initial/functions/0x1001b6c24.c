// rea decompile_all
// name: FUN_1001b6c24
// address: 0x1001b6c24
// body: available
// range: 0x1001b6c24-0x1001b6cff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b6c24(Published *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long extraout_x8;
  undefined8 uVar3;
  
  puVar1 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *param_2;
  puVar1 = &DAT_10042a670;
  _swift_getKeyPath(&DAT_10042a670);
  puVar2 = &DAT_10042a698;
  _swift_getKeyPath(&DAT_10042a698);
  FUN_1000087e4(param_1,&stack0xffffffffffffffb0 + -extraout_x8,&DAT_10054a9c8,&DAT_10041bbe0);
  _swift_retain(uVar3);
  Combine::Published::_set_subscript
            (param_1,&stack0xffffffffffffffb0 + -extraout_x8,uVar3,puVar1,puVar2);
  FUN_1001b69c4();
  return;
}

