// rea decompile_all
// name: FUN_100134dd4
// address: 0x100134dd4
// body: available
// range: 0x100134dd4-0x100134f2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100134f28 to 0x100413634 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$data (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

tuple2_conflict1 FUN_100134dd4(void)

{
  undefined8 uVar1;
  URL url;
  long lVar2;
  code *pcVar3;
  ID IVar4;
  long *plVar5;
  undefined8 uVar6;
  URLRequest *this;
  long unaff_x22;
  String SVar7;
  tuple2_conflict1 tVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1a0);
  lVar2 = *(long *)(unaff_x22 + 0x1a8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x198);
  Foundation::URL::_init();
  (**(code **)(lVar2 + 0x30))(uVar6,1,uVar1);
  if ((int)uVar6 != 1) {
    url.unknown = *(undefined **)(unaff_x22 + 0x1b0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x1b8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x1a0);
    lVar2 = *(long *)(unaff_x22 + 0x1a8);
    this = *(URLRequest **)(unaff_x22 + 400);
    (**(code **)(lVar2 + 0x20))(uVar6,*(undefined8 *)(unaff_x22 + 0x198),uVar1);
    (**(code **)(lVar2 + 0x10))(url.unknown,uVar6,uVar1);
    Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
    Foundation::URLRequest::_set_httpMethod(this);
    SVar7.bridgeObject = (void *)0x80000001004de160;
    SVar7.str = (char *)0xd00000000000001b;
    Foundation::URLRequest::_setValue(SVar7,(URLRequest)0x747065636341);
    Foundation::URLRequest::set_timeoutInterval(this,10.0);
    IVar4 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
    *(ID *)(unaff_x22 + 0x1c0) = IVar4;
    plVar5 = (long *)(ulong)*(uint *)(PTR__data_100520e90 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x1c8) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_100134f30;
    tVar8 = (extension_Foundation)::__C::NSURLSession::_data
                      ((URLRequest)*(undefined **)(unaff_x22 + 400));
    return tVar8;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100134f30);
  (*pcVar3)();
}

