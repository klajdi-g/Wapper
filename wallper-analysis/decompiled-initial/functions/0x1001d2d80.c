// rea decompile_all
// name: FUN_1001d2d80
// address: 0x1001d2d80
// body: available
// range: 0x1001d2d80-0x1001d306f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d2d80(Bucket param_1,long param_2)

{
  _HashTable _Var1;
  undefined1 uVar2;
  code *pcVar3;
  Bucket BVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  Hasher HVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  String SVar16;
  undefined1 auStack_a8 [72];
  
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar8 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  puVar14 = (undefined *)((ulong)(param_1.unknown + 1) & (uVar8 ^ 0xffffffffffffffff));
  if ((*(ulong *)(_Var1.unknown + ((ulong)puVar14 >> 6) * 8) >> ((ulong)puVar14 & 0x3f) & 1) != 0) {
    uVar8 = ~uVar8;
    BVar4 = Swift::_HashTable::previousHole(param_1,_Var1);
    uVar15 = (ulong)(BVar4.unknown + 1) & uVar8;
    do {
      uVar2 = puVar14[*(long *)(param_2 + 0x30)];
      Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
      HVar12.unknown = (undefined *)0xe600000000000000;
      pcVar7 = (char *)0x736569766f4d;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(uVar2) {
      case 1:
        HVar12.unknown = (undefined *)0xe800000000000000;
        pcVar7 = (char *)0x7363696870617247;
        break;
      case 2:
        HVar12.unknown = (undefined *)0xe500000000000000;
        pcVar7 = (char *)0x73656d6147;
        break;
      case 3:
        HVar12.unknown = (undefined *)0xe400000000000000;
        pcVar7 = (char *)0x73726143;
        break;
      case 4:
        pcVar7 = (char *)0x656c706f6550;
        break;
      case 5:
        HVar12.unknown = (undefined *)0xe500000000000000;
        pcVar7 = (char *)0x656d696e41;
        break;
      case 6:
        HVar12.unknown = (undefined *)0xe500000000000000;
        pcVar7 = (char *)0x726568744f;
        break;
      case 7:
        HVar12.unknown = (undefined *)0xe500000000000000;
        pcVar7 = (char *)0x6563617053;
        break;
      case 8:
        pcVar7 = (char *)0x65727574614e;
        break;
      case 9:
        HVar12.unknown = (undefined *)0xea00000000007473;
        pcVar7 = (char *)0x696c616d696e694d;
        break;
      case 10:
        HVar12.unknown = (undefined *)0xe700000000000000;
        pcVar7 = (char *)0x736c616d696e41;
        break;
      case 0xb:
        pcVar7 = (char *)0x7265746e6957;
        break;
      case 0xc:
        HVar12.unknown = (undefined *)0xe800000000000000;
        pcVar7 = (char *)0x7472416c65786950;
        break;
      case 0xd:
        HVar12.unknown = (undefined *)0xe500000000000000;
        pcVar7 = (char *)0x6946696353;
      }
      SVar16.bridgeObject = HVar12.unknown;
      SVar16.str = pcVar7;
      Swift::String::hash((Hasher)auStack_a8,SVar16);
      _swift_bridgeObjectRelease();
      uVar5 = Swift::Hasher::_finalize(HVar12);
      uVar5 = uVar5 & uVar8;
      if ((long)param_1.unknown < (long)uVar15) {
        if (uVar5 < uVar15) {
LAB_1001d2f90:
          if ((long)param_1.unknown < (long)uVar5) goto LAB_1001d2e10;
        }
        if ((param_1.unknown != puVar14) ||
           (puVar14 + *(long *)(param_2 + 0x30) + 1 <= param_1.unknown + *(long *)(param_2 + 0x30)))
        {
          param_1.unknown[*(long *)(param_2 + 0x30)] = puVar14[*(long *)(param_2 + 0x30)];
        }
        lVar13 = *(long *)(param_2 + 0x38);
        lVar6 = 0;
        FUN_10040211c();
        lVar11 = *(long *)(*(long *)(lVar6 + -8) + 0x48);
        lVar9 = lVar11 * (long)param_1.unknown;
        uVar5 = lVar13 + lVar9;
        lVar10 = lVar11 * (long)puVar14;
        lVar13 = lVar13 + lVar10;
        param_1.unknown = puVar14;
        if (lVar9 < lVar10 || (ulong)(lVar13 + lVar11) <= uVar5) {
          _swift_arrayInitWithTakeFrontToBack(uVar5,lVar13,1,lVar6);
        }
        else if (lVar9 - lVar10 != 0) {
          _swift_arrayInitWithTakeBackToFront(uVar5,lVar13,1);
        }
      }
      else if (uVar15 <= uVar5) goto LAB_1001d2f90;
LAB_1001d2e10:
      puVar14 = (undefined *)((ulong)(puVar14 + 1) & uVar8);
    } while ((*(ulong *)(_Var1.unknown + ((ulong)puVar14 >> 6) * 8) >> ((ulong)puVar14 & 0x3f) & 1)
             != 0);
  }
  uVar8 = (ulong)param_1.unknown >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar8) =
       *(ulong *)(_Var1.unknown + uVar8) & (-1L << ((ulong)param_1.unknown & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1001d3070);
  (*pcVar3)();
}

