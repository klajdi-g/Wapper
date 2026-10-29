// rea decompile_all
// name: FUN_1001b2798
// address: 0x1001b2798
// body: available
// range: 0x1001b2798-0x1001b384f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b2798(undefined8 param_1,long param_2,undefined8 param_3)

{
  String *pSVar1;
  char *pcVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  URL UVar6;
  undefined *puVar7;
  Hasher into;
  Date DVar8;
  code *pcVar9;
  void *pvVar10;
  CharacterSet CVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long extraout_x8;
  long extraout_x8_00;
  long lVar15;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar16;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  ulong uVar17;
  code *pcVar18;
  long lVar19;
  undefined *puVar20;
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
  code *pcVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  CharacterSet in;
  code *pcVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  String SVar30;
  undefined1 auStack_1a0 [8];
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  undefined *local_160;
  long local_158;
  long local_150;
  long local_148;
  undefined *local_140;
  code *local_138;
  long local_130;
  long local_128;
  undefined *local_120;
  long local_118;
  undefined *local_110;
  long local_108;
  long lStack_100;
  undefined *local_f8;
  long local_f0;
  undefined8 local_e8;
  code *local_e0;
  code *local_d8;
  undefined8 local_d0;
  code *local_c8;
  long local_c0;
  long local_b8;
  String local_b0 [5];
  
  local_d0 = param_1;
  local_b8 = param_2;
  local_110 = (undefined *)Foundation::CharacterSet::typeMetadataAccessor();
  local_118 = *(long *)(local_110 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_118 + 0x40));
  local_d8 = (code *)(auStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_160 = (undefined *)Foundation::Calendar::typeMetadataAccessor();
  local_168 = *(long *)(local_160 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_168 + 0x40));
  lVar15 = (long)(auStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar20 = &DAT_10054a9d0;
  local_170 = lVar15;
  FUN_100002f94(&DAT_10054a9d0,&DAT_10041bc60);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar15 - extraout_x8_01;
  local_158 = lVar15;
  local_140 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_148 = *(long *)(local_140 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_148 + 0x40));
  lVar15 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar20 = &DAT_10054a9c8;
  local_150 = lVar15;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar15 - extraout_x8_03;
  local_f8 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  lVar27 = *(long *)(local_f8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar27 + 0x40));
  lVar16 = lVar15 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  puVar20 = &DAT_10054ac38;
  local_130 = lVar16;
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar28 = lVar16 - extraout_x8_05;
  lVar16 = 0;
  FUN_10025ee04();
  local_108 = *(long *)(lVar16 + -8);
  lStack_100 = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_108 + 0x40));
  lVar16 = uVar28 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  puVar20 = &DAT_10054ac40;
  local_128 = lVar16;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar20 + -8) + 0x40));
  lVar16 = lVar16 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
  local_198 = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar16 - extraout_x12;
  local_190 = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar18 = (code *)(lVar16 - extraout_x12_00);
  local_e0 = pcVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar18 = pcVar18 + -extraout_x12_01;
  local_138 = pcVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = (long)pcVar18 - extraout_x12_02;
  local_188 = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar19 - extraout_x12_03;
  local_180 = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar19 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_178 = lVar19 - extraout_x12_05;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar23 = (lVar19 - extraout_x12_05) - extraout_x12_06;
  lVar4 = 0;
  FUN_10040211c();
  lVar25 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar25 + 0x40));
  lVar16 = lVar23 - (extraout_x8_08 + 0xfU & 0xfffffffffffffff0);
  local_f0 = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar20 = (undefined *)(lVar16 - extraout_x12_07);
  local_120 = puVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar24 = (long)puVar20 - extraout_x12_08;
  local_e8 = param_3;
  FUN_1001c09a4(lVar23,local_b8,param_3);
  local_c8 = *(code **)(lVar25 + 0x30);
  lVar16 = lVar23;
  (*local_c8)(lVar23,1,lVar4);
  if ((int)lVar16 == 1) {
    local_c0 = lVar4;
    local_b8 = lVar25;
    FUN_10002a29c(lVar23,&DAT_10054ac40,&DAT_10041ce70);
    puVar20 = &DAT_10042a670;
    _swift_getKeyPath(&DAT_10042a670);
    puVar5 = &DAT_10042a698;
    _swift_getKeyPath(&DAT_10042a698);
    Combine::Published::_get_subscript(lVar15);
    _swift_release(puVar20);
    _swift_release(puVar5);
    puVar20 = local_f8;
    lVar4 = lVar15;
    (**(code **)(lVar27 + 0x30))(lVar15,1,local_f8);
    lVar16 = local_130;
    if ((int)lVar4 == 1) {
      FUN_10002a29c(lVar15,&DAT_10054a9c8,&DAT_10041bbe0);
      (**(code **)(local_108 + 0x38))(uVar28,1,1,lStack_100);
    }
    else {
      (**(code **)(lVar27 + 0x20))(local_130,lVar15,puVar20);
      FUN_1001b6e74(uVar28,lVar16);
      (**(code **)(lVar27 + 8))(lVar16,puVar20);
      uVar17 = uVar28;
      (**(code **)(local_108 + 0x30))(uVar28,1,lStack_100);
      if ((int)uVar17 != 1) {
        lVar23 = local_128;
        FUN_100007e64(uVar28,local_128,FUN_10025ee04);
        FUN_1002748c4();
        _swift_bridgeObjectRelease();
        lVar15 = local_150;
        DVar8 = Foundation::Date::init();
        lVar16 = local_170;
        Foundation::Calendar::get_current((Calendar)DVar8.unknown);
        lVar4 = local_158;
        FUN_1001d62f0(local_158,lVar15,lVar16);
        (**(code **)(local_168 + 8))(lVar16,local_160);
        lVar24 = 0;
        FUN_1001d59ac();
        lVar16 = lVar4;
        (**(code **)(*(long *)(lVar24 + -8) + 0x30))(lVar4,1,lVar24);
        if ((int)lVar16 == 1) {
          FUN_10002a29c(lVar4,&DAT_10054a9d0,&DAT_10041bc60);
          pcVar18 = (code *)PTR___swiftEmptyArrayStorage_100524190;
        }
        else {
          pcVar18 = *(code **)(lVar4 + *(int *)(lVar24 + 0x24));
          _swift_bridgeObjectRetain(pcVar18);
          FUN_100029548(lVar4,FUN_1001d59ac);
        }
        lVar16 = local_c0;
        (**(code **)(local_148 + 8))(lVar15,local_140);
        uVar29 = *(ulong *)(pcVar18 + 0x10);
        _swift_bridgeObjectRetain(lVar23);
        uVar28 = 0;
        uVar17 = uVar28;
        if (uVar29 != 0) {
          pcVar9 = pcVar18 + 0x28;
          local_d8 = pcVar18;
          do {
            uVar17 = *(ulong *)pcVar9;
            if (*(long *)(lVar23 + 0x10) == 0) {
              (**(code **)(local_b8 + 0x38))(lVar19,1,1,lVar16);
            }
            else {
              uVar22 = *(ulong *)(pcVar9 + -8);
              _swift_bridgeObjectRetain(lVar23);
              _swift_bridgeObjectRetain(uVar17);
              uVar13 = uVar17;
              FUN_10000464c(uVar22);
              lVar4 = local_b8;
              bVar3 = (uVar13 & 1) == 0;
              if (!bVar3) {
                FUN_100029504(*(long *)(lVar23 + 0x38) + *(long *)(local_b8 + 0x48) * uVar22,lVar19,
                              FUN_10040211c);
              }
              _swift_bridgeObjectRelease(lVar23);
              lVar16 = local_c0;
              (**(code **)(lVar4 + 0x38))(lVar19,bVar3,1,local_c0);
              _swift_bridgeObjectRelease(uVar17);
              lVar4 = lVar19;
              (*local_c8)(lVar19,1,lVar16);
              if ((int)lVar4 != 1) {
                FUN_10002a29c(lVar19,&DAT_10054ac40,&DAT_10041ce70);
                pcVar18 = local_d8;
                uVar17 = uVar28;
                break;
              }
            }
            FUN_10002a29c(lVar19,&DAT_10054ac40,&DAT_10041ce70);
            uVar28 = uVar28 + 1;
            pcVar9 = pcVar9 + 0x10;
            pcVar18 = local_d8;
            uVar17 = uVar29;
          } while (uVar29 != uVar28);
        }
        pcVar9 = local_138;
        lVar4 = local_180;
        if (uVar17 == *(ulong *)(pcVar18 + 0x10)) {
          pcVar26 = *(code **)(local_b8 + 0x38);
          uVar14 = 1;
          lVar19 = local_178;
        }
        else {
          if (*(ulong *)(pcVar18 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x1001b3844);
            (*pcVar18)();
          }
          if (*(long *)(lVar23 + 0x10) == 0) {
            pcVar26 = *(code **)(local_b8 + 0x38);
            (*pcVar26)(local_180,1,1,lVar16);
          }
          else {
            lVar16 = *(long *)(pcVar18 + uVar17 * 0x10 + 0x20);
            uVar28 = *(ulong *)(pcVar18 + uVar17 * 0x10 + 0x28);
            _swift_bridgeObjectRetain(lVar23);
            _swift_bridgeObjectRetain(uVar28);
            uVar17 = uVar28;
            FUN_10000464c(lVar16);
            lVar15 = local_b8;
            lVar4 = local_180;
            bVar3 = (uVar17 & 1) == 0;
            if (bVar3) {
              _swift_bridgeObjectRelease(lVar23);
              pcVar26 = *(code **)(local_b8 + 0x38);
              lVar4 = local_180;
            }
            else {
              FUN_100029504(*(long *)(lVar23 + 0x38) + *(long *)(local_b8 + 0x48) * lVar16,local_180
                            ,FUN_10040211c);
              _swift_bridgeObjectRelease(lVar23);
              pcVar26 = *(code **)(lVar15 + 0x38);
            }
            lVar16 = local_c0;
            (*pcVar26)(lVar4,bVar3,1,local_c0);
            _swift_bridgeObjectRelease(uVar28);
          }
          lVar19 = local_178;
          lVar15 = local_188;
          FUN_1000087e4(lVar4,local_188,&DAT_10054ac40,&DAT_10041ce70);
          lVar24 = lVar15;
          (*local_c8)(lVar15,1,lVar16);
          if ((int)lVar24 == 1) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x1001b384c);
            (*pcVar18)();
          }
          FUN_100007e64(lVar15,lVar19,FUN_10040211c);
          FUN_10002a29c(lVar4,&DAT_10054ac40,&DAT_10041ce70);
          uVar14 = 0;
        }
        (*pcVar26)(lVar19,uVar14,1,lVar16);
        _swift_bridgeObjectRelease(lVar23);
        _swift_bridgeObjectRelease(pcVar18);
        FUN_100007e1c(lVar19,pcVar9,&DAT_10054ac40,&DAT_10041ce70);
        pcVar18 = pcVar9;
        (*local_c8)(pcVar9,1,lVar16);
        if ((int)pcVar18 != 1) {
          FUN_100029548(local_128,FUN_10025ee04);
          _swift_bridgeObjectRelease(lVar23);
          uVar14 = local_d0;
          FUN_100007e64(pcVar9,local_d0,FUN_10040211c);
          (*pcVar26)(uVar14,0,1,lVar16);
          return;
        }
        FUN_10025f200();
        uVar28 = *(ulong *)(pcVar18 + 0x10);
        lVar16 = local_c0;
        if (uVar28 == 0) {
          uVar28 = 0;
        }
        else {
          uVar17 = 0;
          pcVar21 = pcVar18 + 0x28;
          local_d8 = pcVar18;
          do {
            pcVar18 = local_e0;
            uVar29 = *(ulong *)pcVar21;
            if (*(long *)(lVar23 + 0x10) == 0) {
              (*pcVar26)(local_e0,1,1,lVar16);
            }
            else {
              uVar22 = *(ulong *)(pcVar21 + -8);
              _swift_bridgeObjectRetain(lVar23);
              _swift_bridgeObjectRetain(uVar29);
              uVar13 = uVar29;
              FUN_10000464c(uVar22);
              pcVar18 = local_e0;
              bVar3 = (uVar13 & 1) == 0;
              if (!bVar3) {
                FUN_100029504(*(long *)(lVar23 + 0x38) + *(long *)(local_b8 + 0x48) * uVar22,
                              local_e0,FUN_10040211c);
              }
              _swift_bridgeObjectRelease(lVar23);
              lVar16 = local_c0;
              (*pcVar26)(pcVar18,bVar3,1,local_c0);
              _swift_bridgeObjectRelease(uVar29);
              pcVar9 = pcVar18;
              (*local_c8)(pcVar18,1,lVar16);
              if ((int)pcVar9 != 1) {
                FUN_10002a29c(pcVar18,&DAT_10054ac40,&DAT_10041ce70);
                pcVar18 = local_d8;
                pcVar9 = local_138;
                uVar28 = uVar17;
                break;
              }
            }
            FUN_10002a29c(pcVar18,&DAT_10054ac40,&DAT_10041ce70);
            uVar17 = uVar17 + 1;
            pcVar21 = pcVar21 + 0x10;
            pcVar18 = local_d8;
            pcVar9 = local_138;
          } while (uVar28 != uVar17);
        }
        lVar4 = local_190;
        if (uVar28 == *(ulong *)(pcVar18 + 0x10)) {
          uVar12 = 1;
          uVar14 = local_d0;
        }
        else {
          if (*(ulong *)(pcVar18 + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x1001b3848);
            (*pcVar18)();
          }
          if (*(long *)(lVar23 + 0x10) == 0) {
            (*pcVar26)(local_190,1,1,lVar16);
          }
          else {
            lVar16 = *(long *)(pcVar18 + uVar28 * 0x10 + 0x20);
            uVar28 = *(ulong *)(pcVar18 + uVar28 * 0x10 + 0x28);
            _swift_bridgeObjectRetain(lVar23);
            _swift_bridgeObjectRetain(uVar28);
            uVar17 = uVar28;
            FUN_10000464c(lVar16);
            lVar4 = local_190;
            bVar3 = (uVar17 & 1) == 0;
            if (bVar3) {
              _swift_bridgeObjectRelease(lVar23);
              lVar4 = local_190;
            }
            else {
              FUN_100029504(*(long *)(lVar23 + 0x38) + *(long *)(local_b8 + 0x48) * lVar16,local_190
                            ,FUN_10040211c);
              _swift_bridgeObjectRelease(lVar23);
            }
            lVar16 = local_c0;
            (*pcVar26)(lVar4,bVar3,1,local_c0);
            _swift_bridgeObjectRelease(uVar28);
          }
          lVar15 = local_198;
          FUN_1000087e4(lVar4,local_198,&DAT_10054ac40,&DAT_10041ce70);
          lVar19 = lVar15;
          (*local_c8)(lVar15,1,lVar16);
          uVar14 = local_d0;
          if ((int)lVar19 == 1) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x1001b3850);
            (*pcVar18)();
          }
          FUN_100007e64(lVar15,local_d0,FUN_10040211c);
          FUN_10002a29c(lVar4,&DAT_10054ac40,&DAT_10041ce70);
          uVar12 = 0;
        }
        (*pcVar26)(uVar14,uVar12,1,lVar16);
        _swift_bridgeObjectRelease(lVar23);
        _swift_bridgeObjectRelease(pcVar18);
        FUN_100029548(local_128,FUN_10025ee04);
        pcVar18 = pcVar9;
        (*local_c8)(pcVar9,1,lVar16);
        if ((int)pcVar18 == 1) {
          return;
        }
        FUN_10002a29c(pcVar9,&DAT_10054ac40,&DAT_10041ce70);
        return;
      }
    }
    in.unknown = local_d8;
    FUN_10002a29c(uVar28,&DAT_10054ac38,&DAT_10041e8e0);
    FUN_1001b460c();
    if ((uVar28 & 1) == 0) {
      pcVar18 = *(code **)(local_b8 + 0x38);
    }
    else {
      puVar20 = &DAT_10042a908;
      _swift_getKeyPath(&DAT_10042a908);
      puVar5 = &DAT_10042a930;
      _swift_getKeyPath(&DAT_10042a930);
      Combine::Published::_get_subscript(local_b0,local_e8,puVar20,puVar5);
      _swift_release(puVar20);
      _swift_release(puVar5);
      local_f8 = *(undefined **)(local_b0[0].str + 0x10);
      pcVar18 = (code *)local_b0[0].str;
      if (local_f8 != (undefined *)0x0) {
        puVar20 = (undefined *)0x0;
        local_e0 = (code *)(local_b0[0].str +
                           ((ulong)*(byte *)(local_b8 + 0x50) + 0x20 &
                           ((ulong)*(byte *)(local_b8 + 0x50) ^ 0xffffffffffffffff)));
        local_c8 = (code *)local_b0[0].str;
        lVar16 = local_f0;
        do {
          UVar6.unknown = local_120;
          if (*(undefined **)(pcVar18 + 0x10) <= puVar20) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x1001b3840);
            (*pcVar18)();
          }
          FUN_100029504(local_e0 + *(long *)(local_b8 + 0x48) * (long)puVar20,local_120,
                        FUN_10040211c);
          FUN_100007e64(UVar6.unknown,lVar16,FUN_10040211c);
          local_b0[0] = Foundation::URL::get_lastPathComponent(UVar6);
          pvVar10 = local_b0[0].bridgeObject;
          Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)local_b0[0].str);
          FUN_100026df4();
          SVar30 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
          puVar5 = local_110;
          CVar11.unknown = SVar30.bridgeObject;
          pcVar18 = *(code **)(local_118 + 8);
          (*pcVar18)(in.unknown,local_110);
          _swift_bridgeObjectRelease(pvVar10);
          uVar28 = (ulong)SVar30.str & 0xffffffffffff;
          if (((ulong)CVar11.unknown & 0x2000000000000000) != 0) {
            uVar28 = (ulong)CVar11.unknown >> 0x38 & 0xf;
          }
          if (uVar28 == 0) {
            _swift_bridgeObjectRelease();
            Foundation::CharacterSet::get_whitespacesAndNewlines(CVar11);
            SVar30 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
            (*pcVar18)(in.unknown,puVar5);
          }
          puVar5 = &DAT_10042a950;
          _swift_getKeyPath(&DAT_10042a950);
          puVar7 = &DAT_10042a978;
          _swift_getKeyPath(&DAT_10042a978);
          Combine::Published::_get_subscript(local_b0,local_e8,puVar5,puVar7);
          _swift_release(puVar5);
          _swift_release(puVar7);
          pcVar18 = local_c8;
          lVar16 = local_f0;
          pcVar2 = local_b0[0].str;
          if (*(long *)(local_b0[0].str + 0x10) != 0) {
            Swift::Hasher::init(*(__int64 *)(local_b0[0].str + 0x28));
            into.unknown = (undefined *)local_b0;
            Swift::String::hash(into,SVar30);
            uVar28 = Swift::Hasher::_finalize(into);
            uVar17 = -1L << ((ulong)(byte)pcVar2[0x20] & 0x3f);
            uVar28 = uVar28 & (uVar17 ^ 0xffffffffffffffff);
            if ((*(ulong *)(pcVar2 + (uVar28 >> 6) * 8 + 0x38) >> (uVar28 & 0x3f) & 1) != 0) {
              do {
                pSVar1 = (String *)(*(long *)(pcVar2 + 0x30) + uVar28 * 0x10);
                if ((SVar30 == *pSVar1) ||
                   (bVar3 = Swift::_stringCompareWithSmolCheck
                                      ((_StringGuts)pSVar1->str,(_StringGuts)pSVar1->bridgeObject,
                                       (_StringComparisonResult)(__int8)SVar30.str), bVar3)) {
                  _swift_bridgeObjectRelease(SVar30.bridgeObject);
                  _swift_bridgeObjectRelease(pcVar2);
                  _swift_bridgeObjectRelease(pcVar18);
                  uVar14 = local_d0;
                  FUN_100007e64(lVar16,local_d0,FUN_10040211c);
                  pcVar18 = *(code **)(local_b8 + 0x38);
                  uVar12 = 0;
                  lVar4 = local_c0;
                  goto LAB_1001b314c;
                }
                uVar28 = uVar28 + 1 & ~uVar17;
              } while ((*(ulong *)(pcVar2 + (uVar28 >> 6) * 8 + 0x38) >> (uVar28 & 0x3f) & 1) != 0);
            }
          }
          puVar20 = puVar20 + 1;
          _swift_bridgeObjectRelease(SVar30.bridgeObject);
          _swift_bridgeObjectRelease(pcVar2);
          FUN_100029548(lVar16,FUN_10040211c);
          in.unknown = local_d8;
        } while (puVar20 != local_f8);
      }
      lVar16 = local_b8;
      _swift_bridgeObjectRelease(pcVar18);
      pcVar18 = *(code **)(lVar16 + 0x38);
    }
    uVar12 = 1;
    uVar14 = local_d0;
    lVar4 = local_c0;
  }
  else {
    FUN_100007e64(lVar23,lVar24,FUN_10040211c);
    uVar14 = local_d0;
    FUN_100007e64(lVar24,local_d0,FUN_10040211c);
    pcVar18 = *(code **)(lVar25 + 0x38);
    uVar12 = 0;
  }
LAB_1001b314c:
  (*pcVar18)(uVar14,uVar12,1,lVar4);
  return;
}

