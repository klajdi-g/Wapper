// rea decompile_all
// name: FUN_1000103e8
// address: 0x1000103e8
// body: available
// range: 0x1000103e8-0x100010493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000103e8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  Animation AVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = (undefined *)*param_2;
  lVar1 = param_2[1];
  uVar5 = param_2[2];
  puVar2 = &DAT_100525758;
  _swift_allocObject(&DAT_100525758,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar4;
  *(long *)(puVar2 + 0x18) = lVar1;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  AVar3.unknown = puVar4;
  FUN_100028d28(puVar4,lVar1,uVar5);
  AVar3 = SwiftUI::Animation::easeOut(0.16,AVar3);
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    _swift_bridgeObjectRetain(lVar1);
  }
  *param_1 = FUN_100028d1c;
  param_1[1] = puVar2;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = AVar3.unknown;
  param_1[4] = puVar4;
  param_1[5] = lVar1;
  return;
}

