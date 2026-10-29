// rea decompile_all
// name: FUN_1003b2244
// address: 0x1003b2244
// body: available
// range: 0x1003b2244-0x1003b22bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003b22a4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003b2244(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)(param_2 + 0x18);
  uStack_40 = *(undefined8 *)(param_2 + 0x10);
  uStack_48 = *(undefined8 *)(param_2 + 0x18);
  local_50 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  puVar3 = &uStack_40;
  FUN_100043d74(puVar3,auStack_60);
  FUN_100026df4();
  _swift_bridgeObjectRetain(uVar2);
  (extension_SwiftUI)::SwiftUI::Label::_init
            (param_1,puVar3,uVar1,uVar2,PTR___type_metadata_for_Swift_String_100523a98,puVar3);
  return;
}

