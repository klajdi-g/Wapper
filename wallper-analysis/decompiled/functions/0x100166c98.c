// rea decompile_all
// name: FUN_100166c98
// address: 0x100166c98
// body: available
// range: 0x100166c98-0x100166dbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100166d94 to 0x100093624 FUN_100093624 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100166c98(ID param_1,long param_2)

{
  uint uVar1;
  Data DVar2;
  ulong extraout_x1;
  ulong uVar3;
  uint uVar4;
  undefined1 auStack_58 [24];
  
  DVar2.unknown = (undefined *)objc_stub::availableData(param_1);
  uVar3 = extraout_x1;
  DVar2 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar2);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar4 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((uVar3 & 0xff000000000000) != 0) {
LAB_100166d0c:
        _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
        param_2 = param_2 + 0x10;
        _swift_weakLoadStrong();
        if (param_2 == 0) {
          FUN_100093624(DVar2.unknown,uVar3);
        }
        else {
          FUN_100166dc0(DVar2.unknown,uVar3);
          FUN_100093624(DVar2.unknown,uVar3);
          _swift_release(param_2);
        }
        return;
      }
    }
    else if ((long)(int)DVar2.unknown != (long)DVar2.unknown >> 0x20) goto LAB_100166d0c;
  }
  else if ((uVar4 == 2) && (*(long *)(DVar2.unknown + 0x10) != *(long *)(DVar2.unknown + 0x18)))
  goto LAB_100166d0c;
  objc_stub::setReadabilityHandler_(param_1,0);
  __Block_release((void *)0x0);
  FUN_100093624(DVar2.unknown,uVar3);
  return;
}

