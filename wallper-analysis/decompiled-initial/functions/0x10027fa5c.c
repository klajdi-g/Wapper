// rea decompile_all
// name: FUN_10027fa5c
// address: 0x10027fa5c
// body: available
// range: 0x10027fa5c-0x10027fdc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10027fda4 to 0x100413634 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$data (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10027fdc0 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

tuple2_conflict1 FUN_10027fa5c(void)

{
  URL url;
  long lVar1;
  URLRequest *this;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  NSDictionary *pNVar7;
  Data DVar8;
  undefined8 uVar9;
  ID IVar10;
  long *plVar11;
  undefined8 uVar12;
  URL UVar13;
  long lVar14;
  code *pcVar15;
  long unaff_x22;
  undefined8 uVar16;
  code *pcVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  tuple2_conflict1 tVar21;
  
  lVar14 = *(long *)PTR____stack_chk_guard_100521138;
  uVar9 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x120);
  FUN_10027f304();
  if (DAT_100559108 != -1) {
    _swift_once(&DAT_100559108,FUN_10028f180);
  }
  url.unknown = *(undefined **)(unaff_x22 + 0x1a8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1b0);
  lVar1 = *(long *)(unaff_x22 + 0x198);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1a0);
  this = *(URLRequest **)(unaff_x22 + 0x188);
  puVar5 = *(undefined **)(unaff_x22 + 400);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x128);
  puVar4 = puVar5;
  FUN_100099338(puVar5,&DAT_100577d98);
  pcVar15 = *(code **)(lVar1 + 0x10);
  UVar13.unknown = puVar5;
  (*pcVar15)(uVar3,puVar4);
  SVar18.bridgeObject = (void *)0xe600000000000000;
  SVar18.str = (char *)0x736f65646976;
  Foundation::URL::appendingPathComponent(SVar18,UVar13);
  pcVar17 = *(code **)(lVar1 + 8);
  *(code **)(unaff_x22 + 0x1d0) = pcVar17;
  (*pcVar17)(uVar3,puVar5);
  SVar19.bridgeObject = (void *)0xe500000000000000;
  SVar19.str = (char *)0x73656b696c;
  Foundation::URL::appendingPathComponent(SVar19,UVar13);
  (*pcVar17)(url.unknown,puVar5);
  (*pcVar15)(url.unknown,uVar2,puVar5);
  Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
  Foundation::URLRequest::_set_httpMethod(this);
  SVar20.bridgeObject = (void *)0x80000001004de340;
  SVar20.str = (char *)0xd000000000000010;
  Foundation::URLRequest::_setValue(SVar20,(URLRequest)0x2d746e65746e6f43);
  puVar5 = &DAT_10054c048;
  FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 4;
  *(undefined8 *)(puVar5 + 0x10) = 2;
  *(undefined1 **)(puVar5 + 0x20) = &DAT_00006469;
  puVar4 = PTR___type_metadata_for_Swift_String_100523a98;
  *(undefined8 *)(puVar5 + 0x28) = 0xe200000000000000;
  *(undefined8 *)(puVar5 + 0x30) = uVar9;
  *(undefined8 *)(puVar5 + 0x38) = uVar12;
  *(undefined **)(puVar5 + 0x48) = puVar4;
  *(undefined8 *)(puVar5 + 0x50) = 0x61746c6564;
  *(undefined **)(puVar5 + 0x78) = PTR___type_metadata_for_Swift_Int_100523bd8;
  *(undefined8 *)(puVar5 + 0x58) = 0xe500000000000000;
  *(undefined8 *)(puVar5 + 0x60) = uVar16;
  puVar6 = puVar5;
  FUN_100005b10();
  _swift_setDeallocating(puVar5);
  puVar4 = &DAT_10054a1c0;
  FUN_100002f94(&DAT_10054a1c0,&DAT_10041a250);
  _swift_arrayDestroy(puVar5 + 0x20,2,puVar4);
  pNVar7 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar6);
  *(undefined8 *)(unaff_x22 + 0xf8) = 0;
  DVar8.unknown =
       (undefined *)
       NSJSONSerialization::dataWithJSONObject_options_error_
                 (&_OBJC_CLASS___NSJSONSerialization,pNVar7,0,unaff_x22 + 0xf8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
  if (DVar8.unknown == (undefined *)0x0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar9);
  }
  else {
    Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar8);
  }
  Foundation::URLRequest::_set_httpBody(*(URLRequest **)(unaff_x22 + 0x188));
  IVar10 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
  *(ID *)(unaff_x22 + 0x1d8) = IVar10;
  plVar11 = (long *)(ulong)*(uint *)(PTR__data_100520e90 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1e0) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_10027fdc4;
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar14) {
    tVar21 = (extension_Foundation)::__C::NSURLSession::_data
                       ((URLRequest)*(undefined **)(unaff_x22 + 0x188));
    return tVar21;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

