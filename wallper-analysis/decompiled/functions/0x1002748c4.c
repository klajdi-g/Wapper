// rea decompile_all
// name: FUN_1002748c4
// address: 0x1002748c4
// body: available
// range: 0x1002748c4-0x100275677 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1002748c4(void)

{
  ulong *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  Dictionary DVar6;
  URL UVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar12;
  void *pvVar13;
  void *pvVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar17;
  long lVar18;
  long lVar19;
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
  long extraout_x13;
  undefined8 extraout_x14;
  undefined8 extraout_x15;
  undefined *puVar20;
  bool bVar21;
  long unaff_x20;
  code *pcVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  __int64 _Var26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  String SVar30;
  undefined1 auVar31 [16];
  undefined8 *apuStack_170 [2];
  long local_160;
  long local_158;
  long local_150;
  undefined8 local_148;
  long local_140;
  ulong local_138;
  long local_130;
  long local_128;
  undefined *local_120;
  undefined *local_118;
  ulong local_110;
  undefined8 local_108;
  long local_100;
  long local_f8;
  long local_f0;
  undefined *local_e8;
  undefined *local_e0;
  long local_d8;
  long local_d0;
  undefined *local_c8;
  ulong local_c0;
  code *local_b8;
  void *local_b0;
  long local_a8;
  long local_a0;
  code *local_98;
  undefined8 *local_90;
  char *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  void *pvVar11;
  
  puVar20 = &DAT_10054b6b8;
  FUN_100002f94(&DAT_10054b6b8,&DAT_10041ca50);
  local_e0 = puVar20;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar20 = &DAT_10054ac40;
  local_d8 = (long)apuStack_170 - extraout_x8;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar20 + -8) + 0x40));
  lVar18 = ((long)apuStack_170 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_128 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar24 = lVar18 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar25 = lVar24 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar27 = lVar25 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar28 = lVar27 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar29 = lVar28 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = uVar29 - extraout_x12_05;
  local_a8 = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar19 - extraout_x12_06;
  lVar3 = 0;
  FUN_10040211c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_100521118)();
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = ((lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_07) -
           extraout_x12_08;
  lVar17 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar15 = (undefined8 *)(lVar10 - extraout_x12_09);
  puVar16 = puVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_78 = PTR___swiftEmptyArrayStorage_100524190;
  local_e8 = (undefined *)((long)puVar15 - extraout_x12_10);
  apuStack_170[1] = (undefined8 *)(unaff_x20 + _TtC7Wallper17VideoLibraryStore::lookupCache);
  puVar20 = (undefined *)*apuStack_170[1];
  if (puVar20 == (undefined *)0x0) {
    puVar20 = PTR___swiftEmptyArrayStorage_100524190;
    local_160 = lVar25;
    local_158 = lVar17;
    local_148 = extraout_x15;
    local_140 = lVar27;
    local_138 = uVar29;
    local_130 = lVar3;
    local_108 = extraout_x14;
    local_100 = lVar24;
    local_f8 = lVar18;
    local_f0 = extraout_x13;
    local_d0 = lVar19;
    local_90 = puVar16;
    FUN_100005d5c();
    local_70 = puVar20;
    FUN_100005d5c();
    puVar20 = &DAT_10042d1d8;
    puVar4 = puVar20;
    _swift_getKeyPath(&DAT_10042d1d8);
    puVar23 = &DAT_10042d200;
    puVar5 = puVar23;
    _swift_getKeyPath(&DAT_10042d200);
    Combine::Published::_get_subscript(&local_80);
    _swift_release(puVar4);
    _swift_release(puVar5);
    _Var26 = *(__int64 *)(local_80 + 0x10);
    _swift_bridgeObjectRelease();
    DVar6.unknown = &DAT_100558c30;
    FUN_100002f94(&DAT_100558c30,&DAT_10042d290);
    Swift::Dictionary::reserveCapacity(_Var26,DVar6);
    puVar4 = puVar20;
    _swift_getKeyPath(&DAT_10042d1d8);
    puVar5 = puVar23;
    _swift_getKeyPath(&DAT_10042d200);
    Combine::Published::_get_subscript(&local_80);
    _swift_release(puVar4);
    _swift_release(puVar5);
    _Var26 = *(__int64 *)(local_80 + 0x10);
    _swift_bridgeObjectRelease();
    Swift::Dictionary::reserveCapacity(_Var26,DVar6);
    _swift_getKeyPath(&DAT_10042d1d8);
    _swift_getKeyPath(&DAT_10042d200);
    Combine::Published::_get_subscript(&local_80);
    _swift_release(puVar20);
    _swift_release(puVar23);
    local_110 = *(ulong *)(local_80 + 0x10);
    if (local_110 == 0) {
      _swift_bridgeObjectRelease();
      puVar20 = local_70;
      puVar23 = local_78;
    }
    else {
      uVar29 = 0;
      local_118 = local_80 +
                  ((ulong)*(byte *)(local_f0 + 0x50) + 0x20 &
                  ((ulong)*(byte *)(local_f0 + 0x50) ^ 0xffffffffffffffff));
      local_c8 = local_70;
      local_120 = local_80;
      puVar16 = local_90;
      UVar7.unknown = local_e8;
      puVar23 = local_78;
      lVar17 = local_f0;
      lVar10 = local_d0;
      lVar3 = local_d8;
      lVar18 = local_130;
      local_150 = lVar28;
      do {
        if (*(ulong *)(local_120 + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x100275658);
          (*pcVar22)();
        }
        local_a0 = *(long *)(lVar17 + 0x48);
        local_c0 = uVar29;
        FUN_100029504(local_118 + local_a0 * uVar29,UVar7.unknown,FUN_10040211c);
        FUN_100007e64(UVar7.unknown,puVar16,FUN_10040211c);
        SVar30 = Foundation::URL::get_lastPathComponent(UVar7);
        pvVar11 = SVar30.bridgeObject;
        local_88 = SVar30.str;
        uVar29 = (ulong)local_88 & 0xffffffffffff;
        if (((ulong)pvVar11 & 0x2000000000000000) != 0) {
          uVar29 = (ulong)pvVar11 >> 0x38 & 0xf;
        }
        if (uVar29 == 0) {
          _swift_bridgeObjectRelease(pvVar11);
          local_88 = (char *)*puVar16;
          pvVar11 = (void *)puVar16[1];
          _swift_bridgeObjectRetain(pvVar11);
          SVar30.bridgeObject = pvVar11;
          SVar30.str = local_88;
        }
        puVar20 = local_c8;
        pvVar11 = SVar30.bridgeObject;
        local_88 = SVar30.str;
        if (*(long *)(local_c8 + 0x10) == 0) {
          bVar21 = true;
        }
        else {
          local_b0 = pvVar11;
          _swift_bridgeObjectRetain(local_c8);
          pcVar8 = local_88;
          FUN_10000464c(local_88);
          bVar21 = ((ulong)pvVar11 & 1) == 0;
          if (!bVar21) {
            FUN_100029504(*(long *)(puVar20 + 0x38) + (long)pcVar8 * local_a0,lVar10,FUN_10040211c);
          }
          _swift_bridgeObjectRelease(puVar20);
          SVar30.bridgeObject = local_b0;
          SVar30.str = local_88;
        }
        local_b0 = SVar30.bridgeObject;
        local_88 = SVar30.str;
        pcVar22 = *(code **)(lVar17 + 0x38);
        (*pcVar22)(lVar10,bVar21,1,lVar18);
        lVar24 = local_a8;
        local_b8 = pcVar22;
        (*pcVar22)(local_a8,1,1,lVar18);
        lVar19 = (long)*(int *)(local_e0 + 0x30);
        FUN_1000087e4(lVar10,lVar3,&DAT_10054ac40,&DAT_10041ce70);
        FUN_1000087e4(lVar24,lVar3 + lVar19,&DAT_10054ac40,&DAT_10041ce70);
        pcVar22 = *(code **)(lVar17 + 0x30);
        lVar24 = lVar3;
        (*pcVar22)(lVar3,1,lVar18);
        lVar17 = local_a8;
        uVar29 = local_138;
        local_98 = pcVar22;
        if ((int)lVar24 == 1) {
          FUN_10002a29c(local_a8,&DAT_10054ac40,&DAT_10041ce70);
          FUN_10002a29c(lVar10,&DAT_10054ac40,&DAT_10041ce70);
          lVar19 = lVar3 + lVar19;
          (*pcVar22)(lVar19,1,lVar18);
          if ((int)lVar19 == 1) {
            FUN_10002a29c(lVar3,&DAT_10054ac40,&DAT_10041ce70);
LAB_1002750a4:
            lVar17 = local_150;
            FUN_100029504(local_90,local_150,FUN_10040211c);
            pcVar22 = local_b8;
            (*local_b8)(lVar17,0,1,lVar18);
            lVar3 = local_140;
            FUN_100007e1c(lVar17,local_140,&DAT_10054ac40,&DAT_10041ce70);
            lVar17 = lVar3;
            (*local_98)(lVar3,1,lVar18);
            if ((int)lVar17 == 1) {
              FUN_10002a29c(lVar3,&DAT_10054ac40,&DAT_10041ce70);
              puVar20 = local_c8;
              _swift_bridgeObjectRetain(local_c8);
              pvVar11 = local_b0;
              pcVar8 = local_88;
              pvVar13 = local_b0;
              FUN_10000464c();
              _swift_bridgeObjectRelease(puVar20);
              if (((ulong)pvVar13 & 1) == 0) {
                uVar12 = 1;
                lVar17 = local_160;
                lVar3 = local_d8;
              }
              else {
                puVar4 = puVar20;
                _swift_isUniquelyReferenced_nonNull_native();
                lVar3 = local_d8;
                local_80 = puVar20;
                if ((int)puVar4 == 0) {
                  FUN_1001cb71c();
                }
                puVar20 = local_80;
                _swift_bridgeObjectRelease
                          (*(undefined8 *)(*(long *)(local_80 + 0x30) + (long)pcVar8 * 0x10 + 8));
                lVar17 = local_160;
                FUN_100007e64(*(long *)(puVar20 + 0x38) + (long)pcVar8 * local_a0,local_160,
                              FUN_10040211c);
                local_c8 = puVar20;
                FUN_1001d22e4(pcVar8,puVar20);
                uVar12 = 0;
              }
              (*pcVar22)(lVar17,uVar12,1,lVar18);
              FUN_10002a29c(lVar17,&DAT_10054ac40,&DAT_10041ce70);
              lVar10 = local_d0;
            }
            else {
              FUN_100007e64(lVar3,local_148,FUN_10040211c);
              puVar20 = local_c8;
              puVar4 = local_c8;
              _swift_isUniquelyReferenced_nonNull_native();
              pvVar11 = local_b0;
              local_80 = puVar20;
              pcVar8 = local_88;
              pvVar13 = local_b0;
              FUN_10000464c();
              uVar29 = (ulong)~(uint)pvVar13 & 1;
              lVar17 = *(long *)(puVar20 + 0x10) + uVar29;
              if (SCARRY8(*(long *)(puVar20 + 0x10),uVar29)) {
                    /* WARNING: Does not return */
                pcVar22 = (code *)SoftwareBreakpoint(1,0x100275664);
                (*pcVar22)();
              }
              if (*(long *)(puVar20 + 0x18) < lVar17) {
                FUN_1001ce764(lVar17,puVar4);
                pcVar8 = local_88;
                pvVar14 = pvVar11;
                FUN_10000464c();
                if (((uint)pvVar13 & 1) != ((uint)pvVar14 & 1)) goto LAB_100275668;
              }
              else if (((ulong)puVar4 & 1) == 0) {
                FUN_1001cb71c();
              }
              puVar20 = local_80;
              local_c8 = local_80;
              if (((ulong)pvVar13 & 1) == 0) {
                *(ulong *)(local_80 + ((ulong)pcVar8 >> 6) * 8 + 0x40) =
                     *(ulong *)(local_80 + ((ulong)pcVar8 >> 6) * 8 + 0x40) |
                     1L << ((ulong)pcVar8 & 0x3f);
                puVar1 = (ulong *)(*(long *)(local_80 + 0x30) + (long)pcVar8 * 0x10);
                *puVar1 = (ulong)local_88;
                puVar1[1] = (ulong)pvVar11;
                FUN_100007e64(local_148,*(long *)(local_80 + 0x38) + (long)pcVar8 * local_a0,
                              FUN_10040211c);
                lVar17 = *(long *)(puVar20 + 0x10);
                if (SCARRY8(lVar17,1)) {
                    /* WARNING: Does not return */
                  pcVar22 = (code *)SoftwareBreakpoint(1,0x100275668);
                  (*pcVar22)();
                }
                *(long *)(puVar20 + 0x10) = lVar17 + 1;
                _swift_bridgeObjectRetain(pvVar11);
                lVar10 = local_d0;
                lVar3 = local_d8;
              }
              else {
                FUN_10027f714(local_148,*(long *)(local_80 + 0x38) + (long)pcVar8 * local_a0);
                lVar10 = local_d0;
                lVar3 = local_d8;
              }
            }
          }
          else {
LAB_100274fec:
            FUN_10002a29c(lVar3,&DAT_10054b6b8,&DAT_10041ca50);
            pcVar22 = local_b8;
            pvVar11 = local_b0;
          }
        }
        else {
          FUN_1000087e4(lVar3,local_138,&DAT_10054ac40,&DAT_10041ce70);
          lVar10 = lVar3 + lVar19;
          (*pcVar22)(lVar10,1,lVar18);
          lVar18 = local_158;
          if ((int)lVar10 == 1) {
            FUN_10002a29c(lVar17,&DAT_10054ac40,&DAT_10041ce70);
            lVar10 = local_d0;
            FUN_10002a29c(local_d0,&DAT_10054ac40,&DAT_10041ce70);
            FUN_100029548(uVar29,FUN_10040211c);
            lVar18 = local_130;
            goto LAB_100274fec;
          }
          FUN_100007e64(lVar3 + lVar19,local_158,FUN_10040211c);
          uVar9 = uVar29;
          FUN_10040a7a0(uVar29,lVar18);
          FUN_100029548(lVar18,FUN_10040211c);
          FUN_10002a29c(lVar17,&DAT_10054ac40,&DAT_10041ce70);
          lVar10 = local_d0;
          FUN_10002a29c(local_d0,&DAT_10054ac40,&DAT_10041ce70);
          FUN_100029548(uVar29,FUN_10040211c);
          FUN_10002a29c(lVar3,&DAT_10054ac40,&DAT_10041ce70);
          pcVar22 = local_b8;
          pvVar11 = local_b0;
          lVar3 = local_d8;
          lVar18 = local_130;
          if ((uVar9 & 1) != 0) goto LAB_1002750a4;
        }
        lVar19 = local_f8;
        lVar17 = local_100;
        FUN_100029504(local_90,local_100,FUN_10040211c);
        (*pcVar22)(lVar17,0,1,lVar18);
        FUN_100007e1c(lVar17,lVar19,&DAT_10054ac40,&DAT_10041ce70);
        lVar17 = lVar19;
        (*local_98)(lVar19,1,lVar18);
        if ((int)lVar17 == 1) {
          FUN_10002a29c(lVar19,&DAT_10054ac40,&DAT_10041ce70);
          _swift_bridgeObjectRetain(puVar23);
          pcVar8 = local_88;
          pvVar13 = pvVar11;
          FUN_10000464c();
          _swift_bridgeObjectRelease(puVar23);
          puVar16 = local_90;
          if (((ulong)pvVar13 & 1) == 0) {
            FUN_100029548(local_90,FUN_10040211c);
            _swift_bridgeObjectRelease(pvVar11);
            uVar12 = 1;
            lVar17 = local_128;
          }
          else {
            puVar20 = puVar23;
            _swift_isUniquelyReferenced_nonNull_native();
            local_80 = puVar23;
            if ((int)puVar20 == 0) {
              FUN_1001cb71c();
            }
            puVar23 = local_80;
            _swift_bridgeObjectRelease
                      (*(undefined8 *)(*(long *)(local_80 + 0x30) + (long)pcVar8 * 0x10 + 8));
            lVar17 = local_128;
            FUN_100007e64(*(long *)(puVar23 + 0x38) + (long)pcVar8 * local_a0,local_128,
                          FUN_10040211c);
            FUN_1001d22e4(pcVar8,puVar23);
            _swift_bridgeObjectRelease(pvVar11);
            puVar16 = local_90;
            FUN_100029548(local_90,FUN_10040211c);
            uVar12 = 0;
          }
          (*pcVar22)(lVar17,uVar12,1,lVar18);
          FUN_10002a29c(lVar17,&DAT_10054ac40,&DAT_10041ce70);
          UVar7.unknown = local_e8;
          lVar17 = local_f0;
        }
        else {
          FUN_100007e64(lVar19,local_108,FUN_10040211c);
          puVar20 = puVar23;
          _swift_isUniquelyReferenced_nonNull_native();
          pcVar8 = local_88;
          pvVar13 = pvVar11;
          local_80 = puVar23;
          FUN_10000464c();
          lVar17 = local_f0;
          uVar29 = (ulong)~(uint)pvVar13 & 1;
          lVar3 = *(long *)(puVar23 + 0x10) + uVar29;
          if (SCARRY8(*(long *)(puVar23 + 0x10),uVar29)) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x10027565c);
            (*pcVar22)();
          }
          if (*(long *)(puVar23 + 0x18) < lVar3) {
            FUN_1001ce764(lVar3,puVar20);
            pcVar8 = local_88;
            pvVar14 = pvVar11;
            FUN_10000464c();
            lVar17 = local_f0;
            UVar7.unknown = local_e8;
            lVar3 = local_d8;
            puVar23 = local_80;
            if (((uint)pvVar13 & 1) != ((uint)pvVar14 & 1)) {
LAB_100275668:
              Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x100275678);
              (*pcVar22)();
            }
          }
          else {
            UVar7.unknown = local_e8;
            lVar3 = local_d8;
            puVar23 = local_80;
            if (((ulong)puVar20 & 1) == 0) {
              FUN_1001cb71c();
              UVar7.unknown = local_e8;
              lVar3 = local_d8;
              puVar23 = local_80;
            }
          }
          local_e8 = UVar7.unknown;
          local_d8 = lVar3;
          local_80 = puVar23;
          if (((ulong)pvVar13 & 1) == 0) {
            *(ulong *)(puVar23 + ((ulong)pcVar8 >> 6) * 8 + 0x40) =
                 *(ulong *)(puVar23 + ((ulong)pcVar8 >> 6) * 8 + 0x40) |
                 1L << ((ulong)pcVar8 & 0x3f);
            puVar1 = (ulong *)(*(long *)(puVar23 + 0x30) + (long)pcVar8 * 0x10);
            *puVar1 = (ulong)local_88;
            puVar1[1] = (ulong)pvVar11;
            FUN_100007e64(local_108,*(long *)(puVar23 + 0x38) + (long)pcVar8 * local_a0,
                          FUN_10040211c);
            puVar16 = local_90;
            FUN_100029548(local_90,FUN_10040211c);
            if (SCARRY8(*(long *)(puVar23 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x100275660);
              (*pcVar22)();
            }
            *(long *)(puVar23 + 0x10) = *(long *)(puVar23 + 0x10) + 1;
            lVar10 = local_d0;
          }
          else {
            FUN_10027f714(local_108,*(long *)(puVar23 + 0x38) + (long)pcVar8 * local_a0);
            _swift_bridgeObjectRelease(pvVar11);
            puVar16 = local_90;
            FUN_100029548(local_90,FUN_10040211c);
            lVar10 = local_d0;
          }
        }
        puVar20 = local_c8;
        uVar29 = local_c0 + 1;
      } while (local_110 != uVar29);
      local_70 = local_c8;
      local_78 = puVar23;
      _swift_bridgeObjectRelease();
    }
    uVar12 = *apuStack_170[1];
    uVar2 = apuStack_170[1][1];
    *apuStack_170[1] = puVar20;
    apuStack_170[1][1] = puVar23;
    _swift_bridgeObjectRetain_n(puVar20,2);
    _swift_bridgeObjectRetain(puVar23);
    FUN_10027f5e8(uVar12,uVar2);
    _swift_bridgeObjectRelease(puVar20);
  }
  else {
    puVar23 = (undefined *)apuStack_170[1][1];
    _swift_bridgeObjectRetain(puVar20);
    _swift_bridgeObjectRetain(puVar23);
  }
  auVar31._8_8_ = puVar23;
  auVar31._0_8_ = puVar20;
  return auVar31;
}

