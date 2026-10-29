// rea decompile_all
// name: FUN_10000ff34
// address: 0x10000ff34
// body: available
// range: 0x10000ff34-0x1000103db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100010324 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10000ff34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,Set param_6)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  OpacityTransition OVar4;
  Alignment AVar5;
  HorizontalAlignment HVar6;
  undefined *puVar7;
  AnyTransition AVar8;
  VerticalAlignment VVar9;
  Set _all;
  Set SVar10;
  undefined8 *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *local_d0 [2];
  undefined8 local_c0;
  char local_b1;
  undefined8 local_b0;
  undefined8 auStack_a8 [4];
  undefined8 uStack_88;
  
  puVar3 = &DAT_10054aed8;
  local_c0 = param_1;
  FUN_100002f94(&DAT_10054aed8,&DAT_10041c118);
  local_d0[1] = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  puVar11 = (undefined8 *)((long)local_d0 + lVar2);
  puVar3 = &DAT_10054aee0;
  FUN_100002f94(&DAT_10054aee0,&DAT_10041c120);
  local_d0[0] = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)puVar11 - extraout_x8_00;
  OVar4 = SwiftUI::OpacityTransition::typeMetadataAccessor();
  lVar12 = *(long *)(OVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  lVar16 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar16 - extraout_x12;
  puVar3 = &DAT_10054aee8;
  FUN_100002f94(&DAT_10054aee8,&DAT_10041c128);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = (undefined8 *)(lVar15 - extraout_x8_02);
  auStack_a8[0] = *(undefined8 *)((long)param_6.unknown + 8);
  local_b0 = *(undefined8 *)param_6.unknown;
  VVar9.unknown = &DAT_10054ab50;
  puVar7 = &DAT_10041d0f0;
  FUN_100002f94();
  SwiftUI::State::get_wrappedValue((State)VVar9.unknown);
  if (local_b1 == '\x01') {
    AVar5 = SwiftUI::Alignment::get_center(VVar9.unknown);
    *puVar14 = AVar5.unknown;
    puVar14[1] = puVar7;
    HVar6.unknown = &DAT_10054af58;
    FUN_100002f94(&DAT_10054af58,&DAT_10041c160);
    puVar11 = (undefined8 *)((long)puVar14 + (long)*(int *)(HVar6.unknown + 0x2c));
    HVar6 = SwiftUI::HorizontalAlignment::get_center(HVar6);
    *puVar11 = HVar6.unknown;
    puVar11[1] = 0;
    *(undefined1 *)(puVar11 + 2) = 0;
    puVar7 = &DAT_10054af60;
    FUN_100002f94(&DAT_10054af60,&DAT_10041c168);
    FUN_100019668((long)puVar11 + (long)*(int *)(puVar7 + 0x2c),param_6.unknown);
    SwiftUI::OpacityTransition::init();
    (**(code **)(lVar12 + 0x10))(lVar16,lVar15,OVar4.unknown);
    puVar7 = &DAT_10054ae80;
    FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                  PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
    AVar8 = SwiftUI::AnyTransition::_init(puVar7,OVar4.unknown,puVar7);
    (**(code **)(lVar12 + 8))(lVar15,OVar4.unknown);
    *(undefined **)((long)puVar14 + (long)*(int *)(puVar3 + 0x24)) = AVar8.unknown;
    puVar3 = &DAT_10054aee8;
    puVar7 = &DAT_10041c128;
    FUN_1000087e4(puVar14,lVar13,&DAT_10054aee8,&DAT_10041c128);
    _swift_storeEnumTagMultiPayload(lVar13,local_d0[0],0);
    FUN_100028d98();
    FUN_100028e50();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar13);
    puVar11 = puVar14;
  }
  else {
    VVar9 = SwiftUI::VerticalAlignment::get_center(VVar9);
    *puVar11 = VVar9.unknown;
    *(undefined8 *)((long)local_d0 + lVar2 + 8) = 0x4030000000000000;
    *(undefined1 *)((long)&local_c0 + lVar2) = 0;
    puVar3 = &DAT_10054aef0;
    FUN_100002f94(&DAT_10054aef0,&DAT_10041c130);
    FUN_100013944((long)puVar11 + (long)*(int *)(puVar3 + 0x2c));
    _all = SwiftUI::Edge::Set::get_leading(param_6);
    uVar17 = 0x4038000000000000;
    SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
    SVar10.unknown = &DAT_10054aef8;
    uVar18 = param_3;
    uVar19 = param_4;
    uVar20 = param_5;
    FUN_100002f94(&DAT_10054aef8,&DAT_10041c138);
    puVar1 = (undefined1 *)((long)puVar11 + (long)*(int *)(SVar10.unknown + 0x24));
    *puVar1 = (char)_all.unknown;
    *(undefined8 *)(puVar1 + 8) = uVar17;
    *(undefined8 *)(puVar1 + 0x10) = param_3;
    *(undefined8 *)(puVar1 + 0x18) = param_4;
    *(undefined8 *)(puVar1 + 0x20) = param_5;
    puVar1[0x28] = 0;
    SVar10 = SwiftUI::Edge::Set::get_trailing(SVar10);
    uVar17 = 0x4030000000000000;
    SwiftUI::EdgeInsets::init((CGFloat)SVar10.unknown);
    AVar5.unknown = &DAT_10054af00;
    FUN_100002f94(&DAT_10054af00,&DAT_10041c140);
    puVar1 = (undefined1 *)((long)puVar11 + (long)*(int *)(AVar5.unknown + 0x24));
    *puVar1 = (char)SVar10.unknown;
    *(undefined8 *)(puVar1 + 8) = uVar17;
    *(undefined8 *)(puVar1 + 0x10) = uVar18;
    *(undefined8 *)(puVar1 + 0x18) = uVar19;
    *(undefined8 *)(puVar1 + 0x20) = uVar20;
    puVar1[0x28] = 0;
    SwiftUI::Alignment::get_center(AVar5);
    SwiftUI::_FrameLayout::_init((Alignment)0x0);
    puVar3 = &DAT_10054af08;
    FUN_100002f94(&DAT_10054af08,&DAT_10041c148);
    uVar18 = local_b0;
    puVar14 = (undefined8 *)((long)puVar11 + (long)*(int *)(puVar3 + 0x24));
    puVar14[1] = auStack_a8[0];
    *puVar14 = uVar18;
    puVar14[3] = auStack_a8[2];
    puVar14[2] = auStack_a8[1];
    puVar14[5] = uStack_88;
    puVar14[4] = auStack_a8[3];
    SwiftUI::OpacityTransition::init();
    (**(code **)(lVar12 + 0x10))(lVar16,lVar15,OVar4.unknown);
    puVar3 = &DAT_10054ae80;
    FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                  PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
    AVar8 = SwiftUI::AnyTransition::_init(puVar3,OVar4.unknown,puVar3);
    (**(code **)(lVar12 + 8))(lVar15,OVar4.unknown);
    *(undefined **)((long)puVar11 + (long)*(int *)(local_d0[1] + 0x24)) = AVar8.unknown;
    puVar3 = &DAT_10054aed8;
    puVar7 = &DAT_10041c118;
    FUN_1000087e4(puVar11,lVar13,&DAT_10054aed8,&DAT_10041c118);
    _swift_storeEnumTagMultiPayload(lVar13,local_d0[0],1);
    FUN_100028d98();
    FUN_100028e50();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar13);
  }
  FUN_10002a29c(puVar11,puVar3,puVar7);
  return;
}

