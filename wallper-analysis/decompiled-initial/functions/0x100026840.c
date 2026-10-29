// rea decompile_all
// name: FUN_100026840
// address: 0x100026840
// body: available
// range: 0x100026840-0x100026bf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100026840(long param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  byte bVar1;
  Locale LVar2;
  LocalizationValue LVar3;
  StringInterpolation SVar4;
  Date DVar5;
  undefined *puVar6;
  long lVar7;
  Date DVar8;
  long lVar9;
  LocalizationValue LVar10;
  code *pcVar11;
  char *pcVar12;
  void *pvVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  LocalizationValue local_a0;
  long local_98;
  long local_90;
  StringInterpolation local_88;
  undefined *local_80;
  long local_78;
  ulong local_70;
  long lStack_68;
  
  LVar2 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  lVar9 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  LVar3 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  LVar3.unknown = (undefined *)(lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  SVar4 = LocalizationValue::StringInterpolation::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar4.unknown + -8) + 0x40));
  local_88.unknown = LVar3.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_80 = (undefined *)Foundation::Calendar::typeMetadataAccessor();
  lVar16 = *(long *)(local_80 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  lVar19 = (long)(LVar3.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar17 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  lVar14 = lVar19 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_10054a9d0;
  FUN_100002f94(&DAT_10054a9d0,&DAT_10041bc60);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar14 - extraout_x8_04;
  lVar7 = 0;
  FUN_1001d59ac();
  lVar15 = *(long *)(lVar7 + -8);
  local_78 = lVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  local_90 = lVar20 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  FUN_10025ee04();
  if (*(long *)(*(long *)(param_1 + *(int *)(lVar7 + 0x20)) + 0x10) == 0) {
    SVar23.bridgeObject = (void *)0xe500000000000000;
    SVar23.str = (char *)0x7974706d45;
    LVar10 = LocalizationValue::_init(SVar23);
    Foundation::Locale::get_current((Locale)LVar10.unknown);
    (extension_Foundation)::Swift::String::_init(LVar3,(Locale)0x0);
  }
  else {
    bVar1 = *(byte *)(param_1 + *(int *)(lVar7 + 0x1c));
    uVar18 = (ulong)bVar1;
    local_a0.unknown = LVar3.unknown;
    local_98 = lVar9;
    if (bVar1 != 0) {
      DVar8 = Foundation::Date::init();
      Foundation::Calendar::get_current((Calendar)DVar8.unknown);
      FUN_1001d62f0(lVar20,lVar14,lVar19);
      (**(code **)(lVar16 + 8))(lVar19,local_80);
      (**(code **)(lVar17 + 8))(lVar14,DVar5.unknown);
      lVar14 = local_78;
      lVar9 = lVar20;
      (**(code **)(lVar15 + 0x30))(lVar20,1,local_78);
      lVar7 = local_90;
      if ((int)lVar9 != 1) {
        pcVar11 = FUN_1001d59ac;
        lVar9 = local_90;
        FUN_100007e64(lVar20);
        FUN_10025eed8();
        SVar21.bridgeObject = (void *)0xa400000000000000;
        SVar21.str = (char *)0x20b7c220;
        SVar24.bridgeObject = param_4;
        SVar24.str = (char *)pcVar11;
        local_70 = uVar18;
        lStack_68 = lVar9;
        Swift::String::append(SVar21,SVar24);
        SVar4.unknown = local_88.unknown;
        LocalizationValue::StringInterpolation::_init(5,1);
        SVar22.bridgeObject = (void *)0xe500000000000000;
        SVar22.str = (char *)0x203a776f4e;
        LocalizationValue::StringInterpolation::_appendLiteral(SVar22,(StringInterpolation)pcVar11);
        LocalizationValue::StringInterpolation::_appendInterpolation
                  (*(String *)(lVar7 + *(int *)(lVar14 + 0x14)),(StringInterpolation)pcVar11);
        LocalizationValue::StringInterpolation::_appendLiteral
                  ((String)(ZEXT816(0xe000000000000000) << 0x40),(StringInterpolation)pcVar11);
        LVar3.unknown = local_a0.unknown;
        LVar10 = LocalizationValue::_init(SVar4);
        Foundation::Locale::get_current((Locale)LVar10.unknown);
        pcVar12 = (char *)0x0;
        pvVar13 = (void *)0x0;
        SVar23 = (extension_Foundation)::Swift::String::_init(LVar3,(Locale)0x0);
        SVar25.bridgeObject = pvVar13;
        SVar25.str = pcVar12;
        Swift::String::append(SVar23,SVar25);
        _swift_bridgeObjectRelease(SVar23.bridgeObject);
        FUN_100029548(lVar7,FUN_1001d59ac);
        return;
      }
      FUN_10002a29c(lVar20,&DAT_10054a9d0,&DAT_10041bc60);
    }
    FUN_1001d6588();
  }
  return;
}

