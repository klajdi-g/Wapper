// rea decompile_all
// name: FUN_1001345cc
// address: 0x1001345cc
// body: available
// range: 0x1001345cc-0x1001346f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001345cc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x218);
  pcVar11 = *(code **)(unaff_x22 + 0x1e0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x198);
  lVar4 = *(long *)(unaff_x22 + 0x1a0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x128);
  FUN_100093624(*(undefined8 *)(unaff_x22 + 0x1f8),*(undefined8 *)(unaff_x22 + 0x200));
  _swift_release(uVar5);
  (**(code **)(lVar4 + 8))(uVar1,uVar2);
  (*pcVar11)(uVar6,uVar3);
  FUN_100074250(uVar10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar8 = *(undefined8 *)(unaff_x22 + 400);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x118);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1d0));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001001346f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(1);
  return;
}

