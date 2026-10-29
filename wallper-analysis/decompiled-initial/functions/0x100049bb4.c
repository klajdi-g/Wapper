// rea decompile_all
// name: FUN_100049bb4
// address: 0x100049bb4
// body: available
// range: 0x100049bb4-0x10004a153 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100049bb4(undefined8 param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  URL UVar4;
  URL UVar5;
  undefined1 *puVar6;
  _StringGuts _Var7;
  undefined *puVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined8 uVar11;
  void *pvVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  undefined1 *puVar14;
  code *pcVar15;
  long extraout_x12;
  long lVar16;
  long unaff_x20;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  _StringGuts _Var22;
  undefined *puVar23;
  String SVar24;
  String SVar25;
  void *local_80;
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  FUN_10040211c();
  lVar16 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  puVar20 = &stack0xffffffffffffff50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar21 = puVar20 + -extraout_x12;
  puVar23 = &DAT_100553d90;
  puVar8 = &DAT_10041bf10;
  FUN_100002f94();
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar23 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _Var22.unknown = puVar21 + -extraout_x8_00;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar13 = *(long *)(UVar4.unknown + -8);
  UVar5 = UVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  puVar14 = _Var22.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_1000492d4();
  if (puVar8 == (undefined *)0x0) {
LAB_100049ddc:
    (**(code **)(lVar16 + 0x38))(param_1,1,1,lVar3);
    return;
  }
  if (DAT_100557bb0 != -1) {
    _swift_once(&DAT_100557bb0,FUN_100233158);
  }
  lVar1 = DAT_100577d38;
  lVar17 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
  _swift_beginAccess(DAT_100577d38 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,
                     auStack_78,0,0);
  puVar23 = *(undefined **)(lVar1 + lVar17);
  if (*(long *)(puVar23 + 0x10) == 0) {
    (**(code **)(lVar13 + 0x38))(_Var22.unknown,1,1,UVar4.unknown);
  }
  else {
    _swift_bridgeObjectRetain(puVar23);
    puVar10 = puVar8;
    FUN_10000464c(UVar5.unknown);
    bVar2 = ((ulong)puVar10 & 1) == 0;
    if (bVar2) {
      pcVar15 = *(code **)(lVar13 + 0x38);
    }
    else {
      (**(code **)(lVar13 + 0x10))
                (_Var22.unknown,
                 *(long *)(puVar23 + 0x38) + *(long *)(lVar13 + 0x48) * (long)UVar5.unknown,
                 UVar4.unknown);
      pcVar15 = *(code **)(lVar13 + 0x38);
    }
    (*pcVar15)(_Var22.unknown,bVar2,1,UVar4.unknown);
    _swift_bridgeObjectRelease(puVar8);
    puVar8 = puVar23;
  }
  _swift_bridgeObjectRelease(puVar8);
  puVar6 = _Var22.unknown;
  (**(code **)(lVar13 + 0x30))(_Var22.unknown,1,UVar4.unknown);
  if ((int)puVar6 == 1) {
    FUN_10002a29c(_Var22.unknown,&DAT_100553d90,&DAT_10041bf10);
    goto LAB_100049ddc;
  }
  _Var7.unknown = puVar14;
  (**(code **)(lVar13 + 0x20))(puVar14,_Var22.unknown,UVar4.unknown);
  Foundation::URL::_get_scheme((URL)_Var7.unknown);
  if (_Var22.unknown == (undefined *)0x0) {
LAB_100049fb4:
    puVar23 = *(undefined **)(unaff_x20 + 0x60);
    if (puVar23 == (undefined *)0x0) goto LAB_10004a110;
    UVar5.unknown = puVar23;
    _swift_retain();
    SVar25 = Foundation::URL::get_lastPathComponent(UVar5);
    pvVar12 = SVar25.bridgeObject;
    SVar24 = SVar25;
    FUN_1002748c4();
    pcVar9 = SVar24.str;
    _swift_bridgeObjectRelease(SVar24.bridgeObject);
    if (*(long *)(pcVar9 + 0x10) == 0) {
      bVar2 = true;
    }
    else {
      _swift_bridgeObjectRetain(pcVar9);
      FUN_10000464c(SVar25.str);
      bVar2 = ((ulong)SVar25.bridgeObject & 1) == 0;
      if (!bVar2) {
        FUN_100029504(*(long *)(pcVar9 + 0x38) + *(long *)(lVar16 + 0x48) * (long)SVar25.str,param_1
                      ,FUN_10040211c);
      }
      _swift_bridgeObjectRelease(pcVar9);
    }
    (**(code **)(lVar16 + 0x38))(param_1,bVar2,1,lVar3);
    _swift_bridgeObjectRelease(pvVar12);
    _swift_bridgeObjectRelease(pcVar9);
    _swift_release(puVar23);
  }
  else {
    if ((_Var7.unknown == (undefined *)0x7463617265746e69) &&
       (_Var22.unknown == (undefined *)0xeb00000000657669)) {
      _swift_bridgeObjectRelease(0xeb00000000657669);
    }
    else {
      bVar2 = Swift::_stringCompareWithSmolCheck(_Var7,_Var22,(_StringComparisonResult)0x69);
      _swift_bridgeObjectRelease(_Var22.unknown);
      if (!bVar2) goto LAB_100049fb4;
    }
    lVar17 = *(long *)(unaff_x20 + 0x60);
    if (lVar17 == 0) {
LAB_10004a110:
      FUN_100279594(0);
      FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x10004a154);
      (*pcVar15)();
    }
    puVar23 = &DAT_10041e188;
    _swift_getKeyPath(&DAT_10041e188);
    puVar8 = &DAT_10041e1b0;
    _swift_getKeyPath(&DAT_10041e1b0);
    _swift_retain(lVar17);
    Combine::Published::_get_subscript(&local_80);
    _swift_release(puVar23);
    _swift_release(puVar8);
    _swift_release(lVar17);
    uVar19 = *(ulong *)((long)local_80 + 0x10);
    if (uVar19 != 0) {
      uVar18 = 0;
      do {
        if (*(ulong *)((long)local_80 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x10004a0f8);
          (*pcVar15)();
        }
        FUN_100029504((long)local_80 +
                      *(long *)(lVar16 + 0x48) * uVar18 +
                      ((ulong)*(byte *)(lVar16 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar16 + 0x50) ^ 0xffffffffffffffff)),puVar21,FUN_10040211c)
        ;
        UVar5.unknown = puVar21;
        FUN_100007e64(puVar21,puVar20,FUN_10040211c);
        SVar24 = Foundation::URL::get_absoluteString(UVar5);
        _Var22.unknown = SVar24.bridgeObject;
        SVar25 = Foundation::URL::get_absoluteString((URL)SVar24.str);
        if (SVar24 == SVar25) {
          _swift_bridgeObjectRelease(local_80);
          _swift_bridgeObjectRelease(_Var22.unknown);
          local_80 = SVar25.bridgeObject;
LAB_10004a08c:
          _swift_bridgeObjectRelease(local_80);
          FUN_100007e64(puVar20,param_1,FUN_10040211c);
          uVar11 = 0;
          goto LAB_10004a0b4;
        }
        bVar2 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar24.str,_Var22,
                           (_StringComparisonResult)(__int8)SVar25.str);
        _swift_bridgeObjectRelease(_Var22.unknown);
        _swift_bridgeObjectRelease(SVar25.bridgeObject);
        if (bVar2) goto LAB_10004a08c;
        uVar18 = uVar18 + 1;
        FUN_100029548(puVar20,FUN_10040211c);
      } while (uVar19 != uVar18);
    }
    _swift_bridgeObjectRelease(local_80);
    uVar11 = 1;
LAB_10004a0b4:
    (**(code **)(lVar16 + 0x38))(param_1,uVar11,1,lVar3);
  }
  (**(code **)(lVar13 + 8))(puVar14,UVar4.unknown);
  return;
}

