// rea decompile_all
// name: FUN_10017ebc8
// address: 0x10017ebc8
// body: available
// range: 0x10017ebc8-0x10017f1bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010017ed74 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10017ebc8(char *param_1,void *param_2)

{
  ulong uVar1;
  char *pcVar2;
  void *pvVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  NSComparisonResult NVar9;
  String *self;
  NSString *pNVar10;
  URL UVar11;
  long lVar12;
  String *pSVar13;
  undefined8 uVar14;
  ID self_00;
  NSDictionary *pNVar15;
  void *pvVar16;
  undefined8 *puVar17;
  long extraout_x8;
  long extraout_x8_00;
  long lVar18;
  long extraout_x12;
  undefined8 *unaff_x20;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong *puVar23;
  String SVar24;
  undefined8 auStack_100 [4];
  long local_e0;
  long local_d8;
  undefined *puStack_d0;
  long local_c8;
  char *local_c0;
  void *pvStack_b8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  String local_80 [2];
  
  puStack_d0 = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_d8 = *(long *)(puStack_d0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d8 + 0x40));
  lVar18 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100553d90;
  local_e0 = lVar18;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar18 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - extraout_x12;
  puVar7 = &DAT_10042a2e0;
  _swift_getKeyPath(&DAT_10042a2e0);
  puVar8 = &DAT_10042a308;
  _swift_getKeyPath(&DAT_10042a308);
  Combine::Published::_get_subscript(local_80);
  _swift_release(puVar7);
  _swift_release(puVar8);
  pcVar2 = local_80[0].str;
  puVar23 = (ulong *)(local_80[0].str + 0x40);
  uVar21 = -1L << ((ulong)(byte)local_80[0].str[0x20] & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if (-uVar21 < 0x40) {
    uVar19 = ~(-1L << (-uVar21 & 0x3f));
  }
  uVar19 = uVar19 & *puVar23;
  local_80[0].bridgeObject = param_2;
  local_80[0].str = param_1;
  NVar9.unknown = pcVar2;
  local_c0 = param_1;
  pvStack_b8 = param_2;
  _swift_bridgeObjectRetain(pcVar2);
  puVar7 = PTR___type_metadata_for_Swift_String_100523a98;
  lVar22 = 0;
  lVar4 = lVar22;
  uVar1 = uVar19;
  while( true ) {
    while (uVar20 = uVar1, lVar12 = lVar4, uVar19 != 0) {
      uVar1 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      puVar17 = (undefined8 *)
                (*(long *)(pcVar2 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 0x10 +
                lVar22 * 0x400);
      local_90 = *puVar17;
      uStack_88 = puVar17[1];
      uVar19 = uVar19 - 1 & uVar19;
      FUN_100026df4();
      NVar9 = (extension_Foundation)::Swift::StringProtocol::_caseInsensitiveCompare
                        (NVar9.unknown,puVar7,puVar7,NVar9.unknown,NVar9.unknown);
      lVar4 = lVar22;
      uVar1 = uVar19;
      if (NVar9.unknown == (undefined *)0x0) {
        FUN_10002f6ec(pcVar2,puVar23,~uVar21,lVar12,uVar20);
        _swift_bridgeObjectRelease(pcVar2);
        return;
      }
    }
    bVar6 = SCARRY8(lVar22,1);
    lVar22 = lVar22 + 1;
    if (bVar6) break;
    if ((long)(0x3f - uVar21 >> 6) <= lVar22) {
      FUN_10002f6ec(pcVar2,puVar23,~uVar21,lVar12,0);
      _swift_bridgeObjectRelease(pcVar2);
      self = (String *)NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
      pvVar3 = pvStack_b8;
      pcVar2 = local_c0;
      SVar24.bridgeObject = pvStack_b8;
      SVar24.str = local_c0;
      pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      UVar11.unknown =
           (undefined *)NSWorkspace::URLForApplicationWithBundleIdentifier_((ID)self,pNVar10);
      if (UVar11.unknown != (undefined *)0x0) {
        Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar11);
      }
      puVar8 = puStack_d0;
      lVar22 = local_d8;
      (**(code **)(local_d8 + 0x38))(lVar18,UVar11.unknown == (undefined *)0x0,1,puStack_d0);
      lVar4 = local_c8;
      FUN_1000087e4(lVar18,local_c8,&DAT_100553d90,&DAT_10041bf10);
      lVar12 = lVar4;
      (**(code **)(lVar22 + 0x30))(lVar4,1,puVar8);
      if ((int)lVar12 == 1) {
        FUN_10002a29c(lVar18,&DAT_100553d90,&DAT_10041bf10);
        _swift_bridgeObjectRetain(pvVar3);
      }
      else {
        (**(code **)(lVar22 + 0x20))(local_e0,lVar4,puVar8);
        UVar11.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
        SVar24 = Foundation::URL::get_path(UVar11);
        pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar24.bridgeObject);
        NSFileManager::displayNameAtPath_((ID)UVar11.unknown,pNVar10);
        local_80[0] = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC()
        ;
        pvVar16 = local_80[0].bridgeObject;
        uVar14 = 0;
        local_90 = 0x7070612e;
        uStack_88 = 0xe400000000000000;
        local_a0 = 0;
        uStack_98 = 0xe000000000000000;
        FUN_100026df4();
        *(undefined8 *)(lVar18 + -0x10) = uVar14;
        *(undefined8 *)(lVar18 + -8) = uVar14;
        self = local_80;
        *(undefined **)(lVar18 + -0x20) = puVar7;
        *(undefined8 *)(lVar18 + -0x18) = uVar14;
        SVar24 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                           (&local_90,&local_a0,0,0,0,1,puVar7,puVar7);
        _swift_bridgeObjectRelease(pvVar16);
        (**(code **)(lVar22 + 8))(local_e0,puVar8);
        FUN_10002a29c(lVar18,&DAT_100553d90,&DAT_10041bf10);
      }
      puVar7 = &DAT_10042a2e0;
      _swift_getKeyPath(&DAT_10042a2e0);
      puVar8 = &DAT_10042a308;
      _swift_getKeyPath(&DAT_10042a308);
      _swift_bridgeObjectRetain(pvVar3);
      pSVar13 = local_80;
      puVar17 = unaff_x20;
      Combine::Published::_modify_subscript((Published *)self,pSVar13,unaff_x20,puVar7,puVar8);
      uVar14 = *puVar17;
      _swift_isUniquelyReferenced_nonNull_native(uVar14);
      local_90 = *puVar17;
      *puVar17 = 0x8000000000000000;
      FUN_10034091c(SVar24.str,SVar24.bridgeObject,pcVar2,pvVar3,uVar14);
      _swift_bridgeObjectRelease(pvVar3);
      *puVar17 = local_90;
      (*(code *)pSVar13)(local_80,0);
      _swift_release(puVar7);
      _swift_release(puVar8);
      self_00 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
      puVar7 = &DAT_10042a2e0;
      _swift_getKeyPath(&DAT_10042a2e0);
      puVar8 = &DAT_10042a308;
      _swift_getKeyPath(&DAT_10042a308);
      Combine::Published::_get_subscript(local_80,unaff_x20,puVar7,puVar8);
      _swift_release(puVar7);
      _swift_release(puVar8);
      pcVar2 = local_80[0].str;
      pNVar15 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(pcVar2);
      pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      NSUserDefaults::setObject_forKey_(self_00,pNVar15,pNVar10);
      return;
    }
    uVar19 = puVar23[lVar22];
    lVar4 = lVar12;
    uVar1 = uVar20;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10017f1bc);
  (*pcVar5)();
}

