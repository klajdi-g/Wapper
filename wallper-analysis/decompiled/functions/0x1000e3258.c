// rea decompile_all
// name: FUN_1000e3258
// address: 0x1000e3258
// body: available
// range: 0x1000e3258-0x1000e3333 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000e3258(undefined8 param_1,double param_2,undefined8 param_3,long param_4,ID param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_4 + 0x10,auStack_58,0,0);
  param_4 = param_4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (((param_4 != 0) && (IVar3 = objc_stub::window(param_5), IVar3 != 0)) &&
     (objc_stub::bounds(param_5),
     1.0 < ABS(param_2 - *(double *)
                          (param_4 +
                          _TtCV7WallperP33_1330B9F6895D4718FB619AD4724A955920ScrollOffsetObserver11Coordinator
                          ::lastReportedOffset)))) {
    *(double *)
     (param_4 +
     _TtCV7WallperP33_1330B9F6895D4718FB619AD4724A955920ScrollOffsetObserver11Coordinator::
     lastReportedOffset) = param_2;
    pcVar1 = *(code **)(param_4 +
                       _TtCV7WallperP33_1330B9F6895D4718FB619AD4724A955920ScrollOffsetObserver11Coordinator
                       ::onChange);
    uVar2 = ((undefined8 *)
            (param_4 +
            _TtCV7WallperP33_1330B9F6895D4718FB619AD4724A955920ScrollOffsetObserver11Coordinator::
            onChange))[1];
    _swift_retain(uVar2);
    (*pcVar1)(param_2);
    _swift_release(uVar2);
  }
  return;
}

