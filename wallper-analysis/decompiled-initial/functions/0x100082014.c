// rea decompile_all
// name: FUN_100082014
// address: 0x100082014
// body: available
// range: 0x100082014-0x1000823cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100082264 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000823cc to 0x100227100 FUN_100227100 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100082014(Task param_1,undefined8 param_2,Date param_3)

{
  bool bVar1;
  State SVar2;
  Duration DVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  Animation AVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  Date DVar19;
  undefined8 uVar20;
  long unaff_x22;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  code *pcVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
  if (bVar1) {
    uVar16 = *(undefined8 *)(unaff_x22 + 0x308);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x300);
    (**(code **)(unaff_x22 + 0x368))
              (*(undefined8 *)(unaff_x22 + 0x230),*(undefined8 *)(unaff_x22 + 0x1e8));
    _swift_release(uVar16);
    FUN_100095498(uVar13);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x2f8);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x2e0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x2d8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x2d0);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x2c8);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x2b0);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x280);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x278);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x268);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x260);
    uVar16 = *(undefined8 *)(unaff_x22 + 600);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x250);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x230);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x228);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x1c8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1a8);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x300));
    _swift_task_dealloc(uVar27);
    _swift_task_dealloc(uVar28);
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar25);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000100082194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar22 = *(long *)(unaff_x22 + 0x370);
  AVar15.unknown = *(undefined **)(unaff_x22 + 0x2f8);
  SVar2.unknown = &DAT_10054efb8;
  FUN_100002f94(&DAT_10054efb8,&DAT_100420510);
  SwiftUI::State::get_wrappedValue(SVar2);
  lVar18 = *(long *)(AVar15.unknown + 0x28);
  FUN_100095498();
  if (lVar18 == lVar22) {
    pcVar24 = *(code **)(unaff_x22 + 0x368);
    DVar19.unknown = *(undefined **)(unaff_x22 + 0x230);
    AVar15.unknown = *(undefined **)(unaff_x22 + 0x228);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x1e8);
    Foundation::Date::init();
    bVar1 = Foundation::Date::<_infix((Date)AVar15.unknown,DVar19,param_3);
    (*pcVar24)(AVar15.unknown,uVar13);
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
  uVar13 = *(undefined8 *)(unaff_x22 + 0x148);
  AVar15 = SwiftUI::Animation::easeInOut(0.12,AVar15);
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar13;
  SwiftUI::_withAnimation();
  _swift_release();
  AVar15 = SwiftUI::Animation::easeIn(0.31,AVar15);
  *(undefined8 *)(unaff_x22 + 0x1a0) = uVar13;
  SwiftUI::_withAnimation();
  _swift_release();
  AVar15 = SwiftUI::Animation::easeOut(0.31,AVar15);
  DVar3.unknown = (undefined *)SwiftUI::Animation::delay(0.31,AVar15);
  _swift_release(AVar15.unknown);
  *(undefined8 *)(unaff_x22 + 0x160) = uVar13;
  pcVar24 = FUN_100099384;
  SwiftUI::_withAnimation();
  _swift_release();
  DVar3 = Swift::Duration::seconds(0.66,DVar3);
  (extension_Swift)::Swift::Clock::_get_continuous();
  plVar4 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x390) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1000827b4;
  FUN_100227100(DVar3.unknown,pcVar24,0,0,1);
  return;
}

