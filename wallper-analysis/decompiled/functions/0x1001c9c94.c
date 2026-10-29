// rea decompile_all
// name: FUN_1001c9c94
// address: 0x1001c9c94
// body: available
// range: 0x1001c9c94-0x1001ca01b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001c9c94(long param_1)

{
  __int64 capacity;
  undefined1 uVar1;
  bool bVar2;
  code *pcVar3;
  _SetStorage *this;
  __RawSetStorage *p_Var4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  Hasher HVar12;
  __RawSetStorage *original;
  __RawSetStorage *p_Var13;
  long lVar14;
  ulong uVar15;
  String SVar16;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100556948;
  FUN_100002f94(&DAT_100556948,&DAT_10042a8f0);
  p_Var4 = original;
  Swift::_SetStorage::_resize(this,original,capacity,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_1001c9fe8:
    _swift_release(original);
    *unaff_x20 = (long)p_Var4;
    return;
  }
  p_Var13 = original + 0x38;
  uVar10 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var13;
  lVar9 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar14 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001ca018);
          (*pcVar3)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar14) {
          uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var13 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(p_Var13,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1001c9fe8;
        }
        uVar15 = *(ulong *)(p_Var13 + lVar14 * 8);
        lVar9 = lVar9 + 1;
      } while (uVar15 == 0);
      uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar14 = lVar9;
    }
    uVar1 = *(undefined1 *)(*(long *)(original + 0x30) + (LZCOUNT(uVar8) | lVar14 << 6));
    Swift::Hasher::init(*(__int64 *)(p_Var4 + 0x28));
    HVar12.unknown = (undefined *)0xe600000000000000;
    pcVar6 = (char *)0x736569766f4d;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar1) {
    case 1:
      HVar12.unknown = (undefined *)0xe800000000000000;
      pcVar6 = (char *)0x7363696870617247;
      break;
    case 2:
      HVar12.unknown = (undefined *)0xe500000000000000;
      pcVar6 = (char *)0x73656d6147;
      break;
    case 3:
      HVar12.unknown = (undefined *)0xe400000000000000;
      pcVar6 = (char *)0x73726143;
      break;
    case 4:
      pcVar6 = (char *)0x656c706f6550;
      break;
    case 5:
      HVar12.unknown = (undefined *)0xe500000000000000;
      pcVar6 = (char *)0x656d696e41;
      break;
    case 6:
      HVar12.unknown = (undefined *)0xe500000000000000;
      pcVar6 = (char *)0x726568744f;
      break;
    case 7:
      HVar12.unknown = (undefined *)0xe500000000000000;
      pcVar6 = (char *)0x6563617053;
      break;
    case 8:
      pcVar6 = (char *)0x65727574614e;
      break;
    case 9:
      HVar12.unknown = (undefined *)0xea00000000007473;
      pcVar6 = (char *)0x696c616d696e694d;
      break;
    case 10:
      HVar12.unknown = (undefined *)0xe700000000000000;
      pcVar6 = (char *)0x736c616d696e41;
      break;
    case 0xb:
      pcVar6 = (char *)0x7265746e6957;
      break;
    case 0xc:
      HVar12.unknown = (undefined *)0xe800000000000000;
      pcVar6 = (char *)0x7472416c65786950;
      break;
    case 0xd:
      HVar12.unknown = (undefined *)0xe500000000000000;
      pcVar6 = (char *)0x6946696353;
    }
    SVar16.bridgeObject = HVar12.unknown;
    SVar16.str = pcVar6;
    Swift::String::hash((Hasher)auStack_a8,SVar16);
    _swift_bridgeObjectRelease();
    uVar5 = Swift::Hasher::_finalize(HVar12);
    uVar11 = -1L << ((ulong)(byte)p_Var4[0x20] & 0x3f);
    uVar5 = uVar5 & (uVar11 ^ 0xffffffffffffffff);
    uVar7 = uVar5 >> 6;
    uVar8 = -1L << (uVar5 & 0x3f) & (*(ulong *)(p_Var4 + uVar7 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar8 == 0) {
      bVar2 = false;
      uVar8 = 0x3f - uVar11 >> 6;
      do {
        uVar5 = uVar7 + 1;
        if ((uVar5 == uVar8) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001ca01c);
          (*pcVar3)();
        }
        uVar7 = 0;
        if (uVar5 != uVar8) {
          uVar7 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar8 | bVar2);
      } while (*(ulong *)(p_Var4 + uVar7 * 8 + 0x38) == 0xffffffffffffffff);
      uVar8 = ~*(ulong *)(p_Var4 + uVar7 * 8 + 0x38);
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar7 << 6;
    }
    else {
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar7 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var4 + uVar7 + 0x38) = 1L << (uVar8 & 0x3f) | *(ulong *)(p_Var4 + uVar7 + 0x38);
    *(undefined1 *)(*(long *)(p_Var4 + 0x30) + uVar8) = uVar1;
    *(long *)(p_Var4 + 0x10) = *(long *)(p_Var4 + 0x10) + 1;
    lVar9 = lVar14;
  } while( true );
}

