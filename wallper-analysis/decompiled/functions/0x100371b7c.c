// rea decompile_all
// name: FUN_100371b7c
// address: 0x100371b7c
// body: available
// range: 0x100371b7c-0x100371dab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100371b7c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  HorizontalAlignment HVar3;
  undefined *puVar4;
  State SVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 auStack_70 [2];
  
  lVar11 = *(long *)(param_2 + -8);
  lVar9 = *(long *)(lVar11 + 0x40);
  auStack_70[1] = param_1;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = (long)auStack_70 - (lVar9 + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100550ec0;
  FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar14 - extraout_x8;
  puVar2 = &DAT_10055e728;
  FUN_100002f94(&DAT_10055e728,&DAT_100433f80);
  HVar3.unknown = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = (undefined8 *)(lVar12 - extraout_x8_00);
  HVar3 = SwiftUI::HorizontalAlignment::get_leading(HVar3);
  *puVar13 = HVar3.unknown;
  puVar13[1] = 0x402c000000000000;
  *(undefined1 *)(puVar13 + 2) = 0;
  puVar4 = &DAT_10055e730;
  FUN_100002f94(&DAT_10055e730,&DAT_100433f88);
  FUN_10036f3d4((long)puVar13 + (long)*(int *)(puVar4 + 0x2c));
  SVar5.unknown = &DAT_10055dca8;
  FUN_100002f94(&DAT_10055dca8,&DAT_1004334a8);
  SwiftUI::State::get_wrappedValue(SVar5);
  FUN_100029504();
  uVar8 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar10 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  puVar4 = &DAT_10053c258;
  _swift_allocObject(&DAT_10053c258,uVar10 + lVar9,uVar8 | 7);
  FUN_100007e64(lVar14,puVar4 + uVar10,FUN_100387eec);
  puVar6 = &DAT_10055e738;
  FUN_1000087a0(&DAT_10055e738,&DAT_10055e728,&DAT_100433f80,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_1005234c0);
  puVar7 = puVar6;
  FUN_10038f0fc();
  (extension_SwiftUI)::SwiftUI::View::_onChange
            (auStack_70[1],lVar12,0,FUN_10038f0b0,puVar4,puVar2,puVar1,puVar6,puVar7);
  _swift_release(puVar4);
  FUN_10002a29c(lVar12,&DAT_100550ec0,&DAT_100422eb0);
  FUN_10002a29c(puVar13,&DAT_10055e728,&DAT_100433f80);
  return;
}

