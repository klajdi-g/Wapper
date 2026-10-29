// rea decompile_all
// name: FUN_10012dc78
// address: 0x10012dc78
// body: available
// range: 0x10012dc78-0x10012dd87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10012dc78(ulong *param_1,void *param_2,long param_3,char param_4,_StringObject param_5,
                  ulong param_6)

{
  code *pcVar1;
  UnsafeBufferPointer<__int8> UVar2;
  ulong uVar3;
  undefined *local_40;
  ulong uStack_38;
  
  if ((param_6 >> 0x3d & 1) == 0) {
    if ((param_6 >> 0x3c & 1) == 0) {
      if (((ulong)param_5.unknown >> 0x3c & 1) == 0) {
        UVar2 = Swift::_StringObject::get_sharedUTF8(param_5);
        if (UVar2.unknown == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10012dd88);
          (*pcVar1)();
        }
      }
      else {
        UVar2.unknown = (undefined *)((param_6 & 0xfffffffffffffff) + 0x20);
      }
      *param_1 = (ulong)UVar2.unknown;
      if ((long)param_6 < 0) {
        return;
      }
      _swift_unknownObjectRetain(param_6 & 0xfffffffffffffff);
      return;
    }
  }
  else if (((param_4 != '\x01') && (param_2 != (void *)0x0)) &&
          (uVar3 = param_6 >> 0x38 & 0xf, uVar3 < (ulong)(param_3 - (long)param_2))) {
    uStack_38 = param_6 & 0xffffffffffffff;
    local_40 = param_5.unknown;
    _memcpy(param_2,&local_40,uVar3);
    *(undefined1 *)((long)param_2 + uVar3) = 0;
    *param_1 = (ulong)param_2;
    return;
  }
  FUN_10012dd88(param_5.unknown);
  *param_1 = param_6;
  return;
}

