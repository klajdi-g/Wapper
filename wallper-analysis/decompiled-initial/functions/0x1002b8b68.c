// rea decompile_all
// name: FUN_1002b8b68
// address: 0x1002b8b68
// body: available
// range: 0x1002b8b68-0x1002b8c8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_1002b8b68(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *unaff_x20;
  undefined1 local_32;
  byte local_31;
  
  lVar4 = *unaff_x20;
  if (lVar4 != 0) {
    puVar2 = &DAT_10042e2e8;
    _swift_getKeyPath(&DAT_10042e2e8);
    puVar3 = &DAT_10042e310;
    _swift_getKeyPath(&DAT_10042e310);
    _swift_retain(lVar4);
    Combine::Published::_get_subscript(&local_31);
    _swift_release(puVar2);
    _swift_release(puVar3);
    _swift_release(lVar4);
    if ((local_31 & 1) == 0) {
      local_32 = 1;
    }
    else {
      puVar2 = &DAT_10042e330;
      _swift_getKeyPath(&DAT_10042e330);
      puVar3 = &DAT_10042e358;
      _swift_getKeyPath(&DAT_10042e358);
      _swift_retain(lVar4);
      Combine::Published::_get_subscript(&local_32);
      _swift_release(puVar2);
      _swift_release(puVar3);
      _swift_release(lVar4);
    }
    return local_32;
  }
  FUN_10013b98c(0);
  FUN_1000036d0(&DAT_100553150,FUN_10013b98c,&TargetProtocolConformanceDescriptor_1004274b8);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002b8c90);
  (*pcVar1)();
}

