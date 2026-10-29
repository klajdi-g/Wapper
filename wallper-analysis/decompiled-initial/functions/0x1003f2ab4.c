// rea decompile_all
// name: FUN_1003f2ab4
// address: 0x1003f2ab4
// body: available
// range: 0x1003f2ab4-0x1003f2c4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003f2c48 to 0x100417c20 objc_stub::setHidden: (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f2ab4(void)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  NSArray *pNVar4;
  ID self;
  ID unaff_x20;
  
  objc_stub::setWantsLayer_(unaff_x20,1);
  self = *(ID *)(unaff_x20 + _TtC7Wallper19PlayerContainerView::spinnerHost);
  objc_stub::setTranslatesAutoresizingMaskIntoConstraints_(self,0);
  objc_stub::addSubview_(unaff_x20,self);
  puVar1 = &DAT_10054d5c0;
  FUN_100002f94(&DAT_10054d5c0,&DAT_1004202e0);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 5;
  *(undefined8 *)(puVar1 + 0x10) = 2;
  IVar2 = objc_stub::centerXAnchor(self);
  IVar3 = objc_stub::centerXAnchor(unaff_x20);
  IVar2 = objc_stub::constraintEqualToAnchor_(IVar2,IVar3);
  *(ID *)(puVar1 + 0x20) = IVar2;
  IVar2 = objc_stub::centerYAnchor(self);
  IVar3 = objc_stub::centerYAnchor(unaff_x20);
  IVar2 = objc_stub::constraintEqualToAnchor_(IVar2,IVar3);
  *(ID *)(puVar1 + 0x28) = IVar2;
  FUN_100044230(0,&DAT_100553d80,&PTR__OBJC_CLASS___NSLayoutConstraint_10053fb10);
  pNVar4 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar1);
  NSLayoutConstraint::activateConstraints_((ID)&_OBJC_CLASS___NSLayoutConstraint,pNVar4);
  objc_stub::setHidden_(self,1);
  return;
}

