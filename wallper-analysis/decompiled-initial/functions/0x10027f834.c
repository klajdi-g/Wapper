// rea decompile_all
// name: FUN_10027f834
// address: 0x10027f834
// body: available
// range: 0x10027f834-0x10027f8bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10027f8b8 to 0x1002713ec FUN_1002713ec (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10027f834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  URL UVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  uVar4 = (ulong)*(byte *)(*(long *)(UVar2.unknown + -8) + 0x50);
  uVar5 = uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff);
  lVar3 = *(long *)(*(long *)(UVar2.unknown + -8) + 0x40);
  lVar1 = lVar3 + uVar4;
  uVar6 = lVar1 + uVar5 & (uVar4 ^ 0xffffffffffffffff);
  uVar4 = lVar1 + uVar6 & (uVar4 ^ 0xffffffffffffffff);
  FUN_1002713ec(param_1,param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + uVar5,
                unaff_x20 + uVar6,unaff_x20 + uVar4,
                *(undefined8 *)(unaff_x20 + (lVar3 + uVar4 + 7 & 0xfffffffffffffff8)));
  return;
}

