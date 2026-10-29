// rea decompile_all
// name: FUN_100269f50
// address: 0x100269f50
// body: available
// range: 0x100269f50-0x10026a7b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100269f50(String *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  String SVar5;
  code *pcVar6;
  bool bVar7;
  URL UVar8;
  undefined *puVar9;
  undefined *puVar10;
  ID self;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  NSArray *pNVar15;
  NSString *pNVar16;
  URL UVar17;
  Hasher into;
  Published *pPVar18;
  void *pvVar19;
  long lVar20;
  long extraout_x8;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long extraout_x12;
  long *unaff_x20;
  _StringGuts _Var25;
  ulong uVar26;
  long lVar27;
  undefined **ppuVar28;
  String *pSVar29;
  ulong uVar30;
  String SVar31;
  String local_110;
  void *local_100;
  undefined *local_f8;
  undefined *local_f0;
  String *local_e8;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined *local_78;
  undefined8 local_70;
  
  UVar8.unknown = (undefined *)0x0;
  FUN_10040211c();
  lVar20 = *(long *)(UVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  pSVar29 = (String *)((long)&local_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_110.bridgeObject = pSVar29;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pSVar29 = (String *)((long)pSVar29 - extraout_x12);
  iVar4 = *(int *)(UVar8.unknown + 0x14);
  SVar31 = Foundation::URL::get_lastPathComponent(UVar8);
  pvVar19 = SVar31.bridgeObject;
  uVar21 = (ulong)SVar31.str & 0xffffffffffff;
  if (((ulong)pvVar19 & 0x2000000000000000) != 0) {
    uVar21 = (ulong)pvVar19 >> 0x38 & 0xf;
  }
  if (uVar21 == 0) {
    _swift_bridgeObjectRelease(pvVar19);
    SVar31 = *param_1;
    _swift_bridgeObjectRetain(param_1->bridgeObject);
  }
  pvVar19 = SVar31.bridgeObject;
  puVar11 = &DAT_10042d298;
  puVar9 = puVar11;
  _swift_getKeyPath(&DAT_10042d298);
  puVar12 = &DAT_10042d2c0;
  puVar10 = puVar12;
  _swift_getKeyPath(&DAT_10042d2c0);
  _swift_bridgeObjectRetain(pvVar19);
  ppuVar28 = &local_c0;
  Combine::Published::_modify_subscript((Published *)((long)&param_1->str + (long)iVar4));
  local_110.str = SVar31.str;
  local_100 = pvVar19;
  FUN_1001ca054(&local_78,SVar31.str,pvVar19);
  (*(code *)ppuVar28)(&local_c0,0);
  _swift_release(puVar9);
  _swift_release(puVar10);
  _swift_bridgeObjectRelease(local_70);
  self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  _swift_getKeyPath(&DAT_10042d298);
  _swift_getKeyPath(&DAT_10042d2c0);
  Combine::Published::_get_subscript(&local_c0);
  _swift_release(puVar11);
  _swift_release(puVar12);
  puVar11 = local_c0;
  ppuVar28 = *(undefined ***)(local_c0 + 0x10);
  if (ppuVar28 == (undefined **)0x0) {
    _swift_bridgeObjectRelease(local_c0);
    ppuVar13 = (undefined **)PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    ppuVar13 = ppuVar28;
    FUN_1001c5970(ppuVar28,0);
    ppuVar14 = &local_c0;
    FUN_1001aacf0(ppuVar14,ppuVar13 + 4,ppuVar28,puVar11);
    FUN_10002f6ec(local_c0,uStack_b8,local_b0,uStack_a8,local_a0);
    if (ppuVar14 != ppuVar28) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10026a144);
      (*pcVar6)();
    }
  }
  pNVar15 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(ppuVar13);
  pNVar16 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSUserDefaults::setObject_forKey_(self,pNVar15,pNVar16);
  puVar11 = &DAT_10042d1d8;
  _swift_getKeyPath(&DAT_10042d1d8);
  puVar12 = &DAT_10042d200;
  _swift_getKeyPath(&DAT_10042d200);
  Combine::Published::_get_subscript(&local_c0);
  _swift_release(puVar11);
  _swift_release(puVar12);
  uVar21 = *(ulong *)(local_c0 + 0x10);
  if (uVar21 == 0) {
    local_f8 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    uVar26 = 0;
    local_f8 = PTR___swiftEmptyArrayStorage_100524190;
    local_f0 = local_c0;
    local_e8 = pSVar29;
    do {
      if (*(ulong *)(local_f0 + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10026a798);
        (*pcVar6)();
      }
      uVar30 = (ulong)*(byte *)(lVar20 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar20 + 0x50) ^ 0xffffffffffffffff);
      lVar27 = *(long *)(lVar20 + 0x48);
      FUN_100029504(local_f0 + lVar27 * uVar26 + uVar30,pSVar29,FUN_10040211c);
      puVar11 = &DAT_10042d298;
      _swift_getKeyPath(&DAT_10042d298);
      UVar17.unknown = &DAT_10042d2c0;
      _swift_getKeyPath();
      Combine::Published::_get_subscript(&local_c0,unaff_x20,puVar11,UVar17.unknown);
      _swift_release(puVar11);
      _swift_release();
      puVar11 = local_c0;
      SVar31 = Foundation::URL::get_lastPathComponent(UVar17);
      pvVar19 = SVar31.bridgeObject;
      uVar24 = (ulong)SVar31.str & 0xffffffffffff;
      if (((ulong)pvVar19 & 0x2000000000000000) != 0) {
        uVar24 = (ulong)pvVar19 >> 0x38 & 0xf;
      }
      if (uVar24 == 0) {
        _swift_bridgeObjectRelease(pvVar19);
        pvVar19 = pSVar29->bridgeObject;
        SVar31 = *pSVar29;
        _swift_bridgeObjectRetain(pvVar19);
        lVar22 = *(long *)(puVar11 + 0x10);
      }
      else {
        lVar22 = *(long *)(puVar11 + 0x10);
      }
      if (lVar22 != 0) {
        pvVar19 = SVar31.bridgeObject;
        Swift::Hasher::init(*(__int64 *)(puVar11 + 0x28));
        into.unknown = (undefined *)&local_c0;
        Swift::String::hash(into,SVar31);
        uVar24 = Swift::Hasher::_finalize(into);
        uVar23 = -1L << ((ulong)(byte)puVar11[0x20] & 0x3f);
        uVar24 = uVar24 & (uVar23 ^ 0xffffffffffffffff);
        if ((*(ulong *)(puVar11 + (uVar24 >> 6) * 8 + 0x38) >> (uVar24 & 0x3f) & 1) != 0) {
          do {
            pSVar29 = (String *)(*(long *)(puVar11 + 0x30) + uVar24 * 0x10);
            if ((SVar31 == *pSVar29) ||
               (bVar7 = Swift::_stringCompareWithSmolCheck
                                  ((_StringGuts)pSVar29->str,(_StringGuts)pSVar29->bridgeObject,
                                   (_StringComparisonResult)(__int8)SVar31.str), bVar7)) {
              _swift_bridgeObjectRelease(pvVar19);
              _swift_bridgeObjectRelease(puVar11);
              puVar11 = local_f8;
              puVar12 = local_f8;
              _swift_isUniquelyReferenced_nonNull_native();
              local_78 = puVar11;
              if (((ulong)puVar12 & 1) == 0) {
                FUN_1001c5c4c(0,*(long *)(puVar11 + 0x10) + 1,1);
              }
              pSVar29 = local_e8;
              uVar24 = *(ulong *)(local_78 + 0x10);
              if (*(ulong *)(local_78 + 0x18) >> 1 <= uVar24) {
                FUN_1001c5c4c(1 < *(ulong *)(local_78 + 0x18),uVar24 + 1,1);
              }
              *(ulong *)(local_78 + 0x10) = uVar24 + 1;
              local_f8 = local_78;
              FUN_100007e64(pSVar29,local_78 + uVar24 * lVar27 + uVar30,FUN_10040211c);
              goto LAB_10026a260;
            }
            uVar24 = uVar24 + 1 & ~uVar23;
          } while ((*(ulong *)(puVar11 + (uVar24 >> 6) * 8 + 0x38) >> (uVar24 & 0x3f) & 1) != 0);
        }
      }
      _swift_bridgeObjectRelease(pvVar19);
      _swift_bridgeObjectRelease(puVar11);
      pSVar29 = local_e8;
      FUN_100029548(local_e8,FUN_10040211c);
LAB_10026a260:
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar21);
  }
  _swift_bridgeObjectRelease();
  puVar11 = &DAT_10042d328;
  _swift_getKeyPath(&DAT_10042d328);
  pPVar18 = (Published *)&DAT_10042d350;
  _swift_getKeyPath(&DAT_10042d350);
  local_c0 = local_f8;
  _swift_retain(unaff_x20);
  Combine::Published::_set_subscript(pPVar18,&local_c0,unaff_x20,puVar11,pPVar18);
  puVar11 = &DAT_10042d1d8;
  _swift_getKeyPath(&DAT_10042d1d8);
  puVar12 = &DAT_10042d200;
  _swift_getKeyPath(&DAT_10042d200);
  Combine::Published::_get_subscript(&local_c0,unaff_x20,puVar11,puVar12);
  _swift_release(puVar11);
  _swift_release(puVar12);
  puVar11 = local_c0;
  uVar21 = *(ulong *)(local_c0 + 0x10);
  if (uVar21 != 0) {
    uVar26 = 0;
    uVar24 = (ulong)*(byte *)(lVar20 + 0x50) + 0x20 &
             ((ulong)*(byte *)(lVar20 + 0x50) ^ 0xffffffffffffffff);
    pSVar29 = local_110.bridgeObject;
    do {
      if (*(ulong *)(puVar11 + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10026a79c);
        (*pcVar6)();
      }
      lVar27 = *(long *)(lVar20 + 0x48) * uVar26;
      UVar17.unknown = puVar11 + lVar27 + uVar24;
      FUN_100029504(UVar17.unknown,pSVar29,FUN_10040211c);
      SVar31 = Foundation::URL::get_lastPathComponent(UVar17);
      pvVar19 = SVar31.bridgeObject;
      uVar30 = (ulong)SVar31.str & 0xffffffffffff;
      if (((ulong)pvVar19 & 0x2000000000000000) != 0) {
        uVar30 = (ulong)pvVar19 >> 0x38 & 0xf;
      }
      if (uVar30 == 0) {
        _swift_bridgeObjectRelease(pvVar19);
        SVar31 = *pSVar29;
        _swift_bridgeObjectRetain(pSVar29->bridgeObject);
      }
      SVar5.bridgeObject = local_100;
      SVar5.str = local_110.str;
      _Var25.unknown = SVar31.bridgeObject;
      if (SVar31 == SVar5) {
        _swift_bridgeObjectRelease(_Var25.unknown);
        FUN_100029548(local_110.bridgeObject,FUN_10040211c);
LAB_10026a62c:
        _swift_bridgeObjectRelease(puVar11);
        _swift_bridgeObjectRelease(local_100);
        puVar11 = &DAT_10042d1d8;
        _swift_getKeyPath(&DAT_10042d1d8);
        puVar12 = &DAT_10042d200;
        _swift_getKeyPath(&DAT_10042d200);
        Combine::Published::_get_subscript(&local_c0,unaff_x20,puVar11,puVar12);
        _swift_release(puVar11);
        _swift_release(puVar12);
        puVar11 = local_c0;
        puVar12 = local_c0;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar12 & 1) == 0) {
          FUN_100287238();
        }
        if (*(ulong *)(puVar11 + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10026a7b0);
          (*pcVar6)();
        }
        lVar27 = lVar27 + uVar24;
        if (SCARRY8(*(long *)(puVar11 + *(int *)(UVar8.unknown + 0x20) + lVar27),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10026a7b4);
          (*pcVar6)();
        }
        *(long *)(puVar11 + *(int *)(UVar8.unknown + 0x20) + lVar27) =
             *(long *)(puVar11 + *(int *)(UVar8.unknown + 0x20) + lVar27) + 1;
        pPVar18 = (Published *)&DAT_10042d1d8;
        _swift_getKeyPath(&DAT_10042d1d8);
        puVar12 = &DAT_10042d200;
        _swift_getKeyPath(&DAT_10042d200);
        local_78 = puVar11;
        _swift_retain(unaff_x20);
        Combine::Published::_set_subscript(pPVar18,&local_78,unaff_x20,pPVar18,puVar12);
        puVar1 = (undefined8 *)((long)unaff_x20 + _TtC7Wallper17VideoLibraryStore::lookupCache);
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        *puVar1 = 0;
        puVar1[1] = 0;
        FUN_10027f5e8(uVar2,uVar3);
        goto LAB_10026a714;
      }
      bVar7 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar31.str,_Var25,
                         (_StringComparisonResult)(__int8)local_110.str);
      _swift_bridgeObjectRelease(_Var25.unknown);
      pSVar29 = local_110.bridgeObject;
      FUN_100029548(local_110.bridgeObject,FUN_10040211c);
      if (bVar7) goto LAB_10026a62c;
      uVar26 = uVar26 + 1;
    } while (uVar21 != uVar26);
  }
  _swift_bridgeObjectRelease(local_100);
  _swift_bridgeObjectRelease(puVar11);
LAB_10026a714:
  puVar11 = &DAT_10042d5e8;
  _swift_getKeyPath(&DAT_10042d5e8);
  puVar12 = &DAT_10042d610;
  _swift_getKeyPath(&DAT_10042d610);
  ppuVar28 = &local_c0;
  Combine::Published::_modify_subscript();
  *unaff_x20 = *unaff_x20 + 1;
  (*(code *)ppuVar28)(&local_c0,0);
  _swift_release(puVar11);
  _swift_release(puVar12);
  return;
}

