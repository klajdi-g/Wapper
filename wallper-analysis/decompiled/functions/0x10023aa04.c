// rea decompile_all
// name: FUN_10023aa04
// address: 0x10023aa04
// body: available
// range: 0x10023aa04-0x10023ae7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10023aa04(double param_1,double param_2,undefined8 param_3,long param_4,long param_5,
                  ulong param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  bool bVar2;
  URL UVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_d0 [8];
  ulong local_c8;
  undefined1 *local_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  local_b0 = param_5;
  local_a8 = param_7;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar12 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  puVar4 = &DAT_10054ea38;
  FUN_100002f94(&DAT_10054ea38,&DAT_100426270);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar5 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar8 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_b8 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = lVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar8 - extraout_x12_00;
  _swift_beginAccess(param_4 + 0x10,auStack_88,0,0);
  param_4 = param_4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar10 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
  if (param_4 == 0) {
    return;
  }
  local_c0 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_4 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,auStack_a0,0
                     ,0);
  lVar10 = *(long *)(param_4 + lVar10);
  local_c8 = param_6;
  if (*(long *)(lVar10 + 0x10) == 0) {
    pcVar9 = *(code **)(lVar12 + 0x38);
    (*pcVar9)(lVar13,1,1,UVar3.unknown);
  }
  else {
    _swift_bridgeObjectRetain(lVar10);
    lVar6 = local_b0;
    FUN_10000464c(local_b0);
    bVar2 = (param_6 & 1) == 0;
    if (bVar2) {
      pcVar9 = *(code **)(lVar12 + 0x38);
    }
    else {
      (**(code **)(lVar12 + 0x10))
                (lVar13,*(long *)(lVar10 + 0x38) + *(long *)(lVar12 + 0x48) * lVar6,UVar3.unknown);
      pcVar9 = *(code **)(lVar12 + 0x38);
    }
    (*pcVar9)(lVar13,bVar2,1,UVar3.unknown);
    _swift_bridgeObjectRelease(lVar10);
  }
  (**(code **)(lVar12 + 0x10))(lVar8,local_a8,UVar3.unknown);
  (*pcVar9)(lVar8,0,1,UVar3.unknown);
  lVar10 = (long)*(int *)(puVar4 + 0x30);
  FUN_1000087e4(lVar13,lVar11,&DAT_100553d90,&DAT_10041bf10);
  FUN_1000087e4(lVar8,lVar11 + lVar10,&DAT_100553d90,&DAT_10041bf10);
  pcVar9 = *(code **)(lVar12 + 0x30);
  lVar7 = lVar11;
  (*pcVar9)(lVar11,1,UVar3.unknown);
  lVar6 = local_b8;
  if ((int)lVar7 == 1) {
    FUN_10002a29c(lVar8,&DAT_100553d90,&DAT_10041bf10);
    FUN_10002a29c(lVar13,&DAT_100553d90,&DAT_10041bf10);
    lVar10 = lVar11 + lVar10;
    (*pcVar9)(lVar10,1,UVar3.unknown);
    if ((int)lVar10 != 1) {
LAB_10023ad4c:
      FUN_10002a29c(lVar11,&DAT_10054ea38,&DAT_100426270);
      return;
    }
    FUN_10002a29c(lVar11,&DAT_100553d90,&DAT_10041bf10);
  }
  else {
    FUN_1000087e4(lVar11,local_b8,&DAT_100553d90,&DAT_10041bf10);
    lVar7 = lVar11 + lVar10;
    (*pcVar9)(lVar7,1,UVar3.unknown);
    puVar1 = local_c0;
    if ((int)lVar7 == 1) {
      FUN_10002a29c(lVar8,&DAT_100553d90,&DAT_10041bf10);
      FUN_10002a29c(lVar13,&DAT_100553d90,&DAT_10041bf10);
      (**(code **)(lVar12 + 8))(lVar6,UVar3.unknown);
      goto LAB_10023ad4c;
    }
    (**(code **)(lVar12 + 0x20))(local_c0,lVar11 + lVar10,UVar3.unknown);
    puVar4 = &DAT_100553da0;
    FUN_1000036d0(&DAT_100553da0,PTR_typeMetadataAccessor_100520a18,
                  PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
    bVar2 = Swift::Equatable::___infix(lVar6,puVar1,UVar3.unknown,puVar4);
    pcVar9 = *(code **)(lVar12 + 8);
    (*pcVar9)(puVar1,UVar3.unknown);
    FUN_10002a29c(lVar8,&DAT_100553d90,&DAT_10041bf10);
    FUN_10002a29c(lVar13,&DAT_100553d90,&DAT_10041bf10);
    (*pcVar9)(lVar6,UVar3.unknown);
    FUN_10002a29c(lVar11,&DAT_100553d90,&DAT_10041bf10);
    if (!bVar2) {
      return;
    }
  }
  if ((*(double *)(param_4 + _TtC7Wallper21VideoWallpaperManager::appliedMaxResolution) == param_1)
     && (((double *)(param_4 + _TtC7Wallper21VideoWallpaperManager::appliedMaxResolution))[1] ==
         param_2)) {
    FUN_100239edc(local_b0,local_c8);
  }
  return;
}

