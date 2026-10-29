// rea decompile_all
// name: FUN_1001073b8
// address: 0x1001073b8
// body: available
// range: 0x1001073b8-0x10010772b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001073b8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long extraout_x8;
  code *pcVar6;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long local_70;
  long local_68;
  
  puVar1 = &DAT_100551e50;
  FUN_100002f94(&DAT_100551e50,&DAT_100429e60);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  lVar9 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = lVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar7 = lVar11 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar7 - extraout_x12_01;
  uVar10 = *(undefined8 *)(unaff_x20 + 8);
  puVar1 = &DAT_100425850;
  _swift_getKeyPath(&DAT_100425850);
  puVar2 = &DAT_100425878;
  _swift_getKeyPath(&DAT_100425878);
  Combine::Published::_get_subscript(&local_68,uVar10,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  if (*(long *)(local_68 + 0x10) != 0) {
    lVar14 = *(long *)(unaff_x20 + 0x10);
    uVar4 = *(ulong *)(unaff_x20 + 0x18);
    _swift_bridgeObjectRetain(local_68);
    FUN_10000464c(lVar14);
    if ((uVar4 & 1) != 0) {
      lVar13 = *(long *)(local_68 + 0x38);
      lVar3 = 0;
      FUN_100126a5c();
      lVar8 = *(long *)(lVar3 + -8);
      local_70 = lVar11;
      FUN_10010b814(lVar13 + *(long *)(lVar8 + 0x48) * lVar14,lVar12);
      _swift_bridgeObjectRelease(local_68);
      pcVar6 = *(code **)(lVar8 + 0x38);
      uVar5 = 0;
      lVar11 = local_70;
      goto LAB_100107568;
    }
    _swift_bridgeObjectRelease(local_68);
  }
  lVar3 = 0;
  FUN_100126a5c();
  pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  uVar5 = 1;
LAB_100107568:
  (*pcVar6)(lVar12,uVar5,1,lVar3);
  _swift_bridgeObjectRelease(local_68);
  FUN_10010c67c(lVar12,lVar7);
  FUN_100126a5c(0);
  lVar14 = *(long *)(lVar3 + -8);
  pcVar6 = *(code **)(lVar14 + 0x30);
  lVar12 = lVar7;
  (*pcVar6)(lVar7,1,lVar3);
  if ((int)lVar12 == 1) {
    puVar1 = &DAT_1004258e0;
    _swift_getKeyPath(&DAT_1004258e0);
    puVar2 = &DAT_100425908;
    _swift_getKeyPath(&DAT_100425908);
    Combine::Published::_get_subscript(lVar11,uVar10,puVar1,puVar2);
    _swift_release(puVar1);
    _swift_release(puVar2);
    FUN_10010c67c(lVar11,lVar9);
    lVar11 = lVar9;
    (*pcVar6)(lVar9,1,lVar3);
    if ((int)lVar11 == 1) {
      puVar1 = &DAT_100425898;
      _swift_getKeyPath(&DAT_100425898);
      puVar2 = &DAT_1004258c0;
      _swift_getKeyPath(&DAT_1004258c0);
      Combine::Published::_get_subscript(param_1,uVar10,puVar1,puVar2);
      _swift_release(puVar1);
      _swift_release(puVar2);
      lVar11 = lVar9;
      (*pcVar6)(lVar9,1,lVar3);
      if ((int)lVar11 != 1) {
        FUN_10002a29c(lVar9,&DAT_100551e50,&DAT_100429e60);
      }
    }
    else {
      FUN_10010b858(lVar9,param_1);
      (**(code **)(lVar14 + 0x38))(param_1,0,1,lVar3);
    }
    lVar11 = lVar7;
    (*pcVar6)(lVar7,1,lVar3);
    if ((int)lVar11 != 1) {
      FUN_10002a29c(lVar7,&DAT_100551e50,&DAT_100429e60);
    }
  }
  else {
    FUN_10010b858(lVar7,param_1);
    (**(code **)(lVar14 + 0x38))(param_1,0,1,lVar3);
  }
  return;
}

