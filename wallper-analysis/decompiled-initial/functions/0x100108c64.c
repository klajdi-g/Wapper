// rea decompile_all
// name: FUN_100108c64
// address: 0x100108c64
// body: available
// range: 0x100108c64-0x100108dd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100108c64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  Animation AVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_90 [32];
  undefined8 local_70;
  undefined8 local_68;
  
  puVar1 = &DAT_100551e50;
  FUN_100002f94(&DAT_100551e50,&DAT_100429e60);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar2 = 0;
  FUN_100126a5c();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = puVar6 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1000087e4(param_2,puVar6,&DAT_100551e50,&DAT_100429e60);
  puVar3 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,lVar2);
  if ((int)puVar3 == 1) {
    FUN_10002a29c(puVar6,&DAT_100551e50,&DAT_100429e60);
  }
  else {
    FUN_10010b858(puVar6,puVar5);
    AVar4.unknown = puVar5;
    FUN_1001093ec(puVar5,param_3);
    AVar4 = SwiftUI::Animation::easeOut(0.25,AVar4);
    local_70 = param_3;
    local_68 = param_1;
    SwiftUI::_withAnimation();
    _swift_release(AVar4.unknown);
    FUN_10010c26c(puVar5);
  }
  return;
}

