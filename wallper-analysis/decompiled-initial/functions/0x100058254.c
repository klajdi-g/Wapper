// rea decompile_all
// name: FUN_100058254
// address: 0x100058254
// body: available
// range: 0x100058254-0x100058447 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100058254(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
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
  
  uVar5 = param_2[1];
  uVar12 = *param_2;
  uVar17 = param_2[3];
  uVar16 = param_2[2];
  uVar7 = param_2[3];
  param_1[1] = param_2[1];
  *param_1 = uVar12;
  param_1[3] = uVar17;
  param_1[2] = uVar16;
  uVar6 = param_2[5];
  uVar12 = param_2[4];
  uVar17 = param_2[7];
  uVar16 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar12;
  param_1[7] = uVar17;
  param_1[6] = uVar16;
  uVar12 = param_2[7];
  uVar16 = param_2[9];
  uVar17 = param_2[10];
  param_1[8] = param_2[8];
  param_1[9] = uVar16;
  param_1[10] = uVar17;
  uVar13 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar13;
  uVar17 = param_2[0xc];
  uVar1 = param_2[0xe];
  uVar10 = param_2[0xf];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar1;
  uVar8 = param_2[0x10];
  uVar14 = param_2[0x11];
  param_1[0xf] = uVar10;
  param_1[0x10] = uVar8;
  uVar10 = param_2[0x12];
  uVar2 = param_2[0x13];
  param_1[0x11] = uVar14;
  param_1[0x12] = uVar10;
  uVar11 = param_2[0x14];
  param_1[0x13] = uVar2;
  param_1[0x14] = uVar11;
  uVar14 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar14;
  uVar14 = param_2[0x17];
  uVar2 = param_2[0x18];
  param_1[0x17] = uVar14;
  param_1[0x18] = uVar2;
  uVar15 = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x19] = uVar15;
  uVar2 = param_2[0x1a];
  uVar3 = param_2[0x1b];
  uVar9 = param_2[0x1c];
  uVar4 = *(undefined1 *)(param_2 + 0x1d);
  _swift_retain(uVar5);
  _swift_retain(uVar7);
  _swift_retain(uVar6);
  _swift_retain(uVar12);
  _swift_bridgeObjectRetain(uVar16);
  _swift_retain(uVar13);
  _swift_retain(uVar17);
  _swift_retain(uVar1);
  _swift_retain(uVar8);
  _swift_retain(uVar10);
  _swift_retain(uVar11);
  _swift_retain(uVar14);
  _swift_bridgeObjectRetain(uVar15);
  _swift_retain(uVar2);
  FUN_1000271dc(uVar3,uVar9,uVar4);
  param_1[0x1b] = uVar3;
  param_1[0x1c] = uVar9;
  *(undefined1 *)(param_1 + 0x1d) = uVar4;
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
  param_1[0x1f] = param_2[0x1f];
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  uVar8 = param_2[0x21];
  param_1[0x21] = uVar8;
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  uVar10 = param_2[0x23];
  param_1[0x23] = uVar10;
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  uVar12 = param_2[0x25];
  uVar16 = param_2[0x26];
  param_1[0x25] = uVar12;
  param_1[0x26] = uVar16;
  uVar16 = param_2[0x27];
  uVar17 = param_2[0x28];
  param_1[0x27] = uVar16;
  param_1[0x28] = uVar17;
  uVar17 = param_2[0x29];
  uVar1 = param_2[0x2a];
  param_1[0x29] = uVar17;
  param_1[0x2a] = uVar1;
  _swift_retain();
  _swift_retain(uVar8);
  _swift_retain(uVar10);
  _swift_retain(uVar12);
  _swift_retain(uVar16);
  _swift_bridgeObjectRetain(uVar17);
  _swift_retain(uVar1);
  return param_1;
}

