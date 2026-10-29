// rea decompile_all
// name: FUN_1001ab460
// address: 0x1001ab460
// body: available
// range: 0x1001ab460-0x1001ab96f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1001ab460(void)

{
  String *pSVar1;
  undefined8 uVar2;
  char *pcVar3;
  _StringGuts _Var4;
  undefined8 uVar5;
  _StringGuts _Var6;
  String SVar7;
  code *pcVar8;
  bool bVar9;
  ID self;
  NSString *pNVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  Hasher into;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *local_68;
  
  self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  puVar11 = (undefined *)NSUserDefaults::stringArrayForKey_(self,pNVar10);
  if (puVar11 == (undefined *)0x0) {
    pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    puVar11 = (undefined *)NSUserDefaults::stringArrayForKey_(self,pNVar10);
    if (puVar11 == (undefined *)0x0) {
      if (DAT_100556098 != -1) {
        _swift_once(&DAT_100556098,FUN_10017e0fc);
      }
      puVar12 = DAT_100577cc8;
      _swift_bridgeObjectRetain(DAT_100577cc8);
    }
    else {
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      puVar12 = puVar11;
      FUN_10020c98c();
      _swift_bridgeObjectRelease(puVar11);
      if (DAT_1005560a0 != -1) {
        _swift_once(&DAT_1005560a0,FUN_10017d600);
      }
      puVar21 = DAT_100577cd0;
      lVar19 = DAT_100577cd0[2];
      puVar11 = PTR___swiftEmptyArrayStorage_100524190;
      if (lVar19 != 0) {
        local_b0 = PTR___swiftEmptyArrayStorage_100524190;
        FUN_1001c5bc4(0,lVar19,0);
        puVar11 = local_b0;
        do {
          uVar2 = puVar21[4];
          uVar5 = puVar21[5];
          uVar17 = *(ulong *)(puVar11 + 0x10);
          uVar16 = *(ulong *)(puVar11 + 0x18);
          local_b0 = puVar11;
          _swift_bridgeObjectRetain(uVar5);
          if (uVar16 >> 1 <= uVar17) {
            FUN_1001c5bc4(1 < uVar16,uVar17 + 1,1);
            puVar11 = local_b0;
          }
          *(ulong *)(puVar11 + 0x10) = uVar17 + 1;
          *(undefined8 *)(puVar11 + uVar17 * 0x10 + 0x20) = uVar2;
          *(undefined8 *)(puVar11 + uVar17 * 0x10 + 0x28) = uVar5;
          lVar19 = lVar19 + -1;
          puVar21 = puVar21 + 5;
        } while (lVar19 != 0);
      }
      FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
      _swift_initStaticObject();
      local_b0 = puVar11;
      FUN_10012f2d0();
      puVar11 = local_b0;
      puVar13 = local_b0;
      FUN_10020c98c();
      _swift_bridgeObjectRelease(puVar11);
      if (*(ulong *)(puVar13 + 0x10) >> 3 < *(ulong *)(puVar12 + 0x10)) {
        puVar11 = puVar12;
        FUN_1001a8804(puVar12,puVar13);
        local_68 = puVar11;
      }
      else {
        local_b0 = puVar13;
        FUN_1001a86c8(puVar12);
        local_68 = local_b0;
      }
      if (DAT_1005560e0 != -1) {
        _swift_once(&DAT_1005560e0,FUN_10017e27c);
      }
      lVar19 = DAT_1005560e8;
      puVar18 = (ulong *)(DAT_1005560e8 + 0x40);
      uVar16 = 1L << ((ulong)*(byte *)(DAT_1005560e8 + 0x20) & 0x3f);
      uVar17 = 0xffffffffffffffff;
      if ((*(byte *)(DAT_1005560e8 + 0x20) & 0x3f) < 6) {
        uVar17 = ~(-1L << (uVar16 & 0x3f));
      }
      uVar17 = uVar17 & *puVar18;
      _swift_bridgeObjectRetain(DAT_1005560e8);
      lVar20 = 0;
joined_r0x0001001ab76c:
      for (; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
        uVar14 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | lVar20 << 6;
        puVar11 = *(undefined **)(*(long *)(lVar19 + 0x38) + uVar14 * 8);
        if (*(long *)(puVar12 + 0x10) == 0) {
          _swift_bridgeObjectRetain(puVar11);
          uVar14 = *(ulong *)(puVar11 + 0x10);
        }
        else {
          pSVar1 = (String *)(*(long *)(lVar19 + 0x30) + uVar14 * 0x10);
          pcVar3 = pSVar1->str;
          puVar13 = pSVar1->bridgeObject;
          SVar7 = *pSVar1;
          Swift::Hasher::init(*(__int64 *)(puVar12 + 0x28));
          _swift_bridgeObjectRetain(puVar13);
          _swift_bridgeObjectRetain(puVar11);
          into.unknown = (undefined *)&local_b0;
          Swift::String::hash(into,SVar7);
          uVar14 = Swift::Hasher::_finalize(into);
          uVar15 = -1L << ((ulong)(byte)puVar12[0x20] & 0x3f);
          uVar14 = uVar14 & (uVar15 ^ 0xffffffffffffffff);
          if ((*(ulong *)(puVar12 + (uVar14 >> 6) * 8 + 0x38) >> (uVar14 & 0x3f) & 1) != 0) {
            do {
              puVar21 = (undefined8 *)(*(long *)(puVar12 + 0x30) + uVar14 * 0x10);
              _Var4.unknown = (undefined *)*puVar21;
              _Var6.unknown = (undefined *)puVar21[1];
              if ((_Var4.unknown == pcVar3 && _Var6.unknown == puVar13) ||
                 (bVar9 = Swift::_stringCompareWithSmolCheck
                                    (_Var4,_Var6,(_StringComparisonResult)(__int8)pcVar3), bVar9)) {
                _swift_bridgeObjectRelease(puVar11);
                puVar11 = puVar13;
                goto LAB_1001ab754;
              }
              uVar14 = uVar14 + 1 & ~uVar15;
            } while ((*(ulong *)(puVar12 + (uVar14 >> 6) * 8 + 0x38) >> (uVar14 & 0x3f) & 1) != 0);
          }
          _swift_bridgeObjectRelease(puVar13);
          uVar14 = *(ulong *)(puVar11 + 0x10);
        }
        if (uVar14 != 0) {
          uVar15 = 0;
          puVar21 = (undefined8 *)(puVar11 + 0x28);
          do {
            if (*(ulong *)(puVar11 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1001ab924);
              (*pcVar8)();
            }
            uVar15 = uVar15 + 1;
            uVar2 = puVar21[-1];
            uVar5 = *puVar21;
            _swift_bridgeObjectRetain(uVar5);
            FUN_1001ca054(&local_b0,uVar2,uVar5);
            _swift_bridgeObjectRelease(local_a8);
            puVar21 = puVar21 + 2;
          } while (uVar14 != uVar15);
        }
LAB_1001ab754:
        _swift_bridgeObjectRelease(puVar11);
      }
      bVar9 = SCARRY8(lVar20,1);
      lVar20 = lVar20 + 1;
      if (bVar9) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1001ab928);
        (*pcVar8)();
      }
      if (lVar20 < (long)(uVar16 + 0x3f >> 6)) {
        uVar17 = puVar18[lVar20];
        goto joined_r0x0001001ab76c;
      }
      _swift_release(lVar19);
      _swift_bridgeObjectRelease(puVar12);
      puVar12 = local_68;
    }
  }
  else {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    puVar12 = puVar11;
    FUN_10020c98c(puVar11);
    _swift_bridgeObjectRelease(puVar11);
  }
  return puVar12;
}

