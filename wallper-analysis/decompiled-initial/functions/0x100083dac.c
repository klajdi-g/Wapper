// rea decompile_all
// name: FUN_100083dac
// address: 0x100083dac
// body: available
// range: 0x100083dac-0x100083f9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100083dac(void)

{
  undefined1 *puVar1;
  bool bVar2;
  Task TVar3;
  undefined8 uVar4;
  Animation AVar5;
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
  long unaff_x22;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  TVar3.unknown = *(undefined **)(unaff_x22 + 0x308);
  _swift_release();
  bVar2 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar3);
  if (bVar2) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x3a0);
  }
  else {
    puVar1 = (undefined1 *)
             (*(long *)(unaff_x22 + 0x148) + (long)*(int *)(*(long *)(unaff_x22 + 800) + 0x2c));
    uVar4 = *(undefined8 *)(puVar1 + 8);
    *(undefined1 *)(unaff_x22 + 0xa8) = *puVar1;
    AVar5.unknown = *(undefined **)(unaff_x22 + 0x3a8);
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar4;
    SwiftUI::State::get_wrappedValue((State)AVar5.unknown);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x3a0);
    if (*(char *)(unaff_x22 + 0x69) == '\x01') {
      uVar6 = *(undefined8 *)(unaff_x22 + 0x148);
      AVar5 = SwiftUI::Animation::easeInOut(0.8,AVar5);
      *(undefined8 *)(unaff_x22 + 0x200) = uVar6;
      SwiftUI::_withAnimation();
      _swift_release(AVar5.unknown);
    }
  }
  _swift_release(uVar4);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar6 = *(undefined8 *)(unaff_x22 + 600);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1a8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x300));
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000100083f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

