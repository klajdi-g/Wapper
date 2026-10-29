// rea decompile_all
// name: FUN_1001056f8
// address: 0x1001056f8
// body: available
// range: 0x1001056f8-0x1001057f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001057d4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1001056f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = &DAT_1004254b8;
  _swift_getKeyPath(&DAT_1004254b8);
  _swift_bridgeObjectRetain(param_4);
  puVar2 = &DAT_100558960;
  FUN_100002f94(&DAT_100558960,&DAT_10042b290);
  uVar3 = 0;
  FUN_100105bfc(0);
  puVar4 = &DAT_100552c58;
  FUN_1000087a0(&DAT_100552c58,&DAT_100558960,&DAT_10042b290,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  FUN_1000036d0(&DAT_100552c50,FUN_100105bfc,&TargetProtocolConformanceDescriptor_100425570);
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (param_1,puVar4,puVar1,FUN_1001057f4,0,puVar2,uVar3,puVar4,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8);
  return;
}

