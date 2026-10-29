// rea decompile_all
// name: FUN_1000d7d24
// address: 0x1000d7d24
// body: available
// range: 0x1000d7d24-0x1000d7e77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1000d7d24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  uVar10 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar10;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  uVar3 = param_2[7];
  uVar11 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar11;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar4 = param_2[9];
  param_1[9] = uVar4;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar5 = param_2[0xb];
  param_1[0xb] = uVar5;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar1 = param_2[0xd];
  uVar6 = param_2[0xe];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar6;
  uVar6 = param_2[0xf];
  param_1[0xf] = uVar6;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  uVar7 = param_2[0x11];
  param_1[0x11] = uVar7;
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  uVar8 = param_2[0x14];
  uVar9 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar9;
  uVar9 = param_2[0x16];
  uVar12 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar12;
  uVar12 = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar12;
  _swift_retain();
  _swift_retain(uVar10);
  _swift_retain(uVar2);
  _swift_bridgeObjectRetain(uVar11);
  _swift_retain(uVar3);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar1);
  _swift_retain(uVar6);
  _swift_retain(uVar7);
  _swift_retain(uVar8);
  _swift_retain(uVar9);
  return param_1;
}

