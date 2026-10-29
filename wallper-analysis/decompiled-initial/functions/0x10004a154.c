// rea decompile_all
// name: FUN_10004a154
// address: 0x10004a154
// body: available
// range: 0x10004a154-0x10004a52b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10004a154(void)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined1 auStack_a0 [8];
  undefined1 *local_98;
  byte local_90;
  undefined7 uStack_8f;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  FUN_10040211c();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  puVar3 = &DAT_10054b6b8;
  local_98 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_10054b6b8,&DAT_10041ca50);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar4 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  uVar9 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = uVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar11 - extraout_x12_00;
  FUN_100049bb4(lVar10);
  (**(code **)(lVar8 + 0x38))(lVar11,1,1,lVar2);
  lVar12 = (long)*(int *)(puVar3 + 0x30);
  FUN_1000087e4(lVar10,lVar6,&DAT_10054ac40,&DAT_10041ce70);
  FUN_1000087e4(lVar11,lVar6 + lVar12,&DAT_10054ac40,&DAT_10041ce70);
  pcVar13 = *(code **)(lVar8 + 0x30);
  lVar8 = lVar6;
  (*pcVar13)(lVar6,1,lVar2);
  if ((int)lVar8 == 1) {
    FUN_10002a29c(lVar11,&DAT_10054ac40,&DAT_10041ce70);
    FUN_10002a29c(lVar10,&DAT_10054ac40,&DAT_10041ce70);
    lVar12 = lVar6 + lVar12;
    (*pcVar13)(lVar12,1,lVar2);
    if ((int)lVar12 != 1) {
LAB_10004a3b0:
      FUN_10002a29c(lVar6,&DAT_10054b6b8,&DAT_10041ca50);
      return 1;
    }
    FUN_10002a29c(lVar6,&DAT_10054ac40,&DAT_10041ce70);
  }
  else {
    FUN_1000087e4(lVar6,uVar9,&DAT_10054ac40,&DAT_10041ce70);
    lVar8 = lVar6 + lVar12;
    (*pcVar13)(lVar8,1,lVar2);
    puVar1 = local_98;
    if ((int)lVar8 == 1) {
      FUN_10002a29c(lVar11,&DAT_10054ac40,&DAT_10041ce70);
      FUN_10002a29c(lVar10,&DAT_10054ac40,&DAT_10041ce70);
      FUN_100029548(uVar9,FUN_10040211c);
      goto LAB_10004a3b0;
    }
    FUN_100007e64(lVar6 + lVar12,local_98,FUN_10040211c);
    uVar5 = uVar9;
    FUN_10040a7a0(uVar9,puVar1);
    FUN_100029548(puVar1,FUN_10040211c);
    FUN_10002a29c(lVar11,&DAT_10054ac40,&DAT_10041ce70);
    FUN_10002a29c(lVar10,&DAT_10054ac40,&DAT_10041ce70);
    FUN_100029548(uVar9,FUN_10040211c);
    FUN_10002a29c(lVar6,&DAT_10054ac40,&DAT_10041ce70);
    if ((uVar5 & 1) == 0) {
      return 1;
    }
  }
  uVar7 = *(undefined8 *)(unaff_x20 + 0xb8);
  puVar3 = &DAT_10041e620;
  _swift_getKeyPath(&DAT_10041e620);
  puVar4 = &DAT_10041e648;
  _swift_getKeyPath(&DAT_10041e648);
  Combine::Published::_get_subscript(&local_90,uVar7,puVar3,puVar4);
  _swift_release(puVar3);
  _swift_release(puVar4);
  if ((local_90 & 1) == 0) {
    puVar3 = &DAT_10041e400;
    _swift_getKeyPath(&DAT_10041e400);
    puVar4 = &DAT_10041e428;
    _swift_getKeyPath(&DAT_10041e428);
    Combine::Published::_get_subscript(&local_90,uVar7,puVar3,puVar4);
    _swift_release(puVar3);
    _swift_release(puVar4);
    if (local_88 == 0) {
      return 0;
    }
    FUN_10002a3bc(CONCAT71(uStack_8f,local_90),local_88,local_80,uStack_78,local_70,uStack_68);
  }
  return 1;
}

