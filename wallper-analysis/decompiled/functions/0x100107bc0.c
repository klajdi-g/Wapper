// rea decompile_all
// name: FUN_100107bc0
// address: 0x100107bc0
// body: available
// range: 0x100107bc0-0x100108023 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100107bc0(long param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  State SVar8;
  undefined *puVar9;
  long lVar10;
  long extraout_x8;
  ulong uVar11;
  long extraout_x12;
  long lVar12;
  undefined8 *unaff_x20;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 *puVar17;
  ulong uVar18;
  bool bVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auStack_e0 [8];
  long local_d8;
  long local_d0;
  undefined8 uStack_c8;
  byte local_61;
  
  puVar5 = &DAT_100551e50;
  FUN_100002f94(&DAT_100551e50,&DAT_100429e60);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = auStack_e0 + -extraout_x8;
  lVar6 = 0;
  FUN_100126a5c();
  lVar12 = *(long *)(lVar6 + -8);
  lVar16 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = (long)puVar17 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar14 - extraout_x12;
  FUN_1001073b8(puVar17);
  puVar7 = puVar17;
  (**(code **)(lVar12 + 0x30))(puVar17,1,lVar6);
  if ((int)puVar7 == 1) {
    FUN_10002a29c(puVar17,&DAT_100551e50,&DAT_100429e60);
  }
  else {
    FUN_10010b858(puVar17,lVar13);
    uStack_c8 = unaff_x20[9];
    local_d0 = unaff_x20[8];
    SVar8.unknown = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::get_wrappedValue(SVar8);
    if ((local_61 & 1) == 0) {
      FUN_100108024(param_1,lVar13);
      FUN_10010b814(lVar13,lVar14);
      uVar11 = (ulong)*(byte *)(lVar12 + 0x50);
      uVar18 = uVar11 + 0x70 & (uVar11 ^ 0xffffffffffffffff);
      puVar5 = &DAT_10052c2c8;
      _swift_allocObject(&DAT_10052c2c8,uVar18 + lVar16,uVar11 | 7);
      uVar15 = unaff_x20[4];
      uVar21 = unaff_x20[7];
      uVar20 = unaff_x20[6];
      *(undefined8 *)(puVar5 + 0x38) = unaff_x20[5];
      *(undefined8 *)(puVar5 + 0x30) = uVar15;
      *(undefined8 *)(puVar5 + 0x48) = uVar21;
      *(undefined8 *)(puVar5 + 0x40) = uVar20;
      uVar15 = unaff_x20[8];
      uVar21 = unaff_x20[0xb];
      uVar20 = unaff_x20[10];
      *(undefined8 *)(puVar5 + 0x58) = unaff_x20[9];
      *(undefined8 *)(puVar5 + 0x50) = uVar15;
      *(undefined8 *)(puVar5 + 0x68) = uVar21;
      *(undefined8 *)(puVar5 + 0x60) = uVar20;
      uVar15 = *unaff_x20;
      uVar21 = unaff_x20[3];
      uVar20 = unaff_x20[2];
      *(undefined8 *)(puVar5 + 0x18) = unaff_x20[1];
      *(undefined8 *)(puVar5 + 0x10) = uVar15;
      *(undefined8 *)(puVar5 + 0x28) = uVar21;
      *(undefined8 *)(puVar5 + 0x20) = uVar20;
      FUN_10010b858(lVar14,puVar5 + uVar18);
      puVar9 = &DAT_100552e78;
      FUN_100002f94(&DAT_100552e78,&DAT_1004259e0);
      puVar1 = (undefined8 *)(param_1 + *(int *)(puVar9 + 0x24));
      *puVar1 = FUN_10010c1fc;
      puVar1[1] = puVar5;
      puVar1[2] = 0;
      puVar1[3] = 0;
      uVar15 = unaff_x20[1];
      puVar5 = &DAT_100425850;
      _swift_getKeyPath(&DAT_100425850);
      puVar9 = &DAT_100425878;
      _swift_getKeyPath(&DAT_100425878);
      FUN_10010c22c();
      Combine::Published::_get_subscript(&local_d0,uVar15,puVar5,puVar9);
      _swift_release(puVar5);
      _swift_release(puVar9);
      lVar4 = local_d0;
      lVar16 = unaff_x20[2];
      uVar11 = unaff_x20[3];
      puVar5 = &DAT_100552e80;
      FUN_100002f94(&DAT_100552e80,&DAT_1004259e8);
      lVar14 = param_1 + *(int *)(puVar5 + 0x24);
      local_d8 = param_1;
      if (*(long *)(lVar4 + 0x10) == 0) {
        bVar19 = true;
      }
      else {
        _swift_bridgeObjectRetain(lVar4);
        lVar10 = lVar16;
        uVar18 = uVar11;
        FUN_10000464c(lVar16);
        bVar19 = (uVar18 & 1) == 0;
        if (!bVar19) {
          FUN_10010b814(*(long *)(lVar4 + 0x38) + *(long *)(lVar12 + 0x48) * lVar10,lVar14);
        }
        _swift_bridgeObjectRelease(lVar4);
      }
      (**(code **)(lVar12 + 0x38))(lVar14,bVar19,1,lVar6);
      _swift_bridgeObjectRelease(lVar4);
      puVar5 = &DAT_10052c2f0;
      _swift_allocObject(&DAT_10052c2f0,0x70,7);
      uVar20 = unaff_x20[4];
      uVar22 = unaff_x20[7];
      uVar21 = unaff_x20[6];
      *(undefined8 *)(puVar5 + 0x38) = unaff_x20[5];
      *(undefined8 *)(puVar5 + 0x30) = uVar20;
      *(undefined8 *)(puVar5 + 0x48) = uVar22;
      *(undefined8 *)(puVar5 + 0x40) = uVar21;
      uVar20 = unaff_x20[8];
      uVar22 = unaff_x20[0xb];
      uVar21 = unaff_x20[10];
      *(undefined8 *)(puVar5 + 0x58) = unaff_x20[9];
      *(undefined8 *)(puVar5 + 0x50) = uVar20;
      *(undefined8 *)(puVar5 + 0x68) = uVar22;
      *(undefined8 *)(puVar5 + 0x60) = uVar21;
      uVar20 = *unaff_x20;
      uVar22 = unaff_x20[3];
      uVar21 = unaff_x20[2];
      *(undefined8 *)(puVar5 + 0x18) = unaff_x20[1];
      *(undefined8 *)(puVar5 + 0x10) = uVar20;
      *(undefined8 *)(puVar5 + 0x28) = uVar22;
      *(undefined8 *)(puVar5 + 0x20) = uVar21;
      puVar9 = &DAT_100552e88;
      FUN_100002f94(&DAT_100552e88,&DAT_1004259f0);
      iVar3 = *(int *)(puVar9 + 0x24);
      *(undefined8 *)(lVar14 + iVar3) = FUN_10010c264;
      ((undefined8 *)(lVar14 + iVar3))[1] = puVar5;
      puVar5 = &DAT_100425808;
      _swift_getKeyPath(&DAT_100425808);
      puVar9 = &DAT_100425830;
      _swift_getKeyPath(&DAT_100425830);
      FUN_10010c22c();
      Combine::Published::_get_subscript(&local_d0,uVar15,puVar5,puVar9);
      _swift_release(puVar5);
      _swift_release(puVar9);
      lVar6 = local_d0;
      FUN_10026abd8(lVar16,uVar11,local_d0);
      _swift_bridgeObjectRelease(lVar6);
      FUN_10010c26c(lVar13);
      puVar5 = &DAT_10052c318;
      _swift_allocObject(&DAT_10052c318,0x70,7);
      uVar15 = unaff_x20[4];
      uVar21 = unaff_x20[7];
      uVar20 = unaff_x20[6];
      *(undefined8 *)(puVar5 + 0x38) = unaff_x20[5];
      *(undefined8 *)(puVar5 + 0x30) = uVar15;
      *(undefined8 *)(puVar5 + 0x48) = uVar21;
      *(undefined8 *)(puVar5 + 0x40) = uVar20;
      uVar15 = unaff_x20[8];
      uVar21 = unaff_x20[0xb];
      uVar20 = unaff_x20[10];
      *(undefined8 *)(puVar5 + 0x58) = unaff_x20[9];
      *(undefined8 *)(puVar5 + 0x50) = uVar15;
      *(undefined8 *)(puVar5 + 0x68) = uVar21;
      *(undefined8 *)(puVar5 + 0x60) = uVar20;
      uVar15 = *unaff_x20;
      uVar21 = unaff_x20[3];
      uVar20 = unaff_x20[2];
      *(undefined8 *)(puVar5 + 0x18) = unaff_x20[1];
      *(undefined8 *)(puVar5 + 0x10) = uVar15;
      *(undefined8 *)(puVar5 + 0x28) = uVar21;
      *(undefined8 *)(puVar5 + 0x20) = uVar20;
      puVar9 = &DAT_100552e70;
      FUN_100002f94(&DAT_100552e70,&DAT_1004259d8);
      pbVar2 = (byte *)(local_d8 + *(int *)(puVar9 + 0x24));
      *pbVar2 = (byte)lVar16 & 1;
      *(code **)(pbVar2 + 8) = FUN_10010c2a8;
      *(undefined **)(pbVar2 + 0x10) = puVar5;
      (**(code **)(*(long *)(puVar9 + -8) + 0x38))(local_d8,0,1);
      FUN_10010c22c();
      return;
    }
    FUN_10010c26c(lVar13);
  }
  puVar5 = &DAT_100552e70;
  FUN_100002f94(&DAT_100552e70,&DAT_1004259d8);
  (**(code **)(*(long *)(puVar5 + -8) + 0x38))(param_1,1,1,puVar5);
  return;
}

