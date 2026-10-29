// rea decompile_all
// name: FUN_1002e0294
// address: 0x1002e0294
// body: available
// range: 0x1002e0294-0x1002e03af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002e0364 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002e0294(undefined *param_1,long param_2,long param_3,long *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  bool bVar8;
  undefined *puVar9;
  NSComparisonResult NVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  if (param_3 != param_2) {
    lVar13 = *param_4;
    puVar9 = param_1;
    FUN_100026df4();
    puVar6 = PTR___type_metadata_for_Swift_String_100523a98;
    puVar11 = (undefined8 *)(lVar13 + param_3 * 0x28 + -0x28);
    lVar14 = (long)param_1 - param_3;
    NVar10.unknown = puVar9;
    lVar15 = lVar14;
    puVar12 = puVar11;
LAB_1002e0340:
    do {
      NVar10 = (extension_Foundation)::Swift::StringProtocol::_localizedCaseInsensitiveCompare
                         (NVar10.unknown,puVar6,puVar6,puVar9,puVar9);
      if (NVar10.unknown == (undefined *)0xffffffffffffffff) {
        if (lVar13 == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1002e03b0);
          (*pcVar7)();
        }
        uVar1 = puVar11[6];
        uVar3 = puVar11[7];
        uVar4 = puVar11[5];
        puVar11[6] = puVar11[1];
        puVar11[5] = *puVar11;
        uVar2 = puVar11[8];
        uVar5 = puVar11[9];
        puVar11[8] = puVar11[3];
        puVar11[7] = puVar11[2];
        puVar11[9] = puVar11[4];
        *puVar11 = uVar4;
        puVar11[1] = uVar1;
        puVar11[2] = uVar3;
        puVar11[3] = uVar2;
        puVar11[4] = uVar5;
        puVar11 = puVar11 + -5;
        bVar8 = lVar14 != -1;
        lVar14 = lVar14 + 1;
        if (bVar8) goto LAB_1002e0340;
      }
      param_3 = param_3 + 1;
      puVar11 = puVar12 + 5;
      lVar14 = lVar15 + -1;
      lVar15 = lVar14;
      puVar12 = puVar11;
    } while (param_3 != param_2);
  }
  return;
}

