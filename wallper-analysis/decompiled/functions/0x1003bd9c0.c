// rea decompile_all
// name: FUN_1003bd9c0
// address: 0x1003bd9c0
// body: available
// range: 0x1003bd9c0-0x1003be557 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003bd9c0(undefined8 param_1,undefined *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  Optional OVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined7 extraout_var;
  undefined *puVar7;
  TupleView TVar8;
  VStack VVar9;
  ModifiedContent MVar10;
  ZStack ZVar11;
  Alignment AVar12;
  State SVar13;
  undefined8 uVar14;
  _FrameLayout _Var15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar20;
  long extraout_x8_04;
  undefined8 uVar21;
  ulong uVar22;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x13;
  long extraout_x13_00;
  code *pcVar23;
  long unaff_x20;
  long lVar24;
  code *pcVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  undefined1 auStack_220 [8];
  undefined *local_218;
  undefined *local_210;
  undefined4 local_204;
  undefined *local_200;
  long local_1f8;
  long local_1f0;
  undefined *local_1e8;
  long local_1e0;
  long local_1d8;
  undefined *local_1d0;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  long local_190;
  long local_188;
  undefined1 *local_180;
  undefined8 local_178;
  code *local_170;
  ulong local_168;
  code *local_160;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  undefined *puStack_100;
  undefined *local_f8;
  undefined *puStack_f0;
  char local_e1;
  undefined *local_e0;
  code *local_d8;
  undefined *local_d0;
  code *local_c8;
  
  local_170 = *(code **)(param_2 + -8);
  local_178 = param_1;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_180 = auStack_220 + -(extraout_x13 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = (long)(auStack_220 + -(extraout_x13 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_188 = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar19 - extraout_x12_00;
  local_190 = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar19 - extraout_x12_01;
  puVar5 = &DAT_100560230;
  FUN_100002f94(&DAT_100560230,&DAT_100435d48);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = lVar19 - extraout_x8;
  puVar6 = &DAT_100560238;
  FUN_100002fe4(&DAT_100560238,&DAT_100435d50);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  local_e0 = puVar6;
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054aa20,&DAT_10041bcb0);
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  OVar4 = Swift::Optional::typeMetadataAccessor();
  local_d8 = (code *)CONCAT71(extraout_var,OVar4.value);
  puVar6 = &DAT_100560240;
  FUN_100002fe4(&DAT_100560240,&DAT_100435d58);
  puVar7 = &DAT_100560248;
  local_d0 = puVar6;
  FUN_100002fe4(&DAT_100560248,&DAT_100435d60);
  local_c8 = (code *)puVar7;
  FUN_100002fe4(&DAT_100560250,&DAT_100435d68);
  _swift_getTupleTypeMetadata(0xff,5,&local_e0,0,0);
  TVar8 = SwiftUI::TupleView::typeMetadataAccessor();
  puVar7 = PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0,TVar8.unknown);
  VVar9 = SwiftUI::VStack::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_1005234c0,VVar9.unknown);
  SwiftUI::ScrollView::typeMetadataAccessor();
  MVar10 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar6 = &DAT_100560258;
  FUN_100002fe4(&DAT_100560258,&DAT_100435d70);
  _swift_getTupleTypeMetadata2(0xff,MVar10.unknown,puVar6,0,0);
  TVar8 = SwiftUI::TupleView::typeMetadataAccessor();
  _swift_getWitnessTable(puVar7,TVar8.unknown);
  ZVar11 = SwiftUI::ZStack::typeMetadataAccessor();
  lVar24 = *(long *)(ZVar11.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100002fe4(&DAT_100560260,&DAT_100435d78);
  MVar10 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_1f0 = *(long *)(MVar10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_1f0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar27 = (lVar26 - extraout_x8_00) - extraout_x8_01;
  FUN_100002fe4(&DAT_100560268,&DAT_100435d80);
  local_1e8 = MVar10.unknown;
  MVar10 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_1d8 = *(long *)(MVar10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_1d8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  local_1e0 = lVar27 - extraout_x8_02;
  local_1d0 = MVar10.unknown;
  MVar10 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_1b8 = *(long *)(MVar10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_1b8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar20 = (lVar27 - extraout_x8_02) - extraout_x8_03;
  local_1c8 = lVar20;
  local_1a0 = MVar10.unknown;
  AVar12.unknown = (undefined *)SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_1a8 = *(long *)(AVar12.unknown + -8);
  local_198 = AVar12.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1a8 + 0x40));
  lVar20 = lVar20 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_1c0 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_1b0 = lVar20 - extraout_x12_02;
  uVar21 = *(undefined8 *)(param_2 + 0x18);
  local_d0 = (undefined *)uVar18;
  local_c8 = (code *)uVar21;
  AVar12 = SwiftUI::Alignment::get_center(AVar12);
  SwiftUI::ZStack::_init(AVar12);
  AVar12.unknown = param_2;
  FUN_1003bf6a4(lVar26);
  AVar12 = SwiftUI::Alignment::get_center(AVar12);
  puVar6 = PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_1005234e0;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_1005234e0,ZVar11.unknown);
  puVar7 = puVar6;
  FUN_1003e380c();
  local_200 = puVar6;
  local_1f8 = lVar27;
  (extension_SwiftUI)::SwiftUI::View::_background
            (lVar27,lVar26,AVar12.unknown,MVar10.unknown,ZVar11.unknown,puVar5,puVar6,puVar7);
  FUN_10002a29c(lVar26,&DAT_100560230,&DAT_100435d48);
  (**(code **)(lVar24 + 8))(lVar26 - extraout_x8_00,ZVar11.unknown);
  local_d8 = *(code **)((undefined1 *)(unaff_x20 + *(int *)(param_2 + 0x5c)) + 8);
  local_e0 = (undefined *)
             CONCAT71(local_e0._1_7_,*(undefined1 *)(unaff_x20 + *(int *)(param_2 + 0x5c)));
  SVar13.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar13);
  if (local_e1 == '\x01') {
    uVar14 = *(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x58));
    FUN_1003280cc(uVar14,*(undefined1 *)((undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x58)) + 1));
    local_204 = (undefined4)uVar14;
  }
  else {
    local_204 = 0;
  }
  pcVar23 = local_170;
  pcVar25 = *(code **)((long)local_170 + 0x10);
  (*pcVar25)(lVar19);
  uVar22 = (ulong)*(byte *)((long)pcVar23 + 0x50);
  uVar28 = uVar22 + 0x20 & (uVar22 ^ 0xffffffffffffffff);
  puVar5 = &DAT_10053d8d8;
  _swift_allocObject(&DAT_10053d8d8,uVar28 + extraout_x13_00,uVar22 | 7);
  *(undefined8 *)(puVar5 + 0x10) = uVar18;
  *(undefined8 *)(puVar5 + 0x18) = uVar21;
  pcVar23 = *(code **)((long)pcVar23 + 0x20);
  local_210 = puVar5;
  (*pcVar23)(puVar5 + uVar28,lVar19,param_2);
  lVar20 = local_190;
  local_170 = pcVar23;
  (*pcVar25)(local_190);
  puVar5 = &DAT_10053d900;
  _swift_allocObject(&DAT_10053d900,uVar28 + extraout_x13_00,uVar22 | 7);
  *(undefined8 *)(puVar5 + 0x10) = uVar18;
  *(undefined8 *)(puVar5 + 0x18) = uVar21;
  local_218 = puVar5;
  (*pcVar23)(puVar5 + uVar28,lVar20,param_2);
  lVar20 = local_188;
  local_160 = pcVar25;
  (*pcVar25)(local_188);
  puVar5 = &DAT_10053d928;
  local_168 = uVar28;
  _swift_allocObject(&DAT_10053d928,uVar28 + extraout_x13_00,uVar22 | 7);
  pcVar23 = local_170;
  *(undefined8 *)(puVar5 + 0x10) = uVar18;
  *(undefined8 *)(puVar5 + 0x18) = uVar21;
  (*local_170)(puVar5 + uVar28,lVar20,param_2);
  puVar3 = local_180;
  (*pcVar25)(local_180);
  uVar28 = local_168;
  puVar5 = &DAT_10053d950;
  _swift_allocObject(&DAT_10053d950,local_168 + extraout_x13_00,uVar22 | 7);
  *(undefined8 *)(puVar5 + 0x10) = uVar18;
  *(undefined8 *)(puVar5 + 0x18) = uVar21;
  AVar12.unknown = puVar5 + uVar28;
  (*pcVar23)(AVar12.unknown,puVar3,param_2);
  uVar1 = (undefined1)local_204;
  SwiftUI::Alignment::get_center(AVar12);
  uVar14 = 0;
  _Var15 = SwiftUI::_FrameLayout::_init((Alignment)0x0);
  local_e0 = (undefined *)(CONCAT71(local_e0._1_7_,uVar1) & 0xffffffffffffff01);
  local_d8 = FUN_1003e3b24;
  local_d0 = local_210;
  local_c8 = FUN_1003e3b2c;
  AVar12 = SwiftUI::Alignment::get_center(_Var15.unknown);
  puVar5 = &DAT_1005602d8;
  FUN_100002f94(&DAT_1005602d8,&DAT_100435dc0);
  puVar6 = &DAT_1005602e0;
  FUN_1000087a0(&DAT_1005602e0,&DAT_100560260,&DAT_100435d78,
                PTR_SwiftUI__SwiftUI___BackgroundModifier<undefined>_>SwiftUI__ViewModifier_100522800
               );
  puVar7 = local_1e8;
  local_f8 = local_200;
  puVar16 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  puStack_f0 = puVar6;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             local_1e8,&local_f8);
  puVar6 = puVar16;
  FUN_1003e3bf4();
  lVar24 = local_1e0;
  lVar20 = local_1f8;
  (extension_SwiftUI)::SwiftUI::View::_background
            (local_1e0,&local_e0,AVar12.unknown,uVar14,puVar7,puVar5,puVar16,puVar6);
  FUN_10002a29c(&local_e0,&DAT_1005602d8,&DAT_100435dc0);
  (**(code **)(local_1f0 + 8))(lVar20,puVar7);
  (*local_160)(lVar19,unaff_x20,param_2);
  uVar28 = local_168;
  puVar5 = &DAT_10053d978;
  _swift_allocObject(&DAT_10053d978,local_168 + extraout_x13_00,uVar22 | 7);
  *(undefined8 *)(puVar5 + 0x10) = uVar18;
  *(undefined8 *)(puVar5 + 0x18) = uVar21;
  (*pcVar23)(puVar5 + uVar28,lVar19,param_2);
  puVar6 = &DAT_1005602f8;
  FUN_1000087a0(&DAT_1005602f8,&DAT_100560268,&DAT_100435d80,
                PTR_SwiftUI__SwiftUI___BackgroundModifier<undefined>_>SwiftUI__ViewModifier_100522800
               );
  puVar2 = local_1d0;
  puVar7 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  puVar17 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_108 = puVar16;
  puStack_100 = puVar6;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             local_1d0,&local_108);
  lVar20 = local_1c8;
  (extension_SwiftUI)::SwiftUI::View::_onAppear();
  _swift_release(puVar5);
  (**(code **)(local_1d8 + 8))(lVar24,puVar2);
  (*local_160)(lVar19,unaff_x20,param_2);
  puVar5 = &DAT_10053d9a0;
  _swift_allocObject(&DAT_10053d9a0,uVar28 + extraout_x13_00,uVar22 | 7);
  *(undefined8 *)(puVar5 + 0x10) = uVar18;
  *(undefined8 *)(puVar5 + 0x18) = uVar21;
  (*local_170)(puVar5 + uVar28,lVar19,param_2);
  puVar2 = local_1a0;
  puVar6 = 
  PTR___protocol_witness_table_for_SwiftUI__AppearanceActionModifier___SwiftUI_ViewModifier_in_SwiftUI_100522b30
  ;
  local_110 = 
  PTR___protocol_witness_table_for_SwiftUI__AppearanceActionModifier___SwiftUI_ViewModifier_in_SwiftUI_100522b30
  ;
  puVar16 = puVar7;
  local_118 = puVar17;
  _swift_getWitnessTable(puVar7,local_1a0,&local_118);
  lVar19 = local_1c0;
  (extension_SwiftUI)::SwiftUI::View::_onDisappear();
  _swift_release(puVar5);
  (**(code **)(local_1b8 + 8))(lVar20,puVar2);
  puVar5 = local_198;
  local_120 = puVar6;
  local_128 = puVar16;
  _swift_getWitnessTable(puVar7,local_198,&local_128);
  lVar20 = local_1b0;
  thunk_FUN_1000bdaa4(local_1b0,lVar19,puVar5,puVar7);
  pcVar23 = *(code **)(local_1a8 + 8);
  (*pcVar23)(lVar19,puVar5);
  thunk_FUN_1000bdaa4(local_178,lVar20,puVar5,puVar7);
  (*pcVar23)(lVar20,puVar5);
  return;
}

