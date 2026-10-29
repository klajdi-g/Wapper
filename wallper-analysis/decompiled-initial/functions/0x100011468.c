// rea decompile_all
// name: FUN_100011468
// address: 0x100011468
// body: available
// range: 0x100011468-0x100011d93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100011468(void)

{
  long lVar1;
  code *pcVar2;
  StringInterpolation SVar3;
  undefined *puVar4;
  long lVar5;
  Locale LVar6;
  LocalizationValue LVar7;
  undefined *puVar8;
  LocalizationValue LVar9;
  long lVar10;
  Date DVar11;
  undefined8 uVar13;
  StringInterpolation SVar14;
  undefined8 uVar15;
  long extraout_x8;
  long extraout_x8_00;
  long lVar16;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar17;
  long lVar18;
  long lVar19;
  String stringLiteral;
  String SVar20;
  String stringLiteral_00;
  String SVar21;
  String SVar22;
  String SVar23;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined *puStack_d8;
  long local_d0;
  long local_c8;
  undefined *puStack_c0;
  long local_b8;
  long local_b0;
  undefined *puStack_a8;
  long local_a0;
  StringInterpolation local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined *local_70;
  byte local_61;
  void *pvVar12;
  
  SVar3 = LocalizationValue::StringInterpolation::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar3.unknown + -8) + 0x40));
  puVar8 = (undefined *)((long)&local_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar4 = (undefined *)0x0;
  local_98.unknown = puVar8;
  FUN_1001d59ac();
  local_b0 = *(long *)(puVar4 + -8);
  puStack_a8 = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b0 + 0x40));
  lVar16 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_f0 = lVar16;
  puStack_c0 = (undefined *)Foundation::Calendar::typeMetadataAccessor();
  local_c8 = *(long *)(puStack_c0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c8 + 0x40));
  lVar16 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar16;
  puStack_d8 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_e0 = *(long *)(puStack_d8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e0 + 0x40));
  lVar16 = lVar16 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10054a9d0;
  local_e8 = lVar16;
  FUN_100002f94(&DAT_10054a9d0,&DAT_10041bc60);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar16 = lVar16 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_b8 = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar16 - extraout_x12;
  local_90 = lVar16;
  local_70 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_78 = *(long *)(local_70 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_78 + 0x40));
  lVar16 = lVar16 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10054ac38;
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar16 - extraout_x8_05;
  lVar5 = 0;
  FUN_10025ee04();
  lVar18 = *(long *)(lVar5 + -8);
  local_88 = lVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  lVar5 = lVar19 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10054a9c8;
  local_a0 = lVar5;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar5 = lVar5 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_80 = lVar5 - extraout_x12_00;
  LVar6 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar6.unknown + -8) + 0x40));
  LVar7 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar7.unknown + -8) + 0x40));
  LVar7.unknown =
       (undefined *)
       (((lVar5 - extraout_x12_00) - (extraout_x8_08 + 0xfU & 0xfffffffffffffff0)) -
       (extraout_x8_09 + 0xfU & 0xfffffffffffffff0));
  lVar17 = *(long *)(unaff_x20 + 0x38);
  if (lVar17 == 0) {
    FUN_1001b7378(0);
    FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100011d94);
    (*pcVar2)();
  }
  puVar4 = &DAT_10041bb00;
  _swift_getKeyPath(&DAT_10041bb00);
  puVar8 = &DAT_10041bb28;
  _swift_getKeyPath(&DAT_10041bb28);
  _swift_retain(lVar17);
  Combine::Published::_get_subscript(&local_61);
  _swift_release(puVar4);
  _swift_release(puVar8);
  if ((local_61 & 1) == 0) {
    puVar4 = &DAT_10041bbe8;
    _swift_getKeyPath(&DAT_10041bbe8);
    puVar8 = &DAT_10041bc10;
    _swift_getKeyPath(&DAT_10041bc10);
    Combine::Published::_get_subscript(lVar5,lVar17,puVar4,puVar8);
    _swift_release(puVar4);
    _swift_release(puVar8);
    puVar4 = local_70;
    lVar1 = local_78;
    lVar10 = lVar5;
    (**(code **)(local_78 + 0x30))(lVar5,1,local_70);
    if ((int)lVar10 == 1) {
      _swift_release(lVar17);
      FUN_10002a29c(lVar5,&DAT_10054a9c8,&DAT_10041bbe0);
      (**(code **)(lVar18 + 0x38))(lVar19,1,1,local_88);
    }
    else {
      (**(code **)(lVar1 + 0x20))(lVar16,lVar5,puVar4);
      FUN_1001b6e74(lVar19,lVar16);
      _swift_release(lVar17);
      (**(code **)(lVar1 + 8))(lVar16,puVar4);
      lVar16 = local_88;
      lVar17 = lVar19;
      (**(code **)(lVar18 + 0x30))(lVar19,1,local_88);
      lVar5 = local_a0;
      if ((int)lVar17 != 1) {
        FUN_100007e64(lVar19,local_a0,FUN_10025ee04);
        lVar19 = local_90;
        puVar4 = puStack_a8;
        lVar18 = local_b0;
        lVar17 = local_e8;
        if (*(char *)(lVar5 + *(int *)(lVar16 + 0x1c)) == '\0') {
          (**(code **)(local_b0 + 0x38))(local_90,1,1,puStack_a8);
        }
        else {
          DVar11 = Foundation::Date::init();
          lVar18 = local_d0;
          Foundation::Calendar::get_current((Calendar)DVar11.unknown);
          lVar19 = local_90;
          FUN_1001d62f0(local_90,lVar17,lVar18);
          (**(code **)(local_c8 + 8))(lVar18,puStack_c0);
          (**(code **)(local_e0 + 8))(lVar17,puStack_d8);
          lVar18 = local_b0;
          puVar4 = puStack_a8;
        }
        lVar1 = local_b8;
        FUN_1000087e4(lVar19,local_b8,&DAT_10054a9d0,&DAT_10041bc60);
        lVar10 = lVar1;
        SVar14.unknown = puVar4;
        (**(code **)(lVar18 + 0x30))(lVar1,1);
        SVar3.unknown = local_98.unknown;
        lVar17 = local_f0;
        if ((int)lVar10 == 1) {
          LocalizationValue::StringInterpolation::_init(0x12,1);
          SVar21.bridgeObject = (void *)0xaf9c80e220676e69;
          SVar21.str = (char *)0x79616c7020776f4e;
          LocalizationValue::StringInterpolation::_appendLiteral(SVar21,SVar14);
          LocalizationValue::StringInterpolation::_appendInterpolation
                    (*(String *)(lVar5 + *(int *)(lVar16 + 0x14)),SVar14);
          SVar22.bridgeObject = (void *)0xa300000000000000;
          SVar22.str = (char *)0x9d80e2;
          LocalizationValue::StringInterpolation::_appendLiteral(SVar22,SVar14);
          LVar9 = LocalizationValue::_init(SVar3);
          Foundation::Locale::get_current((Locale)LVar9.unknown);
          SVar20 = (extension_Foundation)::Swift::String::_init(LVar7,(Locale)0x0);
        }
        else {
          pcVar2 = FUN_1001d59ac;
          FUN_100007e64(lVar1,local_f0);
          SVar3.unknown = local_98.unknown;
          LocalizationValue::StringInterpolation::_init(0x16,2);
          SVar20.bridgeObject = (void *)0xaf9c80e220676e69;
          SVar20.str = (char *)0x79616c7020776f4e;
          LocalizationValue::StringInterpolation::_appendLiteral(SVar20,(StringInterpolation)pcVar2)
          ;
          LocalizationValue::StringInterpolation::_appendInterpolation
                    (*(String *)(lVar5 + *(int *)(lVar16 + 0x14)),(StringInterpolation)pcVar2);
          SVar23.bridgeObject = (void *)0xa700000000000000;
          SVar23.str = (char *)0x20b7c2209d80e2;
          LocalizationValue::StringInterpolation::_appendLiteral(SVar23,(StringInterpolation)pcVar2)
          ;
          LocalizationValue::StringInterpolation::_appendInterpolation
                    (*(String *)(lVar17 + *(int *)(puVar4 + 0x14)),(StringInterpolation)pcVar2);
          LocalizationValue::StringInterpolation::_appendLiteral
                    ((String)(ZEXT816(0xe000000000000000) << 0x40),(StringInterpolation)pcVar2);
          LVar9 = LocalizationValue::_init(SVar3);
          Foundation::Locale::get_current((Locale)LVar9.unknown);
          SVar20 = (extension_Foundation)::Swift::String::_init(LVar7,(Locale)0x0);
          FUN_100029548(lVar17,FUN_1001d59ac);
        }
        puVar4 = local_70;
        lVar17 = local_78;
        lVar16 = local_80;
        (**(code **)(local_78 + 0x10))(local_80,lVar5,local_70);
        (**(code **)(lVar17 + 0x38))(lVar16,0,1,puVar4);
        FUN_1000c7780(SVar20.str,SVar20.bridgeObject,0xd000000000000010,0x80000001004dbcf0,lVar16);
        _swift_bridgeObjectRelease(SVar20.bridgeObject);
        FUN_10002a29c(lVar16,&DAT_10054a9c8,&DAT_10041bbe0);
        FUN_10002a29c(lVar19,&DAT_10054a9d0,&DAT_10041bc60);
        FUN_100029548(lVar5,FUN_10025ee04);
        return;
      }
    }
    FUN_10002a29c(lVar19,&DAT_10054ac38,&DAT_10041e8e0);
    stringLiteral_00.bridgeObject = (void *)0x80000001004dbcc0;
    stringLiteral_00.str = (char *)0xd000000000000021;
    LVar9 = LocalizationValue::_init(stringLiteral_00);
    Foundation::Locale::get_current((Locale)LVar9.unknown);
    SVar20 = (extension_Foundation)::Swift::String::_init(LVar7,(Locale)0x0);
    lVar5 = local_80;
    pvVar12 = SVar20.bridgeObject;
    (**(code **)(lVar1 + 0x38))(local_80,1,1,puVar4);
    uVar13 = 0x69662e7472616568;
    uVar15 = 0xea00000000006c6c;
  }
  else {
    _swift_release(lVar17);
    stringLiteral.bridgeObject = (void *)0xed000066666f2073;
    stringLiteral.str = (char *)0x7473696c79616c50;
    LVar9 = LocalizationValue::_init(stringLiteral);
    Foundation::Locale::get_current((Locale)LVar9.unknown);
    SVar20 = (extension_Foundation)::Swift::String::_init(LVar7,(Locale)0x0);
    lVar5 = local_80;
    pvVar12 = SVar20.bridgeObject;
    (**(code **)(local_78 + 0x38))(local_80,1,1,local_70);
    uVar13 = 0x69632e6573756170;
    uVar15 = 0xec000000656c6372;
  }
  FUN_1000c7780(SVar20.str,SVar20.bridgeObject,uVar13,uVar15,lVar5);
  _swift_bridgeObjectRelease(pvVar12);
  FUN_10002a29c(lVar5,&DAT_10054a9c8,&DAT_10041bbe0);
  return;
}

