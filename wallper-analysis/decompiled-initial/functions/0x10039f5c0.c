// rea decompile_all
// name: FUN_10039f5c0
// address: 0x10039f5c0
// body: available
// range: 0x10039f5c0-0x10039f947 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10039f5c0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ButtonRole BVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long lVar14;
  String stringLiteral;
  String stringLiteral_00;
  undefined1 auStack_c0 [4];
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  LocalizedStringKey LStack_a8;
  long local_a0;
  code *local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar3 = 0;
  local_90 = param_2;
  local_68 = param_1;
  FUN_10039c2bc();
  lVar10 = *(long *)(lVar3 + -8);
  lVar14 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar12 = auStack_c0 + -(lVar14 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10054dee8;
  FUN_100002f94(&DAT_10054dee8,&DAT_10041ed20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)puVar12 - extraout_x8;
  puVar4 = &DAT_10054def0;
  FUN_100002f94(&DAT_10054def0,&DAT_100422df0);
  local_78 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_78 + 0x40));
  lVar3 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_70 = lVar3;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar3 = lVar3 - extraout_x12;
  local_80 = lVar3;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar3 = lVar3 - extraout_x12_00;
  local_88 = lVar3;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_a0 = lVar3 - extraout_x12_01;
  uVar7 = 0xef7473696c79616c;
  stringLiteral.bridgeObject = (void *)0xef7473696c79616c;
  stringLiteral.str = (char *)0x50206574656c6544;
  LStack_a8 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  local_bc = param_4;
  local_b8 = param_5;
  local_b0 = uVar7;
  SwiftUI::ButtonRole::get_destructive((ButtonRole)LStack_a8.unknown);
  BVar5 = SwiftUI::ButtonRole::typeMetadataAccessor();
  local_98 = *(code **)(*(long *)(BVar5.unknown + -8) + 0x38);
  (*local_98)(lVar8,0,1,BVar5.unknown);
  FUN_100029504(param_2,puVar12,FUN_10039c2bc);
  uVar11 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar13 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
  puVar6 = &DAT_10053cc08;
  _swift_allocObject(&DAT_10053cc08,uVar13 + lVar14,uVar11 | 7);
  FUN_100007e64(puVar12,puVar6 + uVar13,FUN_10039c2bc);
  (extension_SwiftUI)::SwiftUI::Button::_init(LStack_a8);
  stringLiteral_00.bridgeObject = (void *)0xe600000000000000;
  stringLiteral_00.str = (char *)0x6c65636e6143;
  uVar7 = 0xe600000000000000;
  LStack_a8 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  local_b0 = uVar7;
  SwiftUI::ButtonRole::get_cancel((ButtonRole)LStack_a8.unknown);
  (*local_98)(lVar8,0,1,BVar5.unknown);
  FUN_100029504(local_90,puVar12,FUN_10039c2bc);
  puVar6 = &DAT_10053cc30;
  _swift_allocObject(&DAT_10053cc30,uVar13 + lVar14,uVar11 | 7);
  FUN_100007e64(puVar12,puVar6 + uVar13,FUN_10039c2bc);
  lVar8 = local_88;
  (extension_SwiftUI)::SwiftUI::Button::_init(LStack_a8);
  lVar14 = local_78;
  lVar10 = local_80;
  lVar3 = local_a0;
  pcVar9 = *(code **)(local_78 + 0x10);
  (*pcVar9)(local_80,local_a0,puVar4);
  lVar1 = local_70;
  (*pcVar9)(local_70,lVar8,puVar4);
  lVar2 = local_68;
  (*pcVar9)(local_68,lVar10,puVar4);
  puVar6 = &DAT_10054e218;
  FUN_100002f94(&DAT_10054e218,&DAT_10041f0d0);
  (*pcVar9)(lVar2 + *(int *)(puVar6 + 0x30),lVar1,puVar4);
  pcVar9 = *(code **)(lVar14 + 8);
  (*pcVar9)(lVar8,puVar4);
  (*pcVar9)(lVar3,puVar4);
  (*pcVar9)(lVar1,puVar4);
  (*pcVar9)(lVar10,puVar4);
  return;
}

