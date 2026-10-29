// rea decompile_all
// name: FUN_10011f8c4
// address: 0x10011f8c4
// body: available
// range: 0x10011f8c4-0x10011fef7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010011fbac */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10011f8c4(long param_1,CGFloat param_2,ulong param_3,long param_4)

{
  undefined8 *puVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  Design DVar6;
  StringInterpolation SVar7;
  undefined *puVar8;
  ReplaceSymbolEffect RVar9;
  Image IVar10;
  Font FVar11;
  undefined *puVar12;
  ReplaceSymbolEffect RVar13;
  undefined *puVar14;
  LocalizedStringKey LVar15;
  Text TVar16;
  Text TVar17;
  undefined8 uVar18;
  Text TVar19;
  ContentTransition CVar20;
  uint uVar21;
  StringInterpolation SVar22;
  ulong uVar23;
  undefined8 uVar24;
  ulong uVar25;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar26;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  code *pcVar27;
  long lVar28;
  void *pvVar29;
  long extraout_x12;
  long extraout_x12_00;
  long lVar30;
  long lVar31;
  undefined8 *puVar32;
  long lVar33;
  CGFloat size;
  String systemName;
  undefined8 auStack_e0 [2];
  code *apcStack_d0 [2];
  long lStack_c0;
  undefined *local_b8;
  undefined *local_b0;
  long local_a8;
  long local_a0;
  undefined *puStack_98;
  long local_90;
  long local_88;
  undefined8 *local_80;
  long local_78;
  long local_70;
  long local_68;
  
  local_90 = param_4;
  local_70 = param_1;
  SVar7 = SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar7.unknown + -8) + 0x40));
  SVar7.unknown = (undefined *)((long)apcStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar8 = &DAT_100553670;
  FUN_100002f94(&DAT_100553670,&DAT_100426688);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar28 = (long)SVar7.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_78 = lVar28;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar26 = (undefined8 *)(lVar28 - extraout_x12);
  local_80 = puVar26;
  puStack_98 = (undefined *)Symbols::SymbolEffectOptions::typeMetadataAccessor();
  local_a0 = *(long *)(puStack_98 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a0 + 0x40));
  lVar30 = (long)puVar26 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  RVar9 = Symbols::ReplaceSymbolEffect::typeMetadataAccessor();
  local_a8 = *(long *)(RVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a8 + 0x40));
  lVar33 = lVar30 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar31 = lVar33 - extraout_x8_03;
  puVar8 = &DAT_100553678;
  FUN_100002f94(&DAT_100553678,&DAT_100426690);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar28 = lVar31 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_88 = lVar28;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar26 = (undefined8 *)(lVar28 - extraout_x12_00);
  bVar5 = (param_3 & 1) == 0;
  pcVar2 = (char *)0x69662e7472616568;
  if (bVar5) {
    pcVar2 = (char *)0x7472616568;
  }
  pvVar29 = (void *)0xea00000000006c6c;
  if (bVar5) {
    pvVar29 = (void *)0xe500000000000000;
  }
  systemName.bridgeObject = pvVar29;
  systemName.str = pcVar2;
  IVar10 = SwiftUI::Image::init(systemName);
  local_b0 = IVar10.unknown;
  SwiftUI::Font::Weight::get_medium((Weight)IVar10.unknown);
  DVar6 = SwiftUI::Font::Design::typeMetadataAccessor();
  lStack_c0 = CONCAT71((int7)((ulong)IVar10.unknown >> 8),DVar6.value);
  apcStack_d0[1] = *(code **)(*(long *)(lStack_c0 + -8) + 0x38);
  (*apcStack_d0[1])(lVar31,1,1);
  size.unknown = (undefined *)0x4028000000000000;
  FVar11 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar31,&DAT_10054a828,&DAT_10041e3c0);
  puVar12 = &DAT_1004264d8;
  _swift_getKeyPath();
  RVar13 = Symbols::ReplaceSymbolEffect::init();
  Symbols::SymbolEffectOptions::get_default((SymbolEffectOptions)RVar13.unknown);
  iVar3 = *(int *)(puVar8 + 0x24);
  puVar8 = &DAT_10054b490;
  FUN_100002f94(&DAT_10054b490,&DAT_10041c7e0);
  iVar4 = *(int *)(puVar8 + 0x1c);
  puVar14 = &DAT_10054b510;
  local_b8 = puVar8;
  FUN_1000036d0(&DAT_10054b510,PTR_typeMetadataAccessor_100523830,
                PTR_Symbols__Symbols__ReplaceSymbolEffect_>Symbols__SymbolEffect_100523820);
  RVar13 = RVar9;
  SwiftUI::ContentTransition::_symbolEffect
            ((long)puVar26 + (long)iVar3 + (long)iVar4,puVar14,lVar30,RVar9.unknown,puVar14);
  (**(code **)(local_a0 + 8))(lVar30,puStack_98);
  (**(code **)(local_a8 + 8))(lVar33,RVar9.unknown);
  puVar8 = &DAT_100426698;
  _swift_getKeyPath();
  *(undefined **)((long)puVar26 + (long)iVar3) = puVar8;
  lVar28 = local_90;
  *puVar26 = local_b0;
  puVar26[1] = puVar12;
  puVar26[2] = FVar11.unknown;
  if (lVar28 < 1) {
    puVar8 = &DAT_10054b5f8;
    FUN_100002f94(&DAT_10054b5f8,&DAT_10041c990);
    pcVar27 = *(code **)(*(long *)(puVar8 + -8) + 0x38);
    puVar32 = local_80;
  }
  else {
    SwiftUI::LocalizedStringKey::StringInterpolation::init(0,1);
    SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
              ((String)(ZEXT816(0xe000000000000000) << 0x40),(StringInterpolation)RVar13.unknown);
    local_68 = lVar28;
    SVar22.unknown = (undefined *)0xe400000000000000;
    puVar8 = PTR___type_metadata_for_Swift_Int_100523bd8;
    SwiftUI::LocalizedStringKey::StringInterpolation::_appendInterpolation
              (&local_68,0x646c6c25,0xe400000000000000,PTR___type_metadata_for_Swift_Int_100523bd8,
               PTR___protocol_witness_table_for_Swift_Int___SwiftUI__FormatSpecifiable_in_SwiftUI_100523800
              );
    uVar18 = 0xe000000000000000;
    SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
              ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar22);
    uVar21 = (uint)SVar22.unknown;
    LVar15 = SwiftUI::LocalizedStringKey::init(SVar7);
    *(undefined2 *)(puVar26 + -1) = 0x100;
    puVar26[-2] = 0;
    uVar23 = (ulong)(uVar21 & 1);
    TVar16 = SwiftUI::Text::_init(LVar15);
    SwiftUI::Font::Weight::get_medium((Weight)TVar16.unknown);
    (*apcStack_d0[1])(lVar31,1,1,lStack_c0);
    FVar11 = SwiftUI::Font::_system(size,(Font)0x0);
    FUN_10002a29c(lVar31,&DAT_10054a828,&DAT_10041e3c0);
    TVar19 = TVar16;
    uVar24 = uVar18;
    uVar25 = uVar23;
    TVar17 = SwiftUI::Text::_font(FVar11.unknown);
    _swift_release(FVar11.unknown);
    FUN_100025b34(TVar16.unknown,uVar18,uVar23);
    _swift_bridgeObjectRelease(puVar8);
    puVar14 = TVar19.unknown;
    uVar18 = uVar24;
    uVar23 = uVar25;
    TVar16 = SwiftUI::Text::monospacedDigit(TVar17);
    FUN_100025b34(TVar17.unknown,TVar19.unknown,uVar24);
    _swift_bridgeObjectRelease(uVar25);
    puVar8 = &DAT_10054b5f8;
    CVar20.unknown = &DAT_10041c990;
    FUN_100002f94();
    puVar32 = local_80;
    puVar1 = (undefined8 *)((long)local_80 + (long)*(int *)(puVar8 + 0x24));
    SwiftUI::ContentTransition::numericText(false,CVar20);
    puVar12 = &DAT_100426698;
    _swift_getKeyPath();
    *puVar1 = puVar12;
    *puVar32 = TVar16.unknown;
    puVar32[1] = puVar14;
    *(char *)(puVar32 + 2) = (char)uVar18;
    puVar32[3] = uVar23;
    pcVar27 = *(code **)(*(long *)(puVar8 + -8) + 0x38);
  }
  (*pcVar27)(puVar32,lVar28 < 1,1,puVar8);
  lVar28 = local_88;
  FUN_1000087e4(puVar26,local_88,&DAT_100553678,&DAT_100426690);
  lVar30 = local_78;
  FUN_1000087e4(puVar32,local_78,&DAT_100553670,&DAT_100426688);
  lVar31 = local_70;
  FUN_1000087e4(lVar28,local_70,&DAT_100553678,&DAT_100426690);
  puVar8 = &DAT_100553680;
  FUN_100002f94(&DAT_100553680,&DAT_1004266c8);
  FUN_1000087e4(lVar30,lVar31 + *(int *)(puVar8 + 0x30),&DAT_100553670,&DAT_100426688);
  FUN_10002a29c(puVar32,&DAT_100553670,&DAT_100426688);
  FUN_10002a29c(puVar26,&DAT_100553678,&DAT_100426690);
  FUN_10002a29c(lVar30,&DAT_100553670,&DAT_100426688);
  FUN_10002a29c(lVar28,&DAT_100553678,&DAT_100426690);
  return;
}

