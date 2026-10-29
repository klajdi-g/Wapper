// rea decompile_all
// name: FUN_10008e190
// address: 0x10008e190
// body: available
// range: 0x10008e190-0x10008e3e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10008e27c to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10008e3e0 to 0x100227100 FUN_100227100 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008e190(undefined8 param_1,undefined8 param_2,Date param_3)

{
  Date DVar1;
  bool bVar2;
  State SVar3;
  Animation AVar4;
  Duration DVar5;
  long *plVar6;
  Date DVar7;
  long lVar8;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  
  lVar9 = *(long *)(unaff_x22 + 0x200);
  DVar7.unknown = *(undefined **)(unaff_x22 + 0x1b0);
  SVar3.unknown = &DAT_10054efb8;
  FUN_100002f94(&DAT_10054efb8,&DAT_100420510);
  SwiftUI::State::get_wrappedValue(SVar3);
  lVar8 = *(long *)(DVar7.unknown + 0x28);
  FUN_100095498();
  if (lVar8 == lVar9) {
    pcVar11 = *(code **)(unaff_x22 + 0x1f8);
    DVar7.unknown = *(undefined **)(unaff_x22 + 0x130);
    DVar1.unknown = *(undefined **)(unaff_x22 + 0x138);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x120);
    Foundation::Date::init();
    bVar2 = Foundation::Date::<_infix(DVar7,DVar1,param_3);
    (*pcVar11)(DVar7.unknown,uVar10);
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
  uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
  AVar4 = SwiftUI::Animation::easeInOut(0.12,DVar7.unknown);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar10;
  SwiftUI::_withAnimation();
  _swift_release();
  AVar4 = SwiftUI::Animation::easeIn(0.31,AVar4);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar10;
  SwiftUI::_withAnimation();
  _swift_release();
  AVar4 = SwiftUI::Animation::easeOut(0.31,AVar4);
  DVar5.unknown = (undefined *)SwiftUI::Animation::delay(0.31,AVar4);
  _swift_release(AVar4.unknown);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar10;
  pcVar11 = FUN_100098c94;
  SwiftUI::_withAnimation();
  _swift_release();
  DVar5 = Swift::Duration::seconds(0.66,DVar5);
  (extension_Swift)::Swift::Clock::_get_continuous();
  plVar6 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x220) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10008e658;
  FUN_100227100(DVar5.unknown,pcVar11,0,0,1);
  return;
}

