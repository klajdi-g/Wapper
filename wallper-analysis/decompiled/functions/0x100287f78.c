// rea decompile_all
// name: FUN_100287f78
// address: 0x100287f78
// body: available
// range: 0x100287f78-0x100288013 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100287f78(ulong param_1)

{
  code *pcVar1;
  __DataStorage *this;
  RangeReference *pRVar2;
  
  if (param_1 != 0) {
    if ((long)param_1 < 0xf) {
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100288014);
        (*pcVar1)();
      }
    }
    else {
      this = Foundation::__DataStorage::typeMetadataAccessor();
      _swift_allocObject(this,*(undefined4 *)(this + 0x30),*(undefined2 *)(this + 0x34));
      Foundation::__DataStorage::init(this,param_1);
      if (0x7ffffffe < param_1) {
        pRVar2 = Foundation::Data::RangeReference::typeMetadataAccessor();
        _swift_allocObject(pRVar2,0x20,7);
        *(undefined8 *)(pRVar2 + 0x10) = 0;
        *(ulong *)(pRVar2 + 0x18) = param_1;
      }
    }
  }
  return;
}

