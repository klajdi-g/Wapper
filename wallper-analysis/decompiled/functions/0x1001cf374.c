// rea decompile_all
// name: FUN_1001cf374
// address: 0x1001cf374
// body: available
// range: 0x1001cf374-0x1001cf68f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001cf374(long param_1,bool param_2,code *param_3,_DictionaryStorage *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  __RawDictionaryStorage *p_Var9;
  Hasher into;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long extraout_x8;
  undefined1 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar19;
  long lVar20;
  __RawDictionaryStorage *p_Var21;
  undefined1 auStack_e0 [8];
  undefined1 auStack_a8 [72];
  
  lVar8 = 0;
  (*param_3)();
  lVar12 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_e0 + -extraout_x8;
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  FUN_100002f94(param_4,param_5);
  p_Var9 = original;
  Swift::_DictionaryStorage::_resize(param_4,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1001cf65c:
    _swift_release(original);
LAB_1001cf664:
    *unaff_x20 = (long)p_Var9;
    return;
  }
  p_Var21 = original + 0x40;
  uVar16 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar16 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)p_Var21;
  lVar11 = 0;
  do {
    if (uVar18 == 0) {
      do {
        lVar20 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1001cf68c);
          (*pcVar7)();
        }
        if ((long)(uVar16 + 0x3f >> 6) <= lVar20) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_1001cf664;
          }
          uVar18 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var21 = -1L << (uVar18 & 0x3f);
          }
          else {
            _bzero(p_Var21,uVar18 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1001cf65c;
        }
        uVar18 = *(ulong *)(p_Var21 + lVar20 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar18 == 0);
      uVar14 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
    }
    else {
      uVar14 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
      lVar20 = lVar11;
    }
    uVar14 = LZCOUNT(uVar14) | lVar20 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar14 * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    lVar19 = *(long *)(lVar12 + 0x48);
    lVar11 = *(long *)(original + 0x38) + lVar19 * uVar14;
    if ((param_2 & 1U) == 0) {
      (**(code **)(lVar12 + 0x10))(puVar13,lVar11,lVar8);
      _swift_bridgeObjectRetain(pvVar4);
    }
    else {
      (**(code **)(lVar12 + 0x20))(puVar13,lVar11,lVar8);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var9 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar10 = Swift::Hasher::_finalize(into);
    uVar17 = -1L << ((ulong)(byte)p_Var9[0x20] & 0x3f);
    uVar10 = uVar10 & (uVar17 ^ 0xffffffffffffffff);
    uVar15 = uVar10 >> 6;
    uVar14 = -1L << (uVar10 & 0x3f) & (*(ulong *)(p_Var9 + uVar15 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar14 == 0) {
      bVar6 = false;
      uVar14 = 0x3f - uVar17 >> 6;
      do {
        uVar10 = uVar15 + 1;
        if ((uVar10 == uVar14) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1001cf690);
          (*pcVar7)();
        }
        uVar15 = 0;
        if (uVar10 != uVar14) {
          uVar15 = uVar10;
        }
        bVar6 = (bool)(uVar10 == uVar14 | bVar6);
      } while (*(ulong *)(p_Var9 + uVar15 * 8 + 0x40) == 0xffffffffffffffff);
      uVar14 = ~*(ulong *)(p_Var9 + uVar15 * 8 + 0x40);
      uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | uVar15 << 6;
    }
    else {
      uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar15 = uVar14 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var9 + uVar15 + 0x40) = 1L << (uVar14 & 0x3f) | *(ulong *)(p_Var9 + uVar15 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var9 + 0x30) + uVar14 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    (**(code **)(lVar12 + 0x20))(*(long *)(p_Var9 + 0x38) + lVar19 * uVar14,puVar13,lVar8);
    *(long *)(p_Var9 + 0x10) = *(long *)(p_Var9 + 0x10) + 1;
    lVar11 = lVar20;
  } while( true );
}

