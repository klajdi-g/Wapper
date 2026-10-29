// rea decompile_all
// name: FUN_1002f9398
// address: 0x1002f9398
// body: available
// range: 0x1002f9398-0x1002f942b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002f9428 to 0x1002f17b4 FUN_1002f17b4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f9398(void)

{
  URL UVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  uVar4 = (ulong)*(byte *)(*(long *)(UVar1.unknown + -8) + 0x50);
  uVar5 = uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff);
  lVar3 = *(long *)(*(long *)(UVar1.unknown + -8) + 0x40);
  lVar2 = lVar3 + uVar4;
  uVar6 = lVar2 + uVar5 & (uVar4 ^ 0xffffffffffffffff);
  uVar7 = lVar2 + uVar6 & (uVar4 ^ 0xffffffffffffffff);
  uVar8 = lVar3 + uVar7 + 7 & 0xfffffffffffffff8;
  lVar2 = 0;
  FUN_1002f58d4();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  FUN_1002f17b4(unaff_x20 + uVar5,unaff_x20 + uVar6,unaff_x20 + uVar7,
                *(undefined8 *)(unaff_x20 + uVar8),
                unaff_x20 + (uVar4 + uVar8 + 8 & (uVar4 ^ 0xffffffffffffffff)));
  return;
}

