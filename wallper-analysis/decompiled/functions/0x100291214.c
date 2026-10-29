// rea decompile_all
// name: FUN_100291214
// address: 0x100291214
// body: available
// range: 0x100291214-0x100291263 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100291214(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  mach_port_t mVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (undefined4)param_1;
  FUN_100291f14();
  _swift_allocObject();
  lVar1 = CONCAT44(uVar4,uVar2);
  mVar3 = _mach_host_self();
  *(mach_port_t *)(lVar1 + 0x10) = mVar3;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined1 *)(lVar1 + 0x28) = 1;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined1 *)(lVar1 + 0x40) = 0;
  DAT_100577dc8 = lVar1;
  return;
}

