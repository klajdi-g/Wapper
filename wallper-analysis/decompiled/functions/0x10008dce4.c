// rea decompile_all
// name: FUN_10008dce4
// address: 0x10008dce4
// body: available
// range: 0x10008dce4-0x10008dfdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10008de6c to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10008dfd8 to 0x100227100 FUN_100227100 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008dce4(undefined8 param_1,undefined8 param_2,Date param_3)

{
  int iVar1;
  bool bVar2;
  Date DVar3;
  State SVar4;
  Animation AVar5;
  Duration DVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  Date DVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  
  (**(code **)(*(long *)(unaff_x22 + 0x148) + 8))
            (*(undefined8 *)(unaff_x22 + 0x168),*(undefined8 *)(unaff_x22 + 0x140));
  lVar13 = *(long *)(unaff_x22 + 0x1d8);
  iVar1 = *(int *)(lVar13 + 0x24);
  *(undefined1 *)(unaff_x22 + 0x3b) = 1;
  lVar9 = *(long *)(unaff_x22 + 0x1b8);
  DVar10.unknown = *(undefined **)(unaff_x22 + 0x1b0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x130);
  lVar14 = *(long *)(unaff_x22 + 0x128);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x120);
  SwiftUI::State::set_wrappedValue
            ((State *)(*(long *)(unaff_x22 + 0x88) + (long)iVar1),(undefined1 *)(unaff_x22 + 0x3b),
             *(undefined8 *)(unaff_x22 + 0x1e0));
  DVar3 = Foundation::Date::init();
  Foundation::Date::addingTimeInterval(1.5,DVar3);
  pcVar8 = *(code **)(lVar14 + 8);
  *(code **)(unaff_x22 + 0x1f8) = pcVar8;
  (*pcVar8)(uVar11,uVar12);
  *(undefined4 *)(unaff_x22 + 0x3c) = *(undefined4 *)(lVar13 + 0x38);
  lVar13 = *(long *)(lVar9 + 0x28);
  *(long *)(unaff_x22 + 0x200) = lVar13;
  SVar4.unknown = &DAT_10054efb8;
  FUN_100002f94(&DAT_10054efb8,&DAT_100420510);
  SwiftUI::State::get_wrappedValue(SVar4);
  lVar9 = *(long *)(DVar10.unknown + 0x28);
  FUN_100095498();
  if (lVar9 == lVar13) {
    pcVar8 = *(code **)(unaff_x22 + 0x1f8);
    DVar10.unknown = *(undefined **)(unaff_x22 + 0x130);
    DVar3.unknown = *(undefined **)(unaff_x22 + 0x138);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x120);
    Foundation::Date::init();
    bVar2 = Foundation::Date::<_infix(DVar10,DVar3,param_3);
    (*pcVar8)(DVar10.unknown,uVar11);
    if (bVar2) {
      (extension_Swift)::Swift::Clock::_get_continuous();
      *(undefined8 *)(unaff_x22 + 0x80) = 0;
      *(undefined8 *)(unaff_x22 + 0x78) = 50000000000000000;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined8 *)(unaff_x22 + 0x30) = 0;
      *(undefined1 *)(unaff_x22 + 0x38) = 1;
      _swift_task_switch(FUN_10008dfdc,0,0);
      return;
    }
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  AVar5 = SwiftUI::Animation::easeInOut(0.12,DVar10.unknown);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar11;
  SwiftUI::_withAnimation();
  _swift_release();
  AVar5 = SwiftUI::Animation::easeIn(0.31,AVar5);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar11;
  SwiftUI::_withAnimation();
  _swift_release();
  AVar5 = SwiftUI::Animation::easeOut(0.31,AVar5);
  DVar6.unknown = (undefined *)SwiftUI::Animation::delay(0.31,AVar5);
  _swift_release(AVar5.unknown);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar11;
  pcVar8 = FUN_100098c94;
  SwiftUI::_withAnimation();
  _swift_release();
  DVar6 = Swift::Duration::seconds(0.66,DVar6);
  (extension_Swift)::Swift::Clock::_get_continuous();
  plVar7 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x220) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10008e658;
  FUN_100227100(DVar6.unknown,pcVar8,0,0,1);
  return;
}

