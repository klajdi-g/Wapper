// rea decompile_all
// name: FUN_100032718
// address: 0x100032718
// body: available
// range: 0x100032718-0x100032acf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100032718(long param_1,ulong param_2,char *param_3,void *param_4)

{
  code *pcVar1;
  bool bVar2;
  Index after;
  Substring SVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  Index IVar7;
  void *pvVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  Index IVar13;
  Character CVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  char *pcVar8;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100032a68);
    (*pcVar1)();
  }
  uVar11 = (ulong)param_4 >> 0x38 & 0xf;
  uVar10 = (uint)((ulong)param_3 >> 0x20);
  if (param_1 != 0) {
    uVar12 = (ulong)param_3 & 0xffffffffffff;
    if (((ulong)param_4 & 0x2000000000000000) != 0) {
      uVar12 = uVar11;
    }
    if (uVar12 != 0) {
      uVar10 = uVar10 >> 0x1b & 1;
      if (((ulong)param_4 & 0x1000000000000000) == 0) {
        uVar10 = 1;
      }
      uVar11 = 7;
      if (uVar10 == 0) {
        uVar11 = 0xb;
      }
      SVar22.str = (char *)(uVar11 | uVar12 << 0x10);
      uVar12 = uVar12 * 4;
      IVar13.unknown = (undefined *)0xf;
      puVar6 = PTR___swiftEmptyArrayStorage_100524190;
      while (uVar11 = (ulong)IVar13.unknown >> 0xe, uVar11 != uVar12) {
        while( true ) {
          SVar15.bridgeObject = param_4;
          SVar15.str = param_3;
          CVar14 = Swift::String::get_subscript(IVar13,SVar15);
          bVar2 = Swift::Character::get_isNumber(CVar14);
          _swift_bridgeObjectRelease(CVar14.bridgeObject);
          after.unknown = IVar13.unknown;
          if (bVar2) {
            do {
              SVar16.bridgeObject = param_4;
              SVar16.str = param_3;
              after = Swift::String::index(after,SVar16);
              uVar11 = (ulong)after.unknown >> 0xe;
              if (uVar11 == uVar12) goto LAB_100032940;
              SVar17.bridgeObject = param_4;
              SVar17.str = param_3;
              CVar14 = Swift::String::get_subscript(after,SVar17);
              bVar2 = Swift::Character::get_isNumber(CVar14);
              _swift_bridgeObjectRelease(CVar14.bridgeObject);
            } while (bVar2);
          }
          if (((ulong)IVar13.unknown >> 0xe != uVar11) || ((param_2 & 1) == 0)) break;
          SVar18.bridgeObject = param_4;
          SVar18.str = param_3;
          IVar13 = Swift::String::index(after,SVar18);
          uVar11 = (ulong)IVar13.unknown >> 0xe;
          if (uVar11 == uVar12) goto LAB_100032940;
        }
        if (uVar11 < (ulong)IVar13.unknown >> 0xe) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100032ad0);
          (*pcVar1)();
        }
        SVar19.bridgeObject = param_3;
        SVar19.str = after.unknown;
        IVar7.unknown = after.unknown;
        pcVar8 = param_3;
        pvVar9 = param_4;
        SVar3 = Swift::String::get_subscript(IVar13.unknown,SVar19);
        puVar4 = puVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar5 = puVar6;
        if (((ulong)puVar4 & 1) == 0) {
          puVar5 = (undefined *)0x0;
          FUN_1001c4368(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
        }
        uVar11 = *(ulong *)(puVar5 + 0x10);
        puVar6 = puVar5;
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar11) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
          FUN_1001c4368(puVar6,uVar11 + 1,1,puVar5);
        }
        *(ulong *)(puVar6 + 0x10) = uVar11 + 1;
        *(undefined **)(puVar6 + uVar11 * 0x20 + 0x20) = SVar3.unknown;
        *(undefined **)(puVar6 + uVar11 * 0x20 + 0x28) = IVar7.unknown;
        *(char **)(puVar6 + uVar11 * 0x20 + 0x30) = pcVar8;
        *(void **)(puVar6 + uVar11 * 0x20 + 0x38) = pvVar9;
        SVar20.bridgeObject = param_4;
        SVar20.str = param_3;
        IVar13 = Swift::String::index(after,SVar20);
        if (*(long *)(puVar6 + 0x10) == param_1) break;
      }
LAB_100032940:
      if (((ulong)IVar13.unknown >> 0xe != uVar12) || ((param_2 & 1) == 0)) {
        if ((ulong)IVar13.unknown >> 0xe <= uVar12) {
          SVar21.bridgeObject = param_3;
          SVar21.str = SVar22.str;
          pvVar9 = param_4;
          SVar3 = Swift::String::get_subscript(IVar13.unknown,SVar21);
          _swift_bridgeObjectRelease(param_4);
          puVar4 = puVar6;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar5 = puVar6;
          if (((ulong)puVar4 & 1) == 0) {
            puVar5 = (undefined *)0x0;
            FUN_1001c4368(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
          }
          uVar11 = *(ulong *)(puVar5 + 0x10);
          puVar6 = puVar5;
          if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar11) {
            puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
            FUN_1001c4368(puVar6,uVar11 + 1,1,puVar5);
          }
          *(ulong *)(puVar6 + 0x10) = uVar11 + 1;
          *(undefined **)(puVar6 + uVar11 * 0x20 + 0x20) = SVar3.unknown;
          *(char **)(puVar6 + uVar11 * 0x20 + 0x28) = SVar22.str;
          *(char **)(puVar6 + uVar11 * 0x20 + 0x30) = param_3;
          *(void **)(puVar6 + uVar11 * 0x20 + 0x38) = pvVar9;
          return puVar6;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100032a8c);
        (*pcVar1)();
      }
      goto LAB_100032a34;
    }
  }
  uVar12 = (ulong)param_3 & 0xffffffffffff;
  if (((ulong)param_4 & 0x2000000000000000) != 0) {
    uVar12 = uVar11;
  }
  if ((uVar12 == 0) && ((param_2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_4);
    return PTR___swiftEmptyArrayStorage_100524190;
  }
  uVar10 = uVar10 >> 0x1b & 1;
  if (((ulong)param_4 & 0x1000000000000000) == 0) {
    uVar10 = 1;
  }
  uVar11 = 7;
  if (uVar10 == 0) {
    uVar11 = 0xb;
  }
  SVar22.str = (char *)(uVar11 | uVar12 << 0x10);
  SVar22.bridgeObject = param_3;
  pvVar9 = param_4;
  SVar3 = Swift::String::get_subscript((Range<Index>)0xf,SVar22);
  puVar4 = (undefined *)0x0;
  FUN_1001c4368(0,1,1,PTR___swiftEmptyArrayStorage_100524190);
  uVar11 = *(ulong *)(puVar4 + 0x10);
  puVar6 = puVar4;
  if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar11) {
    puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
    FUN_1001c4368(puVar6,uVar11 + 1,1,puVar4);
  }
  *(ulong *)(puVar6 + 0x10) = uVar11 + 1;
  *(undefined **)(puVar6 + uVar11 * 0x20 + 0x20) = SVar3.unknown;
  *(char **)(puVar6 + uVar11 * 0x20 + 0x28) = SVar22.str;
  *(char **)(puVar6 + uVar11 * 0x20 + 0x30) = param_3;
  *(void **)(puVar6 + uVar11 * 0x20 + 0x38) = pvVar9;
LAB_100032a34:
  _swift_bridgeObjectRelease(param_4);
  return puVar6;
}

