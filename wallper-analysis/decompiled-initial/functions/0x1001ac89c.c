// rea decompile_all
// name: FUN_1001ac89c
// address: 0x1001ac89c
// body: available
// range: 0x1001ac89c-0x1001acabf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1001ac89c(char *param_1,void *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  undefined *puVar7;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  String SVar17;
  String SVar18;
  undefined1 auVar19 [16];
  _StringGuts _Var8;
  _StringGuts _Var9;
  
  uVar13 = 0x726568746f;
  if (param_2 == (void *)0x0) {
    uVar14 = 0xe500000000000000;
    goto LAB_1001aca4c;
  }
  SVar17.bridgeObject = param_2;
  SVar17.str = param_1;
  SVar17 = Swift::String::lowercased(SVar17);
  _Var8.unknown = SVar17.bridgeObject;
  uVar11 = (ulong)SVar17.str & 0xffffffffffff;
  if (((ulong)_Var8.unknown & 0x2000000000000000) != 0) {
    uVar11 = (ulong)_Var8.unknown >> 0x38 & 0xf;
  }
  if (uVar11 == 0) {
LAB_1001aca3c:
    uVar14 = 0xe500000000000000;
  }
  else {
    FUN_1001ac274(param_1,param_2);
    if (((ulong)param_1 & 1) == 0) {
      if (DAT_1005560a0 != -1) {
        _swift_once(&DAT_1005560a0,FUN_10017d600);
      }
      lVar4 = DAT_100577cd0;
      uVar11 = *(ulong *)(DAT_100577cd0 + 0x10);
      if (uVar11 == 0) goto LAB_1001aca3c;
      uVar12 = 0;
      lVar1 = DAT_100577cd0 + 0x20;
      do {
        if (*(ulong *)(lVar4 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1001acac0);
          (*pcVar5)();
        }
        puVar10 = (undefined8 *)(lVar1 + uVar12 * 0x28);
        uVar2 = *puVar10;
        uVar14 = puVar10[1];
        puVar7 = (undefined *)puVar10[3];
        puVar3 = (undefined *)puVar10[4];
        uVar12 = uVar12 + 1;
        lVar15 = *(long *)(puVar3 + 0x10);
        _swift_bridgeObjectRetain(uVar14);
        _swift_bridgeObjectRetain(puVar7);
        _swift_bridgeObjectRetain(puVar3);
        puVar10 = (undefined8 *)(puVar3 + 0x28);
        uVar16 = 0xffffffffffffffff;
LAB_1001ac9a4:
        if (uVar16 - lVar15 != -1) {
          uVar16 = uVar16 + 1;
          if (*(ulong *)(puVar3 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1001acaa4);
            (*pcVar5)();
          }
          SVar18.bridgeObject = (void *)*puVar10;
          SVar18.str = (char *)puVar10[-1];
          SVar18 = Swift::String::lowercased(SVar18);
          _Var9.unknown = SVar18.bridgeObject;
          if (SVar17 != SVar18) goto code_r0x0001001ac9d8;
          _swift_bridgeObjectRelease(puVar7);
          puVar7 = _Var8.unknown;
          _Var8.unknown = _Var9.unknown;
          goto LAB_1001aca8c;
        }
        _swift_bridgeObjectRelease(puVar3);
        _swift_bridgeObjectRelease(puVar7);
        _swift_bridgeObjectRelease(uVar14);
        uVar14 = 0xe500000000000000;
      } while (uVar12 != uVar11);
    }
    else {
      uVar14 = 0xe700000000000000;
      uVar13 = 0x726573776f7262;
    }
  }
LAB_1001aca44:
  _swift_bridgeObjectRelease(_Var8.unknown);
LAB_1001aca4c:
  auVar19._8_8_ = uVar14;
  auVar19._0_8_ = uVar13;
  return auVar19;
code_r0x0001001ac9d8:
  puVar10 = puVar10 + 2;
  bVar6 = Swift::_stringCompareWithSmolCheck
                    ((_StringGuts)SVar18.str,_Var9,(_StringComparisonResult)(__int8)SVar17.str);
  _swift_bridgeObjectRelease(_Var9.unknown);
  if (bVar6) {
LAB_1001aca8c:
    _swift_bridgeObjectRelease(puVar7);
    _swift_bridgeObjectRelease(_Var8.unknown);
    uVar13 = uVar2;
    _Var8.unknown = puVar3;
    goto LAB_1001aca44;
  }
  goto LAB_1001ac9a4;
}

