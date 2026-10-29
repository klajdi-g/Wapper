// rea decompile_all
// name: FUN_1000c3ea4
// address: 0x1000c3ea4
// body: available
// range: 0x1000c3ea4-0x1000c4143 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000c3ea4(undefined8 *param_1,CGFloat param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  Design DVar3;
  Image IVar4;
  undefined7 extraout_var;
  Font FVar5;
  undefined *puVar6;
  Text TVar7;
  undefined7 extraout_var_00;
  Font FVar8;
  Text TVar9;
  Text TVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  void *pvVar13;
  char *pcVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  String systemName;
  undefined1 auStack_90 [8];
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  FVar5.unknown = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(FVar5.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = auStack_90 + -extraout_x8;
  pvVar13 = (void *)param_3[3];
  if (pvVar13 == (void *)0x0) {
    local_80 = (undefined *)0x0;
    local_78 = (undefined *)0x0;
    local_88 = (undefined *)0x0;
  }
  else {
    pcVar14 = (char *)param_3[2];
    _swift_bridgeObjectRetain(pvVar13);
    systemName.bridgeObject = pvVar13;
    systemName.str = pcVar14;
    IVar4 = SwiftUI::Image::init(systemName);
    SwiftUI::Font::Weight::get_semibold((Weight)IVar4.unknown);
    DVar3 = SwiftUI::Font::Design::typeMetadataAccessor();
    param_6 = CONCAT71(extraout_var,DVar3.value);
    (**(code **)(*(long *)(param_6 + -8) + 0x38))(puVar15,1,1,param_6);
    puVar16 = (undefined *)0x4026000000000000;
    FVar5 = SwiftUI::Font::_system(param_2,(Font)0x0);
    FUN_10002a29c(puVar15,&DAT_10054a828,&DAT_10041e3c0);
    puVar6 = &DAT_1004226e8;
    _swift_getKeyPath();
    local_78 = IVar4.unknown;
    _swift_retain(IVar4.unknown);
    local_88 = puVar6;
    _swift_retain(puVar6);
    local_80 = FVar5.unknown;
    _swift_retain();
    param_2.unknown = puVar16;
  }
  local_70 = *param_3;
  uVar1 = param_3[1];
  uStack_68 = uVar1;
  FUN_100026df4();
  _swift_bridgeObjectRetain(uVar1);
  puVar6 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar7 = SwiftUI::Text::_init();
  SwiftUI::Font::Weight::get_medium((Weight)TVar7.unknown);
  DVar3 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_00,DVar3.value) + -8) + 0x38))
            (puVar15,1,1,CONCAT71(extraout_var_00,DVar3.value));
  FVar8 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(puVar15,&DAT_10054a828,&DAT_10041e3c0);
  TVar10 = TVar7;
  puVar11 = puVar6;
  puVar12 = FVar5.unknown;
  TVar9 = SwiftUI::Text::_font(FVar8.unknown);
  _swift_release(FVar8.unknown);
  FUN_100025b34(TVar7.unknown,puVar6,FVar5.unknown);
  _swift_bridgeObjectRelease(param_6);
  puVar2 = local_78;
  puVar16 = local_80;
  puVar6 = local_88;
  FUN_100026d80(local_78,local_88,local_80);
  FUN_100007b14(TVar9.unknown,TVar10.unknown,puVar11);
  _swift_bridgeObjectRetain(puVar12);
  FUN_100026dbc(puVar2,puVar6,puVar16);
  *param_1 = puVar2;
  param_1[1] = puVar6;
  param_1[2] = puVar16;
  param_1[3] = TVar9.unknown;
  param_1[4] = TVar10.unknown;
  *(char *)(param_1 + 5) = (char)puVar11;
  param_1[6] = puVar12;
  FUN_100025b34(TVar9.unknown,TVar10.unknown,puVar11);
  _swift_bridgeObjectRelease(puVar12);
  FUN_100026dbc(puVar2,puVar6,puVar16);
  return;
}

