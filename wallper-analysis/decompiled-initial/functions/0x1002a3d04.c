// rea decompile_all
// name: FUN_1002a3d04
// address: 0x1002a3d04
// body: available
// range: 0x1002a3d04-0x1002a3f17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002a3d04(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  Date DVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long extraout_x12;
  long extraout_x13;
  long extraout_x13_00;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  puVar3 = &DAT_1005569c8;
  FUN_100002f94(&DAT_1005569c8,&DAT_10042aac8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffff50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = (long)puVar5 - extraout_x13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar13 - extraout_x13_00;
  if (param_3 != param_2) {
    lVar6 = *param_4;
    lVar7 = *(long *)(extraout_x12 + 0x48);
    lVar10 = lVar6 + lVar7 * (param_3 + -1);
    param_1 = param_1 - param_3;
    lVar8 = lVar6 + lVar7 * param_3;
    lVar12 = param_1;
    lVar11 = lVar10;
    lVar9 = lVar8;
LAB_1002a3e50:
    do {
      FUN_1000087e4(lVar8,lVar14,&DAT_1005569c8,&DAT_10042aac8);
      DVar4.unknown = &DAT_1005569c8;
      FUN_1000087e4(lVar10,lVar13,&DAT_1005569c8,&DAT_10042aac8);
      bVar2 = Foundation::Date::<_infix
                        ((undefined *)(lVar14 + *(int *)(puVar3 + 0x40)),
                         (undefined *)(lVar13 + *(int *)(puVar3 + 0x40)),DVar4);
      FUN_10002a29c(lVar13,&DAT_1005569c8,&DAT_10042aac8);
      FUN_10002a29c(lVar14,&DAT_1005569c8,&DAT_10042aac8);
      if (bVar2) {
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1002a3f18);
          (*pcVar1)();
        }
        FUN_100007e1c(lVar8,puVar5,&DAT_1005569c8,&DAT_10042aac8);
        _swift_arrayInitWithTakeFrontToBack(lVar8,lVar10,1,puVar3);
        FUN_100007e1c(puVar5,lVar10,&DAT_1005569c8,&DAT_10042aac8);
        lVar10 = lVar10 + -lVar7;
        lVar8 = lVar8 + -lVar7;
        bVar2 = param_1 != -1;
        param_1 = param_1 + 1;
        if (bVar2) goto LAB_1002a3e50;
      }
      param_3 = param_3 + 1;
      lVar10 = lVar11 + lVar7;
      param_1 = lVar12 + -1;
      lVar8 = lVar9 + lVar7;
      lVar12 = param_1;
      lVar11 = lVar10;
      lVar9 = lVar8;
    } while (param_3 != param_2);
  }
  return;
}

