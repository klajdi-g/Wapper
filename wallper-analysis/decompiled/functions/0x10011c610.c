// rea decompile_all
// name: FUN_10011c610
// address: 0x10011c610
// body: available
// range: 0x10011c610-0x10011caf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10011c610(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,Set param_6)

{
  undefined1 *puVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  undefined *puVar5;
  PlainButtonStyle PVar6;
  undefined *puVar7;
  long lVar8;
  URL UVar9;
  void *pvVar10;
  undefined *puVar11;
  undefined *puVar12;
  Set SVar13;
  Set SVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  VerticalAlignment VVar15;
  long lVar16;
  code *pcVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 auStack_f0 [2];
  long local_e0 [3];
  undefined *local_c8;
  long local_c0;
  long local_b8 [3];
  undefined8 *local_a0;
  String local_90;
  
  puVar5 = &DAT_100553498;
  local_c0 = param_1;
  FUN_100002f94(&DAT_100553498,&DAT_100426528);
  local_c8 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar8 = (long)local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_b8[0] = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar18 = (undefined8 *)(lVar8 - extraout_x12);
  PVar6 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_e0[1] = *(long *)(PVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e0[1] + 0x40));
  lVar16 = (long)puVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_1005534a0;
  FUN_100002f94(&DAT_1005534a0,&DAT_100426530);
  local_e0[0] = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(local_e0[0] + 0x40) + 0xfU & 0xfffffffffffffff0);
  VVar15.unknown = (undefined *)(lVar16 - extraout_x8_01);
  puVar7 = &DAT_1005534a8;
  FUN_100002f94(&DAT_1005534a8,&DAT_100426538);
  local_e0[2] = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e0[2] + 0x40));
  lVar19 = (long)VVar15.unknown - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar19 - extraout_x12_00;
  lVar8 = 0;
  FUN_10011c000();
  if (*(long *)((long)param_6.unknown + (long)*(int *)(lVar8 + 0x1c)) != 0) {
    UVar9.unknown = (undefined *)0x0;
    FUN_10040211c();
    local_90 = Foundation::URL::get_lastPathComponent(UVar9);
    uVar2 = (ulong)local_90.str & 0xffffffffffff;
    if (((ulong)local_90.bridgeObject & 0x2000000000000000) != 0) {
      uVar2 = (ulong)local_90.bridgeObject >> 0x38 & 0xf;
    }
    if (uVar2 == 0) {
      _swift_bridgeObjectRelease();
      pcVar3 = *(char **)param_6.unknown;
      pvVar10 = *(void **)((long)param_6.unknown + 8);
      _swift_bridgeObjectRetain();
      local_90.bridgeObject = pvVar10;
      local_90.str = pcVar3;
    }
    local_a0 = (undefined8 *)param_6.unknown;
    FUN_100002f94(&DAT_1005534b0,&DAT_100426540);
    FUN_10012178c();
    *(undefined **)(lVar20 + -0x10) =
         PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8;
    (extension_SwiftUI)::SwiftUI::NavigationLink::_init();
    SwiftUI::PlainButtonStyle::init();
    puVar11 = &DAT_100553540;
    FUN_1000087a0(&DAT_100553540,&DAT_1005534a0,&DAT_100426530,
                  PTR_SwiftUI__SwiftUI__NavigationLink<undefined,undefined>_>SwiftUI__View_100522118
                 );
    puVar12 = &DAT_10054a8b0;
    FUN_1000036d0(&DAT_10054a8b0,PTR_typeMetadataAccessor_100522380,
                  PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (lVar20,lVar16,puVar5,PVar6.unknown,puVar11,puVar12);
    (**(code **)(local_e0[1] + 8))(lVar16,PVar6.unknown);
    (**(code **)(local_e0[0] + 8))(VVar15.unknown,puVar5);
    VVar15 = SwiftUI::VerticalAlignment::get_top(VVar15);
    *puVar18 = VVar15.unknown;
    puVar18[1] = 0x4020000000000000;
    *(undefined1 *)(puVar18 + 2) = 0;
    puVar5 = &DAT_100553548;
    FUN_100002f94(&DAT_100553548,&DAT_100426588);
    FUN_10011ddb0((long)puVar18 + (long)*(int *)(puVar5 + 0x2c));
    SVar13 = SwiftUI::Edge::Set::get_horizontal(param_6);
    uVar21 = 0x4000000000000000;
    SwiftUI::EdgeInsets::init((CGFloat)SVar13.unknown);
    SVar14.unknown = &DAT_100553550;
    uVar23 = param_3;
    uVar24 = param_4;
    uVar26 = param_5;
    FUN_100002f94(&DAT_100553550,&DAT_100426590);
    puVar1 = (undefined1 *)((long)puVar18 + (long)*(int *)(SVar14.unknown + 0x24));
    *puVar1 = (char)SVar13.unknown;
    *(undefined8 *)(puVar1 + 8) = uVar21;
    *(undefined8 *)(puVar1 + 0x10) = param_3;
    *(undefined8 *)(puVar1 + 0x18) = param_4;
    *(undefined8 *)(puVar1 + 0x20) = param_5;
    puVar1[0x28] = 0;
    SVar13 = SwiftUI::Edge::Set::get_top(SVar14);
    uVar22 = 0x4024000000000000;
    SwiftUI::EdgeInsets::init((CGFloat)SVar13.unknown);
    SVar14.unknown = &DAT_100553558;
    uVar21 = uVar23;
    uVar25 = uVar24;
    uVar27 = uVar26;
    FUN_100002f94(&DAT_100553558,&DAT_100426598);
    puVar1 = (undefined1 *)((long)puVar18 + (long)*(int *)(SVar14.unknown + 0x24));
    *puVar1 = (char)SVar13.unknown;
    *(undefined8 *)(puVar1 + 8) = uVar22;
    *(undefined8 *)(puVar1 + 0x10) = uVar23;
    *(undefined8 *)(puVar1 + 0x18) = uVar24;
    *(undefined8 *)(puVar1 + 0x20) = uVar26;
    puVar1[0x28] = 0;
    SVar14 = SwiftUI::Edge::Set::get_bottom(SVar14);
    uVar23 = 0x4010000000000000;
    SwiftUI::EdgeInsets::init((CGFloat)SVar14.unknown);
    lVar8 = local_e0[2];
    puVar1 = (undefined1 *)((long)puVar18 + (long)*(int *)(local_c8 + 0x24));
    *puVar1 = (char)SVar14.unknown;
    *(undefined8 *)(puVar1 + 8) = uVar23;
    *(undefined8 *)(puVar1 + 0x10) = uVar21;
    *(undefined8 *)(puVar1 + 0x18) = uVar25;
    *(undefined8 *)(puVar1 + 0x20) = uVar27;
    puVar1[0x28] = 0;
    pcVar17 = *(code **)(lVar8 + 0x10);
    (*pcVar17)(lVar19,lVar20,puVar7);
    lVar4 = local_b8[0];
    FUN_1000087e4(puVar18,local_b8[0],&DAT_100553498,&DAT_100426528);
    lVar16 = local_c0;
    (*pcVar17)(local_c0,lVar19,puVar7);
    puVar5 = &DAT_100553560;
    FUN_100002f94(&DAT_100553560,&DAT_1004265a0);
    FUN_1000087e4(lVar4,lVar16 + *(int *)(puVar5 + 0x30),&DAT_100553498,&DAT_100426528);
    FUN_10002a29c(puVar18,&DAT_100553498,&DAT_100426528);
    pcVar17 = *(code **)(lVar8 + 8);
    (*pcVar17)(lVar20,puVar7);
    FUN_10002a29c(lVar4,&DAT_100553498,&DAT_100426528);
    (*pcVar17)(lVar19,puVar7);
    return;
  }
  FUN_100279594(0);
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar17 = (code *)SoftwareBreakpoint(1,0x10011caf8);
  (*pcVar17)();
}

