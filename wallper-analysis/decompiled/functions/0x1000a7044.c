// rea decompile_all
// name: FUN_1000a7044
// address: 0x1000a7044
// body: available
// range: 0x1000a7044-0x1000a71d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000a7044(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  HorizontalAlignment HVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar5;
  long lVar6;
  HorizontalAlignment HVar7;
  double dVar8;
  
  lVar1 = 0;
  FUN_1000b2f54();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar6 = (long)puVar5 - extraout_x12;
  HVar7.unknown = *(undefined **)(param_2 + 0x20);
  lVar2 = 0;
  FUN_1000b1010();
  dVar8 = *(double *)(param_2 + *(int *)(lVar2 + 0x14));
  FUN_100029504(param_2,lVar6,FUN_10009e280);
  HVar3 = SwiftUI::HorizontalAlignment::get_leading(HVar7);
  *(double *)(lVar6 + *(int *)(lVar1 + 0x14)) = dVar8;
  *(undefined8 *)(lVar6 + *(int *)(lVar1 + 0x18)) = 0x400199999999999a;
  *(undefined8 *)(lVar6 + *(int *)(lVar1 + 0x1c)) = 0x3ffccccccccccccd;
  *(undefined **)(lVar6 + *(int *)(lVar1 + 0x20)) = HVar3.unknown;
  *(undefined8 *)(lVar6 + *(int *)(lVar1 + 0x24)) = 0x4043000000000000;
  FUN_100029504(lVar6,puVar5,FUN_1000b2f54);
  *param_1 = HVar7.unknown;
  param_1[1] = dVar8 * 38.0;
  puVar4 = &DAT_100550290;
  FUN_100002f94(&DAT_100550290,&DAT_100421b20);
  FUN_100029504(puVar5,(long)param_1 + (long)*(int *)(puVar4 + 0x30),FUN_1000b2f54);
  FUN_100029548(lVar6,FUN_1000b2f54);
  FUN_100029548(puVar5,FUN_1000b2f54);
  return 0;
}

