// rea decompile_all
// name: FUN_1003cf684
// address: 0x1003cf684
// body: available
// range: 0x1003cf684-0x1003cfaab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1003cf684(int *param_1,uint param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  DismissAction DVar14;
  URL UVar15;
  URL UVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  code *pcVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  
  lVar29 = *(long *)(param_3 + 0x10);
  lVar33 = *(long *)(lVar29 + -8);
  uVar11 = *(uint *)(lVar33 + 0x54);
  DVar14 = SwiftUI::DismissAction::typeMetadataAccessor();
  lVar32 = *(long *)(DVar14.unknown + -8);
  uVar20 = *(ulong *)(lVar32 + 0x40);
  if (uVar20 < 9) {
    uVar20 = 8;
  }
  UVar15 = Foundation::URL::typeMetadataAccessor();
  lVar31 = *(long *)(UVar15.unknown + -8);
  uVar12 = *(uint *)(lVar31 + 0x54);
  uVar4 = 0;
  if (uVar12 != 0) {
    uVar4 = uVar12 - 1;
  }
  UVar16.unknown = (undefined *)Foundation::Date::typeMetadataAccessor();
  lVar21 = *(long *)(UVar16.unknown + -8);
  uVar17 = *(uint *)(lVar21 + 0x54);
  uVar6 = 0;
  if (uVar17 != 0) {
    uVar6 = uVar17 - 1;
  }
  uVar5 = uVar12;
  if (uVar12 <= uVar6) {
    uVar5 = uVar6;
  }
  uVar6 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar6 = 0x7fffffff;
  }
  uVar7 = uVar6 - 1;
  if (uVar6 - 1 <= uVar11) {
    uVar7 = uVar11;
  }
  uVar8 = uVar7;
  if (uVar7 < 0x80000000) {
    uVar8 = 0x7fffffff;
  }
  lVar28 = 7;
  if (uVar12 == 0) {
    lVar28 = 8;
  }
  lVar3 = 0x17;
  if (uVar17 == 0) {
    lVar3 = 0x18;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar19 = (ulong)*(byte *)(lVar33 + 0x50);
  lVar1 = *(long *)(lVar33 + 0x40) + 7;
  uVar23 = (ulong)*(uint *)(lVar32 + 0x50) & 0xf8;
  uVar18 = (uVar23 ^ 0xffffffffffffffff) & 0xfffffffffffffff8;
  lVar32 = uVar23 + 0x17;
  uVar27 = (ulong)*(byte *)(lVar31 + 0x50);
  uVar24 = (ulong)*(byte *)(lVar21 + 0x50);
  uVar25 = (ulong)(*(byte *)(lVar31 + 0x50) | *(byte *)(lVar21 + 0x50));
  uVar23 = uVar25 | 7;
  lVar2 = uVar25 + 0x10;
  lVar26 = *(long *)(lVar31 + 0x40);
  if (uVar8 <= param_2 && param_2 - uVar8 != 0) {
    lVar28 = (lVar3 + *(long *)(lVar21 + 0x40) +
              (uVar24 + (lVar28 + lVar26 +
                         (lVar26 + uVar27 + (uVar27 + 0x10 & (uVar27 ^ 0xffffffffffffffff)) &
                         (uVar27 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x29 &
              (uVar24 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x48;
    uVar25 = (lVar28 + (lVar28 + (lVar2 + (uVar20 + (lVar32 + (lVar1 + (uVar19 + 0x68 &
                                                                       (uVar19 ^ 0xffffffffffffffff)
                                                                       ) & 0xfffffffffffffff8) &
                                                    uVar18) + 0x18 & 0xfffffffffffffff8) + 0x30 |
                                 uVar23) + 8 & (uVar23 ^ 0xffffffffffffffff)) + 0x1f &
             0xfffffffffffffff8) + 0x38;
    uVar30 = 2;
    uVar10 = uVar30;
    if ((uVar25 & 0xfffffff8) == 0) {
      uVar10 = (param_2 - uVar8) + 1;
    }
    if (0xffff < uVar10) {
      uVar30 = 4;
    }
    if (uVar10 < 0x100) {
      uVar30 = 1;
    }
    uVar9 = 0;
    if (1 < uVar10) {
      uVar9 = uVar30;
    }
    if (uVar9 < 2) {
      if ((uVar9 != 0) &&
         (uVar30 = (uint)*(byte *)((long)param_1 + uVar25), *(byte *)((long)param_1 + uVar25) != 0))
      {
LAB_1003cf9b4:
        iVar13 = uVar30 - 1;
        if ((uVar25 & 0xfffffff8) != 0) {
          iVar13 = *param_1;
        }
        return (ulong)(uVar8 + iVar13 + 1);
      }
    }
    else {
      if (uVar9 == 2) {
        uVar30 = (uint)*(ushort *)((long)param_1 + uVar25);
      }
      else {
        uVar30 = *(uint *)((long)param_1 + uVar25);
      }
      if (uVar30 != 0) goto LAB_1003cf9b4;
    }
  }
  if (-1 < (int)uVar7) {
    uVar20 = *(ulong *)(param_1 + 2);
    if (0xfffffffe < uVar20) {
      uVar20 = 0xffffffff;
    }
    return (ulong)((int)uVar20 + 1);
  }
  uVar19 = ((long)param_1 + 0x17U & 0xfffffffffffffff8) + uVar19 + 0x58 & ~uVar19;
  if (uVar11 == uVar8) {
                    /* WARNING: Could not recover jumptable at 0x0001003cf930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar33 + 0x30))(uVar19,uVar11,lVar29);
    return uVar19;
  }
  uVar20 = lVar2 + (uVar20 + (lVar32 + (lVar1 + uVar19 & 0xfffffffffffffff8) & uVar18) + 8 &
                   0xfffffffffffffff8) + 0x40 & ~uVar23;
  if (-1 < (int)uVar5) {
    uVar20 = *(ulong *)(uVar20 + 8);
    if (0xfffffffe < uVar20) {
      uVar20 = 0xffffffff;
    }
    iVar13 = (int)uVar20 + 1;
    goto LAB_1003cfa84;
  }
  uVar20 = uVar27 + 0x10 + uVar20 & ~uVar27;
  if (uVar12 == uVar6) {
    (**(code **)(lVar31 + 0x30))(uVar20,uVar12,UVar15.unknown);
    iVar13 = (int)uVar20;
    goto LAB_1003cfa84;
  }
  uVar20 = lVar26 + uVar27 + uVar20 & ~uVar27;
  if (uVar4 == uVar6) {
    if (uVar12 < 2) {
LAB_1003cfa40:
      iVar13 = 0;
      goto LAB_1003cfa84;
    }
    pcVar22 = *(code **)(lVar31 + 0x30);
    UVar16 = UVar15;
    uVar17 = uVar12;
  }
  else {
    if (uVar17 < 2) goto LAB_1003cfa40;
    if (uVar12 == 0) {
      lVar26 = lVar26 + 1;
    }
    pcVar22 = *(code **)(lVar21 + 0x30);
    uVar20 = uVar24 + (uVar20 + lVar26 + 7 & 0xfffffffffffffff8) + 0x29 & ~uVar24;
  }
  (*pcVar22)(uVar20,uVar17,UVar16.unknown);
  iVar13 = 0;
  if ((int)uVar20 != 0) {
    iVar13 = (int)uVar20 + -1;
  }
LAB_1003cfa84:
  uVar11 = 0;
  if (iVar13 != 0) {
    uVar11 = iVar13 - 1;
  }
  return (ulong)uVar11;
}

