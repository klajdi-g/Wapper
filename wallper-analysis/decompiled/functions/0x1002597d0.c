// rea decompile_all
// name: FUN_1002597d0
// address: 0x1002597d0
// body: available
// range: 0x1002597d0-0x10025984b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002597d0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  URL UVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  
  UVar3 = Foundation::URL::typeMetadataAccessor();
  uVar4 = (ulong)*(byte *)(*(long *)(UVar3.unknown + -8) + 0x50);
  uVar4 = uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff);
  uVar5 = *(long *)(*(long *)(UVar3.unknown + -8) + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar5);
  puVar2 = (undefined8 *)(unaff_x20 + uVar5 + 0x10);
  FUN_10023e14c(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + uVar4,*puVar1,
                *(undefined1 *)(puVar1 + 1),*(undefined1 *)((long)puVar1 + 9),
                *(undefined1 *)((long)puVar1 + 10),*(undefined1 *)((long)puVar1 + 0xb),*puVar2,
                *(undefined1 *)(puVar2 + 1));
  return;
}

