// rea decompile_all
// name: FUN_1001a8dcc
// address: 0x1001a8dcc
// body: available
// range: 0x1001a8dcc-0x1001a8feb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1001a8dcc(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  String *pSVar1;
  undefined8 *puVar2;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  code *pcVar6;
  bool bVar7;
  _SetStorage *this;
  undefined *puVar8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_a8 [72];
  
  puVar8 = PTR___swiftEmptySetSingleton_1005241a0;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      return param_4;
    }
    this = (_SetStorage *)&DAT_100556260;
    FUN_100002f94(&DAT_100556260,&DAT_10042a040);
    puVar8 = param_3;
    Swift::_SetStorage::_allocate(this,(__int64)param_3);
    if (param_2 < 1) {
      uVar14 = 0;
    }
    else {
      uVar14 = *param_1;
    }
    lVar11 = 0;
    do {
      if (uVar14 == 0) {
        do {
          lVar15 = lVar11 + 1;
          if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1001a8fe4);
            (*pcVar6)();
          }
          if (param_2 <= lVar15) goto LAB_1001a8e48;
          uVar14 = param_1[lVar15];
          lVar11 = lVar11 + 1;
        } while (uVar14 == 0);
        uVar10 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar14 = uVar14 - 1 & uVar14;
      }
      else {
        uVar10 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar14 = uVar14 - 1 & uVar14;
        lVar15 = lVar11;
      }
      pSVar1 = (String *)(*(long *)(param_4 + 0x30) + (LZCOUNT(uVar10) | lVar15 << 6) * 0x10);
      pcVar3 = pSVar1->str;
      pvVar4 = pSVar1->bridgeObject;
      SVar5 = *pSVar1;
      Swift::Hasher::init(*(__int64 *)(puVar8 + 0x28));
      _swift_bridgeObjectRetain(pvVar4);
      into.unknown = auStack_a8;
      Swift::String::hash(into,SVar5);
      uVar9 = Swift::Hasher::_finalize(into);
      uVar13 = -1L << ((ulong)(byte)puVar8[0x20] & 0x3f);
      uVar9 = uVar9 & (uVar13 ^ 0xffffffffffffffff);
      uVar12 = uVar9 >> 6;
      uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(puVar8 + uVar12 * 8 + 0x38) ^ 0xffffffffffffffff)
      ;
      if (uVar10 == 0) {
        bVar7 = false;
        uVar10 = 0x3f - uVar13 >> 6;
        do {
          uVar9 = uVar12 + 1;
          if ((uVar9 == uVar10) && (bVar7)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1001a8fe8);
            (*pcVar6)();
          }
          uVar12 = 0;
          if (uVar9 != uVar10) {
            uVar12 = uVar9;
          }
          bVar7 = (bool)(uVar9 == uVar10 | bVar7);
        } while (*(ulong *)(puVar8 + uVar12 * 8 + 0x38) == 0xffffffffffffffff);
        uVar10 = ~*(ulong *)(puVar8 + uVar12 * 8 + 0x38);
        uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
      }
      else {
        uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
      }
      uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar12 + 0x38) =
           1L << (uVar10 & 0x3f) | *(ulong *)(puVar8 + uVar12 + 0x38);
      puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x30) + uVar10 * 0x10);
      *puVar2 = pcVar3;
      puVar2[1] = pvVar4;
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      bVar7 = SBORROW8((long)param_3,1);
      param_3 = param_3 + -1;
      if (bVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001a8fec);
        (*pcVar6)();
      }
      lVar11 = lVar15;
    } while (param_3 != (undefined *)0x0);
  }
LAB_1001a8e48:
  _swift_release(param_4);
  return puVar8;
}

