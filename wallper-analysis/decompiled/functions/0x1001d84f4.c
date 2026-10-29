// rea decompile_all
// name: FUN_1001d84f4
// address: 0x1001d84f4
// body: available
// range: 0x1001d84f4-0x1001d85e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1001d84f4(undefined8 param_1,undefined8 param_2,uint param_3,long param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  
  lVar2 = 0;
  uVar4 = param_2;
  FUN_10025ee04();
  cVar1 = *(char *)(unaff_x20 + *(int *)(lVar2 + 0x24));
  if (((cVar1 == '\0') || (*(char *)(unaff_x20 + *(int *)(lVar2 + 0x28)) == '\0')) &&
     (lVar3 = lVar2, FUN_1002a9100(), param_4 != 0)) {
    FUN_1002a9258(lVar3,uVar4,param_1,param_2);
    _swift_bridgeObjectRelease(param_4);
    bVar5 = cVar1 == '\0' || (param_3 & 0xff) == 1;
    if (cVar1 != '\0' || (param_3 & 0xff) == 1) goto LAB_1001d8598;
    if (*(char *)(unaff_x20 + *(int *)(lVar2 + 0x28)) == '\0') goto LAB_1001d85b4;
  }
  else {
    param_2 = 0;
    bVar5 = true;
LAB_1001d8598:
    param_1 = *(undefined8 *)(unaff_x20 + *(int *)(lVar2 + 0x2c));
    if ((*(char *)(unaff_x20 + *(int *)(lVar2 + 0x28)) == '\0') && (!bVar5)) goto LAB_1001d85b4;
  }
  param_2 = *(undefined8 *)(unaff_x20 + *(int *)(lVar2 + 0x30));
LAB_1001d85b4:
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}

