// rea decompile_all
// name: FUN_1003efa8c
// address: 0x1003efa8c
// body: available
// range: 0x1003efa8c-0x1003efbb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003efa8c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  
  ppuVar8 = &local_70;
  ppuVar9 = &local_70;
  puVar3 = &DAT_100560980;
  FUN_100002fe4(&DAT_100560980,&DAT_100436530);
  puVar4 = &DAT_100560a00;
  FUN_100002fe4(&DAT_100560a00,&DAT_100436598);
  puVar5 = &DAT_100560988;
  FUN_100002fe4(&DAT_100560988,&DAT_100436538);
  puVar6 = &DAT_100549e28;
  FUN_100002fe4(&DAT_100549e28,&DAT_100436540);
  puVar7 = puVar6;
  FUN_1003ed978();
  puVar2 = PTR___protocol_witness_table_for_Swift_String___Swift_Equatable_in_Swift_100523ab0;
  puVar1 = PTR___type_metadata_for_Swift_String_100523a98;
  puStack_68 = PTR___type_metadata_for_Swift_String_100523a98;
  puStack_58 = PTR___protocol_witness_table_for_Swift_String___Swift_Equatable_in_Swift_100523ab0;
  local_70 = puVar6;
  local_60 = puVar7;
  _swift_getOpaqueTypeConformance2(&local_70,&DAT_100437e8c,1);
  puStack_68 = puVar1;
  puStack_58 = puVar2;
  local_70 = puVar5;
  local_60 = (undefined *)ppuVar8;
  _swift_getOpaqueTypeConformance2
            (&local_70,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onChange<A_where_A1:_Swift_Equatable>(of:_A1,initial:_Swift_Bool,_:_()__>_())__>_some>>_100523150
             ,1);
  puVar5 = &DAT_100560a08;
  FUN_1000087a0(&DAT_100560a08,&DAT_100560a00,&DAT_100436598,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  local_70 = puVar3;
  puStack_68 = puVar4;
  local_60 = (undefined *)ppuVar9;
  puStack_58 = puVar5;
  _swift_getOpaqueTypeConformance2
            (&local_70,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_contextMenu<A_where_A1:_SwiftUI_View>(menuItems:_()__>_A1)__>_some>>_100522eb8
             ,1);
  return;
}

