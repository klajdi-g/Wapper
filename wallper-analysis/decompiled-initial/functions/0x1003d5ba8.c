// rea decompile_all
// name: FUN_1003d5ba8
// address: 0x1003d5ba8
// body: available
// range: 0x1003d5ba8-0x1003d5f5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003d5ea4 to 0x100413514 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$get_value (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003d5ba8(Task param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  URL self;
  NSString *pNVar12;
  ID IVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  long unaff_x22;
  undefined8 uVar21;
  code *pcVar22;
  ulong uVar23;
  String SVar24;
  
  bVar8 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
  if (bVar8) {
    uVar17 = *(undefined8 *)(unaff_x22 + 0xe0);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x108));
    _swift_release(uVar17);
  }
  else {
    uVar17 = *(undefined8 *)(unaff_x22 + 0xf8);
    puVar9 = &DAT_1004365f0;
    _swift_getKeyPath(&DAT_1004365f0);
    puVar10 = &DAT_100436618;
    _swift_getKeyPath(&DAT_100436618);
    Combine::Published::_get_subscript(unaff_x22 + 0x30,uVar17,puVar9,puVar10);
    _swift_release(puVar10);
    _swift_release(puVar9);
    lVar18 = *(long *)(unaff_x22 + 0x30);
    if (*(long *)(lVar18 + 0x10) == 0) {
      bVar8 = true;
    }
    else {
      lVar11 = *(long *)(unaff_x22 + 0x100);
      uVar20 = *(ulong *)(unaff_x22 + 0x108);
      _swift_bridgeObjectRetain(lVar18);
      FUN_10000464c(lVar11);
      bVar8 = (uVar20 & 1) == 0;
      if (!bVar8) {
        (**(code **)(unaff_x22 + 0x158))
                  (*(undefined8 *)(unaff_x22 + 0xb0),
                   *(long *)(lVar18 + 0x38) + *(long *)(*(long *)(unaff_x22 + 0x80) + 0x48) * lVar11
                   ,*(undefined8 *)(unaff_x22 + 0x78));
      }
      _swift_bridgeObjectRelease(lVar18);
    }
    pcVar22 = *(code **)(unaff_x22 + 0x130);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar17 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x78);
    (**(code **)(unaff_x22 + 0x118))(uVar17,bVar8,1,uVar21);
    _swift_bridgeObjectRelease(lVar18);
    _swift_bridgeObjectRelease(uVar19);
    (*pcVar22)(uVar17,1,uVar21);
    uVar19 = *(undefined8 *)(unaff_x22 + 0xb0);
    if ((int)uVar17 == 1) {
      _swift_release(*(undefined8 *)(unaff_x22 + 0xe0));
      FUN_10002a29c(uVar19,&DAT_100553d90,&DAT_10041bf10);
    }
    else {
      (**(code **)(unaff_x22 + 0x160))
                (*(undefined8 *)(unaff_x22 + 0x90),uVar19,*(undefined8 *)(unaff_x22 + 0x78));
      self.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
      SVar24 = Foundation::URL::get_path(self);
      pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar24.bridgeObject);
      IVar13 = NSFileManager::fileExistsAtPath_((ID)self.unknown,pNVar12);
      if ((int)IVar13 != 0) {
        uVar23 = (ulong)*(byte *)(unaff_x22 + 400);
        pcVar22 = *(code **)(unaff_x22 + 0x158);
        pcVar2 = *(code **)(unaff_x22 + 0x160);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x148);
        pcVar3 = *(code **)(unaff_x22 + 0x150);
        uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
        lVar18 = *(long *)(unaff_x22 + 0x88);
        uVar21 = *(undefined8 *)(unaff_x22 + 0x90);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x70);
        uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
        Swift::TaskPriority::get_userInitiated((TaskPriority)0x0);
        (*pcVar3)(uVar19,0,1,uVar17);
        (*pcVar22)(uVar16,uVar21,uVar1);
        uVar20 = uVar23 + 0x20 & (uVar23 ^ 0xffffffffffffffff);
        puVar9 = &DAT_10053df50;
        _swift_allocObject(&DAT_10053df50,lVar18 + uVar20,uVar23 | 7);
        *(undefined8 *)(puVar9 + 0x10) = 0;
        *(undefined8 *)(puVar9 + 0x18) = 0;
        (*pcVar2)(puVar9 + uVar20,uVar16,uVar1);
        uVar17 = 0;
        FUN_100176fac(0,0,uVar19,&DAT_100436650,puVar9);
        *(undefined8 *)(unaff_x22 + 0x178) = uVar17;
        FUN_10002a29c(uVar19,&DAT_100561090,&DAT_10041c870);
        plVar14 = (long *)(ulong)*(uint *)(PTR__get_value_100524738 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x180) = plVar14;
        FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
        *plVar14 = unaff_x22;
        plVar14[1] = (long)FUN_1003d5f5c;
        (extension_Swift)::Swift::Task::_get_value((undefined *)(unaff_x22 + 0x38));
        return;
      }
      uVar19 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x78);
      lVar18 = *(long *)(unaff_x22 + 0x80);
      _swift_release(*(undefined8 *)(unaff_x22 + 0xe0));
      (**(code **)(lVar18 + 8))(uVar19,uVar17);
    }
  }
  uVar17 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar4 = *(undefined8 *)(unaff_x22 + 200);
  uVar21 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x70);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xd8));
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar15);
                    /* WARNING: Could not recover jumptable at 0x0001003d5f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

