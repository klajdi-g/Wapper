// rea decompile_all
// name: FUN_100116398
// address: 0x100116398
// body: available
// range: 0x100116398-0x1001164b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100116398(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x160);
  lVar4 = *(long *)(unaff_x22 + 0x168);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1a0));
  FUN_100093624(uVar11,uVar10);
  (**(code **)(lVar4 + 8))(uVar12,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 400);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x118);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x198));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001001164b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

