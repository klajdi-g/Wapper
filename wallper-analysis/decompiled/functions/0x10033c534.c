// rea decompile_all
// name: FUN_10033c534
// address: 0x10033c534
// body: available
// range: 0x10033c534-0x10033c833 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010033c71c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10033c534(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 *puVar1;
  PinnedScrollableViews PVar2;
  undefined *puVar3;
  HorizontalAlignment HVar4;
  undefined *puVar5;
  undefined *puVar6;
  LazyVGrid<undefined> LVar7;
  Set _all;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 auStack_a0 [2];
  long local_90;
  undefined4 local_84;
  long alStack_80 [3];
  undefined1 auStack_68 [8];
  
  local_90 = param_1;
  PVar2 = SwiftUI::PinnedScrollableViews::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(PVar2.unknown + -8) + 0x40));
  lVar8 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_10055ce00;
  FUN_100002f94(&DAT_10055ce00,&DAT_100432308);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar9 - extraout_x12;
  HVar4.unknown = &DAT_10055ce08;
  FUN_100002f94(&DAT_10055ce08,&DAT_100432310);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(HVar4.unknown + -8) + 0x40));
  lVar11 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar12 = (undefined8 *)(lVar11 - extraout_x12_00);
  HVar4 = SwiftUI::HorizontalAlignment::get_leading(HVar4);
  *puVar12 = HVar4.unknown;
  puVar12[1] = 0x4024000000000000;
  *(undefined1 *)(puVar12 + 2) = 0;
  puVar5 = &DAT_10055ce10;
  FUN_100002f94(&DAT_10055ce10,&DAT_100432318);
  FUN_10033d4a8((long)puVar12 + (long)*(int *)(puVar5 + 0x2c),param_6);
  HVar4.unknown = *(undefined **)(param_6 + 0x50);
  alStack_80[2] = param_6;
  _swift_bridgeObjectRetain();
  HVar4 = SwiftUI::HorizontalAlignment::get_center(HVar4);
  local_84 = 0;
  FUN_1000036d0(&DAT_10054e008,PTR_typeMetadataAccessor_100522918,
                PTR_SwiftUI__SwiftUI__PinnedScrollableViews_>Swift__OptionSet_100522920);
  Swift::OptionSet::_init();
  puVar5 = &DAT_10055ce18;
  FUN_100002f94(&DAT_10055ce18,&DAT_100432320);
  puVar6 = puVar5;
  FUN_100341bc0();
  puVar12[-2] = puVar6;
  LVar7 = SwiftUI::LazyVGrid::_init
                    (lVar10,puVar6,HVar4.unknown,0x4034000000000000,0,lVar8,FUN_100341bb8,alStack_80
                     ,puVar5);
  _all = SwiftUI::Edge::Set::get_top(LVar7.unknown);
  uVar13 = 0x4040000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  puVar1 = (undefined1 *)(lVar10 + *(int *)(puVar3 + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar13;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  FUN_1000087e4(puVar12,lVar11,&DAT_10055ce08,&DAT_100432310);
  FUN_1000087e4(lVar10,lVar9,&DAT_10055ce00,&DAT_100432308);
  lVar8 = local_90;
  FUN_1000087e4(lVar11,local_90,&DAT_10055ce08,&DAT_100432310);
  puVar3 = &DAT_10055ce30;
  FUN_100002f94(&DAT_10055ce30,&DAT_100432328);
  FUN_1000087e4(lVar9,lVar8 + *(int *)(puVar3 + 0x30),&DAT_10055ce00,&DAT_100432308);
  FUN_10002a29c(lVar10,&DAT_10055ce00,&DAT_100432308);
  FUN_10002a29c(puVar12,&DAT_10055ce08,&DAT_100432310);
  FUN_10002a29c(lVar9,&DAT_10055ce00,&DAT_100432308);
  FUN_10002a29c(lVar11,&DAT_10055ce08,&DAT_100432310);
  return;
}

