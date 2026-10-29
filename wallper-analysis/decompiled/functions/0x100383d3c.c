// rea decompile_all
// name: FUN_100383d3c
// address: 0x100383d3c
// body: available
// range: 0x100383d3c-0x100383df3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100383d3c(long param_1,ButtonStyleConfiguration param_2)

{
  int iVar1;
  bool bVar2;
  Label LVar3;
  Animation AVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  LVar3 = SwiftUI::ButtonStyleConfiguration::get_label(param_2);
  bVar2 = SwiftUI::ButtonStyleConfiguration::get_isPressed((ButtonStyleConfiguration)LVar3.unknown);
  uVar6 = 0x3fe999999999999a;
  if (!bVar2) {
    uVar6 = 0x3ff0000000000000;
  }
  AVar4.unknown = &DAT_10055efb0;
  FUN_100002f94(&DAT_10055efb0,&DAT_1004347a8);
  *(undefined8 *)(param_1 + *(int *)(AVar4.unknown + 0x24)) = uVar6;
  AVar4 = SwiftUI::Animation::easeOut(0.1,AVar4);
  bVar2 = SwiftUI::ButtonStyleConfiguration::get_isPressed((ButtonStyleConfiguration)AVar4.unknown);
  puVar5 = &DAT_10055efb8;
  FUN_100002f94(&DAT_10055efb8,&DAT_1004347b0);
  iVar1 = *(int *)(puVar5 + 0x24);
  *(undefined8 *)(param_1 + iVar1) = AVar4.unknown;
  *(bool *)((undefined8 *)(param_1 + iVar1) + 1) = bVar2;
  return;
}

