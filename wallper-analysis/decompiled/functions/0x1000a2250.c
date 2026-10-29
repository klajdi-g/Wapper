// rea decompile_all
// name: FUN_1000a2250
// address: 0x1000a2250
// body: available
// range: 0x1000a2250-0x1000a2547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000a253c to 0x100413640 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$data (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000a2544 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

tuple2_conflict1 FUN_1000a2250(void)

{
  undefined8 uVar1;
  long lVar2;
  URLComponents *this;
  undefined8 uVar3;
  undefined8 uVar4;
  URLComponents_conflict UVar5;
  URLQueryItem UVar6;
  Data DVar7;
  ID IVar8;
  long *plVar9;
  NSURLResponse *pNVar10;
  long lVar11;
  ulong uVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x22;
  tuple2_conflict1 tVar16;
  
  lVar11 = *(long *)PTR____stack_chk_guard_100521138;
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  lVar2 = *(long *)(unaff_x22 + 0x108);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xf8);
  Foundation::URLComponents::_init();
  (**(code **)(lVar2 + 0x30))(uVar14,1,uVar1);
  if ((int)uVar14 == 1) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x1000a2544);
    (*pcVar13)();
  }
  this = *(URLComponents **)(unaff_x22 + 0x110);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar2 = *(long *)(unaff_x22 + 0xe0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd0);
  (**(code **)(*(long *)(unaff_x22 + 0x108) + 0x20))
            (this,*(undefined8 *)(unaff_x22 + 0xf8),*(undefined8 *)(unaff_x22 + 0x100));
  UVar5.unknown = &DAT_10054f978;
  FUN_100002f94(&DAT_10054f978,&DAT_10042a840);
  UVar6 = Foundation::URLQueryItem::typeMetadataAccessor();
  uVar12 = (ulong)*(byte *)(*(long *)(UVar6.unknown + -8) + 0x50);
  _swift_allocObject(UVar5.unknown,
                     (uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff)) +
                     *(long *)(*(long *)(UVar6.unknown + -8) + 0x48) * 3,uVar12 | 7);
  *(undefined8 *)(UVar5.unknown + 0x18) = 6;
  *(undefined8 *)(UVar5.unknown + 0x10) = 3;
  Foundation::URLQueryItem::_init();
  Foundation::URLQueryItem::_init();
  Foundation::URLQueryItem::_init();
  Foundation::URLComponents::_set_queryItems(this);
  Foundation::URLComponents::_get_url(UVar5);
  pcVar13 = *(code **)(lVar2 + 0x30);
  *(code **)(unaff_x22 + 0x130) = pcVar13;
  (*pcVar13)(uVar14,1,uVar1);
  if ((int)uVar14 == 1) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xd0);
    (**(code **)(*(long *)(unaff_x22 + 0x108) + 8))
              (*(undefined8 *)(unaff_x22 + 0x110),*(undefined8 *)(unaff_x22 + 0x100));
    _swift_release(uVar1);
    FUN_10002a29c(uVar14,&DAT_100553d90,&DAT_10041bf10);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar14 = *(undefined8 *)(unaff_x22 + 200);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x110));
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar14);
    if (*(long *)PTR____stack_chk_guard_100521138 == lVar11) {
      DVar7.unknown = (undefined *)0x0;
      pNVar10 = (NSURLResponse *)0xf000000000000000;
                    /* WARNING: Could not recover jumptable at 0x0001000a2498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(0,0xf000000000000000);
      tVar16._ = pNVar10;
      tVar16._.unknown = DVar7.unknown;
      return tVar16;
    }
  }
  else {
    pcVar13 = *(code **)(*(long *)(unaff_x22 + 0xe0) + 0x20);
    *(code **)(unaff_x22 + 0x138) = pcVar13;
    (*pcVar13)(*(undefined8 *)(unaff_x22 + 0xf0),*(undefined8 *)(unaff_x22 + 0xd0),
               *(undefined8 *)(unaff_x22 + 0xd8));
    *(undefined **)(unaff_x22 + 0x140) = &_OBJC_CLASS___NSURLSession;
    IVar8 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
    *(ID *)(unaff_x22 + 0x148) = IVar8;
    plVar9 = (long *)(ulong)*(uint *)(PTR__data_100520ea0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x150) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_1000a2548;
    if (*(long *)PTR____stack_chk_guard_100521138 == lVar11) {
      tVar16 = (extension_Foundation)::__C::NSURLSession::_data
                         ((URL)*(undefined **)(unaff_x22 + 0xf0));
      return tVar16;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

