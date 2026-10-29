// rea decompile_all
// name: FUN_100077be4
// address: 0x100077be4
// body: available
// range: 0x100077be4-0x100077cff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_100077be4(ulong param_1)

{
  LocalizationValue LVar1;
  Locale LVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  LocalizationValue unaff_x20;
  char *unaff_x21;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String stringLiteral;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  
  pvVar3 = (void *)0xe800000000000000;
  LVar1.unknown = (char *)0x746e656964617267;
  SVar17.bridgeObject = (void *)0xe800000000000000;
  SVar17.str = (char *)0x746e656964617267;
  param_1 = param_1 & 0xff;
  uVar5 = (ulong)(&switchD_100077c14::switchdataD_10041fe50)[param_1];
  lVar4 = uVar5 * 4 + 0x100077c18;
  switch(param_1) {
  case 0:
    goto switchD_100077c14_caseD_0;
  default:
    pvVar3 = (void *)0xe700000000000000;
  case 0x4e:
  case 0x76:
  case 0x86:
  case 0xae:
  case 0xbe:
  case 0xee:
  case 0xfe:
    LVar1.unknown = (char *)0x7261;
switchD_100077c14_caseD_9a:
    LVar1.unknown = (undefined *)((ulong)LVar1.unknown & 0xffffffff0000ffff | 0x77740000);
switchD_100077c14_caseD_56:
    LVar1.unknown = (undefined *)((ulong)LVar1.unknown & 0xffff0000ffffffff | 0x726f00000000);
switchD_100077c14_caseD_17:
    LVar1.unknown = (undefined *)((ulong)LVar1.unknown & 0xffffffffffff | 0x6b000000000000);
switchD_100077c14_caseD_42:
    SVar6.bridgeObject = pvVar3;
    SVar6.str = LVar1.unknown;
    return SVar6;
  case 2:
    pvVar3 = (void *)0xe600000000000000;
    LVar1.unknown = (char *)0x73636972796c;
  case 0x21:
  case 0x26:
    SVar10.bridgeObject = pvVar3;
    SVar10.str = LVar1.unknown;
    return SVar10;
  case 3:
  case 0x13:
    SVar11.bridgeObject = (void *)0xe500000000000000;
    SVar11.str = (char *)0x6c796e6976;
    return SVar11;
  case 4:
  case 0x24:
    pvVar3 = (void *)0xe600000000000000;
  case 0x15:
    LVar1.unknown = (char *)0x6572;
switchD_100077c14_caseD_28:
    SVar8.str = (char *)((ulong)LVar1.unknown & 0xffff00000000ffff | 0x64726f630000);
    SVar8.bridgeObject = pvVar3;
    return SVar8;
  case 5:
  case 0xd:
    pvVar3 = (void *)0xe600000000000000;
  case 0x2b:
  case 0x41:
  case 0x61:
  case 0x69:
  case 0xd1:
    LVar1.unknown = (char *)0x657665656c73;
switchD_100077c14_caseD_1b:
    SVar12.bridgeObject = pvVar3;
    SVar12.str = LVar1.unknown;
    return SVar12;
  case 6:
  case 0x11:
    pvVar3 = (void *)0xe900000000000065;
  case 0x29:
switchD_100077c14_caseD_29:
    LVar1.unknown = (char *)0x6c6261746e727574;
switchD_100077c14_caseD_12:
    SVar13.bridgeObject = pvVar3;
    SVar13.str = LVar1.unknown;
    return SVar13;
  case 7:
  case 0x27:
    pvVar3 = (void *)0x616c4765;
  case 0x1a:
    pvVar3 = (void *)((ulong)pvVar3 & 0xffffffffffff | 0xee00737300000000);
    goto switchD_100077c14_caseD_29;
  case 8:
  case 0x4c:
    pvVar3 = (void *)0xe700000000000000;
    LVar1.unknown = (char *)0x69626d61;
  case 0x16:
  case 0x1d:
  case 0x2e:
    SVar15.str = (char *)((ulong)LVar1.unknown & 0xffffffff | 0x746e6500000000);
    SVar15.bridgeObject = pvVar3;
    return SVar15;
  case 9:
  case 0xe:
  case 0x19:
  case 0x4a:
  case 0x5e:
  case 0x66:
  case 0x6e:
  case 0x82:
  case 0x96:
  case 0x9e:
  case 0xa6:
  case 0xba:
  case 0xce:
  case 0xd6:
  case 0xde:
  case 0xe6:
  case 0xfa:
    pvVar3 = (void *)0xe500000000000000;
  case 0x1c:
    LVar1.unknown = (char *)0x696c7073;
switchD_100077c14_caseD_2d:
    LVar1.unknown = (undefined *)((ulong)LVar1.unknown & 0xffff0000ffffffff | 0x7400000000);
switchD_100077c14_caseD_f:
    SVar9.bridgeObject = pvVar3;
    SVar9.str = LVar1.unknown;
    return SVar9;
  case 10:
  case 0x1f:
  case 0xe8:
    pvVar3 = (void *)0xe400000000000000;
  case 0x2a:
    SVar14.bridgeObject = pvVar3;
    SVar14.str = (char *)0x65707974;
    return SVar14;
  case 0xb:
    pvVar3 = (void *)0xe500000000000000;
  case 0x2f:
  case 0x99:
    LVar1.unknown = (char *)0x6576;
switchD_100077c14_caseD_10:
    LVar1.unknown = (undefined *)((ulong)LVar1.unknown & 0xffffffff0000ffff | 0x73720000);
switchD_100077c14_caseD_23:
    LVar1.unknown = (undefined *)((ulong)LVar1.unknown & 0xffff0000ffffffff | 0x6500000000);
switchD_100077c14_caseD_0:
    SVar7.bridgeObject = pvVar3;
    SVar7.str = LVar1.unknown;
    return SVar7;
  case 0xf:
  case 0x7e:
  case 0xb6:
  case 0xf6:
    goto switchD_100077c14_caseD_f;
  case 0x10:
    goto switchD_100077c14_caseD_10;
  case 0x12:
    goto switchD_100077c14_caseD_12;
  case 0x14:
  case 0x2c:
    unaff_x21 = LVar1.unknown;
switchD_100077c14_caseD_1e:
    LVar2 = Foundation::Locale::typeMetadataAccessor();
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40))
    ;
switchD_100077c14_caseD_22:
switchD_100077c14_caseD_35:
switchD_100077c14_caseD_30:
    LVar1 = LocalizationValue::_typeMetadataAccessor();
switchD_100077c14_caseD_20:
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40))
    ;
switchD_100077c14_caseD_70:
    lVar4 = 0x100077d98;
    uVar5 = (ulong)(&switchD_100077d94::switchdataD_10041fe5c)[(ulong)unaff_x21 & 0xff];
switchD_100077c14_caseD_7d:
                    /* WARNING: Could not recover jumptable at 0x000100077d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(lVar4 + uVar5 * 4))();
    SVar16.bridgeObject = pvVar3;
    SVar16.str = LVar1.unknown;
    return SVar16;
  case 0x17:
  case 0x7c:
  case 200:
    goto switchD_100077c14_caseD_17;
  case 0x1b:
    goto switchD_100077c14_caseD_1b;
  case 0x1e:
  case 0x98:
    goto switchD_100077c14_caseD_1e;
  case 0x20:
    goto switchD_100077c14_caseD_20;
  case 0x22:
    goto switchD_100077c14_caseD_22;
  case 0x23:
  case 0x44:
    goto switchD_100077c14_caseD_23;
  case 0x28:
    goto switchD_100077c14_caseD_28;
  case 0x2d:
    goto switchD_100077c14_caseD_2d;
  case 0x30:
    goto switchD_100077c14_caseD_30;
  case 0x31:
  case 0x39:
  case 0xcc:
  case 0xd4:
  case 0xdc:
  case 0xe4:
    goto switchD_100077c14_caseD_31;
  case 0x32:
    break;
  case 0x33:
  case 0xf8:
    LVar1.unknown = (char *)0x746e64726f637267;
    break;
  case 0x34:
    goto switchD_100077d94_caseD_4a;
  case 0x35:
  case 0xb4:
    goto switchD_100077c14_caseD_35;
  case 0x36:
    LVar1.unknown = (char *)0x746e73726f6c7267;
switchD_100077d94_caseD_4a:
    break;
  case 0x37:
    goto switchD_100077d94_caseD_15;
  case 0x38:
    goto switchD_100077c14_caseD_38;
  case 0x3a:
  case 0xa8:
    LVar1.unknown = (char *)0x6956;
switchD_100077c14_caseD_31:
    LVar1.unknown = (undefined *)((ulong)LVar1.unknown & 0xffff00000000ffff | 0x6c796e0000);
LAB_100077df4:
    pvVar3 = (void *)0xe500000000000000;
switchD_100077d94_caseD_15:
    goto LAB_100077ea0;
  case 0x40:
    SVar20.bridgeObject = (void *)0xeb00000000637369;
    SVar20.str = (char *)0x646c61636974706f;
    return SVar20;
  case 0x42:
  case 0x62:
  case 0x6a:
  case 0xd2:
    goto switchD_100077c14_caseD_42;
  case 0x48:
    goto switchD_100077c14_caseD_48;
  case 0x49:
  case 0x5d:
  case 0x65:
  case 0x6d:
  case 0x81:
  case 0x95:
  case 0x9d:
  case 0xa5:
  case 0xb9:
  case 0xcd:
  case 0xd5:
  case 0xdd:
  case 0xe5:
  case 0xf9:
    pvVar3 = (void *)0x6c6261740000;
  case 0xb8:
    pvVar3 = (void *)((ulong)pvVar3 & 0xffffffffffff | 0xef65000000000000);
switchD_100077c14_caseD_d9:
switchD_100077c14_caseD_a1:
    goto LAB_100077ea0;
  case 0x4d:
    goto switchD_100077d94_caseD_13;
  case 0x56:
  case 0x58:
  case 0x8e:
  case 0x90:
  case 0xc6:
    goto switchD_100077c14_caseD_56;
  case 0x5c:
  case 100:
  case 0x6c:
    goto switchD_100077c14_caseD_5c;
  case 0x60:
    goto switchD_100077d94_caseD_25;
  case 0x68:
    param_1 = param_1 + 0xcf0;
  case 0xbc:
    param_1 = param_1 - 0x20;
switchD_100077c14_caseD_72:
    SVar18.bridgeObject = (void *)(param_1 | 0x8000000000000000);
    SVar18.str = (char *)0xd000000000000017;
    return SVar18;
  case 0x70:
    goto switchD_100077c14_caseD_70;
  case 0x71:
  case 0xfc:
    LVar1.unknown = (char *)0x726f77747241;
  case 0xa9:
    LVar1.unknown = (undefined *)((ulong)LVar1.unknown & 0xffffffffffff | 0x6b000000000000);
switchD_100077c14_caseD_d8:
    pvVar3 = (void *)0xe700000000000000;
    goto LAB_100077ea0;
  case 0x72:
  case 0xa2:
  case 0xaa:
  case 0xda:
  case 0xe2:
  case 0xea:
    goto switchD_100077c14_caseD_72;
  case 0x73:
  case 0xa3:
  case 0xab:
  case 0xdb:
  case 0xe3:
  case 0xeb:
    goto switchD_100077c14_caseD_73;
  case 0x7d:
  case 0xb5:
  case 0xf5:
    goto switchD_100077c14_caseD_7d;
  case 0x80:
    LVar1.unknown = (char *)0x65707267;
    pvVar3 = (void *)0xe400000000000000;
    goto LAB_100077ea0;
  case 0x84:
    pvVar3 = (void *)(param_1 | 0x8000000000000000);
    param_1 = 0xd000000000000012;
switchD_100077c14_caseD_73:
    SVar22.str = (char *)(param_1 | 8);
    SVar22.bridgeObject = pvVar3;
    return SVar22;
  case 0x85:
  case 0xbd:
  case 0xfd:
    LVar1.unknown = (char *)0x7554;
switchD_100077d94_caseD_13:
    LVar1.unknown = (undefined *)((ulong)LVar1.unknown & 0xffff | 0x6c6261746e720000);
    pvVar3 = (void *)0xe900000000000065;
    goto LAB_100077ea0;
  case 0x94:
  case 0x9c:
  case 0xa4:
    goto switchD_100077c14_caseD_94;
  case 0x9a:
    goto switchD_100077c14_caseD_9a;
  case 0xa0:
    param_1 = param_1 + 0x3d0;
switchD_100077d94_caseD_25:
    SVar19.bridgeObject = (void *)(param_1 - 0x20 | 0x8000000000000000);
    SVar19.str = (char *)0xd000000000000016;
    return SVar19;
  case 0xa1:
  case 0xe9:
    goto switchD_100077c14_caseD_a1;
  case 0xd0:
    LVar1.unknown = (char *)0x746e0074696c7267;
switchD_100077c14_caseD_38:
    goto LAB_100077df4;
  case 0xd8:
    goto switchD_100077c14_caseD_d8;
  case 0xd9:
  case 0xe1:
    goto switchD_100077c14_caseD_d9;
  case 0xe0:
    SVar21.bridgeObject = (void *)0xe800000000000000;
    SVar21.str = (char *)0x746e656964617267;
    return SVar21;
  case 0xf4:
    break;
  }
switchD_100077c14_caseD_94:
  pvVar3 = (void *)0xe600000000000000;
LAB_100077ea0:
  stringLiteral.bridgeObject = pvVar3;
  stringLiteral.str = LVar1.unknown;
  LVar1 = LocalizationValue::_init(stringLiteral);
  Foundation::Locale::get_current((Locale)LVar1.unknown);
switchD_100077c14_caseD_5c:
  SVar17 = (extension_Foundation)::Swift::String::_init(unaff_x20,(Locale)0x0);
switchD_100077c14_caseD_48:
  return SVar17;
}

