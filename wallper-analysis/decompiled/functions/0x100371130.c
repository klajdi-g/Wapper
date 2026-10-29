// rea decompile_all
// name: FUN_100371130
// address: 0x100371130
// body: available
// range: 0x100371130-0x100371273 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100371130(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  UUID UVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar5;
  long lVar6;
  
  puVar2 = &DAT_100550ec0;
  FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar6 = (long)puVar5 - extraout_x12;
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar3.unknown + -8) + 0x10))(lVar6,param_2,UVar3.unknown);
  lVar4 = 0;
  FUN_1001d537c();
  _swift_storeEnumTagMultiPayload(lVar6,lVar4,1);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar6,0,1,lVar4);
  lVar4 = 0;
  FUN_100387eec();
  iVar1 = *(int *)(lVar4 + 0x2c);
  FUN_1000087e4(lVar6,puVar5,&DAT_100550ec0,&DAT_100422eb0);
  puVar2 = &DAT_10055dca8;
  FUN_100002f94(&DAT_10055dca8,&DAT_1004334a8);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar1),puVar5,puVar2);
  FUN_10002a29c(lVar6,&DAT_100550ec0,&DAT_100422eb0);
  return;
}

