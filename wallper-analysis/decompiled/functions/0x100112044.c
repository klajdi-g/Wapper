// rea decompile_all
// name: FUN_100112044
// address: 0x100112044
// body: available
// range: 0x100112044-0x10011227b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100112044(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  TitleAndIconLabelStyle TVar3;
  undefined *puVar4;
  undefined *puVar5;
  LocalizedStringKey LVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  long lVar9;
  long lVar10;
  String stringLiteral;
  undefined1 auStack_a0 [8];
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  
  puVar2 = &DAT_1005530e8;
  local_88 = param_1;
  FUN_100002f94(&DAT_1005530e8,&DAT_100425f50);
  lVar10 = *(long *)(puVar2 + -8);
  local_98 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_1005530f0;
  FUN_100002f94(&DAT_1005530f0,&DAT_100425f58);
  local_90 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)(auStack_a0 + -extraout_x8) - extraout_x8_00;
  uVar7 = *unaff_x20;
  uVar8 = unaff_x20[1];
  puVar2 = &DAT_10052c980;
  _swift_allocObject(&DAT_10052c980,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(undefined8 *)(puVar2 + 0x18) = uVar8;
  _swift_retain(uVar7);
  FUN_100002f94(&DAT_1005530f8,&DAT_100425f60);
  puVar2 = &DAT_10054b570;
  FUN_100002fe4(&DAT_10054b570,&DAT_100433140);
  TVar3 = SwiftUI::TitleAndIconLabelStyle::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005229e0;
  puVar4 = &DAT_10054b568;
  FUN_1000087a0(&DAT_10054b568,&DAT_10054b570,&DAT_100433140,
                PTR_SwiftUI__SwiftUI__Label<undefined,undefined>_>SwiftUI__View_100523358);
  puVar5 = &DAT_100553100;
  FUN_1000036d0(&DAT_100553100,puVar1,
                PTR_SwiftUI__SwiftUI__TitleAndIconLabelStyle_>SwiftUI__LabelStyle_1005229d0);
  local_80 = puVar2;
  puStack_78 = TVar3.unknown;
  local_70 = puVar4;
  puStack_68 = puVar5;
  _swift_getOpaqueTypeConformance2
            (&local_80,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_labelStyle<A_where_A1:_SwiftUI_LabelStyle>(A1)__>_some>>_100522e80
             ,1);
  uVar8 = 0;
  SwiftUI::Button::_init();
  FUN_10010ffa4(lVar9);
  (**(code **)(lVar10 + 8))(auStack_a0 + -extraout_x8,local_98);
  uVar7 = 0x80000001004dd970;
  stringLiteral.bridgeObject = (void *)0x80000001004dd970;
  stringLiteral.str = (char *)0x100000000000004d;
  LVar6 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  FUN_100112780();
  (extension_SwiftUI)::SwiftUI::View::_help(LVar6);
  _swift_bridgeObjectRelease(uVar8);
  _swift_bridgeObjectRelease(uVar7);
  FUN_10011288c(lVar9);
  return;
}

