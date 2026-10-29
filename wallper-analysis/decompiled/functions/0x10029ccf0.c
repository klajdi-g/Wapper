// rea decompile_all
// name: FUN_10029ccf0
// address: 0x10029ccf0
// body: available
// range: 0x10029ccf0-0x10029d2c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10029ccf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  URL UVar5;
  URL UVar6;
  char *pcVar7;
  undefined *puVar8;
  ulong uVar9;
  void *pvVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  String *pSVar18;
  long lVar19;
  long lVar20;
  String *pSVar21;
  String SVar22;
  String local_100;
  long local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar4 = 0;
  local_c8 = param_5;
  FUN_1002a473c();
  lVar20 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  pSVar18 = (String *)((long)&local_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  pSVar21 = (String *)((long)pSVar18 - extraout_x12);
  puVar15 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = (long)pSVar21 - extraout_x8_00;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar13 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  puVar15 = (undefined *)(lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_d0 = param_3;
  FUN_10029d6d8(lVar19,param_1,param_2,param_3);
  lVar17 = lVar19;
  (**(code **)(lVar13 + 0x30))(lVar19,1,UVar5.unknown);
  if ((int)lVar17 == 1) {
    FUN_10002a29c(lVar19,&DAT_100553d90,&DAT_10041bf10);
  }
  else {
    UVar6.unknown = puVar15;
    local_100.bridgeObject = pSVar18;
    local_f0 = lVar4;
    local_e8 = param_4;
    local_d8 = lVar13;
    (**(code **)(lVar13 + 0x20))(puVar15,lVar19,UVar5.unknown);
    local_e0 = puVar15;
    SVar22 = Foundation::URL::get_lastPathComponent(UVar6);
    pvVar10 = SVar22.bridgeObject;
    pcVar7 = SVar22.str;
    if (DAT_100559c08 != -1) {
      _swift_once(&DAT_100559c08,FUN_10029d6c4);
    }
    _swift_beginAccess(&DAT_100559c10,auStack_90,0,0);
    uVar2 = DAT_100559c10;
    _swift_bridgeObjectRetain(DAT_100559c10);
    FUN_1002165a4(pcVar7,pvVar10,uVar2);
    _swift_bridgeObjectRelease(uVar2);
    if (((ulong)pcVar7 & 1) == 0) {
      local_100.str = (char *)UVar5;
      if (DAT_100559c18 != -1) {
        _swift_once(&DAT_100559c18,FUN_10029d6b0);
      }
      _swift_beginAccess(&DAT_100559c20,auStack_a8,0,0);
      uVar9 = DAT_100559c20;
      uVar11 = *(ulong *)(DAT_100559c20 + 0x10);
      _swift_bridgeObjectRetain(DAT_100559c20);
      if (uVar11 != 0) {
        uVar14 = 0;
        do {
          if (*(ulong *)(uVar9 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x10029d1ec);
            (*pcVar12)();
          }
          uVar16 = (ulong)*(byte *)(lVar20 + 0x50) + 0x20 &
                   ((ulong)*(byte *)(lVar20 + 0x50) ^ 0xffffffffffffffff);
          lVar17 = *(long *)(lVar20 + 0x48) * uVar14;
          FUN_1002a4774(uVar9 + uVar16 + lVar17,pSVar21);
          if (SVar22 == *pSVar21) {
            FUN_1002a47b8(pSVar21);
LAB_10029d0e4:
            _swift_bridgeObjectRelease(pvVar10);
            _swift_bridgeObjectRelease(uVar9);
            puVar15 = &DAT_1005376f0;
            _swift_allocObject(&DAT_1005376f0,0x20,7);
            uVar2 = local_c8;
            *(undefined8 *)(puVar15 + 0x10) = local_e8;
            *(undefined8 *)(puVar15 + 0x18) = local_c8;
            _swift_beginAccess(&DAT_100559c20,auStack_c0,0x21,0);
            uVar9 = DAT_100559c20;
            _swift_retain(uVar2);
            uVar11 = uVar9;
            _swift_isUniquelyReferenced_nonNull_native();
            if ((uVar11 & 1) == 0) {
              DAT_100559c20 = uVar9;
              FUN_100287328();
            }
            DAT_100559c20 = uVar9;
            if (*(ulong *)(uVar9 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x10029d27c);
              (*pcVar12)();
            }
            lVar17 = uVar9 + uVar16 + lVar17;
            lVar4 = (long)*(int *)(local_f0 + 0x20);
            uVar16 = *(ulong *)(lVar17 + lVar4);
            uVar11 = uVar16;
            _swift_isUniquelyReferenced_nonNull_native();
            *(ulong *)(lVar17 + lVar4) = uVar16;
            uVar14 = uVar16;
            if ((uVar11 & 1) == 0) {
              uVar14 = 0;
              FUN_1001c4ffc(0,*(long *)(uVar16 + 0x10) + 1,1,uVar16);
              *(ulong *)(lVar17 + lVar4) = uVar14;
            }
            uVar11 = *(ulong *)(uVar14 + 0x10);
            uVar16 = uVar14;
            if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar11) {
              uVar16 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
              FUN_1001c4ffc(uVar16,uVar11 + 1,1,uVar14);
              *(ulong *)(lVar17 + lVar4) = uVar16;
            }
            *(ulong *)(uVar16 + 0x10) = uVar11 + 1;
            lVar17 = uVar16 + uVar11 * 0x10;
            *(code **)(lVar17 + 0x20) = FUN_10005b020;
            *(undefined **)(lVar17 + 0x28) = puVar15;
            DAT_100559c20 = uVar9;
            _swift_endAccess(auStack_c0);
            pcVar12 = *(code **)(local_d8 + 8);
            puVar15 = local_e0;
            goto LAB_10029d1bc;
          }
          bVar3 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)pSVar21->str,(_StringGuts)pSVar21->bridgeObject,
                             (_StringComparisonResult)(__int8)SVar22.str);
          FUN_1002a47b8(pSVar21);
          if (bVar3) goto LAB_10029d0e4;
          uVar14 = uVar14 + 1;
        } while (uVar11 != uVar14);
      }
      _swift_bridgeObjectRelease(uVar9);
      lVar17 = local_f0;
      pvVar10 = local_100.bridgeObject;
      pcVar7 = local_100.str;
      pcVar12 = *(code **)(local_d8 + 0x10);
      (*pcVar12)((long)local_100.bridgeObject + (long)*(int *)(local_f0 + 0x14),local_d0,
                 local_100.str);
      (*pcVar12)((long)pvVar10 + (long)*(int *)(lVar17 + 0x1c),local_e0,pcVar7);
      puVar15 = &DAT_100556a18;
      FUN_100002f94(&DAT_100556a18,&DAT_10042ddd0);
      _swift_allocObject();
      *(undefined8 *)(puVar15 + 0x18) = 2;
      *(undefined8 *)(puVar15 + 0x10) = 1;
      puVar8 = &DAT_100537718;
      _swift_allocObject(&DAT_100537718,0x20,7);
      uVar2 = local_c8;
      *(undefined8 *)(puVar8 + 0x10) = local_e8;
      *(undefined8 *)(puVar8 + 0x18) = local_c8;
      *(code **)(puVar15 + 0x20) = thunk_FUN_10005b020;
      *(undefined **)(puVar15 + 0x28) = puVar8;
      *(String *)pvVar10 = SVar22;
      puVar1 = (undefined8 *)((long)pvVar10 + (long)*(int *)(lVar17 + 0x18));
      *puVar1 = param_1;
      puVar1[1] = param_2;
      *(undefined **)((long)pvVar10 + (long)*(int *)(lVar17 + 0x20)) = puVar15;
      _swift_beginAccess(&DAT_100559c20,auStack_c0,0x21,0);
      uVar9 = DAT_100559c20;
      _swift_retain(uVar2);
      uVar11 = uVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar14 = uVar9;
      if ((uVar11 & 1) == 0) {
        uVar14 = 0;
        DAT_100559c20 = uVar9;
        FUN_1001c4fd8(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
      }
      lVar17 = local_d8;
      puVar15 = local_e0;
      uVar9 = *(ulong *)(uVar14 + 0x10);
      uVar11 = uVar14;
      DAT_100559c20 = uVar14;
      if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar9) {
        uVar11 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
        FUN_1001c4fd8(uVar11,uVar9 + 1,1,uVar14);
      }
      *(ulong *)(uVar11 + 0x10) = uVar9 + 1;
      FUN_1002a4818(pvVar10,uVar11 + ((ulong)*(byte *)(lVar20 + 0x50) + 0x20 &
                                     ((ulong)*(byte *)(lVar20 + 0x50) ^ 0xffffffffffffffff)) +
                            *(long *)(lVar20 + 0x48) * uVar9);
      DAT_100559c20 = uVar11;
      _swift_endAccess(auStack_c0);
      FUN_10029dc60();
      pcVar12 = *(code **)(lVar17 + 8);
LAB_10029d1bc:
      (*pcVar12)(puVar15,local_100.str);
    }
    else {
      (**(code **)(local_d8 + 8))(local_e0,UVar5.unknown);
      _swift_bridgeObjectRelease(pvVar10);
    }
  }
  return;
}

