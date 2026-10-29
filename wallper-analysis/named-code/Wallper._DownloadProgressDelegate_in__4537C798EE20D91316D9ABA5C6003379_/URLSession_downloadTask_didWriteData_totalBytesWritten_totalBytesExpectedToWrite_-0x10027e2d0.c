// rea decompile_all
// name: _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate::URLSession:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:
// address: 0x10027e2d0
// body: available
// range: 0x10027e2d0-0x10027e34f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10027e34c to 0x10041469c _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x38 bytes */

void _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate::
     URLSession_downloadTask_didWriteData_totalBytesWritten_totalBytesExpectedToWrite_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5,long_long param_6,
               long_long param_7)

{
  FUN_1002830e8(param_6,param_7);
  return;
}

