// rea decompile_all
// name: FUN_1002e96a4
// address: 0x1002e96a4
// body: available
// range: 0x1002e96a4-0x1002e97ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1002e96a4(undefined8 *param_1,undefined8 *param_2)

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
  
  *param_1 = *param_2;
  uVar9 = param_2[2];
  uVar11 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar11;
  uVar10 = param_2[4];
  uVar12 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar12;
  uVar7 = param_2[6];
  uVar13 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar13;
  uVar8 = param_2[8];
  uVar14 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar14;
  uVar15 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar15;
  uVar1 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[0xb] = uVar3;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar2 = param_2[0xd];
  uVar4 = param_2[0xe];
  param_1[0xd] = uVar2;
  param_1[0xe] = uVar4;
  uVar4 = param_2[0xf];
  uVar5 = param_2[0x10];
  param_1[0xf] = uVar4;
  param_1[0x10] = uVar5;
  uVar5 = param_2[0x11];
  param_1[0x11] = uVar5;
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  uVar6 = param_2[0x13];
  param_1[0x13] = uVar6;
  _swift_retain(uVar11);
  _swift_retain(uVar9);
  _swift_retain(uVar12);
  _swift_retain(uVar10);
  _swift_retain(uVar13);
  _swift_retain(uVar7);
  _swift_retain(uVar14);
  _swift_retain(uVar8);
  _swift_retain(uVar15);
  _swift_retain(uVar1);
  _swift_retain(uVar3);
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  return param_1;
}

