// rea decompile_all
// name: FUN_1000d5ab4
// address: 0x1000d5ab4
// body: available
// range: 0x1000d5ab4-0x1000d6d1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000d5ab4(char *param_1,CharacterSet param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  Calendar CVar4;
  CharacterSet CVar5;
  CharacterSet CVar6;
  Calendar CVar7;
  Calendar CVar8;
  char *pcVar9;
  __int64 _Var10;
  code *pcVar11;
  char *pcVar12;
  code *pcVar13;
  uint uVar14;
  char *pcVar16;
  _StringObject _Var17;
  String *pSVar18;
  byte *pbVar19;
  byte *pbVar20;
  void *pvVar21;
  long extraout_x8;
  long extraout_x8_00;
  byte *pbVar22;
  char *pcVar23;
  ulong uVar24;
  UnsafeBufferPointer<__int8> UVar25;
  _StringObject _Var26;
  long lVar27;
  ulong uVar28;
  code *pcVar29;
  undefined8 uVar30;
  code *pcVar31;
  ulong uVar32;
  undefined1 *puVar33;
  ulong *puVar34;
  long lVar35;
  void *pvVar36;
  CharacterSet in;
  ulong uVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  undefined1 auVar48 [16];
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  undefined1 auStack_1e0 [12];
  uint local_1d4;
  undefined *local_1d0;
  code *local_1c8;
  CharacterSet local_1c0;
  undefined *local_1b8;
  String local_1b0;
  String local_1a0;
  code **local_190;
  code *pcStack_188;
  undefined8 local_180;
  code *local_170;
  undefined *puStack_168;
  char *local_160;
  void *pvStack_158;
  void *pvVar15;
  
  CVar4 = Foundation::Calendar::typeMetadataAccessor();
  lVar35 = *(long *)(CVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar35 + 0x40));
  puVar33 = auStack_1e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  CVar5 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar27 = *(long *)(CVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar27 + 0x40));
  in.unknown = puVar33 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  SVar40.bridgeObject = param_2.unknown;
  SVar40.str = param_1;
  SVar38 = Swift::String::lowercased(SVar40);
  _swift_bridgeObjectRelease();
  local_1a0 = SVar38;
  CVar6 = Foundation::CharacterSet::get_whitespaces(param_2);
  FUN_100026df4();
  local_1d0 = CVar6.unknown;
  local_1b0 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
  local_1c8 = *(code **)(lVar27 + 8);
  local_1c0.unknown = in.unknown;
  local_1b8 = CVar5.unknown;
  (*local_1c8)(in.unknown,CVar5.unknown);
  _swift_bridgeObjectRelease(SVar38.bridgeObject);
  CVar7.unknown = &DAT_100551470;
  FUN_100002f94(&DAT_100551470,&DAT_100423138);
  _swift_initStackObject();
  *(undefined8 *)(CVar7.unknown + 0x18) = 0x10;
  *(undefined8 *)(CVar7.unknown + 0x10) = 8;
  CVar8 = Foundation::Calendar::get_current(CVar7);
  SVar38 = Foundation::Calendar::get_pmSymbol(CVar8);
  CVar8.unknown = SVar38.bridgeObject;
  pcVar31 = *(code **)(lVar35 + 8);
  (*pcVar31)(puVar33,CVar4.unknown);
  SVar38 = Swift::String::lowercased(SVar38);
  pvVar36 = SVar38.bridgeObject;
  _swift_bridgeObjectRelease();
  *(String *)(CVar7.unknown + 0x20) = SVar38;
  CVar7.unknown[0x30] = 1;
  CVar8 = Foundation::Calendar::get_current(CVar8);
  SVar39 = Foundation::Calendar::get_amSymbol(CVar8);
  pvVar21 = local_1b0.bridgeObject;
  (*pcVar31)(puVar33,CVar4.unknown);
  SVar40 = Swift::String::lowercased(SVar39);
  pvVar15 = SVar40.bridgeObject;
  _swift_bridgeObjectRelease(SVar39.bridgeObject);
  *(String *)(CVar7.unknown + 0x38) = SVar40;
  CVar7.unknown[0x48] = 0;
  *(undefined8 *)(CVar7.unknown + 0x50) = 0x2e6d2e70;
  *(undefined8 *)(CVar7.unknown + 0x58) = 0xe400000000000000;
  CVar7.unknown[0x60] = 1;
  *(undefined8 *)(CVar7.unknown + 0x68) = 0x2e6d2e61;
  *(undefined8 *)(CVar7.unknown + 0x70) = 0xe400000000000000;
  CVar7.unknown[0x78] = 0;
  *(undefined8 *)(CVar7.unknown + 0x80) = 0x6d70;
  *(undefined8 *)(CVar7.unknown + 0x88) = 0xe200000000000000;
  CVar7.unknown[0x90] = 1;
  *(undefined8 *)(CVar7.unknown + 0x98) = 0x6d61;
  *(undefined8 *)(CVar7.unknown + 0xa0) = 0xe200000000000000;
  CVar7.unknown[0xa8] = 0;
  *(undefined8 *)(CVar7.unknown + 0xb0) = 0x70;
  *(undefined8 *)(CVar7.unknown + 0xb8) = 0xe100000000000000;
  CVar7.unknown[0xc0] = 1;
  pcVar12 = local_1b0.str;
  SVar39.bridgeObject = pvVar21;
  SVar39.str = local_1b0.str;
  *(undefined8 *)(CVar7.unknown + 200) = 0x61;
  *(undefined8 *)(CVar7.unknown + 0xd0) = 0xe100000000000000;
  uVar32 = (ulong)SVar38.str & 0xffffffffffff;
  if (((ulong)pvVar36 & 0x2000000000000000) != 0) {
    uVar32 = (ulong)pvVar36 >> 0x38 & 0xf;
  }
  CVar7.unknown[0xd8] = 0;
  if (uVar32 == 0) {
LAB_1000d5d1c:
    uVar32 = (ulong)SVar40.str & 0xffffffffffff;
    if (((ulong)pvVar15 & 0x2000000000000000) != 0) {
      uVar32 = (ulong)pvVar15 >> 0x38 & 0xf;
    }
    if (uVar32 != 0) {
      _swift_bridgeObjectRetain(pvVar15);
      SVar50.bridgeObject = pvVar21;
      SVar50.str = pcVar12;
      CVar5.unknown = pvVar21;
      bVar3 = Swift::String::hasSuffix(SVar40,SVar50);
      if (!bVar3) {
        _swift_bridgeObjectRelease(pvVar15);
        goto LAB_1000d5d68;
      }
      local_1d4 = 0;
      SVar38 = SVar40;
      goto LAB_1000d5d90;
    }
LAB_1000d5d68:
    SVar38.bridgeObject = (void *)0xe400000000000000;
    SVar38.str = (char *)0x2e6d2e70;
    SVar41.bridgeObject = (void *)0xe400000000000000;
    SVar41.str = (char *)0x2e6d2e70;
    SVar51.bridgeObject = pvVar21;
    SVar51.str = pcVar12;
    CVar5.unknown = pvVar21;
    bVar3 = Swift::String::hasSuffix(SVar41,SVar51);
    if (bVar3) goto LAB_1000d5d88;
    SVar43.bridgeObject = (void *)0xe400000000000000;
    SVar43.str = (char *)0x2e6d2e61;
    SVar52.bridgeObject = pvVar21;
    SVar52.str = pcVar12;
    CVar5.unknown = pvVar21;
    bVar3 = Swift::String::hasSuffix(SVar43,SVar52);
    if (bVar3) {
      local_1d4 = 0;
      SVar38.bridgeObject = (void *)0xe400000000000000;
      SVar38.str = (char *)0x2e6d2e61;
      goto LAB_1000d5d90;
    }
    pvVar36 = (void *)0xe200000000000000;
    SVar38.bridgeObject = (void *)0xe200000000000000;
    SVar38.str = (char *)0x6d70;
    SVar44.bridgeObject = (void *)0xe200000000000000;
    SVar44.str = (char *)0x6d70;
    SVar53.bridgeObject = pvVar21;
    SVar53.str = pcVar12;
    CVar5.unknown = pvVar21;
    bVar3 = Swift::String::hasSuffix(SVar44,SVar53);
    if (bVar3) goto LAB_1000d5d88;
    pcVar9 = (char *)0x6d61;
    SVar45.bridgeObject = (void *)0xe200000000000000;
    SVar45.str = (char *)0x6d61;
    SVar54.bridgeObject = pvVar21;
    SVar54.str = pcVar12;
    CVar5.unknown = pvVar21;
    bVar3 = Swift::String::hasSuffix(SVar45,SVar54);
    if (bVar3) {
LAB_1000d62f0:
      SVar38.bridgeObject = pvVar36;
      SVar38.str = pcVar9;
      local_1d4 = 0;
      goto LAB_1000d5d90;
    }
    pvVar36 = (void *)0xe100000000000000;
    SVar38.bridgeObject = (void *)0xe100000000000000;
    SVar38.str = (char *)0x70;
    SVar46.bridgeObject = (void *)0xe100000000000000;
    SVar46.str = (char *)0x70;
    SVar55.bridgeObject = pvVar21;
    SVar55.str = pcVar12;
    CVar5.unknown = pvVar21;
    bVar3 = Swift::String::hasSuffix(SVar46,SVar55);
    if (bVar3) goto LAB_1000d5d88;
    pcVar9 = (char *)0x61;
    SVar47.bridgeObject = (void *)0xe100000000000000;
    SVar47.str = (char *)0x61;
    SVar56.bridgeObject = pvVar21;
    SVar56.str = pcVar12;
    CVar5.unknown = pvVar21;
    bVar3 = Swift::String::hasSuffix(SVar47,SVar56);
    if (bVar3) goto LAB_1000d62f0;
    _swift_release(CVar7.unknown);
    local_1d4 = 2;
  }
  else {
    _swift_bridgeObjectRetain(pvVar36);
    SVar49.bridgeObject = pvVar21;
    SVar49.str = pcVar12;
    CVar5.unknown = pvVar21;
    bVar3 = Swift::String::hasSuffix(SVar38,SVar49);
    if (!bVar3) {
      _swift_bridgeObjectRelease(pvVar36);
      goto LAB_1000d5d1c;
    }
LAB_1000d5d88:
    local_1d4 = 1;
LAB_1000d5d90:
    _swift_bridgeObjectRetain(pvVar21);
    pcVar9 = (char *)Swift::String::get_count(SVar38);
    _swift_bridgeObjectRelease(SVar38.bridgeObject);
    FUN_1000d5a28(pcVar9,pcVar12,pvVar21);
    _swift_bridgeObjectRelease(pvVar21);
    SVar42.bridgeObject = pcVar12;
    SVar42.str = pcVar9;
    SVar38 = Swift::String::__fromSubstring(SVar42);
    _swift_bridgeObjectRelease();
    CVar6.unknown = local_1c0.unknown;
    local_1a0 = SVar38;
    Foundation::CharacterSet::get_whitespaces(CVar5);
    SVar39 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar6);
    _swift_bridgeObjectRelease(pvVar21);
    _swift_release(CVar7.unknown);
    (*local_1c8)(CVar6.unknown,local_1b8);
    _swift_bridgeObjectRelease(SVar38.bridgeObject);
  }
  pvVar36 = SVar39.bridgeObject;
  _swift_bridgeObjectRetain(pvVar36);
  lVar27 = 0x7fffffffffffffff;
  pvVar21 = pvVar36;
  FUN_100032718(0x7fffffffffffffff,1,SVar39.str);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_1b0.bridgeObject;
  local_1b0 = (String)(auVar1 << 0x40);
  uVar32 = *(ulong *)(lVar27 + 0x10);
  if (uVar32 == 0) {
    _swift_bridgeObjectRelease(lVar27);
    pcVar12 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = pvVar36;
    local_1b0 = (String)(auVar2 << 0x40);
    local_1a0.str = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1001c5bc4(0,uVar32,0);
    uVar37 = 0;
    puVar34 = (ulong *)(lVar27 + 0x38);
    pcVar12 = local_1a0.str;
    do {
      if (*(ulong *)(lVar27 + 0x10) <= uVar37) {
                    /* WARNING: Does not return */
        pcVar31 = (code *)SoftwareBreakpoint(1,0x1000d6bd8);
        (*pcVar31)();
      }
      SVar38 = *(String *)(puVar34 + -3);
      pvVar36 = (void *)*puVar34;
      _swift_bridgeObjectRetain(pvVar36);
      pvVar21 = pvVar36;
      SVar38 = Swift::String::__fromSubstring(SVar38);
      _swift_bridgeObjectRelease(pvVar36);
      local_1a0.str = pcVar12;
      uVar28 = *(ulong *)(pcVar12 + 0x10);
      if (*(ulong *)(pcVar12 + 0x18) >> 1 <= uVar28) {
        FUN_1001c5bc4(1 < *(ulong *)(pcVar12 + 0x18),uVar28 + 1,1);
        pcVar12 = local_1a0.str;
      }
      uVar37 = uVar37 + 1;
      *(ulong *)(pcVar12 + 0x10) = uVar28 + 1;
      *(String *)(pcVar12 + uVar28 * 0x10 + 0x20) = SVar38;
      puVar34 = puVar34 + 4;
    } while (uVar32 != uVar37);
    _swift_bridgeObjectRelease(lVar27);
    pvVar36 = local_1b0.bridgeObject;
  }
  if (*(long *)(pcVar12 + 0x10) == 1) {
    _Var26.unknown = ((String *)(pcVar12 + 0x20))->str;
    pcVar9 = *(char **)(pcVar12 + 0x28);
    SVar38 = *(String *)(pcVar12 + 0x20);
    _swift_bridgeObjectRetain(pcVar9);
    _swift_bridgeObjectRelease(pcVar12);
    _Var10 = Swift::String::get_count(SVar38);
    if (_Var10 - 1U < 2) {
      pcVar16 = (char *)((ulong)_Var26.unknown & 0xffffffffffff);
      pcVar23 = (char *)((ulong)pcVar9 >> 0x38 & 0xf);
      pcVar12 = pcVar16;
      if (((ulong)pcVar9 & 0x2000000000000000) != 0) {
        pcVar12 = pcVar23;
      }
      if (pcVar12 == (char *)0x0) {
        _swift_bridgeObjectRelease(pcVar9);
        _swift_bridgeObjectRelease(pvVar36);
LAB_1000d6744:
        _Var26.unknown = (code *)0xffffffffffffffff;
      }
      else {
        if (((ulong)pcVar9 >> 0x3c & 1) == 0) {
          if (((ulong)pcVar9 >> 0x3d & 1) == 0) {
            if (((ulong)_Var26.unknown >> 0x3c & 1) == 0) {
              pcVar16 = pcVar9;
              UVar25 = Swift::_StringObject::get_sharedUTF8(_Var26);
            }
            else {
              UVar25.unknown = (undefined *)(((ulong)pcVar9 & 0xfffffffffffffff) + 0x20);
            }
            if (*UVar25.unknown == 0x2b) {
              if ((long)pcVar16 < 1) {
                    /* WARNING: Does not return */
                pcVar31 = (code *)SoftwareBreakpoint(1,0x1000d6cfc);
                (*pcVar31)();
              }
              pcVar16 = pcVar16 + -1;
              if (pcVar16 == (char *)0x0) goto LAB_1000d671c;
              _Var26.unknown = (code *)0x0;
              do {
                UVar25.unknown = UVar25.unknown + 1;
                if (((9 < (byte)*UVar25.unknown - 0x30) ||
                    (lVar27 = (long)_Var26.unknown * 10,
                    SUB168(SEXT816((long)_Var26.unknown) * SEXT816(10),8) != lVar27 >> 0x3f)) ||
                   (uVar32 = (ulong)(byte)((byte)*UVar25.unknown - 0x30),
                   _Var26.unknown = (undefined *)(lVar27 + uVar32), SCARRY8(lVar27,uVar32)))
                goto LAB_1000d671c;
                uVar14 = 0;
                pcVar16 = pcVar16 + -1;
              } while (pcVar16 != (char *)0x0);
            }
            else if (*UVar25.unknown == 0x2d) {
              if ((long)pcVar16 < 1) {
                    /* WARNING: Does not return */
                pcVar31 = (code *)SoftwareBreakpoint(1,0x1000d6cf4);
                (*pcVar31)();
              }
              pcVar16 = pcVar16 + -1;
              if (pcVar16 == (char *)0x0) {
LAB_1000d671c:
                _Var26.unknown = (code *)0x0;
                uVar14 = 1;
              }
              else {
                _Var26.unknown = (code *)0x0;
                do {
                  UVar25.unknown = UVar25.unknown + 1;
                  if (((9 < (byte)*UVar25.unknown - 0x30) ||
                      (lVar27 = (long)_Var26.unknown * 10,
                      SUB168(SEXT816((long)_Var26.unknown) * SEXT816(10),8) != lVar27 >> 0x3f)) ||
                     (uVar32 = (ulong)(byte)((byte)*UVar25.unknown - 0x30),
                     _Var26.unknown = (undefined *)(lVar27 - uVar32), SBORROW8(lVar27,uVar32)))
                  goto LAB_1000d671c;
                  uVar14 = 0;
                  pcVar16 = pcVar16 + -1;
                } while (pcVar16 != (char *)0x0);
              }
            }
            else {
              if (pcVar16 == (char *)0x0) goto LAB_1000d671c;
              _Var26.unknown = (code *)0x0;
              if (UVar25.unknown == (byte *)0x0) {
                uVar14 = 0;
              }
              else {
                do {
                  if (((9 < (byte)*UVar25.unknown - 0x30) ||
                      (lVar27 = (long)_Var26.unknown * 10,
                      SUB168(SEXT816((long)_Var26.unknown) * SEXT816(10),8) != lVar27 >> 0x3f)) ||
                     (uVar32 = (ulong)(byte)((byte)*UVar25.unknown - 0x30),
                     _Var26.unknown = (undefined *)(lVar27 + uVar32), SCARRY8(lVar27,uVar32)))
                  goto LAB_1000d671c;
                  uVar14 = 0;
                  pcVar16 = pcVar16 + -1;
                  UVar25.unknown = UVar25.unknown + 1;
                } while (pcVar16 != (char *)0x0);
              }
            }
          }
          else {
            local_1a0.bridgeObject = (void *)((ulong)pcVar9 & 0xffffffffffffff);
            local_1a0.str = _Var26.unknown;
            uVar14 = (uint)_Var26.unknown & 0xff;
            if (uVar14 == 0x2b) {
              if (pcVar23 == (char *)0x0) {
                    /* WARNING: Does not return */
                pcVar31 = (code *)SoftwareBreakpoint(1,0x1000d6d00);
                (*pcVar31)();
              }
              pcVar23 = pcVar23 + -1;
              if (pcVar23 == (char *)0x0) goto LAB_1000d671c;
              _Var26.unknown = (code *)0x0;
              pbVar19 = (byte *)((ulong)&local_1a0 | 1);
              do {
                if (((9 < *pbVar19 - 0x30) ||
                    (lVar27 = (long)_Var26.unknown * 10,
                    SUB168(SEXT816((long)_Var26.unknown) * SEXT816(10),8) != lVar27 >> 0x3f)) ||
                   (uVar32 = (ulong)(byte)(*pbVar19 - 0x30),
                   _Var26.unknown = (undefined *)(lVar27 + uVar32), SCARRY8(lVar27,uVar32)))
                goto LAB_1000d671c;
                uVar14 = 0;
                pcVar23 = pcVar23 + -1;
                pbVar19 = pbVar19 + 1;
              } while (pcVar23 != (char *)0x0);
            }
            else if (uVar14 == 0x2d) {
              if (pcVar23 == (char *)0x0) {
                    /* WARNING: Does not return */
                pcVar31 = (code *)SoftwareBreakpoint(1,0x1000d6cf8);
                (*pcVar31)();
              }
              pcVar23 = pcVar23 + -1;
              if (pcVar23 == (char *)0x0) goto LAB_1000d671c;
              _Var26.unknown = (code *)0x0;
              pbVar19 = (byte *)((ulong)&local_1a0 | 1);
              do {
                if (((9 < *pbVar19 - 0x30) ||
                    (lVar27 = (long)_Var26.unknown * 10,
                    SUB168(SEXT816((long)_Var26.unknown) * SEXT816(10),8) != lVar27 >> 0x3f)) ||
                   (uVar32 = (ulong)(byte)(*pbVar19 - 0x30),
                   _Var26.unknown = (undefined *)(lVar27 - uVar32), SBORROW8(lVar27,uVar32)))
                goto LAB_1000d671c;
                uVar14 = 0;
                pcVar23 = pcVar23 + -1;
                pbVar19 = pbVar19 + 1;
              } while (pcVar23 != (char *)0x0);
            }
            else {
              if (pcVar23 == (char *)0x0) goto LAB_1000d671c;
              _Var26.unknown = (code *)0x0;
              pSVar18 = &local_1a0;
              do {
                uVar14 = *(byte *)&pSVar18->str - 0x30;
                if (((9 < uVar14) ||
                    (lVar27 = (long)_Var26.unknown * 10,
                    SUB168(SEXT816((long)_Var26.unknown) * SEXT816(10),8) != lVar27 >> 0x3f)) ||
                   (uVar32 = (ulong)(byte)uVar14, _Var26.unknown = (undefined *)(lVar27 + uVar32),
                   SCARRY8(lVar27,uVar32))) goto LAB_1000d671c;
                uVar14 = 0;
                pcVar23 = pcVar23 + -1;
                pSVar18 = (String *)((long)&pSVar18->str + 1);
              } while (pcVar23 != (char *)0x0);
            }
          }
        }
        else {
          pcVar12 = pcVar9;
          FUN_10029b7b0(_Var26.unknown,pcVar9,10);
          uVar14 = (uint)pcVar12;
        }
        _swift_bridgeObjectRelease(pcVar9);
        _swift_bridgeObjectRelease(pvVar36);
        if ((uVar14 & 0xff) == 1) goto LAB_1000d6744;
      }
      pcVar29 = (code *)0x0;
      pcVar31 = (code *)_Var26.unknown;
    }
    else {
      pcVar12 = pcVar9;
      local_1b0.bridgeObject = pvVar36;
      if (_Var10 == 3) {
        _swift_bridgeObjectRetain(pcVar9);
        pcVar29 = (code *)0x1;
        _Var17.unknown = _Var26.unknown;
        pcVar23 = pcVar9;
        FUN_1001d39ac();
        pvVar36 = pvVar21;
        _swift_bridgeObjectRelease(pcVar9);
        pcVar16 = local_1b0.str;
        if (((ulong)pcVar29 ^ (ulong)_Var17.unknown) >> 0xe == 0) {
          _swift_bridgeObjectRelease(pvVar21);
LAB_1000d63b4:
          pcVar31 = (code *)0xffffffffffffffff;
        }
        else {
          local_190 = &local_170;
          pcStack_188 = FUN_10029bfbc;
          local_180 = 0;
          pcVar31 = FUN_1000d7c50;
          pSVar18 = &local_1a0;
          pvVar36 = pvVar21;
          local_170 = pcVar29;
          puStack_168 = _Var17.unknown;
          local_160 = pcVar23;
          pvStack_158 = pvVar21;
          FUN_10029bf04(FUN_1000d7c50,pSVar18,pcVar23);
          uVar14 = (uint)pSVar18;
          local_1b0.str = pcVar16;
          if ((uVar14 & 0xff00) == 0x100) {
            pvVar36 = pvVar21;
            FUN_10029b6a4(pcVar29,_Var17.unknown,pcVar23,pvVar21,10);
            uVar14 = (uint)_Var17.unknown;
            pcVar31 = pcVar29;
          }
          _swift_bridgeObjectRelease(pvVar21);
          if ((uVar14 & 0xff) == 1) goto LAB_1000d63b4;
        }
        pcVar11 = (code *)0x2;
        FUN_10020cba0();
        _swift_bridgeObjectRelease(pcVar9);
        uVar32 = (ulong)pcVar11 ^ (ulong)_Var26.unknown;
      }
      else {
        if (_Var10 != 4) goto LAB_1000d6484;
        _swift_bridgeObjectRetain(pcVar9);
        pcVar29 = (code *)0x2;
        _Var17.unknown = _Var26.unknown;
        pcVar23 = pcVar9;
        FUN_1001d39ac();
        pvVar36 = pvVar21;
        _swift_bridgeObjectRelease(pcVar9);
        pcVar16 = local_1b0.str;
        if (((ulong)pcVar29 ^ (ulong)_Var17.unknown) >> 0xe == 0) {
          _swift_bridgeObjectRelease(pvVar21);
LAB_1000d618c:
          pcVar31 = (code *)0xffffffffffffffff;
        }
        else {
          local_190 = &local_170;
          pcStack_188 = FUN_10029bfbc;
          local_180 = 0;
          pcVar31 = FUN_1000d6d3c;
          pSVar18 = &local_1a0;
          pvVar36 = pvVar21;
          local_170 = pcVar29;
          puStack_168 = _Var17.unknown;
          local_160 = pcVar23;
          pvStack_158 = pvVar21;
          FUN_10029bf04(FUN_1000d6d3c,pSVar18,pcVar23);
          uVar14 = (uint)pSVar18;
          local_1b0.str = pcVar16;
          if ((uVar14 & 0xff00) == 0x100) {
            pvVar36 = pvVar21;
            FUN_10029b6a4(pcVar29,_Var17.unknown,pcVar23,pvVar21,10);
            uVar14 = (uint)_Var17.unknown;
            pcVar31 = pcVar29;
          }
          _swift_bridgeObjectRelease(pvVar21);
          if ((uVar14 & 0xff) == 1) goto LAB_1000d618c;
        }
        pcVar11 = (code *)0x2;
        FUN_10020cba0();
        _swift_bridgeObjectRelease(pcVar9);
        uVar32 = (ulong)pcVar11 ^ (ulong)_Var26.unknown;
      }
      if (uVar32 >> 0xe == 0) {
        _swift_bridgeObjectRelease(pvVar36);
        _swift_bridgeObjectRelease(local_1b0.bridgeObject);
      }
      else {
        local_190 = &local_170;
        local_180 = 0;
        pcStack_188 = FUN_10029bfbc;
        pcVar29 = FUN_1000d7c50;
        pSVar18 = &local_1a0;
        local_170 = pcVar11;
        puStack_168 = _Var26.unknown;
        local_160 = pcVar12;
        pvStack_158 = pvVar36;
        FUN_10029bf04(FUN_1000d7c50,pSVar18,pcVar12,pvVar36);
        uVar14 = (uint)pSVar18;
        if ((uVar14 & 0xff00) == 0x100) {
          FUN_10029b6a4(pcVar11,_Var26.unknown,pcVar12,pvVar36,10);
          uVar14 = (uint)_Var26.unknown;
          pcVar29 = pcVar11;
        }
        _swift_bridgeObjectRelease(pvVar36);
        _swift_bridgeObjectRelease(local_1b0.bridgeObject);
        if ((uVar14 & 0xff) != 1) goto joined_r0x0001000d6760;
      }
      pcVar29 = (code *)0xffffffffffffffff;
    }
joined_r0x0001000d6760:
    if (local_1d4 != 2) {
      if ((code *)0xb < pcVar31 + -1) goto LAB_1000d6490;
      lVar27 = 0xc;
      if ((local_1d4 & 1) == 0) {
        lVar27 = 0;
      }
      if ((code *)0xb < pcVar31) {
        pcVar31 = pcVar31 + -0xc;
      }
      pcVar31 = pcVar31 + lVar27;
    }
    pcVar11 = (code *)0x0;
    if (pcVar29 < (code *)0x3c) {
      pcVar11 = pcVar29 + (long)pcVar31 * 0x3c;
    }
    uVar14 = 1;
    pcVar13 = (code *)0x0;
    if (pcVar31 < (code *)0x18) {
      uVar14 = (uint)((code *)0x3b < pcVar29);
      pcVar13 = pcVar11;
    }
    uVar32 = (ulong)uVar14;
  }
  else {
    if (*(long *)(pcVar12 + 0x10) == 2) {
      uVar30 = *(undefined8 *)(pcVar12 + 0x28);
      SVar38 = *(String *)(pcVar12 + 0x20);
      _swift_bridgeObjectRetain(uVar30);
      _Var10 = Swift::String::get_count(SVar38);
      _swift_bridgeObjectRelease(uVar30);
      if (_Var10 < 3) {
        if (*(ulong *)(pcVar12 + 0x10) < 2) {
                    /* WARNING: Does not return */
          pcVar31 = (code *)SoftwareBreakpoint(1,0x1000d6bf0);
          (*pcVar31)();
        }
        uVar30 = *(undefined8 *)(pcVar12 + 0x38);
        SVar38 = *(String *)(pcVar12 + 0x30);
        _swift_bridgeObjectRetain(uVar30);
        _Var10 = Swift::String::get_count(SVar38);
        _swift_bridgeObjectRelease(uVar30);
        if (_Var10 < 3) {
          pcVar31 = *(code **)(pcVar12 + 0x20);
          pbVar20 = *(byte **)(pcVar12 + 0x28);
          pbVar22 = (byte *)((ulong)pbVar20 >> 0x38 & 0xf);
          pbVar19 = (byte *)((ulong)pcVar31 & 0xffffffffffff);
          if (((ulong)pbVar20 & 0x2000000000000000) != 0) {
            pbVar19 = pbVar22;
          }
          if (pbVar19 == (byte *)0x0) goto LAB_1000d68b8;
          if (((ulong)pbVar20 >> 0x3c & 1) == 0) {
            if (((ulong)pbVar20 >> 0x3d & 1) != 0) {
              local_1a0.bridgeObject = (void *)((ulong)pbVar20 & 0xffffffffffffff);
              local_1a0.str = (char *)pcVar31;
              uVar14 = (uint)pcVar31 & 0xff;
              if (uVar14 == 0x2b) {
                if (pbVar22 == (byte *)0x0) {
                    /* WARNING: Does not return */
                  pcVar31 = (code *)SoftwareBreakpoint(1,0x1000d6d10);
                  (*pcVar31)();
                }
                pbVar22 = pbVar22 + -1;
                if (pbVar22 == (byte *)0x0) goto LAB_1000d68a4;
                pcVar31 = (code *)0x0;
                pbVar19 = (byte *)((ulong)&local_1a0 | 1);
                do {
                  if (((9 < *pbVar19 - 0x30) ||
                      (lVar27 = (long)pcVar31 * 10,
                      SUB168(SEXT816((long)pcVar31) * SEXT816(10),8) != lVar27 >> 0x3f)) ||
                     (uVar32 = (ulong)(byte)(*pbVar19 - 0x30), pcVar31 = (code *)(lVar27 + uVar32),
                     SCARRY8(lVar27,uVar32))) goto LAB_1000d68a4;
                  uVar14 = 0;
                  pbVar22 = pbVar22 + -1;
                  pbVar19 = pbVar19 + 1;
                } while (pbVar22 != (byte *)0x0);
              }
              else if (uVar14 == 0x2d) {
                if (pbVar22 == (byte *)0x0) {
                    /* WARNING: Does not return */
                  pcVar31 = (code *)SoftwareBreakpoint(1,0x1000d6d08);
                  (*pcVar31)();
                }
                pbVar22 = pbVar22 + -1;
                if (pbVar22 == (byte *)0x0) {
LAB_1000d68a4:
                  pcVar31 = (code *)0x0;
                  uVar14 = 1;
                }
                else {
                  pcVar31 = (code *)0x0;
                  pbVar19 = (byte *)((ulong)&local_1a0 | 1);
                  do {
                    if (((9 < *pbVar19 - 0x30) ||
                        (lVar27 = (long)pcVar31 * 10,
                        SUB168(SEXT816((long)pcVar31) * SEXT816(10),8) != lVar27 >> 0x3f)) ||
                       (uVar32 = (ulong)(byte)(*pbVar19 - 0x30), pcVar31 = (code *)(lVar27 - uVar32)
                       , SBORROW8(lVar27,uVar32))) goto LAB_1000d68a4;
                    uVar14 = 0;
                    pbVar22 = pbVar22 + -1;
                    pbVar19 = pbVar19 + 1;
                  } while (pbVar22 != (byte *)0x0);
                }
              }
              else {
                if (pbVar22 == (byte *)0x0) goto LAB_1000d68a4;
                pcVar31 = (code *)0x0;
                pSVar18 = &local_1a0;
                do {
                  uVar14 = *(byte *)&pSVar18->str - 0x30;
                  if (((9 < uVar14) ||
                      (lVar27 = (long)pcVar31 * 10,
                      SUB168(SEXT816((long)pcVar31) * SEXT816(10),8) != lVar27 >> 0x3f)) ||
                     (uVar32 = (ulong)(byte)uVar14, pcVar31 = (code *)(lVar27 + uVar32),
                     SCARRY8(lVar27,uVar32))) goto LAB_1000d68a4;
                  uVar14 = 0;
                  pbVar22 = pbVar22 + -1;
                  pSVar18 = (String *)((long)&pSVar18->str + 1);
                } while (pbVar22 != (byte *)0x0);
              }
              goto LAB_1000d68ac;
            }
            if (((ulong)pcVar31 >> 0x3c & 1) == 0) {
              UVar25 = Swift::_StringObject::get_sharedUTF8((_StringObject)pcVar31);
            }
            else {
              UVar25.unknown = (undefined *)(((ulong)pbVar20 & 0xfffffffffffffff) + 0x20);
              pbVar20 = (byte *)((ulong)pcVar31 & 0xffffffffffff);
            }
            if (*UVar25.unknown != 0x2b) {
              if (*UVar25.unknown != 0x2d) {
                if (pbVar20 == (byte *)0x0) goto LAB_1000d68b8;
                pcVar31 = (code *)0x0;
                pbVar19 = UVar25.unknown;
                while (pbVar19 != (byte *)0x0) {
                  if (((9 < (byte)*UVar25.unknown - 0x30) ||
                      (lVar27 = (long)pcVar31 * 10,
                      SUB168(SEXT816((long)pcVar31) * SEXT816(10),8) != lVar27 >> 0x3f)) ||
                     (uVar32 = (ulong)(byte)((byte)*UVar25.unknown - 0x30),
                     pcVar31 = (code *)(lVar27 + uVar32), SCARRY8(lVar27,uVar32)))
                  goto LAB_1000d68b8;
                  pbVar20 = pbVar20 + -1;
                  UVar25.unknown = UVar25.unknown + 1;
                  pbVar19 = pbVar20;
                }
                goto LAB_1000d68bc;
              }
              pbVar19 = pbVar20 + -1;
              if ((long)pbVar20 < 1) {
                    /* WARNING: Does not return */
                pcVar31 = (code *)SoftwareBreakpoint(1,0x1000d6d04);
                (*pcVar31)();
              }
              if (pbVar19 != (byte *)0x0) {
                pcVar31 = (code *)0x0;
                do {
                  UVar25.unknown = UVar25.unknown + 1;
                  if (((9 < (byte)*UVar25.unknown - 0x30) ||
                      (lVar27 = (long)pcVar31 * 10,
                      SUB168(SEXT816((long)pcVar31) * SEXT816(10),8) != lVar27 >> 0x3f)) ||
                     (uVar32 = (ulong)(byte)((byte)*UVar25.unknown - 0x30),
                     pcVar31 = (code *)(lVar27 - uVar32), SBORROW8(lVar27,uVar32)))
                  goto LAB_1000d68b8;
                  pbVar19 = pbVar19 + -1;
                } while (pbVar19 != (byte *)0x0);
                goto LAB_1000d68bc;
              }
              goto LAB_1000d68b8;
            }
            pbVar19 = pbVar20 + -1;
            if ((long)pbVar20 < 1) {
                    /* WARNING: Does not return */
              pcVar31 = (code *)SoftwareBreakpoint(1,0x1000d6d0c);
              (*pcVar31)();
            }
            if (pbVar19 == (byte *)0x0) goto LAB_1000d68b8;
            pcVar31 = (code *)0x0;
            do {
              UVar25.unknown = UVar25.unknown + 1;
              if (((9 < (byte)*UVar25.unknown - 0x30) ||
                  (lVar27 = (long)pcVar31 * 10,
                  SUB168(SEXT816((long)pcVar31) * SEXT816(10),8) != lVar27 >> 0x3f)) ||
                 (uVar32 = (ulong)(byte)((byte)*UVar25.unknown - 0x30),
                 pcVar31 = (code *)(lVar27 + uVar32), SCARRY8(lVar27,uVar32))) goto LAB_1000d68b8;
              pbVar19 = pbVar19 + -1;
            } while (pbVar19 != (byte *)0x0);
          }
          else {
            _swift_bridgeObjectRetain(pbVar20);
            pbVar19 = pbVar20;
            FUN_10029b7b0(pcVar31,pbVar20,10);
            uVar14 = (uint)pbVar19;
            _swift_bridgeObjectRelease(pbVar20);
LAB_1000d68ac:
            if ((uVar14 & 0xff) == 1) {
LAB_1000d68b8:
              pcVar31 = (code *)0xffffffffffffffff;
            }
          }
LAB_1000d68bc:
          pcVar29 = *(code **)(pcVar12 + 0x30);
          uVar37 = *(ulong *)(pcVar12 + 0x38);
          _swift_bridgeObjectRetain(uVar37);
          _swift_bridgeObjectRelease(pcVar12);
          uVar28 = (ulong)pcVar29 & 0xffffffffffff;
          uVar24 = uVar37 >> 0x38 & 0xf;
          uVar32 = uVar28;
          if ((uVar37 & 0x2000000000000000) != 0) {
            uVar32 = uVar24;
          }
          if (uVar32 == 0) {
            _swift_bridgeObjectRelease(uVar37);
            _swift_bridgeObjectRelease(pvVar36);
LAB_1000d6b5c:
            pcVar29 = (code *)0xffffffffffffffff;
          }
          else {
            if ((uVar37 >> 0x3c & 1) == 0) {
              if ((uVar37 >> 0x3d & 1) == 0) {
                if (((ulong)pcVar29 >> 0x3c & 1) == 0) {
                  uVar28 = uVar37;
                  UVar25 = Swift::_StringObject::get_sharedUTF8((_StringObject)pcVar29);
                }
                else {
                  UVar25.unknown = (undefined *)((uVar37 & 0xfffffffffffffff) + 0x20);
                }
                if (*UVar25.unknown == 0x2b) {
                  if ((long)uVar28 < 1) {
                    /* WARNING: Does not return */
                    pcVar31 = (code *)SoftwareBreakpoint(1,0x1000d6d1c);
                    (*pcVar31)();
                  }
                  lVar27 = uVar28 - 1;
                  if (lVar27 == 0) goto LAB_1000d6b38;
                  pcVar29 = (code *)0x0;
                  do {
                    UVar25.unknown = UVar25.unknown + 1;
                    if (((9 < (byte)*UVar25.unknown - 0x30) ||
                        (lVar35 = (long)pcVar29 * 10,
                        SUB168(SEXT816((long)pcVar29) * SEXT816(10),8) != lVar35 >> 0x3f)) ||
                       (uVar32 = (ulong)(byte)((byte)*UVar25.unknown - 0x30),
                       pcVar29 = (code *)(lVar35 + uVar32), SCARRY8(lVar35,uVar32)))
                    goto LAB_1000d6b38;
                    uVar14 = 0;
                    lVar27 = lVar27 + -1;
                  } while (lVar27 != 0);
                }
                else if (*UVar25.unknown == 0x2d) {
                  if ((long)uVar28 < 1) {
                    /* WARNING: Does not return */
                    pcVar31 = (code *)SoftwareBreakpoint(1,0x1000d6d14);
                    (*pcVar31)();
                  }
                  lVar27 = uVar28 - 1;
                  if (lVar27 == 0) {
LAB_1000d6b38:
                    pcVar29 = (code *)0x0;
                    uVar14 = 1;
                  }
                  else {
                    pcVar29 = (code *)0x0;
                    do {
                      UVar25.unknown = UVar25.unknown + 1;
                      if (((9 < (byte)*UVar25.unknown - 0x30) ||
                          (lVar35 = (long)pcVar29 * 10,
                          SUB168(SEXT816((long)pcVar29) * SEXT816(10),8) != lVar35 >> 0x3f)) ||
                         (uVar32 = (ulong)(byte)((byte)*UVar25.unknown - 0x30),
                         pcVar29 = (code *)(lVar35 - uVar32), SBORROW8(lVar35,uVar32)))
                      goto LAB_1000d6b38;
                      uVar14 = 0;
                      lVar27 = lVar27 + -1;
                    } while (lVar27 != 0);
                  }
                }
                else {
                  if (uVar28 == 0) goto LAB_1000d6b38;
                  if (UVar25.unknown == (byte *)0x0) {
                    uVar14 = 0;
                    pcVar29 = (code *)0x0;
                  }
                  else {
                    pcVar29 = (code *)0x0;
                    do {
                      if (((9 < (byte)*UVar25.unknown - 0x30) ||
                          (lVar27 = (long)pcVar29 * 10,
                          SUB168(SEXT816((long)pcVar29) * SEXT816(10),8) != lVar27 >> 0x3f)) ||
                         (uVar32 = (ulong)(byte)((byte)*UVar25.unknown - 0x30),
                         pcVar29 = (code *)(lVar27 + uVar32), SCARRY8(lVar27,uVar32)))
                      goto LAB_1000d6b38;
                      uVar14 = 0;
                      uVar28 = uVar28 - 1;
                      UVar25.unknown = UVar25.unknown + 1;
                    } while (uVar28 != 0);
                  }
                }
              }
              else {
                local_1a0.bridgeObject = (void *)(uVar37 & 0xffffffffffffff);
                local_1a0.str = (char *)pcVar29;
                uVar14 = (uint)pcVar29 & 0xff;
                if (uVar14 == 0x2b) {
                  if (uVar24 == 0) {
                    /* WARNING: Does not return */
                    pcVar31 = (code *)SoftwareBreakpoint(1,0x1000d6d20);
                    (*pcVar31)();
                  }
                  lVar27 = uVar24 - 1;
                  if (lVar27 == 0) goto LAB_1000d6b38;
                  pcVar29 = (code *)0x0;
                  pbVar19 = (byte *)((ulong)&local_1a0 | 1);
                  do {
                    if (((9 < *pbVar19 - 0x30) ||
                        (lVar35 = (long)pcVar29 * 10,
                        SUB168(SEXT816((long)pcVar29) * SEXT816(10),8) != lVar35 >> 0x3f)) ||
                       (uVar32 = (ulong)(byte)(*pbVar19 - 0x30), pcVar29 = (code *)(lVar35 + uVar32)
                       , SCARRY8(lVar35,uVar32))) goto LAB_1000d6b38;
                    uVar14 = 0;
                    lVar27 = lVar27 + -1;
                    pbVar19 = pbVar19 + 1;
                  } while (lVar27 != 0);
                }
                else if (uVar14 == 0x2d) {
                  if (uVar24 == 0) {
                    /* WARNING: Does not return */
                    pcVar31 = (code *)SoftwareBreakpoint(1,0x1000d6d18);
                    (*pcVar31)();
                  }
                  lVar27 = uVar24 - 1;
                  if (lVar27 == 0) goto LAB_1000d6b38;
                  pcVar29 = (code *)0x0;
                  pbVar19 = (byte *)((ulong)&local_1a0 | 1);
                  do {
                    if (((9 < *pbVar19 - 0x30) ||
                        (lVar35 = (long)pcVar29 * 10,
                        SUB168(SEXT816((long)pcVar29) * SEXT816(10),8) != lVar35 >> 0x3f)) ||
                       (uVar32 = (ulong)(byte)(*pbVar19 - 0x30), pcVar29 = (code *)(lVar35 - uVar32)
                       , SBORROW8(lVar35,uVar32))) goto LAB_1000d6b38;
                    uVar14 = 0;
                    lVar27 = lVar27 + -1;
                    pbVar19 = pbVar19 + 1;
                  } while (lVar27 != 0);
                }
                else {
                  if (uVar24 == 0) goto LAB_1000d6b38;
                  pcVar29 = (code *)0x0;
                  pSVar18 = &local_1a0;
                  do {
                    uVar14 = *(byte *)&pSVar18->str - 0x30;
                    if (((9 < uVar14) ||
                        (lVar27 = (long)pcVar29 * 10,
                        SUB168(SEXT816((long)pcVar29) * SEXT816(10),8) != lVar27 >> 0x3f)) ||
                       (uVar32 = (ulong)(byte)uVar14, pcVar29 = (code *)(lVar27 + uVar32),
                       SCARRY8(lVar27,uVar32))) goto LAB_1000d6b38;
                    uVar14 = 0;
                    uVar24 = uVar24 - 1;
                    pSVar18 = (String *)((long)&pSVar18->str + 1);
                  } while (uVar24 != 0);
                }
              }
            }
            else {
              uVar32 = uVar37;
              FUN_10029b7b0(pcVar29,uVar37,10);
              uVar14 = (uint)uVar32;
            }
            _swift_bridgeObjectRelease(uVar37);
            _swift_bridgeObjectRelease(pvVar36);
            if ((uVar14 & 0xff) == 1) goto LAB_1000d6b5c;
          }
          goto joined_r0x0001000d6760;
        }
      }
    }
LAB_1000d6484:
    _swift_bridgeObjectRelease(pcVar12);
    _swift_bridgeObjectRelease(pvVar36);
LAB_1000d6490:
    pcVar13 = (code *)0x0;
    uVar32 = 1;
  }
  auVar48._8_8_ = uVar32;
  auVar48._0_8_ = pcVar13;
  return auVar48;
}

