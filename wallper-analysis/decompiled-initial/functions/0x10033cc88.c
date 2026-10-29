// rea decompile_all
// name: FUN_10033cc88
// address: 0x10033cc88
// body: available
// range: 0x10033cc88-0x10033cddb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033cc88(undefined *param_1,State param_2,AppStorage *param_3,char *param_4,
                  AppStorage *param_5)

{
  String SVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  undefined1 **ppuVar6;
  undefined1 **ppuVar7;
  bool bVar8;
  long lVar9;
  StateObject SVar10;
  undefined1 *puVar11;
  code *extraout_x8;
  code *extraout_x8_00;
  undefined **in_x16;
  Date unaff_x20;
  AppStorage *unaff_x21;
  AppStorage *pAVar12;
  AppStorage *unaff_x22;
  AppStorage *pAVar13;
  undefined8 uVar14;
  AppStorage *unaff_x23;
  AppStorage *unaff_x24;
  AppStorage *unaff_x25;
  _StringGuts unaff_x26;
  undefined8 uVar15;
  _StringGuts unaff_x27;
  undefined *unaff_x28;
  undefined8 unaff_x30;
  undefined *puVar16;
  undefined *in_register_00005008;
  undefined *puVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  undefined1 *local_30;
  code *pcStack_28;
  
  SVar1.bridgeObject = unaff_x27.unknown;
  SVar1.str = param_2.unknown;
  SVar21.bridgeObject = unaff_x27.unknown;
  SVar21.str = unaff_x26.unknown;
  pcStack_28 = (code *)0xe800000000000000;
  local_30 = (undefined1 *)0x746e656964617267;
  pAVar13 = (AppStorage *)&local_30;
  ppuVar2 = &local_30;
  ppuVar4 = &local_30;
  puVar11 = &stack0xfffffffffffffff0;
  ppuVar5 = &local_30;
  ppuVar6 = &local_30;
  ppuVar7 = &local_30;
  ppuVar3 = &local_30;
  pAVar12 = unaff_x21;
  switch((ulong)param_3 & 0xff) {
  case 0:
    break;
  default:
    pcStack_28 = (code *)0xe700000000000000;
  case 0x5e:
  case 0x6d:
  case 0x75:
  case 0x7d:
  case 0x85:
  case 0x8d:
  case 0x95:
  case 0x9d:
  case 0xbd:
  case 0xc5:
  case 0xcd:
    local_30 = (undefined1 *)0x7261;
switchD_10033ccc8_caseD_da:
    local_30 = (undefined1 *)((ulong)local_30 & 0xffffffff0000ffff | 0x77740000);
switchD_10033ccc8_caseD_26:
    local_30 = (undefined1 *)((ulong)local_30 & 0xffff0000ffffffff | 0x726f00000000);
switchD_10033ccc8_caseD_31:
    local_30 = (undefined1 *)((ulong)local_30 & 0xffffffffffff | 0x6b000000000000);
    break;
  case 2:
    pcStack_28 = (code *)0xe600000000000000;
    local_30 = (undefined1 *)0x73636972796c;
  case 0x65:
  case 0x84:
  case 0xd1:
  case 0xf9:
    break;
  case 3:
    pcStack_28 = (code *)0xe500000000000000;
    local_30 = (undefined1 *)0x796e6976;
  case 0xd8:
    local_30 = (undefined1 *)((ulong)local_30 & 0xffff0000ffffffff | 0x6c00000000);
    break;
  case 4:
  case 0x91:
    pcStack_28 = (code *)0xe600000000000000;
  case 0x99:
    local_30 = (undefined1 *)0x6f636572;
switchD_10033ccc8_caseD_a1:
    local_30 = (undefined1 *)((ulong)local_30 & 0xffff0000ffffffff | 0x647200000000);
switchD_10033ccc8_caseD_b9:
    break;
  case 5:
    pcStack_28 = (code *)0xe600000000000000;
    local_30 = (undefined1 *)0x657665656c73;
    break;
  case 6:
  case 0x74:
    pcStack_28 = (code *)0xe900000000000065;
    goto LAB_10033cd78;
  case 7:
    pcStack_28 = (code *)0x616c4765;
  case 0x7c:
    pcStack_28 = (code *)((ulong)pcStack_28 & 0xffffffffffff | 0xee00737300000000);
LAB_10033cd78:
    local_30 = (undefined1 *)0x6c6261746e727574;
    break;
  case 8:
    pcStack_28 = (code *)0xe700000000000000;
    local_30 = (undefined1 *)0x746e6569626d61;
    break;
  case 9:
  case 0x1a:
  case 0x2e:
  case 0x36:
  case 0x3e:
  case 0x46:
  case 0x4e:
  case 0x56:
  case 0xc1:
  case 0xe4:
    pcStack_28 = (code *)0xe500000000000000;
  case 0x8c:
    local_30 = (undefined1 *)0x74696c7073;
switchD_10033ccc8_caseD_66:
    break;
  case 10:
    pcStack_28 = (code *)0xe400000000000000;
    local_30 = (undefined1 *)0x7974;
  case 0x6c:
    local_30 = (undefined1 *)(ulong)((uint)local_30 & 0xffff | 0x65700000);
    break;
  case 0xb:
  case 0x28:
  case 0x69:
    pcStack_28 = (code *)0xe500000000000000;
  case 0x71:
    local_30 = (undefined1 *)0x6576;
switchD_10033ccc8_caseD_32:
    local_30 = (undefined1 *)((ulong)local_30 & 0xffffffff0000ffff | 0x73720000);
switchD_10033ccc8_caseD_81:
    local_30 = (undefined1 *)((ulong)local_30 & 0xffff0000ffffffff | 0x6500000000);
switchD_10033ccc8_caseD_89:
    break;
  case 0xc:
  case 0xac:
  case 0xd9:
    goto switchD_10033ccc8_caseD_c;
  case 0xd:
    goto switchD_10033ccc8_caseD_d;
  case 0xe:
    goto switchD_10033ccc8_caseD_e;
  case 0xf:
  case 0x12:
    goto switchD_10033ccc8_caseD_f;
  case 0x10:
  case 0xdd:
    goto switchD_10033ccc8_caseD_10;
  case 0x11:
    goto switchD_10033ccc8_caseD_11;
  case 0x13:
    goto switchD_10033ccc8_caseD_13;
  case 0x14:
    goto switchD_10033ccc8_caseD_14;
  case 0x18:
  case 0xbc:
    goto switchD_10033ccc8_caseD_18;
  case 0x19:
  case 0x2d:
  case 0x35:
  case 0x3d:
  case 0x45:
  case 0x4d:
  case 0x55:
    goto switchD_10033ccc8_caseD_19;
  case 0x1c:
    goto switchD_10033ccc8_caseD_1c;
  case 0x1d:
  case 0xd0:
    goto switchD_10033ccc8_caseD_1d;
  case 0x26:
    goto switchD_10033ccc8_caseD_26;
  case 0x2c:
  case 0x34:
  case 0x3c:
  case 0x44:
  case 0x4c:
  case 0x54:
    goto switchD_10033ccc8_caseD_2c;
  case 0x30:
  case 0x38:
    goto switchD_10033ccc8_caseD_30;
  case 0x31:
  case 0x39:
  case 0xc9:
    goto switchD_10033ccc8_caseD_31;
  case 0x32:
  case 0x3a:
  case 0x6a:
  case 0x72:
  case 0x79:
  case 0x7a:
  case 0x82:
  case 0x8a:
  case 0x92:
  case 0x9a:
  case 0xa2:
  case 0xaa:
  case 0xb2:
  case 0xba:
  case 0xc2:
  case 0xca:
    goto switchD_10033ccc8_caseD_32;
  case 0x40:
  case 0x50:
    goto switchD_10033ccc8_caseD_40;
  case 0x41:
  case 0x49:
  case 0x51:
    goto switchD_10033ccc8_caseD_41;
  case 0x42:
  case 0x4a:
  case 0x52:
    goto switchD_10033ccc8_caseD_42;
  case 0x43:
  case 0x4b:
  case 0x53:
  case 0x5b:
  case 0xf3:
  case 0xf7:
    goto switchD_10033ccc8_caseD_43;
  case 0x48:
    goto switchD_10033ccc8_caseD_48;
  case 0x58:
    goto switchD_10033ccc8_caseD_58;
  case 0x59:
    goto switchD_10033ccc8_caseD_59;
  case 0x5a:
  case 0xf2:
  case 0xf6:
    goto switchD_10033ccc8_caseD_5a;
  case 100:
    goto switchD_10033ccc8_caseD_64;
  case 0x66:
  case 0xd2:
  case 0xfa:
    goto switchD_10033ccc8_caseD_66;
  case 0x68:
    goto switchD_10033ccc8_caseD_68;
  case 0x70:
    goto switchD_10033ccc8_caseD_70;
  case 0x78:
    goto switchD_10033ccc8_caseD_78;
  case 0x80:
    goto switchD_10033ccc8_caseD_80;
  case 0x81:
  case 0x94:
    goto switchD_10033ccc8_caseD_81;
  case 0x88:
    goto switchD_10033ccc8_caseD_88;
  case 0x89:
    goto switchD_10033ccc8_caseD_89;
  case 0x90:
    goto switchD_10033ccc8_caseD_90;
  case 0x98:
    goto switchD_10033ccc8_caseD_98;
  case 0x9c:
    goto switchD_10033ccc8_caseD_9c;
  case 0xa0:
    goto switchD_10033ccc8_caseD_a0;
  case 0xa1:
  case 0xa9:
  case 0xb1:
  case 0xee:
    goto switchD_10033ccc8_caseD_a1;
  case 0xa4:
    goto switchD_10033ccc8_caseD_a4;
  case 0xa8:
    goto switchD_10033ccc8_caseD_a8;
  case 0xb0:
    goto switchD_10033ccc8_caseD_b0;
  case 0xb4:
    goto switchD_10033ccc8_caseD_b4;
  case 0xb8:
    goto switchD_10033ccc8_caseD_b8;
  case 0xb9:
    goto switchD_10033ccc8_caseD_b9;
  case 0xc0:
    goto switchD_10033ccc8_caseD_c0;
  case 0xc4:
    goto switchD_10033ccc8_caseD_c4;
  case 200:
    goto switchD_10033ccc8_caseD_c8;
  case 0xcc:
    goto switchD_10033ccc8_caseD_cc;
  case 0xda:
  case 0xde:
  case 0xe8:
  case 0xeb:
    goto switchD_10033ccc8_caseD_da;
  case 0xdc:
    goto switchD_10033ccc8_caseD_dc;
  case 0xe7:
    goto switchD_10033ccc8_caseD_e7;
  case 0xea:
    goto switchD_10033ccc8_caseD_ea;
  case 0xec:
    goto switchD_10033ccc8_caseD_ec;
  case 0xed:
    goto switchD_10033ccc8_caseD_ed;
  case 0xf0:
  case 0xf4:
    ppuVar2 = (undefined1 **)&stack0xffffffffffffff70;
switchD_10033ccc8_caseD_b8:
    *(undefined **)((long)ppuVar2 + 0x40) = unaff_x20.unknown;
    *(AppStorage **)((long)ppuVar2 + 0x48) = unaff_x21;
    *(undefined1 **)((long)ppuVar2 + 0x50) = puVar11;
    *(undefined8 *)((long)ppuVar2 + 0x58) = unaff_x30;
    ppuVar3 = ppuVar2;
switchD_10033ccc8_caseD_a4:
    puVar11 = (undefined1 *)((long)ppuVar3 + 0x50);
    ppuVar4 = (undefined1 **)((long)ppuVar3 + -0xf0);
switchD_10033ccc8_caseD_c8:
    ppuVar5 = ppuVar4;
    unaff_x21 = (AppStorage *)unaff_x20.unknown;
switchD_10033ccc8_caseD_c:
    unaff_x20 = Foundation::Date::typeMetadataAccessor();
    unaff_x23 = *(AppStorage **)(unaff_x20.unknown + -8);
    pcStack_28 = (code *)unaff_x23[8].unknown;
    in_x16 = &PTR__NSAppleScriptErrorBriefMessage_100521000;
    ppuVar6 = ppuVar5;
switchD_10033ccc8_caseD_b4:
    (*(code *)in_x16[0x23])(pcStack_28);
    ppuVar7 = ppuVar6;
    pcStack_28 = extraout_x8;
switchD_10033ccc8_caseD_11:
    pAVar13 = (AppStorage *)((long)ppuVar7 + -((ulong)(pcStack_28 + 0xf) & 0xfffffffffffffff0));
    lVar9 = 0;
    FUN_10009e280();
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    pcStack_28 = extraout_x8_00;
    unaff_x22 = pAVar13;
switchD_10033ccc8_caseD_10:
    pcStack_28 = pcStack_28 + 0xf;
    local_30 = (undefined1 *)pAVar13;
    pAVar12 = unaff_x21;
switchD_10033ccc8_caseD_13:
    unaff_x21 = (AppStorage *)(local_30 + -((ulong)pcStack_28 & 0xfffffffffffffff0));
switchD_10033ccc8_caseD_68:
switchD_10033ccc8_caseD_f:
    param_2.unknown = (undefined *)unaff_x22;
    param_3 = (AppStorage *)unaff_x20.unknown;
    Foundation::Date::init();
    FUN_10009f5dc(unaff_x21,param_2.unknown);
    pcStack_28 = (code *)unaff_x23[1].unknown;
switchD_10033ccc8_caseD_a0:
    (*pcStack_28)(param_2.unknown,param_3);
    unaff_x22 = (AppStorage *)unaff_x21->unknown;
    unaff_x24 = (AppStorage *)unaff_x21[1].unknown;
    *(AppStorage **)(puVar11 + -0xe0) = unaff_x22;
    *(AppStorage **)(puVar11 + -0xd8) = unaff_x24;
switchD_10033ccc8_caseD_e:
    param_2.unknown = (undefined *)unaff_x24;
    unaff_x24 = (AppStorage *)param_2.unknown;
switchD_10033ccc8_caseD_48:
    _swift_bridgeObjectRetain(param_2.unknown);
switchD_10033ccc8_caseD_d:
    param_2.unknown = (undefined *)0x7c;
switchD_10033ccc8_caseD_14:
    param_3 = (AppStorage *)0xe100000000000000;
switchD_10033ccc8_caseD_40:
    SVar18.bridgeObject = param_3;
    SVar18.str = param_2.unknown;
    SVar25.bridgeObject = param_5;
    SVar25.str = param_4;
    Swift::String::append(SVar18,SVar25);
    unaff_x25 = *(AppStorage **)(puVar11 + -0xd8);
    unaff_x26.unknown = unaff_x21[2].unknown;
    unaff_x23 = (AppStorage *)unaff_x21[3].unknown;
    *(undefined8 *)(puVar11 + -0xe0) = *(undefined8 *)(puVar11 + -0xe0);
    *(AppStorage **)(puVar11 + -0xd8) = unaff_x25;
    _swift_bridgeObjectRetain(unaff_x25);
    *(undefined **)(puVar11 + -0x138) = unaff_x26.unknown;
switchD_10033ccc8_caseD_e7:
    param_2.unknown = (undefined *)unaff_x25;
    SVar19.bridgeObject = unaff_x23;
    SVar19.str = unaff_x26.unknown;
    SVar26.bridgeObject = param_5;
    SVar26.str = param_4;
    Swift::String::append(SVar19,SVar26);
switchD_10033ccc8_caseD_58:
    _swift_bridgeObjectRelease(param_2.unknown);
switchD_10033ccc8_caseD_2c:
    param_2.unknown = *(undefined **)(puVar11 + -0xd8);
    *(undefined8 *)(puVar11 + -0xe0) = *(undefined8 *)(puVar11 + -0xe0);
    *(undefined **)(puVar11 + -0xd8) = param_2.unknown;
    unaff_x25 = (AppStorage *)param_2.unknown;
switchD_10033ccc8_caseD_9c:
    _swift_bridgeObjectRetain(param_2.unknown);
    SVar20.bridgeObject = (void *)0xe100000000000000;
    SVar20.str = (char *)0x23;
    SVar27.bridgeObject = param_5;
    SVar27.str = param_4;
    Swift::String::append(SVar20,SVar27);
    _swift_bridgeObjectRelease(unaff_x25);
    unaff_x28 = *(undefined **)(puVar11 + -0xe0);
    unaff_x25 = *(AppStorage **)(puVar11 + -0xd8);
switchD_10033ccc8_caseD_f8:
switchD_10033ccc8_caseD_18:
switchD_10033ccc8_caseD_19:
switchD_10033ccc8_caseD_70:
    param_2.unknown = (undefined *)unaff_x25;
    SVar21 = Swift::CustomStringConvertible::get_description();
    *(undefined **)(puVar11 + -0xe0) = unaff_x28;
    *(undefined **)(puVar11 + -0xd8) = param_2.unknown;
    unaff_x25 = (AppStorage *)param_2.unknown;
switchD_10033ccc8_caseD_41:
    _swift_bridgeObjectRetain(param_2.unknown);
    SVar1 = SVar21;
switchD_10033ccc8_caseD_64:
    SVar28.bridgeObject = param_5;
    SVar28.str = param_4;
    Swift::String::append(SVar1,SVar28);
    _swift_bridgeObjectRelease(unaff_x25);
    _swift_bridgeObjectRelease(SVar1.bridgeObject);
    unaff_x27.unknown = *(undefined **)(puVar11 + -0xe0);
    unaff_x26.unknown = *(undefined **)(puVar11 + -0xd8);
    puVar17 = pAVar12[7].unknown;
    puVar16 = pAVar12[6].unknown;
    *(undefined **)(puVar11 + -0x88) = puVar17;
    *(undefined **)(puVar11 + -0x90) = puVar16;
    unaff_x28 = pAVar12[8].unknown;
    *(undefined **)(puVar11 + -0x68) = puVar17;
    *(undefined **)(puVar11 + -0x70) = puVar16;
    *(undefined **)(puVar11 + -0x78) = unaff_x28;
switchD_10033ccc8_caseD_1c:
    in_register_00005008 = pAVar12[7].unknown;
    param_1 = pAVar12[6].unknown;
switchD_10033ccc8_caseD_c4:
    *(undefined **)(puVar11 + -0xd8) = in_register_00005008;
    *(undefined **)(puVar11 + -0xe0) = param_1;
    *(undefined **)(puVar11 + -0xd0) = unaff_x28;
    param_4 = &DAT_100549db0;
    param_5 = (AppStorage *)&DAT_100419ed0;
    param_2.unknown = puVar11 + -0x70;
switchD_10033ccc8_caseD_1d:
    FUN_1000087e4(param_2.unknown,puVar11 + -0x110,param_4,param_5);
    param_4 = &DAT_10054ac48;
switchD_10033ccc8_caseD_a8:
    param_5 = (AppStorage *)&DAT_10041bf60;
switchD_10033ccc8_caseD_78:
    FUN_1000087e4(puVar11 + -0x78,puVar11 + -0x110);
    param_2.unknown = (undefined *)0x10054a000;
switchD_10033ccc8_caseD_cc:
    param_2.unknown = param_2.unknown + 0xb90;
    FUN_100002f94(param_2.unknown,&DAT_10041bdb0);
    unaff_x25 = (AppStorage *)param_2.unknown;
switchD_10033ccc8_caseD_42:
    SwiftUI::State::get_wrappedValue(param_2);
    unaff_x20.unknown = *(undefined **)(puVar11 + -0x108);
    if ((AppStorage *)unaff_x20.unknown == (AppStorage *)0x0) {
switchD_10033ccc8_caseD_f1:
      param_2.unknown = unaff_x26.unknown;
switchD_10033ccc8_caseD_80:
      _swift_bridgeObjectRelease(param_2.unknown);
switchD_10033ccc8_caseD_30:
      FUN_100341718(puVar11 + -0x110,unaff_x21);
switchD_10033ccc8_caseD_ed:
      pcStack_28 = *(code **)(puVar11 + -0x108);
switchD_10033ccc8_caseD_88:
      if (pcStack_28 != (code *)0x0) {
        *(undefined8 *)(puVar11 + -0xe0) = *(undefined8 *)(puVar11 + -0x110);
        *(code **)(puVar11 + -0xd8) = pcStack_28;
        *(undefined8 *)(puVar11 + -200) = *(undefined8 *)(puVar11 + -0xf8);
        *(undefined8 *)(puVar11 + -0xd0) = *(undefined8 *)(puVar11 + -0x100);
        *(undefined8 *)(puVar11 + -0xb8) = *(undefined8 *)(puVar11 + -0xe8);
        *(undefined8 *)(puVar11 + -0xc0) = *(undefined8 *)(puVar11 + -0xf0);
        *(AppStorage **)(puVar11 + -0x130) = unaff_x22;
        pcStack_28 = (code *)(puVar11 + -0x28);
switchD_10033ccc8_caseD_dc:
        *(AppStorage **)(pcStack_28 + -0x100) = unaff_x24;
switchD_10033ccc8_caseD_90:
        _swift_bridgeObjectRetain(unaff_x24);
switchD_10033ccc8_caseD_98:
        param_2.unknown = (undefined *)0x7c;
switchD_10033ccc8_caseD_5a:
        SVar22.bridgeObject = (void *)0xe100000000000000;
        SVar22.str = param_2.unknown;
        SVar29.bridgeObject = param_5;
        SVar29.str = param_4;
        Swift::String::append(SVar22,SVar29);
        unaff_x24 = *(AppStorage **)(puVar11 + -0x128);
        *(undefined8 *)(puVar11 + -0x130) = *(undefined8 *)(puVar11 + -0x130);
        *(AppStorage **)(puVar11 + -0x128) = unaff_x24;
switchD_10033ccc8_caseD_b0:
        param_3 = unaff_x23;
        _swift_bridgeObjectRetain(unaff_x24);
        param_2.unknown = *(undefined **)(puVar11 + -0x138);
switchD_10033ccc8_caseD_43:
        SVar23.bridgeObject = param_3;
        SVar23.str = param_2.unknown;
        SVar30.bridgeObject = param_5;
        SVar30.str = param_4;
        Swift::String::append(SVar23,SVar30);
        _swift_bridgeObjectRelease(unaff_x24);
        uVar14 = *(undefined8 *)(puVar11 + -0x128);
        *(undefined8 *)(puVar11 + -0x130) = *(undefined8 *)(puVar11 + -0x130);
        *(undefined8 *)(puVar11 + -0x128) = uVar14;
        _swift_bridgeObjectRetain(uVar14);
        SVar24.bridgeObject = (void *)0xe100000000000000;
        SVar24.str = (char *)0x23;
        SVar31.bridgeObject = param_5;
        SVar31.str = param_4;
        Swift::String::append(SVar24,SVar31);
        _swift_bridgeObjectRelease(uVar14);
        uVar15 = *(undefined8 *)(puVar11 + -0x130);
        uVar14 = *(undefined8 *)(puVar11 + -0x128);
        SVar21 = Swift::CustomStringConvertible::get_description();
        *(undefined8 *)(puVar11 + -0x130) = uVar15;
        *(undefined8 *)(puVar11 + -0x128) = uVar14;
        _swift_bridgeObjectRetain(uVar14);
        SVar32.bridgeObject = param_5;
        SVar32.str = param_4;
        Swift::String::append(SVar21,SVar32);
        _swift_bridgeObjectRelease(uVar14);
        _swift_bridgeObjectRelease(SVar21.bridgeObject);
        uVar14 = *(undefined8 *)(puVar11 + -0x130);
        uVar15 = *(undefined8 *)(puVar11 + -0x128);
        *(undefined8 *)(puVar11 + -0x128) = *(undefined8 *)(puVar11 + -0x88);
        *(undefined8 *)(puVar11 + -0x130) = *(undefined8 *)(puVar11 + -0x90);
        *(undefined **)(puVar11 + -0x120) = unaff_x28;
        *(undefined8 *)(puVar11 + -0xb0) = uVar14;
        *(undefined8 *)(puVar11 + -0xa8) = uVar15;
        SwiftUI::State::set_wrappedValue((State *)(puVar11 + -0x130),puVar11 + -0xb0,unaff_x25);
        FUN_10002a29c(puVar11 + -0x70,&DAT_100549db0,&DAT_100419ed0);
        FUN_10002a29c(puVar11 + -0x78,&DAT_10054ac48,&DAT_10041bf60);
        SVar10.unknown = pAVar12[3].unknown;
        FUN_1000447d4(0);
        FUN_1000036d0(&DAT_10054d408,FUN_1000447d4,&TargetProtocolConformanceDescriptor_10041dc44);
        SwiftUI::StateObject::get_wrappedValue(SVar10);
        FUN_10004462c(puVar11 + -0xe0);
        _swift_release(SVar10.unknown);
        *(undefined8 *)(puVar11 + -0xa8) = *(undefined8 *)(puVar11 + -0xd8);
        *(undefined8 *)(puVar11 + -0xb0) = *(undefined8 *)(puVar11 + -0xe0);
        FUN_100043c00(puVar11 + -0xb0);
        *(undefined8 *)(puVar11 + -0x128) = *(undefined8 *)(puVar11 + -200);
        *(undefined8 *)(puVar11 + -0x130) = *(undefined8 *)(puVar11 + -0xd0);
        FUN_100043c00(puVar11 + -0x130);
        *(undefined8 *)(puVar11 + -0xa0) = *(undefined8 *)(puVar11 + -0xc0);
        FUN_10002a29c(puVar11 + -0xa0,&DAT_10054c050,&DAT_10041dca0);
        *(undefined8 *)(puVar11 + -0x98) = *(undefined8 *)(puVar11 + -0xb8);
        puVar16 = &DAT_10054c058;
        puVar17 = &DAT_10041d7d0;
        puVar11 = puVar11 + -0x98;
        goto LAB_10033d2c8;
      }
    }
    else {
switchD_10033ccc8_caseD_ec:
      param_4 = *(char **)(puVar11 + -0x110);
      if ((unaff_x27.unknown == param_4) && (unaff_x20.unknown == unaff_x26.unknown)) {
        _swift_bridgeObjectRelease(unaff_x26.unknown);
switchD_10033ccc8_caseD_59:
        _swift_bridgeObjectRelease(unaff_x20.unknown);
      }
      else {
switchD_10033ccc8_caseD_c0:
        param_5 = (AppStorage *)unaff_x20.unknown;
        bVar8 = Swift::_stringCompareWithSmolCheck
                          (unaff_x27,unaff_x26,(_StringComparisonResult)(__int8)param_4);
        _swift_bridgeObjectRelease(unaff_x26.unknown);
        _swift_bridgeObjectRelease(unaff_x20.unknown);
        if (!bVar8) goto switchD_10033ccc8_caseD_30;
      }
    }
    FUN_10002a29c(puVar11 + -0x70,&DAT_100549db0,&DAT_100419ed0);
    puVar16 = &DAT_10054ac48;
    puVar17 = &DAT_10041bf60;
    puVar11 = puVar11 + -0x78;
LAB_10033d2c8:
    FUN_10002a29c(puVar11,puVar16,puVar17);
    FUN_100029548(unaff_x21,FUN_10009e280);
    return;
  case 0xf1:
  case 0xf5:
    goto switchD_10033ccc8_caseD_f1;
  case 0xf8:
    goto switchD_10033ccc8_caseD_f8;
  }
  SwiftUI::AppStorage::set_wrappedValue
            ((AppStorage *)unaff_x20.unknown,&local_30,
             ((AppStorage *)((long)param_2.unknown + 0x10))->unknown,
             PTR___type_metadata_for_Swift_String_100523a98);
switchD_10033ccc8_caseD_ea:
  return;
}

