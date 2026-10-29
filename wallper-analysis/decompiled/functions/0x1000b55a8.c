// rea decompile_all
// name: FUN_1000b55a8
// address: 0x1000b55a8
// body: available
// range: 0x1000b55a8-0x1000b605b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b55a8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,double param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  byte bVar5;
  ulong *puVar6;
  long *plVar7;
  long lVar8;
  byte bVar9;
  code *pcVar10;
  undefined *puVar11;
  LayoutSubviews LVar12;
  undefined **ppuVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong *puVar17;
  UnitPoint UVar18;
  undefined *puVar19;
  long extraout_x8;
  long extraout_x8_00;
  long lVar20;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  double *pdVar24;
  double *pdVar25;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined *puVar26;
  long *plVar27;
  ProposedViewSize PVar28;
  CGPoint at;
  undefined8 uVar29;
  undefined8 uVar30;
  double dVar31;
  ulong uStack_160;
  undefined *local_158;
  long local_150;
  undefined *local_148;
  long local_140;
  long local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  long local_118;
  ulong *local_110;
  long *local_108;
  long local_100;
  undefined *local_f8;
  undefined *local_f0;
  long local_e8;
  undefined *local_e0;
  undefined1 auStack_d8 [8];
  undefined *local_d0 [4];
  undefined *local_b0 [2];
  
  puVar11 = &DAT_1005506e8;
  local_f8 = (undefined *)param_9;
  FUN_100002f94(&DAT_1005506e8,&DAT_100422088);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar11 + -8) + 0x40));
  plVar27 = (long *)((long)&uStack_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar11 = &DAT_1005506f0;
  local_110 = (ulong *)((long)plVar27 - extraout_x12);
  FUN_100002f94(&DAT_1005506f0,&DAT_100422090);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = ((long)plVar27 - extraout_x12) - extraout_x8_00;
  puVar11 = &DAT_1005506f8;
  local_118 = lVar20;
  FUN_100002f94(&DAT_1005506f8,&DAT_100422098);
  local_128 = puVar11;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar20 - extraout_x8_01;
  local_100 = lVar20;
  local_e0 = (undefined *)SwiftUI::LayoutSubview::typeMetadataAccessor();
  local_e8 = *(long *)(local_e0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e8 + 0x40));
  lVar20 = lVar20 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_138 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar20 - extraout_x12_00;
  local_140 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_f0 = (undefined *)(lVar20 - extraout_x12_01);
  LVar12 = SwiftUI::LayoutSubviews::typeMetadataAccessor();
  puVar11 = &DAT_100550700;
  FUN_1000036d0(&DAT_100550700,PTR_typeMetadataAccessor_1005220a0,
                PTR_SwiftUI__SwiftUI__LayoutSubviews_>Swift__Collection_1005220b8);
  Swift::Collection::_get_startIndex();
  Swift::Collection::_get_endIndex();
  puVar16 = local_f0;
  if (local_b0[0] != local_d0[0]) {
    do {
      puVar26 = local_b0[0];
      ppuVar13 = local_d0;
      __dispatch_thunk_of_Swift_Collection_subscript_read____A_Index___>_A_Element
                (ppuVar13,local_b0,LVar12.unknown,puVar11);
      puVar19 = local_e0;
      lVar20 = local_e8;
      (**(code **)(local_e8 + 0x10))(puVar16);
      (*(code *)ppuVar13)(local_d0,0);
      FUN_1000b605c();
      SwiftUI::LayoutSubview::_get_subscript((LayoutSubview)0x100528d40);
      (**(code **)(lVar20 + 8))(puVar16,puVar19);
      if ((long)local_f8 <= (long)local_d0[0]) goto LAB_1000b58e0;
      Swift::Collection::_formIndex();
      Swift::Collection::_get_endIndex();
    } while (local_b0[0] != local_d0[0]);
  }
  Swift::Collection::_get_startIndex();
  Swift::Collection::_get_endIndex();
  if ((long)local_b0[0] < (long)local_d0[0]) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1000b6038);
    (*pcVar10)();
  }
  if (local_d0[0] == local_b0[0]) {
    return;
  }
  if ((long)local_b0[0] <= (long)local_d0[0]) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1000b605c);
    (*pcVar10)();
  }
  puVar26 = local_b0[0] + -1;
LAB_1000b58e0:
  PVar28.unknown = param_1;
  uVar29 = param_2;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  uVar14 = Swift::Collection::get_count();
  puVar16 = PTR___swiftEmptyArrayStorage_100524190;
  local_f8 = puVar26;
  if (uVar14 != 0) {
    local_b0[0] = PTR___swiftEmptyArrayStorage_100524190;
    local_108 = plVar27;
    FUN_1001c5de8(0,uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar16 = local_b0[0];
    Swift::Collection::_get_startIndex();
    puVar19 = local_f0;
    if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1000b6058);
      (*pcVar10)();
    }
    do {
      ppuVar13 = local_d0;
      __dispatch_thunk_of_Swift_Collection_subscript_read____A_Index___>_A_Element
                (ppuVar13,auStack_d8,LVar12.unknown,puVar11);
      puVar26 = local_e0;
      lVar20 = local_e8;
      (**(code **)(local_e8 + 0x10))(puVar19);
      (*(code *)ppuVar13)(local_d0,0);
      SwiftUI::LayoutSubview::sizeThatFits(PVar28,(LayoutSubview)0x0);
      uVar30 = uVar29;
      (**(code **)(lVar20 + 8))(puVar19,puVar26);
      uVar3 = *(ulong *)(puVar16 + 0x10);
      local_b0[0] = puVar16;
      if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar3) {
        FUN_1001c5de8(1 < *(ulong *)(puVar16 + 0x18),uVar3 + 1,1);
      }
      puVar16 = local_b0[0];
      *(ulong *)(local_b0[0] + 0x10) = uVar3 + 1;
      *(undefined8 *)(local_b0[0] + uVar3 * 8 + 0x20) = uVar29;
      Swift::Collection::_formIndex();
      uVar14 = uVar14 - 1;
      plVar27 = local_108;
      uVar29 = uVar30;
    } while (uVar14 != 0);
  }
  lVar20 = *(long *)(puVar16 + 0x10);
  puVar19 = PTR___swiftEmptyArrayStorage_100524190;
  local_120 = (undefined *)param_6;
  local_108 = (long *)puVar16;
  if (lVar20 != 0) {
    local_d0[0] = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1001c5de8(0,lVar20,0);
    do {
      puVar16 = local_d0[0];
      puVar19 = param_1;
      _CGRectGetMidY(param_1,param_2,param_3,param_4);
      uVar14 = *(ulong *)(puVar16 + 0x10);
      local_d0[0] = puVar16;
      if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar14) {
        FUN_1001c5de8(1 < *(ulong *)(puVar16 + 0x18),uVar14 + 1,1);
      }
      *(ulong *)(local_d0[0] + 0x10) = uVar14 + 1;
      *(undefined **)(local_d0[0] + uVar14 * 8 + 0x20) = puVar19;
      lVar20 = lVar20 + -1;
      puVar19 = local_d0[0];
    } while (lVar20 != 0);
  }
  puVar16 = local_f8;
  plVar7 = local_108;
  puVar26 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  puVar15 = param_1;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  lVar20 = local_100;
  if ((long)puVar16 < 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1000b603c);
    (*pcVar10)();
  }
  if (*(undefined **)((long)plVar7 + 0x10) <= puVar16) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1000b6040);
    (*pcVar10)();
  }
  puVar1 = (undefined *)((long)plVar7 + 0x20);
  dVar31 = *(double *)(puVar1 + (long)puVar16 * 8);
  puVar21 = puVar19;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar21 & 1) == 0) {
    FUN_1002872b0();
  }
  puVar21 = *(undefined **)(puVar19 + 0x10);
  if (puVar16 < puVar21) {
    bVar5 = 0;
    puVar2 = puVar19 + 0x20;
    *(double *)(puVar2 + (long)puVar16 * 8) =
         (double)puVar26 + (double)local_120 * (double)puVar15 + dVar31 * -0.5;
    puVar26 = puVar16 + -1;
    bVar9 = 0;
    if ((long)puVar26 < 1) goto LAB_1000b5b88;
    do {
      bVar5 = bVar9;
      puVar15 = puVar26;
      puVar26 = puVar26 + -1;
      while( true ) {
        if (puVar21 <= puVar15 + 1) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1000b6014);
          (*pcVar10)();
        }
        if (*(undefined **)((long)plVar7 + 0x10) <= puVar15) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1000b6018);
          (*pcVar10)();
        }
        *(double *)(puVar2 + (long)puVar15 * 8) =
             (*(double *)(puVar2 + (long)(puVar15 + 1) * 8) - param_5) -
             *(double *)(puVar1 + (long)puVar15 * 8);
        bVar9 = bVar5;
        if (0 < (long)puVar26) break;
LAB_1000b5b88:
        if ((bool)(puVar26 != (undefined *)0x0 | bVar5)) {
          puVar26 = puVar16 + 1;
          local_130 = puVar1;
          local_120 = puVar2;
          Swift::Collection::_get_startIndex();
          Swift::Collection::_get_endIndex();
          puVar15 = (undefined *)Swift::Collection::_distance();
          if ((long)puVar26 < (long)puVar15) {
            lVar22 = *(long *)((long)local_108 + 0x10);
            lVar23 = *(long *)(puVar19 + 0x10);
            pdVar24 = (double *)(puVar19 + (long)puVar16 * 8 + 0x28);
            pdVar25 = (double *)((long)local_108 + (long)puVar16 * 8 + 0x20);
            do {
              if (lVar23 < (long)puVar26) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x1000b6028);
                (*pcVar10)();
              }
              if (lVar22 < (long)puVar26) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x1000b602c);
                (*pcVar10)();
              }
              if (lVar23 <= (long)puVar26) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x1000b6030);
                (*pcVar10)();
              }
              puVar26 = puVar26 + 1;
              *pdVar24 = param_5 + pdVar24[-1] + *pdVar25;
              pdVar24 = pdVar24 + 1;
              pdVar25 = pdVar25 + 1;
            } while (puVar15 != puVar26);
          }
          (**(code **)(*(long *)(LVar12.unknown + -8) + 0x10))(local_118,param_7,LVar12.unknown);
          FUN_1000036d0(&DAT_100550710,PTR_typeMetadataAccessor_1005220a0,
                        PTR_SwiftUI__SwiftUI__LayoutSubviews_>Swift__Sequence_1005220b0);
          Swift::Sequence::_makeIterator();
          local_150 = (long)*(int *)(local_128 + 0x24);
          *(undefined8 *)(lVar20 + local_150) = 0;
          puVar16 = &DAT_100550718;
          FUN_100002f94(&DAT_100550718,&DAT_1004220a0);
          local_118 = 0;
          local_f8 = (undefined *)(long)*(int *)(puVar16 + 0x24);
          puVar16 = local_130;
          local_158 = puVar11;
          local_148 = puVar19;
          local_128 = LVar12.unknown;
          while( true ) {
            puVar26 = local_128;
            Swift::Collection::_get_endIndex();
            if (*(undefined **)(lVar20 + (long)local_f8) == local_d0[0]) {
              puVar26 = &DAT_100550720;
              FUN_100002f94(&DAT_100550720,&DAT_1004220a8);
              (**(code **)(*(long *)(puVar26 + -8) + 0x38))(plVar27,1,1,puVar26);
            }
            else {
              ppuVar13 = local_d0;
              __dispatch_thunk_of_Swift_Collection_subscript_read____A_Index___>_A_Element
                        (ppuVar13,lVar20 + (long)local_f8,puVar26,puVar11);
              puVar11 = local_e0;
              lVar8 = local_e8;
              lVar23 = local_138;
              (**(code **)(local_e8 + 0x10))(local_138);
              (*(code *)ppuVar13)(local_d0,0);
              Swift::Collection::_formIndex();
              lVar22 = local_140;
              pcVar10 = *(code **)(lVar8 + 0x20);
              (*pcVar10)(local_140,lVar23,puVar11);
              puVar16 = &DAT_100550720;
              FUN_100002f94(&DAT_100550720,&DAT_1004220a8);
              lVar23 = local_118;
              iVar4 = *(int *)(puVar16 + 0x30);
              *plVar27 = local_118;
              (*pcVar10)((long)plVar27 + (long)iVar4,lVar22,puVar11);
              lVar22 = lVar23 + 1;
              if (SCARRY8(lVar23,1)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x1000b6034);
                (*pcVar10)();
              }
              *(long *)(lVar20 + local_150) = lVar22;
              local_118 = lVar22;
              (**(code **)(*(long *)(puVar16 + -8) + 0x38))(plVar27,0,1,puVar16);
              puVar16 = local_130;
              puVar11 = local_158;
              puVar19 = local_148;
            }
            puVar6 = local_110;
            FUN_1000b609c(plVar27,local_110);
            puVar26 = &DAT_100550720;
            FUN_100002f94(&DAT_100550720,&DAT_1004220a8);
            puVar17 = puVar6;
            (**(code **)(*(long *)(puVar26 + -8) + 0x30))(puVar6,1,puVar26);
            if ((int)puVar17 == 1) {
              _swift_bridgeObjectRelease(local_108);
              FUN_10002a29c(local_100,&DAT_1005506f8,&DAT_100422098);
              _swift_bridgeObjectRelease(puVar19);
              return;
            }
            uVar14 = *puVar6;
            UVar18.unknown = local_f0;
            (**(code **)(local_e8 + 0x20))
                      (local_f0,(long)puVar6 + (long)*(int *)(puVar26 + 0x30),local_e0);
            _CGRectGetMinX(param_1,param_2,param_3,param_4);
            if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x1000b601c);
              (*pcVar10)();
            }
            if (*(ulong *)(puVar19 + 0x10) <= uVar14) break;
            SwiftUI::UnitPoint::get_topLeading(UVar18);
            at.unknown = param_1;
            _CGRectGetWidth(param_1,param_2,param_3,param_4);
            puVar26 = local_f0;
            if (*(ulong *)((long)local_108 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x1000b6024);
              (*pcVar10)();
            }
                    /* WARNING: Load size is inaccurate */
            SwiftUI::LayoutSubview::place
                      (at,(UnitPoint)0x0,(ProposedViewSize)puVar16[uVar14 * 8],(LayoutSubview)0x0);
            (**(code **)(local_e8 + 8))(puVar26,local_e0);
            lVar20 = local_100;
          }
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1000b6020);
          (*pcVar10)();
        }
        bVar5 = 1;
        puVar15 = puVar26;
        puVar26 = (undefined *)0x0;
      }
    } while( true );
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x1000b6054);
  (*pcVar10)();
}

