// rea decompile_all
// name: FUN_10008165c
// address: 0x10008165c
// body: available
// range: 0x10008165c-0x100081a4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000818e4 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100081a4c to 0x100227100 FUN_100227100 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008165c(Task param_1,undefined8 param_2,Date param_3)

{
  bool bVar1;
  Date DVar2;
  State SVar3;
  Duration DVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  Animation AVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long unaff_x22;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
  lVar16 = *(long *)(unaff_x22 + 0x300);
  if (bVar1) {
    uVar19 = *(undefined8 *)(unaff_x22 + 0x308);
    FUN_100095498(lVar16);
    _swift_release(uVar19);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x2f8);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x2e0);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x2d8);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x2d0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x2c8);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x2b0);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x280);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x278);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x268);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x260);
    uVar6 = *(undefined8 *)(unaff_x22 + 600);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x250);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x230);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x228);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1c8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x1a8);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x300));
    _swift_task_dealloc(uVar28);
    _swift_task_dealloc(uVar29);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001000817cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar25 = *(long *)(unaff_x22 + 800);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x228);
  lVar27 = *(long *)(unaff_x22 + 0x208);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1e8);
  DVar2 = Foundation::Date::init();
  Foundation::Date::addingTimeInterval(1.5,DVar2);
  pcVar10 = *(code **)(lVar27 + 8);
  *(code **)(unaff_x22 + 0x368) = pcVar10;
  (*pcVar10)(uVar19,uVar6);
  *(undefined4 *)(unaff_x22 + 0x6c) = *(undefined4 *)(lVar25 + 0x44);
  lVar25 = *(long *)(lVar16 + 0x28);
  *(long *)(unaff_x22 + 0x370) = lVar25;
  AVar18.unknown = *(undefined **)(unaff_x22 + 0x2f8);
  SVar3.unknown = &DAT_10054efb8;
  FUN_100002f94(&DAT_10054efb8,&DAT_100420510);
  SwiftUI::State::get_wrappedValue(SVar3);
  lVar16 = *(long *)(AVar18.unknown + 0x28);
  FUN_100095498();
  if (lVar16 == lVar25) {
    pcVar10 = *(code **)(unaff_x22 + 0x368);
    DVar2.unknown = *(undefined **)(unaff_x22 + 0x230);
    AVar18.unknown = *(undefined **)(unaff_x22 + 0x228);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1e8);
    Foundation::Date::init();
    bVar1 = Foundation::Date::<_infix((Date)AVar18.unknown,DVar2,param_3);
    (*pcVar10)(AVar18.unknown,uVar19);
    if (bVar1) {
      (extension_Swift)::Swift::Clock::_get_continuous();
      *(undefined8 *)(unaff_x22 + 0xe0) = 0;
      *(undefined8 *)(unaff_x22 + 0xd8) = 50000000000000000;
      *(undefined8 *)(unaff_x22 + 0x58) = 0;
      *(undefined8 *)(unaff_x22 + 0x60) = 0;
      *(undefined1 *)(unaff_x22 + 0x68) = 1;
      _swift_task_switch(FUN_100081e54,0,0);
      return;
    }
  }
  uVar19 = *(undefined8 *)(unaff_x22 + 0x148);
  AVar18 = SwiftUI::Animation::easeInOut(0.12,AVar18);
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar19;
  SwiftUI::_withAnimation();
  _swift_release();
  AVar18 = SwiftUI::Animation::easeIn(0.31,AVar18);
  *(undefined8 *)(unaff_x22 + 0x1a0) = uVar19;
  SwiftUI::_withAnimation();
  _swift_release();
  AVar18 = SwiftUI::Animation::easeOut(0.31,AVar18);
  DVar4.unknown = (undefined *)SwiftUI::Animation::delay(0.31,AVar18);
  _swift_release(AVar18.unknown);
  *(undefined8 *)(unaff_x22 + 0x160) = uVar19;
  pcVar10 = FUN_100099384;
  SwiftUI::_withAnimation();
  _swift_release();
  DVar4 = Swift::Duration::seconds(0.66,DVar4);
  (extension_Swift)::Swift::Clock::_get_continuous();
  plVar5 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x390) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1000827b4;
  FUN_100227100(DVar4.unknown,pcVar10,0,0,1);
  return;
}

