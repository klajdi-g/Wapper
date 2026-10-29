// rea decompile_all
// name: FUN_100116614
// address: 0x100116614
// body: available
// range: 0x100116614-0x100116aeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10011699c to 0x100413538 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$sleep (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100116ae8 to 0x100413514 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$get_value (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100116614(Task param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 uVar9;
  int iVar10;
  bool bVar11;
  __uint8 _Var12;
  undefined *puVar13;
  undefined *puVar14;
  TaskPriority TVar15;
  TaskPriority TVar16;
  UnownedSerialExecutor UVar17;
  long *plVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long unaff_x22;
  undefined8 uVar27;
  long lVar28;
  undefined8 uVar29;
  ulong uVar30;
  code *pcVar31;
  undefined8 uVar32;
  code *pcVar33;
  
  bVar11 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
  if (bVar11) {
    uVar23 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x160);
    lVar28 = *(long *)(unaff_x22 + 0x168);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1f8));
    _swift_release(uVar1);
  }
  else {
    lVar22 = *(long *)(unaff_x22 + 0x218) + 1;
    if (lVar22 != 0x32) {
      *(long *)(unaff_x22 + 0x218) = lVar22;
      uVar23 = *(undefined8 *)(unaff_x22 + 0x1c8);
      puVar13 = &DAT_1004262a8;
      _swift_getKeyPath(&DAT_1004262a8);
      puVar14 = &DAT_1004262d0;
      _swift_getKeyPath(&DAT_1004262d0);
      Combine::Published::_get_subscript(unaff_x22 + 0xb8,uVar23,puVar13,puVar14);
      _swift_release(puVar14);
      _swift_release(puVar13);
      lVar22 = *(long *)(unaff_x22 + 0xb8);
      if (*(long *)(lVar22 + 0x10) != 0) {
        lVar28 = *(long *)(unaff_x22 + 0x1b8);
        uVar20 = *(ulong *)(unaff_x22 + 0x1c0);
        FUN_10000464c(lVar28);
        if ((uVar20 & 1) != 0) {
          pcVar33 = *(code **)(unaff_x22 + 0x210);
          uVar9 = *(undefined1 *)(unaff_x22 + 0x2d2);
          uVar21 = *(undefined8 *)(unaff_x22 + 0x200);
          puVar13 = *(undefined **)(unaff_x22 + 0x188);
          uVar25 = *(undefined8 *)(unaff_x22 + 400);
          uVar26 = *(undefined8 *)(unaff_x22 + 0x180);
          lVar2 = *(long *)(unaff_x22 + 0x168);
          lVar8 = *(long *)(unaff_x22 + 0x170);
          uVar29 = *(undefined8 *)(unaff_x22 + 0x160);
          uVar23 = *(undefined8 *)(unaff_x22 + 0x120);
          uVar1 = *(undefined8 *)(unaff_x22 + 0x128);
          pcVar31 = *(code **)(lVar2 + 0x10);
          (*pcVar31)(uVar26,*(long *)(lVar22 + 0x38) + *(long *)(lVar2 + 0x48) * lVar28,uVar29);
          _swift_bridgeObjectRelease(lVar22);
          TVar15.unknown = puVar13;
          (*pcVar33)(puVar13,uVar26,uVar29);
          Swift::TaskPriority::get_userInitiated(TVar15);
          TVar16 = Swift::TaskPriority::typeMetadataAccessor();
          lVar22 = *(long *)(TVar16.unknown + -8);
          (**(code **)(lVar22 + 0x38))(uVar1,0,1,TVar16.unknown);
          (*pcVar31)(uVar25,puVar13,uVar29);
          uVar20 = (ulong)*(byte *)(lVar2 + 0x50);
          uVar24 = uVar20 + 0x20 & (uVar20 ^ 0xffffffffffffffff);
          uVar30 = lVar8 + uVar24 + 7 & 0xfffffffffffffff8;
          puVar13 = &DAT_10052ccf0;
          _swift_allocObject(&DAT_10052ccf0,uVar30 + 9,uVar20 | 7);
          *(undefined8 *)(puVar13 + 0x10) = 0;
          *(undefined8 *)(puVar13 + 0x18) = 0;
          (*pcVar33)(puVar13 + uVar24,uVar25,uVar29);
          *(undefined8 *)(puVar13 + uVar30) = uVar21;
          *(undefined1 *)((long)(puVar13 + uVar30) + 8) = uVar9;
          FUN_1000087e4(uVar1,uVar23,&DAT_100561090,&DAT_10041c870);
          (**(code **)(lVar22 + 0x30))(uVar23,1,TVar16.unknown);
          TVar15.unknown = puVar13;
          _swift_retain();
          uVar25 = *(undefined8 *)(unaff_x22 + 0x120);
          if ((int)uVar23 == 1) {
            FUN_10002a29c(uVar25,&DAT_100561090,&DAT_10041c870);
            uVar20 = 0x1000;
          }
          else {
            _Var12 = Swift::TaskPriority::get_rawValue(TVar15);
            (**(code **)(lVar22 + 8))(uVar25,TVar16.unknown);
            uVar20 = (ulong)_Var12 | 0x1000;
          }
          lVar22 = *(long *)(puVar13 + 0x10);
          lVar28 = *(long *)(puVar13 + 0x18);
          _swift_unknownObjectRetain(lVar22);
          _swift_release(puVar13);
          if (lVar22 == 0) {
            UVar17.unknown = (undefined *)0x0;
            lVar28 = 0;
          }
          else {
            _swift_getObjectType(lVar22);
            UVar17 = Swift::Actor::get_unownedExecutor();
            _swift_unknownObjectRelease(lVar22);
          }
          puVar14 = &DAT_10052cd18;
          _swift_allocObject(&DAT_10052cd18,0x20,7);
          *(undefined **)(puVar14 + 0x10) = &DAT_1004262f8;
          *(undefined **)(puVar14 + 0x18) = puVar13;
          puVar13 = &DAT_10054bd30;
          FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
          if (lVar28 == 0 && UVar17.unknown == (undefined *)0x0) {
            puVar19 = (undefined8 *)0x0;
          }
          else {
            puVar19 = (undefined8 *)(unaff_x22 + 0x10);
            *puVar19 = 0;
            *(undefined8 *)(unaff_x22 + 0x18) = 0;
            *(undefined **)(unaff_x22 + 0x20) = UVar17.unknown;
            *(long *)(unaff_x22 + 0x28) = lVar28;
          }
          uVar23 = *(undefined8 *)(unaff_x22 + 0x128);
          _swift_task_create(uVar20,puVar19,puVar13,&DAT_100426300,puVar14);
          *(ulong *)(unaff_x22 + 0x220) = uVar20;
          FUN_10002a29c(uVar23,&DAT_100561090,&DAT_10041c870);
          plVar18 = (long *)(ulong)*(uint *)(PTR__get_value_100524738 + 4);
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x228) = plVar18;
          *plVar18 = unaff_x22;
          plVar18[1] = (long)FUN_1001156b4;
          (extension_Swift)::Swift::Task::_get_value((undefined *)(unaff_x22 + 200));
          return;
        }
      }
      _swift_bridgeObjectRelease(lVar22);
      plVar18 = (long *)(ulong)*(uint *)(PTR__sleep_100524758 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x230) = plVar18;
      *plVar18 = unaff_x22;
      plVar18[1] = (long)FUN_10011596c;
      (extension_Swift)::Swift::Task::_sleep(100000000);
      return;
    }
    uVar23 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x160);
    lVar28 = *(long *)(unaff_x22 + 0x168);
    lVar22 = *(long *)(unaff_x22 + 0xf0);
    lVar2 = *(long *)(unaff_x22 + 0xf8);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1f8));
    _swift_release(uVar1);
    iVar10 = *(int *)(lVar2 + 0x28);
    *(undefined1 *)(unaff_x22 + 0x2cf) = 0;
    puVar13 = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::set_wrappedValue((State *)(lVar22 + iVar10),unaff_x22 + 0x2cf,puVar13);
  }
  (**(code **)(lVar28 + 8))(uVar23,uVar25);
  uVar23 = *(undefined8 *)(unaff_x22 + 400);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x118);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x198));
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar29);
                    /* WARNING: Could not recover jumptable at 0x000100116778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

