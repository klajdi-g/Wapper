// rea decompile_all
// name: FUN_1001d62f0
// address: 0x1001d62f0
// body: available
// range: 0x1001d62f0-0x1001d6587 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d62f0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar10;
  long extraout_x12;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long alStack_70 [2];
  
  puVar5 = &DAT_10054a9d0;
  FUN_100002f94(&DAT_10054a9d0,&DAT_10041bc60);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)alStack_70 - extraout_x8;
  lVar6 = 0;
  FUN_1001d59ac();
  lVar15 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  lVar11 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar11 - extraout_x12;
  lVar7 = param_2;
  FUN_1001d6f78(param_2,param_3);
  FUN_1001d682c(lVar13,param_2,param_3);
  lVar8 = lVar13;
  (**(code **)(lVar15 + 0x30))(lVar13,1,lVar6);
  if ((int)lVar8 == 1) {
    _swift_bridgeObjectRelease(lVar7);
    FUN_10002a29c(lVar13,&DAT_10054a9d0,&DAT_10041bc60);
    uVar9 = 1;
  }
  else {
    FUN_100007e64(lVar13,lVar12,FUN_1001d59ac);
    lVar8 = lVar12;
    lVar13 = lVar7;
    FUN_1001d5e44();
    if (((uint)lVar13 & 0xff) == 1) {
      FUN_100029548(lVar12,FUN_1001d59ac);
      _swift_bridgeObjectRelease(lVar7);
      uVar9 = 1;
    }
    else {
      lVar13 = *(long *)(lVar7 + 0x10);
      alStack_70[1] = param_1;
      if (lVar13 != 0) {
        lVar14 = 0;
        bVar2 = *(byte *)(lVar15 + 0x50);
        do {
          if (SBORROW8(lVar8,lVar14)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1001d657c);
            (*pcVar4)();
          }
          lVar1 = (lVar8 - lVar14) + lVar13;
          if (SCARRY8(lVar8 - lVar14,lVar13)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1001d6580);
            (*pcVar4)();
          }
          lVar3 = 0;
          if (lVar13 != 0) {
            lVar3 = lVar1 / lVar13;
          }
          uVar10 = lVar1 - lVar3 * lVar13;
          if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1001d6584);
            (*pcVar4)();
          }
          if (*(ulong *)(lVar7 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1001d6588);
            (*pcVar4)();
          }
          FUN_100029504(lVar7 + ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff)) +
                        *(long *)(lVar15 + 0x48) * uVar10,lVar11,FUN_1001d59ac);
          if (*(long *)(*(long *)(lVar11 + *(int *)(lVar6 + 0x24)) + 0x10) != 0) {
            FUN_100029548(lVar12,FUN_1001d59ac);
            _swift_bridgeObjectRelease(lVar7);
            param_1 = alStack_70[1];
            FUN_100007e64(lVar11,alStack_70[1],FUN_1001d59ac);
            uVar9 = 0;
            goto LAB_1001d6544;
          }
          lVar14 = lVar14 + 1;
          FUN_100029548(lVar11,FUN_1001d59ac);
        } while (lVar13 != lVar14);
      }
      _swift_bridgeObjectRelease(lVar7);
      FUN_100029548(lVar12,FUN_1001d59ac);
      uVar9 = 1;
      param_1 = alStack_70[1];
    }
  }
LAB_1001d6544:
  (**(code **)(lVar15 + 0x38))(param_1,uVar9,1,lVar6);
  return;
}

