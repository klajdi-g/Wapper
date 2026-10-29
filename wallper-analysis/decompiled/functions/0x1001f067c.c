// rea decompile_all
// name: FUN_1001f067c
// address: 0x1001f067c
// body: available
// range: 0x1001f067c-0x1001f06e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f067c(long param_1)

{
  undefined *self;
  ID IVar1;
  
  FUN_100206ff0();
  _swift_allocObject();
  *(undefined8 *)(param_1 + 0x10) = 0xd000000000000027;
  *(undefined8 *)(param_1 + 0x18) = 0x80000001004e1ca0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  self = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar1 = objc_stub::init((ID)self);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(ID *)(param_1 + 0x28) = IVar1;
  DAT_100577d18 = param_1;
  return;
}

