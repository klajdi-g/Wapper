// rea decompile_all
// name: FUN_1001d11f4
// address: 0x1001d11f4
// body: available
// range: 0x1001d11f4-0x1001d163b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d11f4(long param_1,bool param_2)

{
  __int64 capacity;
  undefined1 uVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  long extraout_x8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x20;
  Hasher HVar14;
  __RawDictionaryStorage *original;
  long lVar15;
  __RawDictionaryStorage *p_Var16;
  ulong uVar17;
  long lVar18;
  String SVar19;
  undefined1 auStack_d0 [8];
  undefined1 auStack_a8 [72];
  
  lVar4 = 0;
  FUN_10040211c();
  lVar4 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar4 + 0x40));
  puVar9 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_10054a228;
  FUN_100002f94(&DAT_10054a228,&DAT_10041a2b8);
  p_Var5 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1001d1608:
    _swift_release(original);
LAB_1001d1610:
    *unaff_x20 = (long)p_Var5;
    return;
  }
  p_Var16 = original + 0x40;
  uVar12 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)p_Var16;
  lVar7 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar18 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001d1638);
          (*pcVar3)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_1001d1610;
          }
          uVar17 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var16 = -1L << (uVar17 & 0x3f);
          }
          else {
            _bzero(p_Var16,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1001d1608;
        }
        uVar17 = *(ulong *)(p_Var16 + lVar18 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar17 == 0);
      uVar11 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar11 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar18 = lVar7;
    }
    uVar11 = LZCOUNT(uVar11) | lVar18 << 6;
    uVar1 = *(undefined1 *)(*(long *)(original + 0x30) + uVar11);
    lVar15 = *(long *)(lVar4 + 0x48);
    lVar7 = *(long *)(original + 0x38) + lVar15 * uVar11;
    if ((param_2 & 1U) == 0) {
      FUN_100029504(lVar7,puVar9,FUN_10040211c);
    }
    else {
      FUN_100007e64(lVar7,puVar9,FUN_10040211c);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var5 + 0x28));
    HVar14.unknown = (undefined *)0xe600000000000000;
    pcVar8 = (char *)0x736569766f4d;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar1) {
    case 1:
      HVar14.unknown = (undefined *)0xe800000000000000;
      pcVar8 = (char *)0x7363696870617247;
      break;
    case 2:
      HVar14.unknown = (undefined *)0xe500000000000000;
      pcVar8 = (char *)0x73656d6147;
      break;
    case 3:
      HVar14.unknown = (undefined *)0xe400000000000000;
      pcVar8 = (char *)0x73726143;
      break;
    case 4:
      pcVar8 = (char *)0x656c706f6550;
      break;
    case 5:
      HVar14.unknown = (undefined *)0xe500000000000000;
      pcVar8 = (char *)0x656d696e41;
      break;
    case 6:
      HVar14.unknown = (undefined *)0xe500000000000000;
      pcVar8 = (char *)0x726568744f;
      break;
    case 7:
      HVar14.unknown = (undefined *)0xe500000000000000;
      pcVar8 = (char *)0x6563617053;
      break;
    case 8:
      pcVar8 = (char *)0x65727574614e;
      break;
    case 9:
      HVar14.unknown = (undefined *)0xea00000000007473;
      pcVar8 = (char *)0x696c616d696e694d;
      break;
    case 10:
      HVar14.unknown = (undefined *)0xe700000000000000;
      pcVar8 = (char *)0x736c616d696e41;
      break;
    case 0xb:
      pcVar8 = (char *)0x7265746e6957;
      break;
    case 0xc:
      HVar14.unknown = (undefined *)0xe800000000000000;
      pcVar8 = (char *)0x7472416c65786950;
      break;
    case 0xd:
      HVar14.unknown = (undefined *)0xe500000000000000;
      pcVar8 = (char *)0x6946696353;
    }
    SVar19.bridgeObject = HVar14.unknown;
    SVar19.str = pcVar8;
    Swift::String::hash((Hasher)auStack_a8,SVar19);
    _swift_bridgeObjectRelease();
    uVar6 = Swift::Hasher::_finalize(HVar14);
    uVar13 = -1L << ((ulong)(byte)p_Var5[0x20] & 0x3f);
    uVar6 = uVar6 & (uVar13 ^ 0xffffffffffffffff);
    uVar10 = uVar6 >> 6;
    uVar11 = -1L << (uVar6 & 0x3f) & (*(ulong *)(p_Var5 + uVar10 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar11 == 0) {
      bVar2 = false;
      uVar11 = 0x3f - uVar13 >> 6;
      do {
        uVar6 = uVar10 + 1;
        if ((uVar6 == uVar11) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001d163c);
          (*pcVar3)();
        }
        uVar10 = 0;
        if (uVar6 != uVar11) {
          uVar10 = uVar6;
        }
        bVar2 = (bool)(uVar6 == uVar11 | bVar2);
      } while (*(ulong *)(p_Var5 + uVar10 * 8 + 0x40) == 0xffffffffffffffff);
      uVar11 = ~*(ulong *)(p_Var5 + uVar10 * 8 + 0x40);
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar10 << 6;
    }
    else {
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar6 & 0x7fffffffffffffc0;
    }
    uVar10 = uVar11 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var5 + uVar10 + 0x40) = 1L << (uVar11 & 0x3f) | *(ulong *)(p_Var5 + uVar10 + 0x40);
    *(undefined1 *)(*(long *)(p_Var5 + 0x30) + uVar11) = uVar1;
    FUN_100007e64(puVar9,*(long *)(p_Var5 + 0x38) + lVar15 * uVar11,FUN_10040211c);
    *(long *)(p_Var5 + 0x10) = *(long *)(p_Var5 + 0x10) + 1;
    lVar7 = lVar18;
  } while( true );
}

