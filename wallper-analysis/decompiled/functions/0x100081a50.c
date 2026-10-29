// rea decompile_all
// name: FUN_100081a50
// address: 0x100081a50
// body: available
// range: 0x100081a50-0x100081e53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100081ce4 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100081e50 to 0x100227100 FUN_100227100 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100081a50(undefined8 param_1,undefined8 param_2,Date param_3)

{
  bool bVar1;
  Task TVar2;
  Date DVar3;
  State SVar4;
  Duration DVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  Animation AVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long unaff_x22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  TVar2.unknown = *(undefined **)(unaff_x22 + 0x270);
  (**(code **)(unaff_x22 + 0x340))(TVar2.unknown,*(undefined8 *)(unaff_x22 + 0x238));
  bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar2);
  lVar17 = *(long *)(unaff_x22 + 0x300);
  if (bVar1) {
    uVar20 = *(undefined8 *)(unaff_x22 + 0x308);
    FUN_100095498(lVar17);
    _swift_release(uVar20);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x2f8);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x2e0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x2d8);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x2d0);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x2c8);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x2b0);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x280);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x278);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x268);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x260);
    uVar7 = *(undefined8 *)(unaff_x22 + 600);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x250);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x230);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x228);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x1c8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x1a8);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x300));
    _swift_task_dealloc(uVar29);
    _swift_task_dealloc(uVar30);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar28);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000100081bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar25 = *(long *)(unaff_x22 + 800);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x228);
  lVar27 = *(long *)(unaff_x22 + 0x208);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1e8);
  DVar3 = Foundation::Date::init();
  Foundation::Date::addingTimeInterval(1.5,DVar3);
  pcVar11 = *(code **)(lVar27 + 8);
  *(code **)(unaff_x22 + 0x368) = pcVar11;
  (*pcVar11)(uVar20,uVar7);
  *(undefined4 *)(unaff_x22 + 0x6c) = *(undefined4 *)(lVar25 + 0x44);
  lVar25 = *(long *)(lVar17 + 0x28);
  *(long *)(unaff_x22 + 0x370) = lVar25;
  AVar19.unknown = *(undefined **)(unaff_x22 + 0x2f8);
  SVar4.unknown = &DAT_10054efb8;
  FUN_100002f94(&DAT_10054efb8,&DAT_100420510);
  SwiftUI::State::get_wrappedValue(SVar4);
  lVar17 = *(long *)(AVar19.unknown + 0x28);
  FUN_100095498();
  if (lVar17 == lVar25) {
    pcVar11 = *(code **)(unaff_x22 + 0x368);
    DVar3.unknown = *(undefined **)(unaff_x22 + 0x230);
    AVar19.unknown = *(undefined **)(unaff_x22 + 0x228);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x1e8);
    Foundation::Date::init();
    bVar1 = Foundation::Date::<_infix((Date)AVar19.unknown,DVar3,param_3);
    (*pcVar11)(AVar19.unknown,uVar20);
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
  uVar20 = *(undefined8 *)(unaff_x22 + 0x148);
  AVar19 = SwiftUI::Animation::easeInOut(0.12,AVar19);
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar20;
  SwiftUI::_withAnimation();
  _swift_release();
  AVar19 = SwiftUI::Animation::easeIn(0.31,AVar19);
  *(undefined8 *)(unaff_x22 + 0x1a0) = uVar20;
  SwiftUI::_withAnimation();
  _swift_release();
  AVar19 = SwiftUI::Animation::easeOut(0.31,AVar19);
  DVar5.unknown = (undefined *)SwiftUI::Animation::delay(0.31,AVar19);
  _swift_release(AVar19.unknown);
  *(undefined8 *)(unaff_x22 + 0x160) = uVar20;
  pcVar11 = FUN_100099384;
  SwiftUI::_withAnimation();
  _swift_release();
  DVar5 = Swift::Duration::seconds(0.66,DVar5);
  (extension_Swift)::Swift::Clock::_get_continuous();
  plVar6 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x390) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1000827b4;
  FUN_100227100(DVar5.unknown,pcVar11,0,0,1);
  return;
}

