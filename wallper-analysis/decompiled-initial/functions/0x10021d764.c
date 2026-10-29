// rea decompile_all
// name: FUN_10021d764
// address: 0x10021d764
// body: available
// range: 0x10021d764-0x10021dc5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10021d764(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  URL UVar4;
  UUID UVar5;
  ID self;
  UUID UVar6;
  Bucket BVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar13;
  void *pvVar14;
  ulong uVar15;
  code *pcVar16;
  long lVar17;
  undefined1 *puVar18;
  long lVar19;
  long lVar20;
  void *pvVar21;
  String SVar22;
  undefined1 auStack_c0 [8];
  long local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar3 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  local_98 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar19 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar19 + 0x40));
  lVar12 = lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_b0 = lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar12 - extraout_x12_00;
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  lVar17 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  if (DAT_100557bb0 != -1) {
    _swift_once(&DAT_100557bb0,FUN_100233158);
  }
  lVar2 = DAT_100577d38;
  self = NSScreen::mainScreen((ID)&_OBJC_CLASS___NSScreen);
  if (self == 0) {
LAB_10021da3c:
    lVar12 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
    _swift_beginAccess(lVar2 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,auStack_78,0
                       ,0);
    lVar17 = *(long *)(lVar2 + lVar12);
    _swift_bridgeObjectRetain(*(undefined1 *)(lVar17 + 0x20),lVar17);
    BVar7 = Swift::_HashTable::get_startBucket((undefined *)(lVar17 + 0x40));
    if (BVar7.unknown == (undefined *)(1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f))) {
      _swift_bridgeObjectRelease(lVar17);
      pcVar13 = *(code **)(lVar19 + 0x38);
    }
    else {
      uVar9 = (ulong)*(uint *)(lVar17 + 0x24);
      FUN_100229aa4(BVar7.unknown,uVar9,0,lVar17);
      _swift_bridgeObjectRetain(uVar9);
      _swift_bridgeObjectRelease(lVar17);
      puVar18 = local_98;
      uVar15 = *(ulong *)(lVar2 + lVar12);
      if (*(long *)(uVar15 + 0x10) == 0) {
        pcVar13 = *(code **)(lVar19 + 0x38);
        (*pcVar13)(local_98,1,1,UVar4.unknown);
      }
      else {
        _swift_bridgeObjectRetain(uVar15);
        uVar10 = uVar9;
        FUN_10000464c(BVar7.unknown);
        puVar18 = local_98;
        bVar1 = (uVar10 & 1) == 0;
        if (bVar1) {
          pcVar13 = *(code **)(lVar19 + 0x38);
        }
        else {
          (**(code **)(lVar19 + 0x10))
                    (local_98,*(long *)(uVar15 + 0x38) +
                              *(long *)(lVar19 + 0x48) * (long)BVar7.unknown,UVar4.unknown);
          pcVar13 = *(code **)(lVar19 + 0x38);
        }
        (*pcVar13)(puVar18,bVar1,1,UVar4.unknown);
        _swift_bridgeObjectRelease(uVar9);
        uVar9 = uVar15;
      }
      _swift_bridgeObjectRelease(uVar9);
      puVar8 = puVar18;
      (**(code **)(lVar19 + 0x30))(puVar18,1,UVar4.unknown);
      lVar12 = local_b0;
      if ((int)puVar8 != 1) {
        pcVar16 = *(code **)(lVar19 + 0x20);
        (*pcVar16)(local_b0,puVar18,UVar4.unknown);
        (*pcVar16)(param_1,lVar12,UVar4.unknown);
        goto LAB_10021dc14;
      }
      FUN_10002a29c(puVar18,&DAT_100553d90,&DAT_10041bf10);
    }
    uVar11 = 1;
  }
  else {
    local_b8 = lVar12;
    local_a8 = lVar19;
    local_a0 = param_1;
    FUN_100174ed8();
    if (self == 0) {
      UVar6 = Foundation::UUID::init();
      SVar22 = Foundation::UUID::get_uuidString(UVar6);
      (**(code **)(lVar17 + 8))(lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0),UVar5.unknown)
      ;
    }
    else {
      objc_stub::stringValue(self);
      SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    lVar12 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
    pvVar21 = SVar22.bridgeObject;
    _swift_beginAccess(lVar2 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,auStack_90,0
                       ,0);
    lVar19 = local_a8;
    pvVar14 = *(void **)(lVar2 + lVar12);
    if (*(long *)((long)pvVar14 + 0x10) == 0) {
      pcVar13 = *(code **)(local_a8 + 0x38);
      (*pcVar13)(lVar20,1,1,UVar4.unknown);
    }
    else {
      _swift_bridgeObjectRetain(pvVar14);
      FUN_10000464c(SVar22.str);
      lVar19 = local_a8;
      bVar1 = ((ulong)SVar22.bridgeObject & 1) == 0;
      if (bVar1) {
        pcVar13 = *(code **)(local_a8 + 0x38);
      }
      else {
        (**(code **)(local_a8 + 0x10))
                  (lVar20,*(long *)((long)pvVar14 + 0x38) +
                          *(long *)(local_a8 + 0x48) * (long)SVar22.str,UVar4.unknown);
        pcVar13 = *(code **)(lVar19 + 0x38);
      }
      (*pcVar13)(lVar20,bVar1,1,UVar4.unknown);
      _swift_bridgeObjectRelease(pvVar21);
      pvVar21 = pvVar14;
    }
    _swift_bridgeObjectRelease(pvVar21);
    lVar17 = lVar20;
    (**(code **)(lVar19 + 0x30))(lVar20,1,UVar4.unknown);
    lVar12 = local_b8;
    if ((int)lVar17 == 1) {
      FUN_10002a29c(lVar20,&DAT_100553d90,&DAT_10041bf10);
      param_1 = local_a0;
      goto LAB_10021da3c;
    }
    pcVar16 = *(code **)(lVar19 + 0x20);
    (*pcVar16)(local_b8,lVar20,UVar4.unknown);
    param_1 = local_a0;
    (*pcVar16)(local_a0,lVar12,UVar4.unknown);
LAB_10021dc14:
    uVar11 = 0;
  }
  (*pcVar13)(param_1,uVar11,1,UVar4.unknown);
  return;
}

