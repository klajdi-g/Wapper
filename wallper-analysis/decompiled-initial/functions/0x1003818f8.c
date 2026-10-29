// rea decompile_all
// name: FUN_1003818f8
// address: 0x1003818f8
// body: available
// range: 0x1003818f8-0x100381ca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003818f8(undefined8 *param_1,CGFloat param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  Design DVar7;
  Image IVar8;
  undefined7 extraout_var;
  Font FVar9;
  undefined *puVar10;
  Text TVar11;
  long lVar12;
  Font FVar13;
  Text TVar14;
  Color CVar15;
  Color CVar16;
  Color CVar17;
  Text TVar18;
  undefined *puVar19;
  long extraout_x8;
  void *pvVar20;
  char *pcVar21;
  undefined1 *puVar22;
  code *pcVar23;
  undefined *puVar24;
  CGFloat size;
  String systemName;
  String systemName_00;
  undefined1 auStack_c0 [8];
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined4 local_7c;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined7 extraout_var_00;
  
  FVar9.unknown = &DAT_10054a828;
  local_a0 = param_1;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(FVar9.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar22 = auStack_c0 + -extraout_x8;
  pvVar20 = (void *)param_3[3];
  if (pvVar20 == (void *)0x0) {
    local_90 = (undefined *)0x0;
    local_88 = (undefined *)0x0;
    local_98 = (undefined *)0x0;
  }
  else {
    pcVar21 = (char *)param_3[2];
    _swift_bridgeObjectRetain(pvVar20);
    systemName.bridgeObject = pvVar20;
    systemName.str = pcVar21;
    IVar8 = SwiftUI::Image::init(systemName);
    SwiftUI::Font::Weight::get_semibold((Weight)IVar8.unknown);
    DVar7 = SwiftUI::Font::Design::typeMetadataAccessor();
    param_6 = CONCAT71(extraout_var,DVar7.value);
    (**(code **)(*(long *)(param_6 + -8) + 0x38))(puVar22,1,1,param_6);
    puVar24 = (undefined *)0x4026000000000000;
    FVar9 = SwiftUI::Font::_system(param_2,(Font)0x0);
    FUN_10002a29c(puVar22,&DAT_10054a828,&DAT_10041e3c0);
    puVar10 = &DAT_100432f88;
    _swift_getKeyPath();
    local_88 = IVar8.unknown;
    _swift_retain(IVar8.unknown);
    local_98 = puVar10;
    _swift_retain(puVar10);
    local_90 = FVar9.unknown;
    _swift_retain();
    param_2.unknown = puVar24;
  }
  local_70 = *param_3;
  uVar1 = param_3[1];
  uStack_68 = uVar1;
  FUN_100026df4();
  _swift_bridgeObjectRetain(uVar1);
  puVar10 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar11 = SwiftUI::Text::_init();
  SwiftUI::Font::Weight::get_medium((Weight)TVar11.unknown);
  DVar7 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar12 = CONCAT71(extraout_var_00,DVar7.value);
  pcVar23 = *(code **)(*(long *)(lVar12 + -8) + 0x38);
  (*pcVar23)(puVar22,1,1,lVar12);
  size.unknown = (undefined *)0x402a000000000000;
  FVar13 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(puVar22,&DAT_10054a828,&DAT_10041e3c0);
  TVar18 = TVar11;
  puVar24 = puVar10;
  puVar19 = FVar9.unknown;
  TVar14 = SwiftUI::Text::_font(FVar13.unknown);
  local_7c = SUB84(puVar24,0);
  local_78 = puVar19;
  _swift_release(FVar13.unknown);
  FUN_100025b34(TVar11.unknown,puVar10,FVar9.unknown);
  _swift_bridgeObjectRelease(param_6);
  systemName_00.bridgeObject = (void *)0x80000001004e6870;
  systemName_00.str = (char *)0xd000000000000017;
  local_a8 = (undefined *)SwiftUI::Image::init(systemName_00);
  SwiftUI::Font::Weight::get_semibold((Weight)local_a8);
  (*pcVar23)(puVar22,1,1,lVar12);
  local_b0 = (undefined *)SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(puVar22,&DAT_10054a828,&DAT_10041e3c0);
  CVar15.unknown = &DAT_100432f88;
  _swift_getKeyPath();
  local_b8 = CVar15.unknown;
  CVar16 = SwiftUI::Color::get_white(CVar15);
  CVar17 = SwiftUI::Color::opacity(0.6,CVar16);
  _swift_release(CVar16.unknown);
  puVar4 = local_88;
  puVar3 = local_90;
  puVar2 = local_98;
  FUN_100026d80(local_88,local_98,local_90);
  uVar5 = local_7c;
  FUN_100007b14(TVar14.unknown,TVar18.unknown,local_7c);
  puVar6 = local_78;
  _swift_bridgeObjectRetain(local_78);
  puVar19 = local_a8;
  _swift_retain(local_a8);
  _swift_retain(CVar15.unknown);
  puVar24 = local_b0;
  _swift_retain(local_b0);
  _swift_retain(CVar17.unknown);
  FUN_100026dbc(puVar4,puVar2,puVar3);
  puVar10 = local_b8;
  *local_a0 = puVar4;
  local_a0[1] = puVar2;
  local_a0[2] = puVar3;
  local_a0[3] = TVar14.unknown;
  local_a0[4] = TVar18.unknown;
  *(char *)(local_a0 + 5) = (char)uVar5;
  local_a0[6] = puVar6;
  local_a0[7] = puVar19;
  local_a0[8] = local_b8;
  local_a0[9] = puVar24;
  local_a0[10] = CVar17.unknown;
  _swift_release(CVar17.unknown);
  _swift_release(puVar24);
  _swift_release(puVar10);
  _swift_release(puVar19);
  FUN_100025b34(TVar14.unknown,TVar18.unknown,local_7c);
  _swift_bridgeObjectRelease(local_78);
  FUN_100026dbc(puVar4,puVar2,puVar3);
  return;
}

