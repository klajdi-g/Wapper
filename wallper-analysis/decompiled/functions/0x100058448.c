// rea decompile_all
// name: FUN_100058448
// address: 0x100058448
// body: available
// range: 0x100058448-0x100058727 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100058448(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = param_1[1];
  uVar4 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  _swift_retain(uVar4);
  _swift_release(uVar5);
  uVar5 = param_1[3];
  uVar4 = param_2[3];
  uVar6 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar6;
  _swift_retain(uVar4);
  _swift_release(uVar5);
  uVar5 = param_1[5];
  uVar4 = param_2[5];
  uVar6 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar6;
  _swift_retain(uVar4);
  _swift_release(uVar5);
  uVar5 = param_1[7];
  uVar4 = param_2[7];
  uVar6 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar6;
  _swift_retain(uVar4);
  _swift_release(uVar5);
  param_1[8] = param_2[8];
  uVar4 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[10] = param_2[10];
  uVar4 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  _swift_retain();
  _swift_release(uVar4);
  uVar4 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  _swift_retain();
  _swift_release(uVar4);
  param_1[0xd] = param_2[0xd];
  uVar4 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  _swift_retain();
  _swift_release(uVar4);
  param_1[0xf] = param_2[0xf];
  uVar4 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  _swift_retain();
  _swift_release(uVar4);
  param_1[0x11] = param_2[0x11];
  uVar4 = param_1[0x12];
  param_1[0x12] = param_2[0x12];
  _swift_retain();
  _swift_release(uVar4);
  param_1[0x13] = param_2[0x13];
  uVar4 = param_1[0x14];
  param_1[0x14] = param_2[0x14];
  _swift_retain();
  _swift_release(uVar4);
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  uVar4 = param_1[0x17];
  param_1[0x17] = param_2[0x17];
  _swift_retain();
  _swift_release(uVar4);
  param_1[0x18] = param_2[0x18];
  uVar4 = param_1[0x19];
  param_1[0x19] = param_2[0x19];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_1[0x1a];
  param_1[0x1a] = param_2[0x1a];
  _swift_retain();
  _swift_release(uVar4);
  uVar4 = param_2[0x1b];
  uVar6 = param_2[0x1c];
  uVar2 = *(undefined1 *)(param_2 + 0x1d);
  FUN_1000271dc(uVar4,uVar6,uVar2);
  uVar5 = param_1[0x1b];
  uVar1 = param_1[0x1c];
  param_1[0x1b] = uVar4;
  param_1[0x1c] = uVar6;
  uVar3 = *(undefined1 *)(param_1 + 0x1d);
  *(undefined1 *)(param_1 + 0x1d) = uVar2;
  FUN_100027298(uVar5,uVar1,uVar3);
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
  uVar4 = param_1[0x1f];
  param_1[0x1f] = param_2[0x1f];
  _swift_retain();
  _swift_release(uVar4);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  uVar4 = param_1[0x21];
  param_1[0x21] = param_2[0x21];
  _swift_retain();
  _swift_release(uVar4);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  uVar4 = param_1[0x23];
  param_1[0x23] = param_2[0x23];
  _swift_retain();
  _swift_release(uVar4);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  uVar4 = param_1[0x25];
  param_1[0x25] = param_2[0x25];
  _swift_retain();
  _swift_release(uVar4);
  param_1[0x26] = param_2[0x26];
  uVar4 = param_1[0x27];
  param_1[0x27] = param_2[0x27];
  _swift_retain();
  _swift_release(uVar4);
  param_1[0x28] = param_2[0x28];
  uVar4 = param_1[0x29];
  param_1[0x29] = param_2[0x29];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_1[0x2a];
  param_1[0x2a] = param_2[0x2a];
  _swift_retain();
  _swift_release(uVar4);
  return param_1;
}

