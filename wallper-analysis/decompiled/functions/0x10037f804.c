// rea decompile_all
// name: FUN_10037f804
// address: 0x10037f804
// body: available
// range: 0x10037f804-0x10037fd07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037f804(long param_1)

{
  undefined *puVar1;
  Divider DVar2;
  long lVar3;
  undefined *puVar4;
  Divider DVar5;
  ButtonRole BVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long lVar8;
  long extraout_x8_01;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long lVar15;
  undefined8 unaff_x20;
  ulong uVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  code *pcVar20;
  ulong uVar21;
  
  puVar1 = &DAT_10054dee8;
  FUN_100002f94(&DAT_10054dee8,&DAT_10041ed20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar2 = SwiftUI::Divider::typeMetadataAccessor();
  lVar7 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar7 + 0x40));
  lVar9 = (long)(&stack0xffffffffffffff30 + -extraout_x8) -
          (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = lVar9 - extraout_x12;
  lVar3 = 0;
  FUN_10038ffac();
  lVar15 = *(long *)(lVar3 + -8);
  lVar19 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar8 - (lVar19 + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100553210;
  FUN_100002f94(&DAT_100553210,&DAT_1004365b0);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar3 + 0x40));
  lVar10 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = lVar10 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar11 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar12 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar13 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100521118)();
  FUN_100029504();
  uVar16 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar21 = uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff);
  puVar4 = &DAT_10053c8a8;
  _swift_allocObject(&DAT_10053c8a8,uVar21 + lVar19,uVar16 | 7);
  FUN_100007e64(lVar18,puVar4 + uVar21,FUN_10038ffac);
  FUN_100002f94(&DAT_10054b570,&DAT_100433140);
  FUN_1000087a0(&DAT_10054b568,&DAT_10054b570,&DAT_100433140,
                PTR_SwiftUI__SwiftUI__Label<undefined,undefined>_>SwiftUI__View_100523358);
  SwiftUI::Button::_init();
  FUN_100029504(unaff_x20,lVar18,FUN_10038ffac);
  puVar4 = &DAT_10053c8d0;
  _swift_allocObject(&DAT_10053c8d0,uVar21 + lVar19,uVar16 | 7);
  FUN_100007e64(lVar18,puVar4 + uVar21,FUN_10038ffac);
  SwiftUI::Button::_init();
  DVar5 = SwiftUI::Divider::init();
  SwiftUI::ButtonRole::get_destructive((ButtonRole)DVar5.unknown);
  BVar6 = SwiftUI::ButtonRole::typeMetadataAccessor();
  (**(code **)(*(long *)(BVar6.unknown + -8) + 0x38))
            (&stack0xffffffffffffff30 + -extraout_x8,0,1,BVar6.unknown);
  FUN_100029504(unaff_x20,lVar18,FUN_10038ffac);
  puVar4 = &DAT_10053c8f8;
  _swift_allocObject(&DAT_10053c8f8,uVar21 + lVar19,uVar16 | 7);
  FUN_100007e64(lVar18,puVar4 + uVar21,FUN_10038ffac);
  SwiftUI::Button::_init();
  pcVar17 = *(code **)(lVar3 + 0x10);
  (*pcVar17)(lVar12,lVar14 - extraout_x12_04,puVar1);
  (*pcVar17)(lVar11,lVar14,puVar1);
  pcVar20 = *(code **)(lVar7 + 0x10);
  (*pcVar20)(lVar9,lVar8,DVar2.unknown);
  (*pcVar17)(lVar10,lVar13,puVar1);
  (*pcVar17)(param_1,lVar12,puVar1);
  puVar4 = &DAT_10055f068;
  FUN_100002f94(&DAT_10055f068,&DAT_100434818);
  (*pcVar17)(param_1 + *(int *)(puVar4 + 0x30),lVar11,puVar1);
  (*pcVar20)(param_1 + *(int *)(puVar4 + 0x40),lVar9,DVar2.unknown);
  (*pcVar17)(param_1 + *(int *)(puVar4 + 0x50),lVar10,puVar1);
  pcVar17 = *(code **)(lVar3 + 8);
  (*pcVar17)(lVar13,puVar1);
  pcVar20 = *(code **)(lVar7 + 8);
  (*pcVar20)(lVar8,DVar2.unknown);
  (*pcVar17)(lVar14,puVar1);
  (*pcVar17)(lVar14 - extraout_x12_04,puVar1);
  (*pcVar17)(lVar10,puVar1);
  (*pcVar20)(lVar9,DVar2.unknown);
  (*pcVar17)(lVar11,puVar1);
  (*pcVar17)(lVar12,puVar1);
  return;
}

