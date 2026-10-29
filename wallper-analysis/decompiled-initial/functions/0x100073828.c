// rea decompile_all
// name: FUN_100073828
// address: 0x100073828
// body: available
// range: 0x100073828-0x100073bdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100073a80) */

void FUN_100073828(undefined8 *param_1,char *param_2,void *param_3)

{
  AttributedString AVar1;
  char *pcVar2;
  void *pvVar3;
  FailurePolicy FVar4;
  InterpretedSyntax IVar5;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  MarkdownParsingOptions MVar6;
  AttributedString AVar7;
  URL UVar8;
  AttributedString AVar9;
  AttributedString AVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined *puVar11;
  long extraout_x12;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  String markdown;
  undefined1 auStack_f0 [8];
  AttributedString local_e8;
  long local_e0;
  char *local_d8;
  undefined1 *local_d0;
  void *local_c8;
  undefined8 *local_c0;
  undefined *local_b8;
  long lStack_b0;
  ulong local_a8;
  undefined *puStack_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  puVar11 = &DAT_100553d90;
  local_d8 = param_2;
  local_c8 = param_3;
  local_c0 = param_1;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_d0 = auStack_f0 + -extraout_x8;
  FVar4 = Foundation::AttributedString::MarkdownParsingOptions::FailurePolicy::typeMetadataAccessor
                    ();
  lVar12 = *(long *)(CONCAT71(extraout_var,FVar4.value) + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  lVar17 = (long)(auStack_f0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  IVar5 = Foundation::AttributedString::MarkdownParsingOptions::InterpretedSyntax::
          typeMetadataAccessor();
  lVar13 = *(long *)(CONCAT71(extraout_var_00,IVar5.value) + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  lVar14 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  MVar6 = Foundation::AttributedString::MarkdownParsingOptions::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(MVar6.unknown + -8) + 0x40));
  MVar6.unknown = (undefined *)(lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  puVar11 = &DAT_10054e998;
  FUN_100002f94(&DAT_10054e998,&DAT_10041fc10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)MVar6.unknown - extraout_x8_03;
  AVar7 = Foundation::AttributedString::typeMetadataAccessor();
  lVar16 = *(long *)(AVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  puVar11 = (undefined *)(lVar15 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  local_e8.unknown = puVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_e0 = (long)puVar11 - extraout_x12;
  (**(code **)(lVar13 + 0x68))
            (lVar14,*(undefined4 *)
                     PTR___enum_case_for_Foundation_AttributedString_MarkdownParsingOptions_InterpretedSyntax_inlineOnlyPreservingWhitespace_Foundation_AttributedString_MarkdownParsingOptions_InterpretedSyntax_Type___>_Foundation_AttributedString_MarkdownParsingOptions_InterpretedSyntax_1005208b8
             ,CONCAT71(extraout_var_00,IVar5.value));
  pcVar2 = local_d8;
  (**(code **)(lVar12 + 0x68))
            (lVar17,*(undefined4 *)
                     PTR___enum_case_for_Foundation_AttributedString_MarkdownParsingOptions_FailurePolicy_throwError_Foundation_AttributedString_MarkdownParsingOptions_FailurePolicy_Type___>_Foundation_AttributedString_MarkdownParsingOptions_FailurePolicy_1005208a8
             ,CONCAT71(extraout_var,FVar4.value));
  pvVar3 = local_c8;
  _swift_bridgeObjectRetain(local_c8);
  Foundation::AttributedString::MarkdownParsingOptions::_init
            (false,(InterpretedSyntax)(__int8)lVar14,(FailurePolicy)(__int8)lVar17);
  UVar8 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar8.unknown + -8) + 0x38))(local_d0,1,1,UVar8.unknown);
  markdown.bridgeObject = pvVar3;
  markdown.str = pcVar2;
  Foundation::AttributedString::_init(markdown,MVar6);
  AVar10 = AVar7;
  (**(code **)(lVar16 + 0x38))(lVar15,0,1);
  lVar12 = local_e0;
  (**(code **)(lVar16 + 0x20))(local_e0,lVar15,AVar7.unknown);
  AVar1.unknown = local_e8.unknown;
  lVar13 = lVar12;
  AVar9 = AVar7;
  (**(code **)(lVar16 + 0x10))(local_e8.unknown);
  local_b8 = (undefined *)SwiftUI::Text::init(AVar1);
  local_a8 = (ulong)AVar9.unknown & 0xff;
  local_98 = 0;
  lStack_b0 = lVar13;
  puStack_a0 = AVar10.unknown;
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init
            ((Storage)((char)&stack0xfffffffffffffff0 + 0x58));
  (**(code **)(lVar16 + 8))(lVar12,AVar7.unknown);
  local_c0[1] = uStack_88;
  *local_c0 = local_90;
  local_c0[3] = uStack_78;
  local_c0[2] = uStack_80;
  *(undefined1 *)(local_c0 + 4) = local_70;
  return;
}

