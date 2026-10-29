// rea decompile_all
// name: FUN_1000d718c
// address: 0x1000d718c
// body: available
// range: 0x1000d718c-0x1000d72b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d718c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  PlainTextFieldStyle PVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  
  if (DAT_100551528 != (undefined *)0x0) {
    return;
  }
  puVar2 = &DAT_100551530;
  FUN_100002fe4(&DAT_100551530,&DAT_100430f10);
  puVar3 = &DAT_10054def8;
  FUN_100002fe4(&DAT_10054def8,&DAT_10041ed30);
  PVar4 = SwiftUI::PlainTextFieldStyle::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005227c8;
  puVar5 = &DAT_100551538;
  FUN_1000087a0(&DAT_100551538,&DAT_10054def8,&DAT_10041ed30,
                PTR_SwiftUI__SwiftUI__TextField<undefined>_>SwiftUI__View_1005237a0);
  puVar6 = &DAT_100551540;
  FUN_1000036d0(&DAT_100551540,puVar1,
                PTR_SwiftUI__SwiftUI__PlainTextFieldStyle_>SwiftUI__TextFieldStyle_1005227b8);
  ppuVar7 = &local_60;
  local_60 = puVar3;
  puStack_58 = PVar4.unknown;
  local_50 = puVar5;
  puStack_48 = puVar6;
  _swift_getOpaqueTypeConformance2
            (ppuVar7,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_textFieldStyle<A_where_A1:_SwiftUI_TextFieldStyle>(A1)__>_some>>_100522f80
             ,1);
  puVar3 = &DAT_100549c88;
  FUN_1000087a0(&DAT_100549c88,&DAT_100549c90,&DAT_10041c5c0,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100522bc8
               );
  puVar5 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_70 = ppuVar7;
  puStack_68 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             puVar2,&local_70);
  DAT_100551528 = puVar5;
  return;
}

