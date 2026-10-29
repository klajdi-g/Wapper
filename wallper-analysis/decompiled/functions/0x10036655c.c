// rea decompile_all
// name: FUN_10036655c
// address: 0x10036655c
// body: available
// range: 0x10036655c-0x100366617 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10036655c(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar5 = 0;
  FUN_10025ee04();
  puVar1 = (undefined8 *)(param_2 + *(int *)(lVar5 + 0x14));
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  lVar5 = 0;
  FUN_100386f18();
  iVar4 = *(int *)(lVar5 + 0x38);
  local_50 = uVar2;
  uStack_48 = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  puVar6 = &DAT_10054dd08;
  FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar4),&local_50,puVar6);
  iVar4 = *(int *)(lVar5 + 0x34);
  local_50 = CONCAT71(local_50._1_7_,1);
  puVar6 = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar4),&local_50,puVar6);
  return;
}

