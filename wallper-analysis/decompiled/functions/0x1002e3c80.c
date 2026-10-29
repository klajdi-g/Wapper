// rea decompile_all
// name: FUN_1002e3c80
// address: 0x1002e3c80
// body: available
// range: 0x1002e3c80-0x1002e3d97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002e3d7c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002e3c80(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  
  uVar6 = *(undefined8 *)(param_2 + 0x98);
  puVar2 = &DAT_10042f638;
  local_48 = uVar6;
  _swift_getKeyPath(&DAT_10042f638);
  _swift_bridgeObjectRetain(uVar6);
  puVar3 = &DAT_10055aeb0;
  FUN_100002f94(&DAT_10055aeb0,&DAT_10042f658);
  puVar4 = &DAT_10055aeb8;
  FUN_100002f94(&DAT_10055aeb8,&DAT_10042f660);
  puVar5 = &DAT_10055aec0;
  FUN_1000087a0(&DAT_10055aec0,&DAT_10055aeb0,&DAT_10042f658,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  puVar1 = PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8;
  local_68 = PTR___type_metadata_for_SwiftUI_Text_100522e28;
  puStack_60 = PTR___type_metadata_for_Swift_String_100523a98;
  local_58 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
  puStack_50 = PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8;
  _swift_getOpaqueTypeConformance2(&local_68,&DAT_100437f4c,1);
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (param_1,puVar5,puVar2,FUN_1002e3d98,0,puVar3,puVar4,puVar5,puVar1);
  return;
}

