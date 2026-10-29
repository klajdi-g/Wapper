// rea decompile_all
// name: FUN_10007c624
// address: 0x10007c624
// body: available
// range: 0x10007c624-0x10007c8ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


double FUN_10007c624(void)

{
  undefined1 *puVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  long lVar5;
  long lVar6;
  State SVar7;
  code *pcVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double local_a0;
  byte local_91;
  undefined1 local_90;
  undefined8 local_88;
  
  lVar5 = 0;
  FUN_10009e280();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar9 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  FUN_100095ec0();
  puVar1 = (undefined1 *)(unaff_x20 + *(int *)(lVar6 + 0x28));
  local_90 = *puVar1;
  local_88 = *(undefined8 *)(puVar1 + 8);
  SVar7.unknown = &DAT_10054ab50;
  pcVar8 = (code *)&DAT_10041d0f0;
  FUN_100002f94();
  SwiftUI::State::get_wrappedValue(SVar7);
  if ((local_91 & 1) == 0) {
    if (DAT_10054f5d0 != -1) {
      pcVar8 = FUN_10007c094;
      _swift_once(&DAT_10054f5d0);
    }
    dVar4 = DAT_10054f5f8;
    dVar3 = DAT_10054f5f0;
    dVar11 = DAT_10054f5e8;
    dVar12 = DAT_10054f5e0;
    FUN_10007c3e0(lVar9);
    pdVar2 = (double *)(lVar9 + *(int *)(lVar5 + 0x30));
    if ((*(char *)(pdVar2 + 1) == '\x01') || (dVar13 = *pdVar2, dVar13 <= 0.0)) {
      FUN_100095498(lVar9);
      dVar14 = 0.0;
    }
    else {
      pdVar2 = (double *)(lVar9 + *(int *)(lVar5 + 0x2c));
      local_a0 = *pdVar2;
      lVar5 = 0;
      FUN_10015f8e8();
      dVar10 = Foundation::Date::timeIntervalSince
                         ((undefined *)((long)pdVar2 + (long)*(int *)(lVar5 + 0x14)),(Date)pcVar8);
      dVar14 = 0.0;
      if (dVar10 < 0.0) {
        dVar10 = 0.0;
      }
      dVar15 = *(double *)((long)pdVar2 + (long)*(int *)(lVar5 + 0x18));
      FUN_100095498(lVar9);
      dVar13 = (local_a0 + dVar10 * dVar15) / dVar13;
      if (0.0 < dVar13) {
        dVar14 = 1.0;
        if (dVar13 <= 1.0) {
          dVar14 = dVar13;
        }
        dVar14 = dVar14 * 0.575;
      }
    }
    dVar13 = (0.975 - dVar14) * 436.0;
    dVar11 = ((dVar12 * dVar12 + dVar11 * dVar11) - dVar13 * dVar13) / ((dVar12 + dVar12) * dVar11);
    dVar12 = -1.0;
    if (-1.0 < dVar11) {
      dVar12 = dVar11;
    }
    dVar11 = 1.0;
    if (dVar12 <= 1.0) {
      dVar11 = dVar12;
    }
    _acos(dVar11);
    dVar12 = (dVar3 + (dVar11 * -180.0) / 3.141592653589793) - dVar4;
  }
  else {
    dVar12 = DAT_10054f620;
    if (DAT_10054f618 != -1) {
      _swift_once(&DAT_10054f618,FUN_10007c238);
      dVar12 = DAT_10054f620;
    }
  }
  return dVar12;
}

