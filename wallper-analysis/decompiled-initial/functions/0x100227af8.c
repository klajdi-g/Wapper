// rea decompile_all
// name: FUN_100227af8
// address: 0x100227af8
// body: available
// range: 0x100227af8-0x1002286ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_100227af8(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  CharacterSet CVar1;
  bool bVar2;
  CharacterSet CVar3;
  long lVar4;
  _StringGuts _Var5;
  _StringGuts _Var6;
  undefined7 extraout_var;
  URL UVar7;
  CharacterSet CVar8;
  _StringGuts _Var9;
  _StringGuts _Var10;
  CharacterSet CVar11;
  void *pvVar12;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x13;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  long unaff_x21;
  long lVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  code *pcVar25;
  undefined *puVar26;
  String SVar27;
  String SVar28;
  long local_160;
  long *local_158;
  long local_150;
  undefined *local_148;
  long *local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  code *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  long local_e0;
  long local_d8;
  code *local_d0;
  undefined *local_c8;
  long local_c0;
  CharacterSet local_b8;
  long local_b0;
  undefined *local_a8;
  long local_a0;
  long local_98;
  code *local_90;
  undefined *local_88;
  undefined *local_80;
  String local_78;
  undefined *local_58;
  
  local_160 = param_4;
  local_140 = param_1;
  CVar3 = Foundation::CharacterSet::typeMetadataAccessor();
  local_b0 = *(long *)(CVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b0 + 0x40));
  puVar26 = (undefined *)((long)&local_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0;
  FUN_10040211c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar14 = (long)puVar26 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_d8 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar14 - extraout_x12;
  local_a0 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar14 - extraout_x12_00;
  local_c0 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar14 - extraout_x12_01;
  local_130 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar14 - extraout_x12_02;
  local_100 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar14 - extraout_x12_03;
  local_108 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar15 = (undefined *)(lVar14 - extraout_x12_04);
  local_148 = puVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_150 = (long)puVar15 - extraout_x12_05;
  local_58 = PTR___swiftEmptyArrayStorage_100524190;
  pcVar13 = (code *)param_3[1];
  local_138 = extraout_x13;
  if (0 < (long)pcVar13) {
    lVar14 = 0;
    local_158 = param_3;
    local_b8.unknown = puVar26;
    local_98 = lVar4;
    local_80 = CVar3.unknown;
    do {
      lVar4 = lVar14 + 1;
      lVar21 = lVar14;
      local_110 = unaff_x21;
      local_118 = lVar14;
      if (lVar4 < (long)pcVar13) {
        lVar21 = *param_3;
        puVar15 = *(undefined **)(local_138 + 0x48);
        local_f8 = pcVar13;
        FUN_10002f154(lVar21 + (long)puVar15 * lVar4,local_150);
        _Var5.unknown = (undefined *)(lVar21 + (long)puVar15 * lVar14);
        _Var9.unknown = local_148;
        local_e8 = puVar15;
        FUN_10002f154();
        FUN_10026ac6c();
        _Var6.unknown = _Var5.unknown;
        _Var10.unknown = _Var9.unknown;
        FUN_10026ac6c();
        if ((_Var5.unknown == _Var6.unknown) && (_Var9.unknown == _Var10.unknown)) {
          local_f0 = (undefined *)((ulong)local_f0 & 0xffffffff00000000);
        }
        else {
          bVar2 = Swift::_stringCompareWithSmolCheck
                            (_Var5,_Var9,(_StringComparisonResult)(__int8)_Var6.unknown);
          local_f0 = (undefined *)CONCAT44(local_f0._4_4_,(int)CONCAT71(extraout_var,bVar2));
        }
        lVar22 = local_100;
        lVar20 = local_108;
        _swift_bridgeObjectRelease(_Var9.unknown);
        _swift_bridgeObjectRelease(_Var10.unknown);
        FUN_100029548(local_148,FUN_10040211c);
        FUN_100029548(local_150,FUN_10040211c);
        puVar15 = (undefined *)0x0;
        lVar14 = local_118 + 2;
        puVar16 = (undefined *)((long)local_e8 * lVar14);
        puVar26 = puVar16 + lVar21;
        pcVar13 = (code *)((long)local_e8 * lVar4);
        UVar7.unknown = pcVar13 + lVar21;
        do {
          puVar17 = puVar15;
          puVar18 = puVar16;
          lVar4 = lVar14;
          pcVar25 = pcVar13;
          if ((long)local_f8 <= lVar14) break;
          local_e0 = lVar14;
          local_c8 = puVar26;
          local_a8 = puVar16;
          local_90 = pcVar13;
          local_88 = puVar15;
          FUN_10002f154(puVar26,lVar20);
          local_d0 = (code *)UVar7.unknown;
          FUN_10002f154(UVar7.unknown,lVar22);
          local_78 = Foundation::URL::get_lastPathComponent(UVar7);
          CVar1.unknown = local_b8.unknown;
          CVar11.unknown = local_78.bridgeObject;
          Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)local_78.str);
          FUN_100026df4();
          SVar27 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar1);
          CVar8.unknown = SVar27.bridgeObject;
          pcVar13 = *(code **)(local_b0 + 8);
          (*pcVar13)(CVar1.unknown,CVar3.unknown);
          _swift_bridgeObjectRelease();
          uVar19 = (ulong)SVar27.str & 0xffffffffffff;
          if (((ulong)CVar8.unknown & 0x2000000000000000) != 0) {
            uVar19 = (ulong)CVar8.unknown >> 0x38 & 0xf;
          }
          if (uVar19 == 0) {
            _swift_bridgeObjectRelease();
            Foundation::CharacterSet::get_whitespacesAndNewlines(CVar8);
            SVar27 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar1);
            CVar11.unknown = CVar1.unknown;
            (*pcVar13)(CVar1.unknown,local_80);
          }
          lVar22 = local_100;
          local_78 = Foundation::URL::get_lastPathComponent((URL)CVar11.unknown);
          pvVar12 = local_78.bridgeObject;
          Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)local_78.str);
          SVar28 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar1);
          CVar3.unknown = SVar28.bridgeObject;
          (*pcVar13)(CVar1.unknown,local_80);
          _swift_bridgeObjectRelease(pvVar12);
          uVar19 = (ulong)SVar28.str & 0xffffffffffff;
          if (((ulong)CVar3.unknown & 0x2000000000000000) != 0) {
            uVar19 = (ulong)CVar3.unknown >> 0x38 & 0xf;
          }
          if (uVar19 == 0) {
            _swift_bridgeObjectRelease();
            Foundation::CharacterSet::get_whitespacesAndNewlines(CVar3);
            SVar28 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar1);
            (*pcVar13)(CVar1.unknown,local_80);
          }
          lVar20 = local_108;
          if (SVar27 == SVar28) {
            uVar23 = 0;
          }
          else {
            bVar2 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)SVar27.str,(_StringGuts)SVar27.bridgeObject,
                               (_StringComparisonResult)(__int8)SVar28.str);
            uVar23 = (uint)bVar2;
          }
          _swift_bridgeObjectRelease(SVar27.bridgeObject);
          _swift_bridgeObjectRelease(SVar28.bridgeObject);
          FUN_100029548(lVar22,FUN_10040211c);
          FUN_100029548(lVar20,FUN_10040211c);
          lVar14 = local_e0 + 1;
          puVar26 = local_c8 + (long)local_e8;
          UVar7.unknown = local_d0 + local_e8;
          puVar15 = local_88 + 1;
          pcVar13 = local_90 + (long)local_e8;
          puVar16 = local_a8 + (long)local_e8;
          puVar17 = local_88;
          puVar18 = local_a8;
          CVar3.unknown = local_80;
          lVar4 = local_e0;
          pcVar25 = local_90;
        } while ((((uint)local_f0 ^ uVar23) & 1) == 0);
        lVar21 = local_118;
        param_3 = local_158;
        if (((ulong)local_f0 & 1) != 0) {
          if (lVar4 < local_118) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x1002286d4);
            (*pcVar13)();
          }
          if (local_118 < lVar4) {
            lVar14 = 0;
            lVar20 = *local_158;
            puVar15 = (undefined *)(local_118 * (long)local_e8);
            do {
              if ((undefined *)(lVar21 + lVar14) != puVar17 + lVar21 + 1) {
                if (lVar20 == 0) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x1002286f4);
                  (*pcVar13)();
                }
                puVar26 = puVar15 + lVar20;
                FUN_100007e64(puVar26,local_130,FUN_10040211c);
                if (((long)puVar15 < (long)pcVar25) || (puVar18 + lVar20 <= puVar26)) {
                  _swift_arrayInitWithTakeFrontToBack(puVar26,pcVar25 + lVar20,1,local_98);
                }
                else if (local_e8 != (undefined *)0x0) {
                  _swift_arrayInitWithTakeBackToFront(puVar26,pcVar25 + lVar20,1,local_98);
                }
                FUN_100007e64(local_130,pcVar25 + lVar20,FUN_10040211c);
                lVar21 = local_118;
              }
              puVar17 = puVar17 + -1;
              lVar14 = lVar14 + 1;
              pcVar25 = pcVar25 + -(long)local_e8;
              puVar18 = puVar18 + -(long)local_e8;
              puVar15 = puVar15 + (long)local_e8;
              param_3 = local_158;
            } while (lVar14 + lVar21 < (long)(puVar17 + lVar21 + 2));
          }
        }
      }
      lVar20 = param_3[1];
      lVar14 = lVar4;
      unaff_x21 = local_110;
      if (lVar4 < lVar20) {
        if (SBORROW8(lVar4,lVar21)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x1002286d0);
          (*pcVar13)();
        }
        if (lVar4 - lVar21 < local_160) {
          if (SCARRY8(lVar21,local_160)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x1002286d8);
            (*pcVar13)();
          }
          lVar22 = lVar21 + local_160;
          if (lVar20 <= lVar21 + local_160) {
            lVar22 = lVar20;
          }
          if (lVar22 < lVar21) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x1002286dc);
            (*pcVar13)();
          }
          if (lVar4 != lVar22) {
            local_c8 = (undefined *)*param_3;
            local_128 = *(long *)(local_138 + 0x48);
            puVar26 = local_c8 + local_128 * (lVar4 + -1);
            local_d0 = (code *)-local_128;
            puVar15 = (undefined *)(lVar21 - lVar4);
            pcVar13 = (code *)(local_c8 + lVar4 * local_128);
            lVar24 = local_a0;
            lVar20 = local_c0;
            local_120 = lVar22;
            pcVar25 = pcVar13;
            puVar16 = puVar15;
            puVar17 = puVar26;
LAB_100228278:
            do {
              local_e0 = lVar4;
              local_e8 = puVar17;
              local_f0 = puVar16;
              local_f8 = pcVar25;
              local_a8 = puVar15;
              FUN_10002f154(pcVar13,lVar20);
              UVar7.unknown = puVar26;
              FUN_10002f154(puVar26,lVar24);
              local_78 = Foundation::URL::get_lastPathComponent(UVar7);
              CVar1.unknown = local_b8.unknown;
              CVar11.unknown = local_78.bridgeObject;
              CVar8 = Foundation::CharacterSet::get_whitespacesAndNewlines
                                ((CharacterSet)local_78.str);
              FUN_100026df4();
              local_88 = CVar8.unknown;
              SVar27 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar1);
              CVar8.unknown = SVar27.bridgeObject;
              pcVar25 = *(code **)(local_b0 + 8);
              (*pcVar25)(CVar1.unknown,CVar3.unknown);
              _swift_bridgeObjectRelease();
              uVar19 = (ulong)SVar27.str & 0xffffffffffff;
              if (((ulong)CVar8.unknown & 0x2000000000000000) != 0) {
                uVar19 = (ulong)CVar8.unknown >> 0x38 & 0xf;
              }
              local_90 = pcVar25;
              if (uVar19 == 0) {
                _swift_bridgeObjectRelease();
                Foundation::CharacterSet::get_whitespacesAndNewlines(CVar8);
                SVar27 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar1);
                CVar11.unknown = CVar1.unknown;
                (*pcVar25)(CVar1.unknown,CVar3.unknown);
              }
              _Var6.unknown = SVar27.bridgeObject;
              local_78 = Foundation::URL::get_lastPathComponent((URL)CVar11.unknown);
              pvVar12 = local_78.bridgeObject;
              Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)local_78.str);
              SVar28 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar1);
              CVar3.unknown = SVar28.bridgeObject;
              (*local_90)(CVar1.unknown,local_80);
              _swift_bridgeObjectRelease(pvVar12);
              uVar19 = (ulong)SVar28.str & 0xffffffffffff;
              if (((ulong)CVar3.unknown & 0x2000000000000000) != 0) {
                uVar19 = (ulong)CVar3.unknown >> 0x38 & 0xf;
              }
              if (uVar19 == 0) {
                _swift_bridgeObjectRelease();
                Foundation::CharacterSet::get_whitespacesAndNewlines(CVar3);
                SVar28 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar1);
                (*local_90)(CVar1.unknown,local_80);
              }
              lVar20 = local_c0;
              if (SVar27 == SVar28) {
                _swift_bridgeObjectRelease(_Var6.unknown);
                _swift_bridgeObjectRelease(SVar28.bridgeObject);
                lVar24 = local_a0;
                FUN_100029548(local_a0,FUN_10040211c);
                FUN_100029548(lVar20,FUN_10040211c);
                CVar3.unknown = local_80;
              }
              else {
                bVar2 = Swift::_stringCompareWithSmolCheck
                                  ((_StringGuts)SVar27.str,_Var6,
                                   (_StringComparisonResult)(__int8)SVar28.str);
                _swift_bridgeObjectRelease(_Var6.unknown);
                _swift_bridgeObjectRelease(SVar28.bridgeObject);
                lVar24 = local_a0;
                FUN_100029548(local_a0,FUN_10040211c);
                FUN_100029548(lVar20,FUN_10040211c);
                CVar3.unknown = local_80;
                puVar18 = local_a8;
                lVar4 = local_d8;
                if (bVar2) {
                  if (local_c8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                    pcVar13 = (code *)SoftwareBreakpoint(1,0x1002286e0);
                    (*pcVar13)();
                  }
                  FUN_100007e64(pcVar13,local_d8,FUN_10040211c);
                  _swift_arrayInitWithTakeFrontToBack(pcVar13,puVar26,1,local_98);
                  FUN_100007e64(lVar4,puVar26,FUN_10040211c);
                  puVar26 = puVar26 + (long)local_d0;
                  pcVar13 = pcVar13 + (long)local_d0;
                  puVar15 = puVar18 + 1;
                  pcVar25 = local_f8;
                  puVar16 = local_f0;
                  puVar17 = local_e8;
                  lVar4 = local_e0;
                  if (puVar18 != (undefined *)0xffffffffffffffff) goto LAB_100228278;
                }
              }
              puVar26 = local_e8 + local_128;
              puVar15 = local_f0 + -1;
              pcVar13 = local_f8 + local_128;
              lVar21 = local_118;
              param_3 = local_158;
              lVar14 = local_120;
              unaff_x21 = local_110;
              pcVar25 = pcVar13;
              puVar16 = puVar15;
              puVar17 = puVar26;
              lVar4 = local_e0 + 1;
            } while (local_e0 + 1 != local_120);
          }
        }
      }
      puVar15 = local_58;
      if (lVar14 < lVar21) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1002286c4);
        (*pcVar13)();
      }
      puVar26 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar16 = puVar15;
      if (((ulong)puVar26 & 1) == 0) {
        puVar16 = (undefined *)0x0;
        FUN_10026486c(0,*(long *)(puVar15 + 0x10) + 1,1,puVar15);
      }
      uVar19 = *(ulong *)(puVar16 + 0x10);
      puVar15 = puVar16;
      if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar19) {
        puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
        FUN_10026486c(puVar15,uVar19 + 1,1,puVar16);
      }
      *(ulong *)(puVar15 + 0x10) = uVar19 + 1;
      *(long *)(puVar15 + uVar19 * 0x10 + 0x20) = local_118;
      *(long *)(puVar15 + uVar19 * 0x10 + 0x28) = lVar14;
      local_58 = puVar15;
      if (*local_140 == 0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1002286f8);
        (*pcVar13)();
      }
      FUN_100228b04(&local_58,*local_140,param_3);
      puVar15 = local_58;
      if (unaff_x21 != 0) goto LAB_100228694;
      pcVar13 = (code *)param_3[1];
    } while (lVar14 < (long)pcVar13);
    unaff_x21 = 0;
  }
  puVar15 = local_58;
  lVar4 = *local_140;
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x100228700);
    (*pcVar13)();
  }
  puVar26 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar26 & 1) == 0) {
    FUN_100265268();
  }
  uVar19 = *(ulong *)(puVar15 + 0x10);
  while (local_58 = puVar15, 1 < uVar19) {
    lVar14 = *param_3;
    if (lVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x1002286fc);
      (*pcVar13)();
    }
    lVar22 = uVar19 - 1;
    lVar24 = *(long *)(puVar15 + uVar19 * 0x10);
    lVar21 = *(long *)(puVar15 + lVar22 * 0x10 + 0x28);
    lVar20 = *(long *)(local_138 + 0x48);
    FUN_100228d84(lVar14 + lVar20 * lVar24,
                  lVar14 + lVar20 * *(long *)(puVar15 + lVar22 * 0x10 + 0x20),
                  lVar14 + lVar20 * lVar21,lVar4);
    if (unaff_x21 != 0) break;
    if (lVar21 < lVar24) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x1002286c8);
      (*pcVar13)();
    }
    puVar26 = puVar15;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar26 & 1) == 0) {
      FUN_100265268();
    }
    if (*(ulong *)(puVar15 + 0x10) <= uVar19 - 2) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x1002286cc);
      (*pcVar13)();
    }
    *(long *)(puVar15 + uVar19 * 0x10) = lVar24;
    *(long *)((long)(puVar15 + uVar19 * 0x10) + 8) = lVar21;
    local_58 = puVar15;
    FUN_10026503c(lVar22);
    puVar15 = local_58;
    uVar19 = *(ulong *)(local_58 + 0x10);
  }
LAB_100228694:
  _swift_bridgeObjectRelease(puVar15);
  return;
}

