// rea decompile_all
// name: FUN_10017d600
// address: 0x10017d600
// body: available
// range: 0x10017d600-0x10017d78f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10017d600(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = &DAT_100556268;
  FUN_100002f94(&DAT_100556268,&DAT_10042a048);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 8;
  *(undefined8 *)(puVar1 + 0x10) = 4;
  puVar2 = &DAT_100549eb0;
  FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
  puVar3 = puVar2;
  _swift_initStaticObject();
  *(undefined8 *)(puVar1 + 0x20) = 0x73754d656c707061;
  *(undefined8 *)(puVar1 + 0x28) = 0xea00000000006369;
  *(undefined8 *)(puVar1 + 0x30) = 0x754d20656c707041;
  *(undefined8 *)(puVar1 + 0x38) = 0xeb00000000636973;
  *(undefined **)(puVar1 + 0x40) = puVar3;
  puVar3 = puVar2;
  _swift_initStaticObject(puVar2,&DAT_1005562b0);
  *(undefined8 *)(puVar1 + 0x48) = 0x796669746f7073;
  *(undefined8 *)(puVar1 + 0x50) = 0xe700000000000000;
  *(undefined8 *)(puVar1 + 0x58) = 0x796669746f7053;
  *(undefined8 *)(puVar1 + 0x60) = 0xe700000000000000;
  *(undefined **)(puVar1 + 0x68) = puVar3;
  puVar3 = puVar2;
  _swift_initStaticObject(puVar2,&DAT_1005562e8);
  *(undefined8 *)(puVar1 + 0x70) = 0x7374736163646f70;
  *(undefined8 *)(puVar1 + 0x78) = 0xe800000000000000;
  *(undefined8 *)(puVar1 + 0x80) = 0x6f5020656c707041;
  *(undefined8 *)(puVar1 + 0x88) = 0xee00737473616364;
  *(undefined **)(puVar1 + 0x90) = puVar3;
  _swift_initStaticObject(puVar2,&DAT_100556320);
  *(undefined8 *)(puVar1 + 0x98) = 0x4d65627574756f79;
  *(undefined8 *)(puVar1 + 0xa0) = 0xec00000063697375;
  *(undefined8 *)(puVar1 + 0xa8) = 0x2065627554756f59;
  *(undefined8 *)(puVar1 + 0xb0) = 0xed0000636973754d;
  *(undefined **)(puVar1 + 0xb8) = puVar2;
  DAT_100577cd0 = puVar1;
  return;
}

