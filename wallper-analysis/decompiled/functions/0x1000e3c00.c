// rea decompile_all
// name: FUN_1000e3c00
// address: 0x1000e3c00
// body: available
// range: 0x1000e3c00-0x1000e4123 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16]
FUN_1000e3c00(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  UUID UVar3;
  URL UVar4;
  URL UVar5;
  UUID UVar6;
  undefined *puVar7;
  ulong uVar8;
  _StringGuts _Var9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar10;
  long lVar11;
  long extraout_x12;
  void *pvVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  URL UVar16;
  void *pvVar17;
  String SVar18;
  String SVar19;
  undefined1 auVar20 [16];
  long local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_10054ac40;
  local_90 = param_1;
  local_88 = param_4;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100553d90;
  local_98 = (undefined *)((long)&local_a0 - extraout_x8);
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar16.unknown = (undefined *)((long)&local_a0 - extraout_x8) + -extraout_x8_00;
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar14 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  lVar15 = (long)UVar16.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar13 = *(long *)(UVar4.unknown + -8);
  UVar5 = UVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_a0 = lVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_80 = (undefined *)(lVar11 - extraout_x12);
  FUN_100174ed8();
  if (UVar5.unknown == (undefined *)0x0) {
    UVar6 = Foundation::UUID::init();
    SVar18 = Foundation::UUID::get_uuidString(UVar6);
    (**(code **)(lVar14 + 8))(lVar15,UVar3.unknown);
  }
  else {
    objc_stub::stringValue((ID)UVar5.unknown);
    SVar18 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  lVar11 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
  pvVar17 = SVar18.bridgeObject;
  _swift_beginAccess(param_3 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,auStack_78,0
                     ,0);
  pvVar12 = *(void **)(param_3 + lVar11);
  if (*(long *)((long)pvVar12 + 0x10) == 0) {
    (**(code **)(lVar13 + 0x38))(UVar16.unknown,1,1,UVar4.unknown);
  }
  else {
    _swift_bridgeObjectRetain(pvVar12);
    FUN_10000464c(SVar18.str);
    bVar1 = ((ulong)SVar18.bridgeObject & 1) == 0;
    if (bVar1) {
      pcVar10 = *(code **)(lVar13 + 0x38);
    }
    else {
      (**(code **)(lVar13 + 0x10))
                (UVar16.unknown,
                 *(long *)((long)pvVar12 + 0x38) + *(long *)(lVar13 + 0x48) * (long)SVar18.str,
                 UVar4.unknown);
      pcVar10 = *(code **)(lVar13 + 0x38);
    }
    (*pcVar10)(UVar16.unknown,bVar1,1,UVar4.unknown);
    _swift_bridgeObjectRelease(pvVar17);
    pvVar17 = pvVar12;
  }
  _swift_bridgeObjectRelease(pvVar17);
  puVar7 = UVar16.unknown;
  (**(code **)(lVar13 + 0x30))(UVar16.unknown,1,UVar4.unknown);
  puVar2 = local_80;
  if ((int)puVar7 == 1) {
    FUN_10002a29c(UVar16.unknown,&DAT_100553d90,&DAT_10041bf10);
  }
  else {
    _Var9.unknown = local_80;
    (**(code **)(lVar13 + 0x20))(local_80,UVar16.unknown,UVar4.unknown);
    Foundation::URL::_get_scheme((URL)_Var9.unknown);
    if (UVar16.unknown == (undefined *)0x0) {
LAB_1000e3f98:
      SVar19 = Foundation::URL::get_lastPathComponent((URL)_Var9.unknown);
      _Var9.unknown = SVar19.bridgeObject;
      SVar18 = SVar19;
      FUN_1000e3868();
      if (SVar19 != SVar18) {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar19.str,_Var9,(_StringComparisonResult)(__int8)SVar18.str
                          );
        _swift_bridgeObjectRelease(_Var9.unknown);
        _swift_bridgeObjectRelease(SVar18.bridgeObject);
        (**(code **)(lVar13 + 8))(puVar2,UVar4.unknown);
        if (!bVar1) {
          local_90 = 0;
        }
        uVar8 = (ulong)((bVar1 ^ 0xffffffff) & 1);
        goto LAB_1000e40bc;
      }
      _swift_bridgeObjectRelease(_Var9.unknown);
      _swift_bridgeObjectRelease(SVar18.bridgeObject);
      (**(code **)(lVar13 + 8))(puVar2,UVar4.unknown);
LAB_1000e40b4:
      uVar8 = 0;
      goto LAB_1000e40bc;
    }
    if ((_Var9.unknown == (undefined *)0x7463617265746e69) &&
       (UVar16.unknown == (undefined *)0xeb00000000657669)) {
      _swift_bridgeObjectRelease();
    }
    else {
      bVar1 = Swift::_stringCompareWithSmolCheck
                        (_Var9,(_StringGuts)UVar16.unknown,(_StringComparisonResult)0x69);
      _swift_bridgeObjectRelease();
      _Var9.unknown = UVar16.unknown;
      if (!bVar1) goto LAB_1000e3f98;
    }
    SVar18 = Foundation::URL::get_absoluteString(UVar16);
    UVar5.unknown = local_98;
    _Var9.unknown = SVar18.bridgeObject;
    FUN_1000e3728(local_98);
    lVar14 = 0;
    FUN_10040211c();
    puVar7 = UVar5.unknown;
    (**(code **)(*(long *)(lVar14 + -8) + 0x30))(UVar5.unknown,1,lVar14);
    lVar11 = local_a0;
    if ((int)puVar7 == 1) {
      FUN_10002a29c(UVar5.unknown,&DAT_10054ac40,&DAT_10041ce70);
      _swift_bridgeObjectRelease(_Var9.unknown);
      (**(code **)(lVar13 + 8))(puVar2,UVar4.unknown);
    }
    else {
      (**(code **)(lVar13 + 0x10))(local_a0,UVar5.unknown + *(int *)(lVar14 + 0x14),UVar4.unknown);
      FUN_100029548(UVar5.unknown,FUN_10040211c);
      SVar19 = Foundation::URL::get_absoluteString(UVar5);
      pcVar10 = *(code **)(lVar13 + 8);
      (*pcVar10)(lVar11,UVar4.unknown);
      if (SVar18 == SVar19) {
        _swift_bridgeObjectRelease(_Var9.unknown);
        _swift_bridgeObjectRelease(SVar19.bridgeObject);
        (*pcVar10)(puVar2,UVar4.unknown);
        goto LAB_1000e40b4;
      }
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar18.str,_Var9,(_StringComparisonResult)(__int8)SVar19.str);
      _swift_bridgeObjectRelease(_Var9.unknown);
      _swift_bridgeObjectRelease(SVar19.bridgeObject);
      (*pcVar10)(puVar2,UVar4.unknown);
      uVar8 = 0;
      if (bVar1) goto LAB_1000e40bc;
    }
  }
  local_90 = 0;
  uVar8 = 1;
LAB_1000e40bc:
  auVar20._8_8_ = uVar8;
  auVar20._0_8_ = local_90;
  return auVar20;
}

