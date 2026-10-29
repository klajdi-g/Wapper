// rea decompile_all
// name: FUN_1003c06c0
// address: 0x1003c06c0
// body: available
// range: 0x1003c06c0-0x1003c0abf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c06c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  State SVar6;
  ulong uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar9;
  code *pcVar10;
  Animation AVar11;
  long lVar12;
  long lVar13;
  long local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  DispatchWorkItem *local_68;
  
  lVar3 = 0;
  FUN_10040211c();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  lVar5 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10054b6b8;
  local_c0 = lVar5;
  FUN_100002f94(&DAT_10054b6b8,&DAT_10041ca50);
  local_a0 = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar11.unknown = (undefined *)(lVar5 - extraout_x8_00);
  puVar4 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  uVar8 = (long)AVar11.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_b8 = uVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = uVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar13 - extraout_x12_00;
  lVar5 = 0;
  local_b0 = param_2;
  uStack_a8 = param_3;
  FUN_1003cff30(0,param_2,param_3);
  iVar1 = *(int *)(lVar5 + 0x74);
  puVar2 = (undefined8 *)(param_1 + iVar1);
  uStack_88 = puVar2[1];
  local_90 = *puVar2;
  SVar6.unknown = &DAT_100552980;
  FUN_100002f94(&DAT_100552980,&DAT_100435dd0);
  SwiftUI::State::get_wrappedValue(SVar6);
  if (local_68 != (DispatchWorkItem *)0x0) {
    Dispatch::DispatchWorkItem::cancel(local_68);
    _swift_release(local_68);
  }
  local_90 = 0;
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar1),&local_90,SVar6.unknown);
  SVar6.unknown = &DAT_1005602d0;
  FUN_100002f94(&DAT_1005602d0,&DAT_100435db8);
  SwiftUI::State::get_wrappedValue(SVar6);
  (**(code **)(lVar9 + 0x38))(lVar13,1,1,lVar3);
  iVar1 = *(int *)(local_a0 + 0x30);
  FUN_1000087e4(lVar12,AVar11.unknown,&DAT_10054ac40,&DAT_10041ce70);
  FUN_1000087e4(lVar13,AVar11.unknown + iVar1,&DAT_10054ac40,&DAT_10041ce70);
  pcVar10 = *(code **)(lVar9 + 0x30);
  puVar4 = AVar11.unknown;
  (*pcVar10)(AVar11.unknown,1,lVar3);
  uVar8 = local_b8;
  if ((int)puVar4 == 1) {
    FUN_10002a29c(lVar13,&DAT_10054ac40,&DAT_10041ce70);
    FUN_10002a29c(lVar12,&DAT_10054ac40,&DAT_10041ce70);
    puVar4 = AVar11.unknown + iVar1;
    (*pcVar10)(puVar4,1,lVar3);
    if ((int)puVar4 == 1) {
      FUN_10002a29c(AVar11.unknown,&DAT_10054ac40,&DAT_10041ce70);
      return;
    }
  }
  else {
    FUN_1000087e4(AVar11.unknown,local_b8,&DAT_10054ac40,&DAT_10041ce70);
    puVar4 = AVar11.unknown + iVar1;
    (*pcVar10)(puVar4,1,lVar3);
    lVar3 = local_c0;
    if ((int)puVar4 != 1) {
      FUN_100007e64(AVar11.unknown + iVar1,local_c0,FUN_10040211c);
      uVar7 = uVar8;
      FUN_10040a7a0(uVar8,lVar3);
      FUN_100029548(lVar3,FUN_10040211c);
      FUN_10002a29c(lVar13,&DAT_10054ac40,&DAT_10041ce70);
      FUN_10002a29c(lVar12,&DAT_10054ac40,&DAT_10041ce70);
      FUN_100029548(uVar8,FUN_10040211c);
      FUN_10002a29c(AVar11.unknown,&DAT_10054ac40,&DAT_10041ce70);
      if ((uVar7 & 1) != 0) {
        return;
      }
      goto LAB_1003c09c8;
    }
    FUN_10002a29c(lVar13,&DAT_10054ac40,&DAT_10041ce70);
    FUN_10002a29c(lVar12,&DAT_10054ac40,&DAT_10041ce70);
    FUN_100029548(uVar8,FUN_10040211c);
  }
  FUN_10002a29c(AVar11.unknown,&DAT_10054b6b8,&DAT_10041ca50);
LAB_1003c09c8:
  AVar11 = SwiftUI::Animation::easeOut(0.2,AVar11);
  local_80 = local_b0;
  uStack_78 = uStack_a8;
  local_70 = param_1;
  SwiftUI::_withAnimation();
  _swift_release(AVar11.unknown);
  return;
}

