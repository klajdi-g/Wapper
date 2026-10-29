// rea decompile_all
// name: FUN_10005d6e4
// address: 0x10005d6e4
// body: available
// range: 0x10005d6e4-0x10005e1cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_10005d6e4(void)

{
  long *plVar1;
  char cVar2;
  StringInterpolation SVar3;
  undefined *puVar4;
  UUID UVar5;
  Locale LVar6;
  LocalizationValue LVar7;
  undefined *puVar8;
  long lVar9;
  LocalizationValue LVar10;
  Date DVar11;
  char *pcVar12;
  ulong uVar13;
  void *pvVar14;
  long extraout_x8;
  long extraout_x8_00;
  long lVar15;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar16;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long lVar17;
  long extraout_x8_08;
  long extraout_x8_09;
  char *pcVar18;
  ulong uVar19;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x20;
  long lVar20;
  code *pcVar21;
  long lVar22;
  long lVar23;
  code *pcVar24;
  long lVar25;
  code *pcVar26;
  String stringLiteral;
  String SVar27;
  String stringLiteral_00;
  String SVar28;
  String SVar29;
  String SVar30;
  ulong local_100;
  long local_f8;
  long local_f0;
  StringInterpolation local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  long local_b8;
  undefined *local_b0;
  long local_a8;
  long local_a0;
  char *local_98;
  long local_90;
  long local_88;
  LocalizationValue local_80;
  long local_78;
  byte local_69 [9];
  
  SVar3 = LocalizationValue::StringInterpolation::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar3.unknown + -8) + 0x40));
  puVar4 = (undefined *)((long)&local_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_e8.unknown = puVar4;
  local_b0 = (undefined *)Foundation::Calendar::typeMetadataAccessor();
  local_c8 = *(long *)(local_b0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c8 + 0x40));
  lVar15 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_b8 = lVar15;
  local_c0 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_d0 = *(long *)(local_c0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d0 + 0x40));
  lVar15 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10054a9d0;
  local_90 = lVar15;
  FUN_100002f94(&DAT_10054a9d0,&DAT_10041bc60);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar15 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_f8 = lVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar18 = (char *)(lVar15 - extraout_x12);
  local_98 = pcVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = (long)pcVar18 - extraout_x12_00;
  lVar15 = 0;
  local_e0 = lVar16;
  FUN_1001d59ac();
  local_a0 = *(long *)(lVar15 + -8);
  local_a8 = lVar15;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a0 + 0x40));
  uVar19 = lVar16 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_100 = uVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = uVar19 - extraout_x12_01;
  local_d8 = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar16 - extraout_x12_02;
  puVar4 = &DAT_10054a9c8;
  local_f0 = lVar16;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar16 - extraout_x8_04;
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  lVar20 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  lVar25 = lVar16 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10054ac38;
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = lVar25 - extraout_x8_06;
  lVar15 = 0;
  FUN_10025ee04();
  lVar23 = *(long *)(lVar15 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar23 + 0x40));
  lVar17 = lVar22 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
  local_88 = lVar17;
  LVar6 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar6.unknown + -8) + 0x40));
  lVar17 = lVar17 - (extraout_x8_08 + 0xfU & 0xfffffffffffffff0);
  local_78 = lVar17;
  LVar7 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar7.unknown + -8) + 0x40));
  local_80.unknown = (undefined *)(lVar17 - (extraout_x8_09 + 0xfU & 0xfffffffffffffff0));
  lVar17 = *(long *)(unaff_x20 + 0x40);
  if (lVar17 == 0) {
    FUN_1001b7378(0);
    FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar21 = (code *)SoftwareBreakpoint(1,0x10005e1d0);
    (*pcVar21)();
  }
  puVar4 = &DAT_10041ee68;
  _swift_getKeyPath(&DAT_10041ee68);
  puVar8 = &DAT_10041ee90;
  _swift_getKeyPath(&DAT_10041ee90);
  _swift_retain(lVar17);
  Combine::Published::_get_subscript(local_69);
  _swift_release(puVar4);
  _swift_release(puVar8);
  _swift_release(lVar17);
  if ((local_69[0] & 1) == 0) {
    puVar4 = &DAT_10041ef10;
    _swift_getKeyPath(&DAT_10041ef10);
    puVar8 = &DAT_10041ef38;
    _swift_getKeyPath(&DAT_10041ef38);
    _swift_retain(lVar17);
    Combine::Published::_get_subscript(lVar16);
    _swift_release(puVar4);
    _swift_release(puVar8);
    lVar9 = lVar16;
    (**(code **)(lVar20 + 0x30))(lVar16,1,UVar5.unknown);
    if ((int)lVar9 == 1) {
      _swift_release(lVar17);
      FUN_10002a29c(lVar16,&DAT_10054a9c8,&DAT_10041bbe0);
      (**(code **)(lVar23 + 0x38))(lVar22,1,1,lVar15);
    }
    else {
      (**(code **)(lVar20 + 0x20))(lVar25,lVar16,UVar5.unknown);
      FUN_1001b6e74(lVar22,lVar25);
      _swift_release(lVar17);
      (**(code **)(lVar20 + 8))(lVar25,UVar5.unknown);
      lVar17 = lVar22;
      (**(code **)(lVar23 + 0x30))(lVar22,1,lVar15);
      lVar16 = local_88;
      if ((int)lVar17 != 1) {
        FUN_100007e64(lVar22,local_88,FUN_10025ee04);
        lVar25 = local_90;
        lVar23 = local_a8;
        puVar8 = local_b0;
        lVar22 = local_b8;
        puVar4 = local_c0;
        lVar20 = local_c8;
        lVar17 = local_d0;
        cVar2 = *(char *)(lVar16 + *(int *)(lVar15 + 0x1c));
        if (cVar2 != '\0') {
          if (cVar2 == '\x03') {
            DVar11 = Foundation::Date::init();
            Foundation::Calendar::get_current((Calendar)DVar11.unknown);
            lVar16 = local_e0;
            FUN_1001d682c(local_e0,lVar25,lVar22);
            (**(code **)(lVar20 + 8))(lVar22,puVar8);
            (**(code **)(lVar17 + 8))(lVar25,puVar4);
            lVar25 = lVar16;
            (**(code **)(local_a0 + 0x30))(lVar16,1,lVar23);
            lVar15 = local_f0;
            if ((int)lVar25 != 1) {
              pcVar21 = FUN_1001d59ac;
              FUN_100007e64(lVar16,local_f0);
              SVar3.unknown = local_e8.unknown;
              LocalizationValue::StringInterpolation::_init(0x21,1);
              LocalizationValue::StringInterpolation::_appendLiteral
                        ((String)(ZEXT816(0xe000000000000000) << 0x40),(StringInterpolation)pcVar21)
              ;
              LocalizationValue::StringInterpolation::_appendInterpolation
                        (*(String *)(lVar15 + *(int *)(lVar23 + 0x14)),(StringInterpolation)pcVar21)
              ;
              SVar27.bridgeObject = (void *)0x80000001004dc690;
              SVar27.str = (char *)0x1000000000000021;
              LocalizationValue::StringInterpolation::_appendLiteral
                        (SVar27,(StringInterpolation)pcVar21);
              LVar7.unknown = local_80.unknown;
              LVar10 = LocalizationValue::_init(SVar3);
              Foundation::Locale::get_current((Locale)LVar10.unknown);
              SVar27 = (extension_Foundation)::Swift::String::_init(LVar7,(Locale)0x0);
              FUN_100029548(local_88,FUN_10025ee04);
              FUN_100029548(lVar15,FUN_1001d59ac);
              return SVar27;
            }
            FUN_10002a29c(lVar16,&DAT_10054a9d0,&DAT_10041bc60);
          }
          lVar15 = local_90;
          pcVar18 = local_98;
          DVar11 = Foundation::Date::init();
          Foundation::Calendar::get_current((Calendar)DVar11.unknown);
          FUN_1001d682c(pcVar18,lVar15,lVar22);
          pcVar26 = *(code **)(lVar20 + 8);
          (*pcVar26)(lVar22,puVar8);
          pcVar21 = *(code **)(lVar17 + 8);
          (*pcVar21)(lVar15,puVar4);
          pcVar24 = *(code **)(local_a0 + 0x30);
          pcVar12 = pcVar18;
          (*pcVar24)(pcVar18,1,lVar23);
          lVar15 = local_d8;
          if ((int)pcVar12 == 1) {
            FUN_10002a29c(pcVar18,&DAT_10054a9d0,&DAT_10041bc60);
            lVar16 = local_88;
          }
          else {
            FUN_100007e64(pcVar18,local_d8,FUN_1001d59ac);
            lVar16 = local_90;
            plVar1 = (long *)(lVar15 + *(int *)(lVar23 + 0x20));
            if ((char)plVar1[1] != '\x01') {
              local_98 = (char *)*plVar1;
              DVar11 = Foundation::Date::init();
              Foundation::Calendar::get_current((Calendar)DVar11.unknown);
              lVar15 = local_f8;
              FUN_1001d62f0(local_f8,lVar16,lVar22);
              (*pcVar26)(lVar22,puVar8);
              (*pcVar21)(lVar16,puVar4);
              lVar16 = lVar15;
              (*pcVar24)(lVar15,1,lVar23);
              uVar19 = local_100;
              if ((int)lVar16 == 1) {
                pcVar21 = (code *)&DAT_10041bc60;
                FUN_10002a29c(lVar15,&DAT_10054a9d0);
              }
              else {
                pcVar21 = FUN_1001d59ac;
                FUN_100007e64(lVar15,local_100);
                lVar16 = local_d8;
                uVar13 = uVar19;
                FUN_1001da410(uVar19,local_d8);
                SVar3.unknown = local_e8.unknown;
                if ((uVar13 & 1) == 0) {
                  LocalizationValue::StringInterpolation::_init(0x15,2);
                  LocalizationValue::StringInterpolation::_appendLiteral
                            ((String)(ZEXT816(0xe000000000000000) << 0x40),
                             (StringInterpolation)pcVar21);
                  LocalizationValue::StringInterpolation::_appendInterpolation
                            (*(String *)(lVar16 + *(int *)(lVar23 + 0x14)),
                             (StringInterpolation)pcVar21);
                  SVar30.bridgeObject = (void *)0x80000001004dc670;
                  SVar30.str = (char *)0x1000000000000015;
                  LocalizationValue::StringInterpolation::_appendLiteral
                            (SVar30,(StringInterpolation)pcVar21);
                  LocalizationValue::StringInterpolation::_appendInterpolation
                            (*(String *)(uVar19 + (long)*(int *)(lVar23 + 0x14)),
                             (StringInterpolation)pcVar21);
                  LocalizationValue::StringInterpolation::_appendLiteral
                            ((String)(ZEXT816(0xe000000000000000) << 0x40),
                             (StringInterpolation)pcVar21);
                  LVar7.unknown = local_80.unknown;
                  LVar10 = LocalizationValue::_init(SVar3);
                  Foundation::Locale::get_current((Locale)LVar10.unknown);
                  SVar27 = (extension_Foundation)::Swift::String::_init(LVar7,(Locale)0x0);
                  FUN_100029548(local_88,FUN_10025ee04);
                  pcVar21 = FUN_1001d59ac;
                  FUN_100029548(uVar19,FUN_1001d59ac);
                  goto LAB_10005de1c;
                }
                FUN_100029548(uVar19,FUN_1001d59ac);
              }
              lVar15 = local_88;
              SVar3.unknown = local_e8.unknown;
              LocalizationValue::StringInterpolation::_init(10,2);
              LocalizationValue::StringInterpolation::_appendLiteral
                        ((String)(ZEXT816(0xe000000000000000) << 0x40),(StringInterpolation)pcVar21)
              ;
              lVar16 = local_d8;
              LocalizationValue::StringInterpolation::_appendInterpolation
                        (*(String *)(local_d8 + *(int *)(lVar23 + 0x14)),
                         (StringInterpolation)pcVar21);
              pvVar14 = (void *)0xaa0000000000206c;
              SVar28.bridgeObject = (void *)0xaa0000000000206c;
              SVar28.str = (char *)0x69746e7520b7c220;
              LocalizationValue::StringInterpolation::_appendLiteral
                        (SVar28,(StringInterpolation)pcVar21);
              pcVar18 = local_98;
              FUN_10025f020();
              SVar29.bridgeObject = pvVar14;
              SVar29.str = pcVar18;
              LocalizationValue::StringInterpolation::_appendInterpolation
                        (SVar29,(StringInterpolation)pcVar21);
              _swift_bridgeObjectRelease(pvVar14);
              LocalizationValue::StringInterpolation::_appendLiteral
                        ((String)(ZEXT816(0xe000000000000000) << 0x40),(StringInterpolation)pcVar21)
              ;
              LVar7.unknown = local_80.unknown;
              LVar10 = LocalizationValue::_init(SVar3);
              Foundation::Locale::get_current((Locale)LVar10.unknown);
              SVar27 = (extension_Foundation)::Swift::String::_init(LVar7,(Locale)0x0);
              FUN_100029548(lVar15,FUN_10025ee04);
              pcVar21 = FUN_1001d59ac;
              goto LAB_10005de1c;
            }
            FUN_100029548(lVar15,FUN_1001d59ac);
            lVar16 = local_88;
          }
        }
        LVar7.unknown = local_80.unknown;
        stringLiteral_00.bridgeObject = (void *)0xe800000000000000;
        stringLiteral_00.str = (char *)0x7473696c79616c50;
        LVar10 = LocalizationValue::_init(stringLiteral_00);
        Foundation::Locale::get_current((Locale)LVar10.unknown);
        SVar27 = (extension_Foundation)::Swift::String::_init(LVar7,(Locale)0x0);
        pcVar21 = FUN_10025ee04;
LAB_10005de1c:
        FUN_100029548(lVar16,pcVar21);
        return SVar27;
      }
    }
    FUN_10002a29c(lVar22,&DAT_10054ac38,&DAT_10041e8e0);
    pvVar14 = (void *)0x80000001004dc650;
    pcVar18 = (char *)0xd00000000000001c;
  }
  else {
    pcVar18 = (char *)0x20676e6968746f4e;
    pvVar14 = (void *)0xef676e6979616c70;
  }
  LVar7.unknown = local_80.unknown;
  stringLiteral.bridgeObject = pvVar14;
  stringLiteral.str = pcVar18;
  LVar10 = LocalizationValue::_init(stringLiteral);
  Foundation::Locale::get_current((Locale)LVar10.unknown);
  SVar27 = (extension_Foundation)::Swift::String::_init(LVar7,(Locale)0x0);
  return SVar27;
}

