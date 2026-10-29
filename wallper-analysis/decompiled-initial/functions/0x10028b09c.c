// rea decompile_all
// name: FUN_10028b09c
// address: 0x10028b09c
// body: available
// range: 0x10028b09c-0x10028c373 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10028c370 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10028b09c(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  __DataStorage _Var5;
  __DataStorage _Var6;
  __DataStorage _Var7;
  __DataStorage _Var8;
  __DataStorage _Var9;
  __DataStorage _Var10;
  __DataStorage _Var11;
  __DataStorage _Var12;
  code *pcVar13;
  bool bVar14;
  undefined *puVar15;
  __DataStorage *p_Var16;
  __DataStorage *p_Var17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  long *plVar29;
  long lVar30;
  long lVar31;
  int iVar32;
  _StringGuts _Var33;
  long lVar34;
  undefined8 local_70;
  __DataStorage a_Stack_68 [8];
  
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  if (SCARRY8(param_2,8)) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c2d8);
    (*pcVar13)();
  }
  if (SCARRY8(param_2,param_3)) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c2dc);
    (*pcVar13)();
  }
  if (param_2 + param_3 < param_2 + 8) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c2e0);
    (*pcVar13)();
  }
  puVar15 = (undefined *)*param_1;
  FUN_10028a5d4(puVar15,param_1[1]);
  lVar23 = *(long *)(puVar15 + 0x10);
  lVar28 = lVar23 + 1;
  plVar29 = (long *)(puVar15 + 0x30);
  do {
    lVar28 = lVar28 + -1;
    if (lVar28 == 0) {
      lVar23 = lVar23 + 1;
      plVar29 = (long *)(puVar15 + 0x30);
      goto LAB_10028b6b8;
    }
    _Var33.unknown = (undefined *)plVar29[-1];
    lVar30 = *plVar29;
  } while (((undefined *)plVar29[-2] != (undefined *)0x6f637473 ||
            _Var33.unknown != (undefined *)0xe400000000000000) &&
          (bVar14 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)plVar29[-2],_Var33,(_StringComparisonResult)0x73),
          plVar29 = plVar29 + 4, !bVar14));
  _swift_bridgeObjectRetain(_Var33.unknown);
  _swift_bridgeObjectRelease(puVar15);
  if (SCARRY8(lVar30,8)) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c2e4);
    (*pcVar13)();
  }
  lVar28 = lVar30 + 0xc;
  if (SCARRY8(lVar30 + 8,4)) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c2e8);
    (*pcVar13)();
  }
  lVar23 = *param_1;
  lVar4 = param_1[1];
  lVar18 = lVar28;
  __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
            (lVar28,lVar23,lVar4);
  uVar24 = lVar30 + 0xd;
  if (SCARRY8(lVar28,1)) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c2ec);
    (*pcVar13)();
  }
  __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
            (uVar24,lVar23,lVar4);
  uVar20 = lVar30 + 0xe;
  if (SCARRY8(lVar28,2)) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c2f0);
    (*pcVar13)();
  }
  __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
            (uVar20,lVar23,lVar4);
  p_Var16 = (__DataStorage *)(lVar30 + 0xf);
  if (SCARRY8(lVar28,3)) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c2f4);
    (*pcVar13)();
  }
  __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
            (p_Var16,lVar23,lVar4);
  uVar24 = (ulong)(uint)((int)lVar18 << 0x18) | (uVar24 & 0xff) << 0x10 | (uVar20 & 0xff) << 8 |
           (ulong)p_Var16 & 0xff;
  if (uVar24 != 0) {
    lVar28 = 0;
    do {
      if (SCARRY8(lVar30 + 8,8)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c17c);
        (*pcVar13)();
      }
      lVar23 = lVar30 + 0x10 + lVar28;
      if (SCARRY8(lVar30 + 0x10,lVar28)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c180);
        (*pcVar13)();
      }
      lVar4 = *param_1;
      uVar20 = param_1[1];
      uVar27 = (uint)(uVar20 >> 0x20);
      iVar32 = (int)lVar4;
      lVar18 = lVar4 >> 0x20;
      if (uVar27 >> 0x1e < 2) {
        if (uVar27 >> 0x1e != 0) {
          if (lVar18 <= lVar23 || lVar23 < iVar32) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c198);
            (*pcVar13)();
          }
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
          if (p_Var16 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c310);
            (*pcVar13)();
          }
          p_Var17 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
          if (SBORROW8(lVar23,(long)p_Var17)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c1a4);
            (*pcVar13)();
          }
          lVar2 = lVar23 + 1;
          if ((lVar18 <= lVar2) || (lVar2 < iVar32)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c1ac);
            (*pcVar13)();
          }
          _Var5 = p_Var16[lVar23 - (long)p_Var17];
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var17);
          if (p_Var17 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c318);
            (*pcVar13)();
          }
          p_Var16 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var17);
          lVar31 = lVar2 - (long)p_Var16;
          if (SBORROW8(lVar2,(long)p_Var16)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c1b4);
            (*pcVar13)();
          }
          goto LAB_10028b438;
        }
        uVar19 = uVar20 >> 0x30 & 0xff;
        if ((long)uVar19 <= lVar23) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c194);
          (*pcVar13)();
        }
        p_Var16 = (__DataStorage *)(uVar20 >> 0x10);
        if ((long)uVar19 <= lVar23 + 1) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c19c);
          (*pcVar13)();
        }
        _Var5 = a_Stack_68[lVar23 + -0x16];
        _Var6 = a_Stack_68[lVar23 + -0x15];
      }
      else {
        if (uVar27 >> 0x1e != 2) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c30c);
          (*pcVar13)();
        }
        if (lVar23 < *(long *)(lVar4 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c190);
          (*pcVar13)();
        }
        if (*(long *)(lVar4 + 0x18) <= lVar23) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c1a0);
          (*pcVar13)();
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
        if (p_Var16 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c314);
          (*pcVar13)();
        }
        p_Var17 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
        if (SBORROW8(lVar23,(long)p_Var17)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c1a8);
          (*pcVar13)();
        }
        lVar2 = lVar23 + 1;
        if (lVar2 < *(long *)(lVar4 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c1b0);
          (*pcVar13)();
        }
        if (*(long *)(lVar4 + 0x18) <= lVar2) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c1c0);
          (*pcVar13)();
        }
        _Var5 = p_Var16[lVar23 - (long)p_Var17];
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var17);
        if (p_Var17 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c320);
          (*pcVar13)();
        }
        p_Var16 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var17);
        lVar31 = lVar2 - (long)p_Var16;
        if (SBORROW8(lVar2,(long)p_Var16)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c1cc);
          (*pcVar13)();
        }
LAB_10028b438:
        _Var6 = p_Var17[lVar31];
      }
      lVar2 = lVar23 + 2;
      uVar27 = uVar27 >> 0x1e;
      bVar1 = (byte)(uVar20 >> 0x30);
      if (uVar27 == 2) {
        if (lVar2 < *(long *)(lVar4 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c1b8);
          (*pcVar13)();
        }
        if (*(long *)(lVar4 + 0x18) <= lVar2) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c1c8);
          (*pcVar13)();
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
        if (p_Var16 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c324);
          (*pcVar13)();
        }
        p_Var17 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
        if (SBORROW8(lVar2,(long)p_Var17)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c1d4);
          (*pcVar13)();
        }
LAB_10028b4cc:
        _Var7 = p_Var16[lVar2 - (long)p_Var17];
        p_Var16 = p_Var17;
      }
      else {
        if (uVar27 == 1) {
          if ((lVar18 <= lVar2) || (lVar2 < iVar32)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c1c4);
            (*pcVar13)();
          }
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
          if (p_Var16 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c31c);
            (*pcVar13)();
          }
          p_Var17 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
          if (SBORROW8(lVar2,(long)p_Var17)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c1d0);
            (*pcVar13)();
          }
          goto LAB_10028b4cc;
        }
        if ((long)(ulong)bVar1 <= lVar2) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c1bc);
          (*pcVar13)();
        }
        _Var7 = a_Stack_68[lVar23 + -0x14];
      }
      if (SCARRY8(lVar23,3)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c184);
        (*pcVar13)();
      }
      lVar31 = lVar23 + 3;
      if (uVar27 == 2) {
        if (lVar31 < *(long *)(lVar4 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c1dc);
          (*pcVar13)();
        }
        if (*(long *)(lVar4 + 0x18) <= lVar31) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c1e4);
          (*pcVar13)();
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
        if (p_Var16 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c32c);
          (*pcVar13)();
        }
        p_Var17 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
        if (SBORROW8(lVar31,(long)p_Var17)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c1ec);
          (*pcVar13)();
        }
LAB_10028b5e4:
        _Var8 = p_Var16[lVar31 - (long)p_Var17];
        p_Var16 = p_Var17;
      }
      else {
        if (uVar27 == 1) {
          if ((lVar18 <= lVar31) || (lVar31 < iVar32)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c1e0);
            (*pcVar13)();
          }
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
          if (p_Var16 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c328);
            (*pcVar13)();
          }
          p_Var17 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
          if (SBORROW8(lVar31,(long)p_Var17)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c1e8);
            (*pcVar13)();
          }
          goto LAB_10028b5e4;
        }
        if ((long)(ulong)bVar1 <= lVar31) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c1d8);
          (*pcVar13)();
        }
        _Var8 = a_Stack_68[lVar23 + -0x13];
      }
      uVar20 = (ulong)(byte)_Var5 << 0x18 | (ulong)(byte)_Var6 << 0x10 | (ulong)(byte)_Var7 << 8 |
               (ulong)(byte)_Var8;
      if (param_5 <= (long)uVar20) {
        p_Var16 = (__DataStorage *)(uVar20 + param_4);
        if (SCARRY8(uVar20,param_4)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c188);
          (*pcVar13)();
        }
        if ((long)p_Var16 < 0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c18c);
          (*pcVar13)();
        }
        if ((ulong)p_Var16 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028b6a4);
          (*pcVar13)();
        }
        __Foundation_Data__Representation_subscript_setter____Swift_Int___>_Swift_UInt8
                  ((ulong)p_Var16 >> 0x18,lVar23);
        __Foundation_Data__Representation_subscript_setter____Swift_Int___>_Swift_UInt8
                  ((ulong)p_Var16 >> 0x10,lVar23 + 1);
        __Foundation_Data__Representation_subscript_setter____Swift_Int___>_Swift_UInt8
                  ((ulong)p_Var16 >> 8,lVar2);
        __Foundation_Data__Representation_subscript_setter____Swift_Int___>_Swift_UInt8
                  (p_Var16,lVar31);
      }
      lVar28 = lVar28 + 4;
    } while (uVar24 << 2 != lVar28);
  }
LAB_10028c124:
  uVar22 = 1;
  puVar15 = _Var33.unknown;
LAB_10028c128:
  _swift_bridgeObjectRelease(puVar15);
  if (*(long *)PTR____stack_chk_guard_100521138 == local_70) {
    return uVar22;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
  while( true ) {
    _Var33.unknown = (undefined *)plVar29[-1];
    lVar28 = *plVar29;
    if (((undefined *)plVar29[-2] == (undefined *)0x34366f63 &&
         _Var33.unknown == (undefined *)0xe400000000000000) ||
       (bVar14 = Swift::_stringCompareWithSmolCheck
                           ((undefined *)plVar29[-2],_Var33,(_StringComparisonResult)0x63),
       plVar29 = plVar29 + 4, bVar14)) break;
LAB_10028b6b8:
    lVar23 = lVar23 + -1;
    if (lVar23 == 0) {
      uVar22 = 0;
      goto LAB_10028c128;
    }
  }
  _swift_bridgeObjectRetain(_Var33.unknown);
  _swift_bridgeObjectRelease(puVar15);
  if (SCARRY8(lVar28,8)) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c2f8);
    (*pcVar13)();
  }
  lVar23 = lVar28 + 0xc;
  if (SCARRY8(lVar28 + 8,4)) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c2fc);
    (*pcVar13)();
  }
  lVar30 = *param_1;
  lVar4 = param_1[1];
  lVar18 = lVar23;
  __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
            (lVar23,lVar30,lVar4);
  uVar24 = lVar28 + 0xd;
  if (SCARRY8(lVar23,1)) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c300);
    (*pcVar13)();
  }
  __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
            (uVar24,lVar30,lVar4);
  uVar20 = lVar28 + 0xe;
  if (SCARRY8(lVar23,2)) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c304);
    (*pcVar13)();
  }
  __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
            (uVar20,lVar30,lVar4);
  p_Var16 = (__DataStorage *)(lVar28 + 0xf);
  if (SCARRY8(lVar23,3)) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c308);
    (*pcVar13)();
  }
  __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8
            (p_Var16,lVar30,lVar4);
  uVar24 = (ulong)(uint)((int)lVar18 << 0x18) | (uVar24 & 0xff) << 0x10 | (uVar20 & 0xff) << 8 |
           (ulong)p_Var16 & 0xff;
  if (uVar24 != 0) {
    lVar23 = 0;
    do {
      if (SCARRY8(lVar28 + 8,8)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c1f0);
        (*pcVar13)();
      }
      lVar30 = lVar28 + 0x10 + lVar23;
      if (SCARRY8(lVar28 + 0x10,lVar23)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c1f4);
        (*pcVar13)();
      }
      lVar4 = *param_1;
      uVar20 = param_1[1];
      uVar27 = (uint)(uVar20 >> 0x20);
      iVar32 = (int)lVar4;
      lVar18 = lVar4 >> 0x20;
      if (uVar27 >> 0x1e < 2) {
        if (uVar27 >> 0x1e != 0) {
          if (lVar18 <= lVar30 || lVar30 < iVar32) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c220);
            (*pcVar13)();
          }
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
          if (p_Var16 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c334);
            (*pcVar13)();
          }
          p_Var17 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
          if (SBORROW8(lVar30,(long)p_Var17)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c22c);
            (*pcVar13)();
          }
          lVar2 = lVar30 + 1;
          if ((lVar18 <= lVar2) || (lVar2 < iVar32)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c234);
            (*pcVar13)();
          }
          _Var5 = p_Var16[lVar30 - (long)p_Var17];
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var17);
          if (p_Var17 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c33c);
            (*pcVar13)();
          }
          p_Var16 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var17);
          lVar31 = lVar2 - (long)p_Var16;
          if (SBORROW8(lVar2,(long)p_Var16)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c23c);
            (*pcVar13)();
          }
          goto LAB_10028b9a0;
        }
        uVar19 = uVar20 >> 0x30 & 0xff;
        if ((long)uVar19 <= lVar30) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c21c);
          (*pcVar13)();
        }
        p_Var16 = (__DataStorage *)(uVar20 >> 0x10);
        if ((long)uVar19 <= lVar30 + 1) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c228);
          (*pcVar13)();
        }
        _Var5 = a_Stack_68[lVar30 + -0x16];
        _Var6 = a_Stack_68[lVar30 + -0x15];
      }
      else {
        if (uVar27 >> 0x1e != 2) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c330);
          (*pcVar13)();
        }
        if (lVar30 < *(long *)(lVar4 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c218);
          (*pcVar13)();
        }
        if (*(long *)(lVar4 + 0x18) <= lVar30) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c224);
          (*pcVar13)();
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
        if (p_Var16 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c338);
          (*pcVar13)();
        }
        p_Var17 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
        if (SBORROW8(lVar30,(long)p_Var17)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c230);
          (*pcVar13)();
        }
        lVar2 = lVar30 + 1;
        if (lVar2 < *(long *)(lVar4 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c238);
          (*pcVar13)();
        }
        if (*(long *)(lVar4 + 0x18) <= lVar2) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c248);
          (*pcVar13)();
        }
        _Var5 = p_Var16[lVar30 - (long)p_Var17];
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var17);
        if (p_Var17 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c344);
          (*pcVar13)();
        }
        p_Var16 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var17);
        lVar31 = lVar2 - (long)p_Var16;
        if (SBORROW8(lVar2,(long)p_Var16)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c258);
          (*pcVar13)();
        }
LAB_10028b9a0:
        _Var6 = p_Var17[lVar31];
      }
      lVar2 = lVar30 + 2;
      uVar26 = uVar27 >> 0x1e;
      bVar1 = (byte)(uVar20 >> 0x30);
      if (uVar26 == 2) {
        if (lVar2 < *(long *)(lVar4 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c244);
          (*pcVar13)();
        }
        if (*(long *)(lVar4 + 0x18) <= lVar2) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c250);
          (*pcVar13)();
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
        if (p_Var16 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c348);
          (*pcVar13)();
        }
        p_Var17 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
        if (SBORROW8(lVar2,(long)p_Var17)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c25c);
          (*pcVar13)();
        }
LAB_10028ba2c:
        _Var7 = p_Var16[lVar2 - (long)p_Var17];
        p_Var16 = p_Var17;
      }
      else {
        if (uVar26 == 1) {
          if ((lVar18 <= lVar2) || (lVar2 < iVar32)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c24c);
            (*pcVar13)();
          }
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
          if (p_Var16 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c340);
            (*pcVar13)();
          }
          p_Var17 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
          if (SBORROW8(lVar2,(long)p_Var17)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c254);
            (*pcVar13)();
          }
          goto LAB_10028ba2c;
        }
        if ((long)(ulong)bVar1 <= lVar2) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c240);
          (*pcVar13)();
        }
        _Var7 = a_Stack_68[lVar30 + -0x14];
      }
      if (SCARRY8(lVar30,3)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c1f8);
        (*pcVar13)();
      }
      lVar31 = lVar30 + 3;
      if (uVar26 == 2) {
        if (lVar31 < *(long *)(lVar4 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c264);
          (*pcVar13)();
        }
        if (*(long *)(lVar4 + 0x18) <= lVar31) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c26c);
          (*pcVar13)();
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
        if (p_Var16 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c350);
          (*pcVar13)();
        }
        p_Var17 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
        if (SBORROW8(lVar31,(long)p_Var17)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c274);
          (*pcVar13)();
        }
LAB_10028bb54:
        _Var8 = p_Var16[lVar31 - (long)p_Var17];
        p_Var16 = p_Var17;
      }
      else {
        if (uVar26 == 1) {
          if ((lVar18 <= lVar31) || (lVar31 < iVar32)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c268);
            (*pcVar13)();
          }
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
          if (p_Var16 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c34c);
            (*pcVar13)();
          }
          p_Var17 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
          if (SBORROW8(lVar31,(long)p_Var17)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c270);
            (*pcVar13)();
          }
          goto LAB_10028bb54;
        }
        if ((long)(ulong)bVar1 <= lVar31) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c260);
          (*pcVar13)();
        }
        _Var8 = a_Stack_68[lVar30 + -0x13];
      }
      if (SCARRY8(lVar30,4)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c1fc);
        (*pcVar13)();
      }
      lVar34 = lVar30 + 4;
      if (uVar26 == 2) {
        if (lVar34 < *(long *)(lVar4 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c27c);
          (*pcVar13)();
        }
        if (*(long *)(lVar4 + 0x18) <= lVar34) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c284);
          (*pcVar13)();
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
        if (p_Var16 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c358);
          (*pcVar13)();
        }
        p_Var17 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
        if (SBORROW8(lVar34,(long)p_Var17)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c28c);
          (*pcVar13)();
        }
LAB_10028bc74:
        _Var9 = p_Var16[lVar34 - (long)p_Var17];
        p_Var16 = p_Var17;
      }
      else {
        if (uVar26 == 1) {
          if ((lVar18 <= lVar34) || (lVar34 < iVar32)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c280);
            (*pcVar13)();
          }
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
          if (p_Var16 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c354);
            (*pcVar13)();
          }
          p_Var17 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
          if (SBORROW8(lVar34,(long)p_Var17)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c288);
            (*pcVar13)();
          }
          goto LAB_10028bc74;
        }
        if ((long)(ulong)bVar1 <= lVar34) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c278);
          (*pcVar13)();
        }
        _Var9 = a_Stack_68[lVar30 + -0x12];
      }
      if (SCARRY8(lVar34,1)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c200);
        (*pcVar13)();
      }
      lVar25 = lVar30 + 5;
      if (uVar26 == 2) {
        if (lVar25 < *(long *)(lVar4 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c290);
          (*pcVar13)();
        }
        if (*(long *)(lVar4 + 0x18) <= lVar25) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c29c);
          (*pcVar13)();
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
        if (p_Var16 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c360);
          (*pcVar13)();
        }
        p_Var17 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
        if (SBORROW8(lVar25,(long)p_Var17)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c2a4);
          (*pcVar13)();
        }
LAB_10028bd8c:
        _Var10 = p_Var16[lVar25 - (long)p_Var17];
        p_Var16 = p_Var17;
      }
      else {
        if (uVar26 == 1) {
          if ((lVar18 <= lVar25) || (lVar25 < iVar32)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c298);
            (*pcVar13)();
          }
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
          if (p_Var16 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c35c);
            (*pcVar13)();
          }
          p_Var17 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
          if (SBORROW8(lVar25,(long)p_Var17)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c2a0);
            (*pcVar13)();
          }
          goto LAB_10028bd8c;
        }
        if ((long)(ulong)bVar1 <= lVar25) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c294);
          (*pcVar13)();
        }
        _Var10 = a_Stack_68[lVar30 + -0x11];
      }
      if (SCARRY8(lVar34,2)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c204);
        (*pcVar13)();
      }
      lVar21 = lVar30 + 6;
      uVar27 = uVar27 >> 0x1e;
      if (uVar27 == 2) {
        if (lVar21 < *(long *)(lVar4 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c2a8);
          (*pcVar13)();
        }
        if (*(long *)(lVar4 + 0x18) <= lVar21) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c2b4);
          (*pcVar13)();
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
        if (p_Var16 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c368);
          (*pcVar13)();
        }
        p_Var17 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
        if (SBORROW8(lVar21,(long)p_Var17)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c2bc);
          (*pcVar13)();
        }
LAB_10028bebc:
        _Var11 = p_Var16[lVar21 - (long)p_Var17];
        p_Var16 = p_Var17;
      }
      else {
        if (uVar27 == 1) {
          if ((lVar18 <= lVar21) || (lVar21 < iVar32)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c2b0);
            (*pcVar13)();
          }
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
          if (p_Var16 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c364);
            (*pcVar13)();
          }
          p_Var17 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
          if (SBORROW8(lVar21,(long)p_Var17)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c2b8);
            (*pcVar13)();
          }
          goto LAB_10028bebc;
        }
        if ((long)(ulong)bVar1 <= lVar21) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c2ac);
          (*pcVar13)();
        }
        _Var11 = a_Stack_68[lVar30 + -0x10];
      }
      lVar3 = lVar30 + 7;
      if (SCARRY8(lVar34,3)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c208);
        (*pcVar13)();
      }
      if (uVar27 == 2) {
        if (lVar3 < *(long *)(lVar4 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c2c0);
          (*pcVar13)();
        }
        if (*(long *)(lVar4 + 0x18) <= lVar3) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c2cc);
          (*pcVar13)();
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
        if (p_Var16 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c370);
          (*pcVar13)();
        }
        p_Var17 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
        if (SBORROW8(lVar3,(long)p_Var17)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c2d4);
          (*pcVar13)();
        }
LAB_10028bfd4:
        _Var12 = p_Var16[lVar3 - (long)p_Var17];
        p_Var16 = p_Var17;
      }
      else {
        if (uVar27 == 1) {
          if ((lVar18 <= lVar3) || (lVar3 < iVar32)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c2c8);
            (*pcVar13)();
          }
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
          if (p_Var16 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c36c);
            (*pcVar13)();
          }
          p_Var17 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar20 & 0x3fffffffffffffff),p_Var16);
          if (SBORROW8(lVar3,(long)p_Var17)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c2d0);
            (*pcVar13)();
          }
          goto LAB_10028bfd4;
        }
        if ((long)(ulong)bVar1 <= lVar3) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c2c4);
          (*pcVar13)();
        }
        _Var12 = a_Stack_68[lVar30 + -0xf];
      }
      uVar27 = (uint)(byte)_Var5 << 0x18 | (uint)(byte)_Var6 << 0x10 | (uint)(byte)_Var7 << 8 |
               (uint)(byte)_Var8;
      if ((int)uVar27 < 0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c20c);
        (*pcVar13)();
      }
      uVar20 = (ulong)(byte)_Var9 << 0x18 | (ulong)(byte)_Var10 << 0x10 | (ulong)(byte)_Var11 << 8 |
               (ulong)(byte)_Var12 | (ulong)uVar27 << 0x20;
      if (param_5 <= (long)uVar20) {
        p_Var16 = (__DataStorage *)(uVar20 + param_4);
        if (SCARRY8(uVar20,param_4)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c210);
          (*pcVar13)();
        }
        if ((long)p_Var16 < 0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10028c214);
          (*pcVar13)();
        }
        __Foundation_Data__Representation_subscript_setter____Swift_Int___>_Swift_UInt8
                  ((ulong)p_Var16 >> 0x38,lVar30);
        __Foundation_Data__Representation_subscript_setter____Swift_Int___>_Swift_UInt8
                  ((ulong)p_Var16 >> 0x30,lVar30 + 1);
        __Foundation_Data__Representation_subscript_setter____Swift_Int___>_Swift_UInt8
                  ((ulong)p_Var16 >> 0x28,lVar2);
        __Foundation_Data__Representation_subscript_setter____Swift_Int___>_Swift_UInt8
                  ((ulong)p_Var16 >> 0x20,lVar31);
        __Foundation_Data__Representation_subscript_setter____Swift_Int___>_Swift_UInt8
                  ((ulong)p_Var16 >> 0x18,lVar34);
        __Foundation_Data__Representation_subscript_setter____Swift_Int___>_Swift_UInt8
                  ((ulong)p_Var16 >> 0x10,lVar25);
        __Foundation_Data__Representation_subscript_setter____Swift_Int___>_Swift_UInt8
                  ((ulong)p_Var16 >> 8,lVar21);
        __Foundation_Data__Representation_subscript_setter____Swift_Int___>_Swift_UInt8
                  (p_Var16,lVar3);
      }
      lVar23 = lVar23 + 8;
    } while (uVar24 << 3 != lVar23);
  }
  goto LAB_10028c124;
}

