// rea decompile_all
// name: FUN_1002f5f98
// address: 0x1002f5f98
// body: available
// range: 0x1002f5f98-0x1002f6187 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002f610c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002f5f98(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  NSComparisonResult NVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long extraout_x12;
  long extraout_x13;
  long extraout_x13_00;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  
  lVar3 = 0;
  FUN_1002f58e8();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar13 = &stack0xffffffffffffff60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = (long)puVar13 - extraout_x13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  if (param_3 != param_2) {
    lVar6 = *param_4;
    lVar7 = *(long *)(extraout_x12 + 0x48);
    lVar8 = lVar6 + lVar7 * (param_3 + -1);
    param_1 = param_1 - param_3;
    lVar11 = lVar6 + lVar7 * param_3;
    lVar12 = lVar11;
    lVar10 = param_1;
    lVar9 = lVar8;
LAB_1002f60cc:
    do {
      FUN_100029504(lVar11,lVar14 - extraout_x13_00,FUN_1002f58e8);
      lVar4 = lVar8;
      FUN_100029504(lVar8,lVar14,FUN_1002f58e8);
      FUN_100026df4();
      NVar5 = (extension_Foundation)::Swift::StringProtocol::_localizedCaseInsensitiveCompare
                        (lVar4,PTR___type_metadata_for_Swift_String_100523a98,
                         PTR___type_metadata_for_Swift_String_100523a98,lVar4,lVar4);
      FUN_100029548(lVar14,FUN_1002f58e8);
      FUN_100029548(lVar14 - extraout_x13_00,FUN_1002f58e8);
      if (NVar5.unknown == (undefined *)0xffffffffffffffff) {
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1002f6188);
          (*pcVar1)();
        }
        FUN_100007e64(lVar11,puVar13,FUN_1002f58e8);
        _swift_arrayInitWithTakeFrontToBack(lVar11,lVar8,1,lVar3);
        FUN_100007e64(puVar13,lVar8,FUN_1002f58e8);
        lVar8 = lVar8 + -lVar7;
        lVar11 = lVar11 + -lVar7;
        bVar2 = param_1 != -1;
        param_1 = param_1 + 1;
        if (bVar2) goto LAB_1002f60cc;
      }
      param_3 = param_3 + 1;
      lVar8 = lVar9 + lVar7;
      param_1 = lVar10 + -1;
      lVar11 = lVar12 + lVar7;
      lVar12 = lVar11;
      lVar10 = param_1;
      lVar9 = lVar8;
    } while (param_3 != param_2);
  }
  return;
}

