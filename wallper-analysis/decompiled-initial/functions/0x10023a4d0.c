// rea decompile_all
// name: FUN_10023a4d0
// address: 0x10023a4d0
// body: available
// range: 0x10023a4d0-0x10023aa03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10023a4d0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  bool bVar2;
  URL UVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined7 extraout_var;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar8;
  long lVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined1 auStack_e0 [4];
  uint local_dc;
  code *local_d8;
  ulong local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  undefined1 *local_b0;
  long local_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  local_a8 = param_4;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar14 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar4 = &DAT_10054ea38;
  local_c0 = extraout_x12;
  local_b0 = auStack_e0 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_10054ea38,&DAT_100426270);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)(auStack_e0 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0)) - extraout_x8;
  puVar5 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar9 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_b8 = lVar9;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = lVar9 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar9 - extraout_x12_01;
  _swift_beginAccess(param_3 + 0x10,auStack_88,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar10 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
  if (param_3 == 0) {
    return;
  }
  _swift_beginAccess(param_3 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,auStack_a0,0
                     ,0);
  lVar10 = *(long *)(param_3 + lVar10);
  local_d0 = param_5;
  if (*(long *)(lVar10 + 0x10) == 0) {
    pcVar15 = *(code **)(lVar14 + 0x38);
    (*pcVar15)(lVar12,1,1,UVar3.unknown);
  }
  else {
    _swift_bridgeObjectRetain(lVar10);
    lVar6 = local_a8;
    FUN_10000464c(local_a8);
    bVar2 = (param_5 & 1) == 0;
    if (bVar2) {
      pcVar15 = *(code **)(lVar14 + 0x38);
    }
    else {
      (**(code **)(lVar14 + 0x10))
                (lVar12,*(long *)(lVar10 + 0x38) + *(long *)(lVar14 + 0x48) * lVar6,UVar3.unknown);
      pcVar15 = *(code **)(lVar14 + 0x38);
    }
    (*pcVar15)(lVar12,bVar2,1,UVar3.unknown);
    _swift_bridgeObjectRelease(lVar10);
  }
  local_d8 = *(code **)(lVar14 + 0x10);
  local_c8 = param_6;
  (*local_d8)(lVar9,param_6,UVar3.unknown);
  (*pcVar15)(lVar9,0,1,UVar3.unknown);
  lVar10 = (long)*(int *)(puVar4 + 0x30);
  FUN_1000087e4(lVar12,lVar16,&DAT_100553d90,&DAT_10041bf10);
  FUN_1000087e4(lVar9,lVar16 + lVar10,&DAT_100553d90,&DAT_10041bf10);
  pcVar15 = *(code **)(lVar14 + 0x30);
  lVar7 = lVar16;
  (*pcVar15)(lVar16,1,UVar3.unknown);
  lVar6 = local_b8;
  if ((int)lVar7 == 1) {
    FUN_10002a29c(lVar9,&DAT_100553d90,&DAT_10041bf10);
    FUN_10002a29c(lVar12,&DAT_100553d90,&DAT_10041bf10);
    lVar10 = lVar16 + lVar10;
    (*pcVar15)(lVar10,1,UVar3.unknown);
    if ((int)lVar10 != 1) {
LAB_10023a82c:
      FUN_10002a29c(lVar16,&DAT_10054ea38,&DAT_100426270);
      return;
    }
    FUN_10002a29c(lVar16,&DAT_100553d90,&DAT_10041bf10);
    puVar17 = local_b0;
  }
  else {
    FUN_1000087e4(lVar16,local_b8,&DAT_100553d90,&DAT_10041bf10);
    lVar7 = lVar16 + lVar10;
    (*pcVar15)(lVar7,1,UVar3.unknown);
    puVar17 = local_b0;
    if ((int)lVar7 == 1) {
      FUN_10002a29c(lVar9,&DAT_100553d90,&DAT_10041bf10);
      FUN_10002a29c(lVar12,&DAT_100553d90,&DAT_10041bf10);
      (**(code **)(lVar14 + 8))(lVar6,UVar3.unknown);
      goto LAB_10023a82c;
    }
    (**(code **)(lVar14 + 0x20))(local_b0,lVar16 + lVar10,UVar3.unknown);
    puVar4 = &DAT_100553da0;
    FUN_1000036d0(&DAT_100553da0,PTR_typeMetadataAccessor_100520a18,
                  PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
    bVar2 = Swift::Equatable::___infix(lVar6,puVar17,UVar3.unknown,puVar4);
    local_dc = (uint)CONCAT71(extraout_var,bVar2);
    pcVar15 = *(code **)(lVar14 + 8);
    (*pcVar15)(puVar17,UVar3.unknown);
    FUN_10002a29c(lVar9,&DAT_100553d90,&DAT_10041bf10);
    FUN_10002a29c(lVar12,&DAT_100553d90,&DAT_10041bf10);
    (*pcVar15)(lVar6,UVar3.unknown);
    FUN_10002a29c(lVar16,&DAT_100553d90,&DAT_10041bf10);
    if ((local_dc & 1) == 0) {
      return;
    }
  }
  puVar4 = &DAT_1005340c8;
  _swift_allocObject(&DAT_1005340c8,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,param_3);
  uVar1 = local_c8;
  (*local_d8)(puVar17,local_c8,UVar3.unknown);
  uVar8 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar11 = uVar8 + 0x28 & (uVar8 ^ 0xffffffffffffffff);
  uVar13 = local_c0 + uVar11 + 7 & 0xfffffffffffffff8;
  puVar5 = &DAT_100535040;
  _swift_allocObject(&DAT_100535040,uVar13 + 0x10,uVar8 | 7);
  uVar8 = local_d0;
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(long *)(puVar5 + 0x18) = local_a8;
  *(ulong *)(puVar5 + 0x20) = local_d0;
  (**(code **)(lVar14 + 0x20))(puVar5 + uVar11,puVar17,UVar3.unknown);
  *(undefined8 *)(puVar5 + uVar13) = param_1;
  *(undefined8 *)((long)(puVar5 + uVar13) + 8) = param_2;
  _swift_retain(puVar4);
  _swift_bridgeObjectRetain(uVar8);
  FUN_10029ccf0(param_1,param_2,uVar1,FUN_100259c68,puVar5);
  _swift_release(puVar4);
  _swift_release(puVar5);
  return;
}

