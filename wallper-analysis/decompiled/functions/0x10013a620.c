// rea decompile_all
// name: FUN_10013a620
// address: 0x10013a620
// body: available
// range: 0x10013a620-0x10013a7c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10013a620(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
  lVar4 = *(long *)(unaff_x22 + 0x140);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x130);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xe8));
  FUN_10013c448(uVar1,uVar9,uVar10,0xd000000000000015,0x80000001004de360);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x118);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0x100);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe0);
  if (lVar4 == 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
    lVar4 = *(long *)(unaff_x22 + 0xb0);
    FUN_100093624(*(undefined8 *)(unaff_x22 + 0x128),*(undefined8 *)(unaff_x22 + 0x130));
    _swift_release(uVar10);
    FUN_100093624(uVar1,uVar9);
    (**(code **)(lVar4 + 8))(uVar3,uVar5);
    (*UNRECOVERED_JUMPTABLE)(uVar8,uVar7);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar3);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
    lVar4 = *(long *)(unaff_x22 + 0xb0);
    FUN_100093624(*(undefined8 *)(unaff_x22 + 0x128),*(undefined8 *)(unaff_x22 + 0x130));
    _swift_release(uVar10);
    FUN_100093624(uVar1,uVar9);
    (**(code **)(lVar4 + 8))(uVar2,uVar3);
    (*UNRECOVERED_JUMPTABLE)(uVar8,uVar5);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xe0));
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar10);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010013a7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

