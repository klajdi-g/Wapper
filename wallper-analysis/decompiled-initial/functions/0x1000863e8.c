// rea decompile_all
// name: FUN_1000863e8
// address: 0x1000863e8
// body: available
// range: 0x1000863e8-0x1000865ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000863e8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  State SVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  ulong local_58;
  
  puVar2 = &DAT_10054c040;
  FUN_100002f94(&DAT_10054c040,&DAT_100420500);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  puVar6 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar7 = (long)puVar6 - extraout_x12;
  lVar3 = 0;
  FUN_100095ec0();
  SVar4.unknown = &DAT_10054efb8;
  FUN_100002f94(&DAT_10054efb8,&DAT_100420510);
  SwiftUI::State::get_wrappedValue(SVar4);
  lVar5 = 0;
  FUN_10009e280();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar7,0,1,lVar5);
  iVar1 = *(int *)(lVar3 + 0x40);
  FUN_1000087e4(lVar7,puVar6,&DAT_10054c040,&DAT_100420500);
  puVar2 = &DAT_10054efb0;
  FUN_100002f94(&DAT_10054efb0,&DAT_100421520);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar1),puVar6,puVar2);
  FUN_10002a29c(lVar7,&DAT_10054c040,&DAT_100420500);
  iVar1 = *(int *)(lVar3 + 0x34);
  local_58 = 0;
  puVar2 = &DAT_10054ac50;
  FUN_100002f94(&DAT_10054ac50,&DAT_10041dd60);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar1),&local_58,puVar2);
  local_58 = 0xc056800000000000;
  SwiftUI::State::set_wrappedValue((State *)(param_1 + *(int *)(lVar3 + 0x38)),&local_58,puVar2);
  iVar1 = *(int *)(lVar3 + 0x30);
  local_58 = local_58 & 0xffffffffffffff00;
  puVar2 = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar1),&local_58,puVar2);
  return;
}

