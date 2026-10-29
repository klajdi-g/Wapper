// rea decompile_all
// name: FUN_10006b934
// address: 0x10006b934
// body: available
// range: 0x10006b934-0x10006b9db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006b934(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  
  puVar1 = &DAT_10054de58;
  FUN_100002fe4(&DAT_10054de58,&DAT_10041ecc8);
  puVar2 = &DAT_10054de90;
  FUN_100002fe4(&DAT_10054de90,&DAT_10041ed08);
  puVar3 = puVar2;
  FUN_100068994();
  puVar4 = &DAT_10054dee0;
  FUN_1000087a0(&DAT_10054dee0,&DAT_10054de90,&DAT_10041ed08,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  local_60 = puVar1;
  puStack_58 = puVar2;
  local_50 = puVar3;
  puStack_48 = puVar4;
  _swift_getOpaqueTypeConformance2
            (&local_60,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_alert<A_where_A1:_SwiftUI_View>(_:_SwiftUI_LocalizedStringKey,isPresented:_SwiftUI_Binding<Swift_Bool>,actions:_()__>_A1)__>_some>>_100523090
             ,1);
  return;
}

