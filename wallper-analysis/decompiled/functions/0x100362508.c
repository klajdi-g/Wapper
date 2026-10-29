// rea decompile_all
// name: FUN_100362508
// address: 0x100362508
// body: available
// range: 0x100362508-0x10036304b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100362508(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  Calendar CVar5;
  Date DVar6;
  Date DVar7;
  Alignment AVar8;
  Animation AVar9;
  SafeAreaRegions SVar10;
  Set SVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar15;
  long lVar16;
  long lVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long lVar18;
  code *pcVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  ulong *puVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  undefined *puVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  long alStack_d0 [4];
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined8 *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  code *local_68;
  
  local_88 = param_1;
  CVar5 = Foundation::Calendar::typeMetadataAccessor();
  local_80 = *(undefined **)(CVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_80 + 0x40));
  lVar21 = (long)alStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar22 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar22 + 0x40));
  lVar25 = lVar21 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar23 = &DAT_10054a9d0;
  FUN_100002f94(&DAT_10054a9d0,&DAT_10041bc60);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar23 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = lVar25 - extraout_x8_01;
  puVar23 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar23 + -8) + 0x40));
  lVar16 = lVar26 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_90 = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar16 - extraout_x12;
  local_a0 = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar16 - extraout_x12_00;
  local_98 = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar16 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_78 = (undefined *)(lVar16 - extraout_x12_02);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = (lVar16 - extraout_x12_02) - extraout_x12_03;
  alStack_d0[3] = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12_04;
  local_b0 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12_05;
  local_68 = (code *)lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12_06;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_70 = (undefined *)(lVar17 - extraout_x12_07);
  DVar7 = Foundation::Date::init();
  Foundation::Calendar::get_current((Calendar)DVar7.unknown);
  local_a8 = param_2;
  FUN_1001d62f0(lVar26,lVar25,lVar21);
  (**(code **)(local_80 + 8))(lVar21,CVar5.unknown);
  (**(code **)(lVar22 + 8))(lVar25,DVar6.unknown);
  lVar22 = 0;
  FUN_1001d59ac();
  lVar21 = lVar26;
  (**(code **)(*(long *)(lVar22 + -8) + 0x30))(lVar26,1,lVar22);
  if ((int)lVar21 == 1) {
    FUN_10002a29c(lVar26,&DAT_10054a9d0,&DAT_10041bc60);
    lVar25 = 0;
    FUN_10040211c();
    (**(code **)(*(long *)(lVar25 + -8) + 0x38))(lVar17,1,1,lVar25);
    puVar23 = local_78;
    puVar28 = local_70;
  }
  else {
    alStack_d0[2] = lVar17;
    lVar21 = *(long *)(lVar26 + *(int *)(lVar22 + 0x24));
    _swift_bridgeObjectRetain(lVar21);
    FUN_100029548(lVar26,FUN_1001d59ac);
    puVar28 = *(undefined **)(lVar21 + 0x10);
    _swift_bridgeObjectRetain(param_3);
    puVar23 = (undefined *)0x0;
    puVar13 = puVar23;
    if (puVar28 != (undefined *)0x0) {
      pcVar19 = local_68;
      puVar24 = (ulong *)(lVar21 + 0x28);
      puVar13 = puVar28;
      alStack_d0[1] = lVar21;
      local_80 = puVar28;
      do {
        uVar27 = *puVar24;
        if (*(long *)(param_3 + 0x10) == 0) {
          lVar17 = 0;
          FUN_10040211c();
          (**(code **)(*(long *)(lVar17 + -8) + 0x38))(pcVar19,1,1,lVar17);
        }
        else {
          uVar31 = puVar24[-1];
          _swift_bridgeObjectRetain(param_3);
          _swift_bridgeObjectRetain(uVar27);
          uVar30 = uVar27;
          FUN_10000464c(uVar31);
          bVar2 = (uVar30 & 1) == 0;
          if (bVar2) {
            _swift_bridgeObjectRelease(param_3);
            lVar17 = 0;
            FUN_10040211c();
            pcVar15 = *(code **)(*(long *)(lVar17 + -8) + 0x38);
          }
          else {
            lVar21 = *(long *)(param_3 + 0x38);
            lVar17 = 0;
            FUN_10040211c();
            pcVar19 = local_68;
            lVar22 = *(long *)(lVar17 + -8);
            FUN_100029504(lVar21 + *(long *)(lVar22 + 0x48) * uVar31,local_68,FUN_10040211c);
            _swift_bridgeObjectRelease(param_3);
            pcVar15 = *(code **)(lVar22 + 0x38);
            puVar13 = local_80;
          }
          (*pcVar15)(pcVar19,bVar2,1,lVar17);
          _swift_bridgeObjectRelease(uVar27);
          FUN_10040211c(0);
          lVar21 = (long)pcVar19;
          (**(code **)(*(long *)(lVar17 + -8) + 0x30))(pcVar19,1,lVar17);
          if ((int)lVar21 != 1) {
            FUN_10002a29c(pcVar19,&DAT_10054ac40,&DAT_10041ce70);
            lVar21 = alStack_d0[1];
            puVar13 = puVar23;
            break;
          }
        }
        FUN_10002a29c(pcVar19,&DAT_10054ac40,&DAT_10041ce70);
        puVar23 = puVar23 + 1;
        lVar21 = alStack_d0[1];
        puVar24 = puVar24 + 2;
      } while (puVar13 != puVar23);
    }
    puVar28 = local_70;
    puVar23 = local_78;
    if (puVar13 == *(undefined **)(lVar21 + 0x10)) {
      lVar25 = 0;
      FUN_10040211c();
      lVar17 = alStack_d0[2];
      (**(code **)(*(long *)(lVar25 + -8) + 0x38))(alStack_d0[2],1,1,lVar25);
      _swift_bridgeObjectRelease(param_3);
    }
    else {
      if (*(undefined **)(lVar21 + 0x10) <= puVar13) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x100363040);
        (*pcVar19)();
      }
      if (*(long *)(param_3 + 0x10) == 0) {
        lVar25 = 0;
        FUN_10040211c();
        lVar22 = local_b0;
        (**(code **)(*(long *)(lVar25 + -8) + 0x38))(local_b0,1,1,lVar25);
      }
      else {
        lVar17 = lVar21 + (long)puVar13 * 0x10;
        lVar26 = *(long *)(lVar17 + 0x20);
        uVar27 = *(ulong *)(lVar17 + 0x28);
        _swift_bridgeObjectRetain(param_3);
        _swift_bridgeObjectRetain(uVar27);
        uVar30 = uVar27;
        FUN_10000464c(lVar26);
        bVar2 = (uVar30 & 1) == 0;
        if (bVar2) {
          _swift_bridgeObjectRelease(param_3);
          lVar25 = 0;
          FUN_10040211c();
          pcVar19 = *(code **)(*(long *)(lVar25 + -8) + 0x38);
          lVar22 = local_b0;
        }
        else {
          lVar17 = *(long *)(param_3 + 0x38);
          lVar25 = 0;
          FUN_10040211c();
          lVar22 = local_b0;
          lVar29 = *(long *)(lVar25 + -8);
          FUN_100029504(lVar17 + *(long *)(lVar29 + 0x48) * lVar26,local_b0,FUN_10040211c);
          _swift_bridgeObjectRelease(param_3);
          pcVar19 = *(code **)(lVar29 + 0x38);
        }
        (*pcVar19)(lVar22,bVar2,1,lVar25);
        _swift_bridgeObjectRelease(uVar27);
      }
      lVar26 = alStack_d0[3];
      FUN_1000087e4(lVar22,alStack_d0[3],&DAT_10054ac40,&DAT_10041ce70);
      FUN_10040211c(0);
      lVar18 = *(long *)(lVar25 + -8);
      lVar29 = lVar26;
      (**(code **)(lVar18 + 0x30))(lVar26,1,lVar25);
      lVar17 = alStack_d0[2];
      if ((int)lVar29 == 1) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x100363048);
        (*pcVar19)();
      }
      FUN_100007e64(lVar26,alStack_d0[2],FUN_10040211c);
      FUN_10002a29c(lVar22,&DAT_10054ac40,&DAT_10041ce70);
      (**(code **)(lVar18 + 0x38))(lVar17,0,1,lVar25);
      _swift_bridgeObjectRelease(param_3);
    }
    _swift_bridgeObjectRelease(lVar21);
  }
  FUN_100007e1c(lVar17,puVar23,&DAT_10054ac40,&DAT_10041ce70);
  FUN_10040211c(0);
  lVar17 = *(long *)(lVar25 + -8);
  local_68 = *(code **)(lVar17 + 0x30);
  puVar13 = puVar23;
  (*local_68)(puVar23,1,lVar25);
  if ((int)puVar13 == 1) {
    FUN_10025f200();
    uVar31 = *(ulong *)(puVar13 + 0x10);
    _swift_bridgeObjectRetain(param_3);
    uVar27 = 0;
    uVar30 = uVar27;
    if (uVar31 != 0) {
      puVar24 = (ulong *)(puVar13 + 0x28);
      local_80 = puVar13;
      do {
        uVar30 = *puVar24;
        if (*(long *)(param_3 + 0x10) == 0) {
          (**(code **)(lVar17 + 0x38))(lVar16,1,1,lVar25);
        }
        else {
          uVar20 = puVar24[-1];
          _swift_bridgeObjectRetain(param_3);
          _swift_bridgeObjectRetain(uVar30);
          uVar12 = uVar30;
          FUN_10000464c(uVar20);
          bVar2 = (uVar12 & 1) == 0;
          if (!bVar2) {
            FUN_100029504(*(long *)(param_3 + 0x38) + *(long *)(lVar17 + 0x48) * uVar20,lVar16,
                          FUN_10040211c);
          }
          _swift_bridgeObjectRelease(param_3);
          (**(code **)(lVar17 + 0x38))(lVar16,bVar2,1,lVar25);
          _swift_bridgeObjectRelease(uVar30);
          lVar21 = lVar16;
          (*local_68)(lVar16,1,lVar25);
          if ((int)lVar21 != 1) {
            FUN_10002a29c(lVar16,&DAT_10054ac40,&DAT_10041ce70);
            puVar13 = local_80;
            puVar23 = local_78;
            uVar30 = uVar27;
            break;
          }
        }
        FUN_10002a29c(lVar16,&DAT_10054ac40,&DAT_10041ce70);
        uVar27 = uVar27 + 1;
        puVar13 = local_80;
        puVar24 = puVar24 + 2;
        puVar23 = local_78;
        uVar30 = uVar31;
      } while (uVar31 != uVar27);
    }
    puVar28 = local_70;
    lVar22 = local_98;
    lVar21 = local_a0;
    if (uVar30 == *(ulong *)(puVar13 + 0x10)) {
      (**(code **)(lVar17 + 0x38))(local_70,1,1,lVar25);
    }
    else {
      if (*(ulong *)(puVar13 + 0x10) <= uVar30) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x100363044);
        (*pcVar19)();
      }
      if (*(long *)(param_3 + 0x10) == 0) {
        pcVar19 = *(code **)(lVar17 + 0x38);
        (*pcVar19)(local_98,1,1,lVar25);
      }
      else {
        lVar16 = *(long *)(puVar13 + uVar30 * 0x10 + 0x20);
        uVar27 = *(ulong *)(puVar13 + uVar30 * 0x10 + 0x28);
        _swift_bridgeObjectRetain(param_3);
        _swift_bridgeObjectRetain(uVar27);
        uVar30 = uVar27;
        FUN_10000464c(lVar16);
        bVar2 = (uVar30 & 1) == 0;
        if (bVar2) {
          _swift_bridgeObjectRelease(param_3);
          pcVar19 = *(code **)(lVar17 + 0x38);
        }
        else {
          FUN_100029504(*(long *)(param_3 + 0x38) + *(long *)(lVar17 + 0x48) * lVar16,lVar22,
                        FUN_10040211c);
          _swift_bridgeObjectRelease(param_3);
          pcVar19 = *(code **)(lVar17 + 0x38);
        }
        (*pcVar19)(lVar22,bVar2,1,lVar25);
        _swift_bridgeObjectRelease(uVar27);
      }
      puVar28 = local_70;
      FUN_1000087e4(lVar22,lVar21,&DAT_10054ac40,&DAT_10041ce70);
      lVar17 = lVar21;
      (*local_68)(lVar21,1,lVar25);
      if ((int)lVar17 == 1) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x10036304c);
        (*pcVar19)();
      }
      FUN_100007e64(lVar21,puVar28,FUN_10040211c);
      FUN_10002a29c(lVar22,&DAT_10054ac40,&DAT_10041ce70);
      (*pcVar19)(puVar28,0,1,lVar25);
    }
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(puVar13);
    puVar13 = (undefined *)0x1;
    AVar8.unknown = puVar23;
    (*local_68)(puVar23,1,lVar25);
    if ((int)AVar8.unknown != 1) {
      puVar13 = &DAT_10054ac40;
      FUN_10002a29c(puVar23,&DAT_10054ac40,&DAT_10041ce70);
      AVar8.unknown = puVar23;
    }
  }
  else {
    FUN_100007e64(puVar23,puVar28,FUN_10040211c);
    puVar13 = (undefined *)0x0;
    AVar8.unknown = puVar28;
    (**(code **)(lVar17 + 0x38))(puVar28,0,1,lVar25);
  }
  AVar8 = SwiftUI::Alignment::get_center(AVar8);
  puVar4 = local_88;
  *local_88 = AVar8.unknown;
  local_88[1] = puVar13;
  puVar23 = &DAT_10055de88;
  FUN_100002f94(&DAT_10055de88,&DAT_100433738);
  AVar9.unknown = puVar28;
  FUN_10036304c((long)puVar4 + (long)*(int *)(puVar23 + 0x2c));
  AVar9 = SwiftUI::Animation::easeInOut(0.6,AVar9);
  lVar17 = local_90;
  FUN_1000087e4(puVar28,local_90,&DAT_10054ac40,&DAT_10041ce70);
  uVar14 = 1;
  lVar21 = lVar17;
  (*local_68)(lVar17,1,lVar25);
  if ((int)lVar21 == 1) {
    FUN_10002a29c(lVar17,&DAT_10054ac40,&DAT_10041ce70);
    lVar21 = 0;
    uVar14 = 0;
  }
  else {
    FUN_10026ac6c();
    FUN_100029548(lVar17,FUN_10040211c);
  }
  SVar10.unknown = &DAT_10055de90;
  FUN_100002f94(&DAT_10055de90,&DAT_100433740);
  puVar1 = (undefined8 *)((long)puVar4 + (long)*(int *)(SVar10.unknown + 0x24));
  *puVar1 = AVar9.unknown;
  puVar1[1] = lVar21;
  puVar1[2] = uVar14;
  SVar10 = SwiftUI::SafeAreaRegions::get_all(SVar10);
  SVar11 = SwiftUI::Edge::Set::get_all(SVar10.unknown);
  puVar23 = &DAT_10055de98;
  FUN_100002f94(&DAT_10055de98,&DAT_100433748);
  iVar3 = *(int *)(puVar23 + 0x24);
  *(undefined8 *)((long)puVar4 + (long)iVar3) = SVar10.unknown;
  *(char *)((undefined8 *)((long)puVar4 + (long)iVar3) + 1) = (char)SVar11.unknown;
  FUN_10002a29c(puVar28,&DAT_10054ac40,&DAT_10041ce70);
  return;
}

