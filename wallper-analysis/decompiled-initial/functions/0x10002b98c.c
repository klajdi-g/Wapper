// rea decompile_all
// name: FUN_10002b98c
// address: 0x10002b98c
// body: available
// range: 0x10002b98c-0x10002bb2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10002b98c(void)

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
  undefined1 *puVar11;
  undefined **ppuVar12;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  
  ppuVar9 = &local_80;
  ppuVar10 = &local_80;
  ppuVar12 = &local_80;
  puVar1 = &DAT_10054b6d8;
  FUN_100002fe4(&DAT_10054b6d8,&DAT_10041cbb0);
  puVar2 = &DAT_10054b730;
  FUN_100002fe4(&DAT_10054b730,&DAT_10041cc08);
  puVar3 = &DAT_100549bf0;
  FUN_100002fe4(&DAT_100549bf0,&DAT_100419db8);
  puVar4 = &DAT_100549bf8;
  FUN_100002fe4(&DAT_100549bf8,&DAT_100419dc0);
  puVar5 = &DAT_100549c00;
  FUN_100002fe4(&DAT_100549c00,&DAT_10041cbc0);
  puVar6 = &DAT_100549c08;
  FUN_100002fe4(&DAT_100549c08,&DAT_100419dd0);
  puVar7 = &DAT_100549c10;
  FUN_1000087a0(&DAT_100549c10,&DAT_100549c08,&DAT_100419dd0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar8 = puVar7;
  FUN_100003038();
  puStack_78 = &DAT_100525378;
  local_80 = puVar6;
  local_70 = puVar7;
  puStack_68 = puVar8;
  _swift_getOpaqueTypeConformance2
            (&local_80,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100522ea8
             ,1);
  local_80 = puVar5;
  puStack_78 = (undefined *)ppuVar9;
  _swift_getOpaqueTypeConformance2
            (&local_80,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
             ,1);
  puVar11 = (undefined1 *)ppuVar10;
  FUN_100003078();
  local_80 = puVar3;
  puStack_78 = puVar4;
  local_70 = (undefined *)ppuVar10;
  puStack_68 = puVar11;
  _swift_getOpaqueTypeConformance2(&local_80,&DAT_100437e20,1);
  puVar3 = &DAT_10054b738;
  FUN_1000087a0(&DAT_10054b738,&DAT_10054b730,&DAT_10041cc08,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  local_80 = puVar1;
  puStack_78 = puVar2;
  local_70 = (undefined *)ppuVar12;
  puStack_68 = puVar3;
  _swift_getOpaqueTypeConformance2
            (&local_80,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_contextMenu<A_where_A1:_SwiftUI_View>(menuItems:_()__>_A1)__>_some>>_100522eb8
             ,1);
  return;
}

