// rea decompile_all
// name: FUN_10007bbd4
// address: 0x10007bbd4
// body: available
// range: 0x10007bbd4-0x10007bcc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010007bc94 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10007bbd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  
  lVar3 = *(long *)(param_5 + -8);
  lVar2 = param_5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar3 + 0x40));
  (**(code **)(lVar3 + 0x10))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,lVar2);
  puVar1 = &DAT_100528090;
  _swift_allocObject(&DAT_100528090,0x40,7);
  *(long *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_8;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  (extension_SwiftUI)::SwiftUI::TimelineView::_init
            (param_1,puVar1,FUN_1000936fc,puVar1,param_5,param_6,param_7,param_8);
  (**(code **)(lVar3 + 8))(param_2,param_5);
  return;
}

