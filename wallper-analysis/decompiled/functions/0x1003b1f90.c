// rea decompile_all
// name: FUN_1003b1f90
// address: 0x1003b1f90
// body: available
// range: 0x1003b1f90-0x1003b203b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003b2024 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003b1f90(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined8 *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uStack_88 = param_2[3];
  local_90 = param_2[2];
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  local_70 = param_2[2];
  local_50 = param_2[6];
  local_a0 = &uStack_80;
  local_60 = uVar1;
  uStack_58 = uVar2;
  local_40 = local_70;
  uStack_38 = uStack_68;
  FUN_100043d74(&local_40,auStack_c0);
  FUN_100026df4();
  _swift_bridgeObjectRetain(uVar2);
  (extension_SwiftUI)::SwiftUI::Tab::_init
            (param_1,&local_40,uVar1,uVar2,FUN_1003b29c0,auStack_b0,
             PTR___type_metadata_for_SwiftUI_AnyView_1005234f8,
             PTR___type_metadata_for_Swift_String_100523a98,
             PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8);
  return;
}

