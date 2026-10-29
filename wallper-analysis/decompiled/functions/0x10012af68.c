// rea decompile_all
// name: FUN_10012af68
// address: 0x10012af68
// body: available
// range: 0x10012af68-0x10012b91b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10012af68(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  bool bVar3;
  UUID UVar4;
  URL UVar5;
  undefined *puVar6;
  Notification NVar7;
  char **ppcVar8;
  long lVar9;
  undefined7 extraout_var;
  ID self;
  UUID UVar10;
  Bucket BVar11;
  void *pvVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long lVar15;
  code *pcVar16;
  long lVar17;
  char *pcVar18;
  long lVar19;
  String SVar20;
  undefined1 auVar21 [16];
  undefined1 auStack_130 [12];
  uint local_124;
  undefined *local_120;
  char *local_118;
  long local_110;
  long local_108;
  long local_100;
  undefined1 *local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  void *local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  undefined1 auStack_b8 [24];
  char *local_a0;
  void *pvStack_98;
  undefined1 auStack_88 [24];
  long local_70;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  local_f0 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  local_f8 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  pcVar18 = *(char **)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(pcVar18 + 0x40));
  lVar13 = (long)(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_10054ea38;
  local_e8 = lVar13;
  FUN_100002f94(&DAT_10054ea38,&DAT_100426270);
  local_c8 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar13 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_e0 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar13 - extraout_x12;
  NVar7.unknown = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(NVar7.unknown + -8) + 0x40));
  lVar15 = lVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_c0 = lVar15 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = (lVar15 - extraout_x12_00) - extraout_x12_01;
  local_d0 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar14 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar14 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar19 - extraout_x12_04;
  Foundation::Notification::_get_object(NVar7);
  if (local_70 == 0) {
    FUN_10002a29c(auStack_88,&DAT_10054d428,&DAT_100420300);
  }
  else {
    ppcVar8 = &local_a0;
    _swift_dynamicCast(ppcVar8,auStack_88,PTR___type_metadata_for_Any_100524178 + 8,
                       PTR___type_metadata_for_Swift_String_100523a98,6);
    lVar9 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
    if (((ulong)ppcVar8 & 1) != 0) {
      local_120 = UVar4.unknown;
      local_110 = lVar14;
      local_100 = lVar15;
      _swift_beginAccess(param_2 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,
                         auStack_b8,0,0);
      lVar15 = *(long *)(param_2 + lVar9);
      local_d8 = pvStack_98;
      local_108 = param_2;
      if (*(long *)(lVar15 + 0x10) == 0) {
        pcVar16 = *(code **)(pcVar18 + 0x38);
        (*pcVar16)(lVar17,1,1,UVar5.unknown);
        BVar11.unknown = local_a0;
      }
      else {
        _swift_bridgeObjectRetain(lVar15);
        local_118 = local_a0;
        FUN_10000464c(local_a0);
        bVar3 = ((ulong)pvStack_98 & 1) == 0;
        if (bVar3) {
          pcVar16 = *(code **)(pcVar18 + 0x38);
        }
        else {
          (**(code **)(pcVar18 + 0x10))
                    (lVar17,*(long *)(lVar15 + 0x38) + *(long *)(pcVar18 + 0x48) * (long)local_a0,
                     UVar5.unknown);
          pcVar16 = *(code **)(pcVar18 + 0x38);
        }
        (*pcVar16)(lVar17,bVar3,1,UVar5.unknown);
        _swift_bridgeObjectRelease(lVar15);
        BVar11.unknown = local_118;
      }
      (*pcVar16)(lVar19,1,1,UVar5.unknown);
      lVar15 = (long)*(int *)(local_c8 + 0x30);
      FUN_1000087e4(lVar17,lVar13,&DAT_100553d90,&DAT_10041bf10);
      FUN_1000087e4(lVar19,lVar13 + lVar15,&DAT_100553d90,&DAT_10041bf10);
      pcVar16 = *(code **)(pcVar18 + 0x30);
      lVar9 = lVar13;
      local_118 = pcVar18;
      (*pcVar16)(lVar13,1,UVar5.unknown);
      lVar14 = local_110;
      if ((int)lVar9 == 1) {
        FUN_10002a29c(lVar19,&DAT_100553d90,&DAT_10041bf10);
        FUN_10002a29c(lVar17,&DAT_100553d90,&DAT_10041bf10);
        lVar15 = lVar13 + lVar15;
        (*pcVar16)(lVar15,1,UVar5.unknown);
        if ((int)lVar15 != 1) {
LAB_10012b3e0:
          FUN_10002a29c(lVar13,&DAT_10054ea38,&DAT_100426270);
          goto LAB_10012b8f4;
        }
        FUN_10002a29c(lVar13,&DAT_100553d90,&DAT_10041bf10);
        pcVar18 = local_118;
      }
      else {
        FUN_1000087e4(lVar13,local_110,&DAT_100553d90,&DAT_10041bf10);
        lVar9 = lVar13 + lVar15;
        (*pcVar16)(lVar9,1,UVar5.unknown);
        lVar2 = local_e8;
        pcVar18 = local_118;
        if ((int)lVar9 == 1) {
          FUN_10002a29c(lVar19,&DAT_100553d90,&DAT_10041bf10);
          FUN_10002a29c(lVar17,&DAT_100553d90,&DAT_10041bf10);
          (**(code **)(local_118 + 8))(lVar14,UVar5.unknown);
          goto LAB_10012b3e0;
        }
        (**(code **)(local_118 + 0x20))(local_e8,lVar13 + lVar15,UVar5.unknown);
        puVar6 = &DAT_100553da0;
        FUN_1000036d0(&DAT_100553da0,PTR_typeMetadataAccessor_100520a18,
                      PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
        bVar3 = Swift::Equatable::___infix(lVar14,lVar2,UVar5.unknown,puVar6);
        local_124 = (uint)CONCAT71(extraout_var,bVar3);
        pcVar16 = *(code **)(pcVar18 + 8);
        (*pcVar16)(lVar2,UVar5.unknown);
        FUN_10002a29c(lVar19,&DAT_100553d90,&DAT_10041bf10);
        FUN_10002a29c(lVar17,&DAT_100553d90,&DAT_10041bf10);
        (*pcVar16)(lVar14,UVar5.unknown);
        FUN_10002a29c(lVar13,&DAT_100553d90,&DAT_10041bf10);
        if ((local_124 & 1) == 0) goto LAB_10012b8f4;
      }
      _swift_bridgeObjectRelease(local_d8);
      lVar15 = local_100;
      UVar4.unknown = local_120;
      param_2 = local_108;
    }
  }
  self = NSScreen::mainScreen((ID)&_OBJC_CLASS___NSScreen);
  lVar14 = local_c0;
  lVar13 = local_d0;
  if (self == 0) {
LAB_10012b860:
    lVar15 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
    _swift_beginAccess(param_2 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,auStack_88
                       ,0,0);
    lVar15 = *(long *)(param_2 + lVar15);
    _swift_bridgeObjectRetain(*(undefined1 *)(lVar15 + 0x20),lVar15);
    BVar11 = Swift::_HashTable::get_startBucket((undefined *)(lVar15 + 0x40));
    if (BVar11.unknown == (undefined *)(1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f))) {
      _swift_bridgeObjectRelease(lVar15);
      BVar11.unknown = (char *)0x0;
      local_d8 = (void *)0x0;
    }
    else {
      pvVar12 = (void *)(ulong)*(uint *)(lVar15 + 0x24);
      FUN_100229aa4(BVar11.unknown,pvVar12,0,lVar15);
      _swift_bridgeObjectRetain(pvVar12);
      _swift_bridgeObjectRelease(lVar15);
      local_d8 = pvVar12;
    }
  }
  else {
    local_100 = lVar15;
    FUN_100174ed8();
    puVar1 = local_f8;
    if (self == 0) {
      UVar10 = Foundation::UUID::init();
      SVar20 = Foundation::UUID::get_uuidString(UVar10);
      (**(code **)(local_f0 + 8))(puVar1,UVar4.unknown);
    }
    else {
      objc_stub::stringValue(self);
      SVar20 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    lVar15 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
    BVar11.unknown = SVar20.str;
    _swift_beginAccess(param_2 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,&local_a0,
                       0,0);
    lVar15 = *(long *)(param_2 + lVar15);
    local_d8 = SVar20.bridgeObject;
    local_108 = param_2;
    if (*(long *)(lVar15 + 0x10) == 0) {
      pcVar16 = *(code **)(pcVar18 + 0x38);
      (*pcVar16)(lVar13,1,1,UVar5.unknown);
    }
    else {
      _swift_bridgeObjectRetain(lVar15);
      FUN_10000464c(BVar11.unknown);
      bVar3 = ((ulong)SVar20.bridgeObject & 1) == 0;
      if (bVar3) {
        pcVar16 = *(code **)(pcVar18 + 0x38);
      }
      else {
        (**(code **)(pcVar18 + 0x10))
                  (lVar13,*(long *)(lVar15 + 0x38) + *(long *)(pcVar18 + 0x48) * (long)SVar20.str,
                   UVar5.unknown);
        pcVar16 = *(code **)(pcVar18 + 0x38);
      }
      (*pcVar16)(lVar13,bVar3,1,UVar5.unknown);
      _swift_bridgeObjectRelease(lVar15);
    }
    (*pcVar16)(lVar14,1,1,UVar5.unknown);
    lVar19 = local_e0;
    lVar15 = (long)*(int *)(local_c8 + 0x30);
    FUN_1000087e4(lVar13,local_e0,&DAT_100553d90,&DAT_10041bf10);
    FUN_1000087e4(lVar14,lVar19 + lVar15,&DAT_100553d90,&DAT_10041bf10);
    pcVar16 = *(code **)(pcVar18 + 0x30);
    lVar9 = lVar19;
    (*pcVar16)(lVar19,1,UVar5.unknown);
    lVar17 = local_100;
    if ((int)lVar9 == 1) {
      FUN_10002a29c(lVar14,&DAT_100553d90,&DAT_10041bf10);
      FUN_10002a29c(lVar13,&DAT_100553d90,&DAT_10041bf10);
      lVar15 = lVar19 + lVar15;
      (*pcVar16)(lVar15,1,UVar5.unknown);
      pvVar12 = local_d8;
      if ((int)lVar15 == 1) {
        FUN_10002a29c(lVar19,&DAT_100553d90,&DAT_10041bf10);
LAB_10012b854:
        _swift_bridgeObjectRelease(pvVar12);
        param_2 = local_108;
        goto LAB_10012b860;
      }
    }
    else {
      FUN_1000087e4(lVar19,local_100,&DAT_100553d90,&DAT_10041bf10);
      lVar14 = lVar19 + lVar15;
      (*pcVar16)(lVar14,1,UVar5.unknown);
      lVar9 = local_e8;
      if ((int)lVar14 != 1) {
        (**(code **)(pcVar18 + 0x20))(local_e8,lVar19 + lVar15,UVar5.unknown);
        puVar6 = &DAT_100553da0;
        FUN_1000036d0(&DAT_100553da0,PTR_typeMetadataAccessor_100520a18,
                      PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
        bVar3 = Swift::Equatable::___infix(lVar17,lVar9,UVar5.unknown,puVar6);
        pcVar16 = *(code **)(pcVar18 + 8);
        (*pcVar16)(lVar9,UVar5.unknown);
        FUN_10002a29c(local_c0,&DAT_100553d90,&DAT_10041bf10);
        FUN_10002a29c(lVar13,&DAT_100553d90,&DAT_10041bf10);
        (*pcVar16)(lVar17,UVar5.unknown);
        FUN_10002a29c(lVar19,&DAT_100553d90,&DAT_10041bf10);
        pvVar12 = local_d8;
        if (!bVar3) goto LAB_10012b8f4;
        goto LAB_10012b854;
      }
      FUN_10002a29c(local_c0,&DAT_100553d90,&DAT_10041bf10);
      FUN_10002a29c(lVar13,&DAT_100553d90,&DAT_10041bf10);
      (**(code **)(pcVar18 + 8))(lVar17,UVar5.unknown);
    }
    pvVar12 = local_d8;
    FUN_10002a29c(lVar19,&DAT_10054ea38,&DAT_100426270);
    local_d8 = pvVar12;
  }
LAB_10012b8f4:
  auVar21._8_8_ = local_d8;
  auVar21._0_8_ = BVar11.unknown;
  return auVar21;
}

