// rea decompile_all
// name: FUN_1002e0620
// address: 0x1002e0620
// body: available
// range: 0x1002e0620-0x1002e08ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002e0824 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8
FUN_1002e0620(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  NSComparisonResult NVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar1 = ((long)param_2 - (long)param_1) / 0x28;
  lVar2 = ((long)param_3 - (long)param_2) / 0x28;
  if (lVar1 < lVar2) {
    if ((param_4 < param_1) ||
       ((param_1 + lVar1 * 5 <= param_4 || (puVar5 = param_1, param_4 != param_1)))) {
      puVar5 = _memmove(param_4,param_1,lVar1 * 0x28);
    }
    puVar10 = param_4 + lVar1 * 5;
    puVar7 = param_1;
    if ((0x27 < (long)param_2 - (long)param_1) && (param_2 < param_3)) {
      FUN_100026df4();
      puVar3 = PTR___type_metadata_for_Swift_String_100523a98;
      NVar6.unknown = (undefined *)puVar5;
      do {
        NVar6 = (extension_Foundation)::Swift::StringProtocol::_localizedCaseInsensitiveCompare
                          (NVar6.unknown,puVar3,puVar3,puVar5,puVar5);
        if (NVar6.unknown == (undefined *)0xffffffffffffffff) {
          puVar8 = param_2 + 5;
          puVar4 = param_4;
          puVar9 = param_2;
        }
        else {
          puVar8 = param_2;
          puVar4 = param_4 + 5;
          puVar9 = param_4;
        }
        param_4 = puVar4;
        param_2 = puVar8;
        if (puVar7 != puVar9) {
          uVar12 = puVar9[1];
          uVar11 = *puVar9;
          uVar14 = puVar9[3];
          uVar13 = puVar9[2];
          puVar7[4] = puVar9[4];
          puVar7[1] = uVar12;
          *puVar7 = uVar11;
          puVar7[3] = uVar14;
          puVar7[2] = uVar13;
        }
        puVar7 = puVar7 + 5;
      } while ((param_4 < puVar10) && (param_2 < param_3));
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar2 * 5 <= param_4)) ||
       (puVar5 = param_1, param_4 != param_2)) {
      puVar5 = _memmove(param_4,param_2,lVar2 * 0x28);
    }
    puVar9 = param_4 + lVar2 * 5;
    puVar7 = param_2;
    puVar10 = puVar9;
    if ((param_1 < param_2) && (0x27 < (long)param_3 - (long)param_2)) {
      FUN_100026df4();
      puVar3 = PTR___type_metadata_for_Swift_String_100523a98;
      NVar6.unknown = (undefined *)puVar5;
      do {
        while( true ) {
          puVar8 = param_3 + -5;
          NVar6 = (extension_Foundation)::Swift::StringProtocol::_localizedCaseInsensitiveCompare
                            (NVar6.unknown,puVar3,puVar3,puVar5,puVar5);
          if (NVar6.unknown != (undefined *)0xffffffffffffffff) break;
          puVar7 = param_2 + -5;
          if (param_3 != param_2) {
            uVar12 = param_2[-4];
            uVar11 = *puVar7;
            uVar14 = param_2[-2];
            uVar13 = param_2[-3];
            param_3[-1] = param_2[-1];
            param_3[-4] = uVar12;
            *puVar8 = uVar11;
            param_3[-2] = uVar14;
            param_3[-3] = uVar13;
          }
          puVar10 = puVar9;
          if ((puVar7 <= param_1) || (param_3 = puVar8, param_2 = puVar7, puVar9 <= param_4))
          goto LAB_1002e0894;
        }
        puVar10 = puVar9 + -5;
        if (param_3 != puVar9) {
          uVar12 = puVar9[-4];
          uVar11 = *puVar10;
          uVar14 = puVar9[-2];
          uVar13 = puVar9[-3];
          param_3[-1] = puVar9[-1];
          param_3[-4] = uVar12;
          *puVar8 = uVar11;
          param_3[-2] = uVar14;
          param_3[-3] = uVar13;
        }
        puVar7 = param_2;
        puVar9 = puVar10;
        param_3 = puVar8;
      } while (param_4 < puVar10);
    }
  }
LAB_1002e0894:
  lVar1 = ((long)puVar10 - (long)param_4) / 0x28;
  if ((puVar7 != param_4) || (param_4 + lVar1 * 5 <= puVar7)) {
    _memmove(puVar7,param_4,lVar1 * 0x28);
  }
  return 1;
}

