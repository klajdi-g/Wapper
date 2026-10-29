// rea decompile_all
// name: FUN_100116d00
// address: 0x100116d00
// body: available
// range: 0x100116d00-0x100116e8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100116d00(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 *puVar13;
  State SVar14;
  undefined *puVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x22;
  undefined8 uVar19;
  undefined8 uVar20;
  
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1a0);
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x288));
  _swift_release(uVar17);
  puVar13 = (undefined8 *)
            (*(long *)(unaff_x22 + 0xf0) + (long)*(int *)(*(long *)(unaff_x22 + 0xf8) + 0x24));
  uVar17 = *puVar13;
  *(undefined8 *)(unaff_x22 + 0x58) = puVar13[1];
  *(undefined8 *)(unaff_x22 + 0x50) = uVar17;
  SVar14.unknown = &DAT_10054eed8;
  FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
  SwiftUI::State::get_wrappedValue(SVar14);
  if (*(long *)(unaff_x22 + 0xa8) == 0) {
    uVar18 = *(undefined8 *)(unaff_x22 + 0x178);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x160);
    lVar6 = *(long *)(unaff_x22 + 0x168);
    lVar1 = *(long *)(unaff_x22 + 0xf0);
    iVar12 = *(int *)(*(long *)(unaff_x22 + 0xf8) + 0x28);
    *(undefined1 *)(unaff_x22 + 0x2cd) = 0;
    puVar15 = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::set_wrappedValue((State *)(lVar1 + iVar12),unaff_x22 + 0x2cd,puVar15);
    pcVar16 = *(code **)(lVar6 + 8);
  }
  else {
    uVar18 = *(undefined8 *)(unaff_x22 + 0x178);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x160);
    pcVar16 = *(code **)(*(long *)(unaff_x22 + 0x168) + 8);
  }
  (*pcVar16)(uVar18,uVar17);
  uVar17 = *(undefined8 *)(unaff_x22 + 400);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x118);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x198));
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100116e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

