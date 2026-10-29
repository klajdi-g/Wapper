// rea decompile_all
// name: FUN_1000cfa54
// address: 0x1000cfa54
// body: available
// range: 0x1000cfa54-0x1000cfad7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000cfa54(void)

{
  undefined4 uVar1;
  int iVar2;
  RoundedCornerStyle RVar3;
  RoundedRectangle RVar4;
  RoundedRectangle RVar5;
  undefined7 extraout_var;
  undefined1 auVar6 [16];
  
  RVar4 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  FUN_1000a1ff8(RVar4.unknown,&DAT_100551600);
  RVar5 = RVar4;
  FUN_100099338(RVar4.unknown,&DAT_100551600);
  iVar2 = *(int *)(RVar4.unknown + 0x14);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar3 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar3.value) + -8) + 0x68))
            (RVar5.unknown + (long)iVar2,uVar1,CONCAT71(extraout_var,RVar3.value));
  auVar6 = NEON_fmov(0x402c000000000000,8);
  *(long *)((long)RVar5.unknown + 8) = auVar6._8_8_;
  *(long *)RVar5.unknown = auVar6._0_8_;
  return;
}

