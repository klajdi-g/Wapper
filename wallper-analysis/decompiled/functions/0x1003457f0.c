// rea decompile_all
// name: FUN_1003457f0
// address: 0x1003457f0
// body: available
// range: 0x1003457f0-0x1003458eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_1003457f0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar8;
  param_1[0x48] = param_2[0x48];
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  param_1[0x58] = param_2[0x58];
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  param_1[0x68] = param_2[0x68];
  uVar5 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = uVar5;
  param_1[0x78] = param_2[0x78];
  uVar6 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = uVar6;
  param_1[0x88] = param_2[0x88];
  _swift_retain(uVar1);
  _swift_retain(uVar7);
  _swift_bridgeObjectRetain(uVar8);
  _swift_retain(uVar2);
  _swift_retain(uVar3);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  return param_1;
}

