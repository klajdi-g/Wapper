// rea decompile_all
// name: FUN_100078070
// address: 0x100078070
// body: available
// range: 0x100078070-0x1000781b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100078070(ulong param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined1 in_CY;
  Hasher HVar3;
  NSString *pNVar4;
  ulong uVar5;
  undefined *puVar6;
  byte *extraout_x1;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  Hasher unaff_x19;
  byte *unaff_x20;
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
  String SVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  String SVar34;
  String SVar35;
  
  uVar11 = 0x1e;
  HVar3.unknown = &DAT_d000000000000028;
  pcVar10 = "Album art with the song title.";
  pcVar8 = (char *)(param_1 & 0xff);
  uVar7 = 0x41fe74;
  pbVar1 = param_2;
  pbVar2 = (byte *)pcVar8;
  switch(pcVar8) {
  case (char *)0x0:
    goto switchD_1000780a4_caseD_0;
  default:
    pcVar8 = "tion";
  case (char *)0x2a:
  case (char *)0x52:
  case (char *)0x62:
  case (char *)0x8a:
  case (char *)0x9a:
  case (char *)0xca:
  case (char *)0xda:
  case (char *)0xe4:
  case (char *)0xf2:
    pcVar8 = pcVar8 + 0xc40;
  case (char *)0x76:
    pcVar10 = pcVar8 + -0x20;
  case (char *)0x32:
  case (char *)0x34:
  case (char *)0x6a:
  case (char *)0x6c:
  case (char *)0xa2:
  case (char *)0xe2:
    HVar3.unknown = (byte *)0x1e;
  case (char *)0x58:
  case (char *)0xa4:
    HVar3.unknown = (undefined *)((ulong)HVar3.unknown & 0xffffffffffff | 0xd000000000000000);
switchD_1000780a4_caseD_1e:
    auVar12._8_8_ = (ulong)pcVar10 | 0x8000000000000000;
    auVar12._0_8_ = HVar3.unknown;
    return auVar12;
  case (char *)0x2:
    auVar16._8_8_ = 0x80000001004dcb90;
    auVar16._0_8_ = 0xd000000000000083;
    return auVar16;
  case (char *)0x3:
    HVar3.unknown = (byte *)0xd000000000000034;
    param_2 = (byte *)0x80000001004dcb50;
  case (char *)0xec:
    auVar17._8_8_ = param_2;
    auVar17._0_8_ = HVar3.unknown;
    return auVar17;
  case (char *)0x4:
    pcVar10 = " of it: the cover on both.";
  case (char *)0x26:
  case (char *)0x3a:
  case (char *)0x42:
  case (char *)0x4a:
  case (char *)0x5e:
  case (char *)0x72:
  case (char *)0x7a:
  case (char *)0x82:
  case (char *)0x96:
  case (char *)0xaa:
  case (char *)0xb2:
  case (char *)0xba:
  case (char *)0xc2:
  case (char *)0xd6:
  case (char *)0xea:
  case (char *)0xfe:
    auVar14._8_8_ = (ulong)pcVar10 | 0x8000000000000000;
    auVar14._0_8_ = 0xd00000000000004c;
    return auVar14;
  case (char *)0x5:
    HVar3.unknown = (byte *)0xd00000000000004a;
    param_2 = (byte *)0x80000001004dcab0;
  case (char *)0xc4:
    auVar19._8_8_ = param_2;
    auVar19._0_8_ = HVar3.unknown;
    return auVar19;
  case (char *)0x6:
    pcVar10 = "s, with its reflection below.";
  case (char *)0x28:
    auVar20._8_8_ = (ulong)pcVar10 | 0x8000000000000000;
    auVar20._0_8_ = 0xd000000000000054;
    return auVar20;
  case (char *)0x7:
  case (char *)0x1d:
  case (char *)0x3d:
  case (char *)0x45:
  case (char *)0xad:
    auVar18._8_8_ = 0x80000001004dca10;
    auVar18._0_8_ = 0xd00000000000003d;
    return auVar18;
  case (char *)0x8:
    pcVar8 = "The album art fills the screen, softly blurred.";
  case (char *)0x74:
    auVar22._8_8_ = (ulong)(pcVar8 + -0x20) | 0x8000000000000000;
    auVar22._0_8_ = 0xd00000000000002f;
    return auVar22;
  case (char *)0x9:
    pcVar8 = "tion";
  case (char *)0x5a:
  case (char *)0x92:
  case (char *)0xd2:
  case (char *)0xfa:
    auVar15._8_8_ = (ulong)(pcVar8 + 0x9b0) | 0x8000000000000000;
    auVar15._0_8_ = 0xd00000000000002d;
    return auVar15;
  case (char *)0xa:
    auVar21._8_8_ = 0x80000001004dc980;
    auVar21._0_8_ = 0xd000000000000021;
    return auVar21;
  case (char *)0xb:
  case (char *)0x75:
    pcVar8 = 
    "Lyrics alone, centered. Songs without lyrics show the title; the Lock Screen shows the artwork and the title."
    ;
  case (char *)0x20:
    pcVar10 = pcVar8 + -0x20;
    HVar3.unknown = (byte *)0xd00000000000006d;
switchD_1000780a4_caseD_0:
    auVar13._8_8_ = (ulong)pcVar10 | 0x8000000000000000;
    auVar13._0_8_ = HVar3.unknown;
    return auVar13;
  case (char *)0xe:
  case (char *)0x16:
  case (char *)0x84:
    unaff_x19.unknown = (byte *)(ulong)*unaff_x20;
  case (char *)0xd:
  case (char *)0x15:
  case (char *)0xa8:
  case (char *)0xb0:
  case (char *)0xb8:
  case (char *)0xc0:
    HVar3.unknown = unaff_x19.unknown;
    Swift::Hasher::init(-0x2fffffffffffffd8);
    FUN_100077be4();
  case (char *)0x13:
    SVar35.bridgeObject = param_2;
    SVar35.str = HVar3.unknown;
    Swift::String::hash((Hasher)&stack0x00000008,SVar35);
    pbVar1 = HVar3.unknown;
    unaff_x19.unknown = param_2;
  case (char *)0x25:
  case (char *)0x39:
  case (char *)0x41:
  case (char *)0x49:
  case (char *)0x5d:
  case (char *)0x71:
  case (char *)0x79:
  case (char *)0x81:
  case (char *)0x95:
  case (char *)0xa9:
  case (char *)0xb1:
  case (char *)0xb9:
  case (char *)0xc1:
  case (char *)0xd5:
  case (char *)0xe9:
  case (char *)0xfd:
    HVar3.unknown = unaff_x19.unknown;
    param_2 = pbVar1;
    _swift_bridgeObjectRelease();
  case (char *)0x94:
  case (char *)0xb5:
  case (char *)0xbd:
    HVar3.unknown = (undefined *)Swift::Hasher::_finalize(HVar3);
  case (char *)0x7d:
  case (char *)0xc5:
switchD_1000780a4_caseD_4d:
    auVar25._8_8_ = param_2;
    auVar25._0_8_ = HVar3.unknown;
    return auVar25;
  case (char *)0x11:
  case (char *)0x90:
    unaff_x19.unknown = (byte *)(ulong)*unaff_x20;
  case (char *)0xc:
    HVar3.unknown = unaff_x19.unknown;
    Swift::Hasher::init(0);
  case (char *)0xfc:
    FUN_100077be4();
    SVar34.bridgeObject = param_2;
    SVar34.str = HVar3.unknown;
    Swift::String::hash((Hasher)&stack0x00000008,SVar34);
    pbVar1 = HVar3.unknown;
    unaff_x19.unknown = param_2;
  case (char *)0x4c:
    param_2 = pbVar1;
    _swift_bridgeObjectRelease();
    HVar3.unknown = (undefined *)Swift::Hasher::_finalize(unaff_x19);
  case (char *)0xe8:
switchD_1000780a4_caseD_59:
    auVar23._8_8_ = param_2;
    auVar23._0_8_ = HVar3.unknown;
    return auVar23;
  case (char *)0x12:
  case (char *)0x10:
    param_3 = (byte *)(ulong)*unaff_x20;
    FUN_100077be4();
    unaff_x20 = param_2;
  case (char *)0xf:
  case (char *)0xd4:
    HVar3.unknown = unaff_x20;
    param_2 = param_3;
    SVar29.bridgeObject = HVar3.unknown;
    SVar29.str = (char *)param_2;
    Swift::String::hash((Hasher)0xd000000000000028,SVar29);
  case (char *)0xac:
switchD_1000780a4_caseD_14:
    _swift_bridgeObjectRelease(HVar3.unknown);
    auVar24._8_8_ = param_2;
    auVar24._0_8_ = HVar3.unknown;
    return auVar24;
  case (char *)0x14:
    goto switchD_1000780a4_caseD_14;
  case (char *)0x1e:
  case (char *)0x3e:
  case (char *)0x46:
  case (char *)0xae:
    goto switchD_1000780a4_caseD_1e;
  case (char *)0x24:
    unaff_x19.unknown = HVar3.unknown;
  case (char *)0xed:
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    unaff_x20 = (byte *)objc_stub::stringForKey_((ID)unaff_x19.unknown,pNVar4);
    param_2 = extraout_x1;
switchD_1000780a4_caseD_ee:
switchD_1000780a4_caseD_44:
    if (unaff_x20 == (byte *)0x0) {
switchD_1000780a4_caseD_7c:
switchD_1000780a4_caseD_3c:
      pNVar4 = (NSString *)0x0;
    }
    else {
switchD_1000780a4_caseD_98:
switchD_1000780a4_caseD_4e:
      SVar29 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      param_2 = SVar29.bridgeObject;
      pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar29.bridgeObject);
    }
    auVar30._8_8_ = param_2;
    auVar30._0_8_ = pNVar4;
    return auVar30;
  case (char *)0x29:
    goto switchD_1000780a4_caseD_29;
  case (char *)0x3c:
    goto switchD_1000780a4_caseD_3c;
  case (char *)0x44:
    goto switchD_1000780a4_caseD_44;
  case (char *)0x4d:
  case (char *)0xd8:
    goto switchD_1000780a4_caseD_4d;
  case (char *)0x4e:
  case (char *)0x7e:
  case (char *)0x86:
  case (char *)0xb6:
  case (char *)0xbe:
  case (char *)0xc6:
    goto switchD_1000780a4_caseD_4e;
  case (char *)0x4f:
  case (char *)0x7f:
  case (char *)0x87:
  case (char *)0xb7:
  case (char *)0xbf:
  case (char *)0xc7:
  case (char *)0xef:
    goto switchD_1000780a4_caseD_4f;
  case (char *)0x59:
  case (char *)0x91:
  case (char *)0xd1:
  case (char *)0xf9:
    goto switchD_1000780a4_caseD_59;
  case (char *)0x5c:
    auVar27._8_8_ = param_2;
    auVar27._0_8_ = &DAT_d000000000000028;
    return auVar27;
  case (char *)0x60:
    goto switchD_1000780a4_caseD_60;
  case (char *)0x61:
  case (char *)0x99:
  case (char *)0xd9:
    goto switchD_1000780a4_caseD_61;
  case (char *)0x70:
  case (char *)0x78:
  case (char *)0x80:
    goto switchD_1000780a4_caseD_70;
  case (char *)0x7c:
    goto switchD_1000780a4_caseD_7c;
  case (char *)0x85:
    param_2 = _DAT_d000000000000030;
    pbVar2 = (byte *)CONCAT35(uRamd00000000000002d,
                              CONCAT23(uRamd00000000000002b,
                                       CONCAT12(uRamd00000000000002a,
                                                CONCAT11(DAT_d000000000000029,DAT_d000000000000028))
                                      ));
    unaff_x19.unknown = pcVar8;
  case (char *)0xd0:
    HVar3.unknown = pbVar2;
switchD_1000780a4_caseD_70:
    FUN_100078414(HVar3.unknown,param_2);
    *unaff_x19.unknown = (byte)HVar3.unknown;
switchD_1000780a4_caseD_61:
switchD_1000780a4_caseD_29:
    auVar26._8_8_ = param_2;
    auVar26._0_8_ = HVar3.unknown;
    return auVar26;
  case (char *)0x98:
    goto switchD_1000780a4_caseD_98;
  case (char *)0xb4:
    HVar3.unknown = &DAT_10054ebb0;
    FUN_100002f94(&DAT_10054ebb0,&DAT_10041ffa8);
  case (char *)0x38:
  case (char *)0x40:
  case (char *)0x48:
    puVar6 = &DAT_10055ce40;
    _swift_initStaticObject();
    *(undefined **)unaff_x19.unknown = HVar3.unknown;
    auVar28._8_8_ = puVar6;
    auVar28._0_8_ = HVar3.unknown;
    return auVar28;
  case (char *)0xbc:
    break;
  case (char *)0xee:
    goto switchD_1000780a4_caseD_ee;
  case (char *)0xf8:
    FUN_100002f94();
    _swift_initStaticObject();
    param_2 = unaff_x20;
  case (char *)0x1c:
    uVar5 = Swift::_findStringSwitchCase();
    _swift_bridgeObjectRelease();
    if (0xb < uVar5) {
      uVar5 = 0xc;
    }
    auVar31._8_8_ = param_2;
    auVar31._0_8_ = uVar5;
    return auVar31;
  }
  uVar11 = 4;
  uVar7 = 2;
  in_CY = 0xfffeff < (uint)pcVar8;
switchD_1000780a4_caseD_60:
  if ((bool)in_CY) {
    uVar7 = uVar11;
  }
  pcVar10 = (char *)(ulong)uVar7;
  in_CY = false;
switchD_1000780a4_caseD_4f:
  iVar9 = (int)pcVar10;
  if (!(bool)in_CY) {
    iVar9 = 1;
  }
  if (iVar9 == 4) {
    uVar7 = CONCAT22(uRamd00000000000002b,CONCAT11(uRamd00000000000002a,DAT_d000000000000029));
  }
  else {
    if (iVar9 == 2) {
      uVar7 = (uint)CONCAT11(uRamd00000000000002a,DAT_d000000000000029);
      if (CONCAT11(uRamd00000000000002a,DAT_d000000000000029) != 0) goto LAB_1000784d8;
      goto LAB_1000784f4;
    }
    uVar7 = (uint)DAT_d000000000000029;
  }
  if (uVar7 != 0) {
LAB_1000784d8:
    auVar32._4_4_ = 0;
    auVar32._0_4_ = ((uint)DAT_d000000000000028 | uVar7 << 8) - 0xb;
    auVar32._8_8_ = param_2;
    return auVar32;
  }
LAB_1000784f4:
  iVar9 = DAT_d000000000000028 - 0xc;
  if (DAT_d000000000000028 < 0xc) {
    iVar9 = -1;
  }
  auVar33._4_4_ = 0;
  auVar33._0_4_ = iVar9 + 1;
  auVar33._8_8_ = param_2;
  return auVar33;
}

