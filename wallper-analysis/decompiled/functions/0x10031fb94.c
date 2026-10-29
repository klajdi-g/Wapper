// rea decompile_all
// name: FUN_10031fb94
// address: 0x10031fb94
// body: available
// range: 0x10031fb94-0x10031fd07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10031fb94(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  
  ppuVar8 = &local_70;
  ppuVar10 = &local_70;
  ppuVar11 = &local_70;
  puVar2 = &DAT_10055bca8;
  FUN_100002fe4(&DAT_10055bca8,&BYTE_1004309b8);
  puVar3 = &DAT_10055bca0;
  FUN_100002fe4(&DAT_10055bca0,&BYTE_1004309b0);
  puVar4 = &DAT_10055bc98;
  FUN_100002fe4(&DAT_10055bc98,&BYTE_1004309a8);
  puVar5 = &DAT_10055bd10;
  FUN_100002fe4(&DAT_10055bd10,&DAT_100430a40);
  puVar6 = &DAT_10055bc90;
  FUN_100002fe4(&DAT_10055bc90,&BYTE_1004309a0);
  puVar7 = &DAT_10055bd00;
  FUN_1000087a0(&DAT_10055bd00,&DAT_10055bc90,&BYTE_1004309a0,
                PTR_SwiftUI__SwiftUI__SubscriptionView<undefined,undefined>_>SwiftUI__View_1005223c8
               );
  puVar1 = 
  PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onChange<A_where_A1:_Swift_Equatable>(of:_A1,initial:_Swift_Bool,_:_()__>_())__>_some>>_100523150
  ;
  puStack_68 = PTR___type_metadata_for_Swift_String_100523a98;
  puStack_58 = PTR___protocol_witness_table_for_Swift_String___Swift_Equatable_in_Swift_100523ab0;
  local_70 = puVar6;
  local_60 = puVar7;
  _swift_getOpaqueTypeConformance2
            (&local_70,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onChange<A_where_A1:_Swift_Equatable>(of:_A1,initial:_Swift_Bool,_:_()__>_())__>_some>>_100523150
             ,1);
  puVar9 = (undefined1 *)ppuVar8;
  FUN_100319964();
  local_70 = puVar4;
  puStack_68 = puVar5;
  local_60 = (undefined *)ppuVar8;
  puStack_58 = puVar9;
  _swift_getOpaqueTypeConformance2(&local_70,puVar1,1);
  puVar9 = (undefined1 *)ppuVar10;
  FUN_100319a14();
  puStack_68 = &DAT_10053f2a0;
  local_70 = puVar3;
  local_60 = (undefined *)ppuVar10;
  puStack_58 = puVar9;
  _swift_getOpaqueTypeConformance2(&local_70,puVar1,1);
  puVar9 = (undefined1 *)ppuVar11;
  FUN_100319a54();
  puStack_68 = &DAT_10053f210;
  local_70 = puVar2;
  local_60 = (undefined *)ppuVar11;
  puStack_58 = puVar9;
  _swift_getOpaqueTypeConformance2(&local_70,puVar1,1);
  return;
}

