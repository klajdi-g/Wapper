// rea decompile_all
// name: FUN_100061e18
// address: 0x100061e18
// body: available
// range: 0x100061e18-0x100061f9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100061e18(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  UUID UVar7;
  long extraout_x8;
  long extraout_x12;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar5 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar8 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = lVar8 - extraout_x12;
  lVar6 = 0;
  FUN_10025ee04();
  puVar1 = (undefined8 *)(param_2 + *(int *)(lVar6 + 0x14));
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  lVar6 = 0;
  FUN_10006866c();
  iVar4 = *(int *)(lVar6 + 0x2c);
  local_70 = uVar2;
  uStack_68 = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  puVar5 = &DAT_10054dd08;
  FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar4),&local_70,puVar5);
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  lVar10 = *(long *)(UVar7.unknown + -8);
  (**(code **)(lVar10 + 0x10))(lVar9,param_2,UVar7.unknown);
  (**(code **)(lVar10 + 0x38))(lVar9,0,1,UVar7.unknown);
  iVar4 = *(int *)(lVar6 + 0x24);
  FUN_1000087e4(lVar9,lVar8,&DAT_10054a9c8,&DAT_10041bbe0);
  puVar5 = &DAT_10054dd90;
  FUN_100002f94(&DAT_10054dd90,&DAT_10041ec00);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar4),lVar8,puVar5);
  FUN_10002a29c(lVar9,&DAT_10054a9c8,&DAT_10041bbe0);
  return;
}

