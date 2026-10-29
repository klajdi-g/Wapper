// rea decompile_all
// name: FUN_10039aee8
// address: 0x10039aee8
// body: available
// range: 0x10039aee8-0x10039b05f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10039aee8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  
  ppuVar10 = &local_90;
  ppuVar11 = &local_90;
  puVar2 = &DAT_10055efd0;
  FUN_100002fe4(&DAT_10055efd0,&DAT_1004347c8);
  puVar3 = &DAT_10055f058;
  FUN_100002fe4(&DAT_10055f058,&DAT_100434810);
  puVar4 = &DAT_10055efc8;
  FUN_100002fe4(&DAT_10055efc8,&DAT_1004347c0);
  puVar5 = &DAT_10055efc0;
  FUN_100002fe4(&DAT_10055efc0,&DAT_1004347b8);
  puVar6 = &DAT_10055e910;
  FUN_100002fe4(&DAT_10055e910,&DAT_100434180);
  puVar7 = &DAT_10055f010;
  FUN_100390270(&DAT_10055f010,&DAT_10055efc0,&DAT_1004347b8,FUN_100399d10);
  puVar8 = puVar7;
  FUN_10039047c();
  puVar9 = puVar8;
  FUN_10038fe0c();
  puVar1 = PTR___type_metadata_for_Swift_String_100523a98;
  local_80 = PTR___type_metadata_for_Swift_String_100523a98;
  local_90 = puVar5;
  puStack_88 = puVar6;
  puStack_78 = puVar7;
  local_70 = puVar8;
  puStack_68 = puVar9;
  _swift_getOpaqueTypeConformance2
            (&local_90,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_draggable<A,B_where_A1:_SwiftUI_View,B1:_CoreTransferable_Transferable>(_:__autoclosure_()__>_B1,preview:_()__>_A1___>_some>>_100523188
             ,1);
  puStack_88 = puVar1;
  local_90 = puVar4;
  local_80 = (undefined *)ppuVar10;
  puStack_78 = puVar9;
  _swift_getOpaqueTypeConformance2
            (&local_90,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_dropDestination<A_where_A1:_CoreTransferable_Transferable>(for:_A1_Type,action:_([A1],__C_CGPoint)__>_Swift_Bool,isTargeted:_(Swift_Bool)__>______>_some>>_100522f90
             ,1);
  puVar4 = &DAT_10055f060;
  FUN_1000087a0(&DAT_10055f060,&DAT_10055f058,&DAT_100434810,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  local_90 = puVar2;
  puStack_88 = puVar3;
  local_80 = (undefined *)ppuVar11;
  puStack_78 = puVar4;
  _swift_getOpaqueTypeConformance2
            (&local_90,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_contextMenu<A_where_A1:_SwiftUI_View>(menuItems:_()__>_A1)__>_some>>_100522eb8
             ,1);
  return;
}

