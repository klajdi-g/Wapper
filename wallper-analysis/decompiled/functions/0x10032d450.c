// rea decompile_all
// name: FUN_10032d450
// address: 0x10032d450
// body: available
// range: 0x10032d450-0x10032d5f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10032d450(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  long local_40;
  char local_38;
  char local_32;
  byte local_31;
  
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if (lVar4 == 0) {
    FUN_10014e37c(0);
    FUN_1000036d0(&DAT_100553148,FUN_10014e37c,&TargetProtocolConformanceDescriptor_100427f04);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10032d5f8);
    (*pcVar1)();
  }
  puVar2 = &DAT_100431b60;
  _swift_getKeyPath(&DAT_100431b60);
  puVar3 = &DAT_100431b88;
  _swift_getKeyPath(&DAT_100431b88);
  _swift_retain_n(lVar4,2);
  Combine::Published::_get_subscript(&local_31);
  _swift_release(puVar2);
  _swift_release(puVar3);
  if ((local_31 & 1) == 0) {
    puVar2 = &DAT_100431bc8;
    _swift_getKeyPath(&DAT_100431bc8);
    puVar3 = &DAT_100431bf0;
    _swift_getKeyPath(&DAT_100431bf0);
    Combine::Published::_get_subscript(&local_32,lVar4,puVar2,puVar3);
    _swift_release(puVar2);
    _swift_release(puVar3);
    _swift_release(lVar4);
    if (local_32 == '\x01') {
      puVar2 = &DAT_100431ce8;
      _swift_getKeyPath(&DAT_100431ce8);
      puVar3 = &DAT_100431d10;
      _swift_getKeyPath(&DAT_100431d10);
      Combine::Published::_get_subscript(&local_40,lVar4,puVar2,puVar3);
      _swift_release(puVar2);
      _swift_release(puVar3);
      _swift_release(lVar4);
      if (local_38 == '\x01') {
        return true;
      }
      return 0 < local_40;
    }
    _swift_release(lVar4);
  }
  else {
    _swift_release_n(lVar4,2);
  }
  return true;
}

