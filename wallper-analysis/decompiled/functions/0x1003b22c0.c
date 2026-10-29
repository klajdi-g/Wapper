// rea decompile_all
// name: thunk_FUN_1003b203c
// address: 0x1003b22c0
// body: available
// range: 0x1003b22c0-0x1003b22c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003b215c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void thunk_FUN_1003b203c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  FUN_1003b2498();
  puVar1 = &DAT_10055fbd0;
  uStack_58 = param_2;
  FUN_100002f94(&DAT_10055fbd0,&DAT_100435590);
  puVar2 = &DAT_10055fc18;
  FUN_100002f94(&DAT_10055fc18,&DAT_1004355a0);
  puVar3 = &DAT_10055fbd8;
  FUN_1000087a0(&DAT_10055fbd8,&DAT_10055fbd0,&DAT_100435590,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  puVar4 = &DAT_10054b570;
  FUN_100002fe4(&DAT_10054b570,&DAT_100433140);
  puVar5 = &DAT_10054b568;
  FUN_1000087a0(&DAT_10054b568,&DAT_10054b570,&DAT_100433140,
                PTR_SwiftUI__SwiftUI__Label<undefined,undefined>_>SwiftUI__View_100523358);
  puStack_78 = PTR___type_metadata_for_SwiftUI_AnyView_1005234f8;
  puStack_68 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8;
  ppuVar6 = &puStack_78;
  puStack_70 = puVar4;
  puStack_60 = puVar5;
  _swift_getOpaqueTypeConformance2
            (ppuVar6,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_tabItem<A_where_A1:_SwiftUI_View>(()__>_A1)__>_some>>_100523118
             ,1);
  FUN_1003b2980();
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (param_1,ppuVar6,FUN_1003b217c,0,puVar1,PTR___type_metadata_for_Swift_String_100523a98,
             puVar2,puVar3,ppuVar6);
  return;
}

