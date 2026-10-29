// rea decompile_all
// name: FUN_100402e74
// address: 0x100402e74
// body: available
// range: 0x100402e74-0x1004030a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100402e74(ulong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined8 unaff_x19;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x28;
  long unaff_x29;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  
  uVar7 = 0xe200000000000000;
  puVar6 = &DAT_00006469;
  param_1 = param_1 & 0xff;
  switch(param_1) {
  default:
    uVar7 = 0xe400000000000000;
  case 0x4c:
  case 0x6a:
  case 0x72:
  case 0x82:
  case 0x8a:
  case 0x9a:
  case 0xa2:
  case 0xca:
  case 0xd2:
    puVar6 = (undefined1 *)0x7768;
  case 0x65:
    auVar8._4_4_ = 0;
    auVar8._0_4_ = (uint)puVar6 | 0x64690000;
    auVar8._8_8_ = uVar7;
    return auVar8;
  case 2:
    param_1 = 0x74;
  case 0x24:
    auVar14._8_8_ = (param_1 | 0xe900000000000000) - 1;
    auVar14._0_8_ = 0x7365726464417069;
    return auVar14;
  case 3:
    uVar7 = 0xe500000000000000;
    puVar6 = (undefined1 *)0x6c69616d65;
  case 0x1c:
    auVar16._8_8_ = uVar7;
    auVar16._0_8_ = puVar6;
    return auVar16;
  case 4:
    uVar7 = 0xe800000000000000;
    puVar6 = (undefined1 *)0x72657375;
  case 0x21:
    auVar11._0_8_ = (ulong)puVar6 | 0x656d614e00000000;
    auVar11._8_8_ = uVar7;
    return auVar11;
  case 5:
    param_1 = 0xe900000000000074;
  case 0xf2:
    uVar7 = param_1 - 0x10;
    puVar6 = (undefined1 *)0x6563696c;
  case 0x15:
    puVar6 = (undefined1 *)((ulong)puVar6 | 0x736e00000000);
  case 0x1f:
    auVar20._0_8_ = (ulong)puVar6 | 0x4965000000000000;
    auVar20._8_8_ = uVar7;
    return auVar20;
  case 6:
    uVar7 = 0xe700000000000000;
  case 0x1d:
  case 0xf8:
  case 0xfa:
    puVar6 = (undefined1 *)0x6563696c;
  case 0x2e:
  case 0xe4:
    puVar6 = (undefined1 *)((ulong)puVar6 | 0x736e00000000);
  case 0xf4:
    puVar6 = (undefined1 *)((ulong)puVar6 | 0x65000000000000);
  case 0x2b:
  case 0x2f:
  case 0xe5:
  case 0xe8:
  case 0xf5:
    auVar22._8_8_ = uVar7;
    auVar22._0_8_ = puVar6;
    return auVar22;
  case 7:
    uVar7 = 0xea00000000006573;
    puVar6 = (undefined1 *)0x6168;
  case 0x26:
    puVar6 = (undefined1 *)((ulong)puVar6 | 0x6e6563694c730000);
  case 0x1a:
    auVar17._8_8_ = uVar7;
    auVar17._0_8_ = puVar6;
    return auVar17;
  case 8:
  case 0x2c:
    auVar25._8_8_ = 0x80000001004dea70;
    auVar25._0_8_ = 0xd000000000000012;
    return auVar25;
  case 9:
    puVar6 = (undefined1 *)0x656369766564;
  case 0x17:
    auVar13._0_8_ = (ulong)puVar6 | 0x614e000000000000;
    auVar13._8_8_ = 0xea0000000000656d;
    return auVar13;
  case 10:
  case 0x31:
  case 0xe6:
  case 0xea:
    param_1 = 0x656d;
  case 0x33:
  case 0xec:
  case 0xf6:
    uVar7 = (param_1 | 0xea00000000000000) + 3;
    puVar6 = (undefined1 *)0x69766564;
  case 0xe7:
    puVar6 = (undefined1 *)((ulong)puVar6 | 0x656300000000);
  case 0xf9:
    auVar24._0_8_ = (ulong)puVar6 | 0x7954000000000000;
    auVar24._8_8_ = uVar7;
    return auVar24;
  case 0xb:
    uVar7 = 0xec0000006e6f6973;
    puVar6 = (undefined1 *)0x616d;
  case 0x3a:
  case 0x42:
  case 0x52:
  case 0x5a:
    puVar6 = (undefined1 *)((ulong)puVar6 | 0x6f630000);
  case 0x19:
    auVar10._0_8_ = (ulong)puVar6 | 0x7265567300000000;
    auVar10._8_8_ = uVar7;
    return auVar10;
  case 0xc:
    uVar7 = 0xea00000000006e6f;
    puVar6 = (undefined1 *)0x726556707061;
  case 0x1e:
  case 0x94:
  case 0xac:
  case 0xdc:
    puVar6 = (undefined1 *)((ulong)puVar6 | 0x6973000000000000);
  case 100:
  case 0xc4:
    auVar12._8_8_ = uVar7;
    auVar12._0_8_ = puVar6;
    return auVar12;
  case 0xd:
    auVar21._8_8_ = 0xe400000000000000;
    auVar21._0_8_ = 0x656c6f72;
    return auVar21;
  case 0xe:
  case 0x4a:
  case 0x62:
  case 0xc2:
    uVar7 = 0xe600000000000000;
  case 0x23:
  case 0xb2:
  case 0xba:
    puVar6 = (undefined1 *)0x736f65646976;
  case 0x20:
    auVar9._8_8_ = uVar7;
    auVar9._0_8_ = puVar6;
    return auVar9;
  case 0xf:
    uVar7 = 0xe800000000000000;
    puVar6 = (undefined1 *)0x7369;
  case 0x18:
    auVar15._0_8_ = (ulong)puVar6 | 0x64656e6e61420000;
    auVar15._8_8_ = uVar7;
    return auVar15;
  case 0x10:
  case 0x25:
    uVar7 = 0x61657263;
    break;
  case 0x11:
  case 0x2a:
  case 0xf7:
    uVar7 = 0x61647075;
    break;
  case 0x12:
  case 0x32:
  case 0xeb:
    uVar7 = 0xe90000000000006e;
  case 0x2d:
  case 0xe3:
  case 0xf3:
    auVar23._8_8_ = uVar7;
    auVar23._0_8_ = 0x6565537473726966;
    return auVar23;
  case 0x13:
    uVar7 = 0xe800000000000000;
    puVar6 = (undefined1 *)0x616c;
  case 0x51:
  case 0x69:
  case 0xc9:
    auVar26._0_8_ = (ulong)puVar6 | 0x6e65655374730000;
    auVar26._8_8_ = uVar7;
    return auVar26;
  case 0x14:
    uVar7 = 0x7472;
  case 0xe2:
    uVar7 = uVar7 | 0x64650000;
  case 0x1b:
    uVar7 = uVar7 & 0xffffffffffff | 0xee00744100000000;
    puVar6 = (undefined1 *)0x6174536c61697274;
  case 0:
  case 0x27:
    auVar19._8_8_ = uVar7;
    auVar19._0_8_ = puVar6;
    return auVar19;
  case 0x22:
    goto switchD_100402e98_caseD_22;
  case 0x30:
  case 0xe9:
switchD_100402e98_caseD_30:
    auVar18._8_8_ = uVar7 & 0xffffffffffff | 0xe900000000000000;
    auVar18._0_8_ = puVar6;
    return auVar18;
  case 0x96:
    FUN_1000036d0(&DAT_00006469,0xe200000000000000,&TargetProtocolConformanceDescriptor_100437138);
  case 0xae:
    puVar6 = (undefined1 *)(unaff_x23 + unaff_x26);
  case 0xde:
    uVar7 = unaff_x29 - 0x41;
  case 0x66:
  case 0x7e:
  case 0xc6:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x67:
  case 0x68:
  case 199:
  case 200:
    Swift::KeyedEncodingContainer::_encodeIfPresent(puVar6,uVar7);
    if (unaff_x24 == 0) {
      uVar4 = *(undefined1 *)(unaff_x23 + *(int *)(unaff_x25 + 0x2c));
      *(undefined1 *)(unaff_x29 + -0x41) = 7;
      Swift::KeyedEncodingContainer::_encode(uVar4,unaff_x29 + -0x41);
      iVar5 = *(int *)(unaff_x25 + 0x30);
      *(undefined1 *)(unaff_x29 + -0x41) = 8;
      Foundation::Date::typeMetadataAccessor();
      FUN_1000036d0(&DAT_100558e20,PTR_typeMetadataAccessor_100520b80,
                    PTR_Foundation__Foundation__Date_>Swift__Encodable_100520b90);
      Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x23 + iVar5,unaff_x29 + -0x41);
      puVar1 = (undefined8 *)(unaff_x23 + *(int *)(unaff_x25 + 0x34));
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      *(undefined1 *)(unaff_x29 + -0x41) = 9;
      Swift::KeyedEncodingContainer::_encode(uVar2,uVar3,unaff_x29 + -0x41);
      iVar5 = *(int *)(unaff_x25 + 0x38);
      *(undefined1 *)(unaff_x29 + -0x41) = 10;
      FUN_10013df18();
      Swift::KeyedEncodingContainer::_encode(unaff_x23 + iVar5,unaff_x29 + -0x41);
      puVar1 = (undefined8 *)(unaff_x23 + *(int *)(unaff_x25 + 0x3c));
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      *(undefined1 *)(unaff_x29 + -0x41) = 0xb;
      Swift::KeyedEncodingContainer::_encode(uVar2,uVar3,unaff_x29 + -0x41);
      puVar1 = (undefined8 *)(unaff_x23 + *(int *)(unaff_x25 + 0x40));
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      *(undefined1 *)(unaff_x29 + -0x41) = 0xc;
      Swift::KeyedEncodingContainer::_encodeIfPresent(uVar2,uVar3,unaff_x29 + -0x41);
      iVar5 = *(int *)(unaff_x25 + 0x44);
      *(undefined1 *)(unaff_x29 + -0x41) = 0xd;
      FUN_100407be4();
      Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x23 + iVar5,unaff_x29 + -0x41);
      *(long *)(unaff_x29 + -0x58) = (long)*(int *)(unaff_x25 + 0x48);
      *(undefined1 *)(unaff_x29 + -0x41) = 0xe;
      FUN_100002f94(&DAT_100558c48,&DAT_10042d448);
      FUN_100407c24(&DAT_100558e10,&DAT_100558e18,&TargetProtocolConformanceDescriptor_100437958,
                    PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100523b40);
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (unaff_x23 + *(long *)(unaff_x29 + -0x58),unaff_x29 + -0x41);
      uVar4 = *(undefined1 *)(unaff_x23 + *(int *)(unaff_x25 + 0x4c));
      *(undefined1 *)(unaff_x29 + -0x41) = 0xf;
      Swift::KeyedEncodingContainer::_encodeIfPresent(uVar4,unaff_x29 + -0x41);
      iVar5 = *(int *)(unaff_x25 + 0x50);
      *(undefined1 *)(unaff_x29 + -0x41) = 0x10;
      Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x23 + iVar5,unaff_x29 + -0x41);
      iVar5 = *(int *)(unaff_x25 + 0x54);
      *(undefined1 *)(unaff_x29 + -0x41) = 0x11;
      Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x23 + iVar5,unaff_x29 + -0x41);
      iVar5 = *(int *)(unaff_x25 + 0x58);
      *(undefined1 *)(unaff_x29 + -0x41) = 0x12;
      Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x23 + iVar5,unaff_x29 + -0x41);
      iVar5 = *(int *)(unaff_x25 + 0x5c);
      *(undefined1 *)(unaff_x29 + -0x41) = 0x13;
      Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x23 + iVar5,unaff_x29 + -0x41);
      iVar5 = *(int *)(unaff_x25 + 0x60);
      *(undefined1 *)(unaff_x29 + -0x41) = 0x14;
      Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x23 + iVar5,unaff_x29 + -0x41);
      (**(code **)(unaff_x28 + 8))();
    }
    else {
      (**(code **)(unaff_x28 + 8))();
    }
    auVar27._8_8_ = unaff_x19;
    auVar27._0_8_ = unaff_x22;
    return auVar27;
  }
  puVar6 = (undefined1 *)(uVar7 | 0x4164657400000000);
switchD_100402e98_caseD_22:
  uVar7 = 0x74;
  goto switchD_100402e98_caseD_30;
}

