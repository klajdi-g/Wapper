// rea decompile_all
// name: FUN_100117218
// address: 0x100117218
// body: available
// range: 0x100117218-0x1001174ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001173ac to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001174ec to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100117314) */

void FUN_100117218(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  URL self;
  NSString *pNVar6;
  ID IVar7;
  Data DVar8;
  MainActor *pMVar9;
  UnownedSerialExecutor UVar10;
  Data DVar11;
  undefined *puVar12;
  _StringGuts _Var13;
  long lVar14;
  code *pcVar15;
  undefined8 uVar16;
  NSDataReadingOptions contentsOf;
  long unaff_x22;
  String SVar17;
  
  lVar14 = *(long *)PTR____stack_chk_guard_100521138;
  uVar16 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar2 = *(long *)(unaff_x22 + 0x60);
  contentsOf.unknown = *(undefined **)(unaff_x22 + 0x50);
  pcVar15 = *(code **)(lVar2 + 0x30);
  *(code **)(unaff_x22 + 0xa8) = pcVar15;
  pMVar9 = (MainActor *)contentsOf.unknown;
  (*pcVar15)(contentsOf.unknown,1,uVar16);
  if ((int)pMVar9 == 1) {
    FUN_10002a29c(contentsOf.unknown,&DAT_100553d90,&DAT_10041bf10);
  }
  else {
    (**(code **)(lVar2 + 0x20))(*(undefined8 *)(unaff_x22 + 0x70),contentsOf.unknown,uVar16);
    self.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    SVar17 = Foundation::URL::get_path(self);
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar17.bridgeObject);
    IVar7 = NSFileManager::fileExistsAtPath_((ID)self.unknown,pNVar6);
    contentsOf.unknown = *(undefined **)(unaff_x22 + 0x70);
    if ((int)IVar7 == 0) {
      (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))
                (contentsOf.unknown,*(undefined8 *)(unaff_x22 + 0x58));
    }
    else {
      puVar12 = (undefined *)0x0;
      DVar8 = Foundation::Data::_init(contentsOf);
      DVar11 = DVar8;
      FUN_1001179b8();
      if (((ulong)DVar11.unknown & 1) == 0) {
        DVar11 = DVar8;
        _Var13.unknown = puVar12;
        FUN_1001ec26c();
        if ((DVar11.unknown == (undefined *)0xd000000000000020) &&
           (_Var13.unknown == (undefined *)0x80000001004ddab0)) {
          _swift_bridgeObjectRelease(0x80000001004ddab0);
        }
        else {
          bVar5 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)DVar11.unknown,_Var13,(_StringComparisonResult)0x20);
          _swift_bridgeObjectRelease(_Var13.unknown);
          if (!bVar5) {
            contentsOf.unknown = *(undefined **)(unaff_x22 + 0x70);
            uVar16 = *(undefined8 *)(unaff_x22 + 0x58);
            lVar2 = *(long *)(unaff_x22 + 0x60);
            DVar11 = DVar8;
            FUN_10011a514(DVar8.unknown,puVar12,*(undefined8 *)(unaff_x22 + 0x40),
                          *(undefined1 *)(unaff_x22 + 0xc4));
            FUN_100093624(DVar8.unknown,puVar12);
            (**(code **)(lVar2 + 8))(contentsOf.unknown,uVar16);
            if (DVar11.unknown != (undefined *)0x0) {
              uVar16 = *(undefined8 *)(unaff_x22 + 0x68);
              uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
              uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
              uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
              **(undefined8 **)(unaff_x22 + 0x28) = DVar11.unknown;
              _swift_task_dealloc(uVar3);
              _swift_task_dealloc(uVar16);
              _swift_task_dealloc(uVar4);
              _swift_task_dealloc(uVar1);
              if (*(long *)PTR____stack_chk_guard_100521138 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x0001001174e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(unaff_x22 + 8))();
                return;
              }
              goto LAB_1001174ec;
            }
            goto LAB_100117340;
          }
        }
      }
      (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))
                (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x58));
      FUN_100093624(DVar8.unknown,puVar12);
      contentsOf.unknown = DVar8.unknown;
    }
  }
LAB_100117340:
  uVar16 = *(undefined8 *)(unaff_x22 + 0x98);
  pMVar9 = Swift::MainActor::get_shared
                     (*(MainActor **)(unaff_x22 + 0x88),(MainActor *)contentsOf.unknown);
  *(MainActor **)(unaff_x22 + 0xb0) = pMVar9;
  UVar10 = Swift::Actor::get_unownedExecutor();
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar14) {
    _swift_task_switch(FUN_1001174f0,UVar10.unknown,uVar16);
    return;
  }
LAB_1001174ec:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

