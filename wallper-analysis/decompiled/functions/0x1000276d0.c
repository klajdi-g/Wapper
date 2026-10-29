// rea decompile_all
// name: FUN_1000276d0
// address: 0x1000276d0
// body: available
// range: 0x1000276d0-0x10002784f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_1000276d0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  _swift_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  _swift_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  _swift_release(uVar4);
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  uVar1 = param_2[0x58];
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uVar6 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  uVar2 = param_1[0x58];
  param_1[0x58] = uVar1;
  FUN_100027298(uVar3,uVar4,uVar2);
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  _swift_release(uVar4);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x78));
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  uVar4 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar4;
  _swift_release(uVar3);
  param_1[0x88] = param_2[0x88];
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  _swift_release(uVar3);
  param_1[0x98] = param_2[0x98];
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  _swift_release(uVar3);
  param_1[0xa8] = param_2[0xa8];
  _swift_release(*(undefined8 *)(param_1 + 0xb0));
  uVar3 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  _swift_release(*(undefined8 *)(param_1 + 0xc0));
  uVar3 = *(undefined8 *)(param_1 + 200);
  uVar4 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xc0) = uVar4;
  _swift_release(uVar3);
  _swift_release(*(undefined8 *)(param_1 + 0xd0));
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  uVar4 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = uVar4;
  _swift_release(uVar3);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  uVar3 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  _swift_release(uVar3);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  _swift_release(*(undefined8 *)(param_1 + 0xf8));
  uVar3 = *(undefined8 *)(param_1 + 0x100);
  uVar4 = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0xf8) = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  _swift_release(uVar3);
  return param_1;
}

