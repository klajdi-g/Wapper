// rea decompile_all
// name: FUN_10005cd18
// address: 0x10005cd18
// body: available
// range: 0x10005cd18-0x10005ce37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005cd18(byte *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  UUID UVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar5;
  long lVar6;
  
  puVar2 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar6 = (long)puVar5 - extraout_x12;
  if ((*param_1 & 1) == 0) {
    UVar3 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar3.unknown + -8) + 0x38))(lVar6,1,1,UVar3.unknown);
    lVar4 = 0;
    FUN_10006866c();
    iVar1 = *(int *)(lVar4 + 0x24);
    FUN_1000087e4(lVar6,puVar5,&DAT_10054a9c8,&DAT_10041bbe0);
    puVar2 = &DAT_10054dd90;
    FUN_100002f94(&DAT_10054dd90,&DAT_10041ec00);
    SwiftUI::State::set_wrappedValue((State *)(param_4 + iVar1),puVar5,puVar2);
    FUN_10002a29c(lVar6,&DAT_10054a9c8,&DAT_10041bbe0);
  }
  return;
}

