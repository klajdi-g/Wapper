// rea decompile_all
// name: FUN_1002a59b0
// address: 0x1002a59b0
// body: available
// range: 0x1002a59b0-0x1002a5d0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002a5cfc to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002a5d0c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002a59b0(UUID param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  ID IVar6;
  NSString *pNVar7;
  MainActor *pMVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  void *pvVar11;
  URL UVar12;
  URL UVar13;
  long lVar14;
  code *pcVar15;
  ulong uVar16;
  long unaff_x22;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  
  lVar14 = *(long *)PTR____stack_chk_guard_100521138;
  SVar23 = Foundation::UUID::get_uuidString(param_1);
  SVar24 = Swift::String::uppercased(SVar23);
  pvVar11 = SVar24.bridgeObject;
  _swift_bridgeObjectRelease(SVar23.bridgeObject);
  *(String *)(unaff_x22 + 0x158) = SVar24;
  *(undefined **)(unaff_x22 + 0x168) = &_OBJC_CLASS___NSFileManager;
  IVar6 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar13.unknown = (undefined *)0x1;
  IVar6 = NSFileManager::URLsForDirectory_inDomains_(IVar6,0xe);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if (*(long *)(IVar6 + 0x10) == 0) {
    _swift_bridgeObjectRelease(IVar6);
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x1002a5d0c);
    (*pcVar15)();
  }
  uVar16 = (ulong)*(byte *)(*(long *)(unaff_x22 + 0x128) + 0x50);
  pcVar15 = *(code **)(*(long *)(unaff_x22 + 0x128) + 0x10);
  *(code **)(unaff_x22 + 0x170) = pcVar15;
  (*pcVar15)(*(undefined8 *)(unaff_x22 + 0x150),
             IVar6 + (uVar16 + 0x20 & (uVar16 ^ 0xffffffffffffffff)),
             *(undefined8 *)(unaff_x22 + 0x120));
  _swift_bridgeObjectRelease(IVar6);
  UVar12.unknown = (char *)0x1;
  SVar23.bridgeObject = (void *)0x80000001004e0c00;
  SVar23.str = (char *)0xd000000000000010;
  Foundation::URL::appendingPathComponent(SVar23,true,UVar13);
  _swift_bridgeObjectRetain(pvVar11);
  SVar25.bridgeObject = (void *)0xe400000000000000;
  SVar25.str = (char *)0x676e702e;
  SVar26.bridgeObject = UVar13.unknown;
  SVar26.str = UVar12.unknown;
  Swift::String::append(SVar25,SVar26);
  Foundation::URL::appendingPathComponent(SVar24,UVar12);
  _swift_bridgeObjectRelease(pvVar11);
  UVar13.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  SVar23 = Foundation::URL::get_path(UVar13);
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar23.bridgeObject);
  IVar6 = NSFileManager::fileExistsAtPath_((ID)UVar13.unknown,pNVar7);
  if ((int)IVar6 == 0) {
    pMVar8 = Swift::MainActor::typeMetadataAccessor();
    puVar5 = PTR_typeMetadataAccessor_1005246d8;
    *(MainActor **)(unaff_x22 + 0x178) = pMVar8;
    pMVar8 = Swift::MainActor::get_shared(pMVar8,pMVar8);
    *(MainActor **)(unaff_x22 + 0x180) = pMVar8;
    puVar9 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    *(undefined8 **)(unaff_x22 + 0x188) = puVar9;
    UVar10 = Swift::Actor::get_unownedExecutor();
    if (*(long *)PTR____stack_chk_guard_100521138 == lVar14) {
      _swift_task_switch(FUN_1002a5d10,UVar10.unknown,puVar9);
      return;
    }
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
    lVar4 = *(long *)(unaff_x22 + 0x128);
    uVar19 = *(undefined8 *)(unaff_x22 + 0xb8);
    _swift_bridgeObjectRelease(pvVar11);
    pcVar15 = *(code **)(lVar4 + 8);
    (*pcVar15)(uVar1,uVar2);
    (*pcVar15)(uVar3,uVar2);
    (**(code **)(lVar4 + 0x20))(uVar19,uVar17,uVar2);
    (**(code **)(lVar4 + 0x38))(uVar19,0,1,uVar2);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar21 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar22 = *(undefined8 *)(unaff_x22 + 0xd8);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x150));
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar22);
    if (*(long *)PTR____stack_chk_guard_100521138 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x0001002a5c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

