// rea decompile_all
// name: FUN_1003d5fa8
// address: 0x1003d5fa8
// body: available
// range: 0x1003d5fa8-0x1003d619b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003d5fa8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  Task TVar13;
  char *pcVar14;
  char *pcVar15;
  undefined8 uVar16;
  void *pvVar17;
  long lVar18;
  undefined8 uVar19;
  long unaff_x22;
  long lVar20;
  long *plVar21;
  String SVar22;
  String SVar23;
  
  TVar13.unknown = *(undefined **)(unaff_x22 + 0xe0);
  _swift_release();
  lVar18 = *(long *)(unaff_x22 + 0x38);
  bVar12 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar13);
  if (!bVar12) {
    pcVar1 = *(code **)(unaff_x22 + 0x118);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x120);
    iVar10 = *(int *)(unaff_x22 + 0x18c);
    pvVar17 = *(void **)(unaff_x22 + 0x110);
    iVar11 = *(int *)(unaff_x22 + 0x188);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar20 = *(long *)(unaff_x22 + 0x68);
    (**(code **)(unaff_x22 + 0x158))(uVar4,*(undefined8 *)(unaff_x22 + 0x90),uVar19);
    (*pcVar1)(uVar4,0,1,uVar19);
    pcVar14 = &DAT_10041bf10;
    pcVar15 = pcVar14;
    FUN_1000087e4(uVar4,uVar2,&DAT_100553d90);
    SwiftUI::State::set_wrappedValue((State *)(lVar20 + iVar10),uVar2,uVar3);
    FUN_10002a29c(uVar4,&DAT_100553d90);
    plVar21 = (long *)(unaff_x22 + 0x40);
    *plVar21 = lVar18;
    SwiftUI::State::set_wrappedValue((State *)(lVar20 + iVar11));
    if (lVar18 != 0) {
      FUN_1003cffb8();
      SVar22.bridgeObject = pvVar17;
      SVar22.str = (char *)plVar21;
      SVar23.bridgeObject = pcVar15;
      SVar23.str = pcVar14;
      Swift::String::append(SVar22,SVar23);
      _swift_bridgeObjectRelease(pvVar17);
      FUN_1000fec60(lVar18,0x2d776f727473696c,0xe800000000000000);
      _swift_bridgeObjectRelease(0xe800000000000000);
    }
  }
  (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))
            (*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x78));
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar6 = *(undefined8 *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x70);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xd8));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar16);
                    /* WARNING: Could not recover jumptable at 0x0001003d6198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

