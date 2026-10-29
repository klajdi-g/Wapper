// rea decompile_all
// name: FUN_100173bec
// address: 0x100173bec
// body: available
// range: 0x100173bec-0x1001740b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100173bec(ulong param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  URL UVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long local_b0;
  ulong local_a8;
  long local_a0;
  ulong local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar13 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  lVar14 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_10054ea38;
  local_a0 = lVar14;
  FUN_100002f94(&DAT_10054ea38,&DAT_100426270);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar14 - extraout_x8_00;
  puVar6 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar16 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar16 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar18 - extraout_x12_00;
  uVar11 = *(undefined8 *)(unaff_x20 + _TtC7Wallper14MonitorManager::disabledScreens);
  _swift_bridgeObjectRetain(uVar11);
  local_98 = param_1;
  FUN_1002165a4(param_1,param_2,uVar11);
  _swift_bridgeObjectRelease(uVar11);
  if ((param_1 & 1) != 0) {
    return 3;
  }
  if (DAT_100557bb0 != -1) {
    _swift_once(&DAT_100557bb0,FUN_100233158);
  }
  lVar8 = DAT_100577d38;
  lVar12 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
  _swift_beginAccess(DAT_100577d38 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,
                     auStack_78,0,0);
  local_b0 = lVar8;
  lVar12 = *(long *)(lVar8 + lVar12);
  local_a8 = param_2;
  if (*(long *)(lVar12 + 0x10) == 0) {
    pcVar15 = *(code **)(lVar13 + 0x38);
    (*pcVar15)(lVar17,1,1,UVar4.unknown);
  }
  else {
    _swift_bridgeObjectRetain(lVar12);
    uVar7 = local_98;
    FUN_10000464c(local_98);
    bVar2 = (param_2 & 1) == 0;
    if (bVar2) {
      pcVar15 = *(code **)(lVar13 + 0x38);
    }
    else {
      (**(code **)(lVar13 + 0x10))
                (lVar17,*(long *)(lVar12 + 0x38) + *(long *)(lVar13 + 0x48) * uVar7,UVar4.unknown);
      pcVar15 = *(code **)(lVar13 + 0x38);
    }
    (*pcVar15)(lVar17,bVar2,1,UVar4.unknown);
    _swift_bridgeObjectRelease(lVar12);
  }
  (*pcVar15)(lVar18,1,1,UVar4.unknown);
  lVar12 = (long)*(int *)(puVar5 + 0x30);
  FUN_100077938(lVar17,lVar14);
  FUN_100077938(lVar18,lVar14 + lVar12);
  pcVar15 = *(code **)(lVar13 + 0x30);
  lVar8 = lVar14;
  (*pcVar15)(lVar14,1,UVar4.unknown);
  if ((int)lVar8 == 1) {
    FUN_10002a29c(lVar18,&DAT_100553d90,&DAT_10041bf10);
    FUN_10002a29c(lVar17,&DAT_100553d90,&DAT_10041bf10);
    lVar12 = lVar14 + lVar12;
    (*pcVar15)(lVar12,1,UVar4.unknown);
    if ((int)lVar12 == 1) {
      FUN_10002a29c(lVar14,&DAT_100553d90,&DAT_10041bf10);
      return 0;
    }
  }
  else {
    FUN_100077938(lVar14,lVar16);
    lVar8 = lVar14 + lVar12;
    (*pcVar15)(lVar8,1,UVar4.unknown);
    lVar1 = local_a0;
    if ((int)lVar8 != 1) {
      (**(code **)(lVar13 + 0x20))(local_a0,lVar14 + lVar12,UVar4.unknown);
      puVar5 = &DAT_100553da0;
      FUN_1000036d0(&DAT_100553da0,PTR_typeMetadataAccessor_100520a18,
                    PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
      bVar2 = Swift::Equatable::___infix(lVar16,lVar1,UVar4.unknown,puVar5);
      pcVar15 = *(code **)(lVar13 + 8);
      (*pcVar15)(lVar1,UVar4.unknown);
      FUN_10002a29c(lVar18,&DAT_100553d90,&DAT_10041bf10);
      FUN_10002a29c(lVar17,&DAT_100553d90,&DAT_10041bf10);
      (*pcVar15)(lVar16,UVar4.unknown);
      FUN_10002a29c(lVar14,&DAT_100553d90,&DAT_10041bf10);
      if (bVar2) {
        return 0;
      }
      goto LAB_100173f60;
    }
    FUN_10002a29c(lVar18,&DAT_100553d90,&DAT_10041bf10);
    FUN_10002a29c(lVar17,&DAT_100553d90,&DAT_10041bf10);
    (**(code **)(lVar13 + 8))(lVar16,UVar4.unknown);
  }
  FUN_10002a29c(lVar14,&DAT_10054ea38,&DAT_100426270);
LAB_100173f60:
  uVar7 = local_a8;
  lVar13 = local_b0;
  lVar14 = _TtC7Wallper21VideoWallpaperManager::windows;
  _swift_beginAccess(local_b0 + _TtC7Wallper21VideoWallpaperManager::windows,auStack_90,0,0);
  lVar14 = *(long *)(lVar13 + lVar14);
  if (*(long *)(lVar14 + 0x10) == 0) {
    uVar3 = 1;
  }
  else {
    _swift_bridgeObjectRetain(lVar14);
    uVar9 = local_98;
    uVar10 = uVar7;
    FUN_10000464c(local_98);
    _swift_bridgeObjectRelease(lVar14);
    uVar3 = 1;
    if ((uVar10 & 1) != 0) {
      FUN_10023c0d0(uVar9,uVar7);
      uVar3 = 1;
      if ((uVar9 & 1) == 0) {
        uVar3 = 2;
      }
    }
  }
  return uVar3;
}

