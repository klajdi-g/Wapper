// rea decompile_all
// name: FUN_10030e474
// address: 0x10030e474
// body: available
// range: 0x10030e474-0x10030f203 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010030f1f8) */

void FUN_10030e474(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  State SVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  State *pSVar12;
  State *pSVar13;
  State SVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  long extraout_x8;
  byte *pbVar20;
  long extraout_x8_00;
  long lVar21;
  long extraout_x8_01;
  long lVar22;
  long extraout_x8_02;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  ulong uVar33;
  undefined8 uVar34;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x13;
  uint uVar35;
  long lVar36;
  ulong uVar37;
  ulong uVar38;
  bool bVar39;
  long unaff_x20;
  State *pSVar40;
  long lVar41;
  code *pcVar42;
  code *pcVar43;
  State SVar44;
  long lVar45;
  long lVar46;
  byte abStack_170 [8];
  long local_168;
  byte local_150 [176];
  undefined *local_a0 [2];
  State local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar7 = &DAT_100554260;
  FUN_100002f94(&DAT_100554260,&DAT_100426eb0);
  local_168 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_168 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = -extraout_x8;
  pbVar20 = abStack_170 + lVar5;
  puVar8 = &DAT_10054b6b8;
  FUN_100002f94(&DAT_10054b6b8,&DAT_10041ca50);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = (long)pbVar20 - extraout_x8_00;
  puVar10 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar10 + -8) + 0x40));
  lVar24 = lVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar25 = lVar24 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar26 = lVar25 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar27 = lVar26 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar28 = uVar27 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar22 = lVar28 - extraout_x12_03;
  lVar9 = 0;
  FUN_10040211c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  uVar29 = lVar22 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar30 = uVar29 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar31 = lVar30 - extraout_x12_05;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar32 = uVar31 - extraout_x12_06;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar36 = lVar32 - extraout_x12_07;
  lVar46 = *(long *)(param_1 + 0x10);
  puVar10 = PTR___swiftEmptyArrayStorage_100524190;
  if (lVar46 != 0) {
    iVar4 = *(int *)(lVar9 + 0x24);
    lVar41 = param_1 + ((ulong)*(byte *)(extraout_x13 + 0x50) + 0x20 &
                       ((ulong)*(byte *)(extraout_x13 + 0x50) ^ 0xffffffffffffffff));
    lVar45 = *(long *)(extraout_x13 + 0x48);
    lVar23 = lVar46;
    do {
      FUN_100029504(lVar41,lVar36,FUN_10040211c);
      cVar2 = *(char *)(lVar36 + iVar4);
      FUN_10002f1dc(lVar36);
      if (cVar2 != '\x0e') {
        puVar19 = puVar10;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar11 = puVar10;
        if (((ulong)puVar19 & 1) == 0) {
          puVar11 = (undefined *)0x0;
          FUN_1001c5864(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
        }
        uVar16 = *(ulong *)(puVar11 + 0x10);
        puVar10 = puVar11;
        if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar16) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
          FUN_1001c5864(puVar10,uVar16 + 1,1,puVar11);
        }
        *(ulong *)(puVar10 + 0x10) = uVar16 + 1;
        puVar10[uVar16 + 0x20] = cVar2;
      }
      lVar41 = lVar41 + lVar45;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
  }
  puVar19 = puVar10;
  FUN_10020cb30();
  _swift_bridgeObjectRelease(puVar10);
  pSVar40 = *(State **)(puVar19 + 0x10);
  pSVar12 = (State *)PTR___swiftEmptyArrayStorage_100524190;
  if (pSVar40 != (State *)0x0) {
    _swift_bridgeObjectRetain(puVar19);
    pSVar12 = pSVar40;
    FUN_1001c5af8(pSVar40,0);
    pSVar13 = &local_90;
    FUN_1001ab0e0(pSVar13,pSVar12 + 4,pSVar40,puVar19);
    FUN_10002f6ec(local_90.unknown,uStack_88,local_80,uStack_78,local_70);
    if (pSVar13 != pSVar40) {
                    /* WARNING: Does not return */
      pcVar42 = (code *)SoftwareBreakpoint(1,0x10030f1e8);
      (*pcVar42)();
    }
  }
  local_90.unknown = (undefined *)pSVar12;
  FUN_10030e2a0(&local_90);
  _swift_bridgeObjectRelease(puVar19);
  SVar6.unknown = local_90.unknown;
  SVar14.unknown = PTR___swiftEmptyArrayStorage_100524190;
  FUN_100007884();
  if (lVar46 != 0) {
    lVar36 = param_1 + ((ulong)*(byte *)(extraout_x13 + 0x50) + 0x20 &
                       ((ulong)*(byte *)(extraout_x13 + 0x50) ^ 0xffffffffffffffff));
    lVar23 = *(long *)(extraout_x13 + 0x48);
    lVar41 = lVar46;
    do {
      FUN_100029504(lVar36,lVar32,FUN_10040211c);
      uVar16 = uVar31;
      FUN_100007e64(lVar32,uVar31,FUN_10040211c);
      bVar3 = *(byte *)(uVar31 + (long)*(int *)(lVar9 + 0x24));
      uVar37 = (ulong)bVar3;
      uVar35 = (uint)bVar3;
      if (uVar35 == 0xe) {
        FUN_10002f1dc(uVar31);
      }
      else {
        if (((State *)((long)SVar14.unknown + 0x10))->unknown == (undefined *)0x0) {
          bVar39 = true;
        }
        else {
          _swift_bridgeObjectRetain(SVar14.unknown);
          FUN_100004958(uVar37);
          bVar39 = (uVar16 & 1) == 0;
          if (!bVar39) {
            FUN_100029504(((State *)((long)SVar14.unknown + 0x38))->unknown + uVar37 * lVar23,lVar22
                          ,FUN_10040211c);
          }
          _swift_bridgeObjectRelease(SVar14.unknown);
        }
        pcVar42 = *(code **)(extraout_x13 + 0x38);
        (*pcVar42)(lVar22,bVar39,1,lVar9);
        (*pcVar42)(lVar28,1,1,lVar9);
        lVar45 = (long)*(int *)(puVar8 + 0x30);
        uVar16 = 0;
        FUN_1000087e4(lVar22,lVar21,&DAT_10054ac40,&DAT_10041ce70);
        FUN_1000087e4(lVar28,lVar21 + lVar45,&DAT_10054ac40,&DAT_10041ce70);
        pcVar43 = *(code **)(extraout_x13 + 0x30);
        lVar15 = lVar21;
        (*pcVar43)(lVar21,1,lVar9);
        if ((int)lVar15 == 1) {
          FUN_10002a29c(lVar28,&DAT_10054ac40,&DAT_10041ce70);
          FUN_10002a29c(lVar22,&DAT_10054ac40,&DAT_10041ce70);
          lVar45 = lVar21 + lVar45;
          (*pcVar43)(lVar45,1,lVar9);
          if ((int)lVar45 == 1) {
            FUN_10002a29c(lVar21,&DAT_10054ac40,&DAT_10041ce70);
LAB_10030eb78:
            FUN_100029504(uVar31,lVar26,FUN_10040211c);
            (*pcVar42)(lVar26,0,1,lVar9);
            FUN_100007e1c(lVar26,lVar25,&DAT_10054ac40,&DAT_10041ce70);
            lVar45 = lVar25;
            (*pcVar43)(lVar25,1,lVar9);
            if ((int)lVar45 == 1) {
              FUN_10002a29c(lVar25,&DAT_10054ac40,&DAT_10041ce70);
              _swift_bridgeObjectRetain(SVar14.unknown);
              uVar37 = (ulong)uVar35;
              FUN_100004958(uVar37);
              _swift_bridgeObjectRelease(SVar14.unknown);
              if ((uVar16 & 1) == 0) {
                FUN_10002f1dc(uVar31);
                uVar18 = 1;
              }
              else {
                pSVar12 = (State *)SVar14.unknown;
                _swift_isUniquelyReferenced_nonNull_native();
                local_90.unknown = SVar14.unknown;
                if ((int)pSVar12 == 0) {
                  FUN_1001cd12c();
                }
                SVar14.unknown = local_90.unknown;
                FUN_100007e64(((State *)(local_90.unknown + 0x38))->unknown + uVar37 * lVar23,lVar24
                              ,FUN_10040211c);
                FUN_1001d2d80(uVar37,SVar14.unknown);
                FUN_10002f1dc(uVar31);
                uVar18 = 0;
              }
              (*pcVar42)(lVar24,uVar18,1,lVar9);
              FUN_10002a29c(lVar24,&DAT_10054ac40,&DAT_10041ce70);
            }
            else {
              uVar37 = uVar29;
              FUN_100007e64(lVar25,uVar29,FUN_10040211c);
              pSVar12 = (State *)SVar14.unknown;
              _swift_isUniquelyReferenced_nonNull_native();
              uVar17 = (uint)pSVar12;
              uVar38 = (ulong)uVar35;
              uVar16 = uVar38;
              local_90.unknown = SVar14.unknown;
              FUN_100004958();
              uVar33 = (ulong)~(uint)uVar37 & 1;
              if (SCARRY8((long)((State *)((long)SVar14.unknown + 0x10))->unknown,uVar33)) {
                    /* WARNING: Does not return */
                pcVar42 = (code *)SoftwareBreakpoint(1,0x10030f1e0);
                (*pcVar42)();
              }
              if ((long)((State *)((long)SVar14.unknown + 0x18))->unknown <
                  (long)(((State *)((long)SVar14.unknown + 0x10))->unknown + uVar33)) {
                FUN_1001d11f4();
                FUN_100004958();
                if (((uint)uVar37 & 1) != (uVar17 & 1)) {
                  Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
                  pcVar42 = (code *)SoftwareBreakpoint(1,0x10030f1f8);
                  (*pcVar42)();
                }
              }
              else {
                uVar38 = uVar16;
                if (((ulong)pSVar12 & 1) == 0) {
                  FUN_1001cd12c();
                }
              }
              SVar14.unknown = local_90.unknown;
              if ((uVar37 & 1) == 0) {
                *(ulong *)(local_90.unknown + (uVar38 >> 6) * 8 + 0x40) =
                     *(ulong *)(local_90.unknown + (uVar38 >> 6) * 8 + 0x40) | 1L << (uVar38 & 0x3f)
                ;
                ((State *)(local_90.unknown + 0x30))->unknown[uVar38] = bVar3;
                FUN_100007e64(uVar29,((State *)(local_90.unknown + 0x38))->unknown + uVar38 * lVar23
                              ,FUN_10040211c);
                FUN_10002f1dc(uVar31);
                if (SCARRY8((long)((State *)(SVar14.unknown + 0x10))->unknown,1)) {
                    /* WARNING: Does not return */
                  pcVar42 = (code *)SoftwareBreakpoint(1,0x10030f1e4);
                  (*pcVar42)();
                }
                ((State *)(SVar14.unknown + 0x10))->unknown =
                     ((State *)(SVar14.unknown + 0x10))->unknown + 1;
              }
              else {
                FUN_10027f714(uVar29,((State *)(local_90.unknown + 0x38))->unknown + uVar38 * lVar23
                             );
                FUN_10002f1dc(uVar31);
              }
            }
            goto LAB_10030e8d4;
          }
LAB_10030eac8:
          FUN_10002a29c(lVar21,&DAT_10054b6b8,&DAT_10041ca50);
        }
        else {
          FUN_1000087e4(lVar21,uVar27,&DAT_10054ac40,&DAT_10041ce70);
          lVar15 = lVar21 + lVar45;
          (*pcVar43)(lVar15,1,lVar9);
          if ((int)lVar15 == 1) {
            FUN_10002a29c(lVar28,&DAT_10054ac40,&DAT_10041ce70);
            FUN_10002a29c(lVar22,&DAT_10054ac40,&DAT_10041ce70);
            FUN_10002f1dc(uVar27);
            goto LAB_10030eac8;
          }
          FUN_100007e64(lVar21 + lVar45,lVar30,FUN_10040211c);
          uVar37 = uVar27;
          FUN_10040a7a0(uVar27,lVar30);
          FUN_10002f1dc(lVar30);
          FUN_10002a29c(lVar28,&DAT_10054ac40,&DAT_10041ce70);
          FUN_10002a29c(lVar22,&DAT_10054ac40,&DAT_10041ce70);
          FUN_10002f1dc(uVar27);
          FUN_10002a29c(lVar21,&DAT_10054ac40,&DAT_10041ce70);
          if ((uVar37 & 1) != 0) goto LAB_10030eb78;
        }
        FUN_10002f1dc(uVar31);
      }
LAB_10030e8d4:
      lVar36 = lVar36 + lVar23;
      lVar41 = lVar41 + -1;
    } while (lVar41 != 0);
  }
  puVar8 = &DAT_100556940;
  FUN_100002f94(&DAT_100556940,&DAT_10042a8e0);
  lVar21 = *(long *)(local_168 + 0x48);
  uVar27 = (ulong)*(byte *)(local_168 + 0x50) + 0x20 &
           ((ulong)*(byte *)(local_168 + 0x50) ^ 0xffffffffffffffff);
  _swift_allocObject();
  *(undefined8 *)(puVar8 + 0x18) = 2;
  *(undefined8 *)(puVar8 + 0x10) = 1;
  puVar1 = (undefined8 *)(puVar8 + uVar27);
  iVar4 = *(int *)(puVar7 + 0x50);
  *puVar1 = 0x6c6c61;
  puVar1[1] = 0xe300000000000000;
  puVar1[2] = 0x6c6c41;
  puVar1[3] = 0xe300000000000000;
  *(undefined1 *)(puVar1 + 4) = 0xe;
  if (lVar46 != 0) {
    FUN_100029504(param_1 + ((ulong)*(byte *)(extraout_x13 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(extraout_x13 + 0x50) ^ 0xffffffffffffffff)),
                  (undefined *)((long)puVar1 + (long)iVar4),FUN_10040211c);
  }
  pcVar42 = *(code **)(extraout_x13 + 0x38);
  (*pcVar42)((undefined *)((long)puVar1 + (long)iVar4),lVar46 == 0,1,lVar9);
  puVar10 = ((State *)(SVar6.unknown + 0x10))->unknown;
  if (puVar10 == (undefined *)0x0) {
    _swift_release(SVar6.unknown);
    SVar44.unknown = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    local_90.unknown = PTR___swiftEmptyArrayStorage_100524190;
    puVar19 = puVar10;
    FUN_1001c603c(0,puVar10,0);
    lVar22 = 0x20;
    SVar44.unknown = local_90.unknown;
    do {
      bVar3 = SVar6.unknown[lVar22];
      uVar29 = (ulong)bVar3;
      uVar18 = 0xe600000000000000;
      uVar34 = 0x736569766f4d;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar3) {
      case 1:
        uVar18 = 0xe800000000000000;
        uVar34 = 0x7363696870617247;
        break;
      case 2:
        uVar18 = 0xe500000000000000;
        uVar34 = 0x73656d6147;
        break;
      case 3:
        uVar18 = 0xe400000000000000;
        uVar34 = 0x73726143;
        break;
      case 4:
        uVar34 = 0x656c706f6550;
        break;
      case 5:
        uVar18 = 0xe500000000000000;
        uVar34 = 0x656d696e41;
        break;
      case 6:
        uVar18 = 0xe500000000000000;
        uVar34 = 0x726568744f;
        break;
      case 7:
        uVar18 = 0xe500000000000000;
        uVar34 = 0x6563617053;
        break;
      case 8:
        uVar34 = 0x65727574614e;
        break;
      case 9:
        uVar18 = 0xea00000000007473;
        uVar34 = 0x696c616d696e694d;
        break;
      case 10:
        uVar18 = 0xe700000000000000;
        uVar34 = 0x736c616d696e41;
        break;
      case 0xb:
        uVar34 = 0x7265746e6957;
        break;
      case 0xc:
        uVar18 = 0xe800000000000000;
        uVar34 = 0x7472416c65786950;
        break;
      case 0xd:
        uVar18 = 0xe500000000000000;
        uVar34 = 0x6946696353;
      }
      *(undefined8 *)pbVar20 = uVar34;
      *(undefined8 *)((long)&local_168 + lVar5) = uVar18;
      iVar4 = *(int *)(puVar7 + 0x50);
      *(undefined8 *)(local_150 + lVar5 + -0x10) = uVar34;
      *(undefined8 *)(&stack0xfffffffffffffea8 + lVar5) = uVar18;
      local_150[lVar5] = bVar3;
      if (((State *)((long)SVar14.unknown + 0x10))->unknown == (undefined *)0x0) {
        bVar39 = true;
      }
      else {
        _swift_bridgeObjectRetain(SVar14.unknown);
        FUN_100004958(uVar29);
        bVar39 = ((ulong)puVar19 & 1) == 0;
        if (!bVar39) {
          FUN_100029504(((State *)((long)SVar14.unknown + 0x38))->unknown +
                        *(long *)(extraout_x13 + 0x48) * uVar29,pbVar20 + iVar4,FUN_10040211c);
        }
        _swift_bridgeObjectRelease(SVar14.unknown);
      }
      (*pcVar42)(pbVar20 + iVar4,bVar39,1,lVar9);
      uVar29 = *(ulong *)(SVar44.unknown + 0x10);
      local_90.unknown = SVar44.unknown;
      if (*(ulong *)(SVar44.unknown + 0x18) >> 1 <= uVar29) {
        FUN_1001c603c(1 < *(ulong *)(SVar44.unknown + 0x18),uVar29 + 1,1);
      }
      SVar44.unknown = local_90.unknown;
      *(ulong *)(local_90.unknown + 0x10) = uVar29 + 1;
      puVar19 = local_90.unknown + uVar29 * lVar21 + uVar27;
      FUN_100007e1c(pbVar20,puVar19,&DAT_100554260,&DAT_100426eb0);
      lVar22 = lVar22 + 1;
      puVar10 = puVar10 + -1;
    } while (puVar10 != (undefined *)0x0);
    _swift_release(SVar6.unknown);
  }
  local_90.unknown = puVar8;
  FUN_10012f81c(SVar44.unknown);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0xc0);
  local_a0[0] = local_90.unknown;
  puVar7 = &DAT_10055bd70;
  local_90.unknown = *(undefined **)(unaff_x20 + 0xb8);
  FUN_100002f94(&DAT_10055bd70,&DAT_100430af0);
  SwiftUI::State::set_wrappedValue(&local_90,local_a0,puVar7);
  _swift_bridgeObjectRelease(SVar14.unknown);
  return;
}

