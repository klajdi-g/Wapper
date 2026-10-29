// rea decompile_all
// name: FUN_100379b88
// address: 0x100379b88
// body: available
// range: 0x100379b88-0x100379c6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100379b88(long param_1,long param_2)

{
  State *pSVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  State SVar5;
  long lVar6;
  undefined *puVar7;
  byte local_51;
  undefined8 local_50;
  undefined *local_48;
  
  lVar4 = 0;
  FUN_10034c390();
  pSVar1 = (State *)(param_1 + *(int *)(lVar4 + 0x24));
  local_48 = pSVar1[1].unknown;
  SVar5.unknown = &DAT_10054ab50;
  local_50._0_1_ = *(undefined1 *)&pSVar1->unknown;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar5);
  if ((local_51 & 1) == 0) {
    local_50 = CONCAT71(local_50._1_7_,1);
    SwiftUI::State::set_wrappedValue(pSVar1,&local_50,SVar5.unknown);
    lVar6 = 0;
    FUN_100266c2c();
    puVar2 = (undefined8 *)(param_2 + *(int *)(lVar6 + 0x14));
    local_50 = *puVar2;
    local_48 = (undefined *)puVar2[1];
    iVar3 = *(int *)(lVar4 + 0x20);
    _swift_bridgeObjectRetain();
    puVar7 = &DAT_10054dd08;
    FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
    SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar3),&local_50,puVar7);
  }
  return;
}

