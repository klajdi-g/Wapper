// rea decompile_all
// name: FUN_1000c09f8
// address: 0x1000c09f8
// body: available
// range: 0x1000c09f8-0x1000c0f43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000c09f8(long param_1,CGFloat param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  Design DVar2;
  long lVar3;
  undefined *puVar4;
  Image IVar5;
  undefined7 extraout_var;
  Font FVar6;
  Alignment AVar7;
  Color CVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar9;
  long extraout_x12;
  long lVar10;
  Color CVar11;
  long lVar12;
  Material MVar13;
  undefined *puVar14;
  long lVar15;
  String systemName;
  long local_a0;
  undefined *local_98 [2];
  long local_88 [5];
  
  lVar3 = 0;
  local_a0 = param_3;
  local_88[3] = param_4;
  local_88[4] = param_1;
  FUN_1000c4fdc();
  local_88[2] = lVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar15 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100550e80;
  FUN_100002f94(&DAT_100550e80,&DAT_100422a20);
  local_98[0] = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10054a828;
  local_88[1] = lVar15 - extraout_x8_00;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (lVar15 - extraout_x8_00) - extraout_x8_01;
  puVar4 = &DAT_100550e88;
  FUN_100002f94(&DAT_100550e88,&DAT_100422a28);
  local_98[1] = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = (undefined *)(lVar10 - extraout_x8_02);
  puVar4 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  MVar13.unknown = puVar14 + -extraout_x8_03;
  lVar3 = 0;
  FUN_10040211c();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  CVar11.unknown = MVar13.unknown + -(extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100550e90;
  FUN_100002f94(&DAT_100550e90,&DAT_100422a30);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar9 = (long)CVar11.unknown - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  local_88[0] = lVar9;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = lVar9 - extraout_x12;
  FUN_1000087e4(local_a0,MVar13.unknown,&DAT_10054ac40,&DAT_10041ce70);
  puVar4 = MVar13.unknown;
  (**(code **)(lVar12 + 0x30))(MVar13.unknown,1,lVar3);
  if ((int)puVar4 == 1) {
    FUN_10002a29c(MVar13.unknown,&DAT_10054ac40,&DAT_10041ce70);
    SwiftUI::Material::get_ultraThin(MVar13);
    puVar4 = &DAT_10054af90;
    FUN_100002f94(&DAT_10054af90,&DAT_100435190);
    *(undefined2 *)(puVar14 + *(int *)(puVar4 + 0x38)) = 0x100;
    systemName.bridgeObject = (void *)0xef7473696c2e6574;
    systemName.str = (char *)0x6f6e2e636973756d;
    IVar5 = SwiftUI::Image::init(systemName);
    SwiftUI::Font::Weight::get_light((Weight)IVar5.unknown);
    DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,DVar2.value) + -8) + 0x38))
              (lVar10,1,1,CONCAT71(extraout_var,DVar2.value));
    FVar6 = SwiftUI::Font::_system(param_2,(Font)0x0);
    puVar4 = &DAT_10054a828;
    FUN_10002a29c(lVar10,&DAT_10054a828,&DAT_10041e3c0);
    CVar11.unknown = &DAT_1004226e8;
    _swift_getKeyPath();
    AVar7.unknown = (undefined *)SwiftUI::Color::get_white(CVar11);
    CVar8 = SwiftUI::Color::opacity(0.5,(Color)AVar7.unknown);
    _swift_release();
    AVar7 = SwiftUI::Alignment::get_center(AVar7);
    puVar1 = (undefined8 *)(puVar14 + *(int *)(local_98[1] + 0x24));
    *puVar1 = IVar5.unknown;
    puVar1[1] = CVar11.unknown;
    puVar1[2] = FVar6.unknown;
    puVar1[3] = CVar8.unknown;
    puVar1[4] = AVar7.unknown;
    lVar3 = local_88[1];
    puVar1[5] = puVar4;
    FUN_1000087e4(puVar14,local_88[1],&DAT_100550e88,&DAT_100422a28);
    _swift_storeEnumTagMultiPayload(lVar3,local_98[0],1);
    FUN_1000036d0(&DAT_100550e98,FUN_1000c4fdc,&TargetProtocolConformanceDescriptor_100422808);
    FUN_1000c6d60();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar3);
    FUN_10002a29c(puVar14,&DAT_100550e88,&DAT_100422a28);
    CVar11.unknown = puVar14;
  }
  else {
    FUN_100007e64(MVar13.unknown,CVar11.unknown,FUN_10040211c);
    FUN_100029504(CVar11.unknown,lVar15,FUN_10040211c);
    lVar3 = local_88[1];
    FUN_100029504(lVar15,local_88[1],FUN_1000c4fdc);
    _swift_storeEnumTagMultiPayload(lVar3,local_98[0],0);
    FUN_1000036d0(&DAT_100550e98,FUN_1000c4fdc,&TargetProtocolConformanceDescriptor_100422808);
    FUN_1000c6d60();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar3);
    FUN_100029548(lVar15,FUN_1000c4fdc);
    FUN_100029548(CVar11.unknown,FUN_10040211c);
  }
  CVar11 = SwiftUI::Color::get_black(CVar11);
  CVar8 = SwiftUI::Color::opacity((double)local_88[3] * 0.2,CVar11);
  _swift_release(CVar11.unknown);
  lVar3 = local_88[0];
  FUN_1000087e4(lVar9,local_88[0],&DAT_100550e90,&DAT_100422a30);
  lVar10 = local_88[4];
  FUN_1000087e4(lVar3,local_88[4],&DAT_100550e90,&DAT_100422a30);
  puVar4 = &DAT_100550eb0;
  FUN_100002f94(&DAT_100550eb0,&DAT_100422a38);
  *(undefined **)(lVar10 + *(int *)(puVar4 + 0x30)) = CVar8.unknown;
  _swift_retain(CVar8.unknown);
  FUN_10002a29c(lVar9,&DAT_100550e90,&DAT_100422a30);
  _swift_release(CVar8.unknown);
  FUN_10002a29c(lVar3,&DAT_100550e90,&DAT_100422a30);
  return;
}

