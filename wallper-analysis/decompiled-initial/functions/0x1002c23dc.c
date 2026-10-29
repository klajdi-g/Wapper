// rea decompile_all
// name: FUN_1002c23dc
// address: 0x1002c23dc
// body: available
// range: 0x1002c23dc-0x1002c24eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002c24d4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002c23dc(undefined8 param_1,long param_2)

{
  char *pcVar1;
  LocalizedStringKey LVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *pvVar5;
  long unaff_x20;
  String stringLiteral;
  undefined1 auStack_50 [16];
  
  if (*(char *)(unaff_x20 + *(int *)(param_2 + 0x14)) == '\x01') {
    pcVar1 = (char *)0x63614d2073696854;
    pvVar5 = (void *)0xe800000000000000;
  }
  else {
    pvVar5 = (void *)0x80000001004e4040;
    pcVar1 = (char *)0xd000000000000010;
  }
  stringLiteral.bridgeObject = pvVar5;
  stringLiteral.str = pcVar1;
  LVar2 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  SwiftUI::Text::_init(LVar2);
  puVar3 = &DAT_10055a4e0;
  FUN_100002f94(&DAT_10055a4e0,&DAT_10042e3f0);
  puVar4 = &DAT_10055a4e8;
  FUN_1000087a0(&DAT_10055a4e8,&DAT_10055a4e0,&DAT_10042e3f0,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  (extension_SwiftUI)::SwiftUI::Section::_init
            (param_1,puVar4,FUN_1002c6bac,auStack_50,PTR___type_metadata_for_SwiftUI_Text_100522e28,
             puVar3,
             PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18,
             puVar4);
  return;
}

