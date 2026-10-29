// rea decompile_all
// name: FUN_1003b1eb8
// address: 0x1003b1eb8
// body: available
// range: 0x1003b1eb8-0x1003b1f8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003b1f74 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003b1eb8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_1003b2498();
  puVar1 = &DAT_10055fbd0;
  FUN_100002f94(&DAT_10055fbd0,&DAT_100435590);
  puVar2 = &DAT_10055fbc0;
  FUN_100002f94(&DAT_10055fbc0,&DAT_100435588);
  puVar3 = &DAT_10055fbd8;
  FUN_1000087a0(&DAT_10055fbd8,&DAT_10055fbd0,&DAT_100435590,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  FUN_1003b2414();
  FUN_1003b2980();
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (param_1,puVar3,FUN_1003b1f90,0,puVar1,PTR___type_metadata_for_Swift_String_100523a98,
             puVar2,PTR___type_metadata_for_Swift_Never_100524058,puVar3);
  return;
}

