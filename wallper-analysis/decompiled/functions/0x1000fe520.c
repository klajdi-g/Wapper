// rea decompile_all
// name: FUN_1000fe520
// address: 0x1000fe520
// body: available
// range: 0x1000fe520-0x1000fe5af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000fe550 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_1000fe520(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  _ArrayBuffer<undefined> _Var3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000fe5b0);
    (*pcVar1)();
  }
  _Var3.unknown = PTR___swiftEmptyArrayStorage_100524190;
  if (param_2 != 0) {
    uVar2 = 0;
    FUN_1000fe5b0(0);
    _Var3 = Swift::Array<undefined>::_allocateBufferUninitialized(uVar2,uVar2);
    uVar4 = (ulong)_Var3.unknown & 0xffffffffffffff8;
    *(long *)(uVar4 + 0x10) = param_2;
    *(undefined8 *)(uVar4 + 0x20) = param_1;
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      puVar5 = (undefined8 *)(uVar4 + 0x28);
      do {
        *puVar5 = param_1;
        param_2 = param_2 + -1;
        puVar5 = puVar5 + 1;
      } while (param_2 != 0);
    }
  }
  return _Var3.unknown;
}

