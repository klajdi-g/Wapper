// rea decompile_all
// name: FUN_1001160bc
// address: 0x1001160bc
// body: available
// range: 0x1001160bc-0x100116353 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001160bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  State SVar14;
  code *pcVar15;
  undefined8 uVar16;
  long unaff_x22;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  uVar16 = *(undefined8 *)(unaff_x22 + 0x2a0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1f8);
  SVar14.unknown = *(undefined **)(unaff_x22 + 0x1e0);
  lVar3 = *(long *)(unaff_x22 + 0x1e8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1d8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1a0));
  FUN_1000fec60(uVar16,uVar17,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar4;
  SwiftUI::State::get_wrappedValue(SVar14);
  if (lVar3 == *(long *)(unaff_x22 + 0x90)) {
    uVar17 = *(undefined8 *)(unaff_x22 + 0x278);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x270);
    lVar3 = *(long *)(unaff_x22 + 0xf0);
    lVar5 = *(long *)(unaff_x22 + 0xf8);
    iVar11 = *(int *)(lVar5 + 0x24);
    *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x2a0);
    puVar13 = &DAT_10054eed8;
    FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
    SwiftUI::State::set_wrappedValue
              ((State *)(lVar3 + iVar11),(undefined8 *)(unaff_x22 + 0x98),puVar13);
    iVar11 = *(int *)(lVar5 + 0x28);
    *(undefined1 *)(unaff_x22 + 0x2cc) = 0;
    puVar13 = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::set_wrappedValue((State *)(lVar3 + iVar11),unaff_x22 + 0x2cc,puVar13);
    FUN_100093624(uVar19,uVar17);
    puVar12 = (undefined8 *)
              (*(long *)(unaff_x22 + 0xf0) + (long)*(int *)(*(long *)(unaff_x22 + 0xf8) + 0x24));
    uVar17 = *puVar12;
    *(undefined8 *)(unaff_x22 + 0x58) = puVar12[1];
    *(undefined8 *)(unaff_x22 + 0x50) = uVar17;
    SVar14.unknown = &DAT_10054eed8;
    FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
    SwiftUI::State::get_wrappedValue(SVar14);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x178);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x160);
    lVar3 = *(long *)(unaff_x22 + 0x168);
    if (*(long *)(unaff_x22 + 0xa8) == 0) {
      lVar5 = *(long *)(unaff_x22 + 0xf0);
      iVar11 = *(int *)(*(long *)(unaff_x22 + 0xf8) + 0x28);
      *(undefined1 *)(unaff_x22 + 0x2cd) = 0;
      puVar13 = &DAT_10054ab50;
      FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
      SwiftUI::State::set_wrappedValue((State *)(lVar5 + iVar11),unaff_x22 + 0x2cd,puVar13);
    }
    pcVar15 = *(code **)(lVar3 + 8);
  }
  else {
    uVar19 = *(undefined8 *)(unaff_x22 + 0x178);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x160);
    lVar3 = *(long *)(unaff_x22 + 0x168);
    FUN_100093624(*(undefined8 *)(unaff_x22 + 0x270),*(undefined8 *)(unaff_x22 + 0x278));
    pcVar15 = *(code **)(lVar3 + 8);
  }
  (*pcVar15)(uVar19,uVar17);
  uVar17 = *(undefined8 *)(unaff_x22 + 400);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x118);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x198));
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100116350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

