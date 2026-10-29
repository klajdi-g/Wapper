// rea decompile_all
// name: FUN_1004043ac
// address: 0x1004043ac
// body: available
// range: 0x1004043ac-0x1004044c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004043ac(byte param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_1 < 4) {
    puVar6 = (undefined1 *)0x636976654478616d;
    uVar1 = 0xea00000000007365;
    if (param_1 != 2) {
      puVar6 = (undefined1 *)0xd000000000000010;
      uVar1 = 0x80000001004de9f0;
    }
    puVar2 = &DAT_00006469;
    if (param_1 != 0) {
      puVar2 = (undefined1 *)0x79656b;
    }
    uVar3 = 0xe200000000000000;
    if (param_1 != 0) {
      uVar3 = 0xe300000000000000;
    }
    if (param_1 < 2) {
      uVar1 = uVar3;
      puVar6 = puVar2;
    }
    auVar8._8_8_ = uVar1;
    auVar8._0_8_ = puVar6;
    return auVar8;
  }
  uVar1 = 0x4164657461657263;
  if (param_1 != 7) {
    uVar1 = 0x4164657461647075;
  }
  uVar3 = 0x6576697463417369;
  if (param_1 != 6) {
    uVar3 = uVar1;
  }
  uVar1 = 0xe800000000000000;
  if (param_1 != 6) {
    uVar1 = 0xe900000000000074;
  }
  uVar5 = 0xef74416465746176;
  uVar4 = 0x697463417473616c;
  if (param_1 != 4) {
    uVar5 = 0xe400000000000000;
    uVar4 = 0x65707974;
  }
  if (param_1 < 6) {
    uVar1 = uVar5;
    uVar3 = uVar4;
  }
  auVar7._8_8_ = uVar1;
  auVar7._0_8_ = uVar3;
  return auVar7;
}

