// rea decompile_all
// name: FUN_1003d1020
// address: 0x1003d1020
// body: available
// range: 0x1003d1020-0x1003d16fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003d1020(long param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined *puVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  undefined *puVar8;
  PlainButtonStyle PVar9;
  undefined *puVar10;
  URL UVar11;
  void *pvVar12;
  undefined *puVar13;
  State SVar15;
  Alignment AVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar17;
  long lVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar19;
  ulong uVar20;
  code *pcVar21;
  code *pcVar22;
  ulong uVar23;
  undefined8 auStack_140 [2];
  undefined8 local_130;
  long local_128;
  long local_120;
  undefined8 *local_118;
  undefined *local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  undefined *local_e8;
  long local_e0;
  long local_d8;
  undefined *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  String local_b0;
  byte local_a0;
  undefined7 uStack_9f;
  undefined8 local_98;
  undefined8 *local_90;
  byte local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  Button<undefined> BVar14;
  
  lVar7 = 0;
  local_c8 = param_1;
  FUN_1003e4bc8();
  local_120 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  AVar16.unknown = (undefined *)((long)&local_130 - (extraout_x12 + 0xfU & 0xfffffffffffffff0));
  puVar8 = &DAT_100560a30;
  local_f8 = extraout_x12;
  FUN_100002f94(&DAT_100560a30,&DAT_100436668);
  local_118 = *(undefined8 **)(puVar8 + -8);
  local_110 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)((long)local_118 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100560a38;
  FUN_100002f94(&DAT_100560a38,&DAT_100436670);
  local_e0 = *(long *)(puVar8 + -8);
  local_d0 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e0 + 0x40));
  lVar17 = ((long)AVar16.unknown - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_d8 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12_00;
  local_b8 = lVar17;
  PVar9 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_128 = *(long *)(PVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_128 + 0x40));
  lVar17 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100560a40;
  FUN_100002f94(&DAT_100560a40,&DAT_100436678);
  lVar19 = *(long *)(puVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &DAT_100560a48;
  FUN_100002f94(&DAT_100560a48,&DAT_100436680);
  local_100 = *(long *)(puVar10 + -8);
  local_e8 = puVar10;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_100 + 0x40));
  lVar18 = (lVar17 - extraout_x8_02) - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_f0 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - extraout_x12_01;
  local_108 = lVar7;
  if (*(long *)((long)param_2 + (long)*(int *)(lVar7 + 0x30)) != 0) {
    UVar11.unknown = (undefined *)0x0;
    FUN_10040211c();
    local_b0 = Foundation::URL::get_lastPathComponent(UVar11);
    uVar20 = (ulong)local_b0.str & 0xffffffffffff;
    if (((ulong)local_b0.bridgeObject & 0x2000000000000000) != 0) {
      uVar20 = (ulong)local_b0.bridgeObject >> 0x38 & 0xf;
    }
    if (uVar20 == 0) {
      _swift_bridgeObjectRelease();
      pcVar3 = (char *)*param_2;
      pvVar12 = (void *)param_2[1];
      _swift_bridgeObjectRetain();
      local_b0.bridgeObject = pvVar12;
      local_b0.str = pcVar3;
    }
    local_90 = param_2;
    FUN_100002f94(&DAT_100560a50,&DAT_100436688);
    FUN_1003ee314();
    *(undefined **)(lVar18 + -0x10) =
         PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8;
    (extension_SwiftUI)::SwiftUI::NavigationLink::_init();
    SwiftUI::PlainButtonStyle::init();
    puVar10 = &DAT_100560a70;
    FUN_1000087a0(&DAT_100560a70,&DAT_100560a40,&DAT_100436678,
                  PTR_SwiftUI__SwiftUI__NavigationLink<undefined,undefined>_>SwiftUI__View_100522118
                 );
    puVar13 = &DAT_10054a8b0;
    FUN_1000036d0(&DAT_10054a8b0,PTR_typeMetadataAccessor_100522380,
                  PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
    local_c0 = lVar18;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (lVar18,lVar17,puVar8,PVar9.unknown,puVar10,puVar13);
    (**(code **)(local_128 + 8))(lVar17,PVar9.unknown);
    (**(code **)(lVar19 + 8))(lVar17 - extraout_x8_02,puVar8);
    FUN_100029504(param_2,AVar16.unknown,FUN_1003e4bc8);
    uVar23 = (ulong)*(byte *)(local_120 + 0x50);
    uVar20 = uVar23 + 0x10 & (uVar23 ^ 0xffffffffffffffff);
    puVar8 = &DAT_10053dfa0;
    _swift_allocObject(&DAT_10053dfa0,uVar20 + local_f8,uVar23 | 7);
    FUN_100007e64(AVar16.unknown,puVar8 + uVar20,FUN_1003e4bc8);
    local_90 = param_2;
    FUN_100002f94(&DAT_100560a78,&DAT_1004366a0);
    FUN_1003ee40c();
    BVar14 = SwiftUI::Button::_init();
    bVar6 = (byte)BVar14.unknown;
    FUN_1003d020c();
    local_a0 = bVar6 & 1;
    puVar8 = &DAT_100560a90;
    FUN_1000087a0(&DAT_100560a90,&DAT_100560a30,&DAT_100436668,
                  PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
    puVar13 = puVar8;
    FUN_1003ee51c();
    lVar5 = local_b8;
    puVar10 = local_110;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (&local_a0,local_110,&DAT_10053d7c8,puVar8,puVar13);
    (**(code **)((long)local_118 + 8))((long)AVar16.unknown - extraout_x8,puVar10);
    pbVar1 = (byte *)((long)param_2 + (long)*(int *)(local_108 + 0x34));
    local_a0 = *pbVar1;
    local_98 = *(undefined8 *)(pbVar1 + 8);
    SVar15.unknown = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::get_wrappedValue(SVar15);
    local_108 = CONCAT44(local_108._4_4_,(uint)(byte)local_b0.str);
    FUN_100029504(param_2,AVar16.unknown,FUN_1003e4bc8);
    puVar8 = &DAT_10053dfc8;
    _swift_allocObject(&DAT_10053dfc8,uVar20 + local_f8,uVar23 | 7);
    FUN_100007e64(AVar16.unknown,puVar8 + uVar20,FUN_1003e4bc8);
    SwiftUI::Alignment::get_center(AVar16);
    SwiftUI::_FrameLayout::_init((Alignment)0x403c000000000000);
    puVar13 = local_e8;
    lVar17 = local_f0;
    lVar7 = local_100;
    local_f8 = CONCAT71(uStack_9f,local_a0);
    local_110 = (undefined *)CONCAT44(local_110._4_4_,(uint)(byte)local_98);
    local_118 = local_90;
    local_120 = CONCAT44(local_120._4_4_,(uint)local_88);
    local_128 = local_80;
    local_130 = uStack_78;
    pcVar21 = *(code **)(local_100 + 0x10);
    (*pcVar21)(local_f0,local_c0,local_e8);
    puVar4 = local_d0;
    lVar19 = local_d8;
    lVar18 = local_e0;
    pcVar22 = *(code **)(local_e0 + 0x10);
    (*pcVar22)(local_d8,lVar5,local_d0);
    lVar5 = local_c8;
    (*pcVar21)(local_c8,lVar17,puVar13);
    puVar10 = &DAT_100560aa0;
    FUN_100002f94(&DAT_100560aa0,&DAT_1004366b0);
    (*pcVar22)(lVar5 + *(int *)(puVar10 + 0x30),lVar19,puVar4);
    puVar2 = (undefined1 *)(lVar5 + *(int *)(puVar10 + 0x40));
    *puVar2 = (char)local_108;
    *(code **)(puVar2 + 8) = FUN_1003ee55c;
    *(undefined **)(puVar2 + 0x10) = puVar8;
    *(long *)(puVar2 + 0x18) = local_f8;
    puVar2[0x20] = (char)local_110;
    *(undefined8 **)(puVar2 + 0x28) = local_118;
    puVar2[0x30] = (char)local_120;
    *(long *)(puVar2 + 0x38) = local_128;
    *(undefined8 *)(puVar2 + 0x40) = local_130;
    pcVar21 = *(code **)(lVar18 + 8);
    _swift_retain(puVar8);
    (*pcVar21)(local_b8,puVar4);
    pcVar22 = *(code **)(lVar7 + 8);
    (*pcVar22)(local_c0,puVar13);
    _swift_release(puVar8);
    (*pcVar21)(lVar19,puVar4);
    (*pcVar22)(lVar17,puVar13);
    return;
  }
  FUN_100279594(0);
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar21 = (code *)SoftwareBreakpoint(1,0x1003d16fc);
  (*pcVar21)();
}

