// rea decompile_all
// name: FUN_10014de3c
// address: 0x10014de3c
// body: available
// range: 0x10014de3c-0x10014df6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10014de3c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x240);
  pcVar5 = *(code **)(unaff_x22 + 0x230);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1d8);
  lVar3 = *(long *)(unaff_x22 + 0x1e0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1b8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x218));
  FUN_100093624(uVar9,uVar8);
  _swift_release(uVar7);
  (**(code **)(lVar3 + 8))(uVar1,uVar2);
  (*pcVar5)(uVar10,uVar6);
  FUN_100029548(uVar4,FUN_100150a0c);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar11 = *(undefined8 *)(unaff_x22 + 400);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x178);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x210));
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010014df6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

