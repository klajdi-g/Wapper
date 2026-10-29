// rea decompile_all
// name: FUN_100225204
// address: 0x100225204
// body: available
// range: 0x100225204-0x1002252e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100225204(undefined8 *param_1,undefined8 param_2,URL param_3)

{
  undefined8 uVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  URL UVar5;
  long extraout_x8;
  undefined8 *puVar6;
  
  puVar4 = &DAT_100556440;
  FUN_100002f94(&DAT_100556440,&DAT_10042a0f0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)(&stack0xffffffffffffffb0 + -extraout_x8);
  uVar1 = param_1[1];
  *puVar6 = *param_1;
  *(undefined8 *)(&stack0xffffffffffffffb8 + -extraout_x8) = uVar1;
  iVar2 = *(int *)(puVar4 + 0x30);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar5.unknown + -8) + 0x10))((long)puVar6 + (long)iVar2,param_2);
  _swift_bridgeObjectRetain(uVar1);
  bVar3 = Foundation::URL::___infix((undefined *)((long)puVar6 + (long)iVar2),param_3,UVar5);
  FUN_10002a29c(puVar6,&DAT_100556440,&DAT_10042a0f0);
  return bVar3;
}

