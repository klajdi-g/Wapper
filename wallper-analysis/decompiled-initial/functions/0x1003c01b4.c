// rea decompile_all
// name: FUN_1003c01b4
// address: 0x1003c01b4
// body: available
// range: 0x1003c01b4-0x1003c0573 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c01b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  State SVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  code *pcVar11;
  Animation AVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_d0 [8];
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  ulong local_a0;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  local_a8 = param_2;
  FUN_10040211c();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  puVar4 = &DAT_10054b6b8;
  local_c8 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_10054b6b8,&DAT_10041ca50);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar12.unknown = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) + -extraout_x8_00;
  puVar5 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  uVar9 = (long)AVar12.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_a0 = uVar9;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = uVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar10 - extraout_x12_00;
  local_c0 = param_3;
  local_b0 = param_4;
  FUN_1003cff30(0,param_3,param_4);
  SVar6.unknown = &DAT_1005602d0;
  FUN_100002f94(&DAT_1005602d0,&DAT_100435db8);
  local_b8 = param_1;
  SwiftUI::State::get_wrappedValue(SVar6);
  (**(code **)(lVar13 + 0x38))(lVar10,1,1,lVar3);
  iVar1 = *(int *)(puVar4 + 0x30);
  FUN_1000087e4(lVar14,AVar12.unknown,&DAT_10054ac40,&DAT_10041ce70);
  FUN_1000087e4(lVar10,AVar12.unknown + iVar1,&DAT_10054ac40,&DAT_10041ce70);
  pcVar11 = *(code **)(lVar13 + 0x30);
  puVar7 = AVar12.unknown;
  (*pcVar11)(AVar12.unknown,1,lVar3);
  uVar9 = local_a0;
  if ((int)puVar7 == 1) {
    FUN_10002a29c(lVar10,&DAT_10054ac40,&DAT_10041ce70);
    FUN_10002a29c(lVar14,&DAT_10054ac40,&DAT_10041ce70);
    puVar7 = AVar12.unknown + iVar1;
    (*pcVar11)(puVar7,1,lVar3);
    if ((int)puVar7 != 1) {
LAB_1003c0454:
      FUN_10002a29c(AVar12.unknown,&DAT_10054b6b8,&DAT_10041ca50);
      return;
    }
    FUN_10002a29c(AVar12.unknown,&DAT_10054ac40,&DAT_10041ce70);
  }
  else {
    FUN_1000087e4(AVar12.unknown,local_a0,&DAT_10054ac40,&DAT_10041ce70);
    puVar7 = AVar12.unknown + iVar1;
    (*pcVar11)(puVar7,1,lVar3);
    puVar2 = local_c8;
    if ((int)puVar7 == 1) {
      FUN_10002a29c(lVar10,&DAT_10054ac40,&DAT_10041ce70);
      FUN_10002a29c(lVar14,&DAT_10054ac40,&DAT_10041ce70);
      FUN_100029548(uVar9,FUN_10040211c);
      goto LAB_1003c0454;
    }
    FUN_100007e64(AVar12.unknown + iVar1,local_c8,FUN_10040211c);
    uVar8 = uVar9;
    FUN_10040a7a0(uVar9,puVar2);
    FUN_100029548(puVar2,FUN_10040211c);
    FUN_10002a29c(lVar10,&DAT_10054ac40,&DAT_10041ce70);
    FUN_10002a29c(lVar14,&DAT_10054ac40,&DAT_10041ce70);
    FUN_100029548(uVar9,FUN_10040211c);
    FUN_10002a29c(AVar12.unknown,&DAT_10054ac40,&DAT_10041ce70);
    if ((uVar8 & 1) == 0) {
      return;
    }
  }
  AVar12 = SwiftUI::Animation::spring(0.35,0.8,0.0,AVar12);
  local_80 = local_c0;
  uStack_78 = local_b0;
  local_70 = local_b8;
  uStack_68 = local_a8;
  SwiftUI::_withAnimation();
  _swift_release(AVar12.unknown);
  return;
}

