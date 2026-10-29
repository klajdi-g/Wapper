// rea decompile_all
// name: FUN_10009866c
// address: 0x10009866c
// body: available
// range: 0x10009866c-0x10009871b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100098718 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10009866c(code *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  Date DVar5;
  ulong uVar6;
  long unaff_x20;
  
  lVar3 = 0;
  (*param_1)();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar3 = unaff_x20 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x30));
  lVar4 = 0;
  FUN_10009e280();
  iVar1 = *(int *)(lVar4 + 0x2c);
  lVar4 = 0;
  FUN_10015f8e8();
  iVar2 = *(int *)(lVar4 + 0x14);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar5.unknown + -8) + 8))(lVar3 + (long)iVar1 + (long)iVar2,DVar5.unknown);
  _swift_deallocObject();
  return;
}

