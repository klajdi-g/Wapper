// rea decompile_all
// name: FUN_10032119c
// address: 0x10032119c
// body: available
// range: 0x10032119c-0x10032121b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10032119c(void)

{
  undefined8 *puVar1;
  NSViewRepresentableContext NVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_38;
  
  NVar2.unknown = &DAT_10055c928;
  FUN_100002f94(&DAT_10055c928,&DAT_100431a48);
  SwiftUI::NSViewRepresentableContext::_get_coordinator(NVar2);
  puVar1 = (undefined8 *)
           (local_38 +
           _TtCV7WallperP33_10B5BC8A445113D7DE69555D7FD5BD6820ScrollOffsetObserver11Coordinator::
           onChange);
  uVar4 = puVar1[1];
  uVar3 = unaff_x20[1];
  uVar5 = *unaff_x20;
  puVar1[1] = unaff_x20[1];
  *puVar1 = uVar5;
  _swift_retain(uVar3);
  _swift_release(uVar4);
  return;
}

