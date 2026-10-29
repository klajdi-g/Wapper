// rea decompile_all
// name: FUN_100269618
// address: 0x100269618
// body: available
// range: 0x100269618-0x100269f4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100269618(String *param_1)

{
  String *pSVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  String SVar6;
  code *pcVar7;
  bool bVar8;
  URL UVar9;
  undefined *puVar10;
  undefined *puVar11;
  ID self;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  NSArray *pNVar16;
  NSString *pNVar17;
  URL UVar18;
  Hasher into;
  Published *pPVar19;
  void *pvVar20;
  long lVar21;
  long extraout_x8;
  long lVar22;
  ulong uVar23;
  String *pSVar24;
  long extraout_x12;
  long extraout_x12_00;
  long *unaff_x20;
  _StringGuts _Var25;
  undefined **ppuVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  char *pcVar30;
  ulong uVar31;
  String SVar32;
  String local_110;
  String *local_100;
  void *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  ulong local_e0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined *local_70 [2];
  
  UVar9.unknown = (undefined *)0x0;
  FUN_10040211c();
  lVar21 = *(long *)(UVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar21 + 0x40));
  pcVar30 = (char *)((long)&local_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  pSVar24 = (String *)(pcVar30 + -extraout_x12);
  local_100 = pSVar24;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pSVar24 = (String *)((long)pSVar24 - extraout_x12_00);
  iVar5 = *(int *)(UVar9.unknown + 0x14);
  SVar32 = Foundation::URL::get_lastPathComponent(UVar9);
  pvVar20 = SVar32.bridgeObject;
  uVar27 = (ulong)SVar32.str & 0xffffffffffff;
  if (((ulong)pvVar20 & 0x2000000000000000) != 0) {
    uVar27 = (ulong)pvVar20 >> 0x38 & 0xf;
  }
  if (uVar27 == 0) {
    _swift_bridgeObjectRelease(pvVar20);
    SVar32 = *param_1;
    _swift_bridgeObjectRetain(param_1->bridgeObject);
  }
  pvVar20 = SVar32.bridgeObject;
  puVar12 = &DAT_10042d298;
  puVar10 = puVar12;
  _swift_getKeyPath(&DAT_10042d298);
  puVar13 = &DAT_10042d2c0;
  puVar11 = puVar13;
  _swift_getKeyPath(&DAT_10042d2c0);
  ppuVar26 = &local_b8;
  Combine::Published::_modify_subscript((Published *)((long)&param_1->str + (long)iVar5));
  local_110.bridgeObject = SVar32.str;
  local_f8 = pvVar20;
  FUN_100227384(SVar32.str,pvVar20);
  (*(code *)ppuVar26)(&local_b8,0);
  _swift_release(puVar10);
  _swift_release(puVar11);
  _swift_bridgeObjectRelease(pvVar20);
  self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  _swift_getKeyPath(&DAT_10042d298);
  _swift_getKeyPath(&DAT_10042d2c0);
  Combine::Published::_get_subscript(&local_b8);
  _swift_release(puVar12);
  _swift_release(puVar13);
  puVar12 = local_b8;
  ppuVar26 = *(undefined ***)(local_b8 + 0x10);
  if (ppuVar26 == (undefined **)0x0) {
    _swift_bridgeObjectRelease(local_b8);
    ppuVar14 = (undefined **)PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    ppuVar14 = ppuVar26;
    FUN_1001c5970(ppuVar26,0);
    ppuVar15 = &local_b8;
    FUN_1001aacf0(ppuVar15,ppuVar14 + 4,ppuVar26,puVar12);
    FUN_10002f6ec(local_b8,uStack_b0,local_a8,uStack_a0,local_98);
    if (ppuVar15 != ppuVar26) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100269824);
      (*pcVar7)();
    }
  }
  local_110.str = pcVar30;
  pNVar16 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(ppuVar14);
  pNVar17 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSUserDefaults::setObject_forKey_(self,pNVar16,pNVar17);
  puVar12 = &DAT_10042d1d8;
  _swift_getKeyPath(&DAT_10042d1d8);
  puVar13 = &DAT_10042d200;
  _swift_getKeyPath(&DAT_10042d200);
  Combine::Published::_get_subscript(&local_b8);
  _swift_release(puVar12);
  _swift_release(puVar13);
  local_e0 = *(ulong *)(local_b8 + 0x10);
  puVar12 = local_b8;
  if (local_e0 == 0) {
    local_f0 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    uVar27 = 0;
    local_f0 = PTR___swiftEmptyArrayStorage_100524190;
    local_e8 = local_b8;
    do {
      if (*(ulong *)(puVar12 + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100269f30);
        (*pcVar7)();
      }
      uVar31 = (ulong)*(byte *)(lVar21 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar21 + 0x50) ^ 0xffffffffffffffff);
      lVar29 = *(long *)(lVar21 + 0x48);
      FUN_100029504(puVar12 + lVar29 * uVar27 + uVar31,pSVar24,FUN_10040211c);
      puVar12 = &DAT_10042d298;
      _swift_getKeyPath(&DAT_10042d298);
      UVar18.unknown = &DAT_10042d2c0;
      _swift_getKeyPath();
      Combine::Published::_get_subscript(&local_b8,unaff_x20,puVar12,UVar18.unknown);
      _swift_release(puVar12);
      _swift_release();
      puVar12 = local_b8;
      SVar32 = Foundation::URL::get_lastPathComponent(UVar18);
      pvVar20 = SVar32.bridgeObject;
      uVar28 = (ulong)SVar32.str & 0xffffffffffff;
      if (((ulong)pvVar20 & 0x2000000000000000) != 0) {
        uVar28 = (ulong)pvVar20 >> 0x38 & 0xf;
      }
      if (uVar28 == 0) {
        _swift_bridgeObjectRelease(pvVar20);
        pvVar20 = pSVar24->bridgeObject;
        SVar32 = *pSVar24;
        _swift_bridgeObjectRetain(pvVar20);
        lVar22 = *(long *)(puVar12 + 0x10);
      }
      else {
        lVar22 = *(long *)(puVar12 + 0x10);
      }
      if (lVar22 != 0) {
        pvVar20 = SVar32.bridgeObject;
        Swift::Hasher::init(*(__int64 *)(puVar12 + 0x28));
        into.unknown = (undefined *)&local_b8;
        Swift::String::hash(into,SVar32);
        uVar28 = Swift::Hasher::_finalize(into);
        uVar23 = -1L << ((ulong)(byte)puVar12[0x20] & 0x3f);
        uVar28 = uVar28 & (uVar23 ^ 0xffffffffffffffff);
        if ((*(ulong *)(puVar12 + (uVar28 >> 6) * 8 + 0x38) >> (uVar28 & 0x3f) & 1) != 0) {
          do {
            pSVar1 = (String *)(*(long *)(puVar12 + 0x30) + uVar28 * 0x10);
            if ((SVar32 == *pSVar1) ||
               (bVar8 = Swift::_stringCompareWithSmolCheck
                                  ((_StringGuts)pSVar1->str,(_StringGuts)pSVar1->bridgeObject,
                                   (_StringComparisonResult)(__int8)SVar32.str), bVar8)) {
              _swift_bridgeObjectRelease(pvVar20);
              _swift_bridgeObjectRelease(puVar12);
              puVar12 = local_f0;
              puVar13 = local_f0;
              _swift_isUniquelyReferenced_nonNull_native();
              local_70[0] = puVar12;
              if (((ulong)puVar13 & 1) == 0) {
                FUN_1001c5c4c(0,*(long *)(puVar12 + 0x10) + 1,1);
              }
              puVar12 = local_e8;
              uVar28 = *(ulong *)(local_70[0] + 0x10);
              if (*(ulong *)(local_70[0] + 0x18) >> 1 <= uVar28) {
                FUN_1001c5c4c(1 < *(ulong *)(local_70[0] + 0x18),uVar28 + 1,1);
              }
              *(ulong *)(local_70[0] + 0x10) = uVar28 + 1;
              local_f0 = local_70[0];
              FUN_100007e64(pSVar24,local_70[0] + uVar28 * lVar29 + uVar31,FUN_10040211c);
              goto LAB_100269948;
            }
            uVar28 = uVar28 + 1 & ~uVar23;
          } while ((*(ulong *)(puVar12 + (uVar28 >> 6) * 8 + 0x38) >> (uVar28 & 0x3f) & 1) != 0);
        }
      }
      _swift_bridgeObjectRelease(pvVar20);
      _swift_bridgeObjectRelease(puVar12);
      FUN_100029548(pSVar24,FUN_10040211c);
      puVar12 = local_e8;
LAB_100269948:
      uVar27 = uVar27 + 1;
    } while (uVar27 != local_e0);
  }
  _swift_bridgeObjectRelease(puVar12);
  puVar12 = &DAT_10042d328;
  _swift_getKeyPath(&DAT_10042d328);
  pPVar19 = (Published *)&DAT_10042d350;
  _swift_getKeyPath(&DAT_10042d350);
  local_b8 = local_f0;
  _swift_retain(unaff_x20);
  Combine::Published::_set_subscript(pPVar19,&local_b8,unaff_x20,puVar12,pPVar19);
  puVar12 = &DAT_10042d1d8;
  _swift_getKeyPath(&DAT_10042d1d8);
  puVar13 = &DAT_10042d200;
  _swift_getKeyPath(&DAT_10042d200);
  Combine::Published::_get_subscript(&local_b8,unaff_x20,puVar12,puVar13);
  _swift_release(puVar12);
  _swift_release(puVar13);
  puVar12 = local_b8;
  uVar27 = *(ulong *)(local_b8 + 0x10);
  if (uVar27 == 0) {
    _swift_bridgeObjectRelease(local_f8);
    _swift_bridgeObjectRelease(puVar12);
  }
  else {
    uVar28 = 0;
    uVar31 = (ulong)*(byte *)(lVar21 + 0x50) + 0x20 &
             ((ulong)*(byte *)(lVar21 + 0x50) ^ 0xffffffffffffffff);
    pSVar24 = local_100;
    do {
      if (*(ulong *)(puVar12 + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100269f34);
        (*pcVar7)();
      }
      lVar29 = *(long *)(lVar21 + 0x48) * uVar28;
      UVar18.unknown = puVar12 + lVar29 + uVar31;
      FUN_100029504(UVar18.unknown,pSVar24,FUN_10040211c);
      SVar32 = Foundation::URL::get_lastPathComponent(UVar18);
      pvVar20 = SVar32.bridgeObject;
      uVar23 = (ulong)SVar32.str & 0xffffffffffff;
      if (((ulong)pvVar20 & 0x2000000000000000) != 0) {
        uVar23 = (ulong)pvVar20 >> 0x38 & 0xf;
      }
      if (uVar23 == 0) {
        _swift_bridgeObjectRelease(pvVar20);
        SVar32 = *pSVar24;
        _swift_bridgeObjectRetain(pSVar24->bridgeObject);
      }
      SVar6.bridgeObject = local_f8;
      SVar6.str = local_110.bridgeObject;
      _Var25.unknown = SVar32.bridgeObject;
      if (SVar32 == SVar6) {
        _swift_bridgeObjectRelease(_Var25.unknown);
        FUN_100029548(local_100,FUN_10040211c);
LAB_100269d2c:
        _swift_bridgeObjectRelease(local_f8);
        _swift_bridgeObjectRelease(puVar12);
        puVar12 = &DAT_10042d1d8;
        _swift_getKeyPath(&DAT_10042d1d8);
        puVar13 = &DAT_10042d200;
        _swift_getKeyPath(&DAT_10042d200);
        Combine::Published::_get_subscript(&local_b8,unaff_x20,puVar12,puVar13);
        _swift_release(puVar12);
        _swift_release(puVar13);
        puVar12 = local_b8;
        pcVar30 = local_110.str;
        if (*(ulong *)(local_b8 + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100269f38);
          (*pcVar7)();
        }
        FUN_100029504(local_b8 + lVar29 + uVar31,local_110.str,FUN_10040211c);
        _swift_bridgeObjectRelease(puVar12);
        lVar21 = *(long *)(pcVar30 + *(int *)(UVar9.unknown + 0x20));
        FUN_100029548(pcVar30,FUN_10040211c);
        uVar27 = lVar21 - 1;
        if (SBORROW8(lVar21,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100269f3c);
          (*pcVar7)();
        }
        puVar12 = &DAT_10042d1d8;
        _swift_getKeyPath(&DAT_10042d1d8);
        puVar13 = &DAT_10042d200;
        _swift_getKeyPath(&DAT_10042d200);
        Combine::Published::_get_subscript(&local_b8,unaff_x20,puVar12,puVar13);
        _swift_release(puVar12);
        _swift_release(puVar13);
        puVar12 = local_b8;
        puVar13 = local_b8;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar13 & 1) == 0) {
          FUN_100287238();
        }
        if (*(ulong *)(puVar12 + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100269f50);
          (*pcVar7)();
        }
        *(ulong *)(puVar12 + (long)*(int *)(UVar9.unknown + 0x20) + lVar29 + uVar31) =
             uVar27 & ((long)uVar27 >> 0x3f ^ 0xffffffffffffffffU);
        pPVar19 = (Published *)&DAT_10042d1d8;
        _swift_getKeyPath(&DAT_10042d1d8);
        puVar13 = &DAT_10042d200;
        _swift_getKeyPath(&DAT_10042d200);
        local_70[0] = puVar12;
        _swift_retain(unaff_x20);
        Combine::Published::_set_subscript(pPVar19,local_70,unaff_x20,pPVar19,puVar13);
        puVar2 = (undefined8 *)((long)unaff_x20 + _TtC7Wallper17VideoLibraryStore::lookupCache);
        uVar3 = *puVar2;
        uVar4 = puVar2[1];
        *puVar2 = 0;
        puVar2[1] = 0;
        FUN_10027f5e8(uVar3,uVar4);
        goto LAB_100269eac;
      }
      bVar8 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar32.str,_Var25,
                         (_StringComparisonResult)(__int8)local_110.bridgeObject);
      _swift_bridgeObjectRelease(_Var25.unknown);
      pSVar24 = local_100;
      FUN_100029548(local_100,FUN_10040211c);
      if (bVar8) goto LAB_100269d2c;
      uVar28 = uVar28 + 1;
    } while (uVar27 != uVar28);
    _swift_bridgeObjectRelease(local_f8);
    _swift_bridgeObjectRelease(puVar12);
  }
LAB_100269eac:
  puVar12 = &DAT_10042d5e8;
  _swift_getKeyPath(&DAT_10042d5e8);
  puVar13 = &DAT_10042d610;
  _swift_getKeyPath(&DAT_10042d610);
  ppuVar26 = &local_b8;
  Combine::Published::_modify_subscript();
  *unaff_x20 = *unaff_x20 + 1;
  (*(code *)ppuVar26)(&local_b8,0);
  _swift_release(puVar12);
  _swift_release(puVar13);
  return;
}

