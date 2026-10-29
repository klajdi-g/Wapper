// rea decompile_all
// name: FUN_10006ec38
// address: 0x10006ec38
// body: available
// range: 0x10006ec38-0x10006f1df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006ec38(undefined8 *param_1,CGFloat param_2,long param_3,undefined8 param_4,
                  StringInterpolation param_5,Color param_6)

{
  String SVar1;
  String SVar2;
  undefined *puVar3;
  void *pvVar4;
  code *pcVar5;
  Design DVar6;
  undefined *puVar7;
  StringInterpolation SVar8;
  LocalizedStringKey LVar9;
  Text TVar10;
  undefined7 extraout_var;
  Font FVar11;
  Text TVar12;
  Color CVar13;
  char *pcVar14;
  Color CVar15;
  Color CVar16;
  Text TVar17;
  undefined *puVar18;
  Text TVar19;
  undefined8 uVar20;
  uint uVar21;
  StringInterpolation SVar22;
  char *pcVar23;
  undefined *puVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined *puVar27;
  ulong uVar28;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar29;
  long lVar30;
  CGFloat size;
  String SVar31;
  String SVar32;
  String SVar33;
  undefined8 uStack_d0;
  undefined2 auStack_c8 [4];
  undefined1 auStack_c0 [8];
  long local_b8;
  undefined1 *local_b0;
  code *local_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined8 *local_78;
  char *local_70;
  void *pvStack_68;
  
  puVar7 = &DAT_10054a828;
  local_78 = param_1;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar29 = auStack_c0 + -extraout_x8;
  SVar8 = SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar8.unknown + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_100521118)();
  SVar8.unknown = puVar29 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) + -extraout_x12;
  SwiftUI::LocalizedStringKey::StringInterpolation::init(8,1);
  SVar31.bridgeObject = (void *)0xe800000000000000;
  SVar31.str = (char *)0x207265706c6c6157;
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar31,param_5);
  lVar30 = *(long *)(param_3 + 0x18);
  if (lVar30 != 0) {
    puVar7 = &DAT_10041f910;
    _swift_getKeyPath(&DAT_10041f910);
    puVar18 = &DAT_10041f938;
    _swift_getKeyPath();
    _swift_retain(lVar30);
    SVar22.unknown = puVar18;
    Combine::Published::_get_subscript(&local_70);
    _swift_release(puVar7);
    _swift_release(puVar18);
    pvVar4 = pvStack_68;
    SVar1.bridgeObject = pvStack_68;
    SVar1.str = local_70;
    SwiftUI::LocalizedStringKey::StringInterpolation::appendInterpolation(SVar1,SVar22);
    _swift_bridgeObjectRelease(pvVar4);
    puVar18 = (undefined *)0xe000000000000000;
    SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
              ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar22);
    uVar21 = (uint)SVar22.unknown;
    LVar9 = SwiftUI::LocalizedStringKey::init(SVar8);
    *(undefined2 *)(SVar8.unknown + -8) = 0x100;
    *(undefined8 *)(SVar8.unknown + -0x10) = 0;
    pcVar23 = (char *)(ulong)(uVar21 & 1);
    TVar10 = SwiftUI::Text::_init(LVar9);
    SwiftUI::Font::Weight::get_semibold((Weight)TVar10.unknown);
    DVar6 = SwiftUI::Font::Design::typeMetadataAccessor();
    local_a0 = CONCAT71(extraout_var,DVar6.value);
    local_a8 = *(code **)(*(long *)(local_a0 + -8) + 0x38);
    (*local_a8)(puVar29,1,1,local_a0);
    size.unknown = (undefined *)0x402a000000000000;
    FVar11 = SwiftUI::Font::_system(param_2,(Font)0x0);
    FUN_10002a29c(puVar29,&DAT_10054a828,&DAT_10041e3c0);
    TVar19 = TVar10;
    puVar7 = puVar18;
    pcVar14 = pcVar23;
    TVar12 = SwiftUI::Text::_font(FVar11.unknown);
    local_b8 = lVar30;
    local_b0 = puVar29;
    _swift_release(FVar11.unknown);
    FUN_100025b34(TVar10.unknown,puVar18,pcVar23);
    _swift_bridgeObjectRelease();
    CVar13 = SwiftUI::Color::get_white(param_6);
    CVar15 = CVar13;
    local_70 = (char *)CVar13;
    FUN_100028d58();
    TVar10 = TVar12;
    puVar24 = TVar19.unknown;
    CVar16.unknown = puVar7;
    local_98 = CVar15.unknown;
    local_80 = (undefined *)SwiftUI::Text::_foregroundStyle();
    local_90 = TVar10.unknown;
    local_88 = CVar16.unknown;
    FUN_100025b34(TVar12.unknown,TVar19.unknown,puVar7);
    _swift_release(CVar13.unknown);
    _swift_bridgeObjectRelease();
    FUN_1000743f4();
    puVar7 = &DAT_10041f910;
    _swift_getKeyPath(&DAT_10041f910);
    puVar18 = &DAT_10041f938;
    _swift_getKeyPath();
    lVar30 = local_b8;
    SVar22.unknown = puVar18;
    Combine::Published::_get_subscript(&local_70,local_b8,puVar7);
    _swift_release(puVar7);
    _swift_release(puVar18);
    _swift_release(lVar30);
    SVar2.bridgeObject = pvStack_68;
    SVar2.str = local_70;
    SwiftUI::LocalizedStringKey::StringInterpolation::init(5,2);
    SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
              ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar22);
    SVar32.bridgeObject = TVar19.unknown;
    SVar32.str = pcVar14;
    SwiftUI::LocalizedStringKey::StringInterpolation::appendInterpolation(SVar32,SVar22);
    _swift_bridgeObjectRelease(TVar19.unknown);
    SVar33.bridgeObject = (void *)0xa500000000000000;
    SVar33.str = (char *)0x209286e220;
    SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar33,SVar22);
    SwiftUI::LocalizedStringKey::StringInterpolation::appendInterpolation(SVar2,SVar22);
    _swift_bridgeObjectRelease(pvStack_68);
    uVar20 = 0xe000000000000000;
    SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
              ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar22);
    uVar21 = (uint)SVar22.unknown;
    LVar9 = SwiftUI::LocalizedStringKey::init
                      ((StringInterpolation)
                       (puVar29 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
    *(undefined2 *)(SVar8.unknown + -8) = 0x100;
    *(undefined8 *)(SVar8.unknown + -0x10) = 0;
    uVar25 = (ulong)(uVar21 & 1);
    TVar10 = SwiftUI::Text::_init(LVar9);
    SwiftUI::Font::Weight::get_regular((Weight)TVar10.unknown);
    puVar29 = local_b0;
    (*local_a8)(local_b0,1,1,local_a0);
    FVar11 = SwiftUI::Font::_system(size,(Font)0x0);
    FUN_10002a29c(puVar29,&DAT_10054a828,&DAT_10041e3c0);
    TVar19 = TVar10;
    uVar26 = uVar20;
    uVar28 = uVar25;
    TVar12 = SwiftUI::Text::_font(FVar11.unknown);
    _swift_release(FVar11.unknown);
    FUN_100025b34(TVar10.unknown,uVar20,uVar25);
    _swift_bridgeObjectRelease();
    CVar15 = SwiftUI::Color::get_white(CVar16);
    CVar16 = SwiftUI::Color::opacity(0.4,CVar15);
    _swift_release(CVar15.unknown);
    TVar10 = TVar12;
    puVar27 = TVar19.unknown;
    uVar20 = uVar26;
    local_70 = (char *)CVar16;
    TVar17 = SwiftUI::Text::_foregroundStyle();
    FUN_100025b34(TVar12.unknown,TVar19.unknown,uVar26);
    _swift_release(CVar16.unknown);
    _swift_bridgeObjectRelease(uVar28);
    puVar3 = local_80;
    puVar18 = local_88;
    puVar7 = local_90;
    *local_78 = local_80;
    local_78[1] = local_90;
    *(char *)(local_78 + 2) = (char)puVar24;
    local_78[3] = local_88;
    local_78[4] = TVar17.unknown;
    local_78[5] = TVar10.unknown;
    *(char *)(local_78 + 6) = (char)puVar27;
    local_78[7] = uVar20;
    FUN_100007b14(local_80,local_90,puVar24);
    _swift_bridgeObjectRetain(puVar18);
    FUN_100007b14(TVar17.unknown,TVar10.unknown,puVar27);
    _swift_bridgeObjectRetain(uVar20);
    FUN_100025b34(TVar17.unknown,TVar10.unknown,puVar27);
    _swift_bridgeObjectRelease(uVar20);
    FUN_100025b34(puVar3,puVar7,puVar24);
    _swift_bridgeObjectRelease(puVar18);
    return;
  }
  FUN_1001373cc(0);
  FUN_1000036d0(&DAT_100553de0,FUN_1001373cc,&TargetProtocolConformanceDescriptor_100426ef0);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10006f1e0);
  (*pcVar5)();
}

