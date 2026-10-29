// rea decompile_all
// name: FUN_100083a04
// address: 0x100083a04
// body: available
// range: 0x100083a04-0x100083d2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100083c98 to 0x100227100 FUN_100227100 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100083a04(void)

{
  undefined1 *puVar1;
  bool bVar2;
  Task TVar3;
  Animation AVar4;
  Duration DVar5;
  long *plVar6;
  code *pcVar7;
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
  undefined8 uVar19;
  undefined8 uVar20;
  long unaff_x22;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  TVar3.unknown = *(undefined **)(unaff_x22 + 0x250);
  (**(code **)(unaff_x22 + 0x3c8))(TVar3.unknown,*(undefined8 *)(unaff_x22 + 0x238));
  bVar2 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar3);
  if (bVar2) {
    uVar18 = *(undefined8 *)(unaff_x22 + 0x3a0);
    AVar4.unknown = *(undefined **)(unaff_x22 + 0x308);
  }
  else {
    puVar1 = (undefined1 *)
             (*(long *)(unaff_x22 + 0x148) + (long)*(int *)(*(long *)(unaff_x22 + 800) + 0x28));
    uVar18 = *(undefined8 *)(puVar1 + 8);
    *(undefined1 *)(unaff_x22 + 200) = *puVar1;
    AVar4.unknown = *(undefined **)(unaff_x22 + 0x3a8);
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar18;
    SwiftUI::State::get_wrappedValue((State)AVar4.unknown);
    if (*(char *)(unaff_x22 + 0x3f0) == '\x01') {
      uVar18 = *(undefined8 *)(unaff_x22 + 0x148);
      DVar5.unknown = (undefined *)SwiftUI::Animation::spring(1.0,0.9,0.0,AVar4);
      *(undefined8 *)(unaff_x22 + 0x220) = uVar18;
      pcVar7 = FUN_1000992ac;
      SwiftUI::_withAnimation();
      _swift_release();
      DVar5 = Swift::Duration::seconds(0.9,DVar5);
      (extension_Swift)::Swift::Clock::_get_continuous();
      plVar6 = (long *)0x80;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x3e0) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_100083d2c;
      FUN_100227100(DVar5.unknown,pcVar7,0,0,1);
      return;
    }
    _swift_release(*(undefined8 *)(unaff_x22 + 0x308));
    AVar4.unknown = *(undefined **)(unaff_x22 + 0x3a8);
    puVar1 = (undefined1 *)
             (*(long *)(unaff_x22 + 0x148) + (long)*(int *)(*(long *)(unaff_x22 + 800) + 0x2c));
    uVar18 = *(undefined8 *)(puVar1 + 8);
    *(undefined1 *)(unaff_x22 + 0xa8) = *puVar1;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar18;
    SwiftUI::State::get_wrappedValue((State)AVar4.unknown);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x3a0);
    if (*(char *)(unaff_x22 + 0x69) != '\x01') goto LAB_100083a50;
    uVar8 = *(undefined8 *)(unaff_x22 + 0x148);
    AVar4 = SwiftUI::Animation::easeInOut(0.8,AVar4);
    *(undefined8 *)(unaff_x22 + 0x200) = uVar8;
    SwiftUI::_withAnimation();
  }
  _swift_release(AVar4.unknown);
LAB_100083a50:
  _swift_release(uVar18);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar8 = *(undefined8 *)(unaff_x22 + 600);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1a8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x300));
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000100083b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

