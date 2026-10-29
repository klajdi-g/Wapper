// rea decompile_all
// name: FUN_100397c60
// address: 0x100397c60
// body: available
// range: 0x100397c60-0x100397dcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100397c60(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  
  ppuVar9 = &local_90;
  ppuVar10 = &local_90;
  puVar1 = &DAT_10055e8d0;
  FUN_100002fe4(&DAT_10055e8d0,&DAT_100434150);
  puVar2 = &DAT_10055e8c8;
  FUN_100002fe4(&DAT_10055e8c8,&DAT_100434148);
  puVar3 = &DAT_100553210;
  FUN_100002fe4(&DAT_100553210,&DAT_1004365b0);
  puVar4 = &DAT_10055e8c0;
  FUN_100002fe4(&DAT_10055e8c0,&DAT_100434140);
  puVar5 = &DAT_10055e910;
  FUN_100002fe4(&DAT_10055e910,&DAT_100434180);
  puVar6 = &DAT_10055e918;
  FUN_100390270(&DAT_10055e918,&DAT_10055e8c0,&DAT_100434140,FUN_1003902e0);
  puVar7 = puVar6;
  FUN_10039047c();
  puVar8 = puVar7;
  FUN_10038fe0c();
  local_80 = PTR___type_metadata_for_Swift_String_100523a98;
  local_90 = puVar4;
  puStack_88 = puVar5;
  puStack_78 = puVar6;
  local_70 = puVar7;
  puStack_68 = puVar8;
  _swift_getOpaqueTypeConformance2
            (&local_90,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_draggable<A,B_where_A1:_SwiftUI_View,B1:_CoreTransferable_Transferable>(_:__autoclosure_()__>_B1,preview:_()__>_A1___>_some>>_100523188
             ,1);
  puVar4 = &DAT_100553208;
  FUN_1000087a0(&DAT_100553208,&DAT_100553210,&DAT_1004365b0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  local_90 = puVar2;
  puStack_88 = puVar3;
  local_80 = (undefined *)ppuVar9;
  puStack_78 = puVar4;
  _swift_getOpaqueTypeConformance2
            (&local_90,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_contextMenu<A_where_A1:_SwiftUI_View>(menuItems:_()__>_A1)__>_some>>_100522eb8
             ,1);
  local_90 = puVar1;
  puStack_88 = (undefined *)ppuVar10;
  _swift_getOpaqueTypeConformance2
            (&local_90,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
             ,1);
  return;
}

