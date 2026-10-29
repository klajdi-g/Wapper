// rea decompile_all
// name: FUN_100402278
// address: 0x100402278
// body: available
// range: 0x100402278-0x1004023af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100402278(ulong param_1)

{
  undefined1 in_ZR;
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  Hasher in_x12;
  undefined *puVar7;
  undefined *in_x13;
  char *in_x14;
  undefined *in_x15;
  char *in_x16;
  long *unaff_x19;
  undefined *unaff_x20;
  long unaff_x22;
  ContiguousArray unaff_x25;
  undefined1 *unaff_x27;
  ulong unaff_x28;
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
  String SVar23;
  undefined8 in_stack_00000008;
  undefined *in_stack_00000010;
  ulong in_stack_00000018;
  
  puVar2 = (undefined1 *)0xe600000000000000;
  ppuVar1 = (undefined **)0x736569766f4d;
  puVar3 = (undefined *)(param_1 & 0xff);
  uVar4 = 0x436ef8;
  pcVar6 = (char *)(ulong)(byte)puVar3[0x100436ef8];
  pcVar5 = (char *)((long)pcVar6 * 4 + 0x1004022a8);
  puVar7 = in_x12.unknown;
  switch(puVar3) {
  default:
    puVar2 = (undefined1 *)0xe800000000000000;
  case (undefined *)0x5a:
  case (undefined *)0x78:
  case (undefined *)0x80:
  case (undefined *)0x90:
  case (undefined *)0x98:
  case (undefined *)0xa8:
  case (undefined *)0xb0:
  case (undefined *)0xd8:
  case (undefined *)0xe0:
    ppuVar1 = (undefined **)0x7247;
  case (undefined *)0x73:
    ppuVar1 = (undefined **)((ulong)ppuVar1 & 0xffff00000000ffff | 0x696870610000);
  case (undefined *)0x1e:
  case (undefined *)0x33:
    auVar8._0_8_ = (ulong)ppuVar1 | 0x7363000000000000;
    auVar8._8_8_ = puVar2;
    return auVar8;
  case (undefined *)0x2:
    auVar13._8_8_ = 0xe500000000000000;
    auVar13._0_8_ = 0x73656d6147;
    return auVar13;
  case (undefined *)0x3:
  case (undefined *)0x2c:
  case (undefined *)0xa2:
  case (undefined *)0xba:
  case (undefined *)0xea:
    puVar2 = (undefined1 *)0xe400000000000000;
  case (undefined *)0x72:
  case (undefined *)0xd2:
    ppuVar1 = (undefined **)0x6143;
  case (undefined *)0x17:
    auVar14._4_4_ = 0;
    auVar14._0_4_ = (uint)ppuVar1 & 0xffff | 0x73720000;
    auVar14._8_8_ = puVar2;
    return auVar14;
  case (undefined *)0x4:
    ppuVar1 = (undefined **)0x6550;
  case (undefined *)0x2e:
    ppuVar1 = (undefined **)((ulong)ppuVar1 & 0xffffffff0000ffff | 0x706f0000);
  case (undefined *)0x19:
    auVar10._0_8_ = (ulong)ppuVar1 & 0xffff0000ffffffff | 0x656c00000000;
    auVar10._8_8_ = 0xe600000000000000;
    return auVar10;
  case (undefined *)0x5:
  case (undefined *)0x10:
    puVar2 = (undefined1 *)0xe500000000000000;
  case (undefined *)0x32:
    auVar16._8_8_ = puVar2;
    auVar16._0_8_ = 0x656d696e41;
    return auVar16;
  case (undefined *)0x6:
  case (undefined *)0x26:
    puVar2 = (undefined1 *)0xe500000000000000;
    ppuVar1 = (undefined **)0x726568744f;
  case (undefined *)0x11:
    auVar18._8_8_ = puVar2;
    auVar18._0_8_ = ppuVar1;
    return auVar18;
  case (undefined *)0x7:
    puVar2 = (undefined1 *)0xe500000000000000;
  case (undefined *)0x25:
    auVar15._8_8_ = puVar2;
    auVar15._0_8_ = 0x6563617053;
    return auVar15;
  case (undefined *)0x8:
    ppuVar1 = (undefined **)0x7574614e;
  case (undefined *)0x34:
    auVar20._0_8_ = (ulong)ppuVar1 & 0xffff0000ffffffff | 0x657200000000;
    auVar20._8_8_ = 0xe600000000000000;
    return auVar20;
  case (undefined *)0x9:
  case (undefined *)0x12:
    puVar2 = (undefined1 *)0xea00000000007473;
    ppuVar1 = (undefined **)0x694d;
  case (undefined *)0x2f:
    ppuVar1 = (undefined **)((ulong)ppuVar1 & 0xffff00000000ffff | 0x696c616d696e0000);
  case (undefined *)0x1a:
    auVar12._8_8_ = puVar2;
    auVar12._0_8_ = ppuVar1;
    return auVar12;
  case (undefined *)0xa:
    puVar2 = (undefined1 *)0xe700000000000000;
    ppuVar1 = (undefined **)0x6d696e41;
  case (undefined *)0x2a:
    ppuVar1 = (undefined **)((ulong)ppuVar1 & 0xffff0000ffffffff | 0x6c6100000000);
  case (undefined *)0x15:
    auVar19._0_8_ = (ulong)ppuVar1 | 0x73000000000000;
    auVar19._8_8_ = puVar2;
    return auVar19;
  case (undefined *)0xb:
    ppuVar1 = (undefined **)0x6957;
  case (undefined *)0x1c:
  case (undefined *)0x58:
  case (undefined *)0x70:
  case (undefined *)0xd0:
    ppuVar1 = (undefined **)((ulong)ppuVar1 & 0xffffffff0000ffff | 0x746e0000);
  case (undefined *)0x31:
  case (undefined *)0xc0:
  case (undefined *)0xc8:
    auVar9._0_8_ = (ulong)ppuVar1 & 0xffff0000ffffffff | 0x726500000000;
    auVar9._8_8_ = 0xe600000000000000;
    return auVar9;
  case (undefined *)0xc:
    puVar2 = (undefined1 *)0xe800000000000000;
    ppuVar1 = (undefined **)0x6950;
  case (undefined *)0x48:
  case (undefined *)0x50:
  case (undefined *)0x60:
  case (undefined *)0x68:
    ppuVar1 = (undefined **)((ulong)ppuVar1 & 0xffffffff0000ffff | 0x65780000);
  case (undefined *)0x27:
    auVar11._0_8_ = (ulong)ppuVar1 & 0xffff0000ffffffff | 0x7472416c00000000;
    auVar11._8_8_ = puVar2;
    return auVar11;
  case (undefined *)0xd:
    puVar2 = (undefined1 *)0xe500000000000000;
    ppuVar1 = (undefined **)0x46696353;
  case (undefined *)0x1d:
    ppuVar1 = (undefined **)((ulong)ppuVar1 & 0xffff0000ffffffff | 0x6900000000);
  case (undefined *)0x0:
    auVar17._8_8_ = puVar2;
    auVar17._0_8_ = ppuVar1;
    return auVar17;
  case (undefined *)0x28:
  case (undefined *)0x1f:
  case (undefined *)0x38:
    unaff_x19 = (long *)0x0;
    unaff_x20 = (undefined *)0x6f65;
  case (undefined *)0x30:
    unaff_x20 = (undefined *)((ulong)unaff_x20 & 0xffffffffffff | 0xea00000000000000);
  case (undefined *)0x3e:
  case (undefined *)0xf7:
    Swift::Hasher::init(0x736569766f4d);
  case (undefined *)0x22:
    puVar3 = unaff_x20 + 0x304;
  case (undefined *)0xf0:
    uVar4 = (uint)unaff_x19 & 0xff;
  case (undefined *)0x29:
    pcVar5 = (char *)0x416b6f6f4263614d;
    in_ZR = uVar4 == 6;
    pcVar6 = (char *)0x614d;
  case (undefined *)0xe:
  case (undefined *)0x35:
    pcVar6 = (char *)((ulong)pcVar6 | 0x42630000);
  case (undefined *)0x13:
    pcVar6 = (char *)((ulong)pcVar6 | 0x4e6b6f6f00000000);
    in_x12.unknown = (undefined *)0xe700000000000000;
    in_x13 = (undefined *)0x6e6b6e55;
  case (undefined *)0x23:
    in_x13 = (undefined *)((ulong)in_x13 & 0xffff0000ffffffff | 0x776f00000000);
  case (undefined *)0x2d:
    puVar7 = in_x12.unknown;
    if (!(bool)in_ZR) {
      pcVar6 = (char *)((ulong)in_x13 & 0xffffffffffff | 0x6e000000000000);
    }
  case (undefined *)0x1b:
    in_x12.unknown = unaff_x20;
    if (!(bool)in_ZR) {
      in_x12.unknown = puVar7;
    }
    in_ZR = uVar4 == 4;
    in_x13 = (undefined *)0xe90000000000006f;
  case (undefined *)0x14:
    in_x14 = (char *)0x614d;
  case (undefined *)0x2b:
    in_x14 = (char *)((ulong)in_x14 & 0xffff00000000ffff | 0x757453630000);
  case (undefined *)0x3c:
  case (undefined *)0xf2:
    in_x14 = (char *)((ulong)in_x14 & 0xffffffffffff | 0x6964000000000000);
    in_x15 = (undefined *)0xe600000000000000;
  case (undefined *)0x39:
  case (undefined *)0x3d:
  case (undefined *)0xf3:
  case (undefined *)0xf6:
    in_x16 = (char *)0x614d;
  case (undefined *)0x20:
  case (undefined *)0x40:
  case (undefined *)0xf9:
    if (!(bool)in_ZR) {
      in_x14 = (char *)((ulong)in_x16 & 0xffff00000000ffff | 0x6f7250630000);
    }
  case (undefined *)0x3b:
  case (undefined *)0xf1:
    if (!(bool)in_ZR) {
      in_x13 = in_x15;
    }
    if (uVar4 < 6) {
      in_x12.unknown = in_x13;
      pcVar6 = in_x14;
    }
    in_ZR = uVar4 == 2;
  case (undefined *)0x18:
  case (undefined *)0x3f:
  case (undefined *)0xf4:
  case (undefined *)0xf8:
    in_x13 = (undefined *)0xe400000000000000;
  case (undefined *)0x41:
  case (undefined *)0xfa:
    in_x14 = (char *)0x63614d69;
    in_x15 = (undefined *)0xe700000000000000;
    in_x16 = (char *)0x614d;
  case (undefined *)0xf5:
    in_x16 = (char *)((ulong)in_x16 & 0xffff | 0x696e694d630000);
  case (undefined *)0x16:
  case (undefined *)0x3a:
    if (!(bool)in_ZR) {
      in_x13 = in_x15;
      in_x14 = in_x16;
    }
    in_x15 = unaff_x20 + 0xd;
    in_x16 = (char *)0x506b6f6f4263614d;
  case (undefined *)0x21:
    in_ZR = uVar4 == 0;
    if (!(bool)in_ZR) {
      pcVar5 = in_x16;
    }
  case (undefined *)0x5f:
  case (undefined *)0x77:
  case (undefined *)0xd7:
    if (!(bool)in_ZR) {
      puVar3 = in_x15;
    }
    if (uVar4 < 2) {
      in_x13 = puVar3;
      in_x14 = pcVar5;
    }
    if (uVar4 < 4) {
      in_x12.unknown = in_x13;
      pcVar6 = in_x14;
    }
    SVar23.bridgeObject = in_x12.unknown;
    SVar23.str = pcVar6;
    Swift::String::hash((Hasher)&stack0x00000008,SVar23);
    _swift_bridgeObjectRelease();
    auVar21._0_8_ = Swift::Hasher::_finalize(in_x12);
    auVar21._8_8_ = pcVar6;
    return auVar21;
  case (undefined *)0x74:
  case (undefined *)0x8c:
  case (undefined *)0xd4:
  case (undefined *)0x5c:
  case (undefined *)0x5d:
  case (undefined *)0x5e:
  case (undefined *)0x75:
  case (undefined *)0x76:
  case (undefined *)0xd5:
  case (undefined *)0xd6:
    if (unaff_x27 != (undefined1 *)0x0) {
      ppuVar1 = (undefined **)0x0;
      FUN_100408ee4(0);
      puVar2 = unaff_x27;
    }
    goto LAB_100402718;
  case (undefined *)0xa4:
    unaff_x28 = (ulong)unaff_x27 >> 1;
    if (unaff_x27 < (undefined1 *)0x2) {
      ppuVar1 = &PTR__get__userInfo_100524000;
      goto switchD_1004022a4_caseD_bc;
    }
    ppuVar1 = (undefined **)
              Swift::ContiguousArray::_allocateBufferUninitialized(unaff_x28,unaff_x25);
    *(ulong *)((long)ppuVar1 + 0x10) = unaff_x28;
    break;
  case (undefined *)0xbc:
switchD_1004022a4_caseD_bc:
    ppuVar1 = (undefined **)ppuVar1[0x32];
  case (undefined *)0xec:
  }
  in_stack_00000010 = (undefined *)((long)ppuVar1 + unaff_x22);
  puVar2 = &stack0x00000038;
  in_stack_00000018 = unaff_x28;
  FUN_100408204(&stack0x00000010,puVar2,&stack0x00000020);
  ppuVar1[2] = (undefined *)0x0;
  _swift_release(ppuVar1);
LAB_100402718:
  *unaff_x19 = (long)unaff_x20;
  auVar22._8_8_ = puVar2;
  auVar22._0_8_ = ppuVar1;
  return auVar22;
}

