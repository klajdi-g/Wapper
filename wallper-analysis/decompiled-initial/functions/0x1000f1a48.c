// rea decompile_all
// name: FUN_1000f1a48
// address: 0x1000f1a48
// body: available
// range: 0x1000f1a48-0x1000f1b37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000f1a48(long param_1,long param_2)

{
  State *pSVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  State SVar5;
  code *pcVar6;
  byte local_51;
  long local_50;
  undefined *local_48;
  
  lVar3 = 0;
  FUN_1000fa84c();
  iVar2 = *(int *)(lVar3 + 0x18);
  puVar4 = &DAT_10054eed8;
  local_50 = param_2;
  FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar2),&local_50,puVar4);
  if (param_2 != 0) {
    pSVar1 = (State *)(param_1 + *(int *)(lVar3 + 0x1c));
    local_48 = pSVar1[1].unknown;
    SVar5.unknown = &DAT_10054ab50;
    local_50._0_1_ = *(undefined1 *)&pSVar1->unknown;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::get_wrappedValue(SVar5);
    if ((local_51 & 1) == 0) {
      local_50 = CONCAT71(local_50._1_7_,1);
      SwiftUI::State::set_wrappedValue(pSVar1,&local_50,SVar5.unknown);
      pcVar6 = *(code **)(param_1 + *(int *)(lVar3 + 0x14));
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)();
      }
    }
  }
  return;
}

