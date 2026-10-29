// rea decompile_all
// name: FUN_10030db30
// address: 0x10030db30
// body: available
// range: 0x10030db30-0x10030dd37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10030db30(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  *param_1 = *param_2;
  uVar15 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar15;
  uVar9 = param_2[4];
  uVar16 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar16;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar14 = param_2[6];
  param_1[6] = uVar14;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar15 = param_2[8];
  uVar3 = param_2[9];
  param_1[8] = uVar15;
  param_1[9] = uVar3;
  uVar12 = param_2[10];
  param_1[10] = uVar12;
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  uVar17 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar17;
  uVar3 = param_2[0xd];
  uVar4 = param_2[0xe];
  param_1[0xe] = uVar4;
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  uVar13 = param_2[0x10];
  param_1[0x10] = uVar13;
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  uVar1 = param_2[0x12];
  uVar20 = param_2[0x13];
  param_1[0x12] = uVar1;
  param_1[0x13] = uVar20;
  uVar10 = param_2[0x15];
  uVar21 = param_2[0x14];
  uVar20 = param_2[0x17];
  uVar18 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar21;
  param_1[0x17] = uVar20;
  param_1[0x16] = uVar18;
  uVar20 = param_2[0x17];
  uVar5 = param_2[0x18];
  param_1[0x18] = uVar5;
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  uVar19 = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1a] = uVar19;
  uVar2 = param_2[0x1b];
  uVar6 = param_2[0x1c];
  uVar11 = param_2[0x1d];
  uVar7 = param_2[0x1e];
  param_1[0x1c] = uVar6;
  param_1[0x1d] = uVar11;
  uVar11 = param_2[0x1f];
  uVar8 = param_2[0x20];
  param_1[0x1e] = uVar7;
  param_1[0x1f] = uVar11;
  uVar11 = param_2[0x21];
  param_1[0x20] = uVar8;
  param_1[0x21] = uVar11;
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  uVar11 = param_2[0x23];
  param_1[0x23] = uVar11;
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  _swift_retain();
  _swift_bridgeObjectRetain(uVar16);
  _swift_retain(uVar9);
  _swift_retain(uVar14);
  _swift_retain(uVar15);
  _swift_retain(uVar12);
  _swift_retain(uVar17);
  _swift_bridgeObjectRetain(uVar3);
  _swift_retain(uVar4);
  _swift_retain(uVar13);
  _swift_retain(uVar1);
  _swift_retain(uVar21);
  _swift_bridgeObjectRetain(uVar10);
  _swift_retain(uVar18);
  _swift_bridgeObjectRetain(uVar20);
  _swift_retain(uVar5);
  _swift_retain(uVar19);
  _swift_retain(uVar2);
  _swift_retain(uVar6);
  _swift_retain(uVar7);
  _swift_retain(uVar8);
  _swift_retain(uVar11);
  return param_1;
}

