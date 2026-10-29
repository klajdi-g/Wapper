// rea decompile_all
// name: FUN_10011caf8
// address: 0x10011caf8
// body: available
// range: 0x10011caf8-0x10011cb9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10011caf8(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  RoundedCornerStyle RVar4;
  undefined *puVar5;
  RoundedRectangle RVar6;
  undefined7 extraout_var;
  undefined1 auVar7 [16];
  
  FUN_10011cb9c();
  puVar5 = &DAT_1005534b0;
  FUN_100002f94(&DAT_1005534b0,&DAT_100426540);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar5 + 0x24));
  RVar6 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  iVar3 = *(int *)(RVar6.unknown + 0x14);
  uVar2 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar4 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar4.value) + -8) + 0x68))
            ((long)puVar1 + (long)iVar3,uVar2,CONCAT71(extraout_var,RVar4.value));
  auVar7 = NEON_fmov(0x4020000000000000,8);
  puVar1[1] = auVar7._8_8_;
  *puVar1 = auVar7._0_8_;
  puVar5 = &DAT_10054ad40;
  FUN_100002f94(&DAT_10054ad40,&DAT_100430820);
  *(undefined1 *)((long)puVar1 + (long)*(int *)(puVar5 + 0x24)) = 0;
  return;
}

