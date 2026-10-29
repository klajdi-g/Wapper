// rea decompile_all
// name: FUN_10017e0fc
// address: 0x10017e0fc
// body: available
// range: 0x10017e0fc-0x10017e27b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10017e0fc(void)

{
  long lVar1;
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
  long lVar11;
  Hasher into;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auStack_a8 [72];
  
  this = (_SetStorage *)&DAT_100556260;
  FUN_100002f94(&DAT_100556260,&DAT_10042a040);
  lVar11 = 4;
  Swift::_SetStorage::_allocate(this,4);
  lVar17 = 0;
  lVar1 = lVar11 + 0x38;
  do {
    pcVar4 = ((String *)(s_appleMusic_100556398 + lVar17 * 0x10))->str;
    puVar6 = *(undefined **)(s_appleMusic_100556398 + lVar17 * 0x10 + 8);
    SVar8 = *(String *)(s_appleMusic_100556398 + lVar17 * 0x10);
    Swift::Hasher::init(*(__int64 *)(lVar11 + 0x28));
    _swift_bridgeObjectRetain(puVar6);
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar8);
    uVar12 = Swift::Hasher::_finalize(into);
    uVar16 = -1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar12 = uVar12 & (uVar16 ^ 0xffffffffffffffff);
    uVar13 = uVar12 >> 6;
    uVar14 = *(ulong *)(lVar1 + uVar13 * 8);
    uVar15 = 1L << (uVar12 & 0x3f);
    if ((uVar15 & uVar14) != 0) {
      do {
        puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar12 * 0x10);
        _Var5.unknown = (undefined *)*puVar2;
        _Var7.unknown = (undefined *)puVar2[1];
        if ((_Var5.unknown == pcVar4 && _Var7.unknown == puVar6) ||
           (bVar10 = Swift::_stringCompareWithSmolCheck
                               (_Var5,_Var7,(_StringComparisonResult)(__int8)pcVar4), bVar10)) {
          _swift_bridgeObjectRelease(puVar6);
          goto LAB_10017e164;
        }
        uVar12 = uVar12 + 1 & ~uVar16;
        uVar13 = uVar12 >> 6;
        uVar14 = *(ulong *)(lVar1 + uVar13 * 8);
        uVar15 = 1L << (uVar12 & 0x3f);
      } while ((uVar15 & uVar14) != 0);
    }
    *(ulong *)(lVar1 + uVar13 * 8) = uVar15 | uVar14;
    plVar3 = (long *)(*(long *)(lVar11 + 0x30) + uVar12 * 0x10);
    *plVar3 = (long)pcVar4;
    plVar3[1] = (long)puVar6;
    if (SCARRY8(*(long *)(lVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10017e27c);
      (*pcVar9)();
    }
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
LAB_10017e164:
    lVar17 = lVar17 + 1;
    if (lVar17 == 4) {
      _swift_arrayDestroy(s_appleMusic_100556398,4,PTR___type_metadata_for_Swift_String_100523a98);
      DAT_100577cc8 = lVar11;
      return;
    }
  } while( true );
}

