// rea decompile_all
// name: FUN_1002a21b0
// address: 0x1002a21b0
// body: available
// range: 0x1002a21b0-0x1002a22df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002a21b0(undefined8 param_1,ID param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  void *aBlock;
  long extraout_x8;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  puVar1 = &DAT_100556a40;
  FUN_100002f94(&DAT_100556a40,&DAT_10042abc0);
  lVar5 = *(long *)(puVar1 + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)(lVar4 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar5 + 0x10))((long)&local_80 - extraout_x8,param_1,puVar1);
  uVar3 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar6 = uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff);
  puVar2 = &DAT_100537830;
  _swift_allocObject(&DAT_100537830,uVar6 + lVar4,uVar3 | 7);
  (**(code **)(lVar5 + 0x20))(puVar2 + uVar6,(long)&local_80 - extraout_x8,puVar1);
  local_60 = thunk_FUN_1002a4a70;
  local_80 = PTR___NSConcreteStackBlock_100521110;
  local_78 = 0x42000000;
  local_70 = FUN_1000c7e7c;
  puStack_68 = &DAT_100537848;
  local_58 = puVar2;
  aBlock = __Block_copy(&local_80);
  _swift_release(local_58);
  objc_stub::exportAsynchronouslyWithCompletionHandler_(param_2,aBlock);
  __Block_release(aBlock);
  return;
}

