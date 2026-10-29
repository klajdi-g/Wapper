// rea decompile_all
// name: FUN_1001bf984
// address: 0x1001bf984
// body: available
// range: 0x1001bf984-0x1001c082f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001bf984(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char *pcVar2;
  _StringGuts _Var3;
  _StringGuts _Var4;
  String SVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  undefined *puVar9;
  Hasher HVar10;
  long lVar11;
  void *pvVar12;
  long extraout_x8;
  String *pSVar13;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar15;
  long extraout_x8_03;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong *puVar21;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  ulong uVar22;
  long lVar23;
  code *pcVar24;
  long lVar25;
  void *pvVar26;
  String SStack_1c0;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  ulong local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  ulong local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  ulong *local_128;
  ulong local_120;
  long local_118;
  long local_110;
  code *local_108;
  String *local_100;
  String *local_f8;
  long local_f0;
  ulong local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  ulong local_c0;
  code *local_b8;
  undefined1 auStack_b0 [80];
  
  lVar8 = 0;
  local_d8 = param_3;
  FUN_100266c40();
  lVar23 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar23 + 0x40));
  lVar8 = (long)&SStack_1c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_160 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = lVar8 - extraout_x12;
  local_158 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pSVar13 = (String *)(lVar8 - extraout_x12_00);
  lVar8 = 0;
  local_f8 = pSVar13;
  FUN_1001d537c();
  local_130 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_130 + 0x40));
  lVar14 = (long)pSVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_100550eb8;
  local_168 = lVar14;
  FUN_100002f94(&DAT_100550eb8,&DAT_100422a48);
  local_e0 = puVar9;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar14 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar25 = lVar14 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar25 - extraout_x12_02;
  local_d0 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - extraout_x12_03;
  puVar9 = &DAT_100550ec0;
  FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  pvVar26 = (void *)(lVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = (long)pvVar26 - extraout_x12_04;
  local_198 = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar19 - extraout_x12_05;
  local_1a0 = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar19 - extraout_x12_06;
  local_190 = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar19 - extraout_x12_07;
  local_188 = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar19 - extraout_x12_08;
  local_110 = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar20 = lVar19 - extraout_x12_09;
  local_180 = uVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = uVar20 - extraout_x12_10;
  lVar19 = 0;
  FUN_10025ee04();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
  local_118 = lVar15 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  FUN_100029504(param_1);
  local_178 = (long)*(int *)(lVar19 + 0x20);
  uVar20 = *(ulong *)(param_1 + local_178);
  local_c0 = *(ulong *)(uVar20 + 0x10);
  local_170 = param_1;
  if (local_c0 == 0) {
    uVar22 = 0;
    uVar20 = 0;
  }
  else {
    uVar22 = 0;
    local_150 = (ulong)*(byte *)(lVar23 + 0x50) + 0x20 &
                ((ulong)*(byte *)(lVar23 + 0x50) ^ 0xffffffffffffffff);
    local_e8 = uVar20 + local_150;
    local_c8 = *(long *)(lVar23 + 0x48);
    lVar19 = param_2 + 0x38;
    SStack_1c0.bridgeObject = pvVar26;
    local_1b0 = lVar14;
    local_1a8 = lVar25;
    local_148 = param_2;
    local_140 = lVar19;
    local_138 = lVar18;
    local_128 = (ulong *)(uVar20 + 0x10);
    local_120 = uVar20;
    local_f0 = lVar8;
    do {
      if (*(long *)(param_2 + 0x10) != 0) {
        pSVar13 = (String *)(local_e8 + local_c8 * uVar22);
        pcVar2 = pSVar13->str;
        puVar9 = pSVar13->bridgeObject;
        SVar5 = *pSVar13;
        Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
        HVar10.unknown = auStack_b0;
        Swift::String::hash(HVar10,SVar5);
        uVar20 = Swift::Hasher::_finalize(HVar10);
        uVar16 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
        uVar20 = uVar20 & (uVar16 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar19 + (uVar20 >> 6) * 8) >> (uVar20 & 0x3f) & 1) != 0) {
          do {
            puVar1 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar20 * 0x10);
            _Var3.unknown = (undefined *)*puVar1;
            _Var4.unknown = (undefined *)puVar1[1];
            if ((_Var3.unknown == pcVar2 && _Var4.unknown == puVar9) ||
               (bVar7 = Swift::_stringCompareWithSmolCheck
                                  (_Var3,_Var4,(_StringComparisonResult)(__int8)pcVar2), bVar7)) {
              lVar18 = local_f0;
              lVar19 = local_130;
              pcVar24 = *(code **)(local_130 + 0x38);
              local_100 = pSVar13;
              (*pcVar24)(lVar15,1,1,local_f0);
              lVar14 = local_138;
              lVar8 = (long)*(int *)(local_e0 + 0x30);
              FUN_1000087e4(local_d8,local_138,&DAT_100550ec0,&DAT_100422eb0);
              FUN_1000087e4(lVar15,lVar14 + lVar8,&DAT_100550ec0,&DAT_100422eb0);
              local_b8 = *(code **)(lVar19 + 0x30);
              lVar19 = lVar14;
              (*local_b8)(lVar14,1,lVar18);
              pcVar6 = local_b8;
              uVar20 = local_180;
              local_108 = pcVar24;
              if ((int)lVar19 == 1) {
                FUN_10002a29c(lVar15,&DAT_100550ec0,&DAT_100422eb0);
                lVar8 = lVar14 + lVar8;
                (*local_b8)(lVar8,1,lVar18);
                param_2 = local_148;
                lVar19 = local_140;
                if ((int)lVar8 != 1) {
LAB_1001bff6c:
                  FUN_10002a29c(lVar14,&DAT_100550eb8,&DAT_100422a48);
LAB_1001c0018:
                  lVar23 = local_110;
                  lVar19 = local_140;
                  param_2 = local_148;
                  FUN_1001d85e4(local_110,local_100);
                  lVar25 = local_f0;
                  (*pcVar24)(lVar23,0,1,local_f0);
                  lVar11 = local_d0;
                  lVar8 = (long)*(int *)(local_e0 + 0x30);
                  FUN_1000087e4(lVar23,local_d0,&DAT_100550ec0,&DAT_100422eb0);
                  FUN_1000087e4(local_d8,lVar11 + lVar8,&DAT_100550ec0,&DAT_100422eb0);
                  (*local_b8)(lVar11,1,lVar25);
                  lVar14 = local_d0;
                  lVar18 = local_188;
                  if ((int)lVar11 == 1) {
                    FUN_10002a29c(lVar23,&DAT_100550ec0,&DAT_100422eb0);
                    lVar8 = local_d0 + lVar8;
                    (*local_b8)(lVar8,1,lVar25);
                    lVar14 = local_d0;
                    if ((int)lVar8 == 1) goto LAB_1001c01b4;
                  }
                  else {
                    FUN_1000087e4(local_d0,local_188,&DAT_100550ec0,&DAT_100422eb0);
                    lVar14 = lVar14 + lVar8;
                    (*local_b8)(lVar14,1,lVar25);
                    lVar25 = local_d0;
                    lVar23 = local_168;
                    if ((int)lVar14 != 1) {
                      FUN_100007e64(local_d0 + lVar8,local_168,FUN_1001d537c);
                      lVar8 = lVar18;
                      FUN_1001da410(lVar18,lVar23);
                      local_100 = (String *)CONCAT44(local_100._4_4_,(int)lVar8);
                      FUN_100029548(lVar23,FUN_1001d537c);
                      FUN_10002a29c(local_110,&DAT_100550ec0,&DAT_100422eb0);
                      FUN_100029548(lVar18,FUN_1001d537c);
                      FUN_10002a29c(lVar25,&DAT_100550ec0,&DAT_100422eb0);
                      if (((ulong)local_100 & 1) != 0) goto LAB_1001c01c8;
                      break;
                    }
                    FUN_10002a29c(local_110,&DAT_100550ec0,&DAT_100422eb0);
                    FUN_100029548(lVar18,FUN_1001d537c);
                  }
                  FUN_10002a29c(local_d0,&DAT_100550eb8,&DAT_100422a48);
                  break;
                }
LAB_1001c01b4:
                FUN_10002a29c(lVar14,&DAT_100550ec0,&DAT_100422eb0);
              }
              else {
                FUN_1000087e4(lVar14,local_180,&DAT_100550ec0,&DAT_100422eb0);
                lVar19 = lVar14 + lVar8;
                (*pcVar6)(lVar19,1,lVar18);
                lVar18 = local_168;
                if ((int)lVar19 == 1) {
                  FUN_10002a29c(lVar15,&DAT_100550ec0,&DAT_100422eb0);
                  FUN_100029548(uVar20,FUN_1001d537c);
                  pcVar24 = local_108;
                  goto LAB_1001bff6c;
                }
                FUN_100007e64(lVar14 + lVar8,local_168,FUN_1001d537c);
                uVar16 = uVar20;
                FUN_1001da410(uVar20,lVar18);
                FUN_100029548(lVar18,FUN_1001d537c);
                FUN_10002a29c(lVar15,&DAT_100550ec0,&DAT_100422eb0);
                FUN_100029548(uVar20,FUN_1001d537c);
                FUN_10002a29c(lVar14,&DAT_100550ec0,&DAT_100422eb0);
                param_2 = local_148;
                pcVar24 = local_108;
                lVar19 = local_140;
                if ((uVar16 & 1) == 0) goto LAB_1001c0018;
              }
LAB_1001c01c8:
              uVar20 = uVar22 + 1;
              uVar17 = *local_128;
              puVar21 = local_128;
              uVar16 = local_120;
              if (uVar20 != uVar17) goto LAB_1001c0264;
              goto LAB_1001c01e0;
            }
            uVar20 = uVar20 + 1 & ~uVar16;
          } while ((*(ulong *)(lVar19 + (uVar20 >> 6) * 8) >> (uVar20 & 0x3f) & 1) != 0);
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != local_c0);
    uVar22 = *local_128;
    uVar20 = uVar22;
  }
  goto LAB_1001c01e8;
LAB_1001c0264:
  do {
    if (uVar17 <= uVar20) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1001c0814);
      (*pcVar6)();
    }
    local_c0 = uVar16 + local_150;
    local_d0 = uVar20 * local_c8;
    local_128 = puVar21;
    local_120 = uVar16;
    FUN_100029504(local_c0 + local_d0,local_f8,FUN_100266c40);
    if (*(long *)(param_2 + 0x10) != 0) {
      pcVar2 = local_f8->str;
      puVar9 = local_f8->bridgeObject;
      SVar5 = *local_f8;
      Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
      HVar10.unknown = auStack_b0;
      Swift::String::hash(HVar10,SVar5);
      uVar16 = Swift::Hasher::_finalize(HVar10);
      uVar17 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
      uVar16 = uVar16 & (uVar17 ^ 0xffffffffffffffff);
      if ((*(ulong *)(lVar19 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0) {
        do {
          puVar1 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar16 * 0x10);
          _Var3.unknown = (undefined *)*puVar1;
          _Var4.unknown = (undefined *)puVar1[1];
          if ((_Var3.unknown == pcVar2 && _Var4.unknown == puVar9) ||
             (bVar7 = Swift::_stringCompareWithSmolCheck
                                (_Var3,_Var4,(_StringComparisonResult)(__int8)pcVar2), bVar7)) {
            lVar23 = local_f0;
            lVar18 = local_190;
            (*local_108)(local_190,1,1,local_f0);
            lVar14 = local_1a8;
            lVar8 = (long)*(int *)(local_e0 + 0x30);
            FUN_1000087e4(local_d8,local_1a8,&DAT_100550ec0,&DAT_100422eb0);
            FUN_1000087e4(lVar18,lVar14 + lVar8,&DAT_100550ec0,&DAT_100422eb0);
            lVar25 = lVar14;
            (*local_b8)(lVar14,1,lVar23);
            lVar15 = local_1a0;
            if ((int)lVar25 == 1) {
              FUN_10002a29c(lVar18,&DAT_100550ec0,&DAT_100422eb0);
              lVar8 = lVar14 + lVar8;
              (*local_b8)(lVar8,1,lVar23);
              if ((int)lVar8 != 1) {
LAB_1001c045c:
                FUN_10002a29c(local_1a8,&DAT_100550eb8,&DAT_100422a48);
LAB_1001c0484:
                pcVar6 = local_108;
                lVar15 = local_198;
                FUN_1001d85e4(local_198,local_f8);
                (*pcVar6)(lVar15,0,1,lVar23);
                lVar14 = local_1b0;
                lVar8 = (long)*(int *)(local_e0 + 0x30);
                FUN_1000087e4(lVar15,local_1b0,&DAT_100550ec0,&DAT_100422eb0);
                FUN_1000087e4(local_d8,lVar14 + lVar8,&DAT_100550ec0,&DAT_100422eb0);
                lVar18 = lVar14;
                (*local_b8)(lVar14,1,lVar23);
                pvVar26 = SStack_1c0.bridgeObject;
                if ((int)lVar18 == 1) {
                  FUN_10002a29c(lVar15,&DAT_100550ec0,&DAT_100422eb0);
                  lVar8 = lVar14 + lVar8;
                  (*local_b8)(lVar8,1,lVar23);
                  if ((int)lVar8 == 1) goto LAB_1001c0538;
                }
                else {
                  FUN_1000087e4(lVar14,SStack_1c0.bridgeObject,&DAT_100550ec0,&DAT_100422eb0);
                  lVar15 = lVar14 + lVar8;
                  (*local_b8)(lVar15,1,lVar23);
                  lVar18 = local_168;
                  if ((int)lVar15 != 1) {
                    FUN_100007e64(lVar14 + lVar8,local_168,FUN_1001d537c);
                    pvVar12 = pvVar26;
                    FUN_1001da410(pvVar26,lVar18);
                    local_e8 = CONCAT44(local_e8._4_4_,(int)pvVar12);
                    FUN_100029548(lVar18,FUN_1001d537c);
                    FUN_10002a29c(local_198,&DAT_100550ec0,&DAT_100422eb0);
                    FUN_100029548(pvVar26,FUN_1001d537c);
                    FUN_10002a29c(lVar14,&DAT_100550ec0,&DAT_100422eb0);
                    FUN_100029548(local_f8,FUN_100266c40);
                    uVar16 = local_120;
                    if ((local_e8 & 1) != 0) goto LAB_1001c075c;
                    goto LAB_1001c05dc;
                  }
                  FUN_10002a29c(local_198,&DAT_100550ec0,&DAT_100422eb0);
                  FUN_100029548(pvVar26,FUN_1001d537c);
                }
                FUN_10002a29c(local_1b0,&DAT_100550eb8,&DAT_100422a48);
                break;
              }
LAB_1001c0538:
              FUN_10002a29c(lVar14,&DAT_100550ec0,&DAT_100422eb0);
            }
            else {
              FUN_1000087e4(lVar14,local_1a0,&DAT_100550ec0,&DAT_100422eb0);
              lVar18 = lVar14 + lVar8;
              (*local_b8)(lVar18,1,lVar23);
              lVar25 = local_168;
              if ((int)lVar18 == 1) {
                FUN_10002a29c(local_190,&DAT_100550ec0,&DAT_100422eb0);
                FUN_100029548(lVar15,FUN_1001d537c);
                goto LAB_1001c045c;
              }
              FUN_100007e64(lVar14 + lVar8,local_168,FUN_1001d537c);
              lVar8 = local_1a0;
              FUN_1001da410(local_1a0,lVar25);
              local_e8 = CONCAT44(local_e8._4_4_,(int)lVar8);
              FUN_100029548(lVar25,FUN_1001d537c);
              FUN_10002a29c(local_190,&DAT_100550ec0,&DAT_100422eb0);
              FUN_100029548(local_1a0,FUN_1001d537c);
              FUN_10002a29c(lVar14,&DAT_100550ec0,&DAT_100422eb0);
              if ((local_e8 & 1) == 0) goto LAB_1001c0484;
            }
            FUN_100029548(local_f8,FUN_100266c40);
            uVar16 = local_120;
            goto LAB_1001c075c;
          }
          uVar16 = uVar16 + 1 & ~uVar17;
        } while ((*(ulong *)(lVar19 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0);
      }
    }
    FUN_100029548(local_f8,FUN_100266c40);
LAB_1001c05dc:
    uVar17 = local_c0;
    uVar16 = local_120;
    if (uVar22 != uVar20) {
      if ((long)uVar22 < 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001c081c);
        (*pcVar6)();
      }
      uVar16 = *local_128;
      if (uVar16 <= uVar22) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001c0820);
        (*pcVar6)();
      }
      lVar14 = uVar22 * local_c8;
      FUN_100029504(local_c0 + lVar14,local_158,FUN_100266c40);
      lVar8 = local_d0;
      if ((long)uVar16 <= (long)uVar20) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001c0824);
        (*pcVar6)();
      }
      FUN_100029504(uVar17 + local_d0,local_160,FUN_100266c40);
      uVar16 = local_120;
      uVar17 = local_120;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar17 & 1) == 0) {
        FUN_100287300();
      }
      if (*(ulong *)(uVar16 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001c0828);
        (*pcVar6)();
      }
      lVar15 = uVar16 + local_150;
      FUN_1001d4cb0(local_160,lVar15 + lVar14,FUN_100266c40);
      if (*(long *)(uVar16 + 0x10) <= (long)uVar20) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001c082c);
        (*pcVar6)();
      }
      FUN_1001d4cb0(local_158,lVar15 + lVar8,FUN_100266c40);
      *(ulong *)(local_170 + local_178) = uVar16;
    }
    bVar7 = SCARRY8(uVar22,1);
    uVar22 = uVar22 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1001c0818);
      (*pcVar6)();
    }
LAB_1001c075c:
    uVar20 = uVar20 + 1;
    uVar17 = *(ulong *)(uVar16 + 0x10);
    puVar21 = (ulong *)(uVar16 + 0x10);
  } while (uVar20 != uVar17);
LAB_1001c01e0:
  if ((long)uVar20 < (long)uVar22) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1001c0830);
    (*pcVar6)();
  }
LAB_1001c01e8:
  FUN_1002886d4(local_170,uVar22,uVar20);
  FUN_100029548(local_118,FUN_10025ee04);
  return;
}

