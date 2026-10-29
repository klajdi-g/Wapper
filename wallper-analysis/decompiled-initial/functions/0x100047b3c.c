// rea decompile_all
// name: FUN_100047b3c
// address: 0x100047b3c
// body: available
// range: 0x100047b3c-0x100047bff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100047b3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar5 = param_2[6];
  uVar3 = param_2[7];
  uVar4 = *(undefined1 *)(param_2 + 8);
  _swift_retain();
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  FUN_1000271dc(uVar5,uVar3,uVar4);
  param_1[6] = uVar5;
  param_1[7] = uVar3;
  *(undefined1 *)(param_1 + 8) = uVar4;
  uVar5 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar5;
  uVar5 = param_2[0xb];
  uVar4 = *(undefined1 *)(param_2 + 0xc);
  _swift_retain();
  FUN_100047ac4(uVar5,uVar4);
  param_1[0xb] = uVar5;
  *(undefined1 *)(param_1 + 0xc) = uVar4;
  uVar5 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar5;
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  _swift_bridgeObjectRetain();
  return param_1;
}

