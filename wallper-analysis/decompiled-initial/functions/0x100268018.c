// rea decompile_all
// name: FUN_100268018
// address: 0x100268018
// body: available
// range: 0x100268018-0x10026818b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100268018(long param_1)

{
  String *pSVar1;
  undefined8 *puVar2;
  long *plVar3;
  char *pcVar4;
  _StringGuts _Var5;
  undefined *puVar6;
  _StringGuts _Var7;
  String SVar8;
  code *pcVar9;
  bool bVar10;
  _SetStorage *this;
  undefined *puVar11;
  Hasher into;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *capacity;
  undefined *puVar17;
  undefined1 auStack_a8 [72];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar11 = PTR___swiftEmptySetSingleton_1005241a0;
  if (capacity != (undefined *)0x0) {
    this = (_SetStorage *)&DAT_100556260;
    FUN_100002f94(&DAT_100556260,&DAT_10042a040);
    puVar11 = capacity;
    Swift::_SetStorage::_allocate(this,(__int64)capacity);
    puVar17 = (undefined *)0x0;
    do {
      pSVar1 = (String *)(param_1 + 0x20 + (long)puVar17 * 0x10);
      pcVar4 = pSVar1->str;
      puVar6 = pSVar1->bridgeObject;
      SVar8 = *pSVar1;
      Swift::Hasher::init(*(__int64 *)(puVar11 + 0x28));
      _swift_bridgeObjectRetain(puVar6);
      into.unknown = auStack_a8;
      Swift::String::hash(into,SVar8);
      uVar12 = Swift::Hasher::_finalize(into);
      uVar16 = -1L << ((ulong)(byte)puVar11[0x20] & 0x3f);
      uVar12 = uVar12 & (uVar16 ^ 0xffffffffffffffff);
      uVar13 = uVar12 >> 6;
      uVar14 = *(ulong *)(puVar11 + uVar13 * 8 + 0x38);
      uVar15 = 1L << (uVar12 & 0x3f);
      if ((uVar15 & uVar14) != 0) {
        do {
          puVar2 = (undefined8 *)(*(long *)(puVar11 + 0x30) + uVar12 * 0x10);
          _Var5.unknown = (undefined *)*puVar2;
          _Var7.unknown = (undefined *)puVar2[1];
          if ((_Var5.unknown == pcVar4 && _Var7.unknown == puVar6) ||
             (bVar10 = Swift::_stringCompareWithSmolCheck
                                 (_Var5,_Var7,(_StringComparisonResult)(__int8)pcVar4), bVar10)) {
            _swift_bridgeObjectRelease(puVar6);
            goto LAB_100268084;
          }
          uVar12 = uVar12 + 1 & ~uVar16;
          uVar13 = uVar12 >> 6;
          uVar14 = *(ulong *)(puVar11 + uVar13 * 8 + 0x38);
          uVar15 = 1L << (uVar12 & 0x3f);
        } while ((uVar15 & uVar14) != 0);
      }
      *(ulong *)(puVar11 + uVar13 * 8 + 0x38) = uVar15 | uVar14;
      plVar3 = (long *)(*(long *)(puVar11 + 0x30) + uVar12 * 0x10);
      *plVar3 = (long)pcVar4;
      plVar3[1] = (long)puVar6;
      if (SCARRY8(*(long *)(puVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10026818c);
        (*pcVar9)();
      }
      *(long *)(puVar11 + 0x10) = *(long *)(puVar11 + 0x10) + 1;
LAB_100268084:
      puVar17 = puVar17 + 1;
    } while (puVar17 != capacity);
  }
  return puVar11;
}

