// rea decompile_all
// name: FUN_100064aec
// address: 0x100064aec
// body: available
// range: 0x100064aec-0x100064c63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100064c60 to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100064aec(undefined8 *param_1,undefined8 param_2,undefined *param_3,uint param_4,
                  undefined8 param_5)

{
  NSString *pNVar1;
  ID IVar2;
  VerticalAlignment VVar3;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = NSFont::fontWithName_size_((ID)&_OBJC_CLASS___NSFont,0x4030000000000000,pNVar1);
  if (IVar2 == 0) {
    IVar2 = NSFont::systemFontOfSize_((ID)&_OBJC_CLASS___NSFont,0x4030000000000000);
  }
  VVar3.unknown = param_3;
  _swift_bridgeObjectRetain();
  VVar3 = SwiftUI::VerticalAlignment::get_center(VVar3);
  FUN_100064c64(&local_88,param_4 & 1,param_5);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = IVar2;
  param_1[4] = 0x4034000000000000;
  param_1[3] = 0x4028000000000000;
  param_1[6] = 0x404e000000000000;
  param_1[5] = 0x3ff0000000000000;
  param_1[7] = VVar3.unknown;
  param_1[8] = 0x4014000000000000;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = local_88;
  param_1[0xb] = uStack_80;
  param_1[0xc] = local_78;
  param_1[0xd] = uStack_70;
  param_1[0xe] = local_68;
  _swift_retain(local_88);
  _swift_bridgeObjectRetain(param_3);
  FUN_10006953c(uStack_80,local_78,uStack_70,local_68);
  _swift_release(local_88);
  FUN_100069568(uStack_80,local_78,uStack_70,local_68);
  _swift_bridgeObjectRelease(param_3);
  return;
}

