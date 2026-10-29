// rea decompile_all
// name: FUN_1003bbb10
// address: 0x1003bbb10
// body: available
// range: 0x1003bbb10-0x1003bbc0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003bbb10(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_1 < 4) {
    uVar2 = 0x656c746974;
    if (param_1 != 2) {
      uVar2 = 0x79726f6765746163;
    }
    uVar1 = 0xe500000000000000;
    if (param_1 != 2) {
      uVar1 = 0xe800000000000000;
    }
    uVar3 = 0x656e6f6e;
    if (param_1 != 0) {
      uVar3 = 0x7265626d756e;
    }
    uVar4 = 0xe400000000000000;
    if (param_1 != 0) {
      uVar4 = 0xe600000000000000;
    }
    if (param_1 < 2) {
      uVar1 = uVar4;
      uVar2 = uVar3;
    }
    auVar6._8_8_ = uVar1;
    auVar6._0_8_ = uVar2;
    return auVar6;
  }
  uVar2 = 0x657a6973;
  if (param_1 != 7) {
    uVar2 = 0x73656b696c;
  }
  uVar1 = 0xe400000000000000;
  if (param_1 != 7) {
    uVar1 = 0xe500000000000000;
  }
  uVar3 = 0xea00000000006e6f;
  uVar4 = 0x6974756c6f736572;
  if (param_1 != 6) {
    uVar3 = uVar1;
    uVar4 = uVar2;
  }
  uVar2 = 0x726f68747561;
  if (param_1 != 4) {
    uVar2 = 0x6e6f697461727564;
  }
  uVar1 = 0xe600000000000000;
  if (param_1 != 4) {
    uVar1 = 0xe800000000000000;
  }
  if (param_1 < 6) {
    uVar3 = uVar1;
    uVar4 = uVar2;
  }
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uVar4;
  return auVar5;
}

