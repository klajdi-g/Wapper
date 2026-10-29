// rea decompile_all
// name: FUN_10029202c
// address: 0x10029202c
// body: available
// range: 0x10029202c-0x1002927c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10029202c(void)

{
  long lVar1;
  ulong *puVar2;
  char (*pacVar3) [8];
  ulong uVar4;
  undefined *puVar5;
  char acVar6 [8];
  char acVar7 [8];
  code *pcVar8;
  undefined *puVar9;
  ulong uVar10;
  char acVar11 [8];
  ulong uVar12;
  char acVar13 [8];
  char acVar14 [8];
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong *puVar18;
  
  puVar5 = PTR___swiftEmptyDictionarySingleton_100524198;
  lVar17 = 7;
  puVar18 = (ulong *)(s_macbookair10_1_100559340 + 8);
  do {
    uVar16 = puVar18[-1];
    uVar4 = *puVar18;
    _swift_bridgeObjectRetain(uVar4);
    puVar9 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar10 = uVar16;
    uVar12 = uVar4;
    FUN_10000464c();
    uVar15 = (ulong)~(uint)uVar12 & 1;
    lVar1 = *(long *)(puVar5 + 0x10) + uVar15;
    if (SCARRY8(*(long *)(puVar5 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10029270c);
      (*pcVar8)();
    }
    if (*(long *)(puVar5 + 0x18) < lVar1) {
      FUN_1001d02e4(lVar1,puVar9);
      uVar10 = uVar16;
      uVar15 = uVar4;
      FUN_10000464c();
      if (((uint)uVar12 & 1) != ((uint)uVar15 & 1)) goto LAB_1002926d4;
LAB_100292108:
      if ((uVar12 & 1) == 0) goto LAB_100292110;
LAB_100292068:
      *(undefined1 *)(*(long *)(puVar5 + 0x38) + uVar10) = 0;
      _swift_bridgeObjectRelease(uVar4);
    }
    else {
      if (((ulong)puVar9 & 1) != 0) goto LAB_100292108;
      FUN_1001cc84c();
      if ((uVar12 & 1) != 0) goto LAB_100292068;
LAB_100292110:
      *(ulong *)(puVar5 + (uVar10 >> 6) * 8 + 0x40) =
           *(ulong *)(puVar5 + (uVar10 >> 6) * 8 + 0x40) | 1L << (uVar10 & 0x3f);
      puVar2 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar10 * 0x10);
      *puVar2 = uVar16;
      puVar2[1] = uVar4;
      *(undefined1 *)(*(long *)(puVar5 + 0x38) + uVar10) = 0;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100292720);
        (*pcVar8)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
    }
    puVar18 = puVar18 + 2;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  _swift_arrayDestroy(s_macbookair10_1_100559340,7,PTR___type_metadata_for_Swift_String_100523a98);
  puVar18 = (ulong *)(s_macbookpro17_1_1005593d8 + 8);
  lVar17 = 0x17;
  do {
    uVar16 = puVar18[-1];
    uVar4 = *puVar18;
    _swift_bridgeObjectRetain(uVar4);
    puVar9 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar10 = uVar16;
    uVar12 = uVar4;
    FUN_10000464c();
    uVar15 = (ulong)~(uint)uVar12 & 1;
    lVar1 = *(long *)(puVar5 + 0x10) + uVar15;
    if (SCARRY8(*(long *)(puVar5 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100292710);
      (*pcVar8)();
    }
    if (*(long *)(puVar5 + 0x18) < lVar1) {
      FUN_1001d02e4(lVar1,puVar9);
      uVar10 = uVar16;
      uVar15 = uVar4;
      FUN_10000464c();
      if (((uint)uVar12 & 1) != ((uint)uVar15 & 1)) goto LAB_1002926d4;
LAB_100292238:
      if ((uVar12 & 1) == 0) goto LAB_100292240;
LAB_100292198:
      *(undefined1 *)(*(long *)(puVar5 + 0x38) + uVar10) = 1;
      _swift_bridgeObjectRelease(uVar4);
    }
    else {
      if (((ulong)puVar9 & 1) != 0) goto LAB_100292238;
      FUN_1001cc84c();
      if ((uVar12 & 1) != 0) goto LAB_100292198;
LAB_100292240:
      *(ulong *)(puVar5 + (uVar10 >> 6) * 8 + 0x40) =
           *(ulong *)(puVar5 + (uVar10 >> 6) * 8 + 0x40) | 1L << (uVar10 & 0x3f);
      puVar2 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar10 * 0x10);
      *puVar2 = uVar16;
      puVar2[1] = uVar4;
      *(undefined1 *)(*(long *)(puVar5 + 0x38) + uVar10) = 1;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100292724);
        (*pcVar8)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
    }
    puVar18 = puVar18 + 2;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  _swift_arrayDestroy(s_macbookpro17_1_1005593d8,0x17,PTR___type_metadata_for_Swift_String_100523a98
                     );
  lVar17 = 5;
  puVar18 = &DAT_100559578;
  do {
    uVar16 = puVar18[-1];
    uVar4 = *puVar18;
    _swift_bridgeObjectRetain(uVar4);
    puVar9 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar10 = uVar16;
    uVar12 = uVar4;
    FUN_10000464c();
    uVar15 = (ulong)~(uint)uVar12 & 1;
    lVar1 = *(long *)(puVar5 + 0x10) + uVar15;
    if (SCARRY8(*(long *)(puVar5 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100292714);
      (*pcVar8)();
    }
    if (*(long *)(puVar5 + 0x18) < lVar1) {
      FUN_1001d02e4(lVar1,puVar9);
      uVar10 = uVar16;
      uVar15 = uVar4;
      FUN_10000464c();
      if (((uint)uVar12 & 1) != ((uint)uVar15 & 1)) goto LAB_1002926d4;
LAB_10029236c:
      if ((uVar12 & 1) == 0) goto LAB_100292374;
LAB_1002922cc:
      *(undefined1 *)(*(long *)(puVar5 + 0x38) + uVar10) = 2;
      _swift_bridgeObjectRelease(uVar4);
    }
    else {
      if (((ulong)puVar9 & 1) != 0) goto LAB_10029236c;
      FUN_1001cc84c();
      if ((uVar12 & 1) != 0) goto LAB_1002922cc;
LAB_100292374:
      *(ulong *)(puVar5 + (uVar10 >> 6) * 8 + 0x40) =
           *(ulong *)(puVar5 + (uVar10 >> 6) * 8 + 0x40) | 1L << (uVar10 & 0x3f);
      puVar2 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar10 * 0x10);
      *puVar2 = uVar16;
      puVar2[1] = uVar4;
      *(undefined1 *)(*(long *)(puVar5 + 0x38) + uVar10) = 2;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100292728);
        (*pcVar8)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
    }
    puVar18 = puVar18 + 2;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  lVar17 = 5;
  _swift_arrayDestroy(&DAT_100559570,5,PTR___type_metadata_for_Swift_String_100523a98);
  puVar18 = &DAT_1005595f0;
  do {
    uVar16 = puVar18[-1];
    uVar4 = *puVar18;
    _swift_bridgeObjectRetain(uVar4);
    puVar9 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar10 = uVar16;
    uVar12 = uVar4;
    FUN_10000464c();
    uVar15 = (ulong)~(uint)uVar12 & 1;
    lVar1 = *(long *)(puVar5 + 0x10) + uVar15;
    if (SCARRY8(*(long *)(puVar5 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100292718);
      (*pcVar8)();
    }
    if (*(long *)(puVar5 + 0x18) < lVar1) {
      FUN_1001d02e4(lVar1,puVar9);
      uVar10 = uVar16;
      uVar15 = uVar4;
      FUN_10000464c();
      if (((uint)uVar12 & 1) != ((uint)uVar15 & 1)) goto LAB_1002926d4;
LAB_1002924a0:
      if ((uVar12 & 1) == 0) goto LAB_1002924a8;
LAB_100292400:
      *(undefined1 *)(*(long *)(puVar5 + 0x38) + uVar10) = 3;
      _swift_bridgeObjectRelease(uVar4);
    }
    else {
      if (((ulong)puVar9 & 1) != 0) goto LAB_1002924a0;
      FUN_1001cc84c();
      if ((uVar12 & 1) != 0) goto LAB_100292400;
LAB_1002924a8:
      *(ulong *)(puVar5 + (uVar10 >> 6) * 8 + 0x40) =
           *(ulong *)(puVar5 + (uVar10 >> 6) * 8 + 0x40) | 1L << (uVar10 & 0x3f);
      puVar2 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar10 * 0x10);
      *puVar2 = uVar16;
      puVar2[1] = uVar4;
      *(undefined1 *)(*(long *)(puVar5 + 0x38) + uVar10) = 3;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10029272c);
        (*pcVar8)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
    }
    puVar18 = puVar18 + 2;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  lVar17 = 5;
  _swift_arrayDestroy(&DAT_1005595e8,5,PTR___type_metadata_for_Swift_String_100523a98);
  puVar18 = &DAT_100559668;
  do {
    uVar16 = puVar18[-1];
    uVar4 = *puVar18;
    _swift_bridgeObjectRetain(uVar4);
    puVar9 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar10 = uVar16;
    uVar12 = uVar4;
    FUN_10000464c();
    uVar15 = (ulong)~(uint)uVar12 & 1;
    lVar1 = *(long *)(puVar5 + 0x10) + uVar15;
    if (SCARRY8(*(long *)(puVar5 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10029271c);
      (*pcVar8)();
    }
    if (*(long *)(puVar5 + 0x18) < lVar1) {
      FUN_1001d02e4(lVar1,puVar9);
      uVar10 = uVar16;
      uVar15 = uVar4;
      FUN_10000464c();
      if (((uint)uVar12 & 1) != ((uint)uVar15 & 1)) goto LAB_1002926d4;
LAB_1002925d4:
      if ((uVar12 & 1) == 0) goto LAB_1002925dc;
LAB_100292534:
      *(undefined1 *)(*(long *)(puVar5 + 0x38) + uVar10) = 4;
      _swift_bridgeObjectRelease(uVar4);
    }
    else {
      if (((ulong)puVar9 & 1) != 0) goto LAB_1002925d4;
      FUN_1001cc84c();
      if ((uVar12 & 1) != 0) goto LAB_100292534;
LAB_1002925dc:
      *(ulong *)(puVar5 + (uVar10 >> 6) * 8 + 0x40) =
           *(ulong *)(puVar5 + (uVar10 >> 6) * 8 + 0x40) | 1L << (uVar10 & 0x3f);
      puVar2 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar10 * 0x10);
      *puVar2 = uVar16;
      puVar2[1] = uVar4;
      *(undefined1 *)(*(long *)(puVar5 + 0x38) + uVar10) = 4;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100292730);
        (*pcVar8)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
    }
    puVar18 = puVar18 + 2;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  _swift_arrayDestroy(s_mac13_1_100559660,5,PTR___type_metadata_for_Swift_String_100523a98);
  acVar7 = DAT_1005596e0;
  acVar6 = s_mac14_8_1005596d8;
  _swift_bridgeObjectRetain(DAT_1005596e0);
  puVar9 = puVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  acVar11 = acVar6;
  acVar13 = acVar7;
  FUN_10000464c();
  uVar16 = (ulong)~acVar13._0_4_ & 1;
  lVar17 = *(long *)(puVar5 + 0x10) + uVar16;
  if (SCARRY8(*(long *)(puVar5 + 0x10),uVar16)) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100292734);
    (*pcVar8)();
  }
  if (*(long *)(puVar5 + 0x18) < lVar17) {
    FUN_1001d02e4(lVar17,puVar9);
    acVar11 = acVar6;
    acVar14 = acVar7;
    FUN_10000464c();
    if ((acVar13._0_4_ & 1) != (acVar14._0_4_ & 1)) {
LAB_1002926d4:
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1002926e4);
      (*pcVar8)();
    }
  }
  else if (((ulong)puVar9 & 1) == 0) {
    FUN_1001cc84c();
  }
  if (((ulong)acVar13 & 1) == 0) {
    *(ulong *)(puVar5 + ((ulong)acVar11 >> 6) * 8 + 0x40) =
         *(ulong *)(puVar5 + ((ulong)acVar11 >> 6) * 8 + 0x40) | 1L << ((ulong)acVar11 & 0x3f);
    pacVar3 = (char (*) [8])(*(long *)(puVar5 + 0x30) + (long)acVar11 * 0x10);
    *pacVar3 = acVar6;
    pacVar3[1] = acVar7;
    *(undefined1 *)(*(long *)(puVar5 + 0x38) + (long)acVar11) = 5;
    if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1002927c4);
      (*pcVar8)();
    }
    *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
  }
  else {
    *(undefined1 *)(*(long *)(puVar5 + 0x38) + (long)acVar11) = 5;
    _swift_bridgeObjectRelease(acVar7);
  }
  FUN_100043c00(s_mac14_8_1005596d8);
  return puVar5;
}

