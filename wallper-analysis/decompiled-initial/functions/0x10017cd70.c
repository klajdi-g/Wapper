// rea decompile_all
// name: FUN_10017cd70
// address: 0x10017cd70
// body: available
// range: 0x10017cd70-0x10017d0ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10017cd70(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  URL UVar3;
  UUID UVar4;
  ID self;
  UUID UVar5;
  undefined1 *puVar6;
  URL UVar7;
  _StringGuts _Var8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long unaff_x20;
  long lVar11;
  code *pcVar12;
  undefined1 *puVar13;
  code *pcVar14;
  long lVar15;
  void *pvVar16;
  String SVar17;
  undefined1 auStack_90 [8];
  long local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_90 + -extraout_x8;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  lVar15 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar11 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  self = NSScreen::mainScreen((ID)&_OBJC_CLASS___NSScreen);
  if (self == 0) {
    pcVar14 = *(code **)(lVar10 + 0x38);
  }
  else {
    local_88 = lVar15;
    local_80 = param_1;
    FUN_100174ed8();
    if (self == 0) {
      UVar5 = Foundation::UUID::init();
      SVar17 = Foundation::UUID::get_uuidString(UVar5);
      (**(code **)(lVar11 + 8))(lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0),UVar4.unknown)
      ;
    }
    else {
      objc_stub::stringValue(self);
      SVar17 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    lVar11 = _TtC7Wallper17NowPlayingManager::previousWallpaperURLs;
    pvVar16 = SVar17.bridgeObject;
    _swift_beginAccess(unaff_x20 + _TtC7Wallper17NowPlayingManager::previousWallpaperURLs,auStack_78
                       ,0x20,0);
    lVar11 = *(long *)(unaff_x20 + lVar11);
    if (*(long *)(lVar11 + 0x10) == 0) {
      bVar1 = true;
    }
    else {
      _swift_bridgeObjectRetain(lVar11);
      FUN_10000464c(SVar17.str);
      bVar1 = ((ulong)SVar17.bridgeObject & 1) == 0;
      if (!bVar1) {
        (**(code **)(lVar10 + 0x10))
                  (puVar13,*(long *)(lVar11 + 0x38) + *(long *)(lVar10 + 0x48) * (long)SVar17.str,
                   UVar3.unknown);
      }
      _swift_bridgeObjectRelease(lVar11);
    }
    pcVar14 = *(code **)(lVar10 + 0x38);
    (*pcVar14)(puVar13,bVar1,1,UVar3.unknown);
    _swift_bridgeObjectRelease(pvVar16);
    puVar6 = puVar13;
    (**(code **)(lVar10 + 0x30))(puVar13,1,UVar3.unknown);
    if ((int)puVar6 == 1) {
      FUN_10002a29c(puVar13,&DAT_100553d90,&DAT_10041bf10);
      _swift_endAccess(auStack_78);
      param_1 = local_80;
    }
    else {
      pcVar12 = *(code **)(lVar10 + 0x20);
      (*pcVar12)(local_88,puVar13,UVar3.unknown);
      UVar7.unknown = auStack_78;
      _swift_endAccess();
      SVar17 = Foundation::URL::get_absoluteString(UVar7);
      _Var8.unknown = SVar17.bridgeObject;
      if ((SVar17.str == (undefined *)0xd00000000000001c) &&
         (_Var8.unknown == (undefined *)0x80000001004dc890)) {
        _swift_bridgeObjectRelease(0x80000001004dc890);
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar17.str,_Var8,(_StringComparisonResult)0x1c);
        _swift_bridgeObjectRelease(_Var8.unknown);
        param_1 = local_80;
        if (!bVar1) {
          (*pcVar12)(local_80,local_88,UVar3.unknown);
          uVar9 = 0;
          goto LAB_10017d064;
        }
      }
      param_1 = local_80;
      (**(code **)(lVar10 + 8))(local_88,UVar3.unknown);
    }
  }
  uVar9 = 1;
LAB_10017d064:
  (*pcVar14)(param_1,uVar9,1,UVar3.unknown);
  return;
}

