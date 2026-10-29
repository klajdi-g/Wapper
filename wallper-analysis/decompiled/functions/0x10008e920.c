// rea decompile_all
// name: FUN_10008e920
// address: 0x10008e920
// body: available
// range: 0x10008e920-0x10008eb83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10008eb80 to 0x100227100 FUN_100227100 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008e920(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  Transaction TVar13;
  Duration DVar14;
  long *plVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long unaff_x22;
  undefined8 uVar20;
  undefined8 uVar21;
  code *pcVar22;
  Transaction local_68 [2];
  
  (**(code **)(*(long *)(unaff_x22 + 0x148) + 8))
            (*(undefined8 *)(unaff_x22 + 0x158),*(undefined8 *)(unaff_x22 + 0x140));
  pcVar22 = *(code **)(unaff_x22 + 0x1f8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x88);
  local_68[0].unknown = (undefined *)0x0;
  SwiftUI::Transaction::set_disablesAnimations(local_68,true);
  TVar13.unknown = local_68[0].unknown;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar19;
  SwiftUI::_withTransaction(local_68[0]);
  (*pcVar22)(uVar20,uVar21);
  FUN_100095498(uVar18);
  _swift_release(TVar13.unknown);
  puVar1 = (undefined1 *)
           (*(long *)(unaff_x22 + 0x88) + (long)*(int *)(*(long *)(unaff_x22 + 0x1d8) + 0x20));
  uVar18 = *(undefined8 *)(puVar1 + 8);
  *(undefined1 *)(unaff_x22 + 0x58) = *puVar1;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar18;
  DVar14.unknown = &DAT_10054ab50;
  puVar16 = &DAT_10041d0f0;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue((State)DVar14.unknown);
  if ((*(byte *)(unaff_x22 + 0x39) & 1) != 0) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x1c0));
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar19 = *(undefined8 *)(unaff_x22 + 400);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x170);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x178);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x168);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar17 = *(undefined8 *)(unaff_x22 + 200);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1b8));
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar17);
                    /* WARNING: Could not recover jumptable at 0x00010008eaec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  DVar14 = Swift::Duration::seconds(0.2,DVar14);
  (extension_Swift)::Swift::Clock::_get_continuous();
  plVar15 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x230) = plVar15;
  *plVar15 = unaff_x22;
  plVar15[1] = (long)FUN_10008eb84;
  FUN_100227100(DVar14.unknown,puVar16,0,0,1);
  return;
}

