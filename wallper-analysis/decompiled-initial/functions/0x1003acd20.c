// rea decompile_all
// name: FUN_1003acd20
// address: 0x1003acd20
// body: available
// range: 0x1003acd20-0x1003ace57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003acd20(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  NavigationPath NVar3;
  long lVar4;
  State SVar5;
  UUID UVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  
  NVar3 = SwiftUI::NavigationPath::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(NVar3.unknown + -8) + 0x40));
  lVar4 = 0;
  FUN_1003afcec();
  iVar1 = *(int *)(lVar4 + 0x34);
  SVar5.unknown = &DAT_10055f708;
  FUN_100002f94(&DAT_10055f708,&DAT_100434ee0);
  SwiftUI::State::get_wrappedValue(SVar5);
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100520bd8;
  puVar7 = &DAT_100558108;
  FUN_1000036d0(&DAT_100558108,PTR_typeMetadataAccessor_100520bd8,
                PTR_Foundation__Foundation__UUID_>Swift__Decodable_100520c00);
  puVar8 = &DAT_100558168;
  FUN_1000036d0(&DAT_100558168,puVar2,PTR_Foundation__Foundation__UUID_>Swift__Encodable_100520be8);
  puVar9 = &DAT_10054a128;
  FUN_1000036d0(&DAT_10054a128,puVar2,PTR_Foundation__Foundation__UUID_>Swift__Hashable_100520bf0);
  SwiftUI::NavigationPath::_append(param_2,UVar6.unknown,puVar7,puVar8,puVar9);
  SwiftUI::State::set_wrappedValue
            ((State *)(param_1 + iVar1),
             &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),SVar5.unknown);
  return;
}

