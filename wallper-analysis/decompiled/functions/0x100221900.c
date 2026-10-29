// rea decompile_all
// name: FUN_100221900
// address: 0x100221900
// body: available
// range: 0x100221900-0x10022212f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100221900(void)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  URL UVar6;
  _StringGuts _Var7;
  CharacterSet CVar8;
  _StringGuts _Var9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  void *pvVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  Published *pPVar18;
  code *pcVar19;
  undefined8 uVar20;
  long unaff_x22;
  undefined8 uVar21;
  undefined8 uVar22;
  CharacterSet CVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String local_70;
  
  uVar17 = *(undefined8 *)(unaff_x22 + 0x78);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xe0));
  FUN_100219cf4(0);
  puVar4 = &DAT_10042b588;
  _swift_getKeyPath(&DAT_10042b588);
  puVar5 = &DAT_10042b5b0;
  _swift_getKeyPath(&DAT_10042b5b0);
  Combine::Published::_get_subscript(unaff_x22 + 0x10,uVar17,puVar4,puVar5);
  _swift_release(puVar5);
  _swift_release(puVar4);
  local_70.bridgeObject = *(void **)(unaff_x22 + 0x18);
  if (local_70.bridgeObject != (void *)0x0) {
    local_70.str = *(char **)(unaff_x22 + 0x10);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x78);
    puVar4 = &DAT_10042b5e8;
    _swift_getKeyPath(&DAT_10042b5e8);
    puVar5 = &DAT_10042b610;
    _swift_getKeyPath(&DAT_10042b610);
    Combine::Published::_get_subscript(unaff_x22 + 0x70,uVar17,puVar4,puVar5);
    _swift_release(puVar5);
    _swift_release(puVar4);
    lVar10 = *(long *)(unaff_x22 + 0x70);
    uVar11 = *(ulong *)(lVar10 + 0x10);
    if (uVar11 != 0) {
      uVar14 = 0;
      lVar2 = *(long *)(unaff_x22 + 0xc0);
      lVar13 = *(long *)(unaff_x22 + 0xa8);
      uVar12 = (ulong)*(byte *)(lVar2 + 0x50);
      do {
        if (*(ulong *)(lVar10 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x100222128);
          (*pcVar19)();
        }
        CVar23.unknown = *(undefined **)(unaff_x22 + 0xb0);
        uVar17 = *(undefined8 *)(unaff_x22 + 0xa0);
        UVar6.unknown =
             (undefined *)
             (lVar10 + (uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff)) +
             *(long *)(lVar2 + 0x48) * uVar14);
        FUN_10002f154(UVar6.unknown,*(undefined8 *)(unaff_x22 + 0xd8));
        SVar24 = Foundation::URL::get_lastPathComponent(UVar6);
        *(String *)(unaff_x22 + 0x30) = SVar24;
        Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)SVar24.str);
        FUN_100026df4();
        SVar25 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar23);
        CVar8.unknown = SVar25.bridgeObject;
        pcVar19 = *(code **)(lVar13 + 8);
        (*pcVar19)(CVar23.unknown,uVar17);
        _swift_bridgeObjectRelease(SVar24.bridgeObject);
        uVar1 = (ulong)SVar25.str & 0xffffffffffff;
        if (((ulong)CVar8.unknown & 0x2000000000000000) != 0) {
          uVar1 = (ulong)CVar8.unknown >> 0x38 & 0xf;
        }
        if (uVar1 == 0) {
          CVar23.unknown = *(undefined **)(unaff_x22 + 0xb0);
          uVar17 = *(undefined8 *)(unaff_x22 + 0xa0);
          _swift_bridgeObjectRelease();
          Foundation::CharacterSet::get_whitespacesAndNewlines(CVar8);
          SVar25 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar23);
          (*pcVar19)(CVar23.unknown,uVar17);
        }
        _Var9.unknown = SVar25.bridgeObject;
        uVar17 = *(undefined8 *)(unaff_x22 + 0xd8);
        if (SVar25 == local_70) {
          _swift_bridgeObjectRelease(_Var9.unknown);
          FUN_100029548(uVar17,FUN_10040211c);
LAB_100221bec:
          _swift_bridgeObjectRelease(lVar10);
          _swift_bridgeObjectRelease(local_70.bridgeObject);
          goto LAB_100221bfc;
        }
        bVar3 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar25.str,_Var9,
                           (_StringComparisonResult)(__int8)local_70.str);
        _swift_bridgeObjectRelease(_Var9.unknown);
        FUN_100029548(uVar17,FUN_10040211c);
        if (bVar3) goto LAB_100221bec;
        uVar14 = uVar14 + 1;
      } while (uVar11 != uVar14);
    }
    pPVar18 = *(Published **)(unaff_x22 + 0x78);
    _swift_bridgeObjectRelease(lVar10);
    _swift_bridgeObjectRelease(local_70.bridgeObject);
    puVar4 = &DAT_10042b588;
    _swift_getKeyPath(&DAT_10042b588);
    puVar5 = &DAT_10042b5b0;
    _swift_getKeyPath(&DAT_10042b5b0);
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0;
    _swift_retain(pPVar18);
    Combine::Published::_set_subscript(pPVar18,unaff_x22 + 0x40,pPVar18,puVar4,puVar5);
  }
LAB_100221bfc:
  uVar17 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar10 = *(long *)(unaff_x22 + 0x90);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x80);
  FUN_10021d764(uVar16);
  (**(code **)(lVar10 + 0x30))(uVar16,1,uVar17);
  if ((int)uVar16 == 1) {
    FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x80),&DAT_100553d90,&DAT_10041bf10);
    goto LAB_1002220c0;
  }
  _Var7.unknown = *(undefined **)(unaff_x22 + 0x98);
  _Var9.unknown = *(undefined **)(unaff_x22 + 0x80);
  (**(code **)(*(long *)(unaff_x22 + 0x90) + 0x20))
            (_Var7.unknown,_Var9.unknown,*(undefined8 *)(unaff_x22 + 0x88));
  Foundation::URL::_get_scheme((URL)_Var7.unknown);
  if (_Var9.unknown == (undefined *)0x0) {
LAB_100221dc8:
    uVar17 = *(undefined8 *)(unaff_x22 + 0x78);
    SVar25 = Foundation::URL::get_lastPathComponent((URL)_Var7.unknown);
    pvVar15 = SVar25.bridgeObject;
    puVar4 = &DAT_10042b5e8;
    _swift_getKeyPath(&DAT_10042b5e8);
    puVar5 = &DAT_10042b610;
    _swift_getKeyPath(&DAT_10042b610);
    Combine::Published::_get_subscript(unaff_x22 + 0x50,uVar17,puVar4,puVar5);
    _swift_release(puVar5);
    _swift_release(puVar4);
    lVar10 = *(long *)(unaff_x22 + 0x50);
    uVar11 = *(ulong *)(lVar10 + 0x10);
    if (uVar11 != 0) {
      uVar14 = 0;
      lVar2 = *(long *)(unaff_x22 + 0xc0);
      lVar13 = *(long *)(unaff_x22 + 0xa8);
      uVar12 = (ulong)*(byte *)(lVar2 + 0x50);
      do {
        if (*(ulong *)(lVar10 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x10022212c);
          (*pcVar19)();
        }
        CVar23.unknown = *(undefined **)(unaff_x22 + 0xb0);
        uVar17 = *(undefined8 *)(unaff_x22 + 0xa0);
        UVar6.unknown =
             (undefined *)
             (lVar10 + (uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff)) +
             *(long *)(lVar2 + 0x48) * uVar14);
        FUN_10002f154(UVar6.unknown,*(undefined8 *)(unaff_x22 + 200));
        SVar26 = Foundation::URL::get_lastPathComponent(UVar6);
        *(String *)(unaff_x22 + 0x20) = SVar26;
        Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)SVar26.str);
        FUN_100026df4();
        SVar24 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar23);
        CVar8.unknown = SVar24.bridgeObject;
        pcVar19 = *(code **)(lVar13 + 8);
        (*pcVar19)(CVar23.unknown,uVar17);
        _swift_bridgeObjectRelease(SVar26.bridgeObject);
        uVar1 = (ulong)SVar24.str & 0xffffffffffff;
        if (((ulong)CVar8.unknown & 0x2000000000000000) != 0) {
          uVar1 = (ulong)CVar8.unknown >> 0x38 & 0xf;
        }
        if (uVar1 == 0) {
          CVar23.unknown = *(undefined **)(unaff_x22 + 0xb0);
          uVar17 = *(undefined8 *)(unaff_x22 + 0xa0);
          _swift_bridgeObjectRelease();
          Foundation::CharacterSet::get_whitespacesAndNewlines(CVar8);
          SVar24 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar23);
          (*pcVar19)(CVar23.unknown,uVar17);
        }
        _Var9.unknown = SVar24.bridgeObject;
        uVar17 = *(undefined8 *)(unaff_x22 + 200);
        if (SVar24 == SVar25) {
          _swift_bridgeObjectRelease(_Var9.unknown);
          FUN_100029548(uVar17,FUN_10040211c);
LAB_100221fec:
          pPVar18 = *(Published **)(unaff_x22 + 0x78);
          _swift_bridgeObjectRelease(lVar10);
          _swift_bridgeObjectRelease(pvVar15);
          puVar4 = &DAT_10042b4f8;
          _swift_getKeyPath(&DAT_10042b4f8);
          puVar5 = &DAT_10042b520;
          _swift_getKeyPath(&DAT_10042b520);
          *(ulong *)(unaff_x22 + 0x58) = uVar14;
          _swift_retain(pPVar18);
          lVar10 = unaff_x22 + 0x58;
          goto LAB_100222090;
        }
        bVar3 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar24.str,_Var9,(_StringComparisonResult)(__int8)SVar25.str
                          );
        _swift_bridgeObjectRelease(_Var9.unknown);
        FUN_100029548(uVar17,FUN_10040211c);
        if (bVar3) goto LAB_100221fec;
        uVar14 = uVar14 + 1;
      } while (uVar11 != uVar14);
    }
    _swift_bridgeObjectRelease();
  }
  else {
    if ((_Var7.unknown == (undefined *)0x7463617265746e69) &&
       (_Var9.unknown == (undefined *)0xeb00000000657669)) {
      _swift_bridgeObjectRelease(0xeb00000000657669);
    }
    else {
      bVar3 = Swift::_stringCompareWithSmolCheck(_Var7,_Var9,(_StringComparisonResult)0x69);
      _swift_bridgeObjectRelease();
      _Var7.unknown = _Var9.unknown;
      if (!bVar3) goto LAB_100221dc8;
    }
    uVar17 = *(undefined8 *)(unaff_x22 + 0x78);
    puVar4 = &DAT_10042b5e8;
    _swift_getKeyPath(&DAT_10042b5e8);
    puVar5 = &DAT_10042b610;
    _swift_getKeyPath(&DAT_10042b610);
    Combine::Published::_get_subscript(unaff_x22 + 0x60,uVar17,puVar4,puVar5);
    _swift_release(puVar5);
    _swift_release(puVar4);
    pvVar15 = *(void **)(unaff_x22 + 0x60);
    uVar11 = *(ulong *)((long)pvVar15 + 0x10);
    if (uVar11 != 0) {
      uVar14 = 0;
      lVar10 = *(long *)(unaff_x22 + 0xc0);
      do {
        if (*(ulong *)((long)pvVar15 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x100222130);
          (*pcVar19)();
        }
        uVar12 = (ulong)*(byte *)(lVar10 + 0x50);
        UVar6.unknown =
             (undefined *)
             ((long)pvVar15 +
             *(long *)(lVar10 + 0x48) * uVar14 + (uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff)));
        FUN_10002f154(UVar6.unknown,*(undefined8 *)(unaff_x22 + 0xd0));
        SVar25 = Foundation::URL::get_absoluteString(UVar6);
        _Var9.unknown = SVar25.bridgeObject;
        SVar24 = Foundation::URL::get_absoluteString((URL)SVar25.str);
        uVar17 = *(undefined8 *)(unaff_x22 + 0xd0);
        if (SVar25 == SVar24) {
          _swift_bridgeObjectRelease(SVar24.bridgeObject);
          _swift_bridgeObjectRelease(_Var9.unknown);
          FUN_100029548(uVar17,FUN_10040211c);
LAB_100222054:
          pPVar18 = *(Published **)(unaff_x22 + 0x78);
          _swift_bridgeObjectRelease(pvVar15);
          puVar4 = &DAT_10042b4f8;
          _swift_getKeyPath(&DAT_10042b4f8);
          puVar5 = &DAT_10042b520;
          _swift_getKeyPath(&DAT_10042b520);
          *(ulong *)(unaff_x22 + 0x68) = uVar14;
          _swift_retain(pPVar18);
          lVar10 = unaff_x22 + 0x68;
LAB_100222090:
          Combine::Published::_set_subscript(pPVar18,lVar10,pPVar18,puVar4,puVar5);
          goto LAB_1002220a0;
        }
        bVar3 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar25.str,_Var9,(_StringComparisonResult)(__int8)SVar24.str
                          );
        _swift_bridgeObjectRelease(SVar24.bridgeObject);
        _swift_bridgeObjectRelease(_Var9.unknown);
        FUN_100029548(uVar17,FUN_10040211c);
        if (bVar3) goto LAB_100222054;
        uVar14 = uVar14 + 1;
      } while (uVar11 != uVar14);
    }
  }
  _swift_bridgeObjectRelease(pvVar15);
LAB_1002220a0:
  lVar10 = *(long *)(unaff_x22 + 0x90);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x88);
  FUN_100217d50();
  (**(code **)(lVar10 + 8))(uVar17,uVar16);
LAB_1002220c0:
  uVar17 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar16 = *(undefined8 *)(unaff_x22 + 200);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x80);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xd8));
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar22);
                    /* WARNING: Could not recover jumptable at 0x000100222120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

