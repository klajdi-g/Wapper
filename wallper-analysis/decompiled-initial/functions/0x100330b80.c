// rea decompile_all
// name: FUN_100330b80
// address: 0x100330b80
// body: available
// range: 0x100330b80-0x100330fa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100330b80(long param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long extraout_x12_00;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  long local_70;
  byte local_61;
  
  puVar2 = &DAT_10055b838;
  local_70 = param_1;
  FUN_100002f94(&DAT_10055b838,&DAT_100431f20);
  local_78 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_10055cb58;
  local_90 = (long)&local_90 - extraout_x8;
  FUN_100002f94(&DAT_10055cb58,&DAT_100431f28);
  local_88 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = ((long)&local_90 - extraout_x8) - extraout_x8_00;
  puVar2 = &DAT_10055cb60;
  FUN_100002f94(&DAT_10055cb60,&DAT_100431f30);
  local_80 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = lVar9 - extraout_x8_01;
  puVar2 = &DAT_10055cb68;
  FUN_100002f94(&DAT_10055cb68,&DAT_100431f38);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar4 = lVar5 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar6 = lVar4 - extraout_x12;
  puVar2 = &DAT_10055cb70;
  FUN_100002f94(&DAT_10055cb70,&DAT_100431f40);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar7 = lVar6 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = lVar7 - extraout_x12_00;
  FUN_100330fa4(lVar8);
  lVar10 = *(long *)(param_2 + 0x20);
  if (lVar10 != 0) {
    puVar2 = &DAT_100431b60;
    _swift_getKeyPath(&DAT_100431b60);
    puVar3 = &DAT_100431b88;
    _swift_getKeyPath(&DAT_100431b88);
    _swift_retain(lVar10);
    Combine::Published::_get_subscript(&local_61);
    _swift_release(puVar2);
    _swift_release(puVar3);
    _swift_release(lVar10);
    lVar10 = local_90;
    if ((local_61 & 1) == 0) {
      FUN_1003317c4(local_90);
      FUN_1000087e4(lVar10,lVar9,&DAT_10055b838,&DAT_100431f20);
      _swift_storeEnumTagMultiPayload(lVar9,local_88,1);
      FUN_1003369fc();
      FUN_100336b2c();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar9);
      FUN_10002a29c(lVar10,&DAT_10055b838,&DAT_100431f20);
    }
    else {
      FUN_1003311fc(lVar5);
      FUN_1000087e4(lVar5,lVar9,&DAT_10055cb60,&DAT_100431f30);
      _swift_storeEnumTagMultiPayload(lVar9,local_88,0);
      FUN_1003369fc();
      FUN_100336b2c();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar9);
      FUN_10002a29c(lVar5,&DAT_10055cb60,&DAT_100431f30);
    }
    FUN_1000087e4(lVar8,lVar7,&DAT_10055cb70,&DAT_100431f40);
    FUN_1000087e4(lVar6,lVar4,&DAT_10055cb68,&DAT_100431f38);
    lVar5 = local_70;
    FUN_1000087e4(lVar7,local_70,&DAT_10055cb70,&DAT_100431f40);
    puVar2 = &DAT_10055cba0;
    FUN_100002f94(&DAT_10055cba0,&DAT_100431f50);
    FUN_1000087e4(lVar4,lVar5 + *(int *)(puVar2 + 0x30),&DAT_10055cb68,&DAT_100431f38);
    FUN_10002a29c(lVar6,&DAT_10055cb68,&DAT_100431f38);
    FUN_10002a29c(lVar8,&DAT_10055cb70,&DAT_100431f40);
    FUN_10002a29c(lVar4,&DAT_10055cb68,&DAT_100431f38);
    FUN_10002a29c(lVar7,&DAT_10055cb70,&DAT_100431f40);
    return;
  }
  FUN_10014e37c(0);
  FUN_1000036d0(&DAT_100553148,FUN_10014e37c,&TargetProtocolConformanceDescriptor_100427f04);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100330fa4);
  (*pcVar1)();
}

