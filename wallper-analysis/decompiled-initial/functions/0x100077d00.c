// rea decompile_all
// name: FUN_100077d00
// address: 0x100077d00
// body: available
// range: 0x100077d00-0x100077ee3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_100077d00(ulong param_1,Locale param_2)

{
  long lVar1;
  Locale LVar2;
  LocalizationValue LVar3;
  long extraout_x8;
  long extraout_x8_00;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  code *UNRECOVERED_JUMPTABLE_00;
  code *UNRECOVERED_JUMPTABLE;
  String stringLiteral;
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
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  
  LVar2 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  LVar3 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  SVar7.bridgeObject = param_2.unknown;
  SVar7.str = LVar3.unknown;
  pcVar4 = (char *)(param_1 & 0xff);
  pbVar5 = &switchD_100077d94::switchdataD_10041fe5c;
  UNRECOVERED_JUMPTABLE_00 =
       (code *)(ulong)(&switchD_100077d94::switchdataD_10041fe5c)[(long)pcVar4];
  lVar1 = (long)UNRECOVERED_JUMPTABLE_00 * 4;
  pbVar6 = (byte *)(lVar1 + 0x100077d98);
  switch(pcVar4) {
  default:
    LVar3.unknown = (char *)0x6f43;
  case (char *)0x42:
  case (char *)0x6a:
  case (char *)0x7a:
  case (char *)0xa2:
  case (char *)0xb2:
  case (char *)0xe2:
  case (char *)0xf2:
  case (char *)0xfc:
    LVar3.unknown = (undefined *)((ulong)LVar3.unknown & 0xffffffff0000ffff | 0x6f6c0000);
  case (char *)0x8e:
    LVar3.unknown = (undefined *)((ulong)LVar3.unknown & 0xffff0000ffffffff | 0x737200000000);
  case (char *)0x4a:
  case (char *)0x4c:
  case (char *)0x82:
  case (char *)0x84:
  case (char *)0xba:
  case (char *)0xfa:
switchD_100077c14_caseD_f4:
    param_2.unknown = (undefined *)0xe600000000000000;
    break;
  case (char *)0x1:
    LVar3.unknown = (char *)0x7241;
  case (char *)0x1f:
  case (char *)0x35:
  case (char *)0x55:
  case (char *)0x5d:
  case (char *)0xc5:
    LVar3.unknown = (undefined *)((ulong)LVar3.unknown & 0xffff | 0x6b726f77740000);
  case (char *)0xf:
    goto switchD_100077c14_caseD_d8;
  case (char *)0x2:
  case (char *)0xd:
  case (char *)0x3e:
  case (char *)0x52:
  case (char *)0x5a:
  case (char *)0x62:
  case (char *)0x76:
  case (char *)0x8a:
  case (char *)0x92:
  case (char *)0x9a:
  case (char *)0xae:
  case (char *)0xc2:
  case (char *)0xca:
  case (char *)0xd2:
  case (char *)0xda:
  case (char *)0xee:
    LVar3.unknown = (char *)0x794c;
  case (char *)0x10:
    LVar3.unknown = (undefined *)((ulong)LVar3.unknown & 0xffff00000000ffff | 0x736369720000);
  case (char *)0x21:
    goto switchD_100077c14_caseD_f4;
  case (char *)0x3:
  case (char *)0x72:
  case (char *)0xaa:
  case (char *)0xea:
    LVar3.unknown = (char *)0x6c796e6956;
    goto LAB_100077df4;
  case (char *)0x4:
    LVar3.unknown = (char *)0x6552;
  case (char *)0x17:
  case (char *)0x38:
    LVar3.unknown = (undefined *)((ulong)LVar3.unknown & 0xffff00000000ffff | 0x64726f630000);
  case (char *)0x18:
    goto switchD_100077c14_caseD_f4;
  case (char *)0x5:
    LVar3.unknown = (char *)0x65656c53;
  case (char *)0x1d:
    LVar3.unknown = (undefined *)((ulong)LVar3.unknown & 0xffff0000ffffffff | 0x657600000000);
    goto switchD_100077c14_caseD_f4;
  case (char *)0x6:
    LVar3.unknown = (char *)0x7554;
  case (char *)0x13:
  case (char *)0xdc:
    LVar3.unknown = (undefined *)((ulong)LVar3.unknown & 0xffffffff0000ffff | 0x6e720000);
  case (char *)0x1e:
    LVar3.unknown = (undefined *)((ulong)LVar3.unknown & 0xffffffff | 0x6c62617400000000);
  case (char *)0x40:
    param_2.unknown = (undefined *)0xe900000000000065;
    break;
  case (char *)0x7:
    LVar3.unknown = (char *)0x7554207373616c47;
    param_2.unknown = (undefined *)0x6e72;
  case (char *)0x1b:
    param_2.unknown = (undefined *)((ulong)param_2.unknown & 0xffff00000000ffff | 0x6c6261740000);
  case (char *)0xe:
    param_2.unknown = (undefined *)((ulong)param_2.unknown & 0xffffffffffff | 0xef65000000000000);
    break;
  case (char *)0x8:
    LVar3.unknown = (char *)0x6d41;
  case (char *)0x20:
    LVar3.unknown = (undefined *)((ulong)LVar3.unknown & 0xffff00000000ffff | 0x6e6569620000);
  case (char *)0x12:
  case (char *)0x8c:
    LVar3.unknown = (undefined *)((ulong)LVar3.unknown & 0xffffffffffff | 0x74000000000000);
switchD_100077c14_caseD_d8:
    param_2.unknown = (undefined *)0xe700000000000000;
    break;
  case (char *)0x9:
    LVar3.unknown = (char *)0x7053;
  case (char *)0x1c:
    LVar3.unknown = (undefined *)((ulong)LVar3.unknown & 0xffff00000000ffff | 0x74696c0000);
    goto LAB_100077df4;
  case (char *)0xa:
  case (char *)0x11:
  case (char *)0x22:
    LVar3.unknown = (char *)0x65707954;
    param_2.unknown = (undefined *)0xe400000000000000;
    break;
  case (char *)0xb:
  case (char *)0x70:
  case (char *)0xbc:
    LVar3.unknown = (char *)0x6556;
  case (char *)0x36:
  case (char *)0x56:
  case (char *)0x5e:
  case (char *)0xc6:
    LVar3.unknown = (undefined *)((ulong)LVar3.unknown & 0xffff00000000ffff | 0x6573720000);
  case (char *)0x23:
  case (char *)0x8d:
LAB_100077df4:
    param_2.unknown = (undefined *)0xe500000000000000;
switchD_100077d94_caseD_15:
    break;
  case (char *)0x14:
    return SVar7;
  case (char *)0x15:
  case (char *)0x1a:
    goto switchD_100077d94_caseD_15;
  case (char *)0x16:
    goto switchD_100077d94_caseD_16;
  case (char *)0x26:
    pcVar4 = "tion";
  case (char *)0x2e:
  case (char *)0x9c:
    pcVar4 = pcVar4 + 0x3d0;
  case (char *)0x25:
  case (char *)0x2d:
  case (char *)0xc0:
  case (char *)0xc8:
  case (char *)0xd0:
  case (char *)0xd8:
    param_2.unknown = (undefined *)((ulong)(pcVar4 + -0x20) | 0x8000000000000000);
    pcVar4 = (char *)0xd000000000000012;
  case (char *)0x2b:
    SVar11.str = (char *)((ulong)pcVar4 | 4);
    SVar11.bridgeObject = param_2.unknown;
    return SVar11;
  case (char *)0x28:
    param_2.unknown = (undefined *)((ulong)(pcVar4 + 0xcd0) | 0x8000000000000000);
    pcVar4 = (char *)0x5;
    pbVar5 = (byte *)0xd000000000000012;
  case (char *)0x27:
  case (char *)0xec:
    SVar9.str = (char *)((ulong)pbVar5 | (ulong)pcVar4);
    SVar9.bridgeObject = param_2.unknown;
    return SVar9;
  case (char *)0x29:
  case (char *)0xa8:
switchD_100077d94_caseD_29:
  case (char *)0x24:
    SVar7 = (extension_Foundation)::Swift::String::_init(LVar3,param_2);
    return SVar7;
  case (char *)0x34:
    SVar21.bridgeObject = (void *)((ulong)(pcVar4 + 0xa10) | 0x8000000000000000);
    SVar21.str = (char *)(lVar1 + 0x100077db7);
    return SVar21;
  case (char *)0x3c:
    SVar17.bridgeObject = param_2.unknown;
    SVar17.str = (char *)0x73656c6b72617073;
    return SVar17;
  case (char *)0x3d:
  case (char *)0x51:
  case (char *)0x59:
  case (char *)0x61:
  case (char *)0x75:
  case (char *)0x89:
  case (char *)0x91:
  case (char *)0x99:
  case (char *)0xad:
  case (char *)0xc1:
  case (char *)0xc9:
  case (char *)0xd1:
  case (char *)0xd9:
  case (char *)0xed:
    pcVar4 = (char *)0xd000000000000012;
  case (char *)0xac:
    LVar3.unknown = pcVar4 + 6;
  case (char *)0xcd:
  case (char *)0xd5:
    SVar12.bridgeObject = param_2.unknown;
    SVar12.str = LVar3.unknown;
    return SVar12;
  case (char *)0x50:
  case (char *)0x58:
  case (char *)0x60:
    SVar16.bridgeObject = param_2.unknown;
    SVar16.str = (char *)0x632e64726f636572;
    return SVar16;
  case (char *)0x5c:
                    /* WARNING: Could not recover jumptable at 0x0001000780a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    SVar18.bridgeObject = param_2.unknown;
    SVar18.str = LVar3.unknown;
    return SVar18;
  case (char *)0x64:
    LVar3.unknown = (undefined *)((ulong)LVar3.unknown & 0xffff | 0x69662e6f746f0000);
    pbVar6 = &switchD_100077f1c::switchdataD_10041fe68;
  case (char *)0x71:
  case (char *)0xa9:
  case (char *)0xe9:
    UNRECOVERED_JUMPTABLE_00 = (code *)((ulong)pbVar6[(long)pcVar4] * 4 + 0x100077f20);
  case (char *)0x2a:
                    /* WARNING: Could not recover jumptable at 0x000100077f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    SVar8.bridgeObject = param_2.unknown;
    SVar8.str = LVar3.unknown;
    return SVar8;
  case (char *)0x74:
    param_2.unknown = (undefined *)0x80000001004dccb0;
    LVar3.unknown = (char *)0xd00000000000001a;
  case (char *)0xcc:
    SVar15.bridgeObject = param_2.unknown;
    SVar15.str = LVar3.unknown;
    return SVar15;
  case (char *)0x78:
    pbVar5 = (byte *)(pcVar4 + 0x980);
    LVar3.unknown = (undefined *)(lVar1 + 0x100077d9b);
  case (char *)0x67:
  case (char *)0x97:
  case (char *)0x9f:
  case (char *)0xcf:
  case (char *)0xd7:
  case (char *)0xdf:
    SVar23.bridgeObject = (void *)((ulong)pbVar5 | 0x8000000000000000);
    SVar23.str = LVar3.unknown;
    return SVar23;
  case (char *)0x94:
    LVar3.unknown = (undefined *)(lVar1 + 0x100077dc6);
  case (char *)0x54:
    SVar20.bridgeObject = (void *)0x800000010041fe5c;
    SVar20.str = LVar3.unknown;
    return SVar20;
  case (char *)0x95:
  case (char *)0xdd:
    LVar3.unknown = (char *)0x6574;
  case (char *)0x65:
  case (char *)0xf0:
    LVar3.unknown = (undefined *)((ulong)LVar3.unknown & 0xffff | 0x6f75712e74780000);
  case (char *)0x9d:
    SVar13.bridgeObject = (void *)0xea00000000006574;
    SVar13.str = LVar3.unknown;
    return SVar13;
  case (char *)0xb0:
    pcVar4 = "tion";
  case (char *)0x66:
  case (char *)0x96:
  case (char *)0x9e:
  case (char *)0xce:
  case (char *)0xd6:
  case (char *)0xde:
    SVar19.bridgeObject = (void *)((ulong)(pcVar4 + 0xc20) | 0x8000000000000000);
    SVar19.str = (char *)0xd00000000000001e;
    return SVar19;
  case (char *)0xc4:
    param_2.unknown = (undefined *)((ulong)param_2.unknown & 0xffffffffffff | 0xec00000000000000);
    LVar3.unknown = (char *)0x6574;
  case (char *)0x2c:
    SVar10.str = (char *)((ulong)LVar3.unknown & 0xffff | 0x73756a2e74780000);
    SVar10.bridgeObject = param_2.unknown;
    return SVar10;
  case (char *)0xd4:
    SVar22.bridgeObject = (void *)0x800000010041fe5c;
    SVar22.str = (char *)(lVar1 + 0x100077dce);
    return SVar22;
  case (char *)0xe8:
    param_2.unknown = (undefined *)((ulong)param_2.unknown & 0xffffffffffff | 0xeb00000000000000);
  case (char *)0x88:
  case (char *)0x90:
  case (char *)0x98:
    LVar3.unknown = (char *)0x6974706f;
  case (char *)0x79:
  case (char *)0xb1:
  case (char *)0xf1:
    LVar3.unknown = (undefined *)((ulong)LVar3.unknown & 0xffff0000ffffffff | 0x616300000000);
  case (char *)0x41:
    SVar14.str = (char *)((ulong)LVar3.unknown & 0xffffffffffff | 0x646c000000000000);
    SVar14.bridgeObject = param_2.unknown;
    return SVar14;
  }
  stringLiteral.bridgeObject = param_2.unknown;
  stringLiteral.str = LVar3.unknown;
  LVar3 = LocalizationValue::_init(stringLiteral);
  Foundation::Locale::get_current((Locale)LVar3.unknown);
  param_2.unknown = (undefined *)0x0;
  LVar3.unknown =
       &stack0xffffffffffffffd0 +
       (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
switchD_100077d94_caseD_16:
  goto switchD_100077d94_caseD_29;
}

