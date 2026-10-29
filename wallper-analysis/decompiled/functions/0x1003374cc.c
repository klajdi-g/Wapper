// rea decompile_all
// name: FUN_1003374cc
// address: 0x1003374cc
// body: available
// range: 0x1003374cc-0x1003375cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1003374cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  uVar6 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar6);
  uVar6 = param_1[2];
  param_1[2] = param_2[2];
  _swift_retain();
  _swift_release(uVar6);
  uVar6 = param_2[3];
  uVar2 = param_2[4];
  uVar4 = *(undefined1 *)(param_2 + 5);
  FUN_1000271dc(uVar6,uVar2,uVar4);
  uVar1 = param_1[3];
  uVar3 = param_1[4];
  param_1[3] = uVar6;
  param_1[4] = uVar2;
  uVar5 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar4;
  FUN_100027298(uVar1,uVar3,uVar5);
  param_1[6] = param_2[6];
  uVar6 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  uVar6 = param_1[8];
  param_1[8] = param_2[8];
  _swift_retain();
  _swift_release(uVar6);
  uVar6 = param_1[9];
  param_1[9] = param_2[9];
  _swift_retain();
  _swift_release(uVar6);
  uVar6 = param_1[10];
  param_1[10] = param_2[10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  return param_1;
}

