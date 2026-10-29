// rea decompile_all
// name: FUN_100270b2c
// address: 0x100270b2c
// body: available
// range: 0x100270b2c-0x100270f97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100270b2c(void)

{
  String *pSVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ID self;
  NSString *pNVar5;
  Published *pPVar6;
  URL UVar7;
  Hasher into;
  ulong uVar8;
  Published *pPVar9;
  long extraout_x8;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 unaff_x20;
  long lVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  String SVar17;
  Published *local_e0 [3];
  long local_c8;
  long local_c0;
  Published *local_b0 [9];
  Published *local_68;
  void *pvVar10;
  
  lVar4 = 0;
  FUN_10040211c();
  local_c8 = *(long *)(lVar4 + -8);
  local_c0 = lVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c8 + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar15 = (undefined8 *)((long)local_e0 + lVar4);
  self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pPVar6 = (Published *)NSUserDefaults::stringArrayForKey_(self,pNVar5);
  pPVar9 = (Published *)PTR___swiftEmptyArrayStorage_100524190;
  if (pPVar6 != (Published *)0x0) {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    pPVar9 = pPVar6;
  }
  pPVar6 = pPVar9;
  FUN_10020c98c();
  _swift_bridgeObjectRelease(pPVar9);
  puVar16 = &DAT_10042d298;
  _swift_getKeyPath(&DAT_10042d298);
  puVar11 = &DAT_10042d2c0;
  _swift_getKeyPath(&DAT_10042d2c0);
  local_b0[0] = pPVar6;
  _swift_retain(unaff_x20);
  Combine::Published::_set_subscript(pPVar6,local_b0,unaff_x20,puVar16,puVar11);
  puVar16 = &DAT_10042d1d8;
  _swift_getKeyPath(&DAT_10042d1d8);
  puVar11 = &DAT_10042d200;
  _swift_getKeyPath(&DAT_10042d200);
  Combine::Published::_get_subscript(local_b0,unaff_x20,puVar16,puVar11);
  _swift_release(puVar16);
  _swift_release(puVar11);
  local_e0[2] = (Published *)local_b0[0][2].unknown;
  if (local_e0[2] == (Published *)0x0) {
    local_e0[0] = (Published *)PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    puVar16 = (undefined *)0x0;
    local_e0[0] = (Published *)PTR___swiftEmptyArrayStorage_100524190;
    local_e0[1] = local_b0[0];
    do {
      if (local_e0[1][2].unknown <= puVar16) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100270f98);
        (*pcVar2)();
      }
      uVar13 = (ulong)*(byte *)(local_c8 + 0x50) + 0x20 &
               ((ulong)*(byte *)(local_c8 + 0x50) ^ 0xffffffffffffffff);
      lVar14 = *(long *)(local_c8 + 0x48);
      FUN_100029504((long)&local_e0[1]->unknown + lVar14 * (long)puVar16 + uVar13,puVar15,
                    FUN_10040211c);
      puVar11 = &DAT_10042d298;
      _swift_getKeyPath(&DAT_10042d298);
      UVar7.unknown = &DAT_10042d2c0;
      _swift_getKeyPath();
      Combine::Published::_get_subscript(local_b0,unaff_x20,puVar11,UVar7.unknown);
      _swift_release(puVar11);
      _swift_release();
      pPVar9 = local_b0[0];
      SVar17 = Foundation::URL::get_lastPathComponent(UVar7);
      pvVar10 = SVar17.bridgeObject;
      uVar8 = (ulong)SVar17.str & 0xffffffffffff;
      if (((ulong)pvVar10 & 0x2000000000000000) != 0) {
        uVar8 = (ulong)pvVar10 >> 0x38 & 0xf;
      }
      if (uVar8 == 0) {
        _swift_bridgeObjectRelease(pvVar10);
        pvVar10 = *(void **)((long)local_e0 + lVar4 + 8);
        SVar17.bridgeObject = pvVar10;
        SVar17.str = (char *)*puVar15;
        _swift_bridgeObjectRetain(pvVar10);
        puVar11 = pPVar9[2].unknown;
      }
      else {
        puVar11 = pPVar9[2].unknown;
      }
      if (puVar11 != (undefined *)0x0) {
        pvVar10 = SVar17.bridgeObject;
        Swift::Hasher::init((__int64)pPVar9[5].unknown);
        into.unknown = (undefined *)local_b0;
        Swift::String::hash(into,SVar17);
        uVar8 = Swift::Hasher::_finalize(into);
        uVar12 = -1L << ((ulong)*(byte *)&pPVar9[4].unknown & 0x3f);
        uVar8 = uVar8 & (uVar12 ^ 0xffffffffffffffff);
        if (((ulong)pPVar9[(uVar8 >> 6) + 7].unknown >> (uVar8 & 0x3f) & 1) != 0) {
          do {
            pSVar1 = (String *)(pPVar9[6].unknown + uVar8 * 0x10);
            if ((SVar17 == *pSVar1) ||
               (bVar3 = Swift::_stringCompareWithSmolCheck
                                  ((_StringGuts)pSVar1->str,(_StringGuts)pSVar1->bridgeObject,
                                   (_StringComparisonResult)(__int8)SVar17.str), bVar3)) {
              _swift_bridgeObjectRelease(pvVar10);
              _swift_bridgeObjectRelease(pPVar9);
              pPVar9 = local_e0[0];
              pPVar6 = local_e0[0];
              _swift_isUniquelyReferenced_nonNull_native();
              local_68 = pPVar9;
              if (((ulong)pPVar6 & 1) == 0) {
                FUN_1001c5c4c(0,pPVar9[2].unknown + 1,1);
              }
              puVar11 = local_68[2].unknown;
              if ((undefined *)((ulong)local_68[3].unknown >> 1) <= puVar11) {
                FUN_1001c5c4c((undefined *)0x1 < local_68[3].unknown,puVar11 + 1,1);
              }
              local_68[2].unknown = puVar11 + 1;
              local_e0[0] = local_68;
              FUN_100007e64(puVar15,(undefined *)
                                    ((long)&local_68->unknown + (long)puVar11 * lVar14 + uVar13),
                            FUN_10040211c);
              goto LAB_100270d10;
            }
            uVar8 = uVar8 + 1 & ~uVar12;
          } while (((ulong)pPVar9[(uVar8 >> 6) + 7].unknown >> (uVar8 & 0x3f) & 1) != 0);
        }
      }
      _swift_bridgeObjectRelease(pvVar10);
      _swift_bridgeObjectRelease(pPVar9);
      FUN_100029548(puVar15,FUN_10040211c);
LAB_100270d10:
      puVar16 = puVar16 + 1;
    } while ((Published *)puVar16 != local_e0[2]);
  }
  _swift_bridgeObjectRelease();
  pPVar9 = (Published *)&DAT_10042d328;
  _swift_getKeyPath(&DAT_10042d328);
  puVar16 = &DAT_10042d350;
  _swift_getKeyPath(&DAT_10042d350);
  local_b0[0] = local_e0[0];
  _swift_retain(unaff_x20);
  Combine::Published::_set_subscript(pPVar9,local_b0,unaff_x20,pPVar9,puVar16);
  return;
}

