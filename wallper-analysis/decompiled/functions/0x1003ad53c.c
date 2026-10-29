// rea decompile_all
// name: FUN_1003ad53c
// address: 0x1003ad53c
// body: available
// range: 0x1003ad53c-0x1003ad947 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003ad53c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  String stringLiteral;
  String stringLiteral_00;
  String stringLiteral_01;
  String stringLiteral_02;
  String stringLiteral_03;
  undefined8 auStack_b0 [6];
  long local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  
  puVar6 = &DAT_10055fae8;
  FUN_100002f94(&DAT_10055fae8,&DAT_100435300);
  local_70 = *(long *)(puVar6 + -8);
  lVar7 = *(long *)(local_70 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar11 = lVar7 + 0xfU & 0xfffffffffffffff0;
  lVar7 = -uVar11;
  lVar9 = (long)&local_80 + lVar7;
  stringLiteral.bridgeObject = (void *)0xe400000000000000;
  stringLiteral.str = (char *)0x656d6f48;
  local_78 = lVar9;
  SwiftUI::LocalizedStringKey::init(stringLiteral);
  puVar4 = PTR___protocol_witness_table_for_Swift_Int___Swift_Hashable_in_Swift_100523be0;
  puVar3 = PTR___type_metadata_for_Swift_Int_100523bd8;
  puVar2 = PTR___type_metadata_for_SwiftUI_Color_100523288;
  puVar1 = PTR___protocol_witness_table_for_SwiftUI_Color___SwiftUI_View_in_SwiftUI_100523278;
  local_68 = 0;
  *(undefined **)((long)auStack_b0 + lVar7 + 0x20) =
       PTR___protocol_witness_table_for_SwiftUI_Color___SwiftUI_View_in_SwiftUI_100523278;
  *(undefined **)((long)auStack_b0 + lVar7 + 0x10) = PTR___type_metadata_for_SwiftUI_Color_100523288
  ;
  *(undefined **)((long)auStack_b0 + lVar7 + 0x18) =
       PTR___protocol_witness_table_for_Swift_Int___Swift_Hashable_in_Swift_100523be0;
  *(undefined8 *)((long)auStack_b0 + lVar7) = 0;
  *(undefined **)((long)auStack_b0 + lVar7 + 8) = PTR___type_metadata_for_Swift_Int_100523bd8;
  (extension_SwiftUI)::SwiftUI::Tab::_init(lVar9);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = lVar9 - uVar11;
  stringLiteral_00.bridgeObject = (void *)0xe700000000000000;
  stringLiteral_00.str = (char *)0x65726f6c707845;
  local_80 = lVar9;
  SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  local_68 = 1;
  *(undefined **)(lVar9 + -0x18) = puVar4;
  *(undefined **)(lVar9 + -0x10) = puVar1;
  *(undefined **)(lVar9 + -0x28) = puVar3;
  *(undefined **)(lVar9 + -0x20) = puVar2;
  *(undefined8 *)(lVar9 + -0x30) = 0;
  (extension_SwiftUI)::SwiftUI::Tab::_init(lVar9);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = lVar9 - uVar11;
  stringLiteral_01.bridgeObject = (void *)0xe800000000000000;
  stringLiteral_01.str = (char *)0x616964654d20794d;
  SwiftUI::LocalizedStringKey::init(stringLiteral_01);
  local_68 = 2;
  *(undefined **)(lVar9 + -0x18) = puVar4;
  *(undefined **)(lVar9 + -0x10) = puVar1;
  *(undefined **)(lVar9 + -0x28) = puVar3;
  *(undefined **)(lVar9 + -0x20) = puVar2;
  *(undefined8 *)(lVar9 + -0x30) = 0;
  (extension_SwiftUI)::SwiftUI::Tab::_init(lVar9);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar9 - uVar11;
  stringLiteral_02.bridgeObject = (void *)0xe900000000000073;
  stringLiteral_02.str = (char *)0x7473696c79616c50;
  SwiftUI::LocalizedStringKey::init(stringLiteral_02);
  local_68 = 3;
  *(undefined **)(lVar10 + -0x18) = puVar4;
  *(undefined **)(lVar10 + -0x10) = puVar1;
  *(undefined **)(lVar10 + -0x28) = puVar3;
  *(undefined **)(lVar10 + -0x20) = puVar2;
  *(undefined8 *)(lVar10 + -0x30) = 0;
  (extension_SwiftUI)::SwiftUI::Tab::_init(lVar10);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar10 - uVar11;
  stringLiteral_03.bridgeObject = (void *)0xe500000000000000;
  stringLiteral_03.str = (char *)0x636973754d;
  SwiftUI::LocalizedStringKey::init(stringLiteral_03);
  local_68 = 4;
  *(undefined **)(lVar12 + -0x18) = puVar4;
  *(undefined **)(lVar12 + -0x10) = puVar1;
  *(undefined **)(lVar12 + -0x28) = puVar3;
  *(undefined **)(lVar12 + -0x20) = puVar2;
  *(undefined8 *)(lVar12 + -0x30) = 0;
  (extension_SwiftUI)::SwiftUI::Tab::_init(lVar12);
  FUN_1003b1750();
  lVar5 = local_78;
  SwiftUI::TabContent::_get__identifiedView();
  FUN_100002f94(&DAT_10055fb00,&DAT_100435308);
  lVar7 = local_80;
  SwiftUI::TabContent::_get__identifiedView();
  SwiftUI::TabContent::_get__identifiedView();
  SwiftUI::TabContent::_get__identifiedView();
  SwiftUI::TabContent::_get__identifiedView();
  pcVar8 = *(code **)(local_70 + 8);
  (*pcVar8)(lVar12,puVar6);
  (*pcVar8)(lVar10,puVar6);
  (*pcVar8)(lVar9,puVar6);
  (*pcVar8)(lVar7,puVar6);
  (*pcVar8)(lVar5,puVar6);
  return;
}

