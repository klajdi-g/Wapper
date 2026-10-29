// rea decompile_all
// name: FUN_1001e87f4
// address: 0x1001e87f4
// body: available
// range: 0x1001e87f4-0x1001e8a9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e89d8 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001e8a98 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001001e889c) */

void FUN_1001e87f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  URL self;
  NSString *pNVar5;
  ID IVar6;
  Data DVar7;
  Data DVar8;
  MainActor *pMVar9;
  undefined8 *puVar10;
  UnownedSerialExecutor UVar11;
  undefined *puVar12;
  _StringGuts _Var13;
  long lVar14;
  long lVar15;
  long unaff_x22;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  String SVar21;
  
  lVar14 = *(long *)PTR____stack_chk_guard_100521138;
  self.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  SVar21 = Foundation::URL::get_path(self);
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  IVar6 = NSFileManager::fileExistsAtPath_((ID)self.unknown,pNVar5);
  *(char *)(unaff_x22 + 0x1a9) = (char)IVar6;
  if ((int)IVar6 == 0) {
LAB_1001e8918:
    lVar15 = *(long *)(unaff_x22 + 0xe8);
    _swift_beginAccess(lVar15 + 0x10,unaff_x22 + 0x60,0,0);
    lVar15 = lVar15 + 0x10;
    _swift_weakLoadStrong();
    *(long *)(unaff_x22 + 0x198) = lVar15;
    if (lVar15 != 0) {
      pMVar9 = Swift::MainActor::typeMetadataAccessor();
      puVar12 = PTR_typeMetadataAccessor_1005246d8;
      pMVar9 = Swift::MainActor::get_shared(pMVar9,pMVar9);
      *(MainActor **)(unaff_x22 + 0x1a0) = pMVar9;
      puVar10 = &DAT_100558b80;
      FUN_100047f94(&DAT_100558b80,0xff,puVar12,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0)
      ;
      UVar11 = Swift::Actor::get_unownedExecutor();
      if (*(long *)PTR____stack_chk_guard_100521138 == lVar14) {
        _swift_task_switch(FUN_1001e8a9c,UVar11.unknown,puVar10);
        return;
      }
      goto LAB_1001e8a98;
    }
  }
  else {
    puVar12 = (undefined *)0x0;
    DVar7 = Foundation::Data::_init(*(undefined **)(unaff_x22 + 0xe0));
    DVar8 = DVar7;
    _Var13.unknown = puVar12;
    FUN_1001ec26c();
    if ((DVar8.unknown == (undefined *)0xd000000000000020) &&
       (_Var13.unknown == (undefined *)0x80000001004ddab0)) {
      _swift_bridgeObjectRelease(0x80000001004ddab0);
LAB_1001e890c:
      FUN_100093624(DVar7.unknown,puVar12);
      goto LAB_1001e8918;
    }
    bVar4 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)DVar8.unknown,_Var13,(_StringComparisonResult)0x20);
    _swift_bridgeObjectRelease(_Var13.unknown);
    if (bVar4) goto LAB_1001e890c;
    DVar8 = DVar7;
    FUN_1001ec608(DVar7.unknown,puVar12);
    FUN_100093624(DVar7.unknown,puVar12);
    if (((ulong)DVar8.unknown & 1) != 0) goto LAB_1001e8918;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x118);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 400));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar20);
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x0001001e8a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
LAB_1001e8a98:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

