// rea decompile_all
// name: FUN_10036a408
// address: 0x10036a408
// body: available
// range: 0x10036a408-0x10036a5e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010036a5c4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10036a408(undefined8 *param_1,undefined *param_2)

{
  int iVar1;
  long lVar2;
  HorizontalAlignment HVar3;
  VerticalAlignment VVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 auStack_70 [2];
  undefined1 auStack_60 [8];
  undefined8 local_58;
  
  lVar15 = *(long *)(param_2 + -8);
  lVar12 = *(long *)(lVar15 + 0x40);
  HVar3.unknown = param_2;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar2 = -(lVar12 + 0xfU & 0xfffffffffffffff0);
  HVar3 = SwiftUI::HorizontalAlignment::get_leading(HVar3);
  *param_1 = HVar3.unknown;
  param_1[1] = 0x402c000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  VVar4.unknown = &DAT_10055e700;
  FUN_100002f94(&DAT_10055e700,&DAT_100433f60);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(VVar4.unknown + 0x2c));
  VVar4 = SwiftUI::VerticalAlignment::get_top(VVar4);
  *param_1 = VVar4.unknown;
  param_1[1] = 0x4038000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar5 = &DAT_10055e708;
  FUN_100002f94(&DAT_10055e708,&DAT_100433f68);
  iVar1 = *(int *)(puVar5 + 0x2c);
  uVar13 = *(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x14));
  local_58 = uVar13;
  FUN_100029504();
  uVar11 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar14 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
  puVar5 = &DAT_10053c208;
  _swift_allocObject(&DAT_10053c208,uVar14 + lVar12,uVar11 | 7);
  FUN_100007e64(auStack_60 + lVar2,puVar5 + uVar14,FUN_100387cc0);
  _swift_bridgeObjectRetain(uVar13);
  puVar6 = &DAT_100551208;
  FUN_100002f94(&DAT_100551208,&DAT_100422ec0);
  uVar13 = 0;
  FUN_1001d537c(0);
  puVar7 = &DAT_10055e710;
  FUN_100002f94(&DAT_10055e710,&DAT_100433f78);
  puVar8 = &DAT_100551210;
  FUN_1000087a0(&DAT_100551210,&DAT_100551208,&DAT_100422ec0,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  puVar9 = puVar8;
  FUN_10038edfc();
  puVar10 = &DAT_100551218;
  FUN_1000036d0(&DAT_100551218,FUN_1001d59ac,&TargetProtocolConformanceDescriptor_10042ad68);
  *(undefined **)((long)auStack_70 + lVar2) = puVar10;
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            ((long)param_1 + (long)iVar1,puVar10,FUN_10038ede8,puVar5,puVar6,uVar13,puVar7,puVar8,
             puVar9);
  return;
}

