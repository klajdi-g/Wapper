// rea decompile_all
// name: FUN_100342ad8
// address: 0x100342ad8
// body: available
// range: 0x100342ad8-0x100342b83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100342b80 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100342ad8(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  RoundedCornerStyle RVar4;
  long lVar5;
  RoundedRectangle RVar6;
  undefined7 extraout_var;
  long unaff_x20;
  ulong uVar7;
  
  lVar5 = 0;
  FUN_100341c48();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff));
  _swift_release(*(undefined8 *)(lVar1 + 8));
  _swift_release(*(undefined8 *)(lVar1 + 0x18));
  _swift_release(*(undefined8 *)(lVar1 + 0x28));
  FUN_100047b2c(*(undefined8 *)(lVar1 + 0x30),*(undefined1 *)(lVar1 + 0x38));
  iVar2 = *(int *)(lVar5 + 0x28);
  RVar6 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  iVar3 = *(int *)(RVar6.unknown + 0x14);
  RVar4 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar4.value) + -8) + 8))
            (lVar1 + (long)iVar2 + (long)iVar3,CONCAT71(extraout_var,RVar4.value));
  _swift_deallocObject();
  return;
}

