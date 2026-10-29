// rea decompile_all
// name: FUN_10019814c
// address: 0x10019814c
// body: available
// range: 0x10019814c-0x10019862b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_10019814c(void)

{
  String SVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  URL UVar5;
  undefined *puVar6;
  undefined *puVar7;
  ID self;
  NSString *pNVar8;
  URL UVar9;
  undefined8 uVar10;
  long extraout_x8;
  void *pvVar12;
  long extraout_x12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  void *pvVar19;
  String SVar20;
  String SVar21;
  undefined8 auStack_100 [4];
  long local_e0;
  ulong local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined *local_b8;
  ulong local_b0;
  char *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  String local_70;
  _StringGuts _Var11;
  
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar14 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar13 - extraout_x12;
  puVar6 = &DAT_100429be0;
  _swift_getKeyPath(&DAT_100429be0);
  puVar7 = &DAT_100429c08;
  _swift_getKeyPath(&DAT_100429c08);
  Combine::Published::_get_subscript(&local_70);
  _swift_release(puVar6);
  _swift_release(puVar7);
  if ((byte)local_70.str < 2) {
    pvVar12 = (void *)0xeb00000000636973;
    pcVar2 = (char *)0x754d20656c707041;
    if ((byte)local_70.str != 0) {
      pvVar12 = (void *)0xe700000000000000;
      pcVar2 = (char *)0x796669746f7053;
    }
    SVar20.bridgeObject = pvVar12;
    SVar20.str = pcVar2;
  }
  else if ((byte)local_70.str == 2) {
    SVar20.bridgeObject = (void *)0xed0000636973754d;
    SVar20.str = (char *)0x2065627554756f59;
  }
  else {
    if ((byte)local_70.str == 3) {
      puVar6 = &DAT_10042a288;
      _swift_getKeyPath(&DAT_10042a288);
      puVar7 = &DAT_10042a2b0;
      _swift_getKeyPath(&DAT_10042a2b0);
      Combine::Published::_get_subscript(&local_70);
      _swift_release(puVar6);
      _swift_release(puVar7);
      if (local_70.bridgeObject != (undefined *)0x0) {
        if (DAT_1005560a0 != -1) {
          _swift_once(&DAT_1005560a0,FUN_10017d600);
        }
        lVar18 = lVar17;
        if (*(ulong *)(DAT_100577cd0 + 0x10) != 0) {
          local_e0 = DAT_100577cd0 + 0x20;
          local_d0 = DAT_100577cd0;
          uVar15 = 0;
          local_d8 = *(ulong *)(DAT_100577cd0 + 0x10);
          local_c8 = lVar17;
          local_c0 = lVar14;
          local_b8 = UVar5.unknown;
          do {
            if (*(ulong *)(local_d0 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10019862c);
              (*pcVar3)();
            }
            lVar14 = local_e0 + uVar15 * 0x28;
            local_a0 = *(undefined8 *)(lVar14 + 8);
            local_a8 = *(char **)(lVar14 + 0x10);
            pvVar12 = *(void **)(lVar14 + 0x18);
            pvVar19 = *(void **)(lVar14 + 0x20);
            local_b0 = uVar15 + 1;
            lVar14 = *(long *)((long)pvVar19 + 0x10);
            _swift_bridgeObjectRetain();
            local_98 = pvVar12;
            _swift_bridgeObjectRetain(pvVar12);
            _swift_bridgeObjectRetain(pvVar19);
            puVar16 = (undefined8 *)((long)pvVar19 + 0x28);
            uVar15 = 0xffffffffffffffff;
            while (uVar15 - lVar14 != -1) {
              uVar15 = uVar15 + 1;
              if (*(ulong *)((long)pvVar19 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x100198610);
                (*pcVar3)();
              }
              SVar21.bridgeObject = (void *)*puVar16;
              SVar21.str = (char *)puVar16[-1];
              SVar20 = Swift::String::lowercased(SVar21);
              _Var11.unknown = SVar20.bridgeObject;
              SVar21 = Swift::String::lowercased(local_70);
              if (SVar20 == SVar21) {
                _swift_bridgeObjectRelease(local_70.bridgeObject);
                _swift_bridgeObjectRelease(pvVar19);
                local_70.bridgeObject = _Var11.unknown;
                pvVar19 = SVar21.bridgeObject;
                goto LAB_1001985c4;
              }
              puVar16 = puVar16 + 2;
              bVar4 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)SVar20.str,_Var11,
                                 (_StringComparisonResult)(__int8)SVar21.str);
              _swift_bridgeObjectRelease(_Var11.unknown);
              _swift_bridgeObjectRelease(SVar21.bridgeObject);
              if (bVar4) {
LAB_1001985c4:
                _swift_bridgeObjectRelease(local_70.bridgeObject);
                _swift_bridgeObjectRelease(pvVar19);
                _swift_bridgeObjectRelease(local_a0);
                SVar1.bridgeObject = local_98;
                SVar1.str = local_a8;
                return SVar1;
              }
            }
            _swift_bridgeObjectRelease(local_98);
            _swift_bridgeObjectRelease(local_a0);
            _swift_bridgeObjectRelease(pvVar19);
            uVar15 = local_b0;
            UVar5.unknown = local_b8;
            lVar14 = local_c0;
            lVar18 = local_c8;
          } while (local_b0 != local_d8);
        }
        self = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
        pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(local_70.bridgeObject);
        UVar9.unknown =
             (undefined *)NSWorkspace::URLForApplicationWithBundleIdentifier_(self,pNVar8);
        if (UVar9.unknown != (undefined *)0x0) {
          Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar9);
          (**(code **)(lVar14 + 0x20))(lVar18,lVar13,UVar5.unknown);
          UVar9.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
          SVar20 = Foundation::URL::get_path(UVar9);
          pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(SVar20.bridgeObject);
          NSFileManager::displayNameAtPath_((ID)UVar9.unknown,pNVar8);
          local_70 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          pvVar12 = local_70.bridgeObject;
          uVar10 = 0;
          local_80 = 0x7070612e;
          uStack_78 = 0xe400000000000000;
          local_90 = 0;
          uStack_88 = 0xe000000000000000;
          FUN_100026df4();
          *(undefined8 *)(lVar17 + -0x10) = uVar10;
          *(undefined8 *)(lVar17 + -8) = uVar10;
          *(undefined **)(lVar17 + -0x20) = PTR___type_metadata_for_Swift_String_100523a98;
          *(undefined8 *)(lVar17 + -0x18) = uVar10;
          SVar20 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                             (&local_80,&local_90,0,0,0,1,
                              PTR___type_metadata_for_Swift_String_100523a98,
                              PTR___type_metadata_for_Swift_String_100523a98);
          _swift_bridgeObjectRelease(pvVar12);
          (**(code **)(lVar14 + 8))(lVar18,UVar5.unknown);
          return SVar20;
        }
        return (String)(ZEXT816(0xe000000000000000) << 0x40);
      }
    }
    SVar20 = (String)(ZEXT816(0xe000000000000000) << 0x40);
  }
  return SVar20;
}

