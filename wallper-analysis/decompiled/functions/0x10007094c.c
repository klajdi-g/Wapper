// rea decompile_all
// name: FUN_10007094c
// address: 0x10007094c
// body: available
// range: 0x10007094c-0x100071173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10007094c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  CharacterSet CVar6;
  undefined8 *puVar7;
  char *pcVar8;
  Locale LVar9;
  undefined *puVar10;
  undefined *puVar11;
  CharacterSet CVar12;
  void *pvVar13;
  Range<Index> RVar14;
  void *pvVar15;
  uint uVar16;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar17;
  undefined1 uVar18;
  long lVar19;
  CharacterSet in;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  undefined8 auStack_e0 [4];
  undefined1 auStack_c0 [8];
  undefined *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  String local_70;
  
  puVar11 = &DAT_10054e9a0;
  FUN_100002f94(&DAT_10054e9a0,&DAT_10041fc18);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_b0 = auStack_c0 + -extraout_x8;
  CVar6 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar19 = *(long *)(CVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar19 + 0x40));
  in.unknown = auStack_c0 + -extraout_x8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_70.bridgeObject = (void *)param_2;
  local_70.str = (char *)param_1;
  local_80 = 0xa0d;
  local_78 = 0xe200000000000000;
  local_90 = 10;
  uStack_88 = 0xe100000000000000;
  puVar17 = CVar6.unknown;
  FUN_100026df4();
  puVar11 = PTR___type_metadata_for_Swift_String_100523a98;
  *(undefined **)(in.unknown + -0x10) = puVar17;
  *(undefined **)(in.unknown + -8) = puVar17;
  *(undefined **)(in.unknown + -0x20) = PTR___type_metadata_for_Swift_String_100523a98;
  *(undefined **)(in.unknown + -0x18) = puVar17;
  local_70 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                       (&local_80,&local_90,0,0,0,1,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98);
  CVar12.unknown = local_70.bridgeObject;
  local_80 = 0xd;
  local_78 = 0xe100000000000000;
  local_90 = 10;
  uStack_88 = 0xe100000000000000;
  *(undefined **)(in.unknown + -0x10) = puVar17;
  *(undefined **)(in.unknown + -8) = puVar17;
  *(undefined **)(in.unknown + -0x20) = puVar11;
  *(undefined **)(in.unknown + -0x18) = puVar17;
  SVar20 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                     (&local_80,&local_90,0,0,0,1,puVar11,puVar11);
  _swift_bridgeObjectRelease();
  local_70 = SVar20;
  Foundation::CharacterSet::get_whitespacesAndNewlines(CVar12);
  SVar21 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
  local_a0 = *(code **)(lVar19 + 8);
  (*local_a0)(in.unknown,CVar6.unknown);
  _swift_bridgeObjectRelease(SVar20.bridgeObject);
  local_80 = 10;
  local_78 = 0xe100000000000000;
  puVar7 = &local_80;
  local_98 = puVar17;
  local_70 = SVar21;
  (extension_Foundation)::Swift::StringProtocol::_components(puVar7,puVar11,puVar11,puVar17,puVar17)
  ;
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  lVar19 = puVar7[2];
  puVar11 = PTR___swiftEmptyArrayStorage_100524190;
  local_a8 = puVar7;
  if (lVar19 != 0) {
    puVar7 = puVar7 + 5;
    local_b8 = CVar6.unknown;
    do {
      puVar17 = (undefined *)*puVar7;
      local_70.bridgeObject = puVar17;
      local_70.str = (char *)puVar7[-1];
      CVar12.unknown = puVar17;
      _swift_bridgeObjectRetain();
      Foundation::CharacterSet::get_whitespaces(CVar12);
      SVar20 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
      pvVar13 = SVar20.bridgeObject;
      pcVar8 = SVar20.str;
      (*local_a0)(in.unknown,CVar6.unknown);
      _swift_bridgeObjectRelease(puVar17);
      uVar2 = (ulong)pcVar8 & 0xffffffffffff;
      if (((ulong)pvVar13 & 0x2000000000000000) != 0) {
        uVar2 = (ulong)pvVar13 >> 0x38 & 0xf;
      }
      if (uVar2 == 0) {
        _swift_bridgeObjectRelease(pvVar13);
      }
      else {
        SVar21.bridgeObject = (void *)0xe400000000000000;
        SVar21.str = (char *)0x20232323;
        pvVar15 = pvVar13;
        bVar5 = Swift::String::hasPrefix(SVar21,SVar20);
        if (bVar5) {
          SVar29.str = (char *)0x4;
          FUN_1002a8150(4,pcVar8,pvVar13);
          _swift_bridgeObjectRelease(pvVar13);
          SVar22.bridgeObject = pcVar8;
          SVar22.str = SVar29.str;
          SVar20 = Swift::String::__fromSubstring(SVar22);
          _swift_bridgeObjectRelease(pvVar15);
          puVar17 = puVar11;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar10 = puVar11;
          if (((ulong)puVar17 & 1) == 0) {
            puVar10 = (undefined *)0x0;
            FUN_1001c4610(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
          }
          uVar2 = *(ulong *)(puVar10 + 0x10);
          puVar11 = puVar10;
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar2) {
            puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
            FUN_1001c4610(puVar11,uVar2 + 1,1,puVar10);
          }
          *(ulong *)(puVar11 + 0x10) = uVar2 + 1;
          *(String *)(puVar11 + uVar2 * 0x18 + 0x20) = SVar20;
          puVar11[uVar2 * 0x18 + 0x30] = 2;
        }
        else {
          SVar23.bridgeObject = (void *)0xe300000000000000;
          SVar23.str = (char *)0x202323;
          pvVar15 = pvVar13;
          bVar5 = Swift::String::hasPrefix(SVar23,SVar20);
          if (bVar5) {
            SVar29.str = (char *)0x3;
            FUN_1002a8150(3,pcVar8,pvVar13);
            _swift_bridgeObjectRelease(pvVar13);
            SVar24.bridgeObject = pcVar8;
            SVar24.str = SVar29.str;
            SVar20 = Swift::String::__fromSubstring(SVar24);
            _swift_bridgeObjectRelease(pvVar15);
            puVar17 = puVar11;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar10 = puVar11;
            if (((ulong)puVar17 & 1) == 0) {
              puVar10 = (undefined *)0x0;
              FUN_1001c4610(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
            }
            uVar2 = *(ulong *)(puVar10 + 0x10);
            puVar11 = puVar10;
            if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar2) {
              puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
              FUN_1001c4610(puVar11,uVar2 + 1,1,puVar10);
            }
            *(ulong *)(puVar11 + 0x10) = uVar2 + 1;
            puVar17 = puVar11 + uVar2 * 0x18;
            *(String *)(puVar17 + 0x20) = SVar20;
            uVar18 = 1;
LAB_100070cf0:
            puVar17[0x30] = uVar18;
          }
          else {
            SVar25.bridgeObject = (void *)0xe200000000000000;
            SVar25.str = (char *)0x2023;
            pvVar15 = pvVar13;
            bVar5 = Swift::String::hasPrefix(SVar25,SVar20);
            if (bVar5) {
              SVar29.str = (char *)0x2;
              FUN_1002a8150(2,pcVar8,pvVar13);
              _swift_bridgeObjectRelease(pvVar13);
              SVar26.bridgeObject = pcVar8;
              SVar26.str = SVar29.str;
              SVar20 = Swift::String::__fromSubstring(SVar26);
              _swift_bridgeObjectRelease(pvVar15);
              puVar17 = puVar11;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar10 = puVar11;
              if (((ulong)puVar17 & 1) == 0) {
                puVar10 = (undefined *)0x0;
                FUN_1001c4610(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
              }
              uVar2 = *(ulong *)(puVar10 + 0x10);
              puVar11 = puVar10;
              if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar2) {
                puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
                FUN_1001c4610(puVar11,uVar2 + 1,1,puVar10);
              }
              *(ulong *)(puVar11 + 0x10) = uVar2 + 1;
              *(String *)(puVar11 + uVar2 * 0x18 + 0x20) = SVar20;
              puVar11[uVar2 * 0x18 + 0x30] = 0;
            }
            else {
              SVar27.bridgeObject = (void *)0xe200000000000000;
              SVar27.str = (char *)0x203e;
              pvVar15 = pvVar13;
              bVar5 = Swift::String::hasPrefix(SVar27,SVar20);
              if (bVar5) {
                SVar29.str = (char *)0x2;
                FUN_1002a8150(2,pcVar8,pvVar13);
                _swift_bridgeObjectRelease(pvVar13);
                SVar28.bridgeObject = pcVar8;
                SVar28.str = SVar29.str;
                SVar20 = Swift::String::__fromSubstring(SVar28);
                _swift_bridgeObjectRelease(pvVar15);
                puVar17 = puVar11;
                _swift_isUniquelyReferenced_nonNull_native();
                puVar10 = puVar11;
                if (((ulong)puVar17 & 1) == 0) {
                  puVar10 = (undefined *)0x0;
                  FUN_1001c4610(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
                }
                uVar2 = *(ulong *)(puVar10 + 0x10);
                puVar11 = puVar10;
                if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar2) {
                  puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
                  FUN_1001c4610(puVar11,uVar2 + 1,1,puVar10);
                }
                *(ulong *)(puVar11 + 0x10) = uVar2 + 1;
                *(String *)(puVar11 + uVar2 * 0x18 + 0x20) = SVar20;
                puVar11[uVar2 * 0x18 + 0x30] = 4;
              }
              else {
                local_80 = 0x2b735c5d2a2d5b5e;
                local_78 = 0xe800000000000000;
                local_70 = SVar20;
                LVar9 = Foundation::Locale::typeMetadataAccessor();
                puVar3 = local_b0;
                (**(code **)(*(long *)(LVar9.unknown + -8) + 0x38))(local_b0,1,1,LVar9.unknown);
                puVar17 = local_98;
                *(undefined **)(in.unknown + -0x10) = local_98;
                *(undefined **)(in.unknown + -8) = puVar17;
                RVar14.unknown = (undefined *)0x400;
                uVar16 = 0;
                (extension_Foundation)::Swift::StringProtocol::_range
                          (&local_80,0x400,0,0,1,puVar3,
                           PTR___type_metadata_for_Swift_String_100523a98,
                           PTR___type_metadata_for_Swift_String_100523a98);
                FUN_10002a29c(puVar3,&DAT_10054e9a0,&DAT_10041fc18);
                if ((uVar16 & 0xff) == 1) {
                  puVar17 = puVar11;
                  _swift_isUniquelyReferenced_nonNull_native();
                  puVar10 = puVar11;
                  if (((ulong)puVar17 & 1) == 0) {
                    puVar10 = (undefined *)0x0;
                    FUN_1001c4610(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
                  }
                  CVar6.unknown = local_b8;
                  uVar2 = *(ulong *)(puVar10 + 0x10);
                  puVar11 = puVar10;
                  if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar2) {
                    puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
                    FUN_1001c4610(puVar11,uVar2 + 1,1,puVar10);
                  }
                  *(ulong *)(puVar11 + 0x10) = uVar2 + 1;
                  puVar17 = puVar11 + uVar2 * 0x18;
                  *(String *)(puVar17 + 0x20) = SVar20;
                  uVar18 = 5;
                  goto LAB_100070cf0;
                }
                if (uVar2 << 2 < (ulong)RVar14.unknown >> 0xe) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x100071174);
                  (*pcVar4)();
                }
                uVar16 = SVar20.str._4_4_ >> 0x1b & 1;
                if (((ulong)pvVar13 & 0x1000000000000000) == 0) {
                  uVar16 = 1;
                }
                uVar1 = 7;
                if (uVar16 == 0) {
                  uVar1 = 0xb;
                }
                SVar29.str = (char *)(uVar1 | uVar2 << 0x10);
                SVar29.bridgeObject = pcVar8;
                pvVar15 = pvVar13;
                SVar20.str = Swift::String::get_subscript(RVar14,SVar29);
                _swift_bridgeObjectRelease(pvVar13);
                SVar20.bridgeObject = SVar29.str;
                SVar20 = Swift::String::__fromSubstring(SVar20);
                _swift_bridgeObjectRelease(pvVar15);
                puVar17 = puVar11;
                _swift_isUniquelyReferenced_nonNull_native();
                puVar10 = puVar11;
                if (((ulong)puVar17 & 1) == 0) {
                  puVar10 = (undefined *)0x0;
                  FUN_1001c4610(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
                }
                CVar6.unknown = local_b8;
                uVar2 = *(ulong *)(puVar10 + 0x10);
                puVar11 = puVar10;
                if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar2) {
                  puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
                  FUN_1001c4610(puVar11,uVar2 + 1,1,puVar10);
                }
                *(ulong *)(puVar11 + 0x10) = uVar2 + 1;
                *(String *)(puVar11 + uVar2 * 0x18 + 0x20) = SVar20;
                puVar11[uVar2 * 0x18 + 0x30] = 3;
              }
            }
          }
        }
      }
      puVar7 = puVar7 + 2;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  _swift_bridgeObjectRelease(local_a8);
  return puVar11;
}

