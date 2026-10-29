// rea decompile_all
// name: FUN_10002cbb8
// address: 0x10002cbb8
// body: available
// range: 0x10002cbb8-0x10002deeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010002d7cc */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 ******* FUN_10002cbb8(undefined8 *******param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *puVar5;
  _StringGuts _Var6;
  undefined8 uVar7;
  _StringGuts _Var8;
  int iVar9;
  String SVar10;
  bool bVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 ****ppppuVar14;
  undefined8 ******ppppppuVar15;
  _ArrayBuffer<undefined> _Var16;
  Hasher into;
  undefined8 *******pppppppuVar17;
  undefined8 *******pppppppuVar18;
  undefined8 ****ppppuVar19;
  undefined8 ****ppppuVar20;
  undefined8 ******ppppppuVar21;
  long extraout_x8;
  long extraout_x8_00;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 *puVar25;
  String *pSVar26;
  ulong uVar27;
  undefined8 ******ppppppuVar28;
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
  long extraout_x12_11;
  long extraout_x12_12;
  undefined8 extraout_x13;
  long extraout_x14;
  undefined8 uVar29;
  long unaff_x20;
  code *pcVar30;
  undefined8 *******pppppppuVar31;
  undefined8 *******pppppppuVar32;
  long *plVar33;
  undefined8 ******ppppppuVar34;
  undefined8 ****ppppuVar35;
  long lVar36;
  undefined8 ****ppppuVar37;
  undefined8 *****pppppuVar38;
  double dVar39;
  String local_1d0;
  undefined8 *local_1c0;
  long local_1b8;
  undefined8 *local_1b0;
  long local_1a8;
  String *local_1a0;
  undefined8 *local_198;
  long local_190;
  undefined8 *******local_188;
  long local_180;
  long local_178;
  undefined8 *******local_170;
  undefined8 ******local_168;
  long local_160;
  undefined8 local_158;
  undefined8 *******local_150;
  undefined8 ******local_148;
  undefined8 ******local_140;
  undefined8 *******local_138;
  long local_130;
  long local_128;
  undefined8 ******local_120;
  ulong local_118;
  undefined8 ******local_110;
  undefined8 *******local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined *local_80;
  
  puVar12 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = 0;
  local_150 = (undefined8 *******)((long)&local_1d0 - extraout_x8);
  FUN_10040211c();
  local_128 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  puVar25 = (undefined8 *)
            (((long)&local_1d0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_1c0 = puVar25;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = (long)puVar25 - extraout_x12;
  local_1a8 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar25 = (undefined8 *)(lVar13 - extraout_x12_00);
  local_1b0 = puVar25;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = (long)puVar25 - extraout_x12_01;
  local_178 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar13 - extraout_x12_02;
  local_1b8 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pSVar26 = (String *)(lVar13 - extraout_x12_03);
  local_1a0 = pSVar26;
  (*(code *)PTR____chkstk_darwin_100521118)();
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = (long)pSVar26 + (-extraout_x12_05 - extraout_x12_04);
  local_180 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar13 - extraout_x12_06;
  local_130 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar13 - extraout_x12_07;
  local_190 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar25 = (undefined8 *)(lVar13 - extraout_x12_08);
  local_198 = puVar25;
  (*(code *)PTR____chkstk_darwin_100521118)();
  plVar33 = (long *)((long)puVar25 - extraout_x12_09);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = (long)plVar33 - extraout_x12_10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar36 = lVar13 - extraout_x12_11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_138 = (undefined8 *******)(lVar36 - extraout_x12_12);
  ppppppuVar34 = param_1[2];
  pppppppuVar32 = (undefined8 *******)PTR___swiftEmptyArrayStorage_100524190;
  if (ppppppuVar34 != (undefined8 ******)0x0) {
    ppppppuVar28 = (undefined8 ******)PTR___swiftEmptyArrayStorage_100524190;
    local_158 = extraout_x13;
    FUN_1000064b8();
    pcVar30 = (code *)0x0;
    local_118 = (ulong)*(byte *)(extraout_x14 + 0x50) + 0x20 &
                ((ulong)*(byte *)(extraout_x14 + 0x50) ^ 0xffffffffffffffff);
    puVar12 = (undefined *)((long)param_1 + local_118);
    lVar22 = *(long *)(extraout_x14 + 0x48);
    local_1d0.str = (char *)param_1;
    local_1d0.bridgeObject = puVar12;
    local_160 = extraout_x14;
    local_140 = ppppppuVar34;
    local_120 = ppppppuVar28;
    do {
      pppppppuVar32 = local_138;
      local_110 = ppppppuVar34;
      FUN_10002f154(puVar12,local_138);
      FUN_10002f198(pppppppuVar32,lVar36);
      ppppuVar35 = (undefined8 ****)0xe600000000000000;
      ppppuVar37 = (undefined8 ****)0x736569766f4d;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(lVar36 + *(int *)(local_128 + 0x24))) {
      case 1:
        ppppuVar35 = (undefined8 ****)0xe800000000000000;
        ppppuVar37 = (undefined8 ****)0x7363696870617247;
        break;
      case 2:
        ppppuVar35 = (undefined8 ****)0xe500000000000000;
        ppppuVar37 = (undefined8 ****)0x73656d6147;
        break;
      case 3:
        ppppuVar35 = (undefined8 ****)0xe400000000000000;
        ppppuVar37 = (undefined8 ****)0x73726143;
        break;
      case 4:
        ppppuVar37 = (undefined8 ****)0x656c706f6550;
        break;
      case 5:
        ppppuVar35 = (undefined8 ****)0xe500000000000000;
        ppppuVar37 = (undefined8 ****)0x656d696e41;
        break;
      case 6:
        ppppuVar35 = (undefined8 ****)0xe500000000000000;
        ppppuVar37 = (undefined8 ****)0x726568744f;
        break;
      case 7:
        ppppuVar35 = (undefined8 ****)0xe500000000000000;
        ppppuVar37 = (undefined8 ****)0x6563617053;
        break;
      case 8:
        ppppuVar37 = (undefined8 ****)0x65727574614e;
        break;
      case 9:
        ppppuVar35 = (undefined8 ****)0xea00000000007473;
        ppppuVar37 = (undefined8 ****)0x696c616d696e694d;
        break;
      case 10:
        ppppuVar35 = (undefined8 ****)0xe700000000000000;
        ppppuVar37 = (undefined8 ****)0x736c616d696e41;
        break;
      case 0xb:
        ppppuVar37 = (undefined8 ****)0x7265746e6957;
        break;
      case 0xc:
        ppppuVar35 = (undefined8 ****)0xe800000000000000;
        ppppuVar37 = (undefined8 ****)0x7472416c65786950;
        break;
      case 0xd:
        ppppuVar35 = (undefined8 ****)0xe500000000000000;
        ppppuVar37 = (undefined8 ****)0x6946696353;
        break;
      case 0xe:
        ppppuVar35 = (undefined8 ****)0xe700000000000000;
        ppppuVar37 = (undefined8 ****)0x6c6172656e6547;
      }
      FUN_10002f154(lVar36,lVar13);
      FUN_10002f6dc(pcVar30,0);
      pppppppuVar32 = (undefined8 *******)local_120;
      ppppppuVar34 = local_120;
      _swift_isUniquelyReferenced_nonNull_native();
      local_f8 = pppppppuVar32;
      ppppuVar14 = ppppuVar37;
      ppppuVar19 = ppppuVar35;
      FUN_10000464c();
      uVar27 = (ulong)~(uint)ppppuVar19 & 1;
      lVar2 = (long)pppppppuVar32[2] + uVar27;
      if (SCARRY8((long)pppppppuVar32[2],uVar27)) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x10002deac);
        (*pcVar30)();
      }
      if ((long)pppppppuVar32[3] < lVar2) {
        FUN_1001cfd9c(lVar2,ppppppuVar34);
        pppppppuVar32 = local_f8;
        ppppuVar14 = ppppuVar37;
        ppppuVar20 = ppppuVar35;
        FUN_10000464c();
        if (((uint)ppppuVar19 & 1) != ((uint)ppppuVar20 & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar30 = (code *)SoftwareBreakpoint(1,0x10002deec);
          (*pcVar30)();
        }
      }
      else if (((ulong)ppppppuVar34 & 1) == 0) {
        FUN_1001cc540();
        pppppppuVar32 = local_f8;
      }
      if (((ulong)ppppuVar19 & 1) == 0) {
        pppppppuVar32[((ulong)ppppuVar14 >> 6) + 8] =
             (undefined8 ******)
             ((ulong)pppppppuVar32[((ulong)ppppuVar14 >> 6) + 8] | 1L << ((ulong)ppppuVar14 & 0x3f))
        ;
        pppppuVar38 = pppppppuVar32[6];
        pppppuVar38[(long)ppppuVar14 * 2] = ppppuVar37;
        (pppppuVar38 + (long)ppppuVar14 * 2)[1] = ppppuVar35;
        pppppppuVar32[7][(long)ppppuVar14] =
             (undefined8 *****)PTR___swiftEmptyArrayStorage_100524190;
        if (SCARRY8((long)pppppppuVar32[2],1)) {
                    /* WARNING: Does not return */
          pcVar30 = (code *)SoftwareBreakpoint(1,0x10002deb0);
          (*pcVar30)();
        }
        pppppppuVar32[2] = (undefined8 ******)((long)pppppppuVar32[2] + 1);
        _swift_bridgeObjectRetain(ppppuVar35);
      }
      pppppuVar38 = pppppppuVar32[7];
      pppppppuVar31 = (undefined8 *******)pppppuVar38[(long)ppppuVar14];
      pppppppuVar17 = pppppppuVar31;
      local_120 = pppppppuVar32;
      _swift_isUniquelyReferenced_nonNull_native();
      pppppuVar38[(long)ppppuVar14] = pppppppuVar31;
      pppppppuVar32 = pppppppuVar31;
      if (((ulong)pppppppuVar17 & 1) == 0) {
        pppppppuVar32 = (undefined8 *******)0x0;
        FUN_1001c4344(0,(long)pppppppuVar31[2] + 1,1,pppppppuVar31);
        pppppuVar38[(long)ppppuVar14] = pppppppuVar32;
        pppppppuVar17 = pppppppuVar32;
      }
      ppppppuVar28 = pppppppuVar32[2];
      pppppppuVar31 = pppppppuVar32;
      if ((undefined8 ******)((ulong)pppppppuVar32[3] >> 1) <= ppppppuVar28) {
        pppppppuVar31 = (undefined8 *******)(ulong)((undefined8 ******)0x1 < pppppppuVar32[3]);
        FUN_1001c4344(pppppppuVar31,(undefined8 ******)((long)ppppppuVar28 + 1U),1,pppppppuVar32);
        pppppuVar38[(long)ppppuVar14] = pppppppuVar31;
        pppppppuVar17 = pppppppuVar31;
      }
      ppppppuVar34 = local_110;
      pppppppuVar31[2] = (undefined8 ******)((long)ppppppuVar28 + 1U);
      FUN_10002f198(lVar13,(undefined *)
                           ((long)pppppppuVar31 + (long)ppppppuVar28 * lVar22 + local_118));
      _swift_bridgeObjectRelease(ppppuVar35);
      FUN_10002f1dc(lVar36);
      ppppppuVar28 = local_120;
      puVar12 = puVar12 + lVar22;
      pcVar30 = FUN_10002e8b4;
      ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + -1);
    } while (ppppppuVar34 != (undefined8 ******)0x0);
    local_80 = PTR___swiftEmptySetSingleton_1005241a0;
    pppppppuVar31 = (undefined8 *******)local_120[2];
    _swift_retain(local_120);
    pppppppuVar32 = (undefined8 *******)PTR___swiftEmptyArrayStorage_100524190;
    if (pppppppuVar31 != (undefined8 *******)0x0) {
      _swift_retain(ppppppuVar28);
      pppppppuVar32 = pppppppuVar31;
      FUN_1001c5970(pppppppuVar31,0);
      pppppppuVar17 = &local_f8;
      thunk_FUN_1001aae44(pppppppuVar17,pppppppuVar32 + 4,pppppppuVar31,ppppppuVar28);
      FUN_10002f6ec(local_f8,local_f0,local_e8,uStack_e0,local_d8);
      if (pppppppuVar17 != pppppppuVar31) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x10002d280);
        (*pcVar30)();
      }
    }
    local_f8 = pppppppuVar32;
    FUN_100328ac0();
    ppppppuVar34 = local_120;
    _swift_release(local_120);
    local_168 = local_f8[2];
    pppppppuVar31 = (undefined8 *******)PTR___swiftEmptyArrayStorage_100524190;
    if (local_168 != (undefined8 ******)0x0) {
      ppppppuVar28 = (undefined8 ******)0x0;
      local_110 = _TtC7Wallper21HeroCarouselViewModel::recentlyShownIDs;
      local_188 = local_f8 + 4;
      local_170 = local_f8;
      do {
        if (local_170[2] <= ppppppuVar28) {
                    /* WARNING: Does not return */
          pcVar30 = (code *)SoftwareBreakpoint(1,0x10002deb4);
          (*pcVar30)();
        }
        pppppppuVar32 = (undefined8 *******)PTR___swiftEmptyArrayStorage_100524190;
        local_148 = ppppppuVar28;
        if (ppppppuVar34[2] != (undefined8 *****)0x0) {
          ppppppuVar15 = local_188[(long)ppppppuVar28 * 2];
          ppppppuVar28 = (local_188 + (long)ppppppuVar28 * 2)[1];
          _swift_retain(ppppppuVar34);
          _swift_bridgeObjectRetain(ppppppuVar28);
          ppppppuVar21 = ppppppuVar28;
          FUN_10000464c();
          pppppppuVar32 = (undefined8 *******)PTR___swiftEmptyArrayStorage_100524190;
          if (((ulong)ppppppuVar21 & 1) != 0) {
            pppppppuVar32 = (undefined8 *******)ppppppuVar34[7][(long)ppppppuVar15];
            _swift_bridgeObjectRetain(pppppppuVar32);
          }
          _swift_bridgeObjectRelease(ppppppuVar28);
          _swift_release(ppppppuVar34);
        }
        local_138 = pppppppuVar31;
        local_f8 = pppppppuVar32;
        FUN_1003288d0();
        pppppppuVar32 = local_f8;
        ppppppuVar34 = local_f8[2];
        _swift_beginAccess(unaff_x20 + (long)local_110,auStack_98,0,0);
        uVar27 = local_118;
        pppppppuVar17 = (undefined8 *******)PTR___swiftEmptyArrayStorage_100524190;
        if (ppppppuVar34 != (undefined8 ******)0x0) {
          ppppppuVar28 = (undefined8 ******)0x0;
          do {
            if (pppppppuVar32[2] <= ppppppuVar28) {
                    /* WARNING: Does not return */
              pcVar30 = (code *)SoftwareBreakpoint(1,0x10002dea8);
              (*pcVar30)();
            }
            ppppppuVar15 = (undefined8 ******)((long)ppppppuVar28 + 1);
            FUN_10002f154((undefined *)((long)pppppppuVar32 + (long)ppppppuVar28 * lVar22 + uVar27),
                          plVar33);
            puVar12 = (undefined *)*plVar33;
            puVar5 = (undefined *)plVar33[1];
            puVar25 = (undefined8 *)(*(long *)(unaff_x20 + (long)local_110) + 0x28);
            lVar13 = *(long *)(*(long *)(unaff_x20 + (long)local_110) + 0x10) + 1;
            do {
              lVar13 = lVar13 + -1;
              if (lVar13 == 0) {
                pppppppuVar31 = pppppppuVar17;
                _swift_isUniquelyReferenced_nonNull_native();
                local_f8 = pppppppuVar17;
                if (((ulong)pppppppuVar31 & 1) == 0) {
                  FUN_1001c5c4c(0,(long)pppppppuVar17[2] + 1,1);
                }
                ppppppuVar28 = local_f8[2];
                if ((undefined8 ******)((ulong)local_f8[3] >> 1) <= ppppppuVar28) {
                  FUN_1001c5c4c((undefined8 ******)0x1 < local_f8[3],
                                (undefined8 ******)((long)ppppppuVar28 + 1U),1);
                }
                pppppppuVar17 = local_f8;
                local_f8[2] = (undefined8 ******)((long)ppppppuVar28 + 1U);
                FUN_10002f198(plVar33,(undefined *)
                                      ((long)local_f8 + (long)ppppppuVar28 * lVar22 + local_118));
                goto LAB_10002d3fc;
              }
              puVar1 = puVar25 + -1;
              _Var6.unknown = (undefined *)*puVar25;
              if ((undefined *)*puVar1 == puVar12 && _Var6.unknown == puVar5) break;
              puVar25 = puVar25 + 2;
              bVar11 = Swift::_stringCompareWithSmolCheck
                                 ((undefined *)*puVar1,_Var6,
                                  (_StringComparisonResult)(__int8)puVar12);
            } while (!bVar11);
            FUN_10002f1dc(plVar33);
LAB_10002d3fc:
            ppppppuVar28 = ppppppuVar15;
          } while (ppppppuVar15 != ppppppuVar34);
        }
        _swift_release(pppppppuVar32);
        ppppppuVar34 = pppppppuVar17[2];
        if (ppppppuVar34 == (undefined8 ******)0x0) {
          uVar29 = 1;
          pppppppuVar32 = local_150;
          pppppppuVar31 = local_138;
        }
        else {
          thunk_FUN_100328848();
          pppppppuVar31 = local_138;
          pppppppuVar32 = local_150;
          if ((long)ppppppuVar34 < 0) {
                    /* WARNING: Does not return */
            pcVar30 = (code *)SoftwareBreakpoint(1,0x10002ded0);
            (*pcVar30)();
          }
          if (pppppppuVar17[2] <= ppppppuVar34) {
                    /* WARNING: Does not return */
            pcVar30 = (code *)SoftwareBreakpoint(1,0x10002ded4);
            (*pcVar30)();
          }
          FUN_10002f154((undefined *)((long)pppppppuVar17 + (long)ppppppuVar34 * lVar22 + local_118)
                        ,local_150);
          uVar29 = 0;
        }
        _swift_release(pppppppuVar17);
        lVar36 = local_128;
        lVar13 = local_160;
        (**(code **)(local_160 + 0x38))(pppppppuVar32,uVar29,1,local_128);
        pppppppuVar17 = pppppppuVar32;
        (**(code **)(lVar13 + 0x30))(pppppppuVar32,1,lVar36);
        puVar25 = local_198;
        if ((int)pppppppuVar17 == 1) {
          FUN_10002f6f4(pppppppuVar32);
        }
        else {
          FUN_10002f198(pppppppuVar32,local_198);
          uVar29 = *puVar25;
          uVar7 = puVar25[1];
          _swift_bridgeObjectRetain(uVar7);
          pppppppuVar17 = &local_f8;
          FUN_1001ca054(pppppppuVar17,uVar29,uVar7);
          _swift_bridgeObjectRelease(local_f0);
          if (((ulong)pppppppuVar17 & 1) == 0) {
            FUN_10002f1dc(puVar25);
          }
          else {
            FUN_10002f154(puVar25,local_190);
            pppppppuVar17 = pppppppuVar31;
            _swift_isUniquelyReferenced_nonNull_native();
            pppppppuVar32 = pppppppuVar31;
            if (((ulong)pppppppuVar17 & 1) == 0) {
              pppppppuVar32 = (undefined8 *******)0x0;
              FUN_1001c4344(0,(long)pppppppuVar31[2] + 1,1,pppppppuVar31);
              pppppppuVar17 = pppppppuVar32;
            }
            ppppppuVar34 = pppppppuVar32[2];
            pppppppuVar31 = pppppppuVar32;
            if ((undefined8 ******)((ulong)pppppppuVar32[3] >> 1) <= ppppppuVar34) {
              pppppppuVar31 = (undefined8 *******)(ulong)((undefined8 ******)0x1 < pppppppuVar32[3])
              ;
              FUN_1001c4344(pppppppuVar31,(undefined8 ******)((long)ppppppuVar34 + 1U),1,
                            pppppppuVar32);
              pppppppuVar17 = pppppppuVar31;
            }
            pppppppuVar31[2] = (undefined8 ******)((long)ppppppuVar34 + 1U);
            FUN_10002f198(local_190,
                          (undefined *)
                          ((long)pppppppuVar31 + (long)ppppppuVar34 * lVar22 + local_118));
            FUN_10002f1dc(puVar25);
            if ((undefined8 ******)0x8 < ppppppuVar34) break;
          }
        }
        ppppppuVar28 = (undefined8 ******)((long)local_148 + 1);
        ppppppuVar34 = local_120;
      } while (ppppppuVar28 != local_168);
    }
    _swift_release();
    if (pppppppuVar31[2] < (undefined8 ******)0xa) {
      iVar9 = *(int *)(local_128 + 0x20);
      pppppppuVar32 = (undefined8 *******)PTR___swiftEmptyArrayStorage_100524190;
      puVar12 = local_1d0.bridgeObject;
      local_138 = pppppppuVar31;
      do {
        lVar13 = local_130;
        FUN_10002f154(puVar12,local_130);
        uVar27 = *(ulong *)(lVar13 + iVar9);
        dVar39 = (double)(uVar27 & ((long)uVar27 >> 0x3f ^ 0xffffffffffffffffU)) + 2.0;
        _log();
        uVar29 = local_158;
        if (0x7fefffffffffffff < (ulong)ABS(dVar39)) {
                    /* WARNING: Does not return */
          pcVar30 = (code *)SoftwareBreakpoint(1,0x10002deb8);
          (*pcVar30)();
        }
        if (dVar39 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar30 = (code *)SoftwareBreakpoint(1,0x10002debc);
          (*pcVar30)();
        }
        if (9.223372036854776e+18 <= dVar39) {
                    /* WARNING: Does not return */
          pcVar30 = (code *)SoftwareBreakpoint(1,0x10002dec0);
          (*pcVar30)();
        }
        lVar36 = (long)dVar39;
        lVar13 = lVar36;
        if (lVar36 < 2) {
          lVar13 = 1;
        }
        if (4 < lVar13) {
          lVar13 = 5;
        }
        FUN_10002f154(local_130,local_158);
        _Var16 = Swift::Array<undefined>::_allocateBufferUninitialized(pppppppuVar17,local_128);
        *(long *)(_Var16.unknown + 0x10) = lVar13;
        puVar5 = _Var16.unknown + local_118;
        FUN_10002f154(uVar29,puVar5);
        if (1 < lVar36) {
          puVar3 = puVar5 + lVar22;
          FUN_10002f154(uVar29,puVar3);
          if (lVar36 != 2) {
            puVar3 = puVar3 + lVar22;
            FUN_10002f154(uVar29,puVar3);
            if (lVar36 != 3) {
              FUN_10002f154(uVar29,puVar3 + lVar22);
              if (lVar36 != 4) {
                FUN_10002f154(uVar29,puVar3 + lVar22 + lVar22);
              }
            }
          }
        }
        FUN_10002f1dc(uVar29);
        FUN_10002f1dc(local_130);
        uVar27 = *(ulong *)(_Var16.unknown + 0x10);
        ppppppuVar34 = pppppppuVar32[2];
        if (SCARRY8((long)ppppppuVar34,uVar27)) {
                    /* WARNING: Does not return */
          pcVar30 = (code *)SoftwareBreakpoint(1,0x10002dec4);
          (*pcVar30)();
        }
        pppppppuVar17 = pppppppuVar32;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((int)pppppppuVar17 == 0) ||
           (uVar23 = (ulong)pppppppuVar32[3] >> 1,
           (long)uVar23 < (long)((long)ppppppuVar34 + uVar27))) {
          FUN_1001c4344();
          uVar23 = (ulong)pppppppuVar17[3] >> 1;
          pppppppuVar32 = pppppppuVar17;
          if (*(long *)(_Var16.unknown + 0x10) == 0) goto LAB_10002d710;
LAB_10002d8d0:
          if (uVar23 - (long)pppppppuVar32[2] < uVar27) {
                    /* WARNING: Does not return */
            pcVar30 = (code *)SoftwareBreakpoint(1,0x10002decc);
            (*pcVar30)();
          }
          pppppppuVar17 =
               (undefined8 *******)
               ((long)pppppppuVar32 + (long)pppppppuVar32[2] * lVar22 + local_118);
          _swift_arrayInitWithCopy(pppppppuVar17,puVar5,uVar27,local_128);
          _swift_bridgeObjectRelease(_Var16.unknown);
          if (uVar27 != 0) {
            if (SCARRY8((long)pppppppuVar32[2],uVar27)) {
                    /* WARNING: Does not return */
              pcVar30 = (code *)SoftwareBreakpoint(1,0x10002dedc);
              (*pcVar30)();
            }
            pppppppuVar32[2] = (undefined8 ******)((long)pppppppuVar32[2] + uVar27);
          }
        }
        else {
          if (*(long *)(_Var16.unknown + 0x10) != 0) goto LAB_10002d8d0;
LAB_10002d710:
          _swift_bridgeObjectRelease(_Var16.unknown);
          if (uVar27 != 0) {
                    /* WARNING: Does not return */
            pcVar30 = (code *)SoftwareBreakpoint(1,0x10002dec8);
            (*pcVar30)();
          }
        }
        puVar12 = puVar12 + lVar22;
        local_140 = (undefined8 ******)((long)local_140 + -1);
      } while (local_140 != (undefined8 ******)0x0);
      local_f8 = pppppppuVar32;
      FUN_1003288d0();
      pppppppuVar32 = local_f8;
      uVar27 = local_118;
      ppppppuVar34 = local_f8[2];
      if (ppppppuVar34 != (undefined8 ******)0x0) {
        local_110 = _TtC7Wallper21HeroCarouselViewModel::recentlyShownIDs;
        _swift_beginAccess(unaff_x20 + (long)_TtC7Wallper21HeroCarouselViewModel::recentlyShownIDs,
                           auStack_b0,0,0);
        ppppppuVar28 = (undefined8 ******)0x0;
        pSVar26 = local_1a0;
        do {
          lVar13 = local_180;
          if (pppppppuVar32[2] <= ppppppuVar28) {
                    /* WARNING: Does not return */
            pcVar30 = (code *)SoftwareBreakpoint(1,0x10002ded8);
            (*pcVar30)();
          }
          FUN_10002f154((undefined *)((long)pppppppuVar32 + (long)ppppppuVar28 * lVar22 + uVar27),
                        local_180);
          FUN_10002f198(lVar13,pSVar26);
          puVar12 = local_80;
          if (local_138[2] < (undefined8 ******)0xa) {
            pcVar4 = pSVar26->str;
            puVar5 = pSVar26->bridgeObject;
            SVar10 = *pSVar26;
            if (*(long *)(local_80 + 0x10) != 0) {
              Swift::Hasher::init(*(__int64 *)(local_80 + 0x28));
              into.unknown = (undefined *)&local_f8;
              Swift::String::hash(into,SVar10);
              uVar23 = Swift::Hasher::_finalize(into);
              uVar24 = -1L << ((ulong)(byte)puVar12[0x20] & 0x3f);
              uVar23 = uVar23 & (uVar24 ^ 0xffffffffffffffff);
              if ((*(ulong *)(puVar12 + (uVar23 >> 6) * 8 + 0x38) >> (uVar23 & 0x3f) & 1) != 0) {
                do {
                  puVar25 = (undefined8 *)(*(long *)(puVar12 + 0x30) + uVar23 * 0x10);
                  _Var6.unknown = (undefined *)*puVar25;
                  _Var8.unknown = (undefined *)puVar25[1];
                  pSVar26 = local_1a0;
                  if ((_Var6.unknown == pcVar4 && _Var8.unknown == puVar5) ||
                     (bVar11 = Swift::_stringCompareWithSmolCheck
                                         (_Var6,_Var8,(_StringComparisonResult)(__int8)pcVar4),
                     pSVar26 = local_1a0, bVar11)) goto LAB_10002d9d8;
                  uVar23 = uVar23 + 1 & ~uVar24;
                } while ((*(ulong *)(puVar12 + (uVar23 >> 6) * 8 + 0x38) >> (uVar23 & 0x3f) & 1) !=
                         0);
              }
            }
            puVar25 = (undefined8 *)(*(long *)(unaff_x20 + (long)local_110) + 0x28);
            lVar13 = *(long *)(*(long *)(unaff_x20 + (long)local_110) + 0x10) + 1;
            do {
              lVar13 = lVar13 + -1;
              if (lVar13 == 0) {
                FUN_10002f154(local_1a0,local_1b8);
                pppppppuVar17 = local_138;
                _swift_isUniquelyReferenced_nonNull_native();
                if (((ulong)pppppppuVar17 & 1) == 0) {
                  pppppppuVar17 = (undefined8 *******)0x0;
                  FUN_1001c4344(0,(long)local_138[2] + 1,1);
                  local_138 = pppppppuVar17;
                }
                ppppppuVar15 = local_138[2];
                if ((undefined8 ******)((ulong)local_138[3] >> 1) <= ppppppuVar15) {
                  pppppppuVar17 = (undefined8 *******)(ulong)((undefined8 ******)0x1 < local_138[3])
                  ;
                  FUN_1001c4344(pppppppuVar17,(undefined8 ******)((long)ppppppuVar15 + 1U),1,
                                local_138);
                  local_138 = pppppppuVar17;
                }
                local_138[2] = (undefined8 ******)((long)ppppppuVar15 + 1U);
                FUN_10002f198(local_1b8,
                              (undefined *)
                              ((long)local_138 + (long)ppppppuVar15 * lVar22 + local_118));
                _swift_bridgeObjectRetain(puVar5);
                FUN_1001ca054(&local_f8,pcVar4,puVar5);
                _swift_bridgeObjectRelease(local_f0);
                pSVar26 = local_1a0;
                break;
              }
              puVar1 = puVar25 + -1;
              _Var6.unknown = (undefined *)*puVar25;
              pSVar26 = local_1a0;
              if ((undefined *)*puVar1 == pcVar4 && _Var6.unknown == puVar5) break;
              puVar25 = puVar25 + 2;
              bVar11 = Swift::_stringCompareWithSmolCheck
                                 ((undefined *)*puVar1,_Var6,(_StringComparisonResult)(__int8)pcVar4
                                 );
              pSVar26 = local_1a0;
            } while (!bVar11);
          }
LAB_10002d9d8:
          FUN_10002f1dc(pSVar26);
          ppppppuVar28 = (undefined8 ******)((long)ppppppuVar28 + 1);
        } while (ppppppuVar28 != ppppppuVar34);
      }
      _swift_release(pppppppuVar32);
      pppppppuVar31 = local_138;
    }
    if (pppppppuVar31[2] < (undefined8 ******)0xa) {
      local_f8 = (undefined8 *******)local_1d0.str;
      _swift_bridgeObjectRetain();
      FUN_1003288d0();
      pppppppuVar32 = local_f8;
      ppppppuVar34 = local_f8[2];
      if (ppppppuVar34 != (undefined8 ******)0x0) {
        puVar12 = (undefined *)((long)local_f8 + local_118);
        puVar25 = local_1b0;
        do {
          lVar13 = local_178;
          FUN_10002f154(puVar12,local_178);
          FUN_10002f198(lVar13,puVar25);
          if (pppppppuVar31[2] < (undefined8 ******)0xa) {
            uVar29 = *puVar25;
            uVar7 = puVar25[1];
            _swift_bridgeObjectRetain(uVar7);
            pppppppuVar17 = &local_f8;
            FUN_1001ca054(pppppppuVar17,uVar29,uVar7);
            _swift_bridgeObjectRelease(local_f0);
            if (((ulong)pppppppuVar17 & 1) != 0) {
              FUN_10002f154(puVar25,local_1a8);
              pppppppuVar17 = pppppppuVar31;
              _swift_isUniquelyReferenced_nonNull_native();
              pppppppuVar18 = pppppppuVar31;
              if (((ulong)pppppppuVar17 & 1) == 0) {
                pppppppuVar18 = (undefined8 *******)0x0;
                FUN_1001c4344(0,(long)pppppppuVar31[2] + 1,1,pppppppuVar31);
              }
              ppppppuVar28 = pppppppuVar18[2];
              pppppppuVar31 = pppppppuVar18;
              if ((undefined8 ******)((ulong)pppppppuVar18[3] >> 1) <= ppppppuVar28) {
                pppppppuVar31 =
                     (undefined8 *******)(ulong)((undefined8 ******)0x1 < pppppppuVar18[3]);
                FUN_1001c4344(pppppppuVar31,(undefined8 ******)((long)ppppppuVar28 + 1U),1,
                              pppppppuVar18);
              }
              pppppppuVar31[2] = (undefined8 ******)((long)ppppppuVar28 + 1U);
              FUN_10002f198(local_1a8,
                            (undefined *)
                            ((long)pppppppuVar31 + (long)ppppppuVar28 * lVar22 + local_118));
              puVar25 = local_1b0;
            }
          }
          FUN_10002f1dc(puVar25);
          puVar12 = puVar12 + lVar22;
          ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + -1);
        } while (ppppppuVar34 != (undefined8 ******)0x0);
      }
      _swift_release(pppppppuVar32);
    }
    ppppppuVar34 = pppppppuVar31[2];
    pppppppuVar32 = (undefined8 *******)PTR___swiftEmptyArrayStorage_100524190;
    if (ppppppuVar34 != (undefined8 ******)0x0) {
      local_f8 = (undefined8 *******)PTR___swiftEmptyArrayStorage_100524190;
      FUN_1001c5bc4(0,ppppppuVar34,0);
      puVar12 = (undefined *)((long)pppppppuVar31 + local_118);
      puVar25 = local_1c0;
      do {
        pppppppuVar32 = local_f8;
        FUN_10002f154(puVar12,puVar25);
        ppppppuVar28 = (undefined8 ******)*puVar25;
        ppppppuVar21 = (undefined8 ******)puVar25[1];
        _swift_bridgeObjectRetain(ppppppuVar21);
        FUN_10002f1dc(puVar25);
        ppppppuVar15 = pppppppuVar32[2];
        local_f8 = pppppppuVar32;
        if ((undefined8 ******)((ulong)pppppppuVar32[3] >> 1) <= ppppppuVar15) {
          FUN_1001c5bc4((undefined8 ******)0x1 < pppppppuVar32[3],
                        (undefined8 ******)((long)ppppppuVar15 + 1U),1);
          puVar25 = local_1c0;
        }
        local_f8[2] = (undefined8 ******)((long)ppppppuVar15 + 1U);
        local_f8[(long)ppppppuVar15 * 2 + 4] = ppppppuVar28;
        local_f8[(long)ppppppuVar15 * 2 + 5] = ppppppuVar21;
        puVar12 = puVar12 + lVar22;
        ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + -1);
        pppppppuVar32 = local_f8;
      } while (ppppppuVar34 != (undefined8 ******)0x0);
    }
    ppppppuVar34 = _TtC7Wallper21HeroCarouselViewModel::recentlyShownIDs;
    _swift_beginAccess(unaff_x20 + (long)_TtC7Wallper21HeroCarouselViewModel::recentlyShownIDs,
                       &local_f8,0x21,0);
    FUN_10012f2d0(pppppppuVar32);
    _swift_endAccess(&local_f8);
    uVar27 = *(ulong *)(*(long *)(unaff_x20 + (long)ppppppuVar34) + 0x10);
    lVar13 = uVar27 - 0x78;
    if (0x77 < uVar27 && lVar13 != 0) {
      _swift_beginAccess(unaff_x20 + (long)ppppppuVar34,&local_f8,0x21,0);
      FUN_100288288(0,lVar13);
      _swift_endAccess(&local_f8);
    }
    local_f8 = pppppppuVar31;
    _swift_bridgeObjectRetain(pppppppuVar31);
    FUN_1003288d0();
    puVar12 = local_80;
    pppppppuVar32 = local_f8;
    _swift_release(local_120);
    _swift_bridgeObjectRelease(pppppppuVar31);
    _swift_bridgeObjectRelease(puVar12);
  }
  return pppppppuVar32;
}

