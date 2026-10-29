// rea decompile_all
// name: FUN_1003a43cc
// address: 0x1003a43cc
// body: available
// range: 0x1003a43cc-0x1003a4a2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003a43cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  UUID UVar9;
  undefined *puVar10;
  Alignment AVar11;
  Set _all;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar12;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar14;
  Alignment AVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 auStack_160 [2];
  undefined1 auStack_150 [8];
  long local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  long local_110;
  code *local_108;
  code *local_100;
  undefined *local_f8;
  code *local_f0;
  long local_e8;
  long local_e0;
  undefined1 *local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  undefined *puStack_b8;
  long local_b0;
  long local_a8;
  undefined8 local_90;
  
  puVar7 = &DAT_10055f5a0;
  local_a8 = param_1;
  FUN_100002f94(&DAT_10055f5a0,&DAT_100434da0);
  local_b0 = *(long *)(puVar7 + -8);
  local_c8 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_10055f5a8;
  local_d8 = auStack_150 + -extraout_x8;
  FUN_100002f94(&DAT_10055f5a8,&DAT_100434da8);
  local_c0 = *(long *)(puVar7 + -8);
  puStack_b8 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c0 + 0x40));
  lVar12 = (long)(auStack_150 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar12 - extraout_x12;
  local_e0 = lVar12;
  local_f8 = (undefined *)SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_f0 = *(code **)(local_f8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_f0 + 0x40));
  lVar12 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar12 - extraout_x8_02;
  puVar7 = &DAT_10055f5b0;
  FUN_100002f94(&DAT_10055f5b0,&DAT_100434db0);
  local_110 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_110 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  AVar15.unknown = (undefined *)(lVar16 - extraout_x8_03);
  puVar8 = &DAT_10055f5b8;
  FUN_100002f94(&DAT_10055f5b8,&DAT_100434db8);
  local_118 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar13 = (long)AVar15.unknown - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_e8 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar13 - extraout_x12_00;
  local_148 = lVar13;
  UVar9 = Foundation::UUID::typeMetadataAccessor();
  puVar3 = PTR_typeMetadataAccessor_100520bd8;
  lVar17 = *(long *)(UVar9.unknown + -8);
  local_100 = *(code **)(lVar17 + 0x10);
  local_140 = param_6;
  (*local_100)(lVar16,param_6,UVar9.unknown);
  local_108 = *(code **)(lVar17 + 0x38);
  (*local_108)(lVar16,0,1,UVar9.unknown);
  local_90 = param_6;
  FUN_1000c61a0(0);
  FUN_1000036d0(&DAT_10055f5c0,FUN_1000c61a0,&TargetProtocolConformanceDescriptor_100422900);
  puVar8 = &DAT_100558108;
  FUN_1000036d0(&DAT_100558108,puVar3,PTR_Foundation__Foundation__UUID_>Swift__Decodable_100520c00);
  puVar10 = &DAT_100558168;
  local_120 = puVar8;
  FUN_1000036d0(&DAT_100558168,puVar3,PTR_Foundation__Foundation__UUID_>Swift__Encodable_100520be8);
  puVar8 = &DAT_10054a128;
  local_128 = puVar10;
  FUN_1000036d0(&DAT_10054a128,puVar3,PTR_Foundation__Foundation__UUID_>Swift__Hashable_100520bf0);
  local_130 = puVar8;
  *(undefined **)(lVar13 + -0x10) = puVar8;
  (extension_SwiftUI)::SwiftUI::NavigationLink::_init();
  SwiftUI::PlainButtonStyle::init();
  puVar8 = &DAT_10055f5c8;
  FUN_1000087a0(&DAT_10055f5c8,&DAT_10055f5b0,&DAT_100434db0,
                PTR_SwiftUI__SwiftUI__NavigationLink<undefined,undefined>_>SwiftUI__View_100522118);
  puVar10 = &DAT_10054a8b0;
  FUN_1000036d0(&DAT_10054a8b0,PTR_typeMetadataAccessor_100522380,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
  puVar3 = local_f8;
  lVar4 = local_148;
  local_138 = puVar10;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(local_148,lVar12,puVar7,local_f8,puVar8,puVar10);
  local_f0 = *(code **)((long)local_f0 + 8);
  (*local_f0)(lVar12,puVar3);
  (**(code **)(local_110 + 8))();
  AVar11 = SwiftUI::Alignment::get_bottomLeading(AVar15);
  uVar5 = local_140;
  lVar17 = lVar4 + *(int *)(local_118 + 0x24);
  AVar15 = AVar11;
  FUN_1003a4ae4(lVar17);
  _all = SwiftUI::Edge::Set::get_all(AVar15.unknown);
  uVar18 = 0x4024000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  puVar8 = &DAT_10055f5d0;
  FUN_100002f94(&DAT_10055f5d0,&DAT_100434dc0);
  puVar1 = (undefined1 *)(lVar17 + *(int *)(puVar8 + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar18;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  puVar8 = &DAT_10055f5d8;
  FUN_100002f94(&DAT_10055f5d8,&DAT_100434dc8);
  iVar2 = *(int *)(puVar8 + 0x24);
  *(undefined8 *)(lVar17 + iVar2) = AVar11.unknown;
  ((undefined8 *)(lVar17 + iVar2))[1] = puVar7;
  (*local_100)(lVar16,uVar5,UVar9.unknown);
  (*local_108)(lVar16,0,1,UVar9.unknown);
  local_90 = uVar5;
  FUN_100002f94(&DAT_10055f5e0,&DAT_100434dd0);
  FUN_1003a77cc();
  *(undefined **)(lVar13 + -0x10) = local_130;
  puVar1 = local_d8;
  (extension_SwiftUI)::SwiftUI::NavigationLink::_init();
  SwiftUI::PlainButtonStyle::init();
  puVar7 = &DAT_10055f610;
  FUN_1000087a0(&DAT_10055f610,&DAT_10055f5a0,&DAT_100434da0,
                PTR_SwiftUI__SwiftUI__NavigationLink<undefined,undefined>_>SwiftUI__View_100522118);
  puVar8 = local_c8;
  lVar13 = local_e0;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(local_e0,lVar12,local_c8,puVar3,puVar7,local_138)
  ;
  (*local_f0)(lVar12,puVar3);
  (**(code **)(local_b0 + 8))(puVar1,puVar8);
  lVar17 = local_e8;
  FUN_1000087e4(lVar4,local_e8,&DAT_10055f5b8,&DAT_100434db8);
  puVar8 = puStack_b8;
  lVar16 = local_c0;
  lVar12 = local_d0;
  pcVar14 = *(code **)(local_c0 + 0x10);
  (*pcVar14)(local_d0,lVar13,puStack_b8);
  lVar6 = local_a8;
  FUN_1000087e4(lVar17,local_a8,&DAT_10055f5b8,&DAT_100434db8);
  puVar7 = &DAT_10055f618;
  FUN_100002f94(&DAT_10055f618,&DAT_100434de8);
  (*pcVar14)(lVar6 + *(int *)(puVar7 + 0x30),lVar12,puVar8);
  pcVar14 = *(code **)(lVar16 + 8);
  (*pcVar14)(lVar13,puVar8);
  FUN_10002a29c(lVar4,&DAT_10055f5b8,&DAT_100434db8);
  (*pcVar14)(lVar12,puVar8);
  FUN_10002a29c(lVar17,&DAT_10055f5b8,&DAT_100434db8);
  return;
}

