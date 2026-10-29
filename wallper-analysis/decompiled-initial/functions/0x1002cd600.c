// rea decompile_all
// name: FUN_1002cd600
// address: 0x1002cd600
// body: available
// range: 0x1002cd600-0x1002cd70b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002cd600(void)

{
  ID IVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 local_41;
  State local_40;
  undefined8 uStack_38;
  
  IVar1 = SMAppService::mainAppService((ID)&_OBJC_CLASS___SMAppService);
  IVar1 = SMAppService::status(IVar1);
  local_41 = IVar1 == 2;
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x60);
  local_40.unknown = *(undefined **)(unaff_x20 + 0x58);
  puVar2 = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::set_wrappedValue(&local_40,&local_41,puVar2);
  if (IVar1 == 0 || IVar1 == 3) {
    SwiftUI::AppStorage::get_wrappedValue((AppStorage)*(undefined **)(unaff_x20 + 0x20));
    if ((char)local_40.unknown != '\x01') {
      return;
    }
    local_40.unknown = local_40.unknown & 0xffffffffffffff00;
  }
  else {
    if (IVar1 != 1) {
      return;
    }
    SwiftUI::AppStorage::get_wrappedValue((AppStorage)*(undefined **)(unaff_x20 + 0x20));
    if (((ulong)local_40.unknown & 1) != 0) {
      return;
    }
    local_40.unknown._0_1_ = 1;
  }
  SwiftUI::AppStorage::set_wrappedValue();
  return;
}

