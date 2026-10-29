// rea decompile_all
// name: FUN_1000fc404
// address: 0x1000fc404
// body: available
// range: 0x1000fc404-0x1000fc507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000fc504 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000fc404(void)

{
  long *plVar1;
  URL UVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar2.unknown + -8);
  uVar5 = (ulong)*(byte *)(lVar9 + 0x50) + 0x10 &
          ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff);
  lVar6 = *(long *)(lVar9 + 0x40);
  lVar3 = 0;
  FUN_1000fa84c();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  pcVar8 = *(code **)(lVar9 + 8);
  (*pcVar8)(unaff_x20 + uVar5,UVar2.unknown);
  lVar6 = unaff_x20 + (uVar5 + lVar6 + uVar7 & (uVar7 ^ 0xffffffffffffffff));
  lVar4 = lVar6;
  (**(code **)(lVar9 + 0x30))(lVar6,1,UVar2.unknown);
  if ((int)lVar4 == 0) {
    (*pcVar8)(lVar6,UVar2.unknown);
  }
  plVar1 = (long *)(lVar6 + *(int *)(lVar3 + 0x14));
  if (*plVar1 != 0) {
    _swift_release(plVar1[1]);
  }
  _swift_release(*(undefined8 *)(lVar6 + *(int *)(lVar3 + 0x18) + 8));
  _swift_release(*(undefined8 *)(lVar6 + *(int *)(lVar3 + 0x1c) + 8));
  _swift_deallocObject();
  return;
}

