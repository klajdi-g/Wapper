// rea decompile_all
// name: FUN_1000e9808
// address: 0x1000e9808
// body: available
// range: 0x1000e9808-0x1000e9983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000e9808(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  Animation AVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined auStack_70 [32];
  long local_50;
  undefined8 uStack_48;
  
  puVar1 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar3.unknown = auStack_70 + -extraout_x8;
  lVar2 = 0;
  FUN_10040211c();
  lVar5 = *(long *)(lVar2 + -8);
  lVar6 = lVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = (long)AVar3.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1000e3a0c();
  lVar6 = *(long *)(lVar6 + 0x10);
  _swift_bridgeObjectRelease();
  if (lVar6 == 0) {
    FUN_1000e3728(AVar3.unknown);
    puVar1 = AVar3.unknown;
    (**(code **)(lVar5 + 0x30))(AVar3.unknown,1,lVar2);
    if ((int)puVar1 == 1) {
      FUN_10002a29c(AVar3.unknown,&DAT_10054ac40,&DAT_10041ce70);
    }
    else {
      FUN_100007e64(AVar3.unknown,lVar4,FUN_10040211c);
      AVar3 = SwiftUI::Animation::spring(0.3,0.86,0.0,AVar3);
      local_50 = lVar4;
      uStack_48 = param_1;
      SwiftUI::_withAnimation();
      _swift_release(AVar3.unknown);
      FUN_100029548(lVar4,FUN_10040211c);
    }
  }
  else {
    FUN_1000e9984();
  }
  return;
}

