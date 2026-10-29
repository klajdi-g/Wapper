// rea decompile_all
// name: FUN_1001f07cc
// address: 0x1001f07cc
// body: available
// range: 0x1001f07cc-0x1001f0f47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001f07cc(void)

{
  bool bVar1;
  byte bVar2;
  ID self;
  UUID UVar3;
  UUID UVar4;
  URL UVar5;
  long lVar6;
  URL UVar7;
  undefined1 *puVar8;
  TaskPriority TVar9;
  undefined8 uVar10;
  _StringGuts _Var11;
  _StringGuts _Var12;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar13;
  long extraout_x8_01;
  ulong uVar14;
  long extraout_x8_02;
  long unaff_x20;
  ulong uVar15;
  undefined1 *puVar16;
  long lVar17;
  void *pvVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  void *pvVar22;
  undefined8 uVar23;
  long lVar24;
  String SVar25;
  undefined1 auStack_e0 [8];
  ulong local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined1 *local_a8;
  ID local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined1 *local_88;
  undefined1 auStack_78 [24];
  
  self = NSScreen::mainScreen((ID)&_OBJC_CLASS___NSScreen);
  if (self == 0) {
    return;
  }
  FUN_100174ed8();
  if (self == 0) {
    UVar3 = Foundation::UUID::typeMetadataAccessor();
    lVar17 = *(long *)(UVar3.unknown + -8);
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
    UVar4 = Foundation::UUID::init();
    SVar25 = Foundation::UUID::get_uuidString(UVar4);
    (**(code **)(lVar17 + 8))(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar3.unknown)
    ;
  }
  else {
    objc_stub::stringValue(self);
    SVar25 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pvVar18 = SVar25.bridgeObject;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar24 = *(long *)(UVar5.unknown + -8);
  lVar17 = *(long *)(lVar24 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar16 = auStack_e0 + -(lVar17 + 0xfU & 0xfffffffffffffff0);
  if (DAT_100557bb0 != -1) {
    _swift_once(&DAT_100557bb0,FUN_100233158);
  }
  lVar6 = DAT_100577d38;
  lVar20 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
  _swift_beginAccess(DAT_100577d38 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,
                     auStack_78,0,0);
  pvVar22 = *(void **)(lVar6 + lVar20);
  puVar21 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar21 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = (long)puVar16 - extraout_x8_00;
  if (*(long *)((long)pvVar22 + 0x10) == 0) {
    (**(code **)(lVar24 + 0x38))(lVar20,1,1,UVar5.unknown);
  }
  else {
    _swift_bridgeObjectRetain(pvVar22);
    FUN_10000464c(SVar25.str);
    bVar1 = ((ulong)SVar25.bridgeObject & 1) == 0;
    if (bVar1) {
      pcVar13 = *(code **)(lVar24 + 0x38);
    }
    else {
      (**(code **)(lVar24 + 0x10))
                (lVar20,*(long *)((long)pvVar22 + 0x38) +
                        *(long *)(lVar24 + 0x48) * (long)SVar25.str,UVar5.unknown);
      pcVar13 = *(code **)(lVar24 + 0x38);
    }
    (*pcVar13)(lVar20,bVar1,1,UVar5.unknown);
    _swift_bridgeObjectRelease(pvVar18);
    pvVar18 = pvVar22;
  }
  _swift_bridgeObjectRelease(pvVar18);
  lVar6 = lVar20;
  (**(code **)(lVar24 + 0x30))(lVar20,1,UVar5.unknown);
  if ((int)lVar6 == 1) {
    FUN_10002a29c(lVar20,&DAT_100553d90,&DAT_10041bf10);
    return;
  }
  pcVar13 = *(code **)(lVar24 + 0x20);
  UVar7.unknown = puVar16;
  (*pcVar13)(puVar16,lVar20,UVar5.unknown);
  SVar25 = Foundation::URL::get_absoluteString(UVar7);
  _Var11.unknown = SVar25.bridgeObject;
  if ((SVar25.str == (undefined *)0xd00000000000001c) &&
     (_Var11.unknown == (undefined *)0x80000001004dc890)) {
    _swift_bridgeObjectRelease(0x80000001004dc890);
    goto LAB_1001f0df0;
  }
  bVar1 = Swift::_stringCompareWithSmolCheck
                    ((_StringGuts)SVar25.str,_Var11,(_StringComparisonResult)0x1c);
  _swift_bridgeObjectRelease(_Var11.unknown);
  if (bVar1) goto LAB_1001f0df0;
  if (DAT_100561128 != -1) {
    _swift_once(&DAT_100561128,FUN_1003f3f80);
  }
  puVar21 = &DAT_100577e38;
  _swift_unknownObjectWeakLoadStrong();
  if (puVar21 == (undefined *)0x0) {
    puVar21 = (undefined *)0x0;
  }
  else {
    puVar21 = *(undefined **)(puVar21 + _TtC7Wallper11AppDelegate::videoLibrary);
    _swift_retain(puVar21);
  }
  _Var11.unknown = puVar21;
  _Var12.unknown = puVar16;
  FUN_1001f0f48();
  local_90 = _Var11.unknown;
  local_88 = _Var12.unknown;
  Foundation::URL::_get_scheme((URL)_Var11.unknown);
  if (_Var12.unknown != (undefined *)0x0) {
    if ((_Var11.unknown == (undefined *)0x7463617265746e69) &&
       (_Var12.unknown == (undefined *)0xeb00000000657669)) {
      _swift_bridgeObjectRelease(0xeb00000000657669);
    }
    else {
      bVar1 = Swift::_stringCompareWithSmolCheck(_Var11,_Var12,(_StringComparisonResult)0x69);
      _swift_bridgeObjectRelease(_Var12.unknown);
      if (!bVar1) goto LAB_1001f0ba0;
    }
    puVar8 = puVar16;
    FUN_10004306c();
    if (((uint)puVar8 & 0xff) != 7) {
      TVar9.unknown = &DAT_100561090;
      FUN_100002f94(&DAT_100561090,&DAT_10041c870);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(TVar9.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar17 = (long)puVar16 - extraout_x8_02;
      Swift::TaskPriority::get_utility(TVar9);
      TVar9 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar9.unknown + -8) + 0x38))(lVar17,0,1,TVar9.unknown);
      puVar19 = &DAT_100533128;
      _swift_allocObject(&DAT_100533128,0x38,7);
      *(undefined8 *)(puVar19 + 0x10) = 0;
      *(undefined8 *)(puVar19 + 0x18) = 0;
      puVar19[0x20] = (char)puVar8;
      *(undefined **)(puVar19 + 0x28) = local_90;
      *(undefined1 **)(puVar19 + 0x30) = local_88;
      FUN_100176d50(0,0,lVar17,&DAT_10042b208,puVar19);
      _swift_release();
      _swift_release(puVar21);
      FUN_10002a29c(lVar17,&DAT_100561090,&DAT_10041c870);
      (**(code **)(lVar24 + 8))(puVar16,UVar5.unknown);
      return;
    }
  }
LAB_1001f0ba0:
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar2 & 1) == 0) {
    _swift_bridgeObjectRelease(local_88);
  }
  else {
    local_a0 = *(ID *)(unaff_x20 + 0x28);
    local_98 = puVar21;
    objc_stub::lock(local_a0);
    local_b0 = *(long *)(unaff_x20 + 0x38) + 1;
    if (SCARRY8(*(long *)(unaff_x20 + 0x38),1)) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x1001f0f48);
      (*pcVar13)();
    }
    *(long *)(unaff_x20 + 0x38) = local_b0;
    puVar19 = *(undefined **)(unaff_x20 + 0x30);
    puVar21 = &DAT_100561090;
    FUN_100002f94(&DAT_100561090,&DAT_10041c870);
    local_a8 = puVar16;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar21 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar20 = (long)puVar16 - extraout_x8_01;
    TVar9.unknown = puVar19;
    _swift_retain();
    local_b8 = lVar20;
    Swift::TaskPriority::get_utility(TVar9);
    TVar9 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar9.unknown + -8) + 0x38))(lVar20,0,1,TVar9.unknown);
    puVar21 = &DAT_100532778;
    _swift_allocObject(&DAT_100532778,0x18,7);
    local_c8 = puVar21;
    _swift_weakInit(puVar21 + 0x10,unaff_x20);
    local_c0 = lVar20;
    (*(code *)PTR____chkstk_darwin_100521118)();
    lVar20 = lVar20 - (lVar17 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar24 + 0x10))(lVar20,puVar16,UVar5.unknown);
    uVar14 = (ulong)*(byte *)(lVar24 + 0x50);
    uVar15 = uVar14 + 0x30 & (uVar14 ^ 0xffffffffffffffff);
    local_d8 = lVar17 + uVar15 + 7 & 0xfffffffffffffff8;
    local_d0 = local_d8 + 0x10;
    lVar17 = local_d8 + 0x18;
    puVar21 = &DAT_100533100;
    _swift_allocObject(&DAT_100533100,local_d8 + 0x28,uVar14 | 7);
    *(undefined8 *)(puVar21 + 0x10) = 0;
    *(undefined8 *)(puVar21 + 0x18) = 0;
    *(undefined **)(puVar21 + 0x20) = puVar19;
    *(undefined **)(puVar21 + 0x28) = local_c8;
    (*pcVar13)(puVar21 + uVar15,lVar20,UVar5.unknown);
    puVar8 = local_88;
    *(undefined **)(puVar21 + local_d8) = local_90;
    *(undefined1 **)((long)(puVar21 + local_d8) + 8) = local_88;
    *(long *)(puVar21 + local_d0) = local_b0;
    *(undefined8 *)(puVar21 + lVar17) = 0;
    *(undefined8 *)((long)(puVar21 + lVar17) + 8) = 0;
    _swift_retain(puVar19);
    _swift_bridgeObjectRetain(puVar8);
    lVar17 = local_b8;
    uVar10 = 0;
    FUN_100176d50(0,0,local_b8,&DAT_10042b1f8,puVar21);
    FUN_10002a29c(lVar17,&DAT_100561090,&DAT_10041c870);
    uVar23 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x30) = uVar10;
    _swift_retain(uVar10);
    _swift_release(uVar23);
    objc_stub::unlock(local_a0);
    _swift_release(puVar19);
    _swift_bridgeObjectRelease(puVar8);
    _swift_release(uVar10);
    puVar21 = local_98;
  }
  _swift_release(puVar21);
LAB_1001f0df0:
  (**(code **)(lVar24 + 8))(puVar16,UVar5.unknown);
  return;
}

