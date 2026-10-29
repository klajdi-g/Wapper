// rea decompile_all
// name: FUN_10005633c
// address: 0x10005633c
// body: available
// range: 0x10005633c-0x10005676b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100056664 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10005633c(undefined8 *param_1,CGFloat param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,CGFloat param_6)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  Design DVar4;
  undefined *puVar5;
  Color CVar6;
  Color CVar7;
  Color CVar8;
  Gradient gradient;
  char *pcVar9;
  Image IVar10;
  Font FVar11;
  ReplaceSymbolEffect RVar12;
  UnitPoint center;
  void *pvVar13;
  CGFloat startRadius;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar14;
  long extraout_x12;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  String systemName;
  undefined *local_e0 [2];
  undefined4 local_cc;
  long local_c8 [4];
  undefined *local_a8;
  long local_a0;
  long local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puStack_90 = (undefined *)Symbols::SymbolEffectOptions::typeMetadataAccessor();
  local_98 = *(long *)(puStack_90 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_98 + 0x40));
  lVar15 = (long)local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_a8 = (undefined *)Symbols::ReplaceSymbolEffect::typeMetadataAccessor();
  local_c8[3] = *(long *)(local_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c8[3] + 0x40));
  lVar17 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = lVar17 - extraout_x8_01;
  puVar5 = &DAT_10054d9b0;
  FUN_100002f94(&DAT_10054d9b0,&DAT_10041e670);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar14 = lVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_a0 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar16 = (undefined8 *)(lVar14 - extraout_x12);
  if ((param_3 & 1) == 0) {
    local_88 = 0;
    local_c8[1] = 0;
    local_c8[2] = 0;
    local_c8[0] = 0;
    local_e0[1] = (undefined *)0x0;
    local_cc = 0;
    pcVar9 = (char *)0x6c69662e79616c70;
    pvVar13 = (void *)0xe90000000000006c;
  }
  else {
    CVar6.unknown = &DAT_10054af98;
    FUN_100002f94(&DAT_10054af98,&DAT_10041c1a0);
    center.unknown = (undefined *)0x30;
    startRadius.unknown = (undefined *)0x7;
    _swift_allocObject();
    *(undefined8 *)(CVar6.unknown + 0x18) = 4;
    *(undefined8 *)(CVar6.unknown + 0x10) = 2;
    CVar7 = SwiftUI::Color::get_white(CVar6);
    CVar8 = SwiftUI::Color::opacity(0.15,CVar7);
    _swift_release();
    *(undefined **)(CVar6.unknown + 0x20) = CVar8.unknown;
    CVar8 = SwiftUI::Color::get_white(CVar7);
    param_2.unknown = (undefined *)0x0;
    CVar7 = SwiftUI::Color::opacity(0.0,CVar8);
    _swift_release(CVar8.unknown);
    *(undefined **)(CVar6.unknown + 0x28) = CVar7.unknown;
    gradient = SwiftUI::Gradient::init();
    SwiftUI::UnitPoint::get_center((UnitPoint)gradient.unknown);
    SwiftUI::RadialGradient::init(gradient,center,startRadius,param_6);
    local_c8[1] = local_78;
    local_c8[2] = uStack_80;
    local_c8[0] = uStack_70;
    local_cc = 0x100;
    pcVar9 = (char *)0x69662e6573756170;
    pvVar13 = (void *)0xea00000000006c6c;
    local_e0[1] = (undefined *)local_68;
  }
  systemName.bridgeObject = pvVar13;
  systemName.str = pcVar9;
  IVar10 = SwiftUI::Image::init(systemName);
  local_e0[0] = IVar10.unknown;
  SwiftUI::Font::Weight::get_semibold((Weight)IVar10.unknown);
  DVar4 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar14 = CONCAT71((int7)((ulong)IVar10.unknown >> 8),DVar4.value);
  (**(code **)(*(long *)(lVar14 + -8) + 0x38))(lVar18,1,1,lVar14);
  FVar11 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar18,&DAT_10054a828,&DAT_10041e3c0);
  CVar6.unknown = &DAT_10041e520;
  _swift_getKeyPath();
  CVar8 = SwiftUI::Color::get_white(CVar6);
  RVar12 = Symbols::ReplaceSymbolEffect::init();
  Symbols::SymbolEffectOptions::get_default((SymbolEffectOptions)RVar12.unknown);
  iVar1 = *(int *)(puVar5 + 0x24);
  puVar5 = &DAT_10054b490;
  FUN_100002f94(&DAT_10054b490,&DAT_10041c7e0);
  iVar2 = *(int *)(puVar5 + 0x1c);
  puVar5 = &DAT_10054b510;
  FUN_1000036d0(&DAT_10054b510,PTR_typeMetadataAccessor_100523830,
                PTR_Symbols__Symbols__ReplaceSymbolEffect_>Symbols__SymbolEffect_100523820);
  puVar3 = local_a8;
  SwiftUI::ContentTransition::_symbolEffect
            ((long)puVar16 + (long)iVar1 + (long)iVar2,puVar5,lVar15,local_a8,puVar5);
  (**(code **)(local_98 + 8))(lVar15,puStack_90);
  (**(code **)(local_c8[3] + 8))(lVar17,puVar3);
  puVar5 = &DAT_10041e680;
  _swift_getKeyPath();
  *(undefined **)((long)puVar16 + (long)iVar1) = puVar5;
  *puVar16 = local_e0[0];
  puVar16[1] = CVar6.unknown;
  puVar16[2] = FVar11.unknown;
  puVar16[3] = CVar8.unknown;
  lVar14 = local_a0;
  FUN_1000087e4(puVar16,local_a0,&DAT_10054d9b0,&DAT_10041e670);
  *param_1 = local_88;
  param_1[1] = local_c8[2];
  param_1[2] = local_c8[1];
  param_1[3] = local_c8[0];
  param_1[4] = local_e0[1];
  *(short *)(param_1 + 5) = (short)local_cc;
  puVar5 = &DAT_10054d9b8;
  FUN_100002f94(&DAT_10054d9b8,&DAT_10041e6b0);
  FUN_1000087e4(lVar14,(long)param_1 + (long)*(int *)(puVar5 + 0x30),&DAT_10054d9b0,&DAT_10041e670);
  _swift_bridgeObjectRetain(local_88);
  FUN_10002a29c(puVar16,&DAT_10054d9b0,&DAT_10041e670);
  FUN_10002a29c(lVar14,&DAT_10054d9b0,&DAT_10041e670);
  _swift_bridgeObjectRelease(local_88);
  return;
}

