// rea decompile_all
// name: FUN_10009b770
// address: 0x10009b770
// body: available
// range: 0x10009b770-0x10009bc0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10009b770(undefined8 *param_1,double param_2,double param_3,double param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,void *param_8)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  _ArrayBuffer _Var3;
  ID IVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ID self;
  undefined *puVar11;
  double dVar12;
  double dVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ID IVar18;
  double dVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  
  self = param_5[4];
  if (self == 0) {
    uVar7 = 0;
    uVar9 = 0;
    IVar18 = 0;
    dVar12 = 0.0;
    dVar13 = 0.0;
    goto LAB_10009bbc0;
  }
  uVar7 = 0;
  if (param_2 <= 0.0) {
    uVar9 = 0;
    IVar18 = 0;
    dVar12 = 0.0;
    dVar13 = 0.0;
    goto LAB_10009bbc0;
  }
  uVar9 = 0;
  dVar12 = 0.0;
  dVar13 = 0.0;
  IVar18 = 0;
  if (param_3 <= 0.0) goto LAB_10009bbc0;
  dVar13 = param_3;
  _Var3.unknown = (undefined *)objc_stub::representations(self);
  ppuVar5 = &PTR__OBJC_CLASS___NSImageRep_10053fa68;
  FUN_100044230(0,&DAT_10054f778);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var3.unknown >> 0x3e == 0) {
    uVar15 = *(ulong *)(((ulong)_Var3.unknown & 0xffffffffffffff8) + 0x10);
    if (uVar15 != 0) goto LAB_10009b838;
LAB_10009b978:
    _swift_bridgeObjectRelease(_Var3.unknown);
    lVar14 = *(long *)(PTR___swiftEmptyArrayStorage_100524190 + 0x10);
    puVar11 = PTR___swiftEmptyArrayStorage_100524190;
    if (lVar14 == 0) goto LAB_10009b990;
LAB_10009b91c:
    uVar16 = *(ulong *)(puVar11 + 0x20);
    lVar6 = lVar14 + -1;
    uVar15 = uVar16;
    if (lVar6 != 0) {
      puVar8 = (ulong *)(puVar11 + 0x28);
      uVar17 = uVar16;
      do {
        uVar10 = *puVar8;
        uVar15 = uVar10;
        if ((long)uVar10 <= (long)uVar16) {
          uVar15 = uVar17;
        }
        if ((long)uVar16 <= (long)uVar10) {
          uVar16 = uVar10;
        }
        lVar6 = lVar6 + -1;
        puVar8 = puVar8 + 1;
        uVar17 = uVar15;
      } while (lVar6 != 0);
    }
  }
  else {
    _Var1.unknown = _Var3.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var3.unknown) {
      _Var1.unknown = _Var3.unknown;
    }
    uVar15 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    if (uVar15 == 0) goto LAB_10009b978;
LAB_10009b838:
    puVar11 = PTR___swiftEmptyArrayStorage_100524190;
    ppuVar5 = (undefined **)0x0;
    FUN_1001c5be8(0,uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU));
    if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10009bc10);
      (*pcVar2)();
    }
    IVar18 = 0;
    do {
      if (((ulong)_Var3.unknown & 0xc000000000000001) == 0) {
        IVar4 = *(ID *)(_Var3.unknown + IVar18 * 8 + 0x20);
      }
      else {
        IVar4 = IVar18;
        Swift::_ArrayBuffer::__getElementSlowPath(IVar18,_Var3);
      }
      IVar4 = objc_stub::pixelsHigh(IVar4);
      uVar16 = *(ulong *)(puVar11 + 0x10);
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar16) {
        ppuVar5 = (undefined **)0x1;
        FUN_1001c5be8(1 < *(ulong *)(puVar11 + 0x18),uVar16 + 1);
      }
      IVar18 = IVar18 + 1;
      *(ulong *)(puVar11 + 0x10) = uVar16 + 1;
      *(ID *)(puVar11 + uVar16 * 8 + 0x20) = IVar4;
    } while (uVar15 != IVar18);
    _swift_bridgeObjectRelease(_Var3.unknown);
    lVar14 = *(long *)(puVar11 + 0x10);
    if (lVar14 != 0) goto LAB_10009b91c;
LAB_10009b990:
    uVar15 = 0;
  }
  _swift_bridgeObjectRelease(puVar11);
  if ((lVar14 == 0) || ((long)uVar15 < 1)) {
    objc_stub::size(self);
  }
  else {
    dVar13 = (double)uVar15;
  }
  dVar12 = param_3 * param_4;
  if (dVar13 <= param_3 * param_4) {
    dVar12 = dVar13;
  }
  dVar19 = 2160.0;
  if (dVar12 <= 2160.0) {
    dVar19 = dVar12;
  }
  dVar13 = 360.0;
  if (360.0 < dVar12) {
    dVar13 = (double)(long)dVar19;
  }
  uVar7 = *param_5;
  uVar9 = param_5[1];
  dVar12 = (double)(long)((param_2 * dVar13) / param_3);
  _swift_bridgeObjectRetain();
  SVar21.bridgeObject = (void *)0xe100000000000000;
  SVar21.str = (char *)0x7c;
  SVar24.bridgeObject = param_8;
  SVar24.str = (char *)ppuVar5;
  Swift::String::append(SVar21,SVar24);
  SVar21 = *(String *)(param_5 + 2);
  _swift_bridgeObjectRetain(uVar9);
  SVar25.bridgeObject = param_8;
  SVar25.str = (char *)ppuVar5;
  Swift::String::append(SVar21,SVar25);
  _swift_bridgeObjectRelease(uVar9);
  _swift_bridgeObjectRetain(uVar9);
  SVar20.bridgeObject = (void *)0xe100000000000000;
  SVar20.str = (char *)0x23;
  SVar26.bridgeObject = param_8;
  SVar26.str = (char *)ppuVar5;
  Swift::String::append(SVar20,SVar26);
  _swift_bridgeObjectRelease(uVar9);
  SVar21 = Swift::CustomStringConvertible::get_description();
  _swift_bridgeObjectRetain(uVar9);
  SVar27.bridgeObject = param_8;
  SVar27.str = (char *)ppuVar5;
  Swift::String::append(SVar21,SVar27);
  _swift_bridgeObjectRelease(uVar9);
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  SVar22.bridgeObject = (void *)0xe100000000000000;
  SVar22.str = (char *)0x7c;
  SVar28.bridgeObject = param_8;
  SVar28.str = (char *)ppuVar5;
  Swift::String::append(SVar22,SVar28);
  if ((((ulong)dVar12 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10009bbf8);
    (*pcVar2)();
  }
  if (dVar12 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10009bbfc);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= dVar12) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10009bc00);
    (*pcVar2)();
  }
  SVar21 = Swift::CustomStringConvertible::get_description();
  SVar29.bridgeObject = param_8;
  SVar29.str = (char *)ppuVar5;
  Swift::String::append(SVar21,SVar29);
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  SVar23.bridgeObject = (void *)0xe100000000000000;
  SVar23.str = (char *)0x78;
  SVar30.bridgeObject = param_8;
  SVar30.str = (char *)ppuVar5;
  Swift::String::append(SVar23,SVar30);
  if ((((ulong)dVar13 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10009bc04);
    (*pcVar2)();
  }
  if (dVar13 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10009bc08);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= dVar13) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10009bc0c);
    (*pcVar2)();
  }
  SVar21 = Swift::CustomStringConvertible::get_description();
  SVar31.bridgeObject = param_8;
  SVar31.str = (char *)ppuVar5;
  Swift::String::append(SVar21,SVar31);
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  IVar18 = self;
LAB_10009bbc0:
  *param_1 = uVar7;
  param_1[1] = uVar9;
  param_1[2] = IVar18;
  param_1[3] = dVar12;
  param_1[4] = dVar13;
  return;
}

