// rea decompile_all
// name: FUN_1002b1108
// address: 0x1002b1108
// body: available
// range: 0x1002b1108-0x1002b15c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_1002b1108(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  double dVar1;
  undefined8 *puVar2;
  double *pdVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  double dVar15;
  double local_98;
  undefined1 auStack_90 [32];
  
  lVar8 = (long)param_2 - (long)param_1;
  lVar5 = lVar8 + 0xf;
  if (-1 < lVar8) {
    lVar5 = lVar8;
  }
  lVar5 = lVar5 >> 4;
  lVar11 = (long)param_3 - (long)param_2;
  lVar7 = lVar11 + 0xf;
  if (-1 < lVar11) {
    lVar7 = lVar11;
  }
  lVar7 = lVar7 >> 4;
  if (lVar5 < lVar7) {
    if ((param_4 < param_1) || ((param_1 + lVar5 * 2 <= param_4 || (param_4 != param_1)))) {
      _memmove(param_4,param_1,lVar5 << 4);
    }
    puVar13 = param_4 + lVar5 * 2;
    puVar9 = param_1;
    if ((0xf < lVar8) && (param_2 < param_3)) {
      do {
        lVar5 = param_2[1];
        lVar7 = param_4[1];
        lVar8 = *(long *)(lVar5 + 0x10);
        _swift_bridgeObjectRetain(lVar5);
        _swift_bridgeObjectRetain(lVar7);
        dVar15 = 0.0;
        if (lVar8 != 0) {
          uVar4 = 0;
          lVar8 = 0x416465696c707061;
          FUN_10000464c(0x416465696c707061);
          if ((uVar4 & 1) != 0) {
            FUN_1000280d4(*(long *)(lVar5 + 0x38) + lVar8 * 0x20,auStack_90);
            pdVar3 = &local_98;
            _swift_dynamicCast(pdVar3,auStack_90,PTR___type_metadata_for_Any_100524178 + 8,
                               PTR___type_metadata_for_Swift_Double_100523b90,6);
            dVar15 = local_98;
            if ((int)pdVar3 == 0) {
              dVar15 = 0.0;
            }
          }
        }
        if (*(long *)(lVar7 + 0x10) == 0) {
LAB_1002b12fc:
          _swift_bridgeObjectRelease(lVar5);
          _swift_bridgeObjectRelease(lVar7);
          if (0.0 <= dVar15) goto LAB_1002b1344;
LAB_1002b1314:
          puVar10 = param_2 + 2;
          puVar2 = param_4;
          puVar12 = param_2;
        }
        else {
          _swift_bridgeObjectRetain(lVar7);
          uVar4 = 0;
          lVar8 = 0x416465696c707061;
          FUN_10000464c(0x416465696c707061);
          if ((uVar4 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar5);
            _swift_bridgeObjectRelease_n(lVar7,2);
            if (dVar15 < 0.0) goto LAB_1002b1314;
          }
          else {
            FUN_1000280d4(*(long *)(lVar7 + 0x38) + lVar8 * 0x20,auStack_90);
            _swift_bridgeObjectRelease(lVar7);
            pdVar3 = &local_98;
            _swift_dynamicCast(pdVar3,auStack_90,PTR___type_metadata_for_Any_100524178 + 8,
                               PTR___type_metadata_for_Swift_Double_100523b90,6);
            dVar1 = local_98;
            if (((ulong)pdVar3 & 1) == 0) goto LAB_1002b12fc;
            _swift_bridgeObjectRelease(lVar5);
            _swift_bridgeObjectRelease(lVar7);
            if (dVar15 < dVar1) goto LAB_1002b1314;
          }
LAB_1002b1344:
          puVar10 = param_2;
          puVar2 = param_4 + 2;
          puVar12 = param_4;
        }
        param_4 = puVar2;
        param_2 = puVar10;
        if (puVar9 != puVar12) {
          uVar14 = *puVar12;
          puVar9[1] = puVar12[1];
          *puVar9 = uVar14;
        }
        puVar9 = puVar9 + 2;
      } while ((param_4 < puVar13) && (param_2 < param_3));
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar7 * 2 <= param_4)) || (param_4 != param_2)) {
      _memmove(param_4,param_2,lVar7 << 4);
    }
    puVar12 = param_4 + lVar7 * 2;
    puVar9 = param_2;
    puVar13 = puVar12;
    if ((param_1 < param_2) && (0xf < lVar11)) {
      do {
        while( true ) {
          puVar10 = param_3 + -2;
          lVar5 = puVar12[-1];
          lVar7 = param_2[-1];
          lVar8 = *(long *)(lVar5 + 0x10);
          _swift_bridgeObjectRetain(lVar5);
          _swift_bridgeObjectRetain(lVar7);
          dVar15 = 0.0;
          if (lVar8 != 0) {
            uVar4 = 0;
            lVar8 = 0x416465696c707061;
            FUN_10000464c(0x416465696c707061);
            if ((uVar4 & 1) != 0) {
              FUN_1000280d4(*(long *)(lVar5 + 0x38) + lVar8 * 0x20,auStack_90);
              pdVar3 = &local_98;
              _swift_dynamicCast(pdVar3,auStack_90,PTR___type_metadata_for_Any_100524178 + 8,
                                 PTR___type_metadata_for_Swift_Double_100523b90,6);
              dVar15 = local_98;
              if ((int)pdVar3 == 0) {
                dVar15 = 0.0;
              }
            }
          }
          if (*(long *)(lVar7 + 0x10) == 0) break;
          _swift_bridgeObjectRetain(lVar7);
          uVar4 = 0;
          lVar8 = 0x416465696c707061;
          FUN_10000464c(0x416465696c707061);
          if ((uVar4 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar5);
            _swift_bridgeObjectRelease_n(lVar7,2);
            goto LAB_1002b14f8;
          }
          FUN_1000280d4(*(long *)(lVar7 + 0x38) + lVar8 * 0x20,auStack_90);
          _swift_bridgeObjectRelease(lVar7);
          pdVar3 = &local_98;
          _swift_dynamicCast(pdVar3,auStack_90,PTR___type_metadata_for_Any_100524178 + 8,
                             PTR___type_metadata_for_Swift_Double_100523b90,6);
          dVar1 = local_98;
          if (((ulong)pdVar3 & 1) == 0) break;
          _swift_bridgeObjectRelease(lVar5);
          _swift_bridgeObjectRelease(lVar7);
          if (dVar1 <= dVar15) goto LAB_1002b1504;
LAB_1002b1520:
          puVar9 = param_2 + -2;
          if (param_3 != param_2) {
            uVar14 = *puVar9;
            param_3[-1] = param_2[-1];
            *puVar10 = uVar14;
          }
          puVar13 = puVar12;
          if ((puVar9 <= param_1) || (param_3 = puVar10, param_2 = puVar9, puVar12 <= param_4))
          goto LAB_1002b1558;
        }
        _swift_bridgeObjectRelease(lVar5);
        _swift_bridgeObjectRelease(lVar7);
LAB_1002b14f8:
        if (dVar15 < 0.0) goto LAB_1002b1520;
LAB_1002b1504:
        puVar13 = puVar12 + -2;
        if (param_3 != puVar12) {
          uVar14 = *puVar13;
          param_3[-1] = puVar12[-1];
          *puVar10 = uVar14;
        }
        puVar9 = param_2;
        puVar12 = puVar13;
        param_3 = puVar10;
      } while (param_4 < puVar13);
    }
  }
LAB_1002b1558:
  uVar6 = (long)puVar13 - (long)param_4;
  uVar4 = uVar6 + 0xf;
  if (-1 < (long)uVar6) {
    uVar4 = uVar6;
  }
  if ((puVar9 != param_4) ||
     ((undefined8 *)((long)param_4 + (uVar4 & 0xfffffffffffffff0)) <= puVar9)) {
    _memmove(puVar9,param_4,((long)uVar4 >> 4) << 4);
  }
  return 1;
}

