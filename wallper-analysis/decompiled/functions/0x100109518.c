// rea decompile_all
// name: FUN_100109518
// address: 0x100109518
// body: available
// range: 0x100109518-0x100109cfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_100109518(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  double *pdVar3;
  ulong uVar4;
  int iVar5;
  String SVar6;
  bool bVar7;
  StringInterpolation SVar8;
  Date DVar9;
  undefined *puVar10;
  undefined *puVar11;
  Locale LVar12;
  LocalizationValue LVar13;
  long lVar14;
  LocalizationValue LVar15;
  void *pvVar16;
  State SVar17;
  long extraout_x8;
  long extraout_x8_00;
  long lVar18;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar19;
  long extraout_x12;
  code *pcVar20;
  long unaff_x20;
  StringInterpolation stringInterpolation;
  long lVar21;
  long lVar22;
  char *pcVar23;
  long lVar24;
  long lVar25;
  undefined *puVar26;
  double dVar27;
  String stringLiteral;
  String stringLiteral_00;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  undefined *local_b0;
  undefined *local_a8;
  long local_a0;
  long local_98;
  long local_90;
  char local_71;
  long local_70;
  undefined8 uStack_68;
  
  SVar8 = LocalizationValue::StringInterpolation::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar8.unknown + -8) + 0x40));
  puVar26 = (undefined *)((long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  DVar9 = Foundation::Date::typeMetadataAccessor();
  lVar24 = *(long *)(DVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar24 + 0x40));
  lVar18 = (long)puVar26 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar10 = &DAT_100552ef0;
  FUN_100002f94(&DAT_100552ef0,&DAT_100426920);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar25 = lVar18 - extraout_x8_01;
  puVar11 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar11 + -8) + 0x40));
  lVar19 = lVar25 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar22 = lVar19 - extraout_x12;
  LVar12 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar12.unknown + -8) + 0x40));
  lVar21 = lVar22 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  LVar13 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar13.unknown + -8) + 0x40));
  LVar13.unknown = (undefined *)(lVar21 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  lVar14 = 0;
  FUN_100126a5c();
  if (*(char *)(param_1 + *(int *)(lVar14 + 0x3c)) == '\x01') {
    stringLiteral.bridgeObject = (void *)0xe600000000000000;
    stringLiteral.str = (char *)0x64656c696146;
    LVar15 = LocalizationValue::_init(stringLiteral);
    Foundation::Locale::get_current((Locale)LVar15.unknown);
    goto LAB_100109c90;
  }
  iVar5 = *(int *)(lVar14 + 0x38);
  local_b0 = puVar26;
  local_a8 = LVar13.unknown;
  local_98 = lVar21;
  local_90 = lVar14;
  (**(code **)(lVar24 + 0x38))(lVar22,1,1,DVar9.unknown);
  lVar14 = (long)*(int *)(puVar10 + 0x30);
  local_a0 = param_1;
  FUN_1000087e4(param_1 + iVar5,lVar25,&DAT_10054b950,&DAT_10041d870);
  FUN_1000087e4(lVar22,lVar25 + lVar14,&DAT_10054b950,&DAT_10041d870);
  pcVar20 = *(code **)(lVar24 + 0x30);
  lVar21 = lVar25;
  (*pcVar20)(lVar25,1,DVar9.unknown);
  if ((int)lVar21 == 1) {
    FUN_10002a29c(lVar22,&DAT_10054b950,&DAT_10041d870);
    lVar14 = lVar25 + lVar14;
    (*pcVar20)(lVar14,1,DVar9.unknown);
    if ((int)lVar14 != 1) {
LAB_10010983c:
      FUN_10002a29c(lVar25,&DAT_100552ef0,&DAT_100426920);
      goto LAB_100109854;
    }
    SVar8.unknown = &DAT_10041d870;
    FUN_10002a29c(lVar25,&DAT_10054b950);
LAB_100109954:
    lVar14 = local_a0;
    stringInterpolation.unknown = local_b0;
    if (*(char *)(local_a0 + *(int *)(local_90 + 0x1c)) == '\x01') {
      plVar1 = (long *)(local_a0 + *(int *)(local_90 + 0x28));
      lVar14 = 0;
      if ((char)plVar1[1] != '\x01') {
        lVar14 = *plVar1;
      }
      plVar1 = (long *)(local_a0 + *(int *)(local_90 + 0x2c));
      lVar18 = 0;
      if ((char)plVar1[1] != '\x01') {
        lVar18 = *plVar1;
      }
      puVar2 = (ulong *)(local_a0 + *(int *)(local_90 + 0x30));
      pvVar16 = (void *)puVar2[1];
      if (pvVar16 == (void *)0x0) {
        pcVar23 = (char *)0x0;
        pvVar16 = (void *)0xe000000000000000;
      }
      else {
        pcVar23 = (char *)*puVar2;
      }
      uVar4 = (ulong)pcVar23 & 0xffffffffffff;
      if (((ulong)pvVar16 & 0x2000000000000000) != 0) {
        uVar4 = (ulong)pvVar16 >> 0x38 & 0xf;
      }
      if (0 < lVar18) {
        _swift_bridgeObjectRetain();
        local_70 = lVar14;
        if (uVar4 == 0) {
          _swift_bridgeObjectRelease(pvVar16);
          LocalizationValue::StringInterpolation::_init(6,2);
          SVar32.bridgeObject = (void *)0xe500000000000000;
          SVar32.str = (char *)0x2070657453;
          LocalizationValue::StringInterpolation::_appendLiteral(SVar32,SVar8);
          puVar11 = PTR___type_metadata_for_Swift_Int_100523bd8;
          puVar10 = 
          PTR___protocol_witness_table_for_Swift_Int___Foundation__FormatSpecifiable_in_Foundation_100520e60
          ;
          SVar8.unknown = (undefined *)0xe400000000000000;
          LocalizationValue::StringInterpolation::_appendInterpolation
                    (&local_70,0x646c6c25,0xe400000000000000,
                     PTR___type_metadata_for_Swift_Int_100523bd8,
                     PTR___protocol_witness_table_for_Swift_Int___Foundation__FormatSpecifiable_in_Foundation_100520e60
                    );
          SVar33.bridgeObject = (void *)0xe100000000000000;
          SVar33.str = (char *)0x2f;
          LocalizationValue::StringInterpolation::_appendLiteral(SVar33,SVar8);
          SVar8.unknown = (undefined *)0xe400000000000000;
          local_70 = lVar18;
          LocalizationValue::StringInterpolation::_appendInterpolation
                    (&local_70,0x646c6c25,0xe400000000000000,puVar11,puVar10);
        }
        else {
          LocalizationValue::StringInterpolation::_init(10,3);
          SVar28.bridgeObject = (void *)0xe500000000000000;
          SVar28.str = (char *)0x2070657453;
          LocalizationValue::StringInterpolation::_appendLiteral(SVar28,SVar8);
          puVar11 = PTR___type_metadata_for_Swift_Int_100523bd8;
          puVar10 = 
          PTR___protocol_witness_table_for_Swift_Int___Foundation__FormatSpecifiable_in_Foundation_100520e60
          ;
          SVar8.unknown = (undefined *)0xe400000000000000;
          LocalizationValue::StringInterpolation::_appendInterpolation
                    (&local_70,0x646c6c25,0xe400000000000000,
                     PTR___type_metadata_for_Swift_Int_100523bd8,
                     PTR___protocol_witness_table_for_Swift_Int___Foundation__FormatSpecifiable_in_Foundation_100520e60
                    );
          SVar29.bridgeObject = (void *)0xe100000000000000;
          SVar29.str = (char *)0x2f;
          LocalizationValue::StringInterpolation::_appendLiteral(SVar29,SVar8);
          SVar8.unknown = (undefined *)0xe400000000000000;
          local_70 = lVar18;
          LocalizationValue::StringInterpolation::_appendInterpolation
                    (&local_70,0x646c6c25,0xe400000000000000,puVar11,puVar10);
          SVar30.bridgeObject = (void *)0xa400000000000000;
          SVar30.str = (char *)0x20b7c220;
          LocalizationValue::StringInterpolation::_appendLiteral(SVar30,SVar8);
          SVar31.bridgeObject = pvVar16;
          SVar31.str = pcVar23;
          LocalizationValue::StringInterpolation::_appendInterpolation(SVar31,SVar8);
          _swift_bridgeObjectRelease(pvVar16);
        }
        pcVar23 = (char *)0x0;
        pvVar16 = (void *)0xe000000000000000;
        goto LAB_100109c60;
      }
      if (uVar4 != 0) {
        _swift_bridgeObjectRetain();
        SVar6.bridgeObject = pvVar16;
        SVar6.str = pcVar23;
        return SVar6;
      }
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(pvVar16);
      pcVar23 = (char *)0xe2676e696b726f57;
      pvVar16 = (void *)0xaa0000000000a680;
      goto LAB_100109a1c;
    }
    uStack_68 = *(undefined8 *)(unaff_x20 + 0x58);
    local_70 = *(long *)(unaff_x20 + 0x50);
    SVar17.unknown = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::get_wrappedValue(SVar17);
    stringInterpolation.unknown = local_b0;
    if (local_71 == '\x01') {
      pcVar23 = (char *)0x697a696c616e6946;
      pvVar16 = (void *)0xad0000a680e2676e;
      goto LAB_100109a1c;
    }
    pdVar3 = (double *)(lVar14 + *(int *)(local_90 + 0x24));
    dVar27 = 0.0;
    if (*(char *)(pdVar3 + 1) != '\x01') {
      dVar27 = *pdVar3 * 100.0;
    }
    if (0x7fefffffffffffff < (ulong)ABS(dVar27)) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x100109cf4);
      (*pcVar20)();
    }
    if (dVar27 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x100109cf8);
      (*pcVar20)();
    }
    if (9.223372036854776e+18 <= dVar27) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x100109cfc);
      (*pcVar20)();
    }
    LocalizationValue::StringInterpolation::_init(0xc,1);
    SVar35.bridgeObject = (void *)0xeb00000000206465;
    SVar35.str = (char *)0x64616f6c6e776f44;
    LocalizationValue::StringInterpolation::_appendLiteral(SVar35,SVar8);
    SVar8.unknown = (undefined *)0xe400000000000000;
    local_70 = (long)dVar27;
    LocalizationValue::StringInterpolation::_appendInterpolation
              (&local_70,0x646c6c25,0xe400000000000000,PTR___type_metadata_for_Swift_Int_100523bd8,
               PTR___protocol_witness_table_for_Swift_Int___Foundation__FormatSpecifiable_in_Foundation_100520e60
              );
    pcVar23 = (char *)0x25;
    pvVar16 = (void *)0xe100000000000000;
LAB_100109c60:
    SVar34.bridgeObject = pvVar16;
    SVar34.str = pcVar23;
    LocalizationValue::StringInterpolation::_appendLiteral(SVar34,SVar8);
    LVar13.unknown = local_a8;
    LVar12.unknown = (undefined *)LocalizationValue::_init(stringInterpolation);
  }
  else {
    FUN_1000087e4(lVar25,lVar19,&DAT_10054b950,&DAT_10041d870);
    lVar21 = lVar25 + lVar14;
    (*pcVar20)(lVar21,1,DVar9.unknown);
    if ((int)lVar21 == 1) {
      FUN_10002a29c(lVar22,&DAT_10054b950,&DAT_10041d870);
      (**(code **)(lVar24 + 8))(lVar19,DVar9.unknown);
      goto LAB_10010983c;
    }
    (**(code **)(lVar24 + 0x20))(lVar18,lVar25 + lVar14,DVar9.unknown);
    puVar10 = &DAT_100552ef8;
    FUN_1000036d0(&DAT_100552ef8,PTR_typeMetadataAccessor_100520b80,
                  PTR_Foundation__Foundation__Date_>Swift__Equatable_100520ba8);
    bVar7 = Swift::Equatable::___infix(lVar19,lVar18,DVar9.unknown,puVar10);
    pcVar20 = *(code **)(lVar24 + 8);
    (*pcVar20)(lVar18,DVar9.unknown);
    SVar8.unknown = &DAT_10041d870;
    FUN_10002a29c(lVar22,&DAT_10054b950,&DAT_10041d870);
    (*pcVar20)(lVar19,DVar9.unknown);
    FUN_10002a29c(lVar25,&DAT_10054b950);
    if (bVar7) goto LAB_100109954;
LAB_100109854:
    if (*(char *)(local_a0 + *(int *)(local_90 + 0x1c)) == '\x01') {
      pvVar16 = (void *)0x80000001004dd8e0;
      pcVar23 = (char *)0xd000000000000013;
    }
    else {
      pcVar23 = (char *)0xd000000000000015;
      pvVar16 = (void *)0x80000001004dd900;
    }
LAB_100109a1c:
    LVar13.unknown = local_a8;
    stringLiteral_00.bridgeObject = pvVar16;
    stringLiteral_00.str = pcVar23;
    LVar12.unknown = (undefined *)LocalizationValue::_init(stringLiteral_00);
  }
  Foundation::Locale::get_current(LVar12);
LAB_100109c90:
  SVar35 = (extension_Foundation)::Swift::String::_init(LVar13,(Locale)0x0);
  return SVar35;
}

