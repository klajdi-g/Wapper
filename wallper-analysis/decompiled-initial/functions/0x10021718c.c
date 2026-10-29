// rea decompile_all
// name: FUN_10021718c
// address: 0x10021718c
// body: available
// range: 0x10021718c-0x10021764f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10021718c(void)

{
  long lVar1;
  undefined *puVar2;
  UUID UVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long extraout_x12_00;
  ulong extraout_x13;
  long lVar7;
  long unaff_x20;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long local_90;
  long local_88;
  ulong local_80;
  undefined *local_78;
  long local_70;
  
  lVar1 = 0;
  FUN_10025ee04();
  local_70 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_70 + 0x40));
  lVar11 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_10054b728;
  FUN_100002f94(&DAT_10054b728,&DAT_10041cbf0);
  local_78 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar11 - extraout_x8_00;
  puVar2 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar7 - extraout_x8_01;
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar9 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  lVar10 = lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_10054ac38;
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = (lVar10 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar13 - extraout_x12_00;
  if ((*(byte *)(unaff_x20 + _TtC7Wallper19ShuffleQueueManager::activatingSource) & 1) != 0) {
    return;
  }
  lVar4 = unaff_x20 + _TtC7Wallper19ShuffleQueueManager::playlistManager;
  local_90 = lVar11;
  local_80 = extraout_x13;
  _swift_weakLoadStrong();
  if (lVar4 == 0) {
    pcVar8 = *(code **)(local_70 + 0x38);
LAB_100217400:
    lVar9 = local_70;
    (*pcVar8)(lVar12,1,1,lVar1);
  }
  else {
    puVar2 = &DAT_10042b800;
    local_88 = lVar1;
    _swift_getKeyPath(&DAT_10042b800);
    puVar5 = &DAT_10042b828;
    _swift_getKeyPath(&DAT_10042b828);
    Combine::Published::_get_subscript(lVar14,lVar4,puVar2,puVar5);
    _swift_release(puVar2);
    _swift_release(puVar5);
    lVar1 = lVar14;
    (**(code **)(lVar9 + 0x30))(lVar14,1,UVar3.unknown);
    if ((int)lVar1 == 1) {
      _swift_release(lVar4);
      FUN_10002a29c(lVar14,&DAT_10054a9c8,&DAT_10041bbe0);
      pcVar8 = *(code **)(local_70 + 0x38);
      lVar1 = local_88;
      goto LAB_100217400;
    }
    (**(code **)(lVar9 + 0x20))(lVar10,lVar14,UVar3.unknown);
    FUN_1001b6e74(lVar12,lVar10);
    _swift_release(lVar4);
    (**(code **)(lVar9 + 8))(lVar10,UVar3.unknown);
    pcVar8 = *(code **)(local_70 + 0x38);
    lVar9 = local_70;
    lVar1 = local_88;
  }
  (*pcVar8)(lVar13,1,1,lVar1);
  lVar10 = (long)*(int *)(local_78 + 0x30);
  FUN_1000087e4(lVar12,lVar7,&DAT_10054ac38,&DAT_10041e8e0);
  FUN_1000087e4(lVar13,lVar7 + lVar10,&DAT_10054ac38,&DAT_10041e8e0);
  pcVar8 = *(code **)(lVar9 + 0x30);
  lVar9 = lVar7;
  (*pcVar8)(lVar7,1,lVar1);
  if ((int)lVar9 == 1) {
    FUN_10002a29c(lVar13,&DAT_10054ac38,&DAT_10041e8e0);
    FUN_10002a29c(lVar12,&DAT_10054ac38,&DAT_10041e8e0);
    lVar10 = lVar7 + lVar10;
    (*pcVar8)(lVar10,1,lVar1);
    if ((int)lVar10 == 1) {
      FUN_10002a29c(lVar7,&DAT_10054ac38,&DAT_10041e8e0);
      return;
    }
  }
  else {
    FUN_1000087e4(lVar7,local_80,&DAT_10054ac38,&DAT_10041e8e0);
    lVar9 = lVar7 + lVar10;
    (*pcVar8)(lVar9,1,lVar1);
    lVar1 = local_90;
    if ((int)lVar9 != 1) {
      FUN_100007e64(lVar7 + lVar10,local_90,FUN_10025ee04);
      uVar6 = local_80;
      FUN_100265c18(local_80,lVar1);
      FUN_100029548(lVar1,FUN_10025ee04);
      FUN_10002a29c(lVar13,&DAT_10054ac38,&DAT_10041e8e0);
      FUN_10002a29c(lVar12,&DAT_10054ac38,&DAT_10041e8e0);
      FUN_100029548(local_80,FUN_10025ee04);
      FUN_10002a29c(lVar7,&DAT_10054ac38,&DAT_10041e8e0);
      if ((uVar6 & 1) != 0) {
        return;
      }
      goto LAB_10021759c;
    }
    FUN_10002a29c(lVar13,&DAT_10054ac38,&DAT_10041e8e0);
    FUN_10002a29c(lVar12,&DAT_10054ac38,&DAT_10041e8e0);
    FUN_100029548(local_80,FUN_10025ee04);
  }
  FUN_10002a29c(lVar7,&DAT_10054b728,&DAT_10041cbf0);
LAB_10021759c:
  FUN_10021aa94();
  return;
}

