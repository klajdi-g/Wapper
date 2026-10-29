// rea decompile_all
// name: FUN_1002cd2cc
// address: 0x1002cd2cc
// body: available
// range: 0x1002cd2cc-0x1002cd4e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002cd4c8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002cd2cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                  undefined8 param_5)

{
  LocalizedStringKey LVar1;
  HorizontalAlignment HVar2;
  undefined *puVar3;
  undefined *puVar4;
  String stringLiteral;
  undefined7 uStack_228;
  undefined1 local_221;
  undefined7 uStack_220;
  undefined1 uStack_219;
  undefined7 uStack_218;
  undefined1 local_211;
  undefined7 uStack_210;
  undefined1 uStack_209;
  undefined7 uStack_208;
  undefined1 local_201;
  undefined7 uStack_200;
  undefined1 uStack_1f9;
  undefined7 uStack_1f8;
  undefined1 local_1f1;
  undefined7 uStack_1f0;
  undefined1 uStack_1e9;
  undefined *local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined *local_180;
  undefined8 uStack_178;
  byte local_170;
  undefined8 local_168;
  undefined1 auStack_160 [16];
  undefined1 local_140 [64];
  undefined *local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined7 local_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 local_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 local_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 local_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_97;
  undefined8 uStack_8f;
  undefined8 local_87;
  undefined8 uStack_7f;
  undefined8 local_77;
  undefined8 uStack_6f;
  undefined8 local_67;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined8 uVar5;
  
  stringLiteral.bridgeObject = (void *)0xe700000000000000;
  stringLiteral.str = (char *)0x73657461647055;
  uVar5 = 0xe700000000000000;
  LVar1 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  local_170 = param_4 & 1;
  local_180 = (undefined *)SwiftUI::Text::_init(LVar1);
  uStack_178 = uVar5;
  local_168 = param_5;
  HVar2 = SwiftUI::HorizontalAlignment::get_leading((HorizontalAlignment)local_180);
  FUN_1002d0db0(local_140);
  uStack_209 = (undefined1)local_140._24_8_;
  uStack_208 = SUB87(local_140._24_8_,1);
  local_211 = (undefined1)local_140._16_8_;
  uStack_210 = SUB87(local_140._16_8_,1);
  uStack_219 = (undefined1)local_140._8_8_;
  uStack_218 = SUB87(local_140._8_8_,1);
  local_221 = (undefined1)local_140._0_8_;
  uStack_220 = SUB87(local_140._0_8_,1);
  uStack_1f9 = (undefined1)local_140._40_8_;
  uStack_1f8 = SUB87(local_140._40_8_,1);
  local_201 = (undefined1)local_140._32_8_;
  uStack_200 = SUB87(local_140._32_8_,1);
  uStack_1e9 = (undefined1)local_140._56_8_;
  local_1f1 = (undefined1)local_140._48_8_;
  uStack_1f0 = SUB87(local_140._48_8_,1);
  uStack_7f = CONCAT17(uStack_209,uStack_210);
  local_87 = CONCAT17(local_211,uStack_218);
  uStack_d7 = uStack_210;
  uStack_d0 = uStack_209;
  local_df = uStack_218;
  uStack_d8 = local_211;
  uStack_6f = CONCAT17(uStack_1f9,uStack_200);
  local_77 = CONCAT17(local_201,uStack_208);
  uStack_c7 = uStack_200;
  uStack_c0 = uStack_1f9;
  local_cf = uStack_208;
  uStack_c8 = local_201;
  local_67 = CONCAT17(local_1f1,uStack_1f8);
  uStack_b7 = uStack_1f0;
  local_bf = uStack_1f8;
  uStack_b8 = local_1f1;
  uStack_8f = CONCAT17(uStack_219,uStack_220);
  local_97 = CONCAT17(local_221,uStack_228);
  uStack_e7 = uStack_220;
  uStack_e0 = uStack_219;
  local_ef = uStack_228;
  uStack_e8 = local_221;
  uStack_5f = uStack_1f0;
  uStack_f8 = 0x4010000000000000;
  local_f0 = 0;
  uStack_af = SUB87(local_140._56_8_,1);
  local_a0 = 0x4010000000000000;
  local_98 = 0;
  puVar4 = &DAT_10055a8e8;
  local_100 = HVar2.unknown;
  uStack_b0 = uStack_1e9;
  puStack_a8 = HVar2.unknown;
  uStack_58 = uStack_1e9;
  uStack_57 = uStack_af;
  FUN_1000087e4(&local_100,&local_1e0,&DAT_10055a8e8,&DAT_10042eaa0);
  FUN_10002a29c(&puStack_a8,&DAT_10055a8e8,&DAT_10042eaa0);
  uStack_1b8 = CONCAT71(uStack_d7,uStack_d8);
  local_1c0 = CONCAT71(local_df,uStack_e0);
  uStack_1a8 = CONCAT71(uStack_c7,uStack_c8);
  uStack_1b0 = CONCAT71(local_cf,uStack_d0);
  uStack_198 = CONCAT71(uStack_b7,uStack_b8);
  local_1a0 = CONCAT71(local_bf,uStack_c0);
  local_190 = CONCAT71(uStack_af,uStack_b0);
  uStack_1c8 = CONCAT71(uStack_e7,uStack_e8);
  uStack_1d0 = CONCAT71(local_ef,local_f0);
  uStack_1d8 = uStack_f8;
  local_1e0 = local_100;
  puVar3 = &DAT_10055a8f0;
  FUN_100002f94(&DAT_10055a8f0,&DAT_10042eaa8);
  FUN_100002f94(&DAT_10055a8e8,&DAT_10042eaa0);
  FUN_1000087a0(&DAT_10055a8f8,&DAT_10055a8f0,&DAT_10042eaa8,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  FUN_1000087a0(&DAT_10055a900,&DAT_10055a8e8,&DAT_10042eaa0,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_1005234c0);
  (extension_SwiftUI)::SwiftUI::Section::_init
            (param_1,puVar4,&local_1e0,FUN_1002d6a20,auStack_160,
             PTR___type_metadata_for_SwiftUI_Text_100522e28,puVar3,puVar4,
             PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18);
  return;
}

