// rea decompile_all
// name: FUN_100077ee4
// address: 0x100077ee4
// body: available
// range: 0x100077ee4-0x10007806f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100077ee4(ulong param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 uVar3;
  Hasher HVar4;
  undefined8 uVar5;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  byte *unaff_x19;
  byte *unaff_x20;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  String SVar38;
  String SVar39;
  String SVar40;
  
  pcVar8 = (char *)0xea00000000006574;
  HVar4.unknown = (byte *)0xea00000000006c6c;
  pbVar1 = (byte *)0x69662e6f746f6870;
  pcVar7 = (char *)(param_1 & 0xff);
  UNRECOVERED_JUMPTABLE = (code *)(ulong)(byte)pcVar7[0x10041fe68];
  puVar9 = (undefined *)((long)UNRECOVERED_JUMPTABLE * 4 + 0x100077f20);
  pbVar2 = pbVar1;
  switch(pcVar7) {
  default:
    pcVar7 = "tion";
  case (char *)0x36:
  case (char *)0x5e:
  case (char *)0x6e:
  case (char *)0x96:
  case (char *)0xa6:
  case (char *)0xd6:
  case (char *)0xe6:
  case (char *)0xf0:
  case (char *)0xfe:
    pcVar7 = pcVar7 + 0xcf0;
  case (char *)0x82:
    pcVar7 = pcVar7 + -0x20;
  case (char *)0x3e:
  case (char *)0x40:
  case (char *)0x76:
  case (char *)0x78:
  case (char *)0xae:
  case (char *)0xee:
    HVar4.unknown = (undefined *)((ulong)pcVar7 | 0x8000000000000000);
  case (char *)0x64:
  case (char *)0xb0:
    pcVar7 = (char *)0x5;
  case (char *)0x2a:
  case (char *)0x4a:
  case (char *)0x52:
  case (char *)0xba:
    pcVar8 = (char *)0xd000000000000012;
  case (char *)0x17:
  case (char *)0x81:
    auVar10._0_8_ = (ulong)pcVar8 | (ulong)pcVar7;
    auVar10._8_8_ = HVar4.unknown;
    return auVar10;
  case (char *)0x2:
    pbVar1 = (byte *)0x712e74786574;
  case (char *)0xf8:
    pbVar1 = (byte *)((ulong)pbVar1 & 0xffffffffffff | 0x6f75000000000000);
  case (char *)0x13:
  case (char *)0x29:
  case (char *)0x49:
  case (char *)0x51:
  case (char *)0xb9:
    auVar14._8_8_ = 0xea00000000006574;
    auVar14._0_8_ = pbVar1;
    return auVar14;
  case (char *)0x3:
    HVar4.unknown = (byte *)0xeb00000000637369;
  case (char *)0x11:
    auVar15._8_8_ = HVar4.unknown;
    auVar15._0_8_ = 0x646c61636974706f;
    return auVar15;
  case (char *)0x4:
    pcVar7 = "circle.lefthalf.filled";
  case (char *)0x15:
    pcVar7 = pcVar7 + -0x20;
  case (char *)0x66:
  case (char *)0x9e:
  case (char *)0xde:
    auVar12._8_8_ = (ulong)pcVar7 | 0x8000000000000000;
    auVar12._0_8_ = 0xd000000000000016;
    return auVar12;
  case (char *)0x5:
  case (char *)0x16:
    HVar4.unknown = (byte *)0x80000001004dccb0;
    pcVar7 = (char *)0xd000000000000012;
  case (char *)0x14:
    auVar17._0_8_ = (ulong)pcVar7 | 8;
    auVar17._8_8_ = HVar4.unknown;
    return auVar17;
  case (char *)0x6:
  case (char *)0x80:
    auVar18._8_8_ = 0xed0000656c637269;
    auVar18._0_8_ = 0x632e64726f636572;
    return auVar18;
  case (char *)0x7:
  case (char *)0xd0:
    pbVar1 = (byte *)0x12;
  case (char *)0x12:
    pbVar1 = (byte *)((ulong)pbVar1 & 0xffffffffffff | 0xd000000000000000);
    pcVar7 = "record.circle.fill";
  case (char *)0x34:
    auVar16._8_8_ = (ulong)(pcVar7 + -0x20) | 0x8000000000000000;
    auVar16._0_8_ = pbVar1;
    return auVar16;
  case (char *)0x8:
    auVar20._8_8_ = 0xe800000000000000;
    auVar20._0_8_ = 0x73656c6b72617073;
    return auVar20;
  case (char *)0x9:
  case (char *)0xe:
    HVar4.unknown = (byte *)0x80000001004dcc70;
    pcVar7 = (char *)0xd000000000000012;
  case (char *)0xf:
    auVar13._8_8_ = HVar4.unknown;
    auVar13._0_8_ = pcVar7 + 6;
    return auVar13;
  case (char *)0xa:
    HVar4.unknown = (byte *)0xea00000000007461;
    pbVar1 = (byte *)0x6f6674786574;
  case (char *)0x1d:
  case (char *)0x9c:
    pbVar1 = (byte *)((ulong)pbVar1 & 0xffffffffffff | 0x6d72000000000000);
  case (char *)0x18:
    auVar19._8_8_ = HVar4.unknown;
    auVar19._0_8_ = pbVar1;
    return auVar19;
  case (char *)0xb:
  case (char *)0x2c:
    HVar4.unknown = (byte *)0x79666974;
  case (char *)0xc:
    HVar4.unknown = (undefined *)((ulong)HVar4.unknown & 0xffffffffffff | 0xec00000000000000);
    pbVar1 = (byte *)0x6574;
  case (char *)0x10:
    pbVar1 = (byte *)((ulong)pbVar1 & 0xffff | 0x73756a2e74780000);
  case (char *)0x1:
  case (char *)0x32:
  case (char *)0x46:
  case (char *)0x4e:
  case (char *)0x56:
  case (char *)0x6a:
  case (char *)0x7e:
  case (char *)0x86:
  case (char *)0x8e:
  case (char *)0xa2:
  case (char *)0xb6:
  case (char *)0xbe:
  case (char *)0xc6:
  case (char *)0xce:
  case (char *)0xe2:
  case (char *)0xf6:
    auVar11._8_8_ = HVar4.unknown;
    auVar11._0_8_ = pbVar1;
    return auVar11;
  case (char *)0x19:
  case (char *)0x21:
  case (char *)0xb4:
  case (char *)0xbc:
  case (char *)0xc4:
  case (char *)0xcc:
    pcVar8 = "tle, set in type.";
    pbVar1 = &BYTE_10041fe77;
  case (char *)0x1f:
    auVar25._8_8_ = (ulong)pcVar8 | 0x8000000000000000;
    auVar25._0_8_ = pbVar1;
    return auVar25;
  case (char *)0x1b:
  case (char *)0xe0:
    pcVar8 = "lass";
    pbVar1 = &BYTE_10041feb7;
  case (char *)0xb8:
    auVar23._8_8_ = (ulong)pcVar8 | 0x8000000000000000;
    auVar23._0_8_ = pbVar1;
    return auVar23;
  case (char *)0x1c:
    auVar22._8_8_ = (ulong)(pcVar7 + 0xc20) | 0x8000000000000000;
    auVar22._0_8_ = 0xd00000000000001e;
    return auVar22;
  case (char *)0x20:
    pcVar8 = " of it: the cover on both.";
    pbVar1 = &BYTE_10041fe96;
  case (char *)0x1a:
    HVar4.unknown = (undefined *)((ulong)pcVar8 | 0x8000000000000000);
  case (char *)0x22:
  case (char *)0x90:
    auVar24._8_8_ = HVar4.unknown;
    auVar24._0_8_ = pbVar1;
    return auVar24;
  case (char *)0x28:
    uVar3 = uRam69662e6f746f6870;
    uVar5 = uRam69662e6f746f6878;
    FUN_100078414(uRam69662e6f746f6870,uRam69662e6f746f6878);
    *pcVar7 = (char)uVar3;
    auVar35._8_8_ = uVar5;
    auVar35._0_8_ = uVar3;
    return auVar35;
  case (char *)0x30:
    Swift::Hasher::init(0x69662e6f746f6870);
    FUN_100077be4();
    pbVar2 = unaff_x19;
  case (char *)0xf9:
    SVar38.bridgeObject = HVar4.unknown;
    SVar38.str = (char *)pbVar2;
    Swift::String::hash((Hasher)&stack0x00000008,SVar38);
    _swift_bridgeObjectRelease();
    pbVar1 = (byte *)Swift::Hasher::_finalize(HVar4);
    HVar4.unknown = pbVar2;
  case (char *)0xfa:
    auVar32._8_8_ = HVar4.unknown;
    auVar32._0_8_ = pbVar1;
    return auVar32;
  case (char *)0x31:
  case (char *)0x45:
  case (char *)0x4d:
  case (char *)0x55:
  case (char *)0x69:
  case (char *)0x7d:
  case (char *)0x85:
  case (char *)0x8d:
  case (char *)0xa1:
  case (char *)0xb5:
  case (char *)0xbd:
  case (char *)0xc5:
  case (char *)0xcd:
  case (char *)0xe1:
  case (char *)0xf5:
    auVar26._8_8_ = 0xea00000000006574;
    auVar26._0_8_ = 0x69662e6f746f6870;
    return auVar26;
  case (char *)0x44:
  case (char *)0x4c:
  case (char *)0x54:
    return ZEXT816(0xea00000000006c6c) << 0x40;
  case (char *)0x50:
  case (char *)0xa4:
  case (char *)0x5a:
  case (char *)0x8a:
  case (char *)0x92:
  case (char *)0xc2:
  case (char *)0xca:
  case (char *)0xd2:
    pcVar7 = (char *)(ulong)*unaff_x20;
    FUN_100077be4();
    SVar39.bridgeObject = HVar4.unknown;
    SVar39.str = pcVar7;
    Swift::String::hash((Hasher)0x69662e6f746f6870,SVar39);
    _swift_bridgeObjectRelease(HVar4.unknown);
    auVar33._8_8_ = pcVar7;
    auVar33._0_8_ = HVar4.unknown;
    return auVar33;
  case (char *)0x58:
    puVar9 = &DAT_10041f000;
  case (char *)0xf4:
    puVar9 = puVar9 + 0xe74;
  case (char *)0x65:
  case (char *)0x9d:
  case (char *)0xdd:
    UNRECOVERED_JUMPTABLE = (code *)((ulong)(byte)puVar9[(long)pcVar7] * 4 + 0x1000780a8);
  case (char *)0x1e:
                    /* WARNING: Could not recover jumptable at 0x0001000780a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar21._8_8_ = HVar4.unknown;
    auVar21._0_8_ = pbVar1;
    return auVar21;
  case (char *)0x5b:
  case (char *)0x8b:
  case (char *)0x93:
  case (char *)0xc3:
  case (char *)0xcb:
  case (char *)0xd3:
  case (char *)0xfb:
    puVar9 = &DAT_10054ebb0;
    FUN_100002f94(&DAT_10054ebb0,&DAT_10041ffa8);
    puVar6 = &DAT_10055ce40;
    _swift_initStaticObject();
    *(undefined **)pcVar7 = puVar9;
    auVar37._8_8_ = puVar6;
    auVar37._0_8_ = puVar9;
    return auVar37;
  case (char *)0x68:
    auVar30._8_8_ = 0x80000001004dc980;
    auVar30._0_8_ = &BYTE_10041fe6b;
    return auVar30;
  case (char *)0x7c:
  case (char *)0x84:
  case (char *)0x8c:
    pcVar7 = "The album on its sleeve, and the record half out of it: the cover on both.";
  case (char *)0x6d:
  case (char *)0xa5:
  case (char *)0xe5:
    pcVar8 = pcVar7 + -0x20;
  case (char *)0x35:
    auVar29._8_8_ = (ulong)pcVar8 | 0x8000000000000000;
    auVar29._0_8_ = &BYTE_10041fe94;
    return auVar29;
  case (char *)0x88:
  case (char *)0x48:
    pcVar7 = (char *)(ulong)*unaff_x20;
    Swift::Hasher::init(0x69662e6f746f6870);
    FUN_100077be4();
    SVar40.bridgeObject = HVar4.unknown;
    SVar40.str = pcVar7;
    Swift::String::hash((Hasher)&stack0x00000008,SVar40);
    _swift_bridgeObjectRelease();
    auVar34._0_8_ = Swift::Hasher::_finalize(HVar4);
    auVar34._8_8_ = pcVar7;
    return auVar34;
  case (char *)0x91:
    pbVar1 = &BYTE_10041fe87;
    HVar4.unknown = (byte *)0x80000001004dca10;
  case (char *)0xdc:
    auVar28._8_8_ = HVar4.unknown;
    auVar28._0_8_ = pbVar1;
    return auVar28;
  case (char *)0xa0:
    pcVar7 = "tion";
  case (char *)0xc1:
  case (char *)0xc9:
    pcVar7 = pcVar7 + 0xb70;
  case (char *)0x89:
  case (char *)0xd1:
    pcVar8 = pcVar7 + -0x20;
  case (char *)0x59:
  case (char *)0xe4:
    auVar27._8_8_ = (ulong)pcVar8 | 0x8000000000000000;
    auVar27._0_8_ = &BYTE_10041fe7e;
    return auVar27;
  case (char *)0xc0:
    auVar31._8_8_ = (ulong)(pcVar7 + 0x9e0) | 0x8000000000000000;
    auVar31._0_8_ = &BYTE_10041fe79;
    return auVar31;
  case (char *)0xc8:
    pbVar1 = (byte *)(ulong)*unaff_x20;
    FUN_100077be4();
    *(byte **)unaff_x19 = pbVar1;
    *(undefined **)(unaff_x19 + 8) = HVar4.unknown;
  case (char *)0x6c:
    auVar36._8_8_ = HVar4.unknown;
    auVar36._0_8_ = pbVar1;
    return auVar36;
  }
}

