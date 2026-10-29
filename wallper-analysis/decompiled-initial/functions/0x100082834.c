// rea decompile_all
// name: FUN_100082834
// address: 0x100082834
// body: available
// range: 0x100082834-0x100082cab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100082c1c to 0x100227100 FUN_100227100 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100082834(Task param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  State SVar3;
  Animation AVar4;
  Duration DVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x22;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  code *pcVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  pcVar23 = *(code **)(unaff_x22 + 0x368);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1e8);
  bVar2 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
  (*pcVar23)(uVar14,uVar19);
  FUN_100095498(uVar16);
  if (bVar2) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x308);
LAB_100082894:
    _swift_release(uVar14);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x2f8);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x2e0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x2d8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x2d0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x2c8);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x2b0);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x280);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x278);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x268);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x260);
    uVar16 = *(undefined8 *)(unaff_x22 + 600);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x250);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x230);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x228);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x1c8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x1a8);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x300));
    _swift_task_dealloc(uVar27);
    _swift_task_dealloc(uVar28);
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001000829bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar21 = *(long *)(unaff_x22 + 800);
  lVar25 = *(long *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x128) = 0;
  SwiftUI::Transaction::set_disablesAnimations((Transaction *)(unaff_x22 + 0x128),true);
  *(undefined **)(unaff_x22 + 0x3a0) = *(undefined **)(unaff_x22 + 0x128);
  *(long *)(unaff_x22 + 0x80) = lVar25;
  SwiftUI::_withTransaction((Transaction)*(undefined **)(unaff_x22 + 0x128));
  puVar1 = (undefined1 *)(lVar25 + *(int *)(lVar21 + 0x3c));
  uVar14 = *(undefined8 *)(puVar1 + 8);
  *(undefined1 *)(unaff_x22 + 0xf8) = *puVar1;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar14;
  DVar5.unknown = &DAT_10054ab50;
  pcVar23 = (code *)&DAT_10041d0f0;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  *(undefined **)(unaff_x22 + 0x3a8) = DVar5.unknown;
  SVar3.unknown = DVar5.unknown;
  SwiftUI::State::get_wrappedValue((State)DVar5.unknown);
  if (*(char *)(unaff_x22 + 0x3f2) == '\x01') {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x148);
    AVar4 = SwiftUI::Animation::easeInOut(0.15,SVar3.unknown);
    *(undefined8 *)(unaff_x22 + 0x20) = uVar14;
    pcVar23 = FUN_1000992c8;
    SwiftUI::_withAnimation();
    _swift_release(AVar4.unknown);
  }
  puVar1 = (undefined1 *)
           (*(long *)(unaff_x22 + 0x148) + (long)*(int *)(*(long *)(unaff_x22 + 800) + 0x24));
  uVar14 = *(undefined8 *)(puVar1 + 8);
  *(undefined1 *)(unaff_x22 + 0xe8) = *puVar1;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar14;
  SwiftUI::State::get_wrappedValue((State)DVar5.unknown);
  if ((*(byte *)(unaff_x22 + 0x3f1) & 1) == 0) {
    DVar5 = Swift::Duration::seconds(0.25,DVar5);
    (extension_Swift)::Swift::Clock::_get_continuous();
    plVar6 = (long *)0x80;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x3b0) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_100083138;
  }
  else {
    AVar4.unknown = *(undefined **)(unaff_x22 + 0x3a8);
    puVar1 = (undefined1 *)
             (*(long *)(unaff_x22 + 0x148) + (long)*(int *)(*(long *)(unaff_x22 + 800) + 0x28));
    uVar14 = *(undefined8 *)(puVar1 + 8);
    *(undefined1 *)(unaff_x22 + 200) = *puVar1;
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar14;
    SwiftUI::State::get_wrappedValue((State)AVar4.unknown);
    if (*(char *)(unaff_x22 + 0x3f0) != '\x01') {
      _swift_release(*(undefined8 *)(unaff_x22 + 0x308));
      AVar4.unknown = *(undefined **)(unaff_x22 + 0x3a8);
      puVar1 = (undefined1 *)
               (*(long *)(unaff_x22 + 0x148) + (long)*(int *)(*(long *)(unaff_x22 + 800) + 0x2c));
      uVar14 = *(undefined8 *)(puVar1 + 8);
      *(undefined1 *)(unaff_x22 + 0xa8) = *puVar1;
      *(undefined8 *)(unaff_x22 + 0xb0) = uVar14;
      SwiftUI::State::get_wrappedValue((State)AVar4.unknown);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x3a0);
      if (*(char *)(unaff_x22 + 0x69) == '\x01') {
        uVar16 = *(undefined8 *)(unaff_x22 + 0x148);
        AVar4 = SwiftUI::Animation::easeInOut(0.8,AVar4);
        *(undefined8 *)(unaff_x22 + 0x200) = uVar16;
        SwiftUI::_withAnimation();
        _swift_release(AVar4.unknown);
      }
      goto LAB_100082894;
    }
    uVar14 = *(undefined8 *)(unaff_x22 + 0x148);
    DVar5.unknown = (undefined *)SwiftUI::Animation::spring(1.0,0.9,0.0,AVar4);
    *(undefined8 *)(unaff_x22 + 0x220) = uVar14;
    pcVar23 = FUN_1000992ac;
    SwiftUI::_withAnimation();
    _swift_release();
    DVar5 = Swift::Duration::seconds(0.9,DVar5);
    (extension_Swift)::Swift::Clock::_get_continuous();
    plVar6 = (long *)0x80;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x3e0) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_100083d2c;
  }
  FUN_100227100(DVar5.unknown,pcVar23,0,0,1);
  return;
}

