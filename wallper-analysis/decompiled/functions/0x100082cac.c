// rea decompile_all
// name: FUN_100082cac
// address: 0x100082cac
// body: available
// range: 0x100082cac-0x100083137 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000830a8 to 0x100227100 FUN_100227100 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100082cac(void)

{
  undefined1 *puVar1;
  bool bVar2;
  Task TVar3;
  State SVar4;
  Animation AVar5;
  Duration DVar6;
  long *plVar7;
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
  undefined8 uVar19;
  undefined8 uVar20;
  long unaff_x22;
  undefined8 uVar21;
  long lVar22;
  code *pcVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  TVar3.unknown = *(undefined **)(unaff_x22 + 0x260);
  (**(code **)(*(long *)(unaff_x22 + 0x240) + 8))(TVar3.unknown,*(undefined8 *)(unaff_x22 + 0x238));
  pcVar23 = *(code **)(unaff_x22 + 0x368);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1e8);
  bVar2 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar3);
  (*pcVar23)(uVar15,uVar19);
  FUN_100095498(uVar17);
  if (bVar2) {
    uVar15 = *(undefined8 *)(unaff_x22 + 0x308);
LAB_100082d1c:
    _swift_release(uVar15);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x2f8);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x2e0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x2d8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x2d0);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x2c8);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x2b0);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x280);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x278);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x268);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x260);
    uVar17 = *(undefined8 *)(unaff_x22 + 600);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x250);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x230);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x228);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1c8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x1a8);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x300));
    _swift_task_dealloc(uVar28);
    _swift_task_dealloc(uVar29);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar25);
    _swift_task_dealloc(uVar27);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000100082e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar22 = *(long *)(unaff_x22 + 800);
  lVar26 = *(long *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x128) = 0;
  SwiftUI::Transaction::set_disablesAnimations((Transaction *)(unaff_x22 + 0x128),true);
  *(undefined **)(unaff_x22 + 0x3a0) = *(undefined **)(unaff_x22 + 0x128);
  *(long *)(unaff_x22 + 0x80) = lVar26;
  SwiftUI::_withTransaction((Transaction)*(undefined **)(unaff_x22 + 0x128));
  puVar1 = (undefined1 *)(lVar26 + *(int *)(lVar22 + 0x3c));
  uVar15 = *(undefined8 *)(puVar1 + 8);
  *(undefined1 *)(unaff_x22 + 0xf8) = *puVar1;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar15;
  DVar6.unknown = &DAT_10054ab50;
  pcVar23 = (code *)&DAT_10041d0f0;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  *(undefined **)(unaff_x22 + 0x3a8) = DVar6.unknown;
  SVar4.unknown = DVar6.unknown;
  SwiftUI::State::get_wrappedValue((State)DVar6.unknown);
  if (*(char *)(unaff_x22 + 0x3f2) == '\x01') {
    uVar15 = *(undefined8 *)(unaff_x22 + 0x148);
    AVar5 = SwiftUI::Animation::easeInOut(0.15,SVar4.unknown);
    *(undefined8 *)(unaff_x22 + 0x20) = uVar15;
    pcVar23 = FUN_1000992c8;
    SwiftUI::_withAnimation();
    _swift_release(AVar5.unknown);
  }
  puVar1 = (undefined1 *)
           (*(long *)(unaff_x22 + 0x148) + (long)*(int *)(*(long *)(unaff_x22 + 800) + 0x24));
  uVar15 = *(undefined8 *)(puVar1 + 8);
  *(undefined1 *)(unaff_x22 + 0xe8) = *puVar1;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar15;
  SwiftUI::State::get_wrappedValue((State)DVar6.unknown);
  if ((*(byte *)(unaff_x22 + 0x3f1) & 1) == 0) {
    DVar6 = Swift::Duration::seconds(0.25,DVar6);
    (extension_Swift)::Swift::Clock::_get_continuous();
    plVar7 = (long *)0x80;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x3b0) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_100083138;
  }
  else {
    AVar5.unknown = *(undefined **)(unaff_x22 + 0x3a8);
    puVar1 = (undefined1 *)
             (*(long *)(unaff_x22 + 0x148) + (long)*(int *)(*(long *)(unaff_x22 + 800) + 0x28));
    uVar15 = *(undefined8 *)(puVar1 + 8);
    *(undefined1 *)(unaff_x22 + 200) = *puVar1;
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar15;
    SwiftUI::State::get_wrappedValue((State)AVar5.unknown);
    if (*(char *)(unaff_x22 + 0x3f0) != '\x01') {
      _swift_release(*(undefined8 *)(unaff_x22 + 0x308));
      AVar5.unknown = *(undefined **)(unaff_x22 + 0x3a8);
      puVar1 = (undefined1 *)
               (*(long *)(unaff_x22 + 0x148) + (long)*(int *)(*(long *)(unaff_x22 + 800) + 0x2c));
      uVar15 = *(undefined8 *)(puVar1 + 8);
      *(undefined1 *)(unaff_x22 + 0xa8) = *puVar1;
      *(undefined8 *)(unaff_x22 + 0xb0) = uVar15;
      SwiftUI::State::get_wrappedValue((State)AVar5.unknown);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x3a0);
      if (*(char *)(unaff_x22 + 0x69) == '\x01') {
        uVar17 = *(undefined8 *)(unaff_x22 + 0x148);
        AVar5 = SwiftUI::Animation::easeInOut(0.8,AVar5);
        *(undefined8 *)(unaff_x22 + 0x200) = uVar17;
        SwiftUI::_withAnimation();
        _swift_release(AVar5.unknown);
      }
      goto LAB_100082d1c;
    }
    uVar15 = *(undefined8 *)(unaff_x22 + 0x148);
    DVar6.unknown = (undefined *)SwiftUI::Animation::spring(1.0,0.9,0.0,AVar5);
    *(undefined8 *)(unaff_x22 + 0x220) = uVar15;
    pcVar23 = FUN_1000992ac;
    SwiftUI::_withAnimation();
    _swift_release();
    DVar6 = Swift::Duration::seconds(0.9,DVar6);
    (extension_Swift)::Swift::Clock::_get_continuous();
    plVar7 = (long *)0x80;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x3e0) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_100083d2c;
  }
  FUN_100227100(DVar6.unknown,pcVar23,0,0,1);
  return;
}

