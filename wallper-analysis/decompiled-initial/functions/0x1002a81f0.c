// rea decompile_all
// name: FUN_1002a81f0
// address: 0x1002a81f0
// body: available
// range: 0x1002a81f0-0x1002a85b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_1002a81f0(double param_1,Index param_2,Index param_3,undefined8 param_4,undefined8 param_5,
             long param_6)

{
  ulong uVar1;
  Range<Index> RVar2;
  char *pcVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  _StringGuts _Var7;
  Substring from;
  undefined *puVar8;
  undefined *puVar9;
  Substring after;
  uint uVar10;
  undefined8 uVar12;
  Substring SVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  double dVar17;
  Character CVar18;
  undefined1 auVar19 [16];
  _StringGuts _Var11;
  
  if ((ulong)param_3.unknown >> 0xe == (ulong)param_2.unknown >> 0xe) goto LAB_1002a8474;
  CVar18 = Swift::Substring::get_subscript(param_2,(Substring)param_2.unknown);
  _Var11.unknown = CVar18.bridgeObject;
  _Var7.unknown = CVar18.str;
  if ((_Var7.unknown != (undefined *)0x2b) || (_Var11.unknown != (undefined *)0xe100000000000000)) {
    bVar6 = Swift::_stringCompareWithSmolCheck(_Var7,_Var11,(_StringComparisonResult)0x2b);
    if ((!bVar6) &&
       ((_Var7.unknown != (undefined *)0x2d || _Var11.unknown != (undefined *)0xe100000000000000 &&
        (bVar6 = Swift::_stringCompareWithSmolCheck(_Var7,_Var11,(_StringComparisonResult)0x2d),
        !bVar6)))) {
      _swift_bridgeObjectRelease(_Var11.unknown);
      goto LAB_1002a8474;
    }
  }
  uVar10 = 1;
  Swift::Substring::_index(param_2,1,param_3,(Substring)param_2.unknown);
  RVar2.unknown = param_3.unknown;
  if ((uVar10 & 0xff) != 1) {
    RVar2.unknown = param_2.unknown;
  }
  if ((ulong)param_3.unknown >> 0xe < (ulong)RVar2.unknown >> 0xe) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1002a859c);
    (*pcVar5)();
  }
  SVar13.unknown = param_3.unknown;
  from = Swift::Substring::get_subscript(RVar2,param_3.unknown);
  puVar8 = (undefined *)Swift::Substring::distance(from.unknown,param_3,from.unknown);
  puVar9 = PTR___swiftEmptyArrayStorage_100524190;
  if (puVar8 != (undefined *)0x0) {
    puVar9 = puVar8;
    FUN_1002a805c(puVar8,0);
    _swift_bridgeObjectRetain(SVar13.unknown);
    if ((long)puVar8 < 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1002a8598);
      (*pcVar5)();
    }
    if (0x3fff < ((ulong)from.unknown ^ (ulong)param_3.unknown)) {
      lVar15 = 0x20;
      after = from;
      do {
        CVar18 = Swift::Substring::get_subscript((Index)after.unknown,from);
        after.unknown = (undefined *)Swift::Substring::index(after.unknown,from);
        *(Character *)(puVar9 + lVar15) = CVar18;
        puVar8 = puVar8 + -1;
        if (puVar8 == (undefined *)0x0) {
          _swift_bridgeObjectRelease(SVar13.unknown);
          goto LAB_1002a83f4;
        }
        lVar15 = lVar15 + 0x10;
      } while (0x3fff < ((ulong)after.unknown ^ (ulong)param_3.unknown));
    }
    _swift_bridgeObjectRelease(SVar13.unknown);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1002a8380);
    (*pcVar5)();
  }
LAB_1002a83f4:
  _swift_bridgeObjectRelease(SVar13.unknown);
  uVar1 = param_6 + 2;
  if (SCARRY8(param_6,2)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1002a85a0);
    (*pcVar5)();
  }
  uVar16 = *(ulong *)(puVar9 + 0x10);
  if (uVar16 == uVar1) {
LAB_1002a8424:
    lVar15 = uVar16 + 1;
    puVar14 = (undefined8 *)(puVar9 + 0x28);
    do {
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) {
        if (param_6 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1002a85a8);
          (*pcVar5)();
        }
        FUN_1002a77dc(0,param_6,puVar9);
        if ((long)uVar1 < param_6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1002a85ac);
          (*pcVar5)();
        }
        dVar17 = param_1;
        FUN_1002a77dc(param_6,uVar1,puVar9);
        if (SCARRY8(param_6,4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1002a85b0);
          (*pcVar5)();
        }
        dVar17 = dVar17 / 60.0;
        param_1 = param_1 + dVar17;
        if (uVar16 == param_6 + 4U) {
          if (uVar16 < uVar1) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1002a85b4);
            (*pcVar5)();
          }
          FUN_1002a77dc(uVar1,uVar16,puVar9);
          _swift_release(puVar9);
          param_1 = param_1 + dVar17 / 3600.0;
          if (_Var7.unknown != (undefined *)0x2d) goto LAB_1002a855c;
LAB_1002a8544:
          if (_Var11.unknown != (undefined *)0xe100000000000000) goto LAB_1002a855c;
          _swift_bridgeObjectRelease(0xe100000000000000);
LAB_1002a8584:
          param_1 = -param_1;
        }
        else {
          _swift_release(puVar9);
          if (_Var7.unknown == (undefined *)0x2d) goto LAB_1002a8544;
LAB_1002a855c:
          bVar6 = Swift::_stringCompareWithSmolCheck(_Var7,_Var11,(_StringComparisonResult)0x2d);
          _swift_bridgeObjectRelease(_Var11.unknown);
          if (bVar6) goto LAB_1002a8584;
        }
        uVar12 = 0;
        goto LAB_1002a847c;
      }
      pcVar3 = (char *)puVar14[-1];
      pvVar4 = (void *)*puVar14;
      _swift_bridgeObjectRetain(pvVar4);
      CVar18.bridgeObject = pvVar4;
      CVar18.str = pcVar3;
      bVar6 = Swift::Character::get_isNumber(CVar18);
      _swift_bridgeObjectRelease(pvVar4);
      puVar14 = puVar14 + 2;
    } while (bVar6);
  }
  else {
    if (SCARRY8(param_6,4)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1002a85a4);
      (*pcVar5)();
    }
    if (uVar16 == param_6 + 4U) goto LAB_1002a8424;
  }
  _swift_bridgeObjectRelease(_Var11.unknown);
  _swift_release(puVar9);
LAB_1002a8474:
  param_1 = 0.0;
  uVar12 = 1;
LAB_1002a847c:
  auVar19._8_8_ = uVar12;
  auVar19._0_8_ = param_1;
  return auVar19;
}

