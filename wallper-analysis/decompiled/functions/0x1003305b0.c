// rea decompile_all
// name: FUN_1003305b0
// address: 0x1003305b0
// body: available
// range: 0x1003305b0-0x100330b7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003305b0(undefined8 *param_1,undefined *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  char *pcVar3;
  code *pcVar4;
  ResizingMode RVar5;
  undefined7 extraout_var;
  Color CVar7;
  Color CVar8;
  Color CVar9;
  UnitPoint UVar10;
  Gradient gradient;
  undefined *puVar11;
  undefined *puVar12;
  Image IVar13;
  Image IVar14;
  EdgeInsets EVar15;
  HorizontalAlignment HVar16;
  VerticalAlignment VVar17;
  Set SVar18;
  Alignment AVar19;
  UnitPoint startPoint;
  UnitPoint endPoint;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar20;
  void *pvVar21;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 *puVar22;
  EdgeInsets capInsets;
  undefined8 *puVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  String SVar29;
  undefined8 uStack_180;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined1 auStack_168 [8];
  undefined8 auStack_160 [2];
  undefined *apuStack_150 [5];
  long local_128 [6];
  char local_f8;
  undefined7 uStack_f7;
  undefined8 auStack_f0 [5];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined *puVar6;
  
  puVar6 = &DAT_10055cb28;
  FUN_100002f94(&DAT_10055cb28,&DAT_100431ee8);
  apuStack_150[3] = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  puVar6 = (undefined *)((long)apuStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  apuStack_150[1] = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar23 = (undefined8 *)(puVar6 + -extraout_x12);
  puVar6 = &DAT_10055cb30;
  FUN_100002f94(&DAT_10055cb30,&DAT_100431ef0);
  apuStack_150[4] = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar20 = (long)puVar23 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_128[0] = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar22 = (undefined8 *)(lVar20 - extraout_x12_00);
  RVar5 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar6 = (undefined *)CONCAT71(extraout_var,RVar5.value);
  lVar20 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  capInsets.unknown = (undefined *)((long)puVar22 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  CVar7.unknown = &DAT_10054af98;
  FUN_100002f94(&DAT_10054af98,&DAT_10041c1a0);
  startPoint.unknown = (undefined *)0x30;
  endPoint.unknown = (undefined *)0x7;
  _swift_allocObject();
  *(undefined8 *)(CVar7.unknown + 0x18) = 4;
  *(undefined8 *)(CVar7.unknown + 0x10) = 2;
  CVar8 = SwiftUI::Color::get_white(CVar7);
  CVar9 = SwiftUI::Color::opacity(0.18,CVar8);
  _swift_release();
  *(undefined **)(CVar7.unknown + 0x20) = CVar9.unknown;
  UVar10.unknown = (undefined *)SwiftUI::Color::get_white(CVar8);
  CVar9 = SwiftUI::Color::opacity(0.05,(Color)UVar10.unknown);
  _swift_release();
  *(undefined **)(CVar7.unknown + 0x28) = CVar9.unknown;
  UVar10 = SwiftUI::UnitPoint::get_topLeading(UVar10);
  SwiftUI::UnitPoint::get_bottomTrailing(UVar10);
  gradient = SwiftUI::Gradient::init();
  SwiftUI::LinearGradient::init(gradient,startPoint,endPoint);
  lVar24 = *(long *)(param_2 + 0x20);
  apuStack_150[2] = param_2;
  if (lVar24 == 0) {
    FUN_10014e37c(0);
    FUN_1000036d0(&DAT_100553148,FUN_10014e37c,&TargetProtocolConformanceDescriptor_100427f04);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100330b80);
    (*pcVar4)();
  }
  puVar11 = &DAT_100431b60;
  _swift_getKeyPath(&DAT_100431b60);
  puVar12 = &DAT_100431b88;
  _swift_getKeyPath(&DAT_100431b88);
  _swift_retain(lVar24);
  Combine::Published::_get_subscript(&local_f8);
  _swift_release(puVar11);
  _swift_release(puVar12);
  _swift_release(lVar24);
  pvVar21 = (void *)0x80000001004e64d0;
  pcVar3 = (char *)0xd000000000000011;
  if (local_f8 == '\0') {
    pvVar21 = (void *)0xea00000000006762;
    pcVar3 = (char *)0x2d65736e6563696c;
  }
  SVar29.bridgeObject = pvVar21;
  SVar29.str = pcVar3;
  IVar13 = SwiftUI::Image::_init(SVar29);
  IVar14.unknown = puVar6;
  (**(code **)(lVar20 + 0x68))
            (capInsets.unknown,
             *(undefined4 *)
              PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_1005232f0
            );
  uVar26 = 0;
  uVar27 = 0;
  uVar28 = 0;
  IVar14 = SwiftUI::Image::resizable(capInsets,(ResizingMode)(__int8)IVar13.unknown,IVar14);
  _swift_release(IVar13.unknown);
  EVar15.unknown = capInsets.unknown;
  (**(code **)(lVar20 + 8))(capInsets.unknown,puVar6);
  HVar16 = SwiftUI::HorizontalAlignment::get_center(EVar15.unknown);
  *puVar22 = HVar16.unknown;
  puVar22[1] = 0;
  *(undefined1 *)(puVar22 + 2) = 1;
  VVar17.unknown = &DAT_10055cb38;
  FUN_100002f94(&DAT_10055cb38,&DAT_100431f00);
  puVar1 = (undefined8 *)((long)puVar22 + (long)*(int *)(VVar17.unknown + 0x2c));
  VVar17 = SwiftUI::VerticalAlignment::get_center(VVar17);
  *puVar23 = VVar17.unknown;
  puVar23[1] = 0x4028000000000000;
  *(undefined1 *)(puVar23 + 2) = 0;
  puVar6 = &DAT_10055cb40;
  FUN_100002f94(&DAT_10055cb40,&DAT_100431f08);
  SVar18.unknown = apuStack_150[2];
  FUN_100330b80((long)puVar23 + (long)*(int *)(puVar6 + 0x2c));
  SVar18 = SwiftUI::Edge::Set::get_bottom(SVar18);
  uVar25 = 0x4032000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar18.unknown);
  puVar2 = (undefined1 *)((long)puVar23 + (long)*(int *)(apuStack_150[3] + 0x24));
  *puVar2 = (char)SVar18.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar25;
  AVar19.unknown = apuStack_150[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar26;
  *(undefined8 *)(puVar2 + 0x18) = uVar27;
  *(undefined8 *)(puVar2 + 0x20) = uVar28;
  puVar2[0x28] = 0;
  puVar6 = &DAT_10055cb28;
  FUN_1000087e4(puVar23,apuStack_150[1],&DAT_10055cb28,&DAT_100431ee8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar11 = &DAT_10055cb48;
  FUN_100002f94(&DAT_10055cb48,&DAT_100431f10);
  FUN_1000087e4(AVar19.unknown,(long)puVar1 + (long)*(int *)(puVar11 + 0x30),&DAT_10055cb28,
                &DAT_100431ee8);
  FUN_10002a29c(puVar23,&DAT_10055cb28,&DAT_100431ee8);
  FUN_10002a29c(AVar19.unknown,&DAT_10055cb28,&DAT_100431ee8);
  AVar19 = SwiftUI::Alignment::get_center(AVar19);
  *(undefined **)(capInsets.unknown + -0x10) = AVar19.unknown;
  *(undefined **)(capInsets.unknown + -8) = puVar6;
  capInsets.unknown[-0x18] = 1;
  *(undefined8 *)(capInsets.unknown + -0x20) = 0;
  capInsets.unknown[-0x28] = 1;
  *(undefined8 *)(capInsets.unknown + -0x30) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar23 = (undefined8 *)((long)puVar22 + (long)*(int *)(apuStack_150[4] + 0x24));
  puVar23[9] = uStack_b0;
  puVar23[8] = local_b8;
  puVar23[0xb] = uStack_a0;
  puVar23[10] = local_a8;
  puVar23[0xd] = uStack_90;
  puVar23[0xc] = local_98;
  puVar23[1] = auStack_f0[0];
  *puVar23 = CONCAT71(uStack_f7,local_f8);
  puVar23[3] = auStack_f0[2];
  puVar23[2] = auStack_f0[1];
  puVar23[5] = auStack_f0[4];
  puVar23[4] = auStack_f0[3];
  lVar20 = local_128[0];
  puVar23[7] = uStack_c0;
  puVar23[6] = local_c8;
  FUN_1000087e4(puVar22,local_128[0],&DAT_10055cb30,&DAT_100431ef0);
  *param_1 = local_128[1];
  param_1[4] = local_128[5];
  param_1[3] = local_128[4];
  param_1[2] = local_128[3];
  param_1[1] = local_128[2];
  param_1[5] = IVar14.unknown;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 0x101;
  puVar6 = &DAT_10055cb50;
  FUN_100002f94(&DAT_10055cb50,&DAT_100431f18);
  FUN_1000087e4(lVar20,(long)param_1 + (long)*(int *)(puVar6 + 0x40),&DAT_10055cb30,&DAT_100431ef0);
  _swift_bridgeObjectRetain(local_128[1]);
  _swift_retain(IVar14.unknown);
  FUN_10002a29c(puVar22,&DAT_10055cb30,&DAT_100431ef0);
  FUN_10002a29c(lVar20,&DAT_10055cb30,&DAT_100431ef0);
  _swift_bridgeObjectRelease(local_128[1]);
  _swift_release(IVar14.unknown);
  return;
}

