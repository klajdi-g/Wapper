// rea decompile_all
// name: FUN_1000b66d8
// address: 0x1000b66d8
// body: available
// range: 0x1000b66d8-0x1000b6783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000b66d8(char *param_1)

{
  ID self;
  void *aBlock;
  undefined *local_50;
  undefined8 local_48;
  code *local_40;
  undefined *puStack_38;
  code *local_30;
  undefined8 uStack_28;
  
  if (*param_1 == '\x01') {
    self = UNUserNotificationCenter::currentNotificationCenter
                     ((ID)&_OBJC_CLASS___UNUserNotificationCenter);
    local_30 = FUN_10002a200;
    uStack_28 = 0;
    local_50 = PTR___NSConcreteStackBlock_100521110;
    local_48 = 0x42000000;
    local_40 = FUN_1003f3a58;
    puStack_38 = &DAT_1005291c8;
    aBlock = __Block_copy(&local_50);
    UNUserNotificationCenter::requestAuthorizationWithOptions_completionHandler_(self,7,aBlock);
    __Block_release(aBlock);
  }
  return;
}

