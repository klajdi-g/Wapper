// rea decompile_all
// name: FUN_10003a6ac
// address: 0x10003a6ac
// body: available
// range: 0x10003a6ac-0x10003a8af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003a6ac(undefined8 *param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if (param_2 < 3) {
    if (param_2 == 0) {
      if (DAT_10054c0f8 != -1) {
        _swift_once(&DAT_10054c0f8,FUN_10003a8b0);
      }
      puVar7 = &DAT_100577bb0;
    }
    else if (param_2 == 1) {
      if (DAT_10054c0f0 != -1) {
        _swift_once(&DAT_10054c0f0,FUN_10003aa3c);
      }
      puVar7 = &DAT_100577b80;
    }
    else {
      if (DAT_10054c0e8 != -1) {
        _swift_once(&DAT_10054c0e8,FUN_10003abc8);
      }
      puVar7 = &DAT_100577b50;
    }
  }
  else if (param_2 < 5) {
    if (param_2 == 3) {
      if (DAT_10054c0e0 != -1) {
        _swift_once(&DAT_10054c0e0,FUN_10003ad54);
      }
      puVar7 = &DAT_100577b20;
    }
    else {
      if (DAT_10054c0d8 != -1) {
        _swift_once(&DAT_10054c0d8,FUN_10003aedc);
      }
      puVar7 = &DAT_100577af0;
    }
  }
  else if (param_2 == 5) {
    if (DAT_10054c0d0 != -1) {
      _swift_once(&DAT_10054c0d0,FUN_10003b068);
    }
    puVar7 = &DAT_100577ac0;
  }
  else {
    if (DAT_10054c0c8 != -1) {
      _swift_once(&DAT_10054c0c8,FUN_10003b1f4);
    }
    puVar7 = &DAT_100577a90;
  }
  uVar1 = puVar7[4];
  uVar4 = puVar7[5];
  uVar2 = puVar7[2];
  uVar5 = puVar7[3];
  uVar3 = *puVar7;
  uVar6 = puVar7[1];
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar4);
  *param_1 = uVar3;
  param_1[1] = uVar6;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar1;
  param_1[5] = uVar4;
  return;
}

