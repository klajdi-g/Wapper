// rea decompile_all
// name: FUN_100031cc4
// address: 0x100031cc4
// body: available
// range: 0x100031cc4-0x100031efb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


LocalizationValue
FUN_100031cc4(double param_1,undefined8 param_2,Locale param_3,char *param_4,void *param_5)

{
  ulong uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  code *pcVar7;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  Locale LVar8;
  LocalizationValue LVar9;
  long lVar10;
  double *pdVar11;
  ulong uVar12;
  long extraout_x8;
  long extraout_x8_00;
  double *pdVar13;
  double *extraout_x8_01;
  double *extraout_x8_02;
  byte *pbVar14;
  undefined **extraout_x16;
  undefined **ppuVar15;
  double *pdVar16;
  double dVar17;
  double *unaff_x20;
  double *pdVar18;
  double *pdVar19;
  void *pvVar20;
  double *pdVar21;
  char *pcVar22;
  double unaff_x23;
  byte *pbVar23;
  double unaff_x24;
  double dVar24;
  String stringLiteral;
  String SVar25;
  String stringLiteral_00;
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
  String SVar26;
  
  LVar8 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40));
  pdVar21 = (double *)(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  LVar9 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar9.unknown + -8) + 0x40));
  pdVar18 = (double *)((long)pdVar21 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar10 = 0;
  FUN_10040211c();
  bVar2 = *(byte *)((long)unaff_x20 + (long)*(int *)(lVar10 + 0x24));
  pdVar13 = (double *)(ulong)bVar2;
  pdVar16 = (double *)0xe600000000000000;
  LVar9.unknown = (undefined *)0x736569766f4d;
  SVar25.bridgeObject = (void *)0xe600000000000000;
  SVar25.str = (char *)0x736569766f4d;
  pbVar14 = &switchD_100031d70::switchdataD_10041cf80;
  uVar12 = (ulong)*(byte *)(pdVar13 + 0x200839f0) * 4 + 0x100031d74;
  pdVar11 = (double *)LVar9.unknown;
  ppuVar15 = extraout_x16;
  pdVar19 = pdVar18;
  switch(bVar2) {
  case 0:
    break;
  default:
    pdVar16 = (double *)0xe800000000000000;
  case 0x3a:
  case 0x46:
  case 0x86:
  case 0x95:
  case 0x9d:
  case 0xa5:
  case 0xad:
  case 0xb5:
  case 0xbd:
  case 0xc5:
  case 0xcd:
    LVar9.unknown = (undefined *)0x7247;
switchD_100031d70_caseD_da:
    LVar9.unknown = (undefined *)((ulong)LVar9.unknown & 0xffffffff0000ffff | 0x70610000);
switchD_100031d70_caseD_4e:
    SVar25.bridgeObject = pdVar16;
    SVar25.str = (char *)((ulong)LVar9.unknown & 0xffff0000ffffffff | 0x7363696800000000);
    break;
  case 2:
    pdVar16 = (double *)0xe500000000000000;
  case 0xd0:
    LVar9.unknown = (undefined *)0x73656d6147;
switchD_100031d70_caseD_ed:
    SVar25.bridgeObject = pdVar16;
    SVar25.str = LVar9.unknown;
    break;
  case 3:
    pdVar16 = (double *)0xe400000000000000;
    LVar9.unknown = (undefined *)0x6143;
  case 0xdd:
    SVar25.bridgeObject = pdVar16;
    SVar25.str = (char *)(ulong)((uint)LVar9.unknown & 0xffff | 0x73720000);
    break;
  case 4:
    LVar9.unknown = (undefined *)0x706f6550;
  case 0xc0:
    SVar25.bridgeObject = (void *)0xe600000000000000;
    SVar25.str = (char *)((ulong)LVar9.unknown & 0xffff0000ffffffff | 0x656c00000000);
    break;
  case 5:
    pdVar16 = (double *)0xe500000000000000;
    LVar9.unknown = (undefined *)0x6d696e41;
  case 0xea:
    SVar25.bridgeObject = pdVar16;
    SVar25.str = (char *)((ulong)LVar9.unknown & 0xffff0000ffffffff | 0x6500000000);
    break;
  case 6:
    pdVar16 = (double *)0xe500000000000000;
  case 0x10:
    SVar25.bridgeObject = pdVar16;
    SVar25.str = (char *)0x726568744f;
    break;
  case 7:
    SVar25.bridgeObject = (void *)0xe500000000000000;
    SVar25.str = (char *)0x6563617053;
    break;
  case 8:
  case 0xa0:
    SVar25.bridgeObject = (void *)0xe600000000000000;
    SVar25.str = (char *)0x65727574614e;
    break;
  case 9:
    SVar25.bridgeObject = (void *)0xea00000000007473;
    SVar25.str = (char *)0x696c616d696e694d;
    break;
  case 10:
  case 0x70:
    pdVar16 = (double *)0xe700000000000000;
  case 0x58:
  case 0x60:
    LVar9.unknown = (undefined *)0x6d696e41;
switchD_100031d70_caseD_1d:
    LVar9.unknown = (undefined *)((ulong)LVar9.unknown & 0xffff0000ffffffff | 0x6c6100000000);
switchD_100031d70_caseD_68:
    SVar25.bridgeObject = pdVar16;
    SVar25.str = (char *)((ulong)LVar9.unknown | 0x73000000000000);
    break;
  case 0xb:
    LVar9.unknown = (undefined *)0x746e6957;
  case 0x80:
    SVar25.bridgeObject = (void *)0xe600000000000000;
    SVar25.str = (char *)((ulong)LVar9.unknown & 0xffff0000ffffffff | 0x726500000000);
    break;
  case 0xc:
    SVar25.bridgeObject = (void *)0xe800000000000000;
    SVar25.str = (char *)0x7472416c65786950;
    break;
  case 0xd:
    pdVar16 = (double *)0xe500000000000000;
  case 0x19:
    SVar25.bridgeObject = pdVar16;
    SVar25.str = (char *)0x6946696353;
    break;
  case 0xe:
  case 0x50:
    LVar9.unknown = (undefined *)0x6547;
  case 0x38:
    LVar9.unknown = (undefined *)((ulong)LVar9.unknown & 0xffff00000000ffff | 0x6c6172656e0000);
switchD_100031d70_caseD_90:
    stringLiteral.bridgeObject = (void *)0xe700000000000000;
    stringLiteral.str = LVar9.unknown;
    LVar9 = LocalizationValue::_init(stringLiteral);
    Foundation::Locale::get_current((Locale)LVar9.unknown);
    LVar9.unknown = (undefined *)pdVar18;
switchD_100031d70_caseD_28:
    param_3.unknown = (undefined *)0x0;
switchD_100031d70_caseD_44:
    SVar25 = (extension_Foundation)::Swift::String::_init(LVar9,param_3);
    break;
  case 0x11:
  case 0x17:
  case 0x1f:
    goto switchD_100031d70_caseD_11;
  case 0x12:
  case 0x1b:
  case 0x20:
    goto switchD_100031d70_caseD_12;
  case 0x13:
  case 0x18:
    goto switchD_100031d70_caseD_13;
  case 0x14:
    goto switchD_100031d70_caseD_14;
  case 0x15:
    goto switchD_100031d70_caseD_15;
  case 0x16:
  case 0x1c:
    pdVar18[4] = (double)&stack0xfffffffffffffff0;
    pdVar18[5] = 2.12209662976359e-314;
switchD_100031d70_caseD_11:
    LVar8 = Foundation::Locale::typeMetadataAccessor();
    pdVar13 = *(double **)(LVar8.unknown + -8);
switchD_100031d70_caseD_15:
    pdVar13 = (double *)pdVar13[8];
    ppuVar15 = &PTR__NSAppleScriptErrorBriefMessage_100521000;
switchD_100031d70_caseD_21:
    (*(code *)ppuVar15[0x23])(pdVar13);
    pdVar13 = extraout_x8_01;
    pbVar14 = (byte *)pdVar18;
switchD_100031d70_caseD_13:
    pdVar16 = (double *)((long)pbVar14 - ((ulong)((long)pdVar13 + 0xf) & 0xfffffffffffffff0));
switchD_100031d70_caseD_12:
    pdVar18 = pdVar16;
switchD_100031d70_caseD_d8:
    LVar9 = LocalizationValue::_typeMetadataAccessor();
    pdVar13 = *(double **)(LVar9.unknown + -8);
switchD_100031d70_caseD_1e:
    pdVar13 = (double *)pdVar13[8];
    ppuVar15 = &PTR__NSAppleScriptErrorBriefMessage_100521000;
switchD_100031d70_caseD_23:
    ppuVar15 = (undefined **)ppuVar15[0x23];
switchD_100031d70_caseD_8d:
    (*(code *)ppuVar15)(pdVar13);
    pdVar13 = extraout_x8_02;
switchD_100031d70_caseD_d1:
    pdVar18 = (double *)((long)pdVar18 - ((ulong)((long)pdVar13 + 0xf) & 0xfffffffffffffff0));
switchD_100031d70_caseD_3f:
switchD_100031d70_caseD_e7:
    lVar10 = 0;
    FUN_10040211c();
    pbVar14 = (byte *)((long)unaff_x20 + (long)*(int *)(lVar10 + 0x3c));
    uVar12 = *(ulong *)(pbVar14 + 8);
    if (uVar12 == 0) {
switchD_100031d70_caseD_41:
      LVar9.unknown = (undefined *)0x206e776f6e6b6e55;
      param_3.unknown = (undefined *)0xed0000656c746954;
switchD_100031d70_caseD_81:
      stringLiteral_00.bridgeObject = param_3.unknown;
      stringLiteral_00.str = LVar9.unknown;
      LVar9 = LocalizationValue::_init(stringLiteral_00);
switchD_100031d70_caseD_f1:
switchD_100031d70_caseD_54:
      Foundation::Locale::get_current((Locale)LVar9.unknown);
switchD_100031d70_caseD_b0:
      LVar9.unknown = (undefined *)pdVar18;
      param_3.unknown = (undefined *)0x0;
switchD_100031d70_caseD_9c:
      SVar25 = (extension_Foundation)::Swift::String::_init(LVar9,param_3);
      LVar9.unknown = SVar25.str;
    }
    else {
      LVar9.unknown = *(undefined **)pbVar14;
      uVar1 = (ulong)LVar9.unknown & 0xffffffffffff;
      if ((uVar12 & 0x2000000000000000) != 0) {
        uVar1 = uVar12 >> 0x38 & 0xf;
      }
      if (uVar1 == 0) goto switchD_100031d70_caseD_41;
      _swift_bridgeObjectRetain();
    }
switchD_100031d70_caseD_dc:
switchD_100031d70_caseD_40:
    return (LocalizationValue)LVar9.unknown;
  case 0x1a:
  case 0x22:
    goto switchD_100031d70_caseD_1a;
  case 0x1d:
    goto switchD_100031d70_caseD_1d;
  case 0x1e:
    goto switchD_100031d70_caseD_1e;
  case 0x21:
  case 0xec:
    goto switchD_100031d70_caseD_21;
  case 0x23:
    goto switchD_100031d70_caseD_23;
  case 0x28:
  case 0x30:
  case 0x42:
  case 0x56:
  case 0x5e:
  case 0x66:
  case 0x6e:
  case 0x76:
  case 0x7e:
  case 0xe4:
  case 0xee:
  case 0xf8:
    goto switchD_100031d70_caseD_28;
  case 0x3c:
    goto switchD_100031d70_caseD_3c;
  case 0x3d:
  case 0x3e:
  case 0x6b:
  case 0x73:
  case 0x7b:
  case 0x83:
  case 0xf3:
  case 0xf7:
    goto switchD_100031d70_caseD_3d;
  case 0x3f:
    goto switchD_100031d70_caseD_3f;
  case 0x40:
    goto switchD_100031d70_caseD_40;
  case 0x41:
  case 0x55:
  case 0x5d:
  case 0x65:
  case 0x6d:
  case 0x75:
  case 0x7d:
    goto switchD_100031d70_caseD_41;
  case 0x44:
  case 0x8e:
  case 0xd2:
  case 0xfa:
    goto switchD_100031d70_caseD_44;
  case 0x45:
    goto switchD_100031d70_caseD_45;
  case 0x4e:
  case 0x5a:
  case 0x62:
  case 0x92:
  case 0x9a:
  case 0xa2:
  case 0xaa:
  case 0xb2:
  case 0xba:
  case 0xc2:
  case 0xca:
    goto switchD_100031d70_caseD_4e;
  case 0x54:
  case 0x5c:
  case 100:
  case 0x6c:
  case 0x74:
  case 0x7c:
    goto switchD_100031d70_caseD_54;
  case 0x59:
  case 0x61:
    goto switchD_100031d70_caseD_59;
  case 0x68:
  case 0x78:
    goto switchD_100031d70_caseD_68;
  case 0x69:
  case 0x71:
  case 0x79:
    goto switchD_100031d70_caseD_69;
  case 0x6a:
  case 0x72:
  case 0x7a:
    goto switchD_100031d70_caseD_6a;
  case 0x81:
    goto switchD_100031d70_caseD_81;
  case 0x82:
  case 0xf2:
  case 0xf6:
    goto switchD_100031d70_caseD_82;
  case 0x8c:
    goto switchD_100031d70_caseD_8c;
  case 0x8d:
    goto switchD_100031d70_caseD_8d;
  case 0x90:
    goto switchD_100031d70_caseD_90;
  case 0x91:
    goto switchD_100031d70_caseD_91;
  case 0x94:
    pdVar16 = (double *)0x410000;
    LVar9.unknown = (undefined *)0x0;
    FUN_10040211c();
  case 0x98:
  case 0xac:
  case 0xf0:
  case 0xf4:
    pdVar13 = (double *)((long)unaff_x20 + (long)*(int *)((long)LVar9.unknown + 0x38));
    pbVar14 = (byte *)(ulong)*(byte *)(pdVar13 + 1);
switchD_100031d70_caseD_45:
    if (((int)pbVar14 != 1) && (0.0 < *pdVar13)) {
      param_1 = (double)(long)*pdVar13;
      in_CY = 0x7fd < (ulong)param_1 >> 0x34;
      in_ZR = (ulong)param_1 >> 0x34 == 0x7fe;
switchD_100031d70_caseD_6a:
      if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1000320f8);
        (*pcVar7)();
      }
switchD_100031d70_caseD_82:
      pdVar13 = (double *)0xc3e0000000000001;
switchD_100031d70_caseD_b4:
      if (param_1 <= (double)pdVar13) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1000320fc);
        (*pcVar7)();
      }
      in_NG = false;
      if (!NAN(param_1)) {
        in_NG = param_1 < 9.223372036854776e+18;
      }
switchD_100031d70_caseD_59:
      if (!(bool)in_NG) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100032100);
        (*pcVar7)();
      }
      pdVar13 = (double *)(long)param_1;
switchD_100031d70_caseD_91:
      pdVar18[1] = (double)pdVar13;
switchD_100031d70_caseD_99:
switchD_100031d70_caseD_a1:
switchD_100031d70_caseD_a9:
switchD_100031d70_caseD_b1:
      SVar25 = Swift::CustomStringConvertible::get_description();
      *(String *)(pdVar18 + 2) = SVar25;
switchD_100031d70_caseD_b9:
      LVar9.unknown = (undefined *)0x4d20;
switchD_100031d70_caseD_c1:
      LVar9.unknown = (undefined *)(ulong)((uint)LVar9.unknown & 0xffff | 0x420000);
switchD_100031d70_caseD_c9:
      SVar27.bridgeObject = (void *)0xe300000000000000;
      SVar27.str = LVar9.unknown;
      SVar35.bridgeObject = param_5;
      SVar35.str = param_4;
      Swift::String::append(SVar27,SVar35);
      pdVar16 = (double *)pdVar18[2];
switchD_100031d70_caseD_c4:
    }
    return (LocalizationValue)pdVar16;
  case 0x99:
  case 0xbc:
    goto switchD_100031d70_caseD_99;
  case 0x9c:
  case 0xa4:
    goto switchD_100031d70_caseD_9c;
  case 0xa1:
    goto switchD_100031d70_caseD_a1;
  case 0xa8:
    goto switchD_100031d70_caseD_a8;
  case 0xa9:
  case 0xd9:
    goto switchD_100031d70_caseD_a9;
  case 0xb0:
    goto switchD_100031d70_caseD_b0;
  case 0xb1:
    goto switchD_100031d70_caseD_b1;
  case 0xb4:
    goto switchD_100031d70_caseD_b4;
  case 0xb8:
    goto switchD_100031d70_caseD_b8;
  case 0xb9:
    goto switchD_100031d70_caseD_b9;
  case 0xc1:
    goto switchD_100031d70_caseD_c1;
  case 0xc4:
    goto switchD_100031d70_caseD_c4;
  case 200:
    goto switchD_100031d70_caseD_c8;
  case 0xc9:
    goto switchD_100031d70_caseD_c9;
  case 0xcc:
    pdVar18[6] = unaff_x24;
    pdVar18[7] = unaff_x23;
    pdVar18[8] = (double)pdVar21;
    pdVar18[9] = (double)pdVar18;
    pdVar18[10] = (double)unaff_x20;
    pdVar18[0xb] = -2.1245519712670684e+183;
    pdVar18[0xc] = (double)&stack0xfffffffffffffff0;
    pdVar18[0xd] = 2.12209662976359e-314;
    pdVar13 = (double *)LVar9.unknown;
switchD_100031d70_caseD_69:
    LVar9.unknown = (undefined *)0x7330;
    if (((uint)param_3.unknown & 0xff) == 1) {
      return (LocalizationValue)(double *)0x7330;
    }
switchD_100031d70_caseD_a8:
    if (pdVar13 == (double *)0x0) {
      return (LocalizationValue)(double *)LVar9.unknown;
    }
switchD_100031d70_caseD_c8:
    pbVar14 = (byte *)((ulong)pdVar13 >> 4);
    uVar12 = 0x6f81;
switchD_100031d70_caseD_8c:
    auVar3._8_8_ = 0;
    auVar3._0_8_ = pbVar14;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar12 & 0xffff00000000ffff | 0x91a2b3c4d5e0000;
    pbVar14 = (byte *)(SUB168(auVar3 * auVar5,8) >> 3);
    pdVar21 = pdVar13 + (long)pbVar14 * -0x1c2;
    pdVar19 = (double *)(ulong)((uint)((int)pdVar21 * 0x8889) >> 0x15);
switchD_100031d70_caseD_3c:
    uVar12 = 0x8888888888888888;
switchD_100031d70_caseD_3d:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = pdVar13;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar12 & 0xffffffffffff0000 | 0x8889;
    pbVar23 = (byte *)((long)pdVar13 + (SUB168(auVar4 * auVar6,8) >> 5) * -0x3c);
    if (pdVar13 < (double *)0xe10) {
      if (pdVar21 < (double *)0x3c) {
        pdVar18[1] = (double)pbVar23;
        SVar25 = Swift::CustomStringConvertible::get_description();
        *(String *)(pdVar18 + 2) = SVar25;
        SVar28.bridgeObject = (void *)0xe100000000000000;
        SVar28.str = (char *)0x73;
        SVar36.bridgeObject = param_5;
        SVar36.str = param_4;
        Swift::String::append(SVar28,SVar36);
        goto LAB_100032364;
      }
      pdVar18[1] = (double)pdVar19;
      SVar25 = Swift::CustomStringConvertible::get_description();
      *(String *)(pdVar18 + 2) = SVar25;
      SVar30.bridgeObject = (void *)0xe100000000000000;
      SVar30.str = (char *)0x6d;
      SVar38.bridgeObject = param_5;
      SVar38.str = param_4;
      Swift::String::append(SVar30,SVar38);
      dVar24 = pdVar18[2];
      dVar17 = pdVar18[3];
      if (pbVar23 == (byte *)0x0) goto LAB_100032330;
      pdVar18[2] = 1.58101006669199e-322;
      pdVar18[3] = -1.757388200993436e+159;
LAB_1000322e8:
      pdVar18[1] = (double)pbVar23;
      SVar25 = Swift::CustomStringConvertible::get_description();
      SVar42.bridgeObject = param_5;
      SVar42.str = param_4;
      Swift::String::append(SVar25,SVar42);
      _swift_bridgeObjectRelease(SVar25.bridgeObject);
      SVar33.bridgeObject = (void *)0xe100000000000000;
      SVar33.str = (char *)0x73;
      SVar43.bridgeObject = param_5;
      SVar43.str = param_4;
      Swift::String::append(SVar33,SVar43);
      pcVar22 = (char *)pdVar18[2];
      pvVar20 = (void *)pdVar18[3];
    }
    else {
      pdVar18[1] = (double)pbVar14;
      SVar25 = Swift::CustomStringConvertible::get_description();
      *(String *)(pdVar18 + 2) = SVar25;
      SVar29.bridgeObject = (void *)0xe100000000000000;
      SVar29.str = (char *)0x68;
      SVar37.bridgeObject = param_5;
      SVar37.str = param_4;
      Swift::String::append(SVar29,SVar37);
      dVar24 = pdVar18[2];
      dVar17 = pdVar18[3];
      if (pdVar21 < (double *)0x3c) {
        pcVar22 = (char *)0x0;
        pvVar20 = (void *)0xe000000000000000;
      }
      else {
        pdVar18[2] = 1.58101006669199e-322;
        pdVar18[3] = -1.757388200993436e+159;
        pdVar18[1] = (double)pdVar19;
        SVar25 = Swift::CustomStringConvertible::get_description();
        SVar39.bridgeObject = param_5;
        SVar39.str = param_4;
        Swift::String::append(SVar25,SVar39);
        _swift_bridgeObjectRelease(SVar25.bridgeObject);
        SVar31.bridgeObject = (void *)0xe100000000000000;
        SVar31.str = (char *)0x6d;
        SVar40.bridgeObject = param_5;
        SVar40.str = param_4;
        Swift::String::append(SVar31,SVar40);
        pcVar22 = (char *)pdVar18[2];
        pvVar20 = (void *)pdVar18[3];
      }
      pdVar18[2] = dVar24;
      pdVar18[3] = dVar17;
      _swift_bridgeObjectRetain(dVar17);
      SVar32.bridgeObject = pvVar20;
      SVar32.str = pcVar22;
      SVar41.bridgeObject = param_5;
      SVar41.str = param_4;
      Swift::String::append(SVar32,SVar41);
      _swift_bridgeObjectRelease(dVar17);
      _swift_bridgeObjectRelease(pvVar20);
      dVar24 = pdVar18[2];
      dVar17 = pdVar18[3];
      if (pbVar23 != (byte *)0x0) {
        pdVar18[2] = 1.58101006669199e-322;
        pdVar18[3] = -1.757388200993436e+159;
        goto LAB_1000322e8;
      }
LAB_100032330:
      pcVar22 = (char *)0x0;
      pvVar20 = (void *)0xe000000000000000;
    }
    pdVar18[2] = dVar24;
    pdVar18[3] = dVar17;
    _swift_bridgeObjectRetain(dVar17);
    SVar34.bridgeObject = pvVar20;
    SVar34.str = pcVar22;
    SVar44.bridgeObject = param_5;
    SVar44.str = param_4;
    Swift::String::append(SVar34,SVar44);
    _swift_bridgeObjectRelease(dVar17);
    _swift_bridgeObjectRelease(pvVar20);
LAB_100032364:
    return (LocalizationValue)(double *)pdVar18[2];
  case 0xd1:
  case 0xf9:
    goto switchD_100031d70_caseD_d1;
  case 0xd8:
    goto switchD_100031d70_caseD_d8;
  case 0xda:
  case 0xde:
  case 0xe8:
  case 0xeb:
    goto switchD_100031d70_caseD_da;
  case 0xdc:
    goto switchD_100031d70_caseD_dc;
  case 0xe7:
    goto switchD_100031d70_caseD_e7;
  case 0xed:
    goto switchD_100031d70_caseD_ed;
  case 0xf1:
  case 0xf5:
    goto switchD_100031d70_caseD_f1;
  }
  param_3.unknown = SVar25.bridgeObject;
switchD_100031d70_caseD_14:
  pdVar11 = SVar25.bridgeObject;
  SVar26.str = SVar25.str;
  SVar26.bridgeObject = param_3.unknown;
  SVar25 = Swift::String::uppercased(SVar26);
  unaff_x20 = (double *)SVar25.str;
switchD_100031d70_caseD_b8:
  LVar9.unknown = (undefined *)unaff_x20;
  _swift_bridgeObjectRelease(pdVar11);
switchD_100031d70_caseD_1a:
  return (LocalizationValue)LVar9.unknown;
}

