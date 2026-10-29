// rea decompile_all
// name: FUN_100056238
// address: 0x100056238
// body: available
// range: 0x100056238-0x10005633b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100056238(undefined8 param_1,Alignment param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  Alignment AVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined8 *puVar5;
  undefined8 local_70 [6];
  
  puVar2 = &DAT_10054d988;
  puVar4 = &DAT_10041e610;
  FUN_100002f94();
  AVar3.unknown = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)((long)local_70 + -extraout_x8);
  AVar3 = SwiftUI::Alignment::get_center(AVar3);
  *puVar5 = AVar3.unknown;
  *(undefined **)((long)local_70 + -extraout_x8 + 8) = puVar4;
  puVar4 = &DAT_10054d9a8;
  FUN_100002f94(&DAT_10054d9a8,&DAT_10041e668);
  FUN_10005633c((long)puVar5 + (long)*(int *)(puVar4 + 0x2c));
  SwiftUI::Alignment::get_center(param_2);
  SwiftUI::_FrameLayout::_init((Alignment)0x4053000000000000);
  puVar1 = (undefined8 *)((long)puVar5 + (long)*(int *)(puVar2 + 0x24));
  puVar1[1] = local_70[1];
  *puVar1 = local_70[0];
  puVar1[3] = local_70[3];
  puVar1[2] = local_70[2];
  puVar1[5] = local_70[5];
  puVar1[4] = local_70[4];
  FUN_100338350(param_1);
  FUN_10002a29c(puVar5,&DAT_10054d988,&DAT_10041e610);
  return;
}

