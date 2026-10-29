// rea decompile_all
// name: FUN_10030c138
// address: 0x10030c138
// body: available
// range: 0x10030c138-0x10030c36f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10030c138(undefined8 *param_1,long param_2,_ArrayBuffer param_3)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  undefined8 uVar3;
  __int64 _Var4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  if ((ulong)param_3.unknown >> 0x3e == 0) {
    lVar6 = *(long *)((param_3.unknown & 0xffffffffffffff8U) + 0x10);
  }
  else {
    _Var1.unknown = param_3.unknown & 0xffffffffffffff8U;
    if (((ulong)param_3.unknown & 0x8000000000000000) != 0) {
      _Var1.unknown = param_3.unknown;
    }
    lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar6 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10030c370);
      (*pcVar2)();
    }
    if ((ulong)param_3.unknown >> 0x3e == 0) {
      lVar6 = *(long *)(((ulong)param_3.unknown & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10030c364);
        (*pcVar2)();
      }
      uVar3 = 0;
      FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
      _swift_arrayInitWithCopy
                (param_1,((ulong)param_3.unknown & 0xffffffffffffff8) + 0x20,lVar6,uVar3);
    }
    else {
      _Var1.unknown = param_3.unknown & 0xffffffffffffff8;
      if (((ulong)param_3.unknown & 0x8000000000000000) != 0) {
        _Var1.unknown = param_3.unknown;
      }
      _Var4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      if (param_2 < _Var4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10030c368);
        (*pcVar2)();
      }
      if (lVar6 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10030c36c);
        (*pcVar2)();
      }
      if (((ulong)param_3.unknown & 0xc000000000000001) == 0) {
        *param_1 = *(undefined8 *)(param_3.unknown + 0x20);
        uVar10 = lVar6 - 1;
        if (uVar10 != 0) {
          uVar8 = uVar10 & 7;
          if (lVar6 - 2U < 7) {
            lVar6 = 1;
          }
          else {
            uVar10 = uVar10 & 0xfffffffffffffff8;
            puVar9 = (undefined8 *)(param_3.unknown + 0x30);
            lVar6 = 1;
            do {
              param_1[1] = puVar9[-1];
              param_1[2] = *puVar9;
              param_1[3] = puVar9[1];
              param_1[4] = puVar9[2];
              param_1[5] = puVar9[3];
              param_1[6] = puVar9[4];
              param_1[7] = puVar9[5];
              param_1 = param_1 + 8;
              *param_1 = puVar9[6];
              lVar6 = lVar6 + 8;
              puVar9 = puVar9 + 8;
              uVar10 = uVar10 - 8;
            } while (uVar10 != 0);
          }
          if (uVar8 != 0) {
            puVar9 = (undefined8 *)(param_3.unknown + lVar6 * 8 + 0x20);
            do {
              param_1 = param_1 + 1;
              *param_1 = *puVar9;
              uVar8 = uVar8 - 1;
              puVar9 = puVar9 + 1;
            } while (uVar8 != 0);
          }
        }
      }
      else {
        lVar7 = 0;
        do {
          lVar5 = lVar7;
          Swift::_ArrayBuffer::__getElementSlowPath(lVar7,param_3);
          param_1[lVar7] = lVar5;
          lVar7 = lVar7 + 1;
        } while (lVar6 != lVar7);
      }
    }
  }
  return param_3.unknown;
}

