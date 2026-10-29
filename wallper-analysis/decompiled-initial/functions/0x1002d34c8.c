// rea decompile_all
// name: FUN_1002d34c8
// address: 0x1002d34c8
// body: available
// range: 0x1002d34c8-0x1002d357f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d34c8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_110 [224];
  
  FUN_10012f230(0);
  _swift_initStaticObject();
  puVar1 = &DAT_1005386e8;
  _swift_allocObject(&DAT_1005386e8,0xf0,7);
  uVar2 = param_1[0x14];
  uVar4 = param_1[0x17];
  uVar3 = param_1[0x16];
  *(undefined8 *)(puVar1 + 0xb8) = param_1[0x15];
  *(undefined8 *)(puVar1 + 0xb0) = uVar2;
  *(undefined8 *)(puVar1 + 200) = uVar4;
  *(undefined8 *)(puVar1 + 0xc0) = uVar3;
  uVar2 = param_1[0x18];
  uVar4 = param_1[0x1b];
  uVar3 = param_1[0x1a];
  *(undefined8 *)(puVar1 + 0xd8) = param_1[0x19];
  *(undefined8 *)(puVar1 + 0xd0) = uVar2;
  *(undefined8 *)(puVar1 + 0xe8) = uVar4;
  *(undefined8 *)(puVar1 + 0xe0) = uVar3;
  uVar2 = param_1[0xc];
  uVar4 = param_1[0xf];
  uVar3 = param_1[0xe];
  *(undefined8 *)(puVar1 + 0x78) = param_1[0xd];
  *(undefined8 *)(puVar1 + 0x70) = uVar2;
  *(undefined8 *)(puVar1 + 0x88) = uVar4;
  *(undefined8 *)(puVar1 + 0x80) = uVar3;
  uVar2 = param_1[0x10];
  uVar4 = param_1[0x13];
  uVar3 = param_1[0x12];
  *(undefined8 *)(puVar1 + 0x98) = param_1[0x11];
  *(undefined8 *)(puVar1 + 0x90) = uVar2;
  *(undefined8 *)(puVar1 + 0xa8) = uVar4;
  *(undefined8 *)(puVar1 + 0xa0) = uVar3;
  uVar2 = param_1[4];
  uVar4 = param_1[7];
  uVar3 = param_1[6];
  *(undefined8 *)(puVar1 + 0x38) = param_1[5];
  *(undefined8 *)(puVar1 + 0x30) = uVar2;
  *(undefined8 *)(puVar1 + 0x48) = uVar4;
  *(undefined8 *)(puVar1 + 0x40) = uVar3;
  uVar2 = param_1[8];
  uVar4 = param_1[0xb];
  uVar3 = param_1[10];
  *(undefined8 *)(puVar1 + 0x58) = param_1[9];
  *(undefined8 *)(puVar1 + 0x50) = uVar2;
  *(undefined8 *)(puVar1 + 0x68) = uVar4;
  *(undefined8 *)(puVar1 + 0x60) = uVar3;
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  *(undefined8 *)(puVar1 + 0x18) = param_1[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x28) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  FUN_1002d6478(param_1,auStack_110);
  FUN_10012eb04(FUN_1002d69d0,puVar1);
  _swift_release(puVar1);
  return;
}

