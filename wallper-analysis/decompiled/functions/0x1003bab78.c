// rea decompile_all
// name: FUN_1003bab78
// address: 0x1003bab78
// body: available
// range: 0x1003bab78-0x1003bac4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003bac48 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003bab78(void)

{
  long lVar1;
  long lVar2;
  URL UVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  
  lVar2 = 0;
  FUN_1003ba110();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff));
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar3.unknown + -8);
  lVar4 = lVar1;
  (**(code **)(lVar6 + 0x30))(lVar1,1,UVar3.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar6 + 8))(lVar1,UVar3.unknown);
  }
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar2 + 0x14) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar2 + 0x18) + 8));
  _swift_deallocObject();
  return;
}

