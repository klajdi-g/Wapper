// rea decompile_all
// name: FUN_1003e5b38
// address: 0x1003e5b38
// body: available
// range: 0x1003e5b38-0x1003e5c17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003e5b38(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  DismissAction DVar6;
  URL UVar7;
  Date DVar8;
  code *pcVar9;
  code *pcVar10;
  long lVar11;
  code *pcVar12;
  long unaff_x19;
  long unaff_x20;
  code *unaff_x21;
  long unaff_x22;
  undefined *unaff_x23;
  Date unaff_x24;
  long unaff_x25;
  long lVar13;
  long unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
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
  long in_stack_00000000;
  ulong in_stack_00000008;
  long in_stack_00000010;
  ulong in_stack_00000018;
  
  pcVar12 = (code *)&SUB_be909ff0;
  DVar6.unknown = (code *)0xbf8c9ff0;
  pcVar9 = (code *)0xa400000000000000;
  pcVar10 = (code *)(param_1 & 0xff);
  pcVar3 = (code *)DVar6.unknown;
  lVar11 = unaff_x20;
  uVar4 = unaff_x27;
  uVar5 = unaff_x28;
  switch(pcVar10) {
  default:
    DVar6.unknown = (code *)0x9ff0;
  case (code *)0xce:
    auVar14._4_4_ = 0;
    auVar14._0_4_ = (uint)DVar6.unknown & 0xffff | 0xac8e0000;
    auVar14._8_8_ = 0xa400000000000000;
    return auVar14;
  case (code *)0x1:
  case (code *)0xc8:
    auVar22._8_8_ = 0xa400000000000000;
    auVar22._0_8_ = 0xa88e9ff0;
    return auVar22;
  case (code *)0x2:
    DVar6.unknown = (code *)0x9ff0;
  case (code *)0xd6:
    auVar19._4_4_ = 0;
    auVar19._0_4_ = (uint)DVar6.unknown & 0xffff | 0xae8e0000;
    auVar19._8_8_ = 0xa400000000000000;
    return auVar19;
  case (code *)0x3:
    auVar20._8_8_ = 0xa400000000000000;
    auVar20._0_8_ = 0x979a9ff0;
    return auVar20;
  case (code *)0x4:
    DVar6.unknown = (code *)0xa4919ff0;
  case (code *)0xba:
    auVar16._8_8_ = 0xa400000000000000;
    auVar16._0_8_ = DVar6.unknown;
    return auVar16;
  case (code *)0x5:
    pcVar10 = (code *)0x9ff0;
  case (code *)0x1c:
    auVar23._0_8_ = (ulong)((uint)pcVar10 | 0x8c8c0000) | 0x20000;
    auVar23._8_8_ = 0xa400000000000000;
    return auVar23;
  case (code *)0x6:
    pcVar9 = (code *)0xa300000000000000;
    DVar6.unknown = (code *)0xa89ce2;
  case (code *)0x8:
    auVar21._8_8_ = pcVar9;
    auVar21._0_8_ = DVar6.unknown;
    return auVar21;
  case (code *)0x7:
    auVar26._8_8_ = 0xa400000000000000;
    auVar26._0_8_ = 0x8c8c9ff0;
    return auVar26;
  case (code *)0x9:
    pcVar9 = (code *)0xa600000000000000;
    DVar6.unknown = (code *)0xefbb97e2;
  case (code *)0x14:
  case (code *)0xa2:
  case (code *)0xb6:
  case (code *)0xbe:
  case (code *)0xc6:
    auVar18._0_8_ = (ulong)DVar6.unknown | 0x8fb800000000;
    auVar18._8_8_ = pcVar9;
    return auVar18;
  case (code *)0xa:
    DVar6.unknown = (code *)0x9ff0;
  case (code *)0xe0:
    auVar25._4_4_ = 0;
    auVar25._0_4_ = (uint)DVar6.unknown & 0xffff | 0xbe900000;
    auVar25._8_8_ = 0xa400000000000000;
    return auVar25;
  case (code *)0xb:
  case (code *)0xae:
  case (code *)0xb0:
    auVar15._8_8_ = 0xa600000000000000;
    auVar15._0_8_ = 0x8fb8ef849de2;
    return auVar15;
  case (code *)0xc:
    auVar17._8_8_ = 0xa400000000000000;
    auVar17._0_8_ = 0xbe919ff0;
    return auVar17;
  case (code *)0xd:
    auVar24._8_8_ = 0xa400000000000000;
    auVar24._0_8_ = 0x809a9ff0;
    return auVar24;
  case (code *)0x2c:
  case (code *)0xa4:
    goto switchD_1003e5b64_caseD_2c;
  case (code *)0x34:
    goto switchD_1003e5b64_caseD_34;
  case (code *)0x3c:
  case (code *)0xd4:
    goto switchD_1003e5b64_caseD_3c;
  case (code *)0x44:
    goto switchD_1003e5b64_caseD_44;
  case (code *)0x4c:
  case (code *)0xa5:
    goto switchD_1003e5b64_caseD_4c;
  case (code *)0x54:
  case (code *)0xe8:
    goto switchD_1003e5b64_caseD_54;
  case (code *)0x55:
  case (code *)0x56:
  case (code *)0x5d:
  case (code *)0x6e:
  case (code *)0x7b:
  case (code *)0x90:
  case (code *)0x95:
  case (code *)0x99:
  case (code *)0xe5:
  case (code *)0xe9:
  case (code *)0xf3:
    goto switchD_1003e5b64_caseD_55;
  case (code *)0x57:
  case (code *)0x5e:
  case (code *)0x92:
  case (code *)0x9a:
  case (code *)0xe6:
    goto switchD_1003e5b64_caseD_57;
  case (code *)0x58:
  case (code *)0x93:
  case (code *)0xf1:
    goto switchD_1003e5b64_caseD_58;
  case (code *)0x59:
  case (code *)0x70:
  case (code *)0x74:
  case (code *)0x97:
  case (code *)0x9c:
  case (code *)0xf0:
  case (code *)0xf5:
  case (code *)0xf9:
    goto switchD_1003e5b64_caseD_59;
  case (code *)0x5a:
  case (code *)0x71:
  case (code *)0x7c:
  case (code *)0x96:
  case (code *)0xed:
    goto switchD_1003e5b64_caseD_5a;
  case (code *)0x5b:
  case (code *)0x91:
    goto switchD_1003e5b64_caseD_5b;
  case (code *)0x5c:
  case (code *)0x79:
  case (code *)0x7a:
  case (code *)0x7e:
  case (code *)0x98:
  case (code *)0xe7:
  case (code *)0xf7:
    goto switchD_1003e5b64_caseD_5c;
  case (code *)0x6c:
    goto switchD_1003e5b64_caseD_6c;
  case (code *)0x6d:
  case (code *)0x80:
  case (code *)0xea:
    goto switchD_1003e5b64_caseD_6d;
  case (code *)0x6f:
  case (code *)0x9e:
  case (code *)0xfb:
    goto switchD_1003e5b64_caseD_6f;
  case (code *)0x72:
    goto switchD_1003e5b64_caseD_72;
  case (code *)0x73:
  case (code *)0xf4:
    goto switchD_1003e5b64_caseD_73;
  case (code *)0x75:
    goto switchD_1003e5b64_caseD_75;
  case (code *)0x76:
  case (code *)0x81:
  case (code *)0x8d:
  case (code *)0x9d:
  case (code *)0xa0:
  case (code *)0xf2:
  case (code *)0xfa:
    goto switchD_1003e5b64_caseD_76;
  case (code *)0x77:
    goto switchD_1003e5b64_caseD_77;
  case (code *)0x78:
  case (code *)0xeb:
    goto switchD_1003e5b64_caseD_78;
  case (code *)0x7d:
  case (code *)0xe4:
    goto switchD_1003e5b64_caseD_7d;
  case (code *)0x7f:
  case (code *)0x8e:
    goto switchD_1003e5b64_caseD_7f;
  case (code *)0x8c:
    goto switchD_1003e5b64_caseD_8c;
  case (code *)0x8f:
    goto switchD_1003e5b64_caseD_8f;
  case (code *)0x94:
    goto switchD_1003e5b64_caseD_94;
  case (code *)0x9b:
  case (code *)0xef:
  case (code *)0xf8:
    goto switchD_1003e5b64_caseD_9b;
  case (code *)0xa1:
  case (code *)0xb5:
  case (code *)0xbd:
  case (code *)0xc5:
  case (code *)0xdc:
    goto switchD_1003e5b64_caseD_a1;
  case (code *)0xb4:
  case (code *)0xbc:
  case (code *)0xc4:
    goto switchD_1003e5b64_caseD_b4;
  case (code *)0xb8:
    goto switchD_1003e5b64_caseD_b8;
  case (code *)0xc0:
  case (code *)0x24:
    unaff_x21 = *(code **)(unaff_x20 + 0x10);
    param_3 = *(undefined8 *)(unaff_x20 + 0x18);
    unaff_x25 = unaff_x20;
switchD_1003e5b64_caseD_c9:
    unaff_x19 = 0;
    FUN_1003cff30(0,unaff_x21,param_3);
    unaff_x20 = *(long *)(unaff_x19 + -8);
    unaff_x27 = (ulong)*(byte *)(unaff_x20 + 0x50);
    unaff_x28 = unaff_x27 + 0x20 & (unaff_x27 ^ 0xffffffffffffffff);
    unaff_x26 = unaff_x25 + unaff_x28;
    DVar6.unknown = *(undefined **)(unaff_x26 + 8);
switchD_1003e5b64_caseD_2c:
    _swift_bridgeObjectRelease(DVar6.unknown);
    DVar6.unknown = *(undefined **)(unaff_x26 + 0x10);
switchD_1003e5b64_caseD_77:
    _swift_bridgeObjectRelease(DVar6.unknown);
switchD_1003e5b64_caseD_54:
    if (*(long *)(unaff_x26 + 0x20) != 0) {
      _swift_release(*(undefined8 *)(unaff_x26 + 0x28));
    }
switchD_1003e5b64_caseD_6c:
    if (*(long *)(unaff_x26 + 0x38) != 0) {
      _swift_release(*(undefined8 *)(unaff_x26 + 0x40));
    }
switchD_1003e5b64_caseD_8c:
    pcVar10 = *(code **)(unaff_x26 + 0x48);
switchD_1003e5b64_caseD_73:
    if (pcVar10 != (code *)0x0) {
switchD_1003e5b64_caseD_94:
      _swift_release(*(undefined8 *)(unaff_x26 + 0x50));
    }
    pcVar10 = *(code **)(unaff_x26 + 0x58);
switchD_1003e5b64_caseD_34:
    if (pcVar10 != (code *)0x0) {
      _swift_release(*(undefined8 *)(unaff_x26 + 0x60));
    }
switchD_1003e5b64_caseD_7d:
    pcVar10 = (code *)(long)*(int *)(unaff_x19 + 0x4c);
    pcVar12 = *(code **)(*(long *)(unaff_x21 + -8) + 8);
switchD_1003e5b64_caseD_9b:
    pcVar9 = unaff_x21;
    DVar6.unknown = pcVar10 + unaff_x26;
switchD_1003e5b64_caseD_3c:
    (*pcVar12)(DVar6.unknown,pcVar9);
switchD_1003e5b64_caseD_b4:
    _swift_release(*(undefined8 *)(unaff_x26 + *(int *)(unaff_x19 + 0x50)));
    unaff_x21 = (code *)(long)*(int *)(unaff_x19 + 0x54);
    DVar6.unknown = &DAT_10055c948;
    pcVar9 = (code *)&DAT_100435000;
switchD_1003e5b64_caseD_44:
    pcVar9 = pcVar9 + 0x240;
switchD_1003e5b64_caseD_5b:
    FUN_100002f94(DVar6.unknown,pcVar9);
switchD_1003e5b64_caseD_8f:
    pcVar3 = unaff_x21 + unaff_x26;
    pcVar9 = (code *)DVar6.unknown;
switchD_1003e5b64_caseD_58:
    DVar6.unknown = pcVar3;
    _swift_getEnumCaseMultiPayload(DVar6.unknown,pcVar9);
switchD_1003e5b64_caseD_76:
    if ((int)DVar6.unknown == 1) {
switchD_1003e5b64_caseD_72:
      DVar6 = SwiftUI::DismissAction::typeMetadataAccessor();
switchD_1003e5b64_caseD_59:
      pcVar10 = *(code **)(DVar6.unknown + -8);
      pcVar9 = (code *)DVar6.unknown;
switchD_1003e5b64_caseD_75:
      pcVar10 = *(code **)(pcVar10 + 8);
switchD_1003e5b64_caseD_6d:
      DVar6.unknown = unaff_x21 + unaff_x26;
switchD_1003e5b64_caseD_ec:
      (*pcVar10)(DVar6.unknown,pcVar9);
switchD_1003e5b64_caseD_5a:
    }
    else {
switchD_1003e5b64_caseD_55:
      _swift_release(*(undefined8 *)(unaff_x21 + unaff_x26));
    }
    pcVar10 = (code *)(long)*(int *)(unaff_x19 + 0x58);
    goto switchD_1003e5b64_caseD_57;
  case (code *)0xc1:
  case (code *)0xdd:
    goto switchD_1003e5b64_caseD_c1;
  case (code *)0xc9:
    goto switchD_1003e5b64_caseD_c9;
  case (code *)0xd5:
switchD_1003e5b64_caseD_d5:
    _swift_bridgeObjectRelease(*(undefined8 *)(pcVar10 + 8));
    unaff_x27 = (ulong)*(int *)(unaff_x21 + 0x2c);
  case (code *)0xca:
    unaff_x24 = Foundation::Date::typeMetadataAccessor();
    unaff_x28 = *(ulong *)(unaff_x24.unknown + -8);
    pcVar10 = *(code **)(unaff_x28 + 0x30);
    DVar6.unknown = (undefined *)(unaff_x22 + unaff_x27);
    pcVar9 = (code *)0x1;
  case (code *)0xcb:
    (*pcVar10)(DVar6.unknown,pcVar9,unaff_x24.unknown);
    if ((int)DVar6.unknown == 0) {
      (**(code **)(unaff_x28 + 8))(unaff_x22 + unaff_x27,unaff_x24.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + *(int *)(unaff_x21 + 0x34) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + *(int *)(unaff_x21 + 0x3c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + *(int *)(unaff_x21 + 0x44)));
    break;
  case (code *)0xec:
    goto switchD_1003e5b64_caseD_ec;
  case (code *)0xf6:
    goto switchD_1003e5b64_caseD_f6;
  }
  goto LAB_1003e5fb4;
switchD_1003e5b64_caseD_57:
  pcVar10 = pcVar10 + unaff_x26;
switchD_1003e5b64_caseD_f6:
  DVar6.unknown = *(undefined **)pcVar10;
switchD_1003e5b64_caseD_5c:
  pcVar9 = (code *)(ulong)(byte)pcVar10[8];
switchD_1003e5b64_caseD_78:
  FUN_100047b2c(DVar6.unknown,pcVar9);
  pcVar10 = (code *)(long)*(int *)(unaff_x19 + 0x5c);
switchD_1003e5b64_caseD_6f:
  DVar6.unknown = *(undefined **)(pcVar10 + unaff_x26 + 8);
switchD_1003e5b64_caseD_7f:
  _swift_release(DVar6.unknown);
  _swift_release(*(undefined8 *)(unaff_x26 + *(int *)(unaff_x19 + 0x60) + 8));
  pcVar10 = (code *)(unaff_x26 + *(int *)(unaff_x19 + 100));
switchD_1003e5b64_caseD_4c:
  _swift_release(*(undefined8 *)(pcVar10 + 8));
  _swift_release(*(undefined8 *)(unaff_x26 + *(int *)(unaff_x19 + 0x68) + 8));
  lVar11 = unaff_x20;
  uVar4 = unaff_x27;
  uVar5 = unaff_x28;
switchD_1003e5b64_caseD_a1:
  in_stack_00000008 = uVar5;
  in_stack_00000018 = uVar4;
  unaff_x20 = unaff_x25;
  in_stack_00000010 = lVar11;
  unaff_x22 = unaff_x26 + *(int *)(unaff_x19 + 0x6c);
  unaff_x21 = (code *)0x0;
  FUN_10040211c();
  unaff_x24.unknown = *(undefined **)(*(long *)(unaff_x21 + -8) + 0x30);
  lVar11 = unaff_x22;
  (*(code *)unaff_x24.unknown)(unaff_x22,1,unaff_x21);
  in_stack_00000000 = unaff_x20;
  if ((int)lVar11 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 8));
    iVar2 = *(int *)(unaff_x21 + 0x14);
    UVar7 = Foundation::URL::typeMetadataAccessor();
    lVar13 = *(long *)(UVar7.unknown + -8);
    pcVar9 = *(code **)(lVar13 + 8);
    (*pcVar9)(unaff_x22 + iVar2,UVar7.unknown);
    iVar2 = *(int *)(unaff_x21 + 0x18);
    lVar11 = unaff_x22 + iVar2;
    (**(code **)(lVar13 + 0x30))(lVar11,1,UVar7.unknown);
    if ((int)lVar11 == 0) {
      (*pcVar9)(unaff_x22 + iVar2,UVar7.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + *(int *)(unaff_x21 + 0x1c) + 8));
    unaff_x27 = (ulong)*(int *)(unaff_x21 + 0x2c);
switchD_1003e5b64_caseD_c1:
    DVar8 = Foundation::Date::typeMetadataAccessor();
    lVar13 = *(long *)(DVar8.unknown + -8);
    lVar11 = unaff_x22 + unaff_x27;
    (**(code **)(lVar13 + 0x30))(lVar11,1,DVar8.unknown);
    if ((int)lVar11 == 0) {
      (**(code **)(lVar13 + 8))(unaff_x22 + unaff_x27,DVar8.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + *(int *)(unaff_x21 + 0x34) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + *(int *)(unaff_x21 + 0x3c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + *(int *)(unaff_x21 + 0x44)));
    in_stack_00000000 = unaff_x20;
  }
  unaff_x23 = &DAT_1005602d0;
  FUN_100002f94(&DAT_1005602d0,&DAT_100435db8);
  _swift_release(*(undefined8 *)(unaff_x22 + *(int *)(unaff_x23 + 0x1c)));
  unaff_x22 = unaff_x26 + *(int *)(unaff_x19 + 0x70);
  lVar11 = unaff_x22;
  (*(code *)unaff_x24.unknown)(unaff_x22,1,unaff_x21);
  if ((int)lVar11 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 8));
    unaff_x25 = (long)*(int *)(unaff_x21 + 0x14);
switchD_1003e5b64_caseD_b8:
    UVar7 = Foundation::URL::typeMetadataAccessor();
    lVar13 = *(long *)(UVar7.unknown + -8);
    pcVar9 = *(code **)(lVar13 + 8);
    (*pcVar9)(unaff_x22 + unaff_x25,UVar7.unknown);
    iVar2 = *(int *)(unaff_x21 + 0x18);
    lVar11 = unaff_x22 + iVar2;
    (**(code **)(lVar13 + 0x30))(lVar11,1,UVar7.unknown);
    if ((int)lVar11 == 0) {
      (*pcVar9)(unaff_x22 + iVar2,UVar7.unknown);
    }
    pcVar10 = (code *)(unaff_x22 + *(int *)(unaff_x21 + 0x1c));
    goto switchD_1003e5b64_caseD_d5;
  }
LAB_1003e5fb4:
  lVar11 = *(long *)(in_stack_00000010 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x22 + *(int *)(unaff_x23 + 0x1c)));
  puVar1 = (undefined8 *)(unaff_x26 + *(int *)(unaff_x19 + 0x74));
  _swift_release(*puVar1);
  _swift_release(puVar1[1]);
  _swift_release(*(undefined8 *)(unaff_x26 + *(int *)(unaff_x19 + 0x78) + 8));
  _swift_release(*(undefined8 *)(unaff_x26 + *(int *)(unaff_x19 + 0x7c) + 8));
  _swift_release(*(undefined8 *)(unaff_x26 + *(int *)(unaff_x19 + 0x80) + 0x10));
  lVar11 = in_stack_00000008 + lVar11 + 1;
  _swift_deallocObject(in_stack_00000000,lVar11,in_stack_00000018 | 7);
  auVar27._8_8_ = lVar11;
  auVar27._0_8_ = in_stack_00000000;
  return auVar27;
}

