// rea decompile_all
// name: FUN_10035d5d8
// address: 0x10035d5d8
// body: available
// range: 0x10035d5d8-0x10035dc53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10035d5d8(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  StringInterpolation stringInterpolation;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  StringInterpolation SVar8;
  State SVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  LocalizedStringKey LVar13;
  Text TVar14;
  undefined **ppuVar15;
  uint uVar17;
  ulong uVar18;
  undefined8 uVar19;
  long extraout_x8;
  long lVar20;
  long extraout_x8_00;
  undefined *puVar21;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long unaff_x20;
  char *pcVar22;
  void *pvVar23;
  ulong uVar24;
  long lVar25;
  String stringLiteral;
  String SVar26;
  String SVar27;
  String SVar28;
  undefined8 auStack_180 [9];
  undefined2 auStack_138 [4];
  undefined1 auStack_130 [4];
  uint local_12c;
  Binding<bool> local_128;
  long local_120;
  StringInterpolation local_118;
  LocalizedStringKey local_110;
  undefined *local_108;
  undefined *local_100;
  State local_f8;
  long local_f0;
  undefined *local_e8;
  long local_e0;
  long local_d8;
  undefined *local_d0;
  long local_c8;
  long local_c0;
  undefined1 *local_b8;
  long local_b0;
  undefined *local_a0;
  undefined *puStack_98;
  byte in_stack_ffffffffffffff70;
  undefined1 local_80 [8];
  undefined8 local_78;
  Binding<bool> BVar16;
  
  lVar7 = 0;
  local_b0 = param_1;
  FUN_100386f18();
  local_c8 = *(long *)(lVar7 + -8);
  local_120 = lVar7;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar12 = &DAT_10054ac38;
  local_c0 = extraout_x12;
  local_b8 = auStack_130 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = (long)(auStack_130 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0)) - extraout_x8;
  local_f0 = lVar20;
  SVar8 = SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar8.unknown + -8) + 0x40));
  puVar21 = (undefined *)(lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar12 = &DAT_10055dda8;
  local_118.unknown = puVar21;
  FUN_100002f94(&DAT_10055dda8,&DAT_100433608);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = (long)puVar21 - extraout_x8_01;
  puVar21 = &DAT_10055ddb0;
  FUN_100002f94(&DAT_10055ddb0,&DAT_100433610);
  local_d8 = *(long *)(puVar21 + -8);
  local_d0 = puVar21;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar25 = lVar20 - extraout_x8_02;
  FUN_10035dc54(lVar20);
  puVar21 = (undefined *)0xef7473696c79616c;
  stringLiteral.bridgeObject = (void *)0xef7473696c79616c;
  stringLiteral.str = (char *)0x5020656d616e6552;
  local_110 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  local_e0 = CONCAT44(local_e0._4_4_,param_4);
  puVar1 = (undefined1 *)(unaff_x20 + *(int *)(lVar7 + 0x34));
  local_80[0] = *puVar1;
  local_78 = *(undefined8 *)(puVar1 + 8);
  SVar9.unknown = &DAT_10054ab50;
  local_128.unknown = puVar21;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  local_f8.unknown = SVar9.unknown;
  SwiftUI::State::get_projectedValue(SVar9);
  puVar5 = puStack_98;
  puVar4 = local_a0;
  local_12c = (uint)in_stack_ffffffffffffff70;
  puVar21 = &DAT_10054de90;
  FUN_100002f94(&DAT_10054de90,&DAT_10041ed08);
  puVar10 = puVar21;
  FUN_1003870ec();
  stringInterpolation.unknown = local_118.unknown;
  puVar11 = &DAT_10054dee0;
  FUN_1000087a0(&DAT_10054dee0,&DAT_10054de90,&DAT_10041ed08,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  *(undefined **)(lVar25 + -0x10) = puVar11;
  local_108 = puVar10;
  *(undefined **)(lVar25 + -0x18) = puVar10;
  local_100 = puVar21;
  *(undefined **)(lVar25 + -0x20) = puVar21;
  local_e8 = puVar12;
  *(undefined ***)(lVar25 + -0x30) = &local_a0;
  *(undefined **)(lVar25 + -0x28) = puVar12;
  BVar16.unknown = local_128.unknown;
  uVar19 = param_5;
  local_e0 = lVar25;
  (extension_SwiftUI)::SwiftUI::View::_alert(local_110,local_128);
  _swift_bridgeObjectRelease(param_5);
  _swift_bridgeObjectRelease(BVar16.unknown);
  lVar7 = local_120;
  _swift_release(puVar5);
  _swift_release(puVar4);
  SVar8.unknown = &DAT_100433608;
  FUN_10002a29c(lVar20,&DAT_10055dda8);
  SwiftUI::LocalizedStringKey::StringInterpolation::init(0xe,1);
  SVar26.bridgeObject = (void *)0xaa00000000009c80;
  SVar26.str = (char *)0xe2206574656c6544;
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar26,SVar8);
  lVar20 = *(long *)(unaff_x20 + *(int *)(lVar7 + 0x14));
  if (lVar20 != 0) {
    local_110.unknown = puVar11;
    _swift_retain(lVar20);
    lVar3 = local_f0;
    FUN_1001b6e74(local_f0,unaff_x20);
    _swift_release(lVar20);
    puVar12 = (undefined *)0x0;
    FUN_10025ee04();
    lVar20 = lVar3;
    SVar8.unknown = puVar12;
    (**(code **)(*(long *)(puVar12 + -8) + 0x30))(lVar3,1);
    if ((int)lVar20 == 1) {
      SVar8.unknown = &DAT_10041e8e0;
      FUN_10002a29c(lVar3,&DAT_10054ac38);
      pcVar22 = (char *)0x0;
      pvVar23 = (void *)0xe000000000000000;
    }
    else {
      pcVar22 = *(char **)(lVar3 + *(int *)(puVar12 + 0x14));
      pvVar23 = (void *)((undefined8 *)(lVar3 + *(int *)(puVar12 + 0x14)))[1];
      _swift_bridgeObjectRetain(pvVar23);
      FUN_100029548(lVar3,FUN_10025ee04);
    }
    SVar27.bridgeObject = pvVar23;
    SVar27.str = pcVar22;
    SwiftUI::LocalizedStringKey::StringInterpolation::appendInterpolation(SVar27,SVar8);
    _swift_bridgeObjectRelease(pvVar23);
    SVar28.bridgeObject = (void *)0xa400000000000000;
    SVar28.str = (char *)0x3f9d80e2;
    BVar16.unknown = (undefined *)0xa400000000000000;
    SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar28,SVar8);
    uVar17 = (uint)SVar8.unknown;
    LVar13 = SwiftUI::LocalizedStringKey::init(stringInterpolation);
    *(undefined2 *)(lVar25 + -8) = 0x100;
    *(undefined8 *)(lVar25 + -0x10) = 0;
    uVar18 = (ulong)(uVar17 & 1);
    TVar14 = SwiftUI::Text::_init(LVar13);
    puVar1 = (undefined1 *)(unaff_x20 + *(int *)(lVar7 + 0x3c));
    local_80[0] = *puVar1;
    local_78 = *(undefined8 *)(puVar1 + 8);
    SwiftUI::State::get_projectedValue(local_f8);
    puVar4 = puStack_98;
    puVar11 = local_a0;
    local_f0 = CONCAT44(local_f0._4_4_,(uint)(byte)unaff_x20);
    puVar12 = &DAT_10054e178;
    FUN_100002f94(&DAT_10054e178,&DAT_10042f440);
    local_a0 = local_e8;
    puStack_98 = local_100;
    ppuVar15 = &local_a0;
    _swift_getOpaqueTypeConformance2
              (ppuVar15,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_alert<A_where_A1:_SwiftUI_View>(_:_SwiftUI_LocalizedStringKey,isPresented:_SwiftUI_Binding<Swift_Bool>,actions:_()__>_A1)__>_some>>_100523090
               ,1);
    puVar21 = &DAT_10054e208;
    FUN_1000087a0(&DAT_10054e208,&DAT_10054e178,&DAT_10042f440,
                  PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
    *(undefined **)(lVar25 + -0x18) = puVar21;
    *(undefined **)(lVar25 + -0x10) =
         PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
    *(undefined ***)(lVar25 + -0x20) = ppuVar15;
    *(undefined **)(lVar25 + -0x30) = puVar12;
    *(undefined **)(lVar25 + -0x28) = PTR___type_metadata_for_SwiftUI_Text_100522e28;
    puVar12 = local_d0;
    *(undefined8 *)(lVar25 + -0x40) = 0;
    *(undefined **)(lVar25 + -0x38) = puVar12;
    *(undefined1 **)(lVar25 + -0x50) = local_80;
    *(code **)(lVar25 + -0x48) = FUN_10035f734;
    lVar20 = local_b0;
    lVar7 = local_e0;
    (extension_SwiftUI)::SwiftUI::View::_alert(TVar14,BVar16);
    _swift_release(puVar4);
    _swift_release(puVar11);
    FUN_100025b34(TVar14.unknown,BVar16.unknown,uVar18);
    _swift_bridgeObjectRelease(uVar19);
    (**(code **)(local_d8 + 8))(lVar7,puVar12);
    puVar1 = local_b8;
    FUN_100029504(unaff_x20,local_b8,FUN_100386f18);
    uVar18 = (ulong)*(byte *)(local_c8 + 0x50);
    uVar24 = uVar18 + 0x10 & (uVar18 ^ 0xffffffffffffffff);
    puVar12 = &DAT_10053bd50;
    _swift_allocObject(&DAT_10053bd50,uVar24 + local_c0,uVar18 | 7);
    FUN_100007e64(puVar1,puVar12 + uVar24,FUN_100386f18);
    puVar21 = &DAT_10055de30;
    FUN_100002f94(&DAT_10055de30,&DAT_100433660);
    puVar2 = (undefined8 *)(lVar20 + *(int *)(puVar21 + 0x24));
    *puVar2 = FUN_1003873c4;
    puVar2[1] = puVar12;
    puVar2[2] = 0;
    puVar2[3] = 0;
    return;
  }
  FUN_1001b7378(0);
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10035dc54);
  (*pcVar6)();
}

