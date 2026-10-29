// rea decompile_all
// name: FUN_10013dab4
// address: 0x10013dab4
// body: available
// range: 0x10013dab4-0x10013dc37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10013dab4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar3 = *(long *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x68));
  FUN_10013c448(uVar1,uVar2,uVar4,0x64206b6e696c6e75,0xed00006563697665);
  if (lVar3 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0x80);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
    lVar3 = *(long *)(unaff_x22 + 0x28);
    FUN_100093624(*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x98));
    (**(code **)(lVar3 + 8))(uVar4,uVar5);
    (*UNRECOVERED_JUMPTABLE)(uVar6,uVar8);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    FUN_100093624(*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x98));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0x80);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
    (**(code **)(*(long *)(unaff_x22 + 0x28) + 8))(uVar4,*(undefined8 *)(unaff_x22 + 0x20));
    (*UNRECOVERED_JUMPTABLE)(uVar5,uVar7);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010013dc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

