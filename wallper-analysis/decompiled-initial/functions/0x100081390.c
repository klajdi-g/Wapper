// rea decompile_all
// name: FUN_100081390
// address: 0x100081390
// body: available
// range: 0x100081390-0x1000815df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000815dc to 0x100227100 FUN_100227100 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100081390(void)

{
  Task TVar1;
  Animation AVar2;
  Duration DVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x22;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined7 extraout_var;
  
  TVar1.unknown = *(undefined **)(unaff_x22 + 0x278);
  (**(code **)(unaff_x22 + 0x340))(TVar1.unknown,*(undefined8 *)(unaff_x22 + 0x238));
  AVar2.unknown._0_1_ = (extension_Swift)::Swift::Task::_get_isCancelled(TVar1);
  AVar2.unknown._1_7_ = extraout_var;
  if (AVar2.unknown._0_1_) {
    uVar16 = *(undefined8 *)(unaff_x22 + 0x308);
    FUN_100095498(*(undefined8 *)(unaff_x22 + 0x300));
    _swift_release(uVar16);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x2f8);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x2e0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x2d8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x2d0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x2c8);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x2b0);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x280);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x278);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x268);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x260);
    uVar6 = *(undefined8 *)(unaff_x22 + 600);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x250);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x230);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x228);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1c8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x1a8);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x300));
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000100081500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar16 = *(undefined8 *)(unaff_x22 + 0x148);
  DVar3.unknown = (undefined *)SwiftUI::Animation::easeInOut(0.6,AVar2);
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar16;
  pcVar5 = FUN_1000993d4;
  SwiftUI::_withAnimation();
  _swift_release();
  DVar3 = Swift::Duration::seconds(0.64,DVar3);
  (extension_Swift)::Swift::Clock::_get_continuous();
  plVar4 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x358) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1000815e0;
  FUN_100227100(DVar3.unknown,pcVar5,0,0,1);
  return;
}

