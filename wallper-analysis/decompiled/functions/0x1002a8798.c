// rea decompile_all
// name: FUN_1002a8798
// address: 0x1002a8798
// body: available
// range: 0x1002a8798-0x1002a90ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_1002a8798(char *param_1,void *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  String *pSVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  bool bVar8;
  Encoding EVar9;
  Encoding EVar10;
  char *pcVar11;
  Index IVar12;
  Substring SVar13;
  undefined *puVar14;
  ulong uVar15;
  Substring SVar16;
  char *pcVar17;
  char *pcVar18;
  undefined *puVar19;
  void *pvVar20;
  void *pvVar21;
  void *pvVar22;
  _StringGuts _Var23;
  Index IVar24;
  Range<Index> RVar25;
  Range<Index> RVar26;
  Substring SVar27;
  long extraout_x8;
  uint uVar28;
  long lVar29;
  Index IVar30;
  ulong uVar31;
  ulong uVar32;
  String SVar33;
  Character CVar34;
  String SVar35;
  String SVar36;
  undefined8 auStack_130 [4];
  long local_110;
  void *local_108;
  uint local_fc;
  long local_f8;
  char *local_f0;
  ulong local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined *local_c8;
  ulong local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  String local_a0;
  undefined8 *local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  
  local_108 = param_2;
  EVar9 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(EVar9.unknown + -8) + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_110 = (long)&local_110 + lVar5;
  if (DAT_100559de8 != -1) {
    _swift_once(&DAT_100559de8,FUN_1002a76b0);
  }
  lVar29 = DAT_100559df0;
  if (*(long *)(DAT_100559df0 + 0x10) != 0) {
    _swift_bridgeObjectRetain(DAT_100559df0);
    pcVar11 = param_1;
    pvVar22 = local_108;
    FUN_10000464c();
    if (((ulong)pvVar22 & 1) != 0) {
      plVar1 = (long *)(*(long *)(lVar29 + 0x38) + (long)pcVar11 * 0x10);
      param_1 = (char *)*plVar1;
      local_108 = (void *)plVar1[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(lVar29);
      goto LAB_1002a8860;
    }
    _swift_bridgeObjectRelease(lVar29);
  }
  _swift_bridgeObjectRetain(local_108);
LAB_1002a8860:
  local_f8 = 0;
  lVar29 = 0;
  local_f0 = param_1;
  uVar28 = 0;
  do {
    local_fc = uVar28;
    EVar9.unknown = (undefined *)(&DAT_100559e20)[lVar29 * 2];
    puVar19 = (&PTR_s_resolvePreviewForUUID_____100559e28)[lVar29 * 2];
    EVar10.unknown = puVar19;
    _swift_bridgeObjectRetain();
    Encoding::_get_utf8(EVar10);
    lVar29 = local_f8;
    SVar33 = (extension_Foundation)::Swift::String::_init(EVar9);
    pvVar22 = SVar33.bridgeObject;
    pcVar11 = SVar33.str;
    if (lVar29 == 0) {
      local_f8 = lVar29;
      _swift_bridgeObjectRelease(puVar19);
      uVar32 = (ulong)pcVar11 & 0xffffffffffff;
      if (((ulong)pvVar22 & 0x2000000000000000) != 0) {
        uVar32 = (ulong)pvVar22 >> 0x38 & 0xf;
      }
      if (uVar32 == 0) {
        _swift_bridgeObjectRelease(pvVar22);
        uVar32 = *(ulong *)(PTR___swiftEmptyArrayStorage_100524190 + 0x10);
        puVar19 = PTR___swiftEmptyArrayStorage_100524190;
      }
      else {
        uVar31 = 0;
        uVar28 = SVar33.str._4_4_ >> 0x1b & 1;
        if (((ulong)pvVar22 & 0x1000000000000000) == 0) {
          uVar28 = 1;
        }
        uVar15 = 7;
        if (uVar28 == 0) {
          uVar15 = 0xb;
        }
        local_b8 = (char *)(uVar15 | uVar32 << 0x10);
        uVar32 = uVar32 * 4;
        local_e0 = PTR___swiftEmptyArrayStorage_100524190;
        IVar30.unknown = (undefined *)0xf;
        IVar12.unknown = IVar30.unknown;
        do {
          while( true ) {
            CVar34 = Swift::String::get_subscript(IVar12,SVar33);
            _Var23.unknown = CVar34.bridgeObject;
            if ((CVar34.str != (undefined *)0xa) ||
               (_Var23.unknown != (undefined *)0xe100000000000000)) break;
            _swift_bridgeObjectRelease(0xe100000000000000);
LAB_1002a89ec:
            if ((ulong)IVar30.unknown >> 0xe != uVar31) {
              if (uVar31 < (ulong)IVar30.unknown >> 0xe) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x1002a90e4);
                (*pcVar7)();
              }
              SVar35.bridgeObject = pcVar11;
              SVar35.str = IVar12.unknown;
              IVar24.unknown = IVar12.unknown;
              SVar36 = SVar33;
              SVar13 = Swift::String::get_subscript(IVar30.unknown,SVar35);
              puVar19 = local_e0;
              _swift_isUniquelyReferenced_nonNull_native();
              if (((ulong)puVar19 & 1) == 0) {
                puVar19 = (undefined *)0x0;
                FUN_1001c4368(0,*(long *)(local_e0 + 0x10) + 1,1);
                local_e0 = puVar19;
              }
              uVar31 = *(ulong *)(local_e0 + 0x10);
              if (*(ulong *)(local_e0 + 0x18) >> 1 <= uVar31) {
                puVar19 = (undefined *)(ulong)(1 < *(ulong *)(local_e0 + 0x18));
                FUN_1001c4368(puVar19,uVar31 + 1,1,local_e0);
                local_e0 = puVar19;
              }
              *(ulong *)(local_e0 + 0x10) = uVar31 + 1;
              *(undefined **)(local_e0 + uVar31 * 0x20 + 0x20) = SVar13.unknown;
              *(undefined **)(local_e0 + uVar31 * 0x20 + 0x28) = IVar24.unknown;
              *(String *)(local_e0 + uVar31 * 0x20 + 0x30) = SVar36;
            }
            IVar30 = Swift::String::index(IVar12,SVar33);
            uVar31 = (ulong)IVar30.unknown >> 0xe;
            IVar12 = IVar30;
            if (uVar31 == uVar32) goto LAB_1002a8a88;
          }
          bVar8 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)CVar34.str,_Var23,(_StringComparisonResult)0xa);
          _swift_bridgeObjectRelease(_Var23.unknown);
          if (bVar8) goto LAB_1002a89ec;
          IVar12 = Swift::String::index(IVar12,SVar33);
          uVar31 = (ulong)IVar12.unknown >> 0xe;
        } while (uVar31 != uVar32);
        uVar31 = (ulong)IVar30.unknown >> 0xe;
LAB_1002a8a88:
        if (uVar31 == uVar32) {
          _swift_bridgeObjectRelease(pvVar22);
          uVar32 = *(ulong *)(local_e0 + 0x10);
          puVar19 = local_e0;
        }
        else {
          if (uVar32 < uVar31) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1002a90e8);
            (*pcVar7)();
          }
          SVar36.bridgeObject = pcVar11;
          SVar36.str = local_b8;
          pcVar11 = local_b8;
          SVar13 = Swift::String::get_subscript(IVar30.unknown,SVar36);
          _swift_bridgeObjectRelease(pvVar22);
          puVar6 = local_e0;
          puVar14 = local_e0;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar19 = puVar6;
          if (((ulong)puVar14 & 1) == 0) {
            puVar19 = (undefined *)0x0;
            FUN_1001c4368(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
          }
          uVar32 = *(ulong *)(puVar19 + 0x10);
          if (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar32) {
            puVar19 = (undefined *)(ulong)(1 < *(ulong *)(puVar19 + 0x18));
            FUN_1001c4368(puVar19,uVar32 + 1,1);
          }
          *(ulong *)(puVar19 + 0x10) = uVar32 + 1;
          *(undefined **)(puVar19 + uVar32 * 0x20 + 0x20) = SVar13.unknown;
          *(char **)(puVar19 + uVar32 * 0x20 + 0x28) = pcVar11;
          *(String *)(puVar19 + uVar32 * 0x20 + 0x30) = SVar33;
          uVar32 = *(ulong *)(puVar19 + 0x10);
        }
      }
      if (uVar32 != 0) {
        uVar31 = 0;
        local_c8 = puVar19 + 0x20;
        local_e8 = uVar32;
        local_e0 = puVar19;
        do {
          if (*(ulong *)(puVar19 + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1002a90d8);
            (*pcVar7)();
          }
          puVar2 = (undefined8 *)(local_c8 + uVar31 * 0x20);
          RVar26.unknown = (undefined *)*puVar2;
          SVar13.unknown = (undefined *)puVar2[1];
          uVar4 = puVar2[2];
          pcVar11 = (char *)puVar2[3];
          _swift_bridgeObjectRetain(pcVar11);
          uVar15 = 0x23;
          FUN_1002a7ee8(0x23,0xe100000000000000,RVar26.unknown,SVar13.unknown,uVar4,pcVar11);
          pcVar18 = pcVar11;
          if ((uVar15 & 1) == 0) {
            uVar32 = (ulong)RVar26.unknown >> 0xe;
            uVar15 = (ulong)SVar13.unknown >> 0xe;
            local_c0 = uVar31;
            if (uVar32 == uVar15) {
              SVar27.unknown = SVar13.unknown;
              SVar16 = Swift::Substring::get_subscript(RVar26,SVar13);
              pcVar17 = (char *)0x0;
              FUN_1001c4368(0,1,1,PTR___swiftEmptyArrayStorage_100524190);
              uVar32 = *(ulong *)(pcVar17 + 0x10);
              pcVar18 = pcVar17;
              if (*(ulong *)(pcVar17 + 0x18) >> 1 <= uVar32) {
                pcVar18 = (char *)(ulong)(1 < *(ulong *)(pcVar17 + 0x18));
                FUN_1001c4368(pcVar18,uVar32 + 1,1,pcVar17);
              }
              *(ulong *)(pcVar18 + 0x10) = uVar32 + 1;
              *(undefined **)(pcVar18 + uVar32 * 0x20 + 0x20) = SVar16.unknown;
              *(undefined **)(pcVar18 + uVar32 * 0x20 + 0x28) = SVar13.unknown;
              *(undefined **)(pcVar18 + uVar32 * 0x20 + 0x30) = RVar26.unknown;
              *(undefined **)(pcVar18 + uVar32 * 0x20 + 0x38) = SVar27.unknown;
              _swift_bridgeObjectRelease(pcVar11);
              uVar15 = *(ulong *)(pcVar18 + 0x10);
              pcVar17 = local_f0;
              uVar32 = local_e8;
            }
            else {
              _swift_bridgeObjectRetain(pcVar11);
              local_b8 = PTR___swiftEmptyArrayStorage_100524190;
              IVar12.unknown = RVar26.unknown;
              IVar30.unknown = RVar26.unknown;
              do {
                while( true ) {
                  CVar34 = Swift::Substring::get_subscript(IVar12,(Substring)RVar26.unknown);
                  _Var23.unknown = CVar34.bridgeObject;
                  if ((CVar34.str != (undefined *)0x9) ||
                     (_Var23.unknown != (undefined *)0xe100000000000000)) break;
                  _swift_bridgeObjectRelease(0xe100000000000000);
LAB_1002a8ce0:
                  if (uVar32 < (ulong)IVar30.unknown >> 0xe) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x1002a90dc);
                    (*pcVar7)();
                  }
                  IVar24.unknown = IVar12.unknown;
                  RVar25.unknown = RVar26.unknown;
                  SVar27.unknown = SVar13.unknown;
                  puStack_d0 = (undefined *)
                               Swift::Substring::get_subscript(IVar30.unknown,IVar12.unknown);
                  pcVar18 = local_b8;
                  local_d8 = RVar25.unknown;
                  _swift_isUniquelyReferenced_nonNull_native();
                  if (((ulong)pcVar18 & 1) == 0) {
                    pcVar18 = (char *)0x0;
                    FUN_1001c4368(0,*(long *)(local_b8 + 0x10) + 1,1);
                    local_b8 = pcVar18;
                  }
                  uVar32 = *(ulong *)(local_b8 + 0x10);
                  if (*(ulong *)(local_b8 + 0x18) >> 1 <= uVar32) {
                    pcVar18 = (char *)(ulong)(1 < *(ulong *)(local_b8 + 0x18));
                    FUN_1001c4368(pcVar18,uVar32 + 1,1,local_b8);
                    local_b8 = pcVar18;
                  }
                  *(ulong *)(local_b8 + 0x10) = uVar32 + 1;
                  *(undefined **)(local_b8 + uVar32 * 0x20 + 0x20) = puStack_d0;
                  *(undefined **)(local_b8 + uVar32 * 0x20 + 0x28) = IVar24.unknown;
                  *(undefined **)(local_b8 + uVar32 * 0x20 + 0x30) = local_d8;
                  *(undefined **)(local_b8 + uVar32 * 0x20 + 0x38) = SVar27.unknown;
                  IVar12 = Swift::Substring::index(IVar12,(Substring)RVar26.unknown);
                  uVar32 = (ulong)IVar12.unknown >> 0xe;
                  IVar30 = IVar12;
                  if (uVar32 == uVar15) goto LAB_1002a8db4;
                }
                bVar8 = Swift::_stringCompareWithSmolCheck
                                  ((_StringGuts)CVar34.str,_Var23,(_StringComparisonResult)0x9);
                _swift_bridgeObjectRelease(_Var23.unknown);
                if (bVar8) goto LAB_1002a8ce0;
                IVar12 = Swift::Substring::index(IVar12,(Substring)RVar26.unknown);
                uVar32 = (ulong)IVar12.unknown >> 0xe;
              } while (uVar32 != uVar15);
LAB_1002a8db4:
              if (uVar15 < (ulong)IVar30.unknown >> 0xe) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x1002a90e0);
                (*pcVar7)();
              }
              SVar27.unknown = SVar13.unknown;
              SVar16 = Swift::Substring::get_subscript(IVar30.unknown,SVar13);
              _swift_bridgeObjectRelease(pcVar11);
              pcVar18 = local_b8;
              _swift_isUniquelyReferenced_nonNull_native();
              if (((ulong)pcVar18 & 1) == 0) {
                pcVar18 = (char *)0x0;
                FUN_1001c4368(0,*(long *)(local_b8 + 0x10) + 1,1);
                local_b8 = pcVar18;
              }
              uVar32 = local_e8;
              pcVar17 = local_f0;
              uVar31 = *(ulong *)(local_b8 + 0x10);
              if (*(ulong *)(local_b8 + 0x18) >> 1 <= uVar31) {
                pcVar18 = (char *)(ulong)(1 < *(ulong *)(local_b8 + 0x18));
                FUN_1001c4368(pcVar18,uVar31 + 1,1,local_b8);
                local_b8 = pcVar18;
              }
              pcVar18 = local_b8;
              *(ulong *)(local_b8 + 0x10) = uVar31 + 1;
              *(undefined **)(local_b8 + uVar31 * 0x20 + 0x20) = SVar16.unknown;
              *(undefined **)(local_b8 + uVar31 * 0x20 + 0x28) = SVar13.unknown;
              *(undefined **)(local_b8 + uVar31 * 0x20 + 0x30) = RVar26.unknown;
              *(undefined **)(local_b8 + uVar31 * 0x20 + 0x38) = SVar27.unknown;
              _swift_bridgeObjectRelease(pcVar11);
              uVar15 = *(ulong *)(pcVar18 + 0x10);
            }
            uVar31 = local_c0;
            puVar19 = local_e0;
            if (uVar15 < 3) goto LAB_1002a8b4c;
            uVar15 = *(ulong *)(pcVar18 + 0x60);
            FUN_1002a80dc(uVar15,*(undefined8 *)(pcVar18 + 0x68),*(undefined8 *)(pcVar18 + 0x70),
                          *(undefined8 *)(pcVar18 + 0x78),pcVar17,local_108);
            if ((uVar15 & 1) == 0) goto LAB_1002a8b4c;
            SVar33 = *(String *)(pcVar18 + 0x40);
            uVar28 = (uint)*(undefined8 *)(pcVar18 + 0x50);
            uVar4 = *(undefined8 *)(pcVar18 + 0x58);
            _swift_bridgeObjectRetain(uVar4);
            _swift_bridgeObjectRelease(pcVar18);
            SVar33 = Swift::String::__fromSubstring(SVar33);
            pcVar11 = SVar33.str;
            _swift_bridgeObjectRelease(uVar4);
            FUN_1002a85b4(pcVar11,SVar33.bridgeObject);
            _swift_bridgeObjectRelease(SVar33.bridgeObject);
            pvVar22 = local_108;
            uVar31 = local_c0;
            if ((uVar28 & 0xff) != 1) {
              local_80 = 0x2f;
              uStack_78 = 0xe100000000000000;
              local_90 = &local_80;
              _swift_bridgeObjectRetain(local_108);
              pvVar20 = (void *)0x7fffffffffffffff;
              FUN_1001b49f4(0x7fffffffffffffff,1,FUN_100138104,&local_a0,pcVar17,pvVar22);
              if (*(long *)((long)pvVar20 + 0x10) == 0) {
                _swift_bridgeObjectRelease();
                local_a0.bridgeObject = pvVar22;
                local_a0.str = pcVar17;
              }
              else {
                pSVar3 = (String *)((long)pvVar20 + *(long *)((long)pvVar20 + 0x10) * 0x20);
                SVar33 = *pSVar3;
                pvVar21 = pSVar3[1].bridgeObject;
                _swift_bridgeObjectRetain_n(pvVar21,2);
                _swift_bridgeObjectRelease(pvVar20);
                local_a0 = Swift::String::__fromSubstring(SVar33);
                _swift_bridgeObjectRelease(pvVar22);
                puVar19 = local_e0;
                _swift_bridgeObjectRelease_n(pvVar21,2);
                pvVar20 = pvVar21;
              }
              pvVar22 = local_a0.bridgeObject;
              local_80 = 0x5f;
              uStack_78 = 0xe100000000000000;
              local_b0 = 0x20;
              uStack_a8 = 0xe100000000000000;
              FUN_100026df4();
              *(void **)((long)auStack_130 + lVar5 + 0x10) = pvVar20;
              *(void **)((long)auStack_130 + lVar5 + 0x18) = pvVar20;
              *(undefined **)((long)auStack_130 + lVar5) =
                   PTR___type_metadata_for_Swift_String_100523a98;
              *(void **)((long)auStack_130 + lVar5 + 8) = pvVar20;
              (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                        (&local_80,&local_b0,0,0,0,1,PTR___type_metadata_for_Swift_String_100523a98,
                         PTR___type_metadata_for_Swift_String_100523a98);
              _swift_bridgeObjectRelease(pvVar22);
              _swift_bridgeObjectRelease(puVar19);
              return pcVar11;
            }
          }
          else {
LAB_1002a8b4c:
            _swift_bridgeObjectRelease(pcVar18);
          }
          uVar31 = uVar31 + 1;
        } while (uVar31 != uVar32);
      }
    }
    else {
      _swift_errorRelease(lVar29);
      local_f8 = 0;
    }
    _swift_bridgeObjectRelease(puVar19);
    lVar29 = 1;
    uVar28 = 1;
    if ((local_fc & 1) != 0) {
      _swift_bridgeObjectRelease(local_108);
      return (char *)0x0;
    }
  } while( true );
}

