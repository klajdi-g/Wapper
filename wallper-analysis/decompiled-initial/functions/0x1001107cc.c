// rea decompile_all
// name: FUN_1001107cc
// address: 0x1001107cc
// body: available
// range: 0x1001107cc-0x100110933 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100110918 to 0x100413640 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$data (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

tuple2_conflict1 FUN_1001107cc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  String SVar6;
  undefined *puVar7;
  ID IVar8;
  long *plVar9;
  URL UVar10;
  long unaff_x22;
  code *pcVar11;
  String SVar12;
  String SVar13;
  tuple2_conflict1 tVar14;
  
  if (DAT_100559108 != -1) {
    _swift_once(&DAT_100559108,FUN_10028f180);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x128);
  puVar3 = *(undefined **)(unaff_x22 + 0x110);
  lVar5 = *(long *)(unaff_x22 + 0x118);
  SVar6 = *(String *)(unaff_x22 + 0xa0);
  puVar7 = puVar3;
  FUN_100099338(puVar3,&DAT_100577d98);
  UVar10.unknown = puVar3;
  (**(code **)(lVar5 + 0x10))(uVar2,puVar7);
  SVar12.bridgeObject = (void *)0xe500000000000000;
  SVar12.str = (char *)0x7372657375;
  Foundation::URL::appendingPathComponent(SVar12,UVar10);
  pcVar11 = *(code **)(lVar5 + 8);
  *(code **)(unaff_x22 + 0x140) = pcVar11;
  (*pcVar11)(uVar2,puVar3);
  SVar13.bridgeObject = (void *)0xeb000000006b6e69;
  SVar13.str = (char *)0x6c2d64616f6c7075;
  Foundation::URL::appendingPathComponent(SVar13,UVar10);
  (*pcVar11)(uVar4,puVar3);
  Foundation::URL::appendingPathComponent(SVar6,UVar10);
  (*pcVar11)(uVar1,puVar3);
  IVar8 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
  *(ID *)(unaff_x22 + 0x148) = IVar8;
  plVar9 = (long *)(ulong)*(uint *)(PTR__data_100520ea0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x150) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_100110934;
  tVar14 = (extension_Foundation)::__C::NSURLSession::_data((URL)*(undefined **)(unaff_x22 + 0x138))
  ;
  return tVar14;
}

