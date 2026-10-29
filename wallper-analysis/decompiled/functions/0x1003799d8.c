// rea decompile_all
// name: FUN_1003799d8
// address: 0x1003799d8
// body: available
// range: 0x1003799d8-0x100379b87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100379b4c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003799d8(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  Design DVar2;
  undefined *puVar3;
  LocalizedStringKey LVar4;
  Font FVar6;
  undefined *puVar7;
  Color CVar8;
  HierarchicalShapeStyle HVar9;
  AnyShapeStyle AVar10;
  undefined8 uVar11;
  long extraout_x8;
  String stringLiteral;
  String systemImage;
  undefined1 auStack_50 [4];
  undefined4 local_4c;
  undefined *local_48;
  long lVar5;
  
  puVar3 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar11 = 0xeb00000000656d69;
  stringLiteral.bridgeObject = (void *)0xeb00000000656d69;
  stringLiteral.str = (char *)0x54206574656c6544;
  LVar4 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  systemImage.bridgeObject._0_4_ = param_4 & 1;
  systemImage.str = (char *)uVar11;
  systemImage.bridgeObject._4_4_ = 0;
  (extension_SwiftUI)::SwiftUI::Label::_init(LVar4,systemImage);
  DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar5 = CONCAT71((int7)((ulong)LVar4.unknown >> 8),DVar2.value);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(auStack_50 + -extraout_x8,1,1,lVar5);
  FVar6 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
  FUN_10002a29c(auStack_50 + -extraout_x8,&DAT_10054a828,&DAT_10041e3c0);
  puVar3 = &DAT_100432f88;
  _swift_getKeyPath();
  puVar7 = &DAT_10055d0d8;
  FUN_100002f94(&DAT_10055d0d8,&DAT_100432690);
  iVar1 = *(int *)(puVar7 + 0x24);
  *(undefined8 *)(param_1 + iVar1) = puVar3;
  ((undefined8 *)(param_1 + iVar1))[1] = FVar6.unknown;
  CVar8.unknown = (undefined *)0x0;
  FUN_10025ee04();
  if (*(ulong *)(*(long *)(param_2 + *(int *)(CVar8.unknown + 0x34)) + 0x10) < 2) {
    HVar9 = SwiftUI::HierarchicalShapeStyle::get_secondary(CVar8.unknown);
    local_4c = SUB84(HVar9.unknown,0);
    FUN_100025b4c();
    puVar3 = PTR___type_metadata_for_SwiftUI_HierarchicalShapeStyle_1005229b8;
  }
  else {
    HVar9.unknown = (undefined *)SwiftUI::Color::get_red(CVar8);
    local_48 = HVar9.unknown;
    FUN_100028d58();
    puVar3 = PTR___type_metadata_for_SwiftUI_Color_100523288;
  }
  AVar10 = SwiftUI::AnyShapeStyle::_init(HVar9.unknown,puVar3,HVar9.unknown);
  puVar3 = &DAT_10055d9f8;
  FUN_100002f94(&DAT_10055d9f8,&DAT_100433130);
  *(undefined **)(param_1 + *(int *)(puVar3 + 0x24)) = AVar10.unknown;
  return;
}

