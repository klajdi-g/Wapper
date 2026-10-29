// rea decompile_all
// name: FUN_10030f23c
// address: 0x10030f23c
// body: available
// range: 0x10030f23c-0x10030f3f3 inclusive
// range: 0x10030f418-0x10030f437 inclusive
// range: 0x10030f440-0x10030f453 inclusive
// range: 0x10030f458-0x10030f46b inclusive
// range: 0x10030f488-0x10030f497 inclusive
// range: 0x10030f49c-0x10030f4b3 inclusive
// range: 0x10030f4ec-0x10030f54b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010030fae8) */

undefined8 * FUN_10030f23c(byte *param_1,byte *param_2)

{
  undefined8 uVar1;
  char cVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 in_ZR;
  bool bVar8;
  CharacterSet CVar9;
  State SVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  void *pvVar13;
  _StringComparisonResult expecting;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  byte *pbVar16;
  byte *pbVar17;
  long extraout_x12;
  code *in_x16;
  undefined8 *puVar18;
  CharacterSet unaff_x21;
  CharacterSet in;
  undefined8 *unaff_x22;
  long unaff_x23;
  ulong uVar19;
  byte *unaff_x24;
  byte *pbVar20;
  ulong uVar21;
  ulong uVar22;
  long unaff_x26;
  undefined8 *unaff_x27;
  long lVar23;
  undefined8 *unaff_x28;
  undefined8 uVar24;
  String SVar25;
  String SVar26;
  undefined8 *in_stack_00000020;
  undefined1 auStack_b0 [32];
  char acStack_90 [96];
  
  pbVar7 = &stack0xffffffffffffffd0;
  puVar4 = &stack0xffffffffffffffd0;
  pbVar20 = &stack0xffffffffffffffd0;
  puVar14 = (undefined8 *)0x736569766f4d;
  pbVar16 = (byte *)(ulong)*param_1;
  puVar15 = (undefined8 *)(ulong)*param_2;
  puVar18 = (undefined8 *)0xe600000000000000;
  pbVar17 = &switchD_10030f280::switchdataD_1004308e0;
  puVar5 = &stack0xffffffffffffffd0;
  pbVar6 = &stack0xffffffffffffffd0;
  CVar9.unknown = (undefined *)puVar14;
  puVar11 = unaff_x21.unknown;
  puVar12 = (undefined8 *)&stack0xfffffffffffffff0;
  switch(*param_1) {
  case 0:
  case 0x1c:
  case 0x38:
    break;
  default:
  case 0xae:
    puVar14 = (undefined8 *)0x70617247;
switchD_10030f280_caseD_76:
    puVar14 = (undefined8 *)((ulong)puVar14 & 0xffff0000ffffffff | 0x696800000000);
switchD_10030f280_caseD_c5:
    puVar14 = (undefined8 *)((ulong)puVar14 | 0x7363000000000000);
    break;
  case 2:
  case 0x1e:
  case 0x3a:
  case 0x17:
  case 0x33:
  case 0x4f:
    puVar14 = (undefined8 *)0x73656d6147;
    break;
  case 3:
  case 0x1f:
  case 0x3b:
  case 0x81:
  case 0x89:
    puVar14 = (undefined8 *)0x73726143;
    break;
  case 4:
  case 0x20:
  case 0x3c:
  case 0xb8:
    puVar14 = (undefined8 *)0x656c706f6550;
    break;
  case 5:
  case 0x21:
  case 0x3d:
  case 0xb5:
  case 0xf9:
  case 0xc4:
    puVar14 = (undefined8 *)0x6d696e41;
switchD_10030f280_caseD_11:
    puVar14 = (undefined8 *)((ulong)puVar14 & 0xffff0000ffffffff | 0x6500000000);
switchD_10030f280_caseD_c9:
    break;
  case 6:
  case 0x22:
  case 0x3e:
    puVar14 = (undefined8 *)0x744f;
  case 0xd9:
    puVar14 = (undefined8 *)((ulong)puVar14 & 0xffffffff0000ffff | 0x65680000);
switchD_10030f280_caseD_13:
    puVar14 = (undefined8 *)((ulong)puVar14 & 0xffff0000ffffffff | 0x7200000000);
    break;
  case 7:
  case 0x23:
  case 0x3f:
  case 0x10:
  case 0x2c:
  case 0x48:
  case 0xb9:
    puVar14 = (undefined8 *)0x6563617053;
switchD_10030f280_caseD_c1:
    break;
  case 8:
  case 0x24:
  case 0x40:
    puVar14 = (undefined8 *)0x65727574614e;
    break;
  case 9:
  case 0x1a:
  case 0x25:
  case 0x36:
  case 0x41:
  case 0x52:
  case 0xa8:
  case 0xb6:
  case 0xfa:
    puVar14 = (undefined8 *)0x696c616d696e694d;
  case 200:
    break;
  case 10:
  case 0x26:
  case 0x42:
  case 0xe1:
    puVar14 = (undefined8 *)0x736c616d696e41;
switchD_10030f280_caseD_1b:
    break;
  case 0xb:
  case 0x27:
  case 0x43:
  case 0x78:
    puVar14 = (undefined8 *)0x6957;
  case 0x82:
  case 0x8a:
  case 0xba:
  case 0xc2:
  case 0xca:
  case 0xd2:
  case 0xda:
  case 0xe2:
  case 0xea:
  case 0xf2:
    puVar14 = (undefined8 *)((ulong)puVar14 & 0xffffffff0000ffff | 0x746e0000);
switchD_10030f280_caseD_19:
    puVar14 = (undefined8 *)((ulong)puVar14 & 0xffff0000ffffffff | 0x726500000000);
    break;
  case 0xc:
  case 0x12:
  case 0x28:
  case 0x2e:
  case 0x44:
  case 0x4a:
    puVar14 = (undefined8 *)0x6950;
  case 0x6a:
  case 0x7e:
  case 0x86:
  case 0x8e:
  case 0x96:
  case 0x9e:
  case 0xa6:
    puVar14 = (undefined8 *)((ulong)puVar14 & 0xffff00000000ffff | 0x7472416c65780000);
    break;
  case 0xd:
  case 0x29:
  case 0x45:
    puVar14 = (undefined8 *)0x46696353;
  case 0xd1:
    puVar14 = (undefined8 *)((ulong)puVar14 & 0xffff0000ffffffff | 0x6900000000);
switchD_10030f280_caseD_15:
    break;
  case 0xe:
  case 0x2a:
  case 0x46:
    puVar14 = (undefined8 *)0x746e6957;
  case 0xdc:
  case 0xf4:
    puVar14 = (undefined8 *)((ulong)puVar14 & 0xffff0000ffffffff | 0x726500000000);
joined_r0x00010030f3ec:
    expecting.value = (__int8)puVar14;
    if (puVar14 != (undefined8 *)0x736569766f4d) goto LAB_10030f510;
LAB_10030f4ec:
    expecting.value = (__int8)puVar14;
    if (unaff_x22 != (undefined8 *)0xe600000000000000) goto LAB_10030f510;
switchD_10030f280_caseD_b4:
    puVar14 = (undefined8 *)0x0;
    goto LAB_10030f524;
  case 0x11:
  case 0x2d:
  case 0x49:
    goto switchD_10030f280_caseD_11;
  case 0x13:
  case 0x2f:
  case 0x4b:
  case 0xcc:
    goto switchD_10030f280_caseD_13;
  case 0x14:
  case 0x30:
  case 0x4c:
  case 0xd4:
    goto switchD_10030f280_caseD_14;
  case 0x15:
  case 0x31:
  case 0x4d:
    goto switchD_10030f280_caseD_15;
  case 0x16:
  case 99:
    puVar14 = (undefined8 *)0x656c706f6550;
  case 0x32:
  case 0x4e:
    goto joined_r0x00010030f3ec;
  case 0x18:
  case 0x34:
  case 0x50:
  case 0xec:
    goto switchD_10030f280_caseD_18;
  case 0x19:
  case 0x35:
  case 0x51:
    goto switchD_10030f280_caseD_19;
  case 0x1b:
  case 0x37:
  case 0x53:
  case 0xe9:
  case 0xf1:
    goto switchD_10030f280_caseD_1b;
  case 0x5c:
    goto switchD_10030f280_caseD_5c;
  case 0x5d:
  case 0xa9:
    goto switchD_10030f280_caseD_5d;
  case 0x5e:
    goto switchD_10030f280_caseD_5e;
  case 0x5f:
    goto switchD_10030f280_caseD_5f;
  case 0x60:
    puVar14 = (undefined8 *)0x7365656d6f4d;
switchD_10030f280_caseD_5e:
    puVar14 = (undefined8 *)((ulong)puVar14 & 0xffff0000ffffffff | 0x7300000000);
    in_ZR = puVar14 == (undefined8 *)0x736569766f4d;
switchD_10030f280_caseD_61:
joined_r0x00010030f44c:
    expecting.value = (__int8)puVar14;
    if (!(bool)in_ZR) goto LAB_10030f510;
    goto LAB_10030f4ec;
  case 0x61:
    goto switchD_10030f280_caseD_61;
  case 0x62:
  case 0x65:
    puVar14 = (undefined8 *)0x696c616d696e6f4d;
    unaff_x22 = (undefined8 *)0x7473;
  case 100:
    unaff_x22 = (undefined8 *)((ulong)unaff_x22 & 0xffffffffffff | 0xea00000000000000);
    if (puVar14 != (undefined8 *)0x736569766f4d) {
switchD_10030f280_caseD_5f:
      expecting.value = (__int8)puVar14;
      goto LAB_10030f510;
    }
    goto LAB_10030f4ec;
  case 0x66:
    goto switchD_10030f280_caseD_66;
  case 0x68:
    expecting.value = 0x4d;
    goto LAB_10030f510;
  case 0x69:
  case 0x7d:
  case 0x85:
  case 0x8d:
  case 0x95:
  case 0x9d:
  case 0xa5:
    expecting.value = 0x4e;
    goto LAB_10030f510;
  case 0x6c:
    goto switchD_10030f280_caseD_6c;
  case 0x6d:
    goto switchD_10030f280_caseD_6d;
  case 0x76:
  case 0xbd:
  case 0xe5:
    goto switchD_10030f280_caseD_76;
  case 0x7c:
  case 0x84:
  case 0x8c:
  case 0x94:
  case 0x9c:
  case 0xa4:
    puVar14 = (undefined8 *)0x73726143;
switchD_10030f280_caseD_66:
    in_ZR = puVar14 == (undefined8 *)0x736569766f4d;
switchD_10030f280_caseD_5d:
    goto joined_r0x00010030f44c;
  case 0x80:
  case 0x88:
    goto switchD_10030f280_caseD_80;
  case 0x90:
  case 0xa0:
    goto switchD_10030f280_caseD_90;
  case 0x91:
  case 0x99:
  case 0xa1:
    goto switchD_10030f280_caseD_91;
  case 0x92:
  case 0x9a:
  case 0xa2:
    goto switchD_10030f280_caseD_92;
  case 0x93:
  case 0x9b:
  case 0xa3:
  case 0xab:
    goto switchD_10030f280_caseD_93;
  case 0x98:
    goto switchD_10030f280_caseD_98;
  case 0xaa:
    goto switchD_10030f280_caseD_aa;
  case 0xb4:
    goto switchD_10030f280_caseD_b4;
  case 0xbc:
    goto switchD_10030f280_caseD_bc;
  case 0xc0:
    goto switchD_10030f280_caseD_c0;
  case 0xc1:
    goto switchD_10030f280_caseD_c1;
  case 0xc5:
  case 0xcd:
  case 0xd5:
  case 0xdd:
    goto switchD_10030f280_caseD_c5;
  case 0xc9:
    goto switchD_10030f280_caseD_c9;
  case 0xd0:
    unaff_x22 = (undefined8 *)0xe800000000000000;
    puVar14 = (undefined8 *)0x70617247;
    goto switchD_10030f280_caseD_18;
  case 0xd8:
    expecting.value = 0x53;
LAB_10030f510:
    bVar8 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x736569766f4d,(_StringGuts)0xe600000000000000,expecting);
    puVar14 = (undefined8 *)(ulong)bVar8;
LAB_10030f524:
    _swift_bridgeObjectRelease(0xe600000000000000);
    _swift_bridgeObjectRelease(unaff_x22);
switchD_10030f280_caseD_91:
    return puVar14;
  case 0xe0:
    goto switchD_10030f280_caseD_e0;
  case 0xe4:
    goto switchD_10030f280_caseD_e4;
  case 0xe8:
    puVar12 = &stack0x00000020;
    puVar4 = auStack_b0;
    unaff_x28 = (undefined8 *)0xe600000000000000;
    in_stack_00000020 = (undefined8 *)&stack0xfffffffffffffff0;
    CVar9 = Foundation::CharacterSet::typeMetadataAccessor();
    puVar18 = puVar14;
    unaff_x21 = CVar9;
switchD_10030f280_caseD_92:
    unaff_x23 = *(long *)((long)CVar9.unknown + -8);
    puVar15 = *(undefined8 **)(unaff_x23 + 0x40);
    puVar5 = puVar4;
    in_x16 = (code *)PTR____chkstk_darwin_100521118;
switchD_10030f280_caseD_98:
    (*in_x16)(puVar15);
    pbVar6 = puVar5;
    puVar15 = extraout_x8;
switchD_10030f280_caseD_6d:
    puVar15 = (undefined8 *)((ulong)((long)puVar15 + 0xfU) & 0xfffffffffffffff0);
    pbVar16 = pbVar6;
    puVar11 = unaff_x21.unknown;
switchD_10030f280_caseD_90:
    pbVar20 = pbVar16 + -(long)puVar15;
    lVar23 = 0;
    FUN_10040211c();
    puVar12[-0x15] = lVar23;
    unaff_x21.unknown = *(undefined **)(lVar23 + -8);
    puVar15 = *(undefined8 **)(unaff_x21.unknown + 0x40);
    in_x16 = (code *)PTR____chkstk_darwin_100521118;
    unaff_x24 = pbVar20;
switchD_10030f280_caseD_e0:
    (*in_x16)(puVar15);
    puVar12[-0x14] = pbVar20 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    pbVar16 = pbVar20 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
switchD_10030f280_caseD_f8:
    pbVar7 = pbVar16;
switchD_10030f280_caseD_80:
    (*(code *)PTR____chkstk_darwin_100521118)();
    unaff_x26 = (long)pbVar7 - extraout_x12;
    puVar12[-0x18] = puVar11;
    puVar12[-0x17] = unaff_x28;
    puVar14 = puVar18;
    if (puVar18 == (undefined8 *)0x0) {
      unaff_x22 = (undefined8 *)*unaff_x28;
      if (unaff_x22 == (undefined8 *)0x0) {
        FUN_100279594(0);
        FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
        SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10030fb44);
        (*pcVar3)();
      }
      puVar14 = (undefined8 *)&DAT_100430a60;
switchD_10030f280_caseD_e4:
      _swift_getKeyPath(puVar14);
      unaff_x28 = (undefined8 *)&DAT_100430a88;
      _swift_getKeyPath(&DAT_100430a88);
      unaff_x27 = puVar14;
switchD_10030f280_caseD_aa:
      _swift_retain(unaff_x22);
switchD_10030f280_caseD_6c:
      puVar15 = puVar12 + -0xe;
switchD_10030f280_caseD_bc:
      Combine::Published::_get_subscript(puVar15);
switchD_10030f280_caseD_c0:
      _swift_release(unaff_x27);
      _swift_release(unaff_x28);
switchD_10030f280_caseD_f0:
      _swift_release(unaff_x22);
      unaff_x28 = (undefined8 *)puVar12[-0x17];
      puVar14 = puVar18;
      puVar18 = (undefined8 *)puVar12[-0xe];
    }
    uVar24 = unaff_x28[5];
    puVar12[-0xd] = unaff_x28[6];
    puVar12[-0xe] = uVar24;
    unaff_x22 = puVar18;
switchD_10030f280_caseD_93:
    _swift_bridgeObjectRetain(puVar14);
    SVar10.unknown = &DAT_10055bd08;
    FUN_100002f94(&DAT_10055bd08,&DAT_100435de0);
    SwiftUI::State::get_wrappedValue(SVar10);
    cVar2 = *(char *)(puVar12 + -0x10);
    puVar12[-0x1a] = unaff_x24;
    puVar12[-0x19] = unaff_x23;
    puVar14 = unaff_x22;
    if (cVar2 != '\x0e') {
      uVar21 = unaff_x22[2];
      puVar14 = (undefined8 *)PTR___swiftEmptyArrayStorage_100524190;
      if (uVar21 != 0) {
        uVar22 = 0;
        puVar12[-0x16] = uVar21;
        do {
          if ((ulong)unaff_x22[2] <= uVar22) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10030fae8);
            (*pcVar3)();
          }
          uVar19 = (ulong)(byte)unaff_x21.unknown[0x50] + 0x20 &
                   ((ulong)(byte)unaff_x21.unknown[0x50] ^ 0xffffffffffffffff);
          lVar23 = *(long *)(unaff_x21.unknown + 0x48);
          FUN_100029504((undefined *)((long)unaff_x22 + lVar23 * uVar22 + uVar19),unaff_x26,
                        FUN_10040211c);
          if (*(char *)(unaff_x26 + *(int *)(puVar12[-0x15] + 0x24)) == cVar2) {
            puVar15 = puVar14;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar12[-0xe] = puVar14;
            if (((ulong)puVar15 & 1) == 0) {
              FUN_1001c5c4c(0,puVar14[2] + 1,1);
              puVar14 = (undefined8 *)puVar12[-0xe];
            }
            uVar21 = puVar14[2];
            if ((ulong)puVar14[3] >> 1 <= uVar21) {
              FUN_1001c5c4c(1 < (ulong)puVar14[3],uVar21 + 1,1);
              puVar14 = (undefined8 *)puVar12[-0xe];
            }
            puVar14[2] = uVar21 + 1;
            FUN_100007e64(unaff_x26,(undefined *)((long)puVar14 + uVar21 * lVar23 + uVar19),
                          FUN_10040211c);
            unaff_x28 = (undefined8 *)puVar12[-0x17];
            uVar21 = puVar12[-0x16];
          }
          else {
            FUN_10002f1dc(unaff_x26);
          }
          uVar22 = uVar22 + 1;
        } while (uVar21 != uVar22);
      }
      _swift_bridgeObjectRelease(unaff_x22);
    }
    uVar24 = unaff_x28[2];
    puVar12[-0xd] = unaff_x28[3];
    puVar12[-0xe] = uVar24;
    puVar12[-0xc] = unaff_x28[4];
    CVar9.unknown = &DAT_10054dd08;
    FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
    SwiftUI::State::get_wrappedValue((State)CVar9.unknown);
    uVar24 = puVar12[-0xf];
    puVar12[-0xe] = puVar12[-0x10];
    puVar12[-0xd] = uVar24;
    in.unknown = (undefined *)puVar12[-0x1a];
    Foundation::CharacterSet::get_whitespacesAndNewlines(CVar9);
    FUN_100026df4();
    SVar25 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
    (**(code **)(puVar12[-0x19] + 8))(in.unknown,puVar12[-0x18]);
    _swift_bridgeObjectRelease(uVar24);
    SVar26 = Swift::String::lowercased(SVar25);
    pvVar13 = SVar26.bridgeObject;
    _swift_bridgeObjectRelease(SVar25.bridgeObject);
    puVar12[-0x15] = SVar26.str;
    uVar21 = (ulong)SVar26.str & 0xffffffffffff;
    if (((ulong)pvVar13 & 0x2000000000000000) != 0) {
      uVar21 = (ulong)pvVar13 >> 0x38 & 0xf;
    }
    if (uVar21 == 0) {
      _swift_bridgeObjectRelease(pvVar13);
    }
    else {
      lVar23 = puVar14[2];
      puVar12[-0x16] = lVar23;
      puVar15 = (undefined8 *)PTR___swiftEmptyArrayStorage_100524190;
      if (lVar23 != 0) {
        uVar21 = 0;
        do {
          if ((ulong)puVar14[2] <= uVar21) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10030fae4);
            (*pcVar3)();
          }
          uVar19 = (ulong)(byte)unaff_x21.unknown[0x50] + 0x20 &
                   ((ulong)(byte)unaff_x21.unknown[0x50] ^ 0xffffffffffffffff);
          lVar23 = *(long *)(unaff_x21.unknown + 0x48);
          uVar22 = puVar12[-0x14];
          FUN_100029504((undefined *)((long)puVar14 + lVar23 * uVar21 + uVar19),uVar22,FUN_10040211c
                       );
          FUN_10030fb44(uVar22,puVar12[-0x15],pvVar13,unaff_x28);
          if ((uVar22 & 1) == 0) {
            FUN_10002f1dc(puVar12[-0x14]);
          }
          else {
            puVar18 = puVar15;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar12[-0xe] = puVar15;
            if (((ulong)puVar18 & 1) == 0) {
              FUN_1001c5c4c(0,puVar15[2] + 1,1);
              puVar15 = (undefined8 *)puVar12[-0xe];
            }
            uVar22 = puVar15[2];
            if ((ulong)puVar15[3] >> 1 <= uVar22) {
              FUN_1001c5c4c(1 < (ulong)puVar15[3],uVar22 + 1,1);
              puVar15 = (undefined8 *)puVar12[-0xe];
            }
            puVar15[2] = uVar22 + 1;
            FUN_100007e64(puVar12[-0x14],(undefined *)((long)puVar15 + uVar22 * lVar23 + uVar19),
                          FUN_10040211c);
            unaff_x28 = (undefined8 *)puVar12[-0x17];
          }
          uVar21 = uVar21 + 1;
        } while (puVar12[-0x16] != uVar21);
      }
      _swift_bridgeObjectRelease(puVar14);
      _swift_bridgeObjectRelease(pvVar13);
      puVar14 = puVar15;
    }
    uVar24 = unaff_x28[0x11];
    puVar12[-0xd] = unaff_x28[0x12];
    puVar12[-0xe] = uVar24;
    SVar10.unknown = &DAT_10055bd38;
    FUN_100002f94(&DAT_10055bd38,&DAT_100430a50);
    SwiftUI::State::get_wrappedValue(SVar10);
    puVar15 = puVar14;
    FUN_100402858(puVar14,*(undefined1 *)(puVar12 + -0x10));
    uVar24 = unaff_x28[0xf];
    puVar12[-0xd] = unaff_x28[0x10];
    puVar12[-0xe] = uVar24;
    SVar10.unknown = &DAT_10055bd28;
    FUN_100002f94(&DAT_10055bd28,&DAT_100430a48);
    SwiftUI::State::get_wrappedValue(SVar10);
    puVar18 = puVar15;
    FUN_10040c6c0(puVar15,*(undefined1 *)(puVar12 + -0x10));
    _swift_bridgeObjectRelease(puVar15);
    uVar24 = unaff_x28[0x15];
    uVar1 = unaff_x28[0x16];
    puVar12[-0x10] = uVar24;
    puVar12[-0xb] = uVar1;
    puVar12[-0xe] = uVar24;
    puVar12[-0xd] = uVar1;
    puVar12[-0x12] = puVar18;
    FUN_1000087e4(puVar12 + -0x10,puVar12 + -0x13,&DAT_100558960,&DAT_10042b290);
    FUN_1000087e4(puVar12 + -0xb,puVar12 + -0x13,&DAT_10055bd48,&DAT_100430ab0);
    puVar11 = &DAT_10055bd50;
    FUN_100002f94(&DAT_10055bd50,&DAT_100430ab8);
    SwiftUI::State::set_wrappedValue((State *)(puVar12 + -0xe),puVar12 + -0x12,puVar11);
    _swift_bridgeObjectRelease(puVar14);
    FUN_10002a29c(puVar12 + -0x10,&DAT_100558960,&DAT_10042b290);
    puVar12 = puVar12 + -0xb;
    FUN_10002a29c(puVar12,&DAT_10055bd48,&DAT_100430ab0);
    return puVar12;
  case 0xf0:
    goto switchD_10030f280_caseD_f0;
  case 0xf8:
    goto switchD_10030f280_caseD_f8;
  }
  pbVar16 = &BYTE_1004308ee;
switchD_10030f280_caseD_14:
  pbVar17 = (byte *)0x10030f3a4;
switchD_10030f280_caseD_5c:
                    /* WARNING: Could not recover jumptable at 0x00010030f3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(pbVar17 + (ulong)pbVar16[(long)puVar15] * 4))(puVar14);
  return puVar14;
switchD_10030f280_caseD_18:
  puVar14 = (undefined8 *)((ulong)puVar14 & 0xffff0000ffffffff | 0x7363696800000000);
  goto joined_r0x00010030f3ec;
}

