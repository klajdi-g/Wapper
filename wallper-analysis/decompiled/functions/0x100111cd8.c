// rea decompile_all
// name: FUN_100111cd8
// address: 0x100111cd8
// body: available
// range: 0x100111cd8-0x100111e5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100111cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  TitleAndIconLabelStyle TVar1;
  undefined *puVar2;
  LocalizedStringKey LVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  String stringLiteral;
  String systemImage;
  
  TVar1 = SwiftUI::TitleAndIconLabelStyle::typeMetadataAccessor();
  lVar8 = *(long *)(TVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_10054b570;
  FUN_100002f94(&DAT_10054b570,&DAT_100433140);
  lVar9 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = 0x80000001004dd9c0;
  stringLiteral.bridgeObject = (void *)0x80000001004dd9c0;
  stringLiteral.str = (char *)0xd000000000000011;
  LVar3 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  systemImage.bridgeObject._0_4_ = param_4 & 1;
  systemImage.str = (char *)uVar6;
  systemImage.bridgeObject._4_4_ = 0;
  (extension_SwiftUI)::SwiftUI::Label::_init(LVar3,systemImage);
  SwiftUI::TitleAndIconLabelStyle::init();
  puVar4 = &DAT_10054b568;
  FUN_1000087a0(&DAT_10054b568,&DAT_10054b570,&DAT_100433140,
                PTR_SwiftUI__SwiftUI__Label<undefined,undefined>_>SwiftUI__View_100523358);
  puVar5 = &DAT_100553100;
  FUN_1000036d0(&DAT_100553100,PTR_typeMetadataAccessor_1005229e0,
                PTR_SwiftUI__SwiftUI__TitleAndIconLabelStyle_>SwiftUI__LabelStyle_1005229d0);
  (extension_SwiftUI)::SwiftUI::View::_labelStyle(param_1,puVar7,puVar2,TVar1.unknown,puVar4,puVar5)
  ;
  (**(code **)(lVar8 + 8))(puVar7,TVar1.unknown);
  (**(code **)(lVar9 + 8))((long)puVar7 - extraout_x8_00,puVar2);
  return;
}

