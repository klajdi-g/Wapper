// rea decompile_all
// name: FUN_1001603a4
// address: 0x1001603a4
// body: available
// range: 0x1001603a4-0x1001605c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001605a4 to 0x100413640 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$data (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


tuple2_conflict1 FUN_1001603a4(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  long lVar1;
  URLComponents *this;
  String SVar2;
  code *pcVar3;
  URLComponents_conflict UVar4;
  undefined8 uVar5;
  Data UNRECOVERED_JUMPTABLE;
  long *plVar6;
  NSURLResponse *pNVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  tuple2_conflict1 tVar11;
  String SVar12;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar1 = *(long *)(unaff_x22 + 0x78);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  SVar2 = *(String *)(unaff_x22 + 0x30);
  Swift::_StringGuts::grow(0x19,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(SVar2,SVar12);
  Foundation::URLComponents::_init();
  _swift_bridgeObjectRelease(0x80000001004ded70);
  (**(code **)(lVar1 + 0x30))(uVar8,1,uVar5);
  if ((int)uVar8 == 1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1001605c4);
    (*pcVar3)();
  }
  this = *(URLComponents **)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar1 = *(long *)(unaff_x22 + 0x58);
  UVar4.unknown = *(undefined **)(unaff_x22 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(*(long *)(unaff_x22 + 0x78) + 0x20))
            (this,*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70));
  _swift_bridgeObjectRetain();
  Foundation::URLComponents::_set_queryItems(this);
  Foundation::URLComponents::_get_url(UVar4);
  (**(code **)(lVar1 + 0x30))(uVar8,1,uVar5);
  if ((int)uVar8 == 1) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
    FUN_10002a29c(uVar5,&DAT_100553d90,&DAT_10041bf10);
    FUN_100163bbc();
    _swift_allocError(&DAT_10052f4d0,uVar5,0,0);
    _swift_willThrow();
    uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
    pNVar7 = *(NSURLResponse **)(unaff_x22 + 0x70);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
    (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))(uVar8,pNVar7);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar10);
    UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
                    /* WARNING: Could not recover jumptable at 0x000100160530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
    tVar11._ = pNVar7;
    tVar11._.unknown = UNRECOVERED_JUMPTABLE.unknown;
    return tVar11;
  }
  (**(code **)(*(long *)(unaff_x22 + 0x58) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x48),
             *(undefined8 *)(unaff_x22 + 0x50));
  if (DAT_100555330 != -1) {
    _swift_once(&DAT_100555330,FUN_10015fdb4);
  }
  plVar6 = (long *)(ulong)*(uint *)(PTR__data_100520ea0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1001605c4;
  tVar11 = (extension_Foundation)::__C::NSURLSession::_data((URL)*(undefined **)(unaff_x22 + 0x60));
  return tVar11;
}

