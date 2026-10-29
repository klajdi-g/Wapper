// rea decompile_all
// name: FUN_100052130
// address: 0x100052130
// body: available
// range: 0x100052130-0x100052bfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100052130(void)

{
  undefined8 *puVar1;
  byte bVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  StringInterpolation SVar6;
  Locale LVar7;
  LocalizationValue LVar8;
  undefined *puVar9;
  LocalizationValue LVar10;
  long lVar11;
  Date DVar12;
  StringInterpolation SVar13;
  TargetProtocolConformanceDescriptor *pTVar14;
  void *pvVar15;
  void *pvVar16;
  long extraout_x8;
  long extraout_x8_00;
  long lVar17;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar18;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long unaff_x20;
  char *pcVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  String SVar23;
  String SVar24;
  String stringLiteral;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  void *local_100;
  char *local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined *puStack_c8;
  long local_c0;
  long local_b8;
  undefined *puStack_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  char *local_88;
  long local_80;
  String local_78;
  
  puStack_b0 = (undefined *)Foundation::Calendar::typeMetadataAccessor();
  local_b8 = *(long *)(puStack_b0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b8 + 0x40));
  lVar17 = (long)&local_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_c0 = lVar17;
  puStack_c8 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_d0 = *(long *)(puStack_c8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d0 + 0x40));
  lVar17 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10054a9d0;
  local_e0 = lVar17;
  FUN_100002f94(&DAT_10054a9d0,&DAT_10041bc60);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar17 - extraout_x8_01;
  lVar5 = 0;
  local_d8 = lVar17;
  FUN_1001d59ac();
  local_e8 = *(long *)(lVar5 + -8);
  local_a8 = lVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e8 + 0x40));
  lVar17 = lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10054a9c8;
  local_f0 = lVar17;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar17 - extraout_x8_03;
  local_88 = (char *)Foundation::UUID::typeMetadataAccessor();
  lVar20 = *(long *)(local_88 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  lVar18 = lVar17 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10054ac38;
  local_98 = lVar18;
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = lVar18 - extraout_x8_05;
  lVar5 = 0;
  FUN_10025ee04();
  local_90 = *(long *)(lVar5 + -8);
  local_80 = lVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_90 + 0x40));
  lVar5 = lVar18 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  local_a0 = lVar5;
  SVar6 = LocalizationValue::StringInterpolation::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar6.unknown + -8) + 0x40));
  SVar6.unknown = (undefined *)(lVar5 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0));
  LVar7 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar7.unknown + -8) + 0x40));
  LVar8 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40));
  LVar8.unknown =
       SVar6.unknown +
       (-(extraout_x8_09 + 0xfU & 0xfffffffffffffff0) - (extraout_x8_08 + 0xfU & 0xfffffffffffffff0)
       );
  lVar5 = *(long *)(unaff_x20 + 0xa0);
  if (lVar5 == 0) {
    FUN_1001b7378(0);
    pcVar3 = FUN_1001b7378;
    puVar4 = &DAT_100553df0;
    pTVar14 = &TargetProtocolConformanceDescriptor_10042a5d0;
  }
  else {
    puVar4 = &DAT_10041e570;
    _swift_getKeyPath(&DAT_10041e570);
    puVar9 = &DAT_10041e598;
    _swift_getKeyPath(&DAT_10041e598);
    _swift_retain_n(lVar5,2);
    Combine::Published::_get_subscript(&local_78);
    _swift_release(puVar4);
    _swift_release(puVar9);
    _swift_release(lVar5);
    if (((byte)local_78.str & 1) != 0) {
      _swift_release(lVar5);
      SVar24.bridgeObject = (void *)0x80000001004dc3d0;
      SVar24.str = (char *)0x100000000000001e;
      LVar10 = LocalizationValue::_init(SVar24);
      Foundation::Locale::get_current((Locale)LVar10.unknown);
      (extension_Foundation)::Swift::String::_init(LVar8,(Locale)0x0);
      return 0x7061742e646e6168;
    }
    lVar22 = *(long *)(unaff_x20 + 0x70);
    if (lVar22 != 0) {
      puVar4 = &DAT_10041e448;
      _swift_getKeyPath(&DAT_10041e448);
      puVar9 = &DAT_10041e470;
      _swift_getKeyPath();
      _swift_retain(lVar22);
      SVar13.unknown = puVar9;
      Combine::Published::_get_subscript(&local_78);
      _swift_release(puVar4);
      _swift_release(puVar9);
      _swift_release(lVar22);
      pcVar19 = *(char **)(local_78.str + 0x10);
      _swift_bridgeObjectRelease();
      LocalizationValue::StringInterpolation::_init(0xb,1);
      LocalizationValue::StringInterpolation::_appendLiteral
                ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar13);
      SVar13.unknown = (undefined *)0xe400000000000000;
      local_78.str = pcVar19;
      LocalizationValue::StringInterpolation::_appendInterpolation
                (&local_78,0x646c6c25,0xe400000000000000,PTR___type_metadata_for_Swift_Int_100523bd8
                 ,
                 PTR___protocol_witness_table_for_Swift_Int___Foundation__FormatSpecifiable_in_Foundation_100520e60
                );
      SVar23.bridgeObject = (void *)0xeb00000000737265;
      SVar23.str = (char *)0x7061706c6c617720;
      LocalizationValue::StringInterpolation::_appendLiteral(SVar23,SVar13);
      LVar10 = LocalizationValue::_init(SVar6);
      Foundation::Locale::get_current((Locale)LVar10.unknown);
      pvVar15 = (void *)0x0;
      SVar24 = (extension_Foundation)::Swift::String::_init(LVar8,(Locale)0x0);
      pvVar16 = SVar24.bridgeObject;
      local_f8 = SVar24.str;
      puVar4 = &DAT_10041e6d0;
      _swift_getKeyPath(&DAT_10041e6d0);
      puVar9 = &DAT_10041e6f8;
      _swift_getKeyPath(&DAT_10041e6f8);
      Combine::Published::_get_subscript(lVar17,lVar5,puVar4,puVar9);
      _swift_release(puVar4);
      _swift_release(puVar9);
      pcVar19 = local_88;
      lVar11 = lVar17;
      (**(code **)(lVar20 + 0x30))(lVar17,1,local_88);
      lVar22 = local_98;
      if ((int)lVar11 == 1) {
        _swift_release(lVar5);
        FUN_10002a29c(lVar17,&DAT_10054a9c8,&DAT_10041bbe0);
        (**(code **)(local_90 + 0x38))(lVar18,1,1,local_80);
      }
      else {
        local_100 = pvVar16;
        (**(code **)(lVar20 + 0x20))(local_98,lVar17,pcVar19);
        FUN_1001b6e74(lVar18,lVar22);
        _swift_release(lVar5);
        pvVar16 = local_100;
        (**(code **)(lVar20 + 8))(lVar22,pcVar19);
        lVar17 = local_80;
        lVar20 = lVar18;
        (**(code **)(local_90 + 0x30))(lVar18,1,local_80);
        lVar5 = local_a0;
        if ((int)lVar20 != 1) {
          pcVar3 = FUN_10025ee04;
          FUN_100007e64(lVar18,local_a0);
          bVar2 = *(byte *)(lVar5 + *(int *)(lVar17 + 0x1c));
          pcVar19 = (char *)(ulong)bVar2;
          if (1 < bVar2 - 1) {
            if (bVar2 == 0) {
              local_78 = *(String *)(lVar5 + *(int *)(lVar17 + 0x14));
              _swift_bridgeObjectRetain();
              SVar27.bridgeObject = (void *)0xa400000000000000;
              SVar27.str = (char *)0x20b7c220;
              SVar38.bridgeObject = pvVar15;
              SVar38.str = (char *)pcVar3;
              Swift::String::append(SVar27,SVar38);
              pvVar16 = local_100;
              SVar28.bridgeObject = local_100;
              SVar28.str = local_f8;
              SVar39.bridgeObject = pvVar15;
              SVar39.str = (char *)pcVar3;
              Swift::String::append(SVar28,SVar39);
              _swift_bridgeObjectRelease(pvVar16);
              FUN_100029548(lVar5,FUN_10025ee04);
              return 0x6f6e2e636973756d;
            }
            _swift_bridgeObjectRelease(local_100);
            local_78 = *(String *)(lVar5 + *(int *)(lVar17 + 0x14));
            _swift_bridgeObjectRetain();
            SVar31.bridgeObject = (void *)0xa400000000000000;
            SVar31.str = (char *)0x20b7c220;
            pvVar16 = (void *)0xa400000000000000;
            SVar42.bridgeObject = pvVar15;
            SVar42.str = (char *)pcVar3;
            Swift::String::append(SVar31,SVar42);
            pcVar19 = (char *)0x3;
            FUN_10025eed8();
            SVar32.bridgeObject = pvVar16;
            SVar32.str = pcVar19;
            SVar43.bridgeObject = pvVar15;
            SVar43.str = (char *)pcVar3;
            Swift::String::append(SVar32,SVar43);
            _swift_bridgeObjectRelease(pvVar16);
            FUN_100029548(lVar5,FUN_10025ee04);
            return 0xd000000000000018;
          }
          uVar21 = 0x69662e6b636f6c63;
          _swift_bridgeObjectRelease(local_100);
          lVar17 = local_e0;
          DVar12 = Foundation::Date::init();
          lVar20 = local_c0;
          Foundation::Calendar::get_current((Calendar)DVar12.unknown);
          lVar18 = local_d8;
          FUN_1001d682c(local_d8,lVar17,lVar20);
          (**(code **)(local_b8 + 8))(lVar20,puStack_b0);
          (**(code **)(local_d0 + 8))(lVar17,puStack_c8);
          lVar20 = local_a8;
          lVar22 = lVar18;
          (**(code **)(local_e8 + 0x30))(lVar18,1,local_a8);
          lVar17 = local_f0;
          if ((int)lVar22 == 1) {
            pcVar3 = (code *)&DAT_10041bc60;
            FUN_10002a29c(lVar18,&DAT_10054a9d0);
          }
          else {
            pcVar3 = FUN_1001d59ac;
            FUN_100007e64(lVar18,local_f0);
            puVar1 = (undefined8 *)(lVar17 + *(int *)(lVar20 + 0x20));
            if (*(char *)(puVar1 + 1) != '\x01') {
              local_88 = (char *)*puVar1;
              if (bVar2 != 2) {
                uVar21 = 0xd000000000000016;
              }
              local_78 = *(String *)(lVar5 + *(int *)(local_80 + 0x14));
              _swift_bridgeObjectRetain();
              SVar33.bridgeObject = (void *)0xa400000000000000;
              SVar33.str = (char *)0x20b7c220;
              SVar44.bridgeObject = pvVar15;
              SVar44.str = (char *)pcVar3;
              Swift::String::append(SVar33,SVar44);
              LocalizationValue::StringInterpolation::_init(7,2);
              LocalizationValue::StringInterpolation::_appendLiteral
                        ((String)(ZEXT816(0xe000000000000000) << 0x40),(StringInterpolation)pcVar3);
              LocalizationValue::StringInterpolation::_appendInterpolation
                        (*(String *)(lVar17 + *(int *)(lVar20 + 0x14)),(StringInterpolation)pcVar3);
              SVar34.bridgeObject = (void *)0xe700000000000000;
              SVar34.str = (char *)0x206c69746e7520;
              pvVar16 = (void *)0xe700000000000000;
              LocalizationValue::StringInterpolation::_appendLiteral
                        (SVar34,(StringInterpolation)pcVar3);
              pcVar19 = local_88;
              FUN_10025f020();
              SVar35.bridgeObject = pvVar16;
              SVar35.str = pcVar19;
              LocalizationValue::StringInterpolation::_appendInterpolation
                        (SVar35,(StringInterpolation)pcVar3);
              _swift_bridgeObjectRelease(pvVar16);
              LocalizationValue::StringInterpolation::_appendLiteral
                        ((String)(ZEXT816(0xe000000000000000) << 0x40),(StringInterpolation)pcVar3);
              LVar10 = LocalizationValue::_init(SVar6);
              Foundation::Locale::get_current((Locale)LVar10.unknown);
              pcVar19 = (char *)0x0;
              pvVar16 = (void *)0x0;
              SVar24 = (extension_Foundation)::Swift::String::_init(LVar8,(Locale)0x0);
              SVar45.bridgeObject = pvVar16;
              SVar45.str = pcVar19;
              Swift::String::append(SVar24,SVar45);
              _swift_bridgeObjectRelease(SVar24.bridgeObject);
              FUN_100029548(lVar5,FUN_10025ee04);
              FUN_100029548(lVar17,FUN_1001d59ac);
              return uVar21;
            }
            FUN_100029548(lVar17,FUN_1001d59ac);
          }
          local_78 = *(String *)(lVar5 + *(int *)(local_80 + 0x14));
          if (bVar2 != 2) {
            uVar21 = 0xd000000000000016;
          }
          _swift_bridgeObjectRetain();
          SVar29.bridgeObject = (void *)0xa400000000000000;
          SVar29.str = (char *)0x20b7c220;
          pvVar16 = (void *)0xa400000000000000;
          SVar40.bridgeObject = pvVar15;
          SVar40.str = (char *)pcVar3;
          Swift::String::append(SVar29,SVar40);
          FUN_10025eed8();
          SVar30.bridgeObject = pvVar16;
          SVar30.str = pcVar19;
          SVar41.bridgeObject = pvVar15;
          SVar41.str = (char *)pcVar3;
          Swift::String::append(SVar30,SVar41);
          _swift_bridgeObjectRelease(pvVar16);
          FUN_100029548(lVar5,FUN_10025ee04);
          return uVar21;
        }
      }
      FUN_10002a29c(lVar18,&DAT_10054ac38,&DAT_10041e8e0);
      stringLiteral.bridgeObject = (void *)0xe500000000000000;
      stringLiteral.str = (char *)0x64656b694c;
      LVar10 = LocalizationValue::_init(stringLiteral);
      Foundation::Locale::get_current((Locale)LVar10.unknown);
      pcVar19 = (char *)0x0;
      pvVar15 = (void *)0x0;
      local_78 = (extension_Foundation)::Swift::String::_init(LVar8,(Locale)0x0);
      SVar25.bridgeObject = (void *)0xa400000000000000;
      SVar25.str = (char *)0x20b7c220;
      SVar36.bridgeObject = pvVar15;
      SVar36.str = pcVar19;
      Swift::String::append(SVar25,SVar36);
      SVar26.bridgeObject = pvVar16;
      SVar26.str = local_f8;
      SVar37.bridgeObject = pvVar15;
      SVar37.str = pcVar19;
      Swift::String::append(SVar26,SVar37);
      _swift_bridgeObjectRelease(pvVar16);
      return 0x69662e7472616568;
    }
    FUN_100226ac0(0);
    pcVar3 = FUN_100226ac0;
    puVar4 = &DAT_10054aa48;
    pTVar14 = &TargetProtocolConformanceDescriptor_10042b420;
  }
  FUN_1000036d0(puVar4,pcVar3,pTVar14);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100052bfc);
  (*pcVar3)();
}

