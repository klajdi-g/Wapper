// rea decompile_all
// name: FUN_1000272a0
// address: 0x1000272a0
// body: available
// range: 0x1000272a0-0x100027453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_1000272a0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
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
  
  *param_1 = *param_2;
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar11;
  uVar11 = *(undefined8 *)(param_2 + 0x18);
  uVar14 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar11;
  *(undefined8 *)(param_1 + 0x20) = uVar14;
  uVar14 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar14;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = param_2[0x58];
  _swift_retain();
  _swift_retain(uVar11);
  _swift_retain(uVar14);
  _swift_retain(uVar1);
  FUN_1000271dc(uVar2,uVar4,uVar3);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  param_1[0x58] = uVar3;
  uVar11 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar11;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  uVar4 = *(undefined8 *)(param_2 + 0x80);
  uVar8 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar8;
  param_1[0x88] = param_2[0x88];
  uVar5 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  param_1[0x98] = param_2[0x98];
  uVar6 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = uVar6;
  param_1[0xa8] = param_2[0xa8];
  uVar7 = *(undefined8 *)(param_2 + 200);
  uVar12 = *(undefined8 *)(param_2 + 0xb0);
  uVar14 = *(undefined8 *)(param_2 + 200);
  uVar13 = *(undefined8 *)(param_2 + 0xc0);
  uVar11 = *(undefined8 *)(param_2 + 0xd8);
  uVar9 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = uVar12;
  *(undefined8 *)(param_1 + 200) = uVar14;
  *(undefined8 *)(param_1 + 0xc0) = uVar13;
  *(undefined8 *)(param_1 + 0xd8) = uVar11;
  *(undefined8 *)(param_1 + 0xd0) = uVar9;
  uVar11 = *(undefined8 *)(param_2 + 0xd8);
  uVar14 = *(undefined8 *)(param_2 + 0xe8);
  uVar1 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe8) = uVar14;
  *(undefined8 *)(param_1 + 0xf0) = uVar1;
  uVar10 = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0xf8) = uVar10;
  uVar1 = *(undefined8 *)(param_2 + 0x100);
  uVar2 = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = uVar2;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar8);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar12);
  _swift_retain(uVar13);
  _swift_retain(uVar7);
  _swift_retain(uVar9);
  _swift_retain(uVar11);
  _swift_retain(uVar14);
  _swift_retain(uVar10);
  _swift_bridgeObjectRetain(uVar1);
  _swift_retain(uVar2);
  return param_1;
}

