// rea decompile_all
// name: FUN_1002ab020
// address: 0x1002ab020
// body: available
// range: 0x1002ab020-0x1002ab90f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001002ab908) */

undefined * FUN_1002ab020(undefined8 param_1)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  String *pSVar4;
  char *pcVar5;
  URL UVar6;
  char **ppcVar7;
  undefined *puVar8;
  char *pcVar9;
  URL UVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x8_01;
  long lVar12;
  long extraout_x8_02;
  undefined *puVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  void *pvVar17;
  long lVar18;
  bool bVar19;
  long lVar20;
  code *pcVar21;
  long lVar22;
  ulong uVar23;
  String SVar24;
  String SVar25;
  String local_110;
  char *local_100;
  long local_f8;
  undefined *local_f0;
  long local_e8;
  long local_e0;
  String *local_d8;
  long local_d0;
  undefined *local_c8;
  char *local_c0;
  undefined *local_b8;
  long local_b0;
  undefined *local_a8;
  ulong local_a0;
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  undefined *local_78;
  
  puVar13 = &DAT_1005569a8;
  FUN_100002f94(&DAT_1005569a8,&DAT_10042aaa8);
  local_f8 = *(long *)(puVar13 + -8);
  local_f0 = puVar13;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = &DAT_100553d90;
  local_d8 = (String *)((long)&local_110 - extraout_x8);
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = ((long)&local_110 - extraout_x8) - extraout_x8_00;
  local_e0 = lVar11;
  local_c8 = (undefined *)Foundation::URL::typeMetadataAccessor();
  lVar22 = *(long *)(local_c8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar22 + 0x40));
  lVar11 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_e8 = lVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar13 = (undefined *)(lVar11 - extraout_x12);
  local_a8 = puVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = (long)puVar13 - extraout_x12_00;
  lVar11 = 0;
  local_b0 = lVar12;
  FUN_10040211c();
  lVar18 = *(long *)(lVar11 + -8);
  local_90 = lVar11;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  lVar12 = lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_98 = lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar13 = (undefined *)(lVar12 - extraout_x12_01);
  local_b8 = puVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = (long)puVar13 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar16 - extraout_x12_03;
  puVar13 = &DAT_10042df80;
  _swift_getKeyPath(&DAT_10042df80);
  puVar8 = &DAT_10042dfa8;
  _swift_getKeyPath(&DAT_10042dfa8);
  Combine::Published::_get_subscript(&local_88,param_1,puVar13,puVar8);
  _swift_release(puVar13);
  _swift_release(puVar8);
  pcVar15 = local_88;
  local_a0 = *(ulong *)(local_88 + 0x10);
  lVar11 = local_90;
  pcVar9 = PTR___swiftEmptyArrayStorage_100524190;
  local_d0 = lVar18;
  if (local_a0 != 0) {
    uVar14 = 0;
    do {
      if (*(ulong *)(pcVar15 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x1002ab8a4);
        (*pcVar21)();
      }
      uVar23 = (ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff);
      lVar20 = *(long *)(lVar18 + 0x48);
      FUN_10002f154(pcVar15 + lVar20 * uVar14 + uVar23,lVar12);
      if (((*(byte *)(lVar12 + *(int *)(lVar11 + 0x40)) & 1) == 0) &&
         ((*(byte *)(lVar12 + *(int *)(lVar11 + 0x48)) & 1) == 0)) {
        pcVar5 = pcVar9;
        _swift_isUniquelyReferenced_nonNull_native();
        local_88 = pcVar9;
        if (((ulong)pcVar5 & 1) == 0) {
          FUN_1001c5c4c(0,*(long *)(pcVar9 + 0x10) + 1,1);
          lVar11 = local_90;
        }
        uVar1 = *(ulong *)(local_88 + 0x10);
        if (*(ulong *)(local_88 + 0x18) >> 1 <= uVar1) {
          FUN_1001c5c4c(1 < *(ulong *)(local_88 + 0x18),uVar1 + 1,1);
          lVar11 = local_90;
        }
        pcVar9 = local_88;
        *(ulong *)(local_88 + 0x10) = uVar1 + 1;
        FUN_10002f198(lVar12,local_88 + uVar1 * lVar20 + uVar23);
        lVar18 = local_d0;
      }
      else {
        FUN_10002f1dc(lVar12);
      }
      uVar14 = uVar14 + 1;
    } while (local_a0 != uVar14);
  }
  _swift_bridgeObjectRelease(pcVar15);
  local_88 = pcVar9;
  _swift_retain(pcVar9);
  FUN_1002a9bfc(&local_88);
  local_110.bridgeObject = *(void **)(local_88 + 0x10);
  if ((void *)0x17 < local_110.bridgeObject) {
    local_110.bridgeObject = (void *)0x18;
  }
  local_100 = local_88;
  local_a0 = (ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
             ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff);
  uVar14 = *(ulong *)(pcVar9 + 0x10);
  pcVar15 = PTR___swiftEmptyArrayStorage_100524190;
  if (uVar14 != 0) {
    uVar23 = 0;
    pcVar5 = pcVar9 + local_a0;
    local_c0 = pcVar5;
    do {
      if (*(ulong *)(pcVar9 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x1002ab8a8);
        (*pcVar21)();
      }
      lVar12 = *(long *)(lVar18 + 0x48);
      FUN_10002f154(pcVar5 + lVar12 * uVar23,lVar16);
      if ((*(char *)(lVar16 + *(int *)(lVar11 + 0x24)) == '\b') &&
         (99 < *(long *)(lVar16 + *(int *)(lVar11 + 0x20)))) {
        pcVar5 = pcVar15;
        _swift_isUniquelyReferenced_nonNull_native();
        local_88 = pcVar15;
        if (((ulong)pcVar5 & 1) == 0) {
          FUN_1001c5c4c(0,*(long *)(pcVar15 + 0x10) + 1,1);
          lVar11 = local_90;
        }
        uVar1 = *(ulong *)(local_88 + 0x10);
        if (*(ulong *)(local_88 + 0x18) >> 1 <= uVar1) {
          FUN_1001c5c4c(1 < *(ulong *)(local_88 + 0x18),uVar1 + 1,1);
          lVar11 = local_90;
        }
        pcVar15 = local_88;
        *(ulong *)(local_88 + 0x10) = uVar1 + 1;
        FUN_10002f198(lVar16,local_88 + uVar1 * lVar12 + local_a0);
        lVar18 = local_d0;
        pcVar5 = local_c0;
      }
      else {
        FUN_10002f1dc(lVar16);
      }
      uVar23 = uVar23 + 1;
    } while (uVar14 != uVar23);
  }
  _swift_release(pcVar9);
  pcVar9 = local_100;
  uVar23 = *(ulong *)(pcVar15 + 0x10);
  uVar14 = uVar23;
  if (0xb < uVar23) {
    uVar14 = 0xc;
  }
  local_78 = PTR___swiftEmptySetSingleton_1005241a0;
  pvVar17 = *(void **)(local_100 + 0x10);
  _swift_retain(local_100);
  pcVar5 = pcVar9;
  if (pvVar17 != local_110.bridgeObject) {
    FUN_10031b430(pcVar9,pcVar9 + local_a0,0,(long)local_110.bridgeObject << 1 | 1);
    _swift_release(pcVar9);
    uVar23 = *(ulong *)(pcVar15 + 0x10);
  }
  _swift_retain(pcVar15);
  puVar13 = local_c8;
  pcVar9 = pcVar15;
  local_110.bridgeObject = pcVar15;
  if (uVar23 != uVar14) {
    FUN_10031b430(pcVar15,pcVar15 + local_a0,0,uVar14 << 1 | 1);
    _swift_release(pcVar15);
  }
  local_88 = pcVar5;
  FUN_10012f3c8(pcVar9);
  lVar11 = *(long *)(local_88 + 0x10);
  local_110.str = local_88;
  if (lVar11 == 0) {
    local_c0 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    pcVar15 = local_88 + local_a0;
    local_c0 = PTR___swiftEmptyArrayStorage_100524190;
    local_a0 = *(ulong *)(local_d0 + 0x48);
    lVar18 = local_98;
    do {
      UVar10.unknown = local_b8;
      FUN_10002f154(pcVar15,local_b8);
      FUN_10002f198(UVar10.unknown,lVar18);
      SVar24 = Foundation::URL::get_lastPathComponent(UVar10);
      UVar10.unknown = SVar24.bridgeObject;
      uVar14 = (ulong)SVar24.str & 0xffffffffffff;
      if (((ulong)UVar10.unknown & 0x2000000000000000) != 0) {
        uVar14 = (ulong)UVar10.unknown >> 0x38 & 0xf;
      }
      if (uVar14 == 0) {
        _swift_bridgeObjectRelease(UVar10.unknown);
        UVar10.unknown = *(undefined **)(lVar18 + 8);
        _swift_bridgeObjectRetain(UVar10.unknown);
      }
      UVar6.unknown = local_a8;
      Foundation::URL::_init();
      _swift_bridgeObjectRelease();
      lVar18 = local_b0;
      Foundation::URL::deletingPathExtension(UVar10);
      pcVar21 = *(code **)(lVar22 + 8);
      (*pcVar21)(UVar6.unknown,puVar13);
      SVar24 = Foundation::URL::get_lastPathComponent(UVar6);
      pvVar17 = SVar24.bridgeObject;
      (*pcVar21)(lVar18,puVar13);
      _swift_bridgeObjectRetain(pvVar17);
      ppcVar7 = &local_88;
      FUN_1001ca054(ppcVar7,SVar24.str,pvVar17);
      _swift_bridgeObjectRelease(local_80);
      lVar18 = local_98;
      if (((ulong)ppcVar7 & 1) == 0) {
        FUN_10002f1dc(local_98);
        _swift_bridgeObjectRelease(pvVar17);
      }
      else {
        if (DAT_100556f80 != -1) {
          _swift_once(&DAT_100556f80,FUN_1001dd604);
        }
        uVar3 = DAT_100577cf0;
        puVar13 = &DAT_10042dfc8;
        _swift_getKeyPath(&DAT_10042dfc8);
        puVar8 = &DAT_10042dff0;
        _swift_getKeyPath(&DAT_10042dff0);
        Combine::Published::_get_subscript(&local_88,uVar3,puVar13,puVar8);
        _swift_release(puVar13);
        _swift_release(puVar8);
        pcVar9 = local_88;
        if (*(long *)(local_88 + 0x10) == 0) {
          bVar19 = true;
          lVar12 = local_e0;
          puVar13 = local_c8;
        }
        else {
          _swift_bridgeObjectRetain(local_88);
          SVar25 = SVar24;
          FUN_10000464c(SVar24.str);
          puVar13 = local_c8;
          lVar12 = local_e0;
          bVar19 = ((ulong)SVar25.bridgeObject & 1) == 0;
          if (!bVar19) {
            (**(code **)(lVar22 + 0x10))
                      (local_e0,*(long *)(pcVar9 + 0x38) +
                                *(long *)(lVar22 + 0x48) * (long)SVar25.str,local_c8);
          }
          _swift_bridgeObjectRelease(pcVar9);
        }
        (**(code **)(lVar22 + 0x38))(lVar12,bVar19,1,puVar13);
        _swift_bridgeObjectRelease(pcVar9);
        lVar20 = lVar12;
        (**(code **)(lVar22 + 0x30))(lVar12,1,puVar13);
        lVar18 = local_98;
        lVar16 = local_e8;
        if ((int)lVar20 == 1) {
          FUN_10002f1dc(local_98);
          _swift_bridgeObjectRelease(pvVar17);
          FUN_10002a29c(lVar12,&DAT_100553d90,&DAT_10041bf10);
        }
        else {
          (**(code **)(lVar22 + 0x20))(local_e8,lVar12,puVar13);
          pSVar4 = local_d8;
          iVar2 = *(int *)(local_f0 + 0x30);
          *local_d8 = SVar24;
          (**(code **)(lVar22 + 0x10))((long)&pSVar4->str + (long)iVar2,lVar16,puVar13);
          pcVar9 = local_c0;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)pcVar9 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            FUN_1001c53fc(0,*(long *)(local_c0 + 0x10) + 1,1);
            local_c0 = puVar8;
          }
          lVar18 = local_98;
          uVar14 = *(ulong *)(local_c0 + 0x10);
          if (*(ulong *)(local_c0 + 0x18) >> 1 <= uVar14) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(local_c0 + 0x18));
            FUN_1001c53fc(puVar8,uVar14 + 1,1,local_c0);
            local_c0 = puVar8;
          }
          *(ulong *)(local_c0 + 0x10) = uVar14 + 1;
          FUN_1002ab970(local_d8,local_c0 +
                                 *(long *)(local_f8 + 0x48) * uVar14 +
                                 ((ulong)*(byte *)(local_f8 + 0x50) + 0x20 &
                                 ((ulong)*(byte *)(local_f8 + 0x50) ^ 0xffffffffffffffff)));
          (*pcVar21)(local_e8,puVar13);
          FUN_10002f1dc(lVar18);
        }
      }
      pcVar15 = pcVar15 + local_a0;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  _swift_release(local_110.bridgeObject);
  _swift_bridgeObjectRelease(local_110.str);
  _swift_release(local_100);
  _swift_bridgeObjectRelease(local_78);
  return local_c0;
}

