// rea decompile_all
// name: FUN_1003cfaac
// address: 0x1003cfaac
// body: available
// range: 0x1003cfaac-0x1003cff2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003cfaac(ulong *param_1,ulong param_2,uint param_3,long param_4)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  DismissAction DVar13;
  URL UVar14;
  URL UVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  uint uVar27;
  long lVar28;
  uint uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  
  puVar19 = *(undefined **)(param_4 + 0x10);
  lVar32 = *(long *)(puVar19 + -8);
  uVar10 = *(uint *)(lVar32 + 0x54);
  DVar13 = SwiftUI::DismissAction::typeMetadataAccessor();
  lVar30 = *(long *)(DVar13.unknown + -8);
  uVar20 = *(ulong *)(lVar30 + 0x40);
  if (uVar20 < 9) {
    uVar20 = 8;
  }
  UVar14 = Foundation::URL::typeMetadataAccessor();
  lVar31 = *(long *)(UVar14.unknown + -8);
  uVar11 = *(uint *)(lVar31 + 0x54);
  uVar4 = 0;
  if (uVar11 != 0) {
    uVar4 = uVar11 - 1;
  }
  UVar15.unknown = (undefined *)Foundation::Date::typeMetadataAccessor();
  lVar21 = *(long *)(UVar15.unknown + -8);
  uVar18 = *(uint *)(lVar21 + 0x54);
  uVar6 = 0;
  if (uVar18 != 0) {
    uVar6 = uVar18 - 1;
  }
  uVar5 = uVar11;
  if (uVar11 <= uVar6) {
    uVar5 = uVar6;
  }
  uVar6 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar6 = 0x7fffffff;
  }
  uVar7 = uVar10;
  if (uVar10 <= uVar6 - 1) {
    uVar7 = uVar6 - 1;
  }
  uVar8 = uVar7;
  if (uVar7 < 0x80000000) {
    uVar8 = 0x7fffffff;
  }
  lVar33 = 7;
  if (uVar11 == 0) {
    lVar33 = 8;
  }
  uVar16 = (ulong)*(byte *)(lVar32 + 0x50);
  lVar1 = *(long *)(lVar32 + 0x40) + 7;
  uVar23 = (ulong)*(uint *)(lVar30 + 0x50) & 0xf8;
  uVar17 = (uVar23 ^ 0xffffffffffffffff) & 0xfffffffffffffff8;
  lVar30 = uVar23 + 0x17;
  uVar26 = (ulong)*(byte *)(lVar31 + 0x50);
  uVar24 = (ulong)*(byte *)(lVar21 + 0x50);
  uVar23 = (ulong)(*(byte *)(lVar31 + 0x50) | *(byte *)(lVar21 + 0x50));
  uVar22 = uVar23 | 7;
  lVar2 = uVar23 + 0x10;
  lVar25 = *(long *)(lVar31 + 0x40);
  uVar23 = lVar33 + lVar25 +
           (lVar25 + uVar26 + (uVar26 + 0x10 & (uVar26 ^ 0xffffffffffffffff)) &
           (uVar26 ^ 0xffffffffffffffff));
  lVar33 = *(long *)(lVar21 + 0x40);
  if (uVar18 == 0) {
    lVar33 = lVar33 + 1;
  }
  lVar28 = (lVar33 + (uVar24 + 9 + (uVar23 & 0xfffffffffffffff8) + 0x20 &
                     (uVar24 ^ 0xffffffffffffffff)) + 0x17 & 0xfffffffffffffff8) + 0x48;
  sVar3 = (lVar28 + (lVar28 + (lVar2 + (uVar20 + (lVar30 + (lVar1 + (uVar16 + 0x68 &
                                                                    (uVar16 ^ 0xffffffffffffffff)) &
                                                           0xfffffffffffffff8) & uVar17) + 0x18 &
                                       0xfffffffffffffff8) + 0x30 | uVar22) + 8 &
                    (uVar22 ^ 0xffffffffffffffff)) + 0x1f & 0xfffffffffffffff8) + 0x38;
  uVar29 = 0;
  if (uVar8 <= param_3 && param_3 - uVar8 != 0) {
    uVar27 = 2;
    uVar9 = uVar27;
    if ((int)sVar3 == 0) {
      uVar9 = (param_3 - uVar8) + 1;
    }
    if (0xffff < uVar9) {
      uVar27 = 4;
    }
    if (uVar9 < 0x100) {
      uVar27 = 1;
    }
    uVar29 = 0;
    if (1 < uVar9) {
      uVar29 = uVar27;
    }
  }
  uVar27 = (uint)param_2;
  iVar12 = uVar27 - uVar8;
  if (uVar27 < uVar8 || iVar12 == 0) {
    if (uVar29 < 2) {
      if (uVar29 != 0) {
        *(undefined1 *)((long)param_1 + sVar3) = 0;
      }
    }
    else if (uVar29 == 2) {
      *(undefined2 *)((long)param_1 + sVar3) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar3) = 0;
    }
    if (uVar27 != 0) {
      if ((int)uVar7 < 0) {
        uVar16 = ((long)param_1 + 0x17U & 0xfffffffffffffff8) + uVar16 + 0x58 & ~uVar16;
        if (uVar10 == uVar8) {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar32 + 0x38);
          UVar15.unknown = puVar19;
          uVar18 = uVar10;
LAB_1003cfd94:
                    /* WARNING: Could not recover jumptable at 0x0001003cfdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(uVar16,param_2,uVar18,UVar15.unknown);
          return;
        }
        param_1 = (ulong *)(lVar2 + (uVar20 + (lVar30 + (lVar1 + uVar16 & 0xfffffffffffffff8) &
                                              uVar17) + 8 & 0xfffffffffffffff8) + 0x40 & ~uVar22);
        if (uVar6 <= uVar27) {
          uVar10 = (((int)(uVar24 + 9) + ((uint)uVar23 & 0xfffffff8) + 0x20 & (uint)~uVar24) +
                    (int)lVar33 + 0x17 & 0xfffffff8) + 0x41;
          _bzero(param_1,(ulong)uVar10);
          if (3 < uVar10) {
            *(uint *)param_1 = uVar27 - uVar6;
            return;
          }
          *(char *)param_1 = (char)(uVar27 - uVar6);
          return;
        }
        uVar10 = uVar27 + 1;
        if ((int)uVar5 < 0) {
          uVar16 = uVar26 + 0x10 + (long)param_1 & ~uVar26;
          if (uVar11 == uVar6) {
            UNRECOVERED_JUMPTABLE = *(code **)(lVar31 + 0x38);
          }
          else {
            uVar16 = lVar25 + uVar26 + uVar16 & ~uVar26;
            if (uVar4 != uVar6) {
              if (uVar18 < 2) {
                return;
              }
              if (uVar11 == 0) {
                lVar25 = lVar25 + 1;
              }
              UNRECOVERED_JUMPTABLE = *(code **)(lVar21 + 0x38);
              uVar16 = uVar24 + (uVar16 + lVar25 + 7 & 0xfffffffffffffff8) + 0x29 & ~uVar24;
              param_2 = (ulong)(uVar27 + 2);
              goto LAB_1003cfd94;
            }
            if (uVar11 < 2) {
              return;
            }
            UNRECOVERED_JUMPTABLE = *(code **)(lVar31 + 0x38);
            uVar10 = uVar27 + 2;
          }
          param_2 = (ulong)uVar10;
          UVar15 = UVar14;
          uVar18 = uVar11;
          goto LAB_1003cfd94;
        }
        if (-1 < (int)uVar10) {
          param_1[1] = param_2 & 0xffffffff;
          return;
        }
        uVar27 = uVar27 + 0x80000001;
      }
      else {
        if (-1 < (int)uVar27) {
          param_1[1] = (ulong)(uVar27 - 1);
          return;
        }
        uVar27 = uVar27 & 0x7fffffff;
      }
      *param_1 = (ulong)uVar27;
      param_1[1] = 0;
    }
  }
  else {
    if ((int)sVar3 != 0) {
      iVar12 = 1;
      _bzero(param_1,sVar3);
      *(uint *)param_1 = uVar27 + ~uVar8;
    }
    if (uVar29 < 2) {
      if (uVar29 != 0) {
        *(char *)((long)param_1 + sVar3) = (char)iVar12;
      }
    }
    else if (uVar29 == 2) {
      *(short *)((long)param_1 + sVar3) = (short)iVar12;
    }
    else {
      *(int *)((long)param_1 + sVar3) = iVar12;
    }
  }
  return;
}

