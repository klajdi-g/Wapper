// rea decompile_all
// name: FUN_100099a60
// address: 0x100099a60
// body: available
// range: 0x100099a60-0x100099ad3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100099a60(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  lVar1 = 0;
  FUN_100095ec0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x38);
  local_60 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x40);
  local_40 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x18);
  local_80 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_100085738(param_1,param_2,&local_80,unaff_x20 + (uVar2 + 0x58 & (uVar2 ^ 0xffffffffffffffff)))
  ;
  return;
}

