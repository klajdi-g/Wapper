// rea decompile_all
// name: FUN_10010dbb4
// address: 0x10010dbb4
// body: available
// range: 0x10010dbb4-0x10010e2f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10010dbb4(undefined8 param_1,long *param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  ModifiedContent MVar2;
  ModifiedContent x;
  ModifiedContent MVar3;
  State SVar4;
  undefined *puVar5;
  undefined *puVar6;
  CGFloat y;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar11;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x12;
  code *pcVar12;
  undefined1 *puVar13;
  long lVar14;
  double dVar15;
  undefined1 auStack_1d0 [8];
  State local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  undefined8 local_1a0;
  long local_198;
  long local_190;
  undefined *local_188;
  long local_180;
  long local_178;
  undefined *local_170;
  long local_168;
  long local_160;
  undefined *local_158;
  long local_150;
  undefined *local_148;
  long local_140;
  long local_138;
  undefined *local_130;
  long local_128;
  long local_120;
  long local_118;
  undefined8 local_110;
  undefined *local_108;
  undefined *puStack_100;
  undefined *local_f8;
  undefined *puStack_f0;
  undefined *local_e8;
  undefined *puStack_e0;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined *local_b8;
  undefined *puStack_b0;
  undefined8 local_a8;
  undefined *puStack_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  local_1b8 = *(long *)(param_4 + -8);
  local_1a0 = param_5;
  local_110 = param_1;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1b8 + 0x40));
  puVar13 = auStack_1d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100002fe4(&DAT_1005530a0,&DAT_100425d68);
  MVar2 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_1a8 = *(long *)(MVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_1a8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar14 = (long)puVar13 - extraout_x8_00;
  x = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_190 = *(long *)(x.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_190 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  local_1b0 = lVar14 - extraout_x8_01;
  MVar3 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_180 = *(long *)(MVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_180 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar11 = (lVar14 - extraout_x8_01) - extraout_x8_02;
  local_198 = lVar11;
  local_170 = MVar3.unknown;
  MVar3 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_168 = *(long *)(MVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_168 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar11 = lVar11 - extraout_x8_03;
  local_178 = lVar11;
  local_158 = MVar3.unknown;
  MVar3 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_150 = *(long *)(MVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_150 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar11 = lVar11 - extraout_x8_04;
  local_160 = lVar11;
  SwiftUI::AccessibilityAttachmentModifier::typeMetadataAccessor();
  local_148 = MVar3.unknown;
  MVar3 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_138 = *(long *)(MVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_138 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar11 = lVar11 - extraout_x8_05;
  local_140 = lVar11;
  FUN_100002fe4(&DAT_1005530a8,&DAT_100425d70);
  local_130 = MVar3.unknown;
  local_188 = (undefined *)SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_118 = *(long *)(local_188 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_118 + 0x40));
  lVar11 = lVar11 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  local_128 = lVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_120 = lVar11 - extraout_x12;
  lVar11 = *param_2;
  uStack_88 = *(undefined8 *)(param_3 + 0x40);
  local_90 = *(undefined8 *)(param_3 + 0x38);
  SVar4.unknown = &DAT_10054ba40;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  local_1c8.unknown = SVar4.unknown;
  SwiftUI::State::get_wrappedValue(SVar4);
  (**(code **)(param_3 + 0x18))(puVar13,lVar11);
  puVar5 = &DAT_100425db0;
  _swift_getKeyPath(&DAT_100425db0);
  local_a8 = local_1a0;
  if (lVar11 == local_98) {
    uVar10 = *(undefined1 *)(param_3 + 0x10);
  }
  else {
    uVar10 = 0;
  }
  local_90 = CONCAT71(local_90._1_7_,uVar10);
  local_1c0 = param_3;
  (extension_SwiftUI)::SwiftUI::View::_environment(lVar14,puVar5,&local_90,param_4,local_1a0);
  _swift_release(puVar5);
  (**(code **)(local_1b8 + 8))(puVar13,param_4);
  puVar5 = &DAT_1005530b8;
  FUN_1000087a0(&DAT_1005530b8,&DAT_1005530a0,&DAT_100425d68,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100522bc8
               );
  puVar6 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  puStack_a0 = puVar5;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             MVar2.unknown,&local_a8);
  lVar1 = local_1b0;
  (extension_SwiftUI)::SwiftUI::View::_compositingGroup();
  (**(code **)(local_1a8 + 8))(lVar14,MVar2.unknown);
  if (lVar11 == local_98) {
    dVar15 = 1.0;
  }
  else {
    uStack_88 = *(undefined8 *)(local_1c0 + 0x40);
    local_90 = *(undefined8 *)(local_1c0 + 0x38);
    SwiftUI::State::get_wrappedValue(local_1c8);
    dVar15 = 0.0;
  }
  puVar9 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  puStack_b0 = 
  PTR___protocol_witness_table_for_SwiftUI__CompositingGroupEffect___SwiftUI_ViewModifier_in_SwiftUI_100522a40
  ;
  y.unknown = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_b8 = puVar6;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             x.unknown,&local_b8);
  lVar14 = local_198;
  (extension_SwiftUI)::SwiftUI::View::_offset((CGFloat)x.unknown,y);
  (**(code **)(local_190 + 8))(lVar1,x.unknown);
  puVar5 = local_170;
  puStack_c0 = 
  PTR___protocol_witness_table_for_SwiftUI__OffsetEffect___SwiftUI_ViewModifier_in_SwiftUI_100521ff0
  ;
  puVar6 = puVar9;
  local_c8 = y.unknown;
  _swift_getWitnessTable(puVar9,local_170,&local_c8);
  lVar1 = local_178;
  (extension_SwiftUI)::SwiftUI::View::_opacity(dVar15);
  (**(code **)(local_180 + 8))(lVar14,puVar5);
  puVar5 = local_158;
  puStack_d0 = 
  PTR___protocol_witness_table_for_SwiftUI__OpacityEffect___SwiftUI_ViewModifier_in_SwiftUI_100522190
  ;
  puVar7 = puVar9;
  local_d8 = puVar6;
  _swift_getWitnessTable(puVar9,local_158,&local_d8);
  lVar14 = local_160;
  (extension_SwiftUI)::SwiftUI::View::_allowsHitTesting(lVar11 == local_98);
  (**(code **)(local_168 + 8))(lVar1,puVar5);
  puVar5 = local_148;
  puStack_e0 = 
  PTR___protocol_witness_table_for_SwiftUI__AllowsHitTestingModifier___SwiftUI_ViewModifier_in_SwiftUI_100522b18
  ;
  puVar8 = puVar9;
  local_e8 = puVar7;
  _swift_getWitnessTable(puVar9,local_148,&local_e8);
  lVar1 = local_140;
  (extension_SwiftUI)::SwiftUI::View::accessibilityHidden(lVar11 != local_98);
  (**(code **)(local_150 + 8))(lVar14,puVar5);
  puVar5 = &DAT_1005515d8;
  FUN_1000036d0(&DAT_1005515d8,PTR_typeMetadataAccessor_100522be8,
                PTR_SwiftUI__SwiftUI__AccessibilityAttachmentModifier_>SwiftUI__ViewModifier_100522be0
               );
  puVar6 = local_130;
  puVar7 = puVar9;
  local_f8 = puVar8;
  puStack_f0 = puVar5;
  _swift_getWitnessTable(puVar9,local_130,&local_f8);
  lVar11 = local_128;
  (extension_SwiftUI)::SwiftUI::View::_zIndex(dVar15);
  (**(code **)(local_138 + 8))(lVar1,puVar6);
  puVar5 = &DAT_1005530c0;
  FUN_1000087a0(&DAT_1005530c0,&DAT_1005530a8,&DAT_100425d70,
                PTR_SwiftUI__SwiftUI___TraitWritingModifier<undefined>_>SwiftUI__ViewModifier_100522978
               );
  puVar6 = local_188;
  local_108 = puVar7;
  puStack_100 = puVar5;
  _swift_getWitnessTable(puVar9,local_188,&local_108);
  lVar14 = local_120;
  thunk_FUN_1000bdaa4(local_120,lVar11,puVar6,puVar9);
  pcVar12 = *(code **)(local_118 + 8);
  (*pcVar12)(lVar11,puVar6);
  thunk_FUN_1000bdaa4(local_110,lVar14,puVar6,puVar9);
  (*pcVar12)(lVar14,puVar6);
  return;
}

