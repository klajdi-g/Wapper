// rea decompile_all
// name: FUN_100115704
// address: 0x100115704
// body: available
// range: 0x100115704-0x10011596b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100115878 to 0x100413538 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$sleep (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100115704(void)

{
  State SVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined *puVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  code *pcVar18;
  long unaff_x22;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  lVar19 = *(long *)(unaff_x22 + 200);
  if (lVar19 != 0) {
    SVar1.unknown = *(undefined **)(unaff_x22 + 0x1e0);
    lVar5 = *(long *)(unaff_x22 + 0x1e8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x1d8);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x1a0));
    *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x48) = uVar17;
    SwiftUI::State::get_wrappedValue(SVar1);
    if (lVar5 == *(long *)(unaff_x22 + 0xd8)) {
      uVar17 = *(undefined8 *)(unaff_x22 + 0x1f8);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x198);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x188);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
      lVar6 = *(long *)(unaff_x22 + 0x168);
      lVar5 = *(long *)(unaff_x22 + 0xf0);
      lVar7 = *(long *)(unaff_x22 + 0xf8);
      FUN_1000fec60(lVar19,*(undefined8 *)(unaff_x22 + 0x1f0),uVar17);
      _swift_bridgeObjectRelease(uVar17);
      iVar13 = *(int *)(lVar7 + 0x24);
      *(long *)(unaff_x22 + 0xe0) = lVar19;
      puVar14 = &DAT_10054eed8;
      FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
      SwiftUI::State::set_wrappedValue((State *)(lVar5 + iVar13),unaff_x22 + 0xe0,puVar14);
      iVar13 = *(int *)(lVar7 + 0x28);
      *(undefined1 *)(unaff_x22 + 0x2d0) = 0;
      puVar14 = &DAT_10054ab50;
      FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
      SwiftUI::State::set_wrappedValue((State *)(lVar5 + iVar13),unaff_x22 + 0x2d0,puVar14);
      pcVar18 = *(code **)(lVar6 + 8);
      (*pcVar18)(uVar21,uVar2);
      (*pcVar18)(uVar16,uVar2);
    }
    else {
      uVar16 = *(undefined8 *)(unaff_x22 + 0x198);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x188);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
      lVar19 = *(long *)(unaff_x22 + 0x168);
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1f8));
      pcVar18 = *(code **)(lVar19 + 8);
      (*pcVar18)(uVar17,uVar2);
      (*pcVar18)(uVar16,uVar2);
    }
    uVar2 = *(undefined8 *)(unaff_x22 + 400);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x178);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x118);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x198));
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100115968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  (**(code **)(*(long *)(unaff_x22 + 0x168) + 8))
            (*(undefined8 *)(unaff_x22 + 0x188),*(undefined8 *)(unaff_x22 + 0x160));
  plVar15 = (long *)(ulong)*(uint *)(PTR__sleep_100524758 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x230) = plVar15;
  *plVar15 = unaff_x22;
  plVar15[1] = (long)FUN_10011596c;
  (extension_Swift)::Swift::Task::_sleep(100000000);
  return;
}

