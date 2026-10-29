// rea decompile_all
// name: FUN_10006d190
// address: 0x10006d190
// body: available
// range: 0x10006d190-0x10006d643 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_10006d190(void *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,Set param_6)

{
  undefined1 *puVar1;
  void *pvVar2;
  undefined *puVar3;
  Set SVar4;
  ScrollView<undefined> SVar5;
  HorizontalAlignment HVar6;
  undefined *puVar7;
  undefined *puVar8;
  Set _all;
  Set SVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *apuStack_740 [2];
  long local_730;
  void *local_728;
  undefined8 uStack_720;
  undefined1 auStack_718 [328];
  undefined1 auStack_5d0 [336];
  undefined1 local_480 [16];
  undefined8 *local_470;
  undefined1 auStack_328 [336];
  undefined1 auStack_1d8 [344];
  
  puVar3 = &DAT_10054e638;
  local_728 = param_1;
  FUN_100002f94(&DAT_10054e638,&DAT_10041f690);
  apuStack_740[1] = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar10 = (long)apuStack_740 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar11 = (undefined8 *)(lVar10 - extraout_x12);
  puVar3 = &DAT_10054e640;
  FUN_100002f94(&DAT_10054e640,&DAT_10041f698);
  lVar13 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  FUN_10006d644(local_480);
  _memcpy(auStack_328,local_480,0x149);
  _memcpy(auStack_1d8,local_480,0x149);
  FUN_1000087e4(auStack_328,auStack_5d0,&DAT_10054e648,&DAT_10041f6a0);
  SVar4.unknown = auStack_1d8;
  FUN_10002a29c(SVar4.unknown,&DAT_10054e648,&DAT_10041f6a0);
  SVar4 = SwiftUI::Axis::Set::get_vertical(SVar4);
  local_470 = (undefined8 *)param_6.unknown;
  FUN_100002f94(&DAT_10054e650,&DAT_10041f6a8);
  FUN_1000707c4();
  local_730 = lVar12 - extraout_x12_00;
  SVar5 = SwiftUI::ScrollView::_init(SVar4,false);
  HVar6 = SwiftUI::HorizontalAlignment::get_center(SVar5.unknown);
  *puVar11 = HVar6.unknown;
  puVar11[1] = 0x4020000000000000;
  *(undefined1 *)(puVar11 + 2) = 0;
  puVar7 = &DAT_10054e690;
  FUN_100002f94(&DAT_10054e690,&DAT_10041f6c8);
  FUN_10006f1e0((long)puVar11 + (long)*(int *)(puVar7 + 0x2c),param_6.unknown);
  lVar14 = *(long *)((long)param_6.unknown + 0x28);
  if (lVar14 != 0) {
    puVar7 = &DAT_10041f6d0;
    _swift_getKeyPath(&DAT_10041f6d0);
    puVar8 = &DAT_10041f6f8;
    _swift_getKeyPath(&DAT_10041f6f8);
    _swift_retain(lVar14);
    Combine::Published::_get_subscript(local_480);
    _swift_release(puVar7);
    _swift_release(puVar8);
    _swift_release(lVar14);
    puVar7 = &DAT_100527840;
    _swift_allocObject(&DAT_100527840,0x58,7);
    uVar16 = *(undefined8 *)((long)param_6.unknown + 0x20);
    uVar20 = *(undefined8 *)((long)param_6.unknown + 0x38);
    uVar18 = *(undefined8 *)((long)param_6.unknown + 0x30);
    *(undefined8 *)(puVar7 + 0x38) = *(undefined8 *)((long)param_6.unknown + 0x28);
    *(undefined8 *)(puVar7 + 0x30) = uVar16;
    *(undefined8 *)(puVar7 + 0x48) = uVar20;
    *(undefined8 *)(puVar7 + 0x40) = uVar18;
    *(undefined8 *)(puVar7 + 0x50) = *(undefined8 *)((long)param_6.unknown + 0x40);
    uVar19 = *(undefined8 *)param_6.unknown;
    uVar18 = *(undefined8 *)((long)param_6.unknown + 0x18);
    uVar16 = *(undefined8 *)((long)param_6.unknown + 0x10);
    *(undefined8 *)(puVar7 + 0x18) = *(undefined8 *)((long)param_6.unknown + 8);
    *(undefined8 *)(puVar7 + 0x10) = uVar19;
    *(undefined8 *)(puVar7 + 0x28) = uVar18;
    *(undefined8 *)(puVar7 + 0x20) = uVar16;
    puVar8 = &DAT_10054e698;
    FUN_100002f94(&DAT_10054e698,&DAT_10041f718);
    puVar1 = (undefined1 *)((long)puVar11 + (long)*(int *)(puVar8 + 0x24));
    *puVar1 = local_480[0];
    *(code **)(puVar1 + 8) = FUN_100073d5c;
    *(undefined **)(puVar1 + 0x10) = puVar7;
    FUN_100073d64(param_6.unknown,local_480);
    _all = SwiftUI::Edge::Set::get_horizontal(param_6);
    uVar17 = 0x4030000000000000;
    SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
    SVar9.unknown = &DAT_10054e6a0;
    uVar16 = uVar19;
    uVar18 = param_4;
    uVar20 = param_5;
    FUN_100002f94(&DAT_10054e6a0,&DAT_10041f720);
    puVar1 = (undefined1 *)((long)puVar11 + (long)*(int *)(SVar9.unknown + 0x24));
    *puVar1 = (char)_all.unknown;
    *(undefined8 *)(puVar1 + 8) = uVar17;
    *(undefined8 *)(puVar1 + 0x10) = uVar19;
    *(undefined8 *)(puVar1 + 0x18) = param_4;
    *(undefined8 *)(puVar1 + 0x20) = param_5;
    puVar1[0x28] = 0;
    SVar9 = SwiftUI::Edge::Set::get_bottom(SVar9);
    uVar17 = 0x4030000000000000;
    SwiftUI::EdgeInsets::init((CGFloat)SVar9.unknown);
    puVar1 = (undefined1 *)((long)puVar11 + (long)*(int *)(apuStack_740[1] + 0x24));
    *puVar1 = (char)SVar9.unknown;
    *(undefined8 *)(puVar1 + 8) = uVar17;
    *(undefined8 *)(puVar1 + 0x10) = uVar16;
    *(undefined8 *)(puVar1 + 0x18) = uVar18;
    *(undefined8 *)(puVar1 + 0x20) = uVar20;
    puVar1[0x28] = 0;
    _memcpy(auStack_5d0,auStack_328,0x149);
    lVar14 = local_730;
    pcVar15 = *(code **)(lVar13 + 0x10);
    (*pcVar15)(lVar12,local_730,puVar3);
    FUN_1000087e4(puVar11,lVar10,&DAT_10054e638,&DAT_10041f690);
    _memcpy(local_480,auStack_5d0,0x149);
    pvVar2 = local_728;
    _memcpy(local_728,auStack_5d0,0x149);
    puVar7 = &DAT_10054e6a8;
    FUN_100002f94(&DAT_10054e6a8,&DAT_10041f728);
    (*pcVar15)((long)pvVar2 + (long)*(int *)(puVar7 + 0x30),lVar12,puVar3);
    FUN_1000087e4(lVar10,(long)pvVar2 + (long)*(int *)(puVar7 + 0x40),&DAT_10054e638,&DAT_10041f690)
    ;
    FUN_1000087e4(local_480,&uStack_720,&DAT_10054e648,&DAT_10041f6a0);
    FUN_10002a29c(puVar11,&DAT_10054e638,&DAT_10041f690);
    pcVar15 = *(code **)(lVar13 + 8);
    (*pcVar15)(lVar14,puVar3);
    FUN_10002a29c(lVar10,&DAT_10054e638,&DAT_10041f690);
    (*pcVar15)(lVar12,puVar3);
    FUN_10002a29c(auStack_5d0,&DAT_10054e648,&DAT_10041f6a0);
    return;
  }
  FUN_100231228(0);
  FUN_1000036d0(&DAT_10054d6a8,FUN_100231228,&TargetProtocolConformanceDescriptor_10042bb2c);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x10006d644);
  (*pcVar15)();
}

