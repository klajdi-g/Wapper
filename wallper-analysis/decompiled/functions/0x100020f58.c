// rea decompile_all
// name: FUN_100020f58
// address: 0x100020f58
// body: available
// range: 0x100020f58-0x100021087 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100020f58(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [88];
  undefined8 *local_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  FUN_10025ee04();
  lVar4 = *(long *)(lVar1 + -8);
  lVar1 = *(long *)(lVar4 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  FUN_100029504(param_1,auStack_c0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),FUN_10025ee04);
  uVar3 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar3 + 0x58 & (uVar3 ^ 0xffffffffffffffff);
  puVar2 = &DAT_100525d38;
  _swift_allocObject(&DAT_100525d38,uVar5 + lVar1,uVar3 | 7);
  uVar6 = param_2[4];
  uVar8 = param_2[7];
  uVar7 = param_2[6];
  *(undefined8 *)(puVar2 + 0x38) = param_2[5];
  *(undefined8 *)(puVar2 + 0x30) = uVar6;
  *(undefined8 *)(puVar2 + 0x48) = uVar8;
  *(undefined8 *)(puVar2 + 0x40) = uVar7;
  *(undefined8 *)(puVar2 + 0x50) = param_2[8];
  uVar8 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  *(undefined8 *)(puVar2 + 0x18) = param_2[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 *)(puVar2 + 0x28) = uVar7;
  *(undefined8 *)(puVar2 + 0x20) = uVar6;
  FUN_100007e64(auStack_c0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),puVar2 + uVar5,FUN_10025ee04);
  local_60 = param_2;
  uStack_58 = param_1;
  FUN_10002b2a8(param_2,auStack_b8);
  FUN_100002f94(&DAT_10054b558,&DAT_10041c910);
  FUN_10002a8d0();
  SwiftUI::Button::_init();
  return;
}

