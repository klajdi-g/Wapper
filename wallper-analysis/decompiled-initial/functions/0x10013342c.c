// rea decompile_all
// name: FUN_10013342c
// address: 0x10013342c
// body: available
// range: 0x10013342c-0x1001335b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10013359c to 0x100413634 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$data (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

tuple2_conflict1 FUN_10013342c(void)

{
  URL url;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  long *plVar7;
  URL UVar8;
  URLRequest *this;
  long unaff_x22;
  code *pcVar9;
  code *pcVar10;
  String SVar11;
  String SVar12;
  tuple2_conflict1 tVar13;
  
  if (DAT_100559108 != -1) {
    _swift_once(&DAT_100559108,FUN_10028f180);
  }
  url.unknown = *(undefined **)(unaff_x22 + 0x1c8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1d0);
  lVar1 = *(long *)(unaff_x22 + 0x1b8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1c0);
  this = *(URLRequest **)(unaff_x22 + 0x1a8);
  puVar4 = *(undefined **)(unaff_x22 + 0x1b0);
  puVar5 = puVar4;
  FUN_100099338(puVar4,&DAT_100577d98);
  pcVar10 = *(code **)(lVar1 + 0x10);
  *(code **)(unaff_x22 + 0x1d8) = pcVar10;
  UVar8.unknown = puVar4;
  (*pcVar10)(uVar3,puVar5);
  SVar11.bridgeObject = (void *)0xeb000000006e6f69;
  SVar11.str = (char *)0x746163696c707061;
  Foundation::URL::appendingPathComponent(SVar11,UVar8);
  pcVar9 = *(code **)(lVar1 + 8);
  *(code **)(unaff_x22 + 0x1e0) = pcVar9;
  (*pcVar9)(uVar3,puVar4);
  SVar12.bridgeObject = (void *)0xe600000000000000;
  SVar12.str = (char *)0x737574617473;
  Foundation::URL::appendingPathComponent(SVar12,UVar8);
  (*pcVar9)(url.unknown,puVar4);
  (*pcVar10)(url.unknown,uVar2,puVar4);
  Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
  Foundation::URLRequest::_set_httpMethod(this);
  Foundation::URLRequest::set_timeoutInterval(this,6.0);
  IVar6 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
  *(ID *)(unaff_x22 + 0x1e8) = IVar6;
  plVar7 = (long *)(ulong)*(uint *)(PTR__data_100520e90 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1f0) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1001335b8;
  tVar13 = (extension_Foundation)::__C::NSURLSession::_data
                     ((URLRequest)*(undefined **)(unaff_x22 + 0x1a8));
  return tVar13;
}

