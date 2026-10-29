// rea decompile_all
// name: FUN_100067074
// address: 0x100067074
// body: available
// range: 0x100067074-0x10006777b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000672e0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100067074(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  char *pcVar4;
  undefined *puVar5;
  Design DVar6;
  long lVar7;
  CharacterSet CVar8;
  CharacterSet CVar9;
  URL UVar10;
  Color CVar11;
  Color CVar12;
  Image IVar13;
  Font FVar14;
  Alignment AVar15;
  Color CVar16;
  undefined *puVar17;
  AnyView AVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  CGFloat CVar20;
  CharacterSet in;
  String *pSVar21;
  long lVar22;
  code *pcVar23;
  long lVar24;
  String SVar25;
  String systemName;
  String local_150;
  undefined8 *local_140;
  undefined8 local_138;
  undefined *local_130;
  undefined8 uStack_128;
  undefined *local_120;
  undefined *puStack_118;
  undefined *local_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *local_e8;
  undefined2 uStack_e0;
  undefined6 uStack_de;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined *local_b8;
  undefined *puStack_b0;
  undefined *local_a8;
  undefined2 local_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined *puVar19;
  
  puVar19 = &DAT_100553d90;
  local_138 = param_1;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_150.str = (char *)((long)&local_150 - extraout_x8);
  FUN_100113f00();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  pSVar21 = (String *)
            ((char *)((long)&local_150 - extraout_x8) +
            -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar19 = &DAT_10054e540;
  FUN_100002f94(&DAT_10054e540,&DAT_10041f490);
  local_150.bridgeObject = puVar19;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar19 = &DAT_10054a828;
  local_140 = (undefined8 *)((long)pSVar21 - extraout_x8_01);
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = ((long)pSVar21 - extraout_x8_01) - extraout_x8_02;
  CVar8 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar22 = *(long *)(CVar8.unknown + -8);
  CVar9 = CVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar22 + 0x40));
  in.unknown = (undefined *)(lVar24 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  Foundation::CharacterSet::get_whitespacesAndNewlines(CVar9);
  FUN_100026df4();
  SVar25 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
  puVar19 = SVar25.bridgeObject;
  pcVar23 = *(code **)(lVar22 + 8);
  (*pcVar23)(in.unknown,CVar8.unknown);
  CVar11.unknown = puVar19;
  _swift_bridgeObjectRelease();
  uVar2 = (ulong)SVar25.str & 0xffffffffffff;
  if (((ulong)puVar19 & 0x2000000000000000) != 0) {
    uVar2 = (ulong)puVar19 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    CVar11 = SwiftUI::Color::get_white(CVar11);
    CVar20.unknown = (undefined *)0x3fb47ae147ae147b;
    CVar12 = SwiftUI::Color::opacity(0.08,CVar11);
    _swift_release(CVar11.unknown);
    SVar25.bridgeObject = (void *)0xe500000000000000;
    SVar25.str = (char *)0x6f746f6870;
    IVar13 = SwiftUI::Image::init(SVar25);
    SwiftUI::Font::Weight::get_medium((Weight)IVar13.unknown);
    DVar6 = SwiftUI::Font::Design::typeMetadataAccessor();
    lVar7 = CONCAT71((int7)((ulong)IVar13.unknown >> 8),DVar6.value);
    (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar24,1,1,lVar7);
    FVar14 = SwiftUI::Font::_system(CVar20,(Font)0x0);
    puVar19 = &DAT_10054a828;
    FUN_10002a29c(lVar24,&DAT_10054a828,&DAT_10041e3c0);
    CVar11.unknown = &DAT_10041eeb0;
    _swift_getKeyPath();
    AVar15.unknown = (undefined *)SwiftUI::Color::get_white(CVar11);
    CVar16 = SwiftUI::Color::opacity(0.6,(Color)AVar15.unknown);
    _swift_release();
    local_b8 = (undefined *)SwiftUI::Alignment::get_center(AVar15);
    uStack_e0 = 0x100;
    local_a0 = 0x100;
    local_e8 = CVar12.unknown;
    local_d8 = IVar13.unknown;
    puStack_d0 = CVar11.unknown;
    local_c8 = FVar14.unknown;
    puStack_c0 = CVar16.unknown;
    puStack_b0 = puVar19;
    local_a8 = CVar12.unknown;
    local_98 = IVar13.unknown;
    puStack_90 = CVar11.unknown;
    local_88 = FVar14.unknown;
    puStack_80 = CVar16.unknown;
    local_78 = local_b8;
    puStack_70 = puVar19;
    FUN_1000087e4(&local_e8,&local_130,&DAT_10054e548,&DAT_10041f4a0);
    FUN_10002a29c(&local_a8,&DAT_10054e548,&DAT_10041f4a0);
    puVar5 = puStack_d0;
    puVar17 = local_d8;
    puVar19 = local_e8;
    puVar1 = local_140;
    local_140[1] = CONCAT62(uStack_de,uStack_e0);
    *puVar1 = puVar19;
    puVar1[3] = puVar5;
    puVar1[2] = puVar17;
    puVar5 = puStack_b0;
    puVar17 = local_b8;
    puVar19 = local_c8;
    puVar1[5] = puStack_c0;
    puVar1[4] = puVar19;
    puVar1[7] = puVar5;
    puVar1[6] = puVar17;
    _swift_storeEnumTagMultiPayload(puVar1,local_150.bridgeObject,0);
    FUN_100002f94(&DAT_10054e548,&DAT_10041f4a0);
    FUN_10006c2c8();
    FUN_1000036d0(&DAT_10054e568,FUN_100113f00,&TargetProtocolConformanceDescriptor_1004261d8);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar1);
  }
  else {
    Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)CVar11.unknown);
    SVar25 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
    (*pcVar23)(in.unknown,CVar8.unknown);
    lVar22 = 0;
    FUN_10040211c();
    iVar3 = *(int *)(lVar22 + 0x14);
    UVar10 = Foundation::URL::typeMetadataAccessor();
    pcVar4 = local_150.str;
    lVar22 = *(long *)(UVar10.unknown + -8);
    (**(code **)(lVar22 + 0x10))(local_150.str,param_2 + iVar3,UVar10.unknown);
    (**(code **)(lVar22 + 0x38))(pcVar4,0,1,UVar10.unknown);
    iVar3 = *(int *)(lVar7 + 0x24);
    local_a8 = (undefined *)0x0;
    puVar19 = &DAT_10054bd30;
    FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
    SwiftUI::State::init((undefined *)((long)&pSVar21->str + (long)iVar3),puVar19,puVar19);
    local_a8 = (undefined *)CONCAT71(local_a8._1_7_,1);
    SwiftUI::State::init
              ((undefined *)((long)&pSVar21->str + (long)*(int *)(lVar7 + 0x28)),puVar19,
               PTR___type_metadata_for_Swift_Bool_100523b70);
    puVar17 = PTR___type_metadata_for_Swift_Int_100523bd8;
    local_a8 = (undefined *)0x0;
    SwiftUI::State::init
              ((undefined *)((long)&pSVar21->str + (long)*(int *)(lVar7 + 0x2c)),puVar19,
               PTR___type_metadata_for_Swift_Int_100523bd8);
    local_a8 = (undefined *)0x0;
    SwiftUI::State::init
              ((undefined *)((long)&pSVar21->str + (long)*(int *)(lVar7 + 0x30)),puVar19,puVar17);
    *pSVar21 = SVar25;
    CVar11.unknown = pcVar4;
    FUN_1000087e4(pcVar4,(undefined *)((long)&pSVar21->str + (long)*(int *)(lVar7 + 0x14)),
                  &DAT_100553d90,&DAT_10041bf10);
    *(undefined1 *)((long)&pSVar21->str + (long)*(int *)(lVar7 + 0x18)) = 1;
    puVar1 = (undefined8 *)((long)&pSVar21->str + (long)*(int *)(lVar7 + 0x1c));
    *puVar1 = 0x80;
    *(undefined1 *)(puVar1 + 1) = 0;
    CVar11 = SwiftUI::Color::get_white(CVar11);
    CVar20.unknown = (undefined *)0x3fb47ae147ae147b;
    CVar12 = SwiftUI::Color::opacity(0.08,CVar11);
    _swift_release(CVar11.unknown);
    systemName.bridgeObject = (void *)0xe500000000000000;
    systemName.str = (char *)0x6f746f6870;
    IVar13 = SwiftUI::Image::init(systemName);
    SwiftUI::Font::Weight::get_medium((Weight)IVar13.unknown);
    DVar6 = SwiftUI::Font::Design::typeMetadataAccessor();
    lVar22 = CONCAT71((int7)((ulong)IVar13.unknown >> 8),DVar6.value);
    (**(code **)(*(long *)(lVar22 + -8) + 0x38))(lVar24,1,1,lVar22);
    FVar14 = SwiftUI::Font::_system(CVar20,(Font)0x0);
    puVar19 = &DAT_10054a828;
    FUN_10002a29c(lVar24,&DAT_10054a828,&DAT_10041e3c0);
    CVar11.unknown = &DAT_10041eeb0;
    _swift_getKeyPath();
    AVar15.unknown = (undefined *)SwiftUI::Color::get_white(CVar11);
    CVar16 = SwiftUI::Color::opacity(0.6,(Color)AVar15.unknown);
    _swift_release();
    local_b8 = (undefined *)SwiftUI::Alignment::get_center(AVar15);
    uStack_e0 = 0x100;
    local_a0 = 0x100;
    puVar17 = &DAT_10054e548;
    local_e8 = CVar12.unknown;
    local_d8 = IVar13.unknown;
    puStack_d0 = CVar11.unknown;
    local_c8 = FVar14.unknown;
    puStack_c0 = CVar16.unknown;
    puStack_b0 = puVar19;
    local_a8 = CVar12.unknown;
    local_98 = IVar13.unknown;
    puStack_90 = CVar11.unknown;
    local_88 = FVar14.unknown;
    puStack_80 = CVar16.unknown;
    local_78 = local_b8;
    puStack_70 = puVar19;
    FUN_1000087e4(&local_e8,&local_130,&DAT_10054e548,&DAT_10041f4a0);
    FUN_10002a29c(&local_a8,&DAT_10054e548,&DAT_10041f4a0);
    uStack_128 = CONCAT62(uStack_de,uStack_e0);
    local_130 = local_e8;
    puStack_118 = puStack_d0;
    local_120 = local_d8;
    puStack_108 = puStack_c0;
    local_110 = local_c8;
    puStack_f8 = puStack_b0;
    puStack_100 = local_b8;
    FUN_100002f94(&DAT_10054e548,&DAT_10041f4a0);
    puVar19 = puVar17;
    FUN_10006c2c8();
    AVar18 = SwiftUI::AnyView::_init(puVar19,puVar17,puVar19);
    FUN_10002a29c(pcVar4,&DAT_100553d90,&DAT_10041bf10);
    *(undefined **)((long)&pSVar21->str + (long)*(int *)(lVar7 + 0x20)) = AVar18.unknown;
    puVar1 = local_140;
    FUN_100029504(pSVar21,local_140,FUN_100113f00);
    _swift_storeEnumTagMultiPayload(puVar1,local_150.bridgeObject,1);
    FUN_1000036d0(&DAT_10054e568,FUN_100113f00,&TargetProtocolConformanceDescriptor_1004261d8);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar1);
    FUN_100029548(pSVar21,FUN_100113f00);
  }
  return;
}

