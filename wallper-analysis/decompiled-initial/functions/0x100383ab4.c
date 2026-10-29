// rea decompile_all
// name: FUN_100383ab4
// address: 0x100383ab4
// body: available
// range: 0x100383ab4-0x100383bcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100383ab4(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar1 = 0;
  FUN_1003881b4();
  lVar4 = *(long *)(lVar1 + -8);
  lVar1 = *(long *)(lVar4 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  FUN_100029504(param_1,&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),
                FUN_1003881b4);
  uVar3 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff);
  puVar2 = &DAT_10053c438;
  _swift_allocObject(&DAT_10053c438,uVar5 + lVar1,uVar3 | 7);
  FUN_100007e64(&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),puVar2 + uVar5,
                FUN_1003881b4);
  FUN_100002f94(&DAT_10054b570,&DAT_100433140);
  FUN_1000087a0(&DAT_10054b568,&DAT_10054b570,&DAT_100433140,
                PTR_SwiftUI__SwiftUI__Label<undefined,undefined>_>SwiftUI__View_100523358);
  SwiftUI::Button::_init();
  return;
}

