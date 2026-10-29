// rea decompile_all
// name: FUN_10028fc20
// address: 0x10028fc20
// body: available
// range: 0x10028fc20-0x10029024b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10028fc20(void)

{
  ulong *puVar1;
  undefined8 *puVar2;
  _CocoaArrayWrapper _Var3;
  code *pcVar4;
  bool bVar5;
  ID self;
  _ArrayBuffer _Var6;
  NSKeyValueObservingOptions NVar7;
  NSKeyValueObservation *pNVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long unaff_x20;
  ulong *puVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong local_98;
  ulong local_78 [3];
  
  self = unaff_x20 + 0x18;
  _swift_unknownObjectWeakLoadStrong();
  if (self == 0) {
    return;
  }
  _Var6.unknown = (undefined *)objc_stub::items(self);
  FUN_100044230(0,&DAT_100557ae0,&PTR__OBJC_CLASS___AVPlayerItem_10053fc08);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  _swift_beginAccess(unaff_x20 + 0x28,local_78,0x21,0);
  uVar13 = *(ulong *)(unaff_x20 + 0x28);
  puVar14 = (ulong *)(uVar13 + 0x10);
  uVar18 = *puVar14;
  uVar9 = (ulong)_Var6.unknown >> 0x3e;
  if (uVar18 == 0) {
    local_98 = 0;
    uVar18 = local_98;
  }
  else {
    local_98 = 0;
    puVar16 = _Var6.unknown & 0xffffffffffffff8;
    _Var3.unknown = puVar16;
    if ((undefined *)0x7fffffffffffffff < _Var6.unknown) {
      _Var3.unknown = _Var6.unknown;
    }
    do {
      uVar11 = *(ulong *)(uVar13 + 0x20 + local_98 * 0x10);
      if (uVar9 == 0) {
        uVar15 = *(ulong *)(puVar16 + 0x10);
      }
      else {
        uVar15 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
      }
      if (uVar15 == 0) {
LAB_10028fdb0:
        uVar18 = local_98 + 1;
        uVar11 = *puVar14;
        if (uVar18 != uVar11) {
          do {
            if (uVar11 <= uVar18) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1002901e0);
              (*pcVar4)();
            }
            puVar1 = (ulong *)(uVar13 + 0x20 + uVar18 * 0x10);
            uVar11 = *puVar1;
            if (uVar9 == 0) {
              uVar15 = *(ulong *)(puVar16 + 0x10);
            }
            else {
              uVar15 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
            }
            if (uVar15 != 0) {
              uVar17 = 0;
              do {
                if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
                  if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1002901c0);
                    (*pcVar4)();
                  }
                  if (*(ulong *)(puVar16 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1002901c4);
                    (*pcVar4)();
                  }
                  uVar10 = *(ulong *)(_Var6.unknown + uVar17 * 8 + 0x20);
                }
                else {
                  uVar10 = uVar17;
                  Swift::_ArrayBuffer::__getElementSlowPath(uVar17,_Var6);
                  if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x100290248);
                    (*pcVar4)();
                  }
                  _swift_unknownObjectRelease();
                }
                if (uVar10 == uVar11) {
                  if (local_98 != uVar18) {
                    if ((long)local_98 < 0) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002901ec);
                      (*pcVar4)();
                    }
                    if (*puVar14 <= local_98) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002901f0);
                      (*pcVar4)();
                    }
                    if ((long)*puVar14 <= (long)uVar18) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002901f4);
                      (*pcVar4)();
                    }
                    puVar2 = (undefined8 *)(uVar13 + 0x20 + local_98 * 0x10);
                    uVar20 = puVar2[1];
                    uVar19 = *puVar2;
                    uVar17 = puVar1[1];
                    uVar15 = *puVar1;
                    uVar11 = uVar13;
                    _swift_isUniquelyReferenced_nonNull_native(uVar15);
                    *(ulong *)(unaff_x20 + 0x28) = uVar13;
                    if ((uVar11 & 1) == 0) {
                      FUN_10028733c();
                      *(ulong *)(unaff_x20 + 0x28) = uVar13;
                    }
                    puVar14 = (ulong *)(uVar13 + 0x20 + local_98 * 0x10);
                    puVar14[1] = uVar17;
                    *puVar14 = uVar15;
                    *(ulong *)(unaff_x20 + 0x28) = uVar13;
                    if (*(long *)(uVar13 + 0x10) <= (long)uVar18) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002901f8);
                      (*pcVar4)();
                    }
                    puVar2 = (undefined8 *)(uVar13 + 0x20 + uVar18 * 0x10);
                    puVar2[1] = uVar20;
                    *puVar2 = uVar19;
                    *(ulong *)(unaff_x20 + 0x28) = uVar13;
                  }
                  bVar5 = SCARRY8(local_98,1);
                  local_98 = local_98 + 1;
                  if (bVar5) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1002901e8);
                    (*pcVar4)();
                  }
                  break;
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 != uVar15);
            }
            uVar18 = uVar18 + 1;
            puVar14 = (ulong *)(uVar13 + 0x10);
            uVar11 = *puVar14;
          } while (uVar18 != uVar11);
        }
        if ((long)uVar18 < (long)local_98) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10028fde4);
          (*pcVar4)();
        }
        goto LAB_10028fdf0;
      }
      uVar17 = 0;
      while( true ) {
        if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
          if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1002901d4);
            (*pcVar4)();
          }
          if (*(ulong *)(puVar16 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1002901d8);
            (*pcVar4)();
          }
          uVar10 = *(ulong *)(_Var6.unknown + uVar17 * 8 + 0x20);
        }
        else {
          uVar10 = uVar17;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar17,_Var6);
          if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10029024c);
            (*pcVar4)();
          }
          _swift_unknownObjectRelease();
        }
        if (uVar10 == uVar11) break;
        uVar17 = uVar17 + 1;
        if (uVar17 == uVar15) goto LAB_10028fdb0;
      }
      local_98 = local_98 + 1;
    } while (local_98 != uVar18);
    local_98 = *puVar14;
    uVar18 = local_98;
  }
LAB_10028fdf0:
  FUN_100289fd4(local_98,uVar18);
  _swift_endAccess(local_78);
  if (uVar9 == 0) {
    uVar13 = *(ulong *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var3.unknown = _Var6.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var6.unknown) {
      _Var3.unknown = _Var6.unknown;
    }
    uVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
  }
  if (uVar13 != 0) {
    uVar9 = 0;
    do {
      if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1002901e4);
          (*pcVar4)();
        }
        uVar18 = *(ulong *)(_Var6.unknown + uVar9 * 8 + 0x20);
      }
      else {
        uVar18 = uVar9;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar9,_Var6);
      }
      bVar5 = SCARRY8(uVar9,1);
      uVar9 = uVar9 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1002901dc);
        (*pcVar4)();
      }
      lVar12 = *(long *)(*(long *)(unaff_x20 + 0x28) + 0x10) + 1;
      puVar14 = (ulong *)(*(long *)(unaff_x20 + 0x28) + 0x20);
      do {
        lVar12 = lVar12 + -1;
        if (lVar12 == 0) {
          NVar7.unknown = &DAT_10042d928;
          local_78[0] = uVar18;
          _swift_getKeyPath();
          puVar16 = &DAT_100536e80;
          _swift_allocObject(&DAT_100536e80,0x18,7);
          _swift_weakInit(puVar16 + 0x10,unaff_x20);
          pNVar8 = (extension_Foundation)::Foundation::_KeyValueCodingAndObserving::_observe(NVar7);
          _swift_release(NVar7.unknown);
          _swift_release(puVar16);
          _swift_beginAccess(unaff_x20 + 0x28,local_78,0x21,0);
          uVar17 = *(ulong *)(unaff_x20 + 0x28);
          uVar11 = uVar17;
          _swift_isUniquelyReferenced_nonNull_native();
          *(ulong *)(unaff_x20 + 0x28) = uVar17;
          uVar15 = uVar17;
          if ((uVar11 & 1) == 0) {
            uVar15 = 0;
            FUN_1001c5138(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17);
            *(ulong *)(unaff_x20 + 0x28) = uVar15;
          }
          uVar11 = *(ulong *)(uVar15 + 0x10);
          uVar17 = uVar15;
          if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar11) {
            uVar17 = (ulong)(1 < *(ulong *)(uVar15 + 0x18));
            FUN_1001c5138(uVar17,uVar11 + 1,1,uVar15);
          }
          *(ulong *)(uVar17 + 0x10) = uVar11 + 1;
          lVar12 = uVar17 + uVar11 * 0x10;
          *(ulong *)(lVar12 + 0x20) = uVar18;
          *(NSKeyValueObservation **)(lVar12 + 0x28) = pNVar8;
          *(ulong *)(unaff_x20 + 0x28) = uVar17;
          _swift_endAccess(local_78);
          break;
        }
        uVar11 = *puVar14;
        puVar14 = puVar14 + 2;
      } while (uVar11 != uVar18);
    } while (uVar9 != uVar13);
  }
  _swift_bridgeObjectRelease(_Var6.unknown);
  return;
}

