// rea decompile_all
// name: FUN_10026ad9c
// address: 0x10026ad9c
// body: available
// range: 0x10026ad9c-0x10026aff7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10026ad9c(char *param_1,void *param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  String SVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  URL UVar11;
  _StringGuts _Var13;
  long extraout_x8;
  long lVar14;
  String *pSVar15;
  ulong uVar16;
  String SVar17;
  String SVar18;
  String local_80;
  long local_70;
  void *local_68;
  void *pvVar12;
  
  lVar8 = 0;
  FUN_10040211c();
  local_70 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_70 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pSVar15 = (String *)((long)&local_80 + lVar3);
  SVar17.bridgeObject = (void *)0xec0000002d657669;
  SVar17.str = (char *)0x7463617265746e69;
  SVar18.bridgeObject = param_2;
  SVar18.str = param_1;
  bVar7 = Swift::String::hasPrefix(SVar17,SVar18);
  if (bVar7) {
    bVar7 = true;
  }
  else {
    FUN_10027f304();
    SVar4.bridgeObject = param_2;
    SVar4.str = param_1;
    puVar9 = &DAT_10042d220;
    _swift_getKeyPath(&DAT_10042d220);
    puVar10 = &DAT_10042d248;
    _swift_getKeyPath(&DAT_10042d248);
    Combine::Published::_get_subscript(&local_68);
    _swift_release(puVar9);
    _swift_release(puVar10);
    lVar14 = *(long *)((long)local_68 + 0x10);
    if (lVar14 == 0) {
      bVar7 = false;
      pvVar12 = local_68;
    }
    else {
      uVar16 = 0;
      local_80.str = (char *)(long)*(int *)(lVar8 + 0x14);
      bVar2 = *(byte *)(local_70 + 0x50);
      local_80.bridgeObject = local_68;
      while( true ) {
        if (*(ulong *)((long)local_80.bridgeObject + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10026aff8);
          (*pcVar5)();
        }
        UVar11.unknown =
             (undefined *)
             ((long)local_68 +
             *(long *)(local_70 + 0x48) * uVar16 +
             ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff)));
        FUN_100029504(UVar11.unknown,pSVar15,FUN_10040211c);
        SVar17 = Foundation::URL::get_lastPathComponent(UVar11);
        pvVar12 = SVar17.bridgeObject;
        uVar1 = (ulong)SVar17.str & 0xffffffffffff;
        if (((ulong)pvVar12 & 0x2000000000000000) != 0) {
          uVar1 = (ulong)pvVar12 >> 0x38 & 0xf;
        }
        if (uVar1 == 0) {
          _swift_bridgeObjectRelease(pvVar12);
          SVar17 = *pSVar15;
          _swift_bridgeObjectRetain(*(undefined8 *)((long)&local_80 + lVar3 + 8));
        }
        pvVar12 = SVar17.bridgeObject;
        FUN_10027f304();
        _Var13.unknown = SVar17.bridgeObject;
        _swift_bridgeObjectRelease(pvVar12);
        if (SVar17 == SVar4) break;
        bVar7 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar17.str,_Var13,(_StringComparisonResult)(__int8)param_1);
        _swift_bridgeObjectRelease(_Var13.unknown);
        FUN_100029548(pSVar15,FUN_10040211c);
        pvVar12 = local_80.bridgeObject;
        if ((bVar7) || (bVar6 = lVar14 - 1U == uVar16, uVar16 = uVar16 + 1, bVar6))
        goto LAB_10026afc0;
      }
      _swift_bridgeObjectRelease(_Var13.unknown);
      FUN_100029548(pSVar15,FUN_10040211c);
      bVar7 = true;
      pvVar12 = local_80.bridgeObject;
    }
LAB_10026afc0:
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(pvVar12);
  }
  return bVar7;
}

