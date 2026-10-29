// rea decompile_all
// name: FUN_100101820
// address: 0x100101820
// body: available
// range: 0x100101820-0x100101d47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100101820(double param_1,double param_2,double param_3,char *param_4,_StringGuts param_5,
                  char *param_6,void *param_7)

{
  long lVar1;
  long *plVar2;
  _CocoaArrayWrapper _Var3;
  long lVar4;
  _StringGuts _Var5;
  _StringGuts _Var6;
  code *pcVar7;
  bool bVar8;
  NSString *pNVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  NSDictionary *pNVar13;
  ulong self;
  ID IVar14;
  char *pcVar15;
  ID unaff_x20;
  long lVar16;
  ulong uVar17;
  _ArrayBuffer _Var18;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
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
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  _StringGuts local_98;
  _StringGuts _Stack_90;
  
  local_98.unknown = (undefined *)0x0;
  _Stack_90.unknown = (undefined *)0xe000000000000000;
  pcVar15 = param_6;
  Swift::_StringGuts::grow(0x11,param_5);
  SVar21.bridgeObject = param_5.unknown;
  SVar21.str = param_4;
  SVar26.bridgeObject = param_7;
  SVar26.str = pcVar15;
  Swift::String::append(SVar21,SVar26);
  SVar20.bridgeObject = (void *)0xe100000000000000;
  SVar20.str = (char *)0x7c;
  SVar27.bridgeObject = param_7;
  SVar27.str = pcVar15;
  Swift::String::append(SVar20,SVar27);
  objc_stub::fontName((ID)param_6);
  SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar28.bridgeObject = param_7;
  SVar28.str = pcVar15;
  Swift::String::append(SVar21,SVar28);
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  SVar22.bridgeObject = (void *)0xe100000000000000;
  SVar22.str = (char *)0x7c;
  SVar29.bridgeObject = param_7;
  SVar29.str = pcVar15;
  Swift::String::append(SVar22,SVar29);
  objc_stub::pointSize((ID)param_6);
  SVar21 = double::get_description(extraout_d0);
  SVar30.bridgeObject = param_7;
  SVar30.str = pcVar15;
  Swift::String::append(SVar21,SVar30);
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  SVar23.bridgeObject = (void *)0xe100000000000000;
  SVar23.str = (char *)0x7c;
  SVar31.bridgeObject = param_7;
  SVar31.str = pcVar15;
  Swift::String::append(SVar23,SVar31);
  SVar21 = double::get_description(param_1);
  SVar32.bridgeObject = param_7;
  SVar32.str = pcVar15;
  Swift::String::append(SVar21,SVar32);
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  SVar24.bridgeObject = (void *)0xe100000000000000;
  SVar24.str = (char *)0x7c;
  SVar33.bridgeObject = param_7;
  SVar33.str = pcVar15;
  Swift::String::append(SVar24,SVar33);
  SVar21 = double::get_description(param_2);
  SVar34.bridgeObject = param_7;
  SVar34.str = pcVar15;
  Swift::String::append(SVar21,SVar34);
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  SVar25.bridgeObject = (void *)0xe100000000000000;
  SVar25.str = (char *)0x7c;
  SVar35.bridgeObject = param_7;
  SVar35.str = pcVar15;
  Swift::String::append(SVar25,SVar35);
  double::_write((undefined *)&local_98,param_3);
  _Var6.unknown = _Stack_90.unknown;
  _Var5.unknown = local_98.unknown;
  plVar2 = (long *)(unaff_x20 +
                   _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::key);
  puVar10 = (undefined *)plVar2[1];
  if (((local_98.unknown == (undefined *)*plVar2) && (_Stack_90.unknown == puVar10)) ||
     (bVar8 = Swift::_stringCompareWithSmolCheck
                        (local_98,_Stack_90,(_StringComparisonResult)(__int8)(undefined *)*plVar2),
     bVar8)) {
    _swift_bridgeObjectRelease(_Var6.unknown);
  }
  else {
    *plVar2 = (long)_Var5.unknown;
    plVar2[1] = (long)_Var6.unknown;
    _swift_bridgeObjectRelease(puVar10);
    *(double *)
     (unaff_x20 + _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::pause) =
         param_3;
    *(double *)
     (unaff_x20 + _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::speed) =
         param_2;
    pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    puVar10 = &DAT_100552a10;
    FUN_100002f94(&DAT_100552a10,&DAT_100424f88);
    _swift_initStackObject();
    *(undefined8 *)(puVar10 + 0x18) = 2;
    *(undefined8 *)(puVar10 + 0x10) = 1;
    *(undefined8 *)(puVar10 + 0x20) = *(undefined8 *)PTR__NSFontAttributeName_1005212f0;
    uVar11 = 0;
    FUN_100044230(0,&DAT_100552a18,&PTR__OBJC_CLASS___NSFont_10053f970);
    *(undefined8 *)(puVar10 + 0x40) = uVar11;
    *(char **)(puVar10 + 0x28) = param_6;
    puVar12 = puVar10;
    FUN_100006c18(puVar10);
    _swift_setDeallocating(puVar10);
    FUN_10002a29c(puVar10 + 0x20,&DAT_10054a6d8,&DAT_10041b680);
    FUN_100008840(0);
    FUN_100102a84();
    pNVar13 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar12);
    objc_stub::sizeWithAttributes_((ID)pNVar9,pNVar13);
    dVar19 = (double)(long)extraout_d0_00;
    objc_stub::ascender((ID)param_6);
    objc_stub::descender((ID)param_6);
    lVar4 = _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::distance;
    *(double *)
     (unaff_x20 + _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::distance) =
         param_1 + dVar19;
    CATransaction::begin((ID)&_OBJC_CLASS___CATransaction);
    CATransaction::setDisableActions_((ID)&_OBJC_CLASS___CATransaction,1);
    _Var18.unknown =
         *(undefined **)
          (unaff_x20 + _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::copies)
    ;
    if ((ulong)_Var18.unknown >> 0x3e == 0) {
      lVar16 = *(long *)(((ulong)_Var18.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var3.unknown = _Var18.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var18.unknown) {
        _Var3.unknown = _Var18.unknown;
      }
      lVar16 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
    }
    if (lVar16 != 0) {
      uVar17 = 0;
      uVar11 = *(undefined8 *)PTR__kCATruncationNone_100521ac0;
      do {
        if (((ulong)_Var18.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)_Var18.unknown & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100101cc0);
            (*pcVar7)();
          }
          self = *(ulong *)(_Var18.unknown + uVar17 * 8 + 0x20);
        }
        else {
          self = uVar17;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar17,_Var18);
        }
        lVar1 = uVar17 + 1;
        if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100101cbc);
          (*pcVar7)();
        }
        pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        objc_stub::setString_(self,pNVar9);
        objc_stub::setFont_(self,param_6);
        objc_stub::pointSize((ID)param_6);
        objc_stub::setFontSize_(self);
        IVar14 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
        IVar14 = NSColor::CGColor(IVar14);
        objc_stub::setForegroundColor_(self,IVar14);
        objc_stub::setWrapped_(self,0);
        objc_stub::setTruncationMode_(self,uVar11);
        objc_stub::setFrame_
                  (self,*(double *)(unaff_x20 + lVar4) * (double)(long)uVar17,0,dVar19,
                   (long)(extraout_d0_01 - extraout_d0_02));
        uVar17 = uVar17 + 1;
      } while (lVar1 != lVar16);
    }
    objc_stub::setFrame_
              (*(ID *)(unaff_x20 +
                      _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::strip),0
               ,0,dVar19 + *(double *)(unaff_x20 + lVar4),(long)(extraout_d0_01 - extraout_d0_02));
    CATransaction::commit((ID)&_OBJC_CLASS___CATransaction);
    objc_stub::setNeedsLayout_(unaff_x20,1);
    FUN_100102158();
  }
  return;
}

