// rea decompile_all
// name: FUN_1000a19c8
// address: 0x1000a19c8
// body: available
// range: 0x1000a19c8-0x1000a1b93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000a19c8(undefined8 *param_1,long *param_2)

{
  double *pdVar1;
  double *pdVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  NSObject *pNVar9;
  NSObject *pNVar10;
  
  if (((undefined *)*param_1 == (undefined *)*param_2 &&
       (undefined *)param_1[1] == (undefined *)param_2[1]) ||
     (bVar4 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), bVar4)) {
    ppuVar8 = (undefined **)param_2[2];
    if (((undefined **)param_1[2] == ppuVar8 && (undefined *)param_1[3] == (undefined *)param_2[3])
       || (bVar4 = Swift::_stringCompareWithSmolCheck
                             ((undefined *)param_1[2],(undefined *)param_1[3],
                              (_StringComparisonResult)(__int8)ppuVar8), bVar4)) {
      pNVar9 = (NSObject *)param_1[4];
      pNVar10 = (NSObject *)param_2[4];
      if (pNVar9 == (NSObject *)0x0) {
        if (pNVar10 != (NSObject *)0x0) {
          return 0;
        }
      }
      else {
        if (pNVar10 == (NSObject *)0x0) {
          return 0;
        }
        ppuVar8 = &PTR__OBJC_CLASS___NSImage_10053fa10;
        FUN_100044230(0,&DAT_10054eeb8);
        bVar4 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar9,pNVar10);
        if (!bVar4) {
          return 0;
        }
      }
      if (param_1[5] == param_2[5]) {
        uVar5 = param_1[6];
        FUN_1001d9fdc(uVar5,param_2[6]);
        if ((((uVar5 & 1) != 0) && (param_1[7] == param_2[7])) &&
           (*(char *)(param_1 + 8) == (char)param_2[8])) {
          lVar6 = 0;
          FUN_10009e280();
          pdVar1 = (double *)((long)param_1 + (long)*(int *)(lVar6 + 0x2c));
          pdVar2 = (double *)((long)param_2 + (long)*(int *)(lVar6 + 0x2c));
          if (*pdVar1 == *pdVar2) {
            lVar7 = 0;
            FUN_10015f8e8();
            bVar4 = Foundation::Date::___infix
                              ((undefined *)((long)pdVar1 + (long)*(int *)(lVar7 + 0x14)),
                               (undefined *)((long)pdVar2 + (long)*(int *)(lVar7 + 0x14)),
                               (Date)ppuVar8);
            if ((bVar4) &&
               (*(double *)((long)pdVar1 + (long)*(int *)(lVar7 + 0x18)) ==
                *(double *)((long)pdVar2 + (long)*(int *)(lVar7 + 0x18)))) {
              pdVar1 = (double *)((long)param_1 + (long)*(int *)(lVar6 + 0x30));
              pdVar2 = (double *)((long)param_2 + (long)*(int *)(lVar6 + 0x30));
              cVar3 = *(char *)(pdVar2 + 1);
              if (*(char *)(pdVar1 + 1) == '\x01') {
                if (cVar3 == '\x01') {
                  return 1;
                }
              }
              else if ((cVar3 != '\x01') && (*pdVar1 == *pdVar2)) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

