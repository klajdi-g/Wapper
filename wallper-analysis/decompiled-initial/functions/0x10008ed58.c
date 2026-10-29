// rea decompile_all
// name: FUN_10008ed58
// address: 0x10008ed58
// body: available
// range: 0x10008ed58-0x10008eecf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008ed58(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  undefined8 uVar15;
  Animation AVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x148);
  AVar16.unknown = *(undefined **)(unaff_x22 + 0x150);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x140);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1c0));
  (**(code **)(lVar1 + 8))(AVar16.unknown,uVar18);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x88);
  AVar16 = SwiftUI::Animation::spring(0.9,0.85,0.0,AVar16);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar18;
  SwiftUI::_withAnimation();
  _swift_release(AVar16.unknown);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar2 = *(undefined8 *)(unaff_x22 + 400);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar17 = *(undefined8 *)(unaff_x22 + 200);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1b8));
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar17);
                    /* WARNING: Could not recover jumptable at 0x00010008eecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

