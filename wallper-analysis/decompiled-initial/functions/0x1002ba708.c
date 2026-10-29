// rea decompile_all
// name: FUN_1002ba708
// address: 0x1002ba708
// body: available
// range: 0x1002ba708-0x1002bab03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ba708(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ButtonRole BVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  code *pcVar16;
  String stringLiteral;
  String stringLiteral_00;
  undefined1 auStack_e0 [4];
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  LocalizedStringKey LStack_c8;
  undefined8 local_c0;
  ulong local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined1 *local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = 0;
  local_c0 = param_3;
  local_70 = param_2;
  local_68 = param_1;
  FUN_100400294();
  local_80 = *(long *)(lVar3 + -8);
  local_78 = *(long *)(local_80 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar3 = 0;
  local_88 = auStack_e0 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0);
  FUN_1002bc1b0();
  lVar12 = *(long *)(lVar3 + -8);
  lVar3 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = (long)(auStack_e0 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0)) -
           (lVar3 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10054dee8;
  FUN_100002f94(&DAT_10054dee8,&DAT_10041ed20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar14 - extraout_x8;
  puVar4 = &DAT_10054def0;
  FUN_100002f94(&DAT_10054def0,&DAT_100422df0);
  local_98 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_98 + 0x40));
  lVar10 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_90 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar10 - extraout_x12_00;
  local_a0 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar10 - extraout_x12_01;
  local_a8 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_b0 = lVar10 - extraout_x12_02;
  stringLiteral.bridgeObject = (void *)0xe600000000000000;
  stringLiteral.str = (char *)0x6c65636e6143;
  uVar7 = 0xe600000000000000;
  LStack_c8 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  local_dc = param_4;
  local_d8 = param_5;
  local_d0 = uVar7;
  SwiftUI::ButtonRole::get_cancel((ButtonRole)LStack_c8.unknown);
  BVar5 = SwiftUI::ButtonRole::typeMetadataAccessor();
  pcVar16 = *(code **)(*(long *)(BVar5.unknown + -8) + 0x38);
  (*pcVar16)(lVar11,0,1,BVar5.unknown);
  FUN_100029504(param_3,lVar14,FUN_1002bc1b0);
  local_b8 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar13 = local_b8 + 0x10 & (local_b8 ^ 0xffffffffffffffff);
  lVar3 = uVar13 + lVar3;
  local_b8 = local_b8 | 7;
  puVar6 = &DAT_100537db8;
  _swift_allocObject(&DAT_100537db8,lVar3);
  FUN_100007e64(lVar14,puVar6 + uVar13,FUN_1002bc1b0);
  uVar7 = local_d8;
  (extension_SwiftUI)::SwiftUI::Button::_init(LStack_c8);
  stringLiteral_00.bridgeObject = (void *)0xe600000000000000;
  stringLiteral_00.str = (char *)0x6b6e696c6e55;
  uVar8 = 0xe600000000000000;
  LStack_c8 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  local_d8 = uVar7;
  local_d0 = uVar8;
  SwiftUI::ButtonRole::get_destructive((ButtonRole)LStack_c8.unknown);
  (*pcVar16)(lVar11,0,1,BVar5.unknown);
  FUN_100029504(local_c0,lVar14,FUN_1002bc1b0);
  puVar1 = local_88;
  FUN_100029504(local_70,local_88,FUN_100400294);
  uVar9 = (ulong)*(byte *)(local_80 + 0x50);
  uVar15 = lVar3 + uVar9 & (uVar9 ^ 0xffffffffffffffff);
  puVar6 = &DAT_100537de0;
  _swift_allocObject(&DAT_100537de0,uVar15 + local_78,local_b8 | uVar9);
  FUN_100007e64(lVar14,puVar6 + uVar13,FUN_1002bc1b0);
  FUN_100007e64(puVar1,puVar6 + uVar15,FUN_100400294);
  lVar10 = local_a8;
  (extension_SwiftUI)::SwiftUI::Button::_init(LStack_c8);
  lVar12 = local_98;
  lVar11 = local_a0;
  lVar3 = local_b0;
  pcVar16 = *(code **)(local_98 + 0x10);
  (*pcVar16)(local_a0,local_b0,puVar4);
  lVar14 = local_90;
  (*pcVar16)(local_90,lVar10,puVar4);
  lVar2 = local_68;
  (*pcVar16)(local_68,lVar11,puVar4);
  puVar6 = &DAT_10054e218;
  FUN_100002f94(&DAT_10054e218,&DAT_10041f0d0);
  (*pcVar16)(lVar2 + *(int *)(puVar6 + 0x30),lVar14,puVar4);
  pcVar16 = *(code **)(lVar12 + 8);
  (*pcVar16)(lVar10,puVar4);
  (*pcVar16)(lVar3,puVar4);
  (*pcVar16)(lVar14,puVar4);
  (*pcVar16)(lVar11,puVar4);
  return;
}

