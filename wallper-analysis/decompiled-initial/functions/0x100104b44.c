// rea decompile_all
// name: FUN_100104b44
// address: 0x100104b44
// body: available
// range: 0x100104b44-0x100104f43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100104b44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  )

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  PlainButtonStyle PVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ScrollView<undefined> SVar11;
  Set _all;
  long extraout_x8;
  long lVar12;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  Set SVar14;
  code *pcVar15;
  undefined8 uVar16;
  long local_100;
  undefined8 local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  puVar6 = &DAT_100552bb0;
  local_c0 = param_1;
  FUN_100002f94(&DAT_100552bb0,&DAT_100425458);
  local_d0 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar12 = (long)&local_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_b8 = lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar12 - extraout_x12;
  local_c8 = lVar12;
  PVar7 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_e8 = *(long *)(PVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e8 + 0x40));
  lVar12 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100552bb8;
  FUN_100002f94(&DAT_100552bb8,&DAT_100425460);
  local_f0 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_f0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  SVar14.unknown = (undefined *)(lVar12 - extraout_x8_01);
  puVar8 = &DAT_100552bc0;
  FUN_100002f94(&DAT_100552bc0,&DAT_100425468);
  local_e0 = *(long *)(puVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e0 + 0x40));
  lVar13 = (long)SVar14.unknown - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_d8 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar13 - extraout_x12_00;
  local_70 = param_9;
  if (param_9 == 0) {
    _swift_bridgeObjectRetain(param_8);
    local_70 = param_8;
  }
  local_a0 = param_6;
  uStack_98 = param_7;
  local_90 = param_8;
  lStack_88 = param_9;
  local_80 = param_6;
  uStack_78 = param_7;
  _swift_bridgeObjectRetain(param_9);
  _swift_bridgeObjectRetain(param_7);
  FUN_100002f94(&DAT_100552bc8,&DAT_100425470);
  local_f8 = param_6;
  FUN_1001058dc();
  local_100 = param_8;
  FUN_100105a0c();
  (extension_SwiftUI)::SwiftUI::NavigationLink::_init();
  SwiftUI::PlainButtonStyle::init();
  puVar9 = &DAT_100552c00;
  FUN_1000087a0(&DAT_100552c00,&DAT_100552bb8,&DAT_100425460,
                PTR_SwiftUI__SwiftUI__NavigationLink<undefined,undefined>_>SwiftUI__View_100522118);
  puVar10 = &DAT_10054a8b0;
  FUN_1000036d0(&DAT_10054a8b0,PTR_typeMetadataAccessor_100522380,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (lVar13,lVar12,puVar6,PVar7.unknown,puVar9,puVar10);
  (**(code **)(local_e8 + 8))(lVar12,PVar7.unknown);
  (**(code **)(local_f0 + 8))(SVar14.unknown,puVar6);
  SVar14 = SwiftUI::Axis::Set::get_horizontal(SVar14);
  local_a0 = local_f8;
  local_90 = local_100;
  uStack_98 = param_7;
  lStack_88 = param_9;
  FUN_100002f94(&DAT_100552c08,&DAT_100425490);
  FUN_100105a58();
  lVar3 = local_c8;
  SVar11 = SwiftUI::ScrollView::_init(SVar14,false);
  _all = SwiftUI::Edge::Set::get_vertical(SVar11.unknown);
  uVar16 = 0xc028000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  lVar2 = local_d8;
  lVar12 = local_e0;
  puVar1 = (undefined1 *)(lVar3 + *(int *)(local_d0 + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar16;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  pcVar15 = *(code **)(local_e0 + 0x10);
  (*pcVar15)(local_d8,lVar13,puVar8);
  lVar5 = local_b8;
  FUN_1000087e4(lVar3,local_b8,&DAT_100552bb0,&DAT_100425458);
  lVar4 = local_c0;
  (*pcVar15)(local_c0,lVar2,puVar8);
  puVar6 = &DAT_100552c38;
  FUN_100002f94(&DAT_100552c38,&DAT_1004254a8);
  FUN_1000087e4(lVar5,lVar4 + *(int *)(puVar6 + 0x30),&DAT_100552bb0,&DAT_100425458);
  FUN_10002a29c(lVar3,&DAT_100552bb0,&DAT_100425458);
  pcVar15 = *(code **)(lVar12 + 8);
  (*pcVar15)(lVar13,puVar8);
  FUN_10002a29c(lVar5,&DAT_100552bb0,&DAT_100425458);
  (*pcVar15)(lVar2,puVar8);
  return;
}

