// rea decompile_all
// name: FUN_10033fad0
// address: 0x10033fad0
// body: available
// range: 0x10033fad0-0x10033fd77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010033fbcc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10033fad0(long param_1,CGFloat param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,byte *param_6)

{
  undefined1 *puVar1;
  int iVar2;
  Design DVar3;
  undefined *puVar4;
  ulong uVar5;
  Label<Text,Image> LVar6;
  Font FVar8;
  undefined *puVar9;
  Color CVar10;
  Set _all;
  Set SVar11;
  long extraout_x8;
  long extraout_x8_00;
  Set SVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong local_90;
  undefined *puStack_88;
  long lVar7;
  
  puVar4 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)&local_90 - extraout_x8;
  puVar4 = &DAT_10055d0d0;
  puVar9 = &DAT_100433260;
  FUN_100002f94();
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  SVar12.unknown = (undefined *)(lVar13 - extraout_x8_00);
  uVar14 = (ulong)*param_6;
  uVar5 = uVar14;
  FUN_100077d00();
  local_90 = uVar5;
  puStack_88 = puVar9;
  FUN_100077ee4(uVar14);
  uVar5 = uVar14;
  FUN_100026df4();
  LVar6 = (extension_SwiftUI)::SwiftUI::Label::_init
                    (SVar12.unknown,uVar5,uVar14,puVar9,
                     PTR___type_metadata_for_Swift_String_100523a98,uVar5);
  SwiftUI::Font::Weight::get_medium((Weight)LVar6.unknown);
  DVar3 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar7 = CONCAT71((int7)((ulong)LVar6.unknown >> 8),DVar3.value);
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar13,1,1,lVar7);
  FVar8 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar13,&DAT_10054a828,&DAT_10041e3c0);
  puVar9 = &DAT_1004324f8;
  _swift_getKeyPath();
  CVar10.unknown = &DAT_10055d0d8;
  FUN_100002f94(&DAT_10055d0d8,&DAT_100432690);
  iVar2 = *(int *)(CVar10.unknown + 0x24);
  *(undefined **)(SVar12.unknown + iVar2) = puVar9;
  *(undefined **)((long)(SVar12.unknown + iVar2) + 8) = FVar8.unknown;
  CVar10 = SwiftUI::Color::get_white(CVar10);
  SVar11.unknown = &DAT_10055d0e0;
  FUN_100002f94(&DAT_10055d0e0,&DAT_100432698);
  *(undefined **)(SVar12.unknown + *(int *)(SVar11.unknown + 0x24)) = CVar10.unknown;
  _all = SwiftUI::Edge::Set::get_horizontal(SVar11);
  uVar15 = 0x4028000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar11.unknown = &DAT_10055d0e8;
  uVar16 = param_3;
  uVar17 = param_4;
  uVar18 = param_5;
  FUN_100002f94(&DAT_10055d0e8,&DAT_100433280);
  puVar1 = SVar12.unknown + *(int *)(SVar11.unknown + 0x24);
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar15;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar11 = SwiftUI::Edge::Set::get_vertical(SVar11);
  uVar15 = 0x401c000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar11.unknown);
  puVar1 = SVar12.unknown + *(int *)(puVar4 + 0x24);
  *puVar1 = (char)SVar11.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar15;
  *(undefined8 *)(puVar1 + 0x10) = uVar16;
  *(undefined8 *)(puVar1 + 0x18) = uVar17;
  *(undefined8 *)(puVar1 + 0x20) = uVar18;
  puVar1[0x28] = 0;
  FUN_100356a1c(param_1);
  FUN_10002a29c(SVar12.unknown,&DAT_10055d0d0,&DAT_100433260);
  SVar11 = SwiftUI::Edge::Set::get_all(SVar12);
  uVar15 = 0x4028000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar11.unknown);
  puVar4 = &DAT_10055d0f0;
  FUN_100002f94(&DAT_10055d0f0,&DAT_1004326a0);
  puVar1 = (undefined1 *)(param_1 + *(int *)(puVar4 + 0x24));
  *puVar1 = (char)SVar11.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar15;
  *(undefined8 *)(puVar1 + 0x10) = uVar16;
  *(undefined8 *)(puVar1 + 0x18) = uVar17;
  *(undefined8 *)(puVar1 + 0x20) = uVar18;
  puVar1[0x28] = 0;
  return;
}

