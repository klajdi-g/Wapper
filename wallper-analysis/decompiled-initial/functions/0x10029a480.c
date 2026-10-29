// rea decompile_all
// name: FUN_10029a480
// address: 0x10029a480
// body: available
// range: 0x10029a480-0x10029a877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10029a480(NSArray *param_1)

{
  _CocoaArrayWrapper _Var1;
  undefined *puVar2;
  _StringGuts _Var3;
  _ArrayBuffer _Var4;
  _ArrayBuffer _Var5;
  code *pcVar6;
  bool bVar7;
  NSArray *pNVar8;
  long lVar9;
  _StringGuts *p_Var10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined *puVar16;
  _StringGuts local_90;
  _StringGuts _Stack_88;
  _ArrayBuffer local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  
  _IOPSCopyPowerSourcesInfo();
  if (param_1 == (NSArray *)0x0) {
    return;
  }
  pNVar8 = param_1;
  _swift_unknownObjectRetain();
  _IOPSCopyPowerSourcesList();
  if (pNVar8 != (NSArray *)0x0) {
    _swift_dynamicCastObjCClass(pNVar8,&_OBJC_CLASS___NSArray);
    if (pNVar8 == (NSArray *)0x0) {
      _swift_unknownObjectRelease_n(param_1,2);
      return;
    }
    local_80.unknown = (undefined *)0x0;
    (extension_Foundation)::Swift::Array<undefined>::__conditionallyBridgeFromObjectiveC(pNVar8);
    _Var4.unknown = local_80.unknown;
    if (local_80.unknown != (undefined *)0x0) {
      puVar16 = local_80.unknown & 0xffffffffffffff8;
      if ((ulong)local_80.unknown >> 0x3e == 0) {
        lVar12 = *(long *)(puVar16 + 0x10);
        puVar2 = PTR___type_metadata_for_Any_100524178;
      }
      else {
        _Var1.unknown = local_80.unknown;
        if (-1 < (long)local_80.unknown) {
          _Var1.unknown = puVar16;
        }
        lVar12 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        puVar2 = PTR___type_metadata_for_Any_100524178;
      }
      PTR___type_metadata_for_Any_100524178 = puVar2;
      if (lVar12 != 0) {
        lVar15 = 4;
        do {
          uVar11 = lVar15 - 4;
          if (((ulong)_Var4.unknown & 0xc000000000000001) == 0) {
            if (*(ulong *)(puVar16 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10029a824);
              (*pcVar6)();
            }
            uVar14 = *(ulong *)(_Var4.unknown + lVar15 * 8);
            _swift_unknownObjectRetain(uVar14);
          }
          else {
            uVar14 = uVar11;
            Swift::_ArrayBuffer::__getElementSlowPath(uVar11,_Var4);
          }
          if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10029a820);
            (*pcVar6)();
          }
          lVar13 = lVar15 + -3;
          pNVar8 = param_1;
          _IOPSGetPowerSourceDescription(param_1,uVar14);
          if (pNVar8 == (NSArray *)0x0) {
LAB_10029a534:
            _swift_unknownObjectRelease(uVar14);
          }
          else {
            _swift_dynamicCastObjCClass(pNVar8,&_OBJC_CLASS___NSDictionary);
            if (pNVar8 != (NSArray *)0x0) {
              local_80.unknown = (undefined *)0x0;
              (extension_Foundation)::Swift::Dictionary::__conditionallyBridgeFromObjectiveC
                        ((NSDictionary *)pNVar8);
              _Var5.unknown = local_80.unknown;
              if (local_80.unknown != (undefined *)0x0) {
                if (*(long *)(local_80.unknown + 0x10) != 0) {
                  _swift_bridgeObjectRetain(local_80.unknown);
                  lVar9 = 0x65707954;
                  uVar11 = 0;
                  FUN_10000464c(0x65707954);
                  if ((uVar11 & 1) == 0) {
                    _swift_unknownObjectRelease(uVar14);
                    _swift_bridgeObjectRelease_n(_Var5.unknown,2);
                    goto LAB_10029a53c;
                  }
                  FUN_1000280d4(*(long *)(_Var5.unknown + 0x38) + lVar9 * 0x20,&local_80);
                  _swift_bridgeObjectRelease(_Var5.unknown);
                  p_Var10 = &local_90;
                  _swift_dynamicCast(p_Var10,&local_80,puVar2 + 8,
                                     PTR___type_metadata_for_Swift_String_100523a98,6);
                  _Var3.unknown = _Stack_88.unknown;
                  if (((ulong)p_Var10 & 1) != 0) {
                    if ((local_90.unknown == (undefined *)0x6c616e7265746e49) &&
                       (_Stack_88.unknown == (undefined *)0xef79726574746142)) {
                      _swift_unknownObjectRelease(param_1);
                      _swift_bridgeObjectRelease(0xef79726574746142);
                    }
                    else {
                      bVar7 = Swift::_stringCompareWithSmolCheck
                                        (local_90,_Stack_88,(_StringComparisonResult)0x49);
                      _swift_bridgeObjectRelease(_Var3.unknown);
                      if (!bVar7) {
                        _swift_bridgeObjectRelease(_Var5.unknown);
                        _swift_unknownObjectRelease(uVar14);
                        goto LAB_10029a53c;
                      }
                      _swift_unknownObjectRelease(param_1);
                    }
                    if (*(long *)(_Var5.unknown + 0x10) != 0) {
                      _swift_bridgeObjectRetain(_Var5.unknown);
                      uVar11 = 0;
                      lVar12 = -0x2ffffffffffffff0;
                      FUN_10000464c(0xd000000000000010);
                      if ((uVar11 & 1) != 0) {
                        FUN_1000280d4(*(long *)(_Var5.unknown + 0x38) + lVar12 * 0x20,&local_80);
                        _swift_unknownObjectRelease(param_1);
                        _swift_unknownObjectRelease(uVar14);
                        _swift_bridgeObjectRelease(_Var5.unknown);
                        goto LAB_10029a7c4;
                      }
                      _swift_bridgeObjectRelease(_Var5.unknown);
                    }
                    uStack_78 = 0;
                    local_80.unknown = (undefined *)0x0;
                    local_68 = 0;
                    uStack_70 = 0;
                    _swift_unknownObjectRelease(param_1);
                    _swift_unknownObjectRelease(uVar14);
LAB_10029a7c4:
                    _swift_bridgeObjectRelease(_Var5.unknown);
                    _swift_bridgeObjectRelease(_Var4.unknown);
                    if (local_68 != 0) {
                      _swift_dynamicCast(&local_90,&local_80,puVar2 + 8,
                                         PTR___type_metadata_for_Swift_Int_100523bd8,6);
                      return;
                    }
                    FUN_10028f264(&local_80);
                    return;
                  }
                }
                _swift_bridgeObjectRelease(_Var5.unknown);
              }
              goto LAB_10029a534;
            }
            _swift_unknownObjectRelease(uVar14);
          }
LAB_10029a53c:
          lVar15 = lVar15 + 1;
        } while (lVar13 != lVar12);
      }
      _swift_bridgeObjectRelease(_Var4.unknown);
      _swift_unknownObjectRelease(param_1);
      _swift_unknownObjectRelease(param_1);
      return;
    }
  }
  _swift_unknownObjectRelease_n(param_1,2);
  return;
}

