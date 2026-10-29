// rea decompile_all
// name: FUN_10039b21c
// address: 0x10039b21c
// body: available
// range: 0x10039b21c-0x10039b2bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10039b21c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  ppuVar5 = &local_50;
  puVar1 = &DAT_10055f220;
  FUN_100002fe4(&DAT_10055f220,&DAT_100434988);
  puVar2 = &DAT_100549ce8;
  FUN_100002fe4(&DAT_100549ce8,&DAT_100419e30);
  puVar3 = puVar2;
  FUN_100003530();
  puVar4 = puVar3;
  FUN_100003570();
  local_50 = &DAT_10053bab0;
  puStack_48 = puVar2;
  local_40 = puVar3;
  puStack_38 = puVar4;
  _swift_getOpaqueTypeConformance2(&local_50,&DAT_100437e20,1);
  local_50 = puVar1;
  puStack_48 = (undefined *)ppuVar5;
  _swift_getOpaqueTypeConformance2
            (&local_50,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
             ,1);
  return;
}

