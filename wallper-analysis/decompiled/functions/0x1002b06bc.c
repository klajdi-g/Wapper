// rea decompile_all
// name: FUN_1002b06bc
// address: 0x1002b06bc
// body: available
// range: 0x1002b06bc-0x1002b08c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002b06bc(long param_1,long param_2,long param_3,long *param_4)

{
  undefined8 uVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  double *pdVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  double local_98;
  undefined1 auStack_90 [32];
  
  if (param_3 != param_2) {
    lVar13 = *param_4;
    puVar7 = (undefined8 *)(lVar13 + param_3 * 0x10);
    param_1 = param_1 - param_3;
    do {
      lVar11 = *(long *)(lVar13 + param_3 * 0x10 + 8);
      puVar8 = puVar7;
      lVar10 = param_1;
      do {
        lVar12 = puVar8[-1];
        lVar9 = *(long *)(lVar11 + 0x10);
        _swift_bridgeObjectRetain(lVar11);
        _swift_bridgeObjectRetain(lVar12);
        dVar14 = 0.0;
        if (lVar9 != 0) {
          uVar6 = 0;
          lVar9 = 0x416465696c707061;
          FUN_10000464c(0x416465696c707061);
          if ((uVar6 & 1) != 0) {
            FUN_1000280d4(*(long *)(lVar11 + 0x38) + lVar9 * 0x20,auStack_90);
            pdVar5 = &local_98;
            _swift_dynamicCast(pdVar5,auStack_90,PTR___type_metadata_for_Any_100524178 + 8,
                               PTR___type_metadata_for_Swift_Double_100523b90,6);
            dVar14 = local_98;
            if ((int)pdVar5 == 0) {
              dVar14 = 0.0;
            }
          }
        }
        if (*(long *)(lVar12 + 0x10) == 0) {
LAB_1002b086c:
          _swift_bridgeObjectRelease(lVar11);
          _swift_bridgeObjectRelease(lVar12);
LAB_1002b0894:
          if (0.0 <= dVar14) break;
        }
        else {
          _swift_bridgeObjectRetain(lVar12);
          uVar6 = 0;
          lVar9 = 0x416465696c707061;
          FUN_10000464c(0x416465696c707061);
          if ((uVar6 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar11);
            _swift_bridgeObjectRelease_n(lVar12,2);
            goto LAB_1002b0894;
          }
          FUN_1000280d4(*(long *)(lVar12 + 0x38) + lVar9 * 0x20,auStack_90);
          _swift_bridgeObjectRelease(lVar12);
          pdVar5 = &local_98;
          _swift_dynamicCast(pdVar5,auStack_90,PTR___type_metadata_for_Any_100524178 + 8,
                             PTR___type_metadata_for_Swift_Double_100523b90,6);
          dVar2 = local_98;
          if (((ulong)pdVar5 & 1) == 0) goto LAB_1002b086c;
          _swift_bridgeObjectRelease(lVar11);
          _swift_bridgeObjectRelease(lVar12);
          if (dVar2 <= dVar14) break;
        }
        if (lVar13 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b08c8);
          (*pcVar3)();
        }
        uVar1 = *puVar8;
        lVar11 = puVar8[1];
        puVar8[1] = puVar8[-1];
        *puVar8 = puVar8[-2];
        puVar8[-1] = lVar11;
        puVar8 = puVar8 + -2;
        *puVar8 = uVar1;
        bVar4 = lVar10 != -1;
        lVar10 = lVar10 + 1;
      } while (bVar4);
      param_3 = param_3 + 1;
      puVar7 = puVar7 + 2;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}

