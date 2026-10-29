// rea decompile_all
// name: FUN_1000d0528
// address: 0x1000d0528
// body: available
// range: 0x1000d0528-0x1000d0753 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d0528(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  State SVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  undefined1 *puVar7;
  undefined1 auStack_80 [15];
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar1 = &DAT_1005514b8;
  FUN_100002f94(&DAT_1005514b8,&DAT_1004231a0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_80 + -extraout_x8;
  puVar1 = &DAT_1005514c0;
  FUN_100002f94(&DAT_1005514c0,&DAT_1004231a8);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)puVar4 - extraout_x8_00;
  puVar2 = &DAT_1005514c8;
  FUN_100002f94(&DAT_1005514c8,&DAT_1004231b0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined1 *)(lVar6 - extraout_x8_01);
  uStack_68 = *(undefined8 *)(param_1 + 0x70);
  local_70 = *(undefined8 *)(param_1 + 0x68);
  SVar3.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar3);
  if (local_71 == '\x01') {
    FUN_1000d0754(puVar7);
    puVar2 = &DAT_1005514c8;
    puVar5 = &DAT_1004231b0;
    FUN_1000087e4(puVar7,lVar6,&DAT_1005514c8,&DAT_1004231b0);
    _swift_storeEnumTagMultiPayload(lVar6,puVar1,0);
    FUN_1000d6e44();
    FUN_1000d72b8();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar6);
    puVar4 = puVar7;
  }
  else {
    FUN_1000d10ec(puVar4);
    puVar2 = &DAT_1005514b8;
    puVar5 = &DAT_1004231a0;
    FUN_1000087e4(puVar4,lVar6,&DAT_1005514b8,&DAT_1004231a0);
    _swift_storeEnumTagMultiPayload(lVar6,puVar1,1);
    FUN_1000d6e44();
    FUN_1000d72b8();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar6);
  }
  FUN_10002a29c(puVar4,puVar2,puVar5);
  return;
}

