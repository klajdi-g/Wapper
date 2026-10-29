// rea decompile_all
// name: FUN_100061384
// address: 0x100061384
// body: available
// range: 0x100061384-0x100061567 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100061384(long param_1)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  UUID UVar6;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar7;
  long extraout_x12;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  
  puVar3 = &DAT_10054ac38;
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffffc0 + -extraout_x8;
  puVar3 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar8 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = lVar8 - extraout_x12;
  FUN_10005f68c(puVar10);
  lVar4 = 0;
  FUN_10025ee04();
  puVar5 = puVar10;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(puVar10,1,lVar4);
  bVar2 = (int)puVar5 != 1;
  if (bVar2) {
    UVar6 = Foundation::UUID::typeMetadataAccessor();
    lVar4 = *(long *)(UVar6.unknown + -8);
    (**(code **)(lVar4 + 0x10))(lVar9,puVar10,UVar6.unknown);
    FUN_100029548(puVar10,FUN_10025ee04);
    pcVar7 = *(code **)(lVar4 + 0x38);
  }
  else {
    FUN_10002a29c(puVar10,&DAT_10054ac38,&DAT_10041e8e0);
    UVar6 = Foundation::UUID::typeMetadataAccessor();
    pcVar7 = *(code **)(*(long *)(UVar6.unknown + -8) + 0x38);
  }
  (*pcVar7)(lVar9,!bVar2,1,UVar6.unknown);
  lVar4 = 0;
  FUN_10006866c();
  iVar1 = *(int *)(lVar4 + 0x28);
  FUN_1000087e4(lVar9,lVar8,&DAT_10054a9c8,&DAT_10041bbe0);
  puVar3 = &DAT_10054dd90;
  FUN_100002f94(&DAT_10054dd90,&DAT_10041ec00);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar1),lVar8,puVar3);
  FUN_10002a29c(lVar9,&DAT_10054a9c8,&DAT_10041bbe0);
  return;
}

