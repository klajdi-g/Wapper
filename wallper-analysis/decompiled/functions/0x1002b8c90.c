// rea decompile_all
// name: FUN_1002b8c90
// address: 0x1002b8c90
// body: available
// range: 0x1002b8c90-0x1002b93b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002b8c90(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  LocalizedStringKey LVar12;
  State SVar13;
  State SVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  long lVar20;
  Binding<bool> BVar21;
  undefined8 in_x3;
  long lVar22;
  long extraout_x8;
  long extraout_x8_00;
  long lVar23;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar24;
  long lVar25;
  long extraout_x12;
  long unaff_x20;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  String stringLiteral;
  String stringLiteral_00;
  undefined8 auStack_1d0 [12];
  undefined8 uStack_170;
  undefined8 local_160 [20];
  undefined *local_c0;
  undefined *puStack_b8;
  byte in_stack_ffffffffffffff50;
  undefined1 local_80 [8];
  undefined8 local_78;
  
  lVar8 = 0;
  FUN_1002bc1b0();
  lVar22 = *(long *)(lVar8 + -8);
  lVar25 = *(long *)(lVar22 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = (long)&uStack_170 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_100554ab8;
  FUN_100002f94(&DAT_100554ab8,&DAT_100427d98);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_10055a368;
  FUN_100002f94(&DAT_10055a368,&DAT_10042e178);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar27 = (lVar20 - extraout_x8) - extraout_x8_00;
  puVar10 = &DAT_10055a370;
  FUN_100002f94(&DAT_10055a370,&DAT_10042e180);
  lVar23 = *(long *)(puVar10 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = &DAT_10055a378;
  FUN_100002f94(&DAT_10055a378,&DAT_10042e188);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = (lVar27 - extraout_x8_01) - extraout_x8_02;
  FUN_1002b93b8(lVar27);
  BVar21.unknown = (undefined *)0x80000001004e3ea0;
  stringLiteral.bridgeObject = (void *)0x80000001004e3ea0;
  stringLiteral.str = (char *)0xd000000000000013;
  LVar12 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  puVar1 = (undefined1 *)(unaff_x20 + *(int *)(lVar8 + 0x24));
  local_80[0] = *puVar1;
  local_78 = *(undefined8 *)(puVar1 + 8);
  SVar13.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_projectedValue(SVar13);
  puVar4 = puStack_b8;
  puVar3 = local_c0;
  uStack_170._4_4_ = (uint)in_stack_ffffffffffffff50;
  SVar14.unknown = &DAT_10055a2b0;
  FUN_100002f94(&DAT_10055a2b0,&DAT_10042e0e0);
  SwiftUI::State::get_wrappedValue(SVar14);
  puVar15 = &DAT_10054e178;
  FUN_100002f94(&DAT_10054e178,&DAT_10042f440);
  uVar16 = 0;
  FUN_100400294();
  uVar17 = uVar16;
  FUN_1002c04f4();
  puVar18 = &DAT_10054e208;
  FUN_1000087a0(&DAT_10054e208,&DAT_10054e178,&DAT_10042f440,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  *(undefined **)(lVar24 + -0x18) = puVar18;
  *(undefined **)(lVar24 + -0x10) =
       PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
  *(undefined8 *)(lVar24 + -0x20) = uVar17;
  *(undefined **)(lVar24 + -0x30) = PTR___type_metadata_for_SwiftUI_Text_100522e28;
  *(undefined8 *)(lVar24 + -0x28) = uVar16;
  *(undefined **)(lVar24 + -0x38) = puVar15;
  *(undefined8 *)(lVar24 + -0x48) = 0;
  *(undefined **)(lVar24 + -0x40) = puVar9;
  *(code **)(lVar24 + -0x50) = FUN_1002bae60;
  *(code **)(lVar24 + -0x60) = FUN_1002c04ec;
  *(undefined ***)(lVar24 + -0x58) = &local_c0;
  uVar17 = in_x3;
  (extension_SwiftUI)::SwiftUI::View::_alert(LVar12,BVar21);
  _swift_bridgeObjectRelease(in_x3);
  _swift_bridgeObjectRelease(BVar21.unknown);
  _swift_release(puVar4);
  _swift_release(puVar3);
  FUN_10002a29c(lVar20 - extraout_x8,&DAT_100554ab8,&DAT_100427d98);
  FUN_10002a29c(lVar27,&DAT_10055a368);
  BVar21.unknown = (undefined *)0x80000001004e3ec0;
  stringLiteral_00.bridgeObject = (void *)0x80000001004e3ec0;
  stringLiteral_00.str = (char *)0xd000000000000017;
  LVar12 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  puVar1 = (undefined1 *)(unaff_x20 + *(int *)(lVar8 + 0x28));
  local_80[0] = *puVar1;
  local_78 = *(undefined8 *)(puVar1 + 8);
  SwiftUI::State::get_projectedValue(SVar13);
  puVar6 = puStack_b8;
  puVar5 = local_c0;
  puVar18 = &DAT_10054def0;
  FUN_100002f94(&DAT_10054def0,&DAT_100422df0);
  puVar4 = PTR___type_metadata_for_SwiftUI_Text_100522e28;
  puVar3 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
  ppuVar19 = &local_c0;
  local_c0 = puVar9;
  puStack_b8 = puVar15;
  _swift_getOpaqueTypeConformance2
            (ppuVar19,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_alert<A,B,C_where_A1:_SwiftUI_View,B1:_SwiftUI_View>(_:_SwiftUI_LocalizedStringKey,isPresented:_SwiftUI_Binding<Swift_Bool>,presenting:_C1_,actions:_(C1)__>_A1,message:_(C1)__>_B1___>_some>>_100523060
             ,1);
  puVar9 = &DAT_100550838;
  FUN_1000087a0(&DAT_100550838,&DAT_10054def0,&DAT_100422df0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  *(undefined **)(lVar24 + -0x18) = puVar9;
  *(undefined **)(lVar24 + -0x10) = puVar3;
  *(undefined ***)(lVar24 + -0x20) = ppuVar19;
  *(undefined **)(lVar24 + -0x30) = puVar18;
  *(undefined **)(lVar24 + -0x28) = puVar4;
  *(undefined1 **)(lVar24 + -0x40) = local_80;
  *(undefined **)(lVar24 + -0x38) = puVar10;
  *(undefined8 *)(lVar24 + -0x50) = 0;
  *(code **)(lVar24 + -0x48) = FUN_1002c0708;
  (extension_SwiftUI)::SwiftUI::View::_alert(LVar12,BVar21);
  _swift_bridgeObjectRelease(uVar17);
  _swift_bridgeObjectRelease(BVar21.unknown);
  _swift_release(puVar6);
  _swift_release(puVar5);
  (**(code **)(lVar23 + 8))(lVar27 - extraout_x8_01,puVar10);
  FUN_100029504(unaff_x20,lVar20,FUN_1002bc1b0);
  uVar28 = (ulong)*(byte *)(lVar22 + 0x50);
  uVar26 = uVar28 + 0x10 & (uVar28 ^ 0xffffffffffffffff);
  puVar9 = &DAT_100537d18;
  _swift_allocObject(&DAT_100537d18,uVar26 + lVar25,uVar28 | 7);
  FUN_100007e64(lVar20,puVar9 + uVar26,FUN_1002bc1b0);
  puVar2 = (undefined8 *)(lVar24 + *(int *)(puVar11 + 0x24));
  *puVar2 = FUN_1002c0714;
  puVar2[1] = puVar9;
  puVar2[2] = 0;
  puVar2[3] = 0;
  lVar8 = *(long *)(unaff_x20 + 0x10);
  if (lVar8 != 0) {
    puVar9 = &DAT_10042e1b8;
    _swift_getKeyPath(&DAT_10042e1b8);
    puVar10 = &DAT_10042e1e0;
    _swift_getKeyPath(&DAT_10042e1e0);
    _swift_retain(lVar8);
    Combine::Published::_get_subscript(&local_c0);
    _swift_release(puVar9);
    _swift_release(puVar10);
    _swift_release(lVar8);
    FUN_100029504(unaff_x20,lVar20,FUN_1002bc1b0);
    puVar9 = &DAT_100537d40;
    _swift_allocObject(&DAT_100537d40,uVar26 + lVar25,uVar28 | 7);
    FUN_100007e64(lVar20,puVar9 + uVar26,FUN_1002bc1b0);
    FUN_1002c28b8();
    (extension_SwiftUI)::SwiftUI::View::_onChange
              (param_1,&local_c0,0,FUN_1002c2870,puVar9,puVar11,
               PTR___type_metadata_for_Swift_Bool_100523b70,lVar20,
               PTR___protocol_witness_table_for_Swift_Bool___Swift_Equatable_in_Swift_100523b78);
    _swift_release(puVar9);
    FUN_1002c2a60(lVar24);
    return;
  }
  FUN_10014e37c(0);
  FUN_1000036d0(&DAT_100553148,FUN_10014e37c,&TargetProtocolConformanceDescriptor_100427f04);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1002b93b8);
  (*pcVar7)();
}

