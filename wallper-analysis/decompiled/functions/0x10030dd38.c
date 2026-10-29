// rea decompile_all
// name: FUN_10030dd38
// address: 0x10030dd38
// body: available
// range: 0x10030dd38-0x10030dfeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10030dd38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_retain();
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_retain();
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_retain();
  _swift_release(uVar1);
  param_1[9] = param_2[9];
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  _swift_retain();
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  _swift_retain();
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  uVar1 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  _swift_retain();
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  uVar1 = param_1[0x12];
  param_1[0x12] = param_2[0x12];
  _swift_retain();
  _swift_release(uVar1);
  param_1[0x13] = param_2[0x13];
  uVar1 = param_1[0x14];
  param_1[0x14] = param_2[0x14];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[0x15];
  param_1[0x15] = param_2[0x15];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0x16];
  param_1[0x16] = param_2[0x16];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[0x17];
  param_1[0x17] = param_2[0x17];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0x18];
  param_1[0x18] = param_2[0x18];
  _swift_retain();
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  uVar1 = param_1[0x1a];
  param_1[0x1a] = param_2[0x1a];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[0x1b];
  param_1[0x1b] = param_2[0x1b];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[0x1c];
  param_1[0x1c] = param_2[0x1c];
  _swift_retain();
  _swift_release(uVar1);
  param_1[0x1d] = param_2[0x1d];
  uVar1 = param_1[0x1e];
  param_1[0x1e] = param_2[0x1e];
  _swift_retain();
  _swift_release(uVar1);
  param_1[0x1f] = param_2[0x1f];
  uVar1 = param_1[0x20];
  param_1[0x20] = param_2[0x20];
  _swift_retain();
  _swift_release(uVar1);
  param_1[0x21] = param_2[0x21];
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  uVar1 = param_1[0x23];
  param_1[0x23] = param_2[0x23];
  _swift_retain();
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  return param_1;
}

