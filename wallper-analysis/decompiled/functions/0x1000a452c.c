// rea decompile_all
// name: FUN_1000a452c
// address: 0x1000a452c
// body: available
// range: 0x1000a452c-0x1000a45f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a452c(undefined8 *param_1,Alignment param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  Alignment AVar3;
  undefined *puVar4;
  Animation AVar5;
  long lVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  undefined *unaff_x20;
  
  AVar3 = SwiftUI::Alignment::get_center(param_2);
  *param_1 = AVar3.unknown;
  param_1[1] = param_3;
  puVar4 = &DAT_10054fb30;
  FUN_100002f94(&DAT_10054fb30,&DAT_100421448);
  AVar5.unknown = unaff_x20;
  FUN_1000a45f4((long)param_1 + (long)*(int *)(puVar4 + 0x2c));
  AVar5 = SwiftUI::Animation::easeInOut(0.5,AVar5);
  lVar6 = 0;
  FUN_1000aff7c();
  cVar1 = unaff_x20[*(int *)(lVar6 + 0x14)];
  cVar8 = '\x01';
  if (*(long *)(*(long *)(unaff_x20 + 0x30) + 0x10) == 0) {
    cVar8 = unaff_x20[0x40];
  }
  cVar9 = '\n';
  if (cVar8 != '\0') {
    cVar9 = '\v';
  }
  cVar7 = '\x01';
  if (cVar8 != '\0') {
    cVar7 = '\x02';
  }
  cVar8 = cVar1;
  if (cVar1 == '\x02') {
    cVar8 = cVar7;
  }
  if (cVar1 != '\v') {
    cVar9 = cVar8;
  }
  puVar4 = &DAT_10054fb38;
  FUN_100002f94(&DAT_10054fb38,&DAT_100421450);
  iVar2 = *(int *)(puVar4 + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar2) = AVar5.unknown;
  *(char *)((undefined8 *)((long)param_1 + (long)iVar2) + 1) = cVar9;
  return;
}

