// rea decompile_all
// name: FUN_100404ca8
// address: 0x100404ca8
// body: available
// range: 0x100404ca8-0x100404e77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100404ca8(ulong param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  Date DVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long extraout_x8;
  byte *pbVar12;
  undefined *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar13;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  long unaff_x27;
  undefined8 *unaff_x29;
  undefined8 *puVar14;
  undefined8 unaff_x30;
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
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined1 auStack_10 [16];
  
  uVar11 = 0xe200000000000000;
  puVar4 = &DAT_00006469;
  param_1 = param_1 & 0xff;
  pbVar12 = &switchD_100404ccc::switchdataD_100436f1b;
  puVar13 = unaff_x20;
  puVar14 = unaff_x29;
  switch(param_1) {
  case 0:
    goto switchD_100404ccc_caseD_0;
  default:
    uVar11 = 0xe300000000000000;
  case 0x37:
  case 0x55:
  case 0x5d:
  case 0x6d:
  case 0x75:
  case 0x85:
  case 0x8d:
  case 0xb5:
  case 0xbd:
  case 0xed:
  case 0xf5:
    puVar4 = (undefined1 *)0x6761;
switchD_100404ccc_caseD_50:
    auVar15._4_4_ = 0;
    auVar15._0_4_ = (uint)puVar4 | 0x650000;
    auVar15._8_8_ = uVar11;
    return auVar15;
  case 2:
    auVar21._8_8_ = 0xe600000000000000;
    auVar21._0_8_ = 0x644972657375;
    return auVar21;
  case 3:
    auVar23._8_8_ = 0xea0000000000656d;
    auVar23._0_8_ = 0x614e726f68747561;
    return auVar23;
  case 4:
    auVar18._8_8_ = 0xe800000000000000;
    auVar18._0_8_ = 0x79726f6765746163;
    return auVar18;
  case 5:
    uVar11 = 0xe500000000000000;
  case 0x15:
  case 0xe2:
    auVar25._8_8_ = uVar11;
    auVar25._0_8_ = 0x7377656976;
    return auVar25;
  case 6:
    auVar27._8_8_ = 0xe800000000000000;
    auVar27._0_8_ = 0x6e6f697461727564;
    return auVar27;
  case 7:
    auVar24._8_8_ = 0xe500000000000000;
    auVar24._0_8_ = 0x73656b696c;
    return auVar24;
  case 8:
  case 0xe3:
  case 0xe5:
    param_1 = 0xc22;
    pbVar12 = (byte *)0x624d;
  case 0x19:
  case 0xcf:
    pbVar12 = (byte *)((ulong)pbVar12 | 0xea00000000000000);
    goto switchD_100404ccc_caseD_df;
  case 9:
  case 0x7f:
  case 0x97:
  case 199:
  case 0xff:
    uVar11 = 0xe500000000000000;
  case 0x4f:
  case 0xaf:
    auVar20._8_8_ = uVar11;
    auVar20._0_8_ = 0x656c746974;
    return auVar20;
  case 10:
    auVar29._8_8_ = 0xea0000000000624d;
    auVar29._0_8_ = 0x657a6953656c6966;
    return auVar29;
  case 0xb:
    uVar11 = 0xe700000000000000;
    puVar4 = (undefined1 *)0x79654b656c6966;
  case 0x25:
  case 0x2d:
  case 0x3d:
  case 0x45:
    auVar17._8_8_ = uVar11;
    auVar17._0_8_ = puVar4;
    return auVar17;
  case 0xc:
    auVar19._8_8_ = 0xef79654b6567616d;
    auVar19._0_8_ = 0x4977656976657270;
    return auVar19;
  case 0xd:
    uVar11 = 0xe600000000000000;
  case 0x1b:
  case 0xd4:
    puVar4 = (undefined1 *)0x737574617473;
switchD_100404ccc_caseD_cd:
    auVar26._8_8_ = uVar11;
    auVar26._0_8_ = puVar4;
    return auVar26;
  case 0xe:
  case 0x9d:
  case 0xa5:
    uVar5 = 0xea00000000007441;
    goto LAB_100404d88;
  case 0xf:
    uVar5 = 0xee00726573557942;
LAB_100404d88:
    auVar22._8_8_ = uVar5;
    auVar22._0_8_ = 0x6465776569766572;
    return auVar22;
  case 0x10:
    uVar11 = 0xe400000000000000;
    puVar4 = (undefined1 *)0x73676174;
  case 0x35:
  case 0x4d:
  case 0xad:
    auVar16._8_8_ = uVar11;
    auVar16._0_8_ = puVar4;
    return auVar16;
  case 0x11:
    uVar11 = 0x61657263;
    break;
  case 0x12:
    uVar11 = 0x61647075;
    break;
  case 0x16:
  case 0x1a:
  case 0xd0:
  case 0xd3:
  case 0xe0:
    goto switchD_100404ccc_caseD_16;
  case 0x17:
    goto switchD_100404ccc_caseD_17;
  case 0x18:
  case 0xce:
  case 0xde:
    goto switchD_100404ccc_caseD_18;
  case 0x1c:
  case 0xd1:
  case 0xd5:
  case 0x1e:
  case 0xd7:
  case 0xe1:
    puVar14 = &stack0x00000050;
    register0x00000008 = (BADSPACEBASE *)auStack_10;
    in_stack_00000050 = unaff_x29;
    in_stack_00000058 = unaff_x30;
switchD_100404ccc_caseD_d2:
    unaff_x24 = unaff_x21;
switchD_100404ccc_caseD_e4:
    puVar13 = (undefined8 *)&DAT_00006469;
    unaff_x23 = unaff_x20;
switchD_100404ccc_caseD_17:
    unaff_x19 = &DAT_100561568;
    FUN_100002f94(&DAT_100561568,&DAT_100437af0);
    unaff_x27 = *(long *)(unaff_x19 + -8);
    param_1 = *(long *)(unaff_x27 + 0x40) + 0xf;
switchD_100404ccc_caseD_3c:
    (*(code *)PTR____chkstk_darwin_100521118)(param_1 & 0xfffffffffffffff0);
    unaff_x22 = (long)register0x00000008 - extraout_x8;
    FUN_100007bd0(puVar13,puVar13[3]);
    FUN_10040e6bc();
    Swift::Encoder::_container();
    uVar5 = *unaff_x23;
    uVar1 = unaff_x23[1];
    *(undefined1 *)((long)puVar14 + -0x41) = 0;
    Swift::KeyedEncodingContainer::_encode(uVar5,uVar1,(long)puVar14 + -0x41,unaff_x19);
    if (unaff_x24 == 0) {
      uVar5 = unaff_x23[2];
      uVar2 = *(undefined1 *)(unaff_x23 + 3);
      *(undefined1 *)((long)puVar14 + -0x41) = 1;
      Swift::KeyedEncodingContainer::_encodeIfPresent(uVar5,uVar2,(long)puVar14 + -0x41,unaff_x19);
      uVar5 = unaff_x23[4];
      uVar1 = unaff_x23[5];
      *(undefined1 *)((long)puVar14 + -0x41) = 2;
      Swift::KeyedEncodingContainer::_encodeIfPresent(uVar5,uVar1,(long)puVar14 + -0x41,unaff_x19);
      uVar5 = unaff_x23[6];
      uVar1 = unaff_x23[7];
      *(undefined1 *)((long)puVar14 + -0x41) = 3;
      Swift::KeyedEncodingContainer::_encodeIfPresent(uVar5,uVar1,(long)puVar14 + -0x41,unaff_x19);
      *(undefined1 *)((long)puVar14 + -0x41) = 4;
      FUN_10040e77c();
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (unaff_x23 + 8,(long)puVar14 + -0x41,unaff_x19,&DAT_10053f330,uVar5);
      uVar5 = unaff_x23[9];
      uVar2 = *(undefined1 *)(unaff_x23 + 10);
      *(undefined1 *)((long)puVar14 + -0x41) = 5;
      Swift::KeyedEncodingContainer::_encodeIfPresent(uVar5,uVar2,(long)puVar14 + -0x41,unaff_x19);
      uVar5 = unaff_x23[0xb];
      uVar2 = *(undefined1 *)(unaff_x23 + 0xc);
      *(undefined1 *)((long)puVar14 + -0x41) = 6;
      Swift::KeyedEncodingContainer::_encodeIfPresent(uVar5,uVar2,(long)puVar14 + -0x41,unaff_x19);
      uVar5 = unaff_x23[0xd];
      uVar2 = *(undefined1 *)(unaff_x23 + 0xe);
      *(undefined1 *)((long)puVar14 + -0x41) = 7;
      Swift::KeyedEncodingContainer::_encodeIfPresent(uVar5,uVar2,(long)puVar14 + -0x41,unaff_x19);
      uVar5 = unaff_x23[0xf];
      uVar1 = unaff_x23[0x10];
      *(undefined1 *)((long)puVar14 + -0x41) = 8;
      Swift::KeyedEncodingContainer::_encodeIfPresent(uVar5,uVar1,(long)puVar14 + -0x41,unaff_x19);
      puVar4 = (undefined1 *)unaff_x23[0x11];
      uVar11 = unaff_x23[0x12];
      *(undefined1 *)((long)puVar14 + -0x41) = 9;
      param_3 = (long)puVar14 + -0x41;
      unaff_x21 = 0;
switchD_100404ccc_caseD_81:
      Swift::KeyedEncodingContainer::_encodeIfPresent(puVar4,uVar11,param_3,unaff_x19);
      unaff_x24 = unaff_x21;
switchD_100404ccc_caseD_99:
      if (unaff_x21 == 0) {
switchD_100404ccc_caseD_c9:
        puVar4 = (undefined1 *)unaff_x23[0x13];
switchD_100404ccc_caseD_51:
        uVar11 = (ulong)*(byte *)(unaff_x23 + 0x14);
switchD_100404ccc_caseD_39:
        *(undefined1 *)((long)puVar14 + -0x41) = 10;
        Swift::KeyedEncodingContainer::_encodeIfPresent
                  (puVar4,uVar11,(long)puVar14 + -0x41,unaff_x19);
        if (unaff_x24 == 0) {
          uVar5 = unaff_x23[0x15];
          uVar1 = unaff_x23[0x16];
          *(undefined1 *)((long)puVar14 + -0x41) = 0xb;
          Swift::KeyedEncodingContainer::_encode(uVar5,uVar1,(long)puVar14 + -0x41,unaff_x19);
          uVar5 = unaff_x23[0x17];
          uVar1 = unaff_x23[0x18];
          *(undefined1 *)((long)puVar14 + -0x41) = 0xc;
          Swift::KeyedEncodingContainer::_encodeIfPresent
                    (uVar5,uVar1,(long)puVar14 + -0x41,unaff_x19);
          *(undefined1 *)((long)puVar14 + -0x41) = 0xd;
          FUN_10040e7bc();
          Swift::KeyedEncodingContainer::_encodeIfPresent
                    (unaff_x23 + 0x19,(long)puVar14 + -0x41,unaff_x19,&DAT_10053f450,uVar5);
          lVar6 = 0;
          FUN_100407bd0();
          iVar3 = *(int *)(lVar6 + 0x48);
          *(undefined1 *)((long)puVar14 + -0x41) = 0xe;
          DVar7 = Foundation::Date::typeMetadataAccessor();
          puVar8 = &DAT_100558e20;
          FUN_1000036d0(&DAT_100558e20,PTR_typeMetadataAccessor_100520b80,
                        PTR_Foundation__Foundation__Date_>Swift__Encodable_100520b90);
          Swift::KeyedEncodingContainer::_encodeIfPresent
                    ((undefined1 *)((long)unaff_x23 + (long)iVar3),(long)puVar14 + -0x41,unaff_x19,
                     DVar7.unknown,puVar8);
          puVar13 = (undefined8 *)((long)unaff_x23 + (long)*(int *)(lVar6 + 0x4c));
          uVar5 = *puVar13;
          uVar1 = puVar13[1];
          *(undefined1 *)((long)puVar14 + -0x41) = 0xf;
          Swift::KeyedEncodingContainer::_encodeIfPresent
                    (uVar5,uVar1,(long)puVar14 + -0x41,unaff_x19);
          puVar14[-0xb] = (long)*(int *)(lVar6 + 0x50);
          *(undefined1 *)((long)puVar14 + -0x41) = 0x10;
          puVar9 = &DAT_100553858;
          FUN_100002f94(&DAT_100553858,&DAT_100429e10);
          puVar10 = &DAT_1005581a8;
          FUN_100266f2c(&DAT_1005581a8,
                        PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100523aa0
                        ,PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100523b40);
          Swift::KeyedEncodingContainer::_encodeIfPresent
                    ((undefined1 *)((long)unaff_x23 + puVar14[-0xb]),(long)puVar14 + -0x41,unaff_x19
                     ,puVar9,puVar10);
          iVar3 = *(int *)(lVar6 + 0x54);
          *(undefined1 *)((long)puVar14 + -0x41) = 0x11;
          Swift::KeyedEncodingContainer::_encodeIfPresent
                    ((undefined1 *)((long)unaff_x23 + (long)iVar3),(long)puVar14 + -0x41,unaff_x19,
                     DVar7.unknown,puVar8);
          iVar3 = *(int *)(lVar6 + 0x58);
          *(undefined1 *)((long)puVar14 + -0x41) = 0x12;
          Swift::KeyedEncodingContainer::_encodeIfPresent
                    ((undefined1 *)((long)unaff_x23 + (long)iVar3),(long)puVar14 + -0x41,unaff_x19,
                     DVar7.unknown,puVar8);
          (**(code **)(unaff_x27 + 8))(unaff_x22,unaff_x19);
          goto LAB_100404f98;
        }
      }
    }
    (**(code **)(unaff_x27 + 8))(unaff_x22,unaff_x19);
LAB_100404f98:
    auVar31._8_8_ = unaff_x19;
    auVar31._0_8_ = unaff_x22;
    return auVar31;
  case 0x1d:
  case 0xd6:
    goto switchD_100404ccc_caseD_1d;
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x52:
  case 0x53:
  case 0xb2:
  case 0xb3:
    goto switchD_100404ccc_caseD_39;
  case 0x3c:
  case 0x54:
  case 0xb4:
    goto switchD_100404ccc_caseD_3c;
  case 0x50:
    goto switchD_100404ccc_caseD_50;
  case 0x51:
  case 0x69:
  case 0xb1:
    goto switchD_100404ccc_caseD_51;
  case 0x81:
    goto switchD_100404ccc_caseD_81;
  case 0x99:
    goto switchD_100404ccc_caseD_99;
  case 0xc9:
    goto switchD_100404ccc_caseD_c9;
  case 0xcd:
    goto switchD_100404ccc_caseD_cd;
  case 0xd2:
    goto switchD_100404ccc_caseD_d2;
  case 0xdd:
    goto switchD_100404ccc_caseD_dd;
  case 0xdf:
    goto switchD_100404ccc_caseD_df;
  case 0xe4:
    goto switchD_100404ccc_caseD_e4;
  }
  puVar4 = (undefined1 *)(uVar11 | 0x657400000000);
switchD_100404ccc_caseD_dd:
  puVar4 = (undefined1 *)((ulong)puVar4 | 0x4164000000000000);
  uVar11 = 0xe900000000000074;
switchD_100404ccc_caseD_0:
  auVar28._8_8_ = uVar11;
  auVar28._0_8_ = puVar4;
  return auVar28;
switchD_100404ccc_caseD_df:
  uVar11 = (ulong)pbVar12 | param_1;
switchD_100404ccc_caseD_16:
  puVar4 = (undefined1 *)0x6572;
switchD_100404ccc_caseD_1d:
  puVar4 = (undefined1 *)((ulong)puVar4 | 0x6974756c6f730000);
switchD_100404ccc_caseD_18:
  auVar30._8_8_ = uVar11;
  auVar30._0_8_ = puVar4;
  return auVar30;
}

