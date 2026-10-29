// rea decompile_all
// name: FUN_100132520
// address: 0x100132520
// body: available
// range: 0x100132520-0x100132663 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_100132520(_StringGuts param_1,_StringGuts param_2,char param_3)

{
  _CocoaArrayWrapper _Var1;
  bool bVar2;
  NSString *pNVar3;
  undefined *puVar4;
  __int64 _Var5;
  
  if ((param_2.unknown == (undefined *)0x0) ||
     (((param_1.unknown == (undefined *)0xd000000000000022 &&
       (param_2.unknown == (undefined *)0x80000001004de000)) ||
      (bVar2 = Swift::_stringCompareWithSmolCheck(param_1,param_2,(_StringComparisonResult)0x22),
      bVar2)))) {
    if (param_3 == '\x02') {
      pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      puVar4 = (undefined *)
               NSRunningApplication::runningApplicationsWithBundleIdentifier_
                         ((ID)&_OBJC_CLASS___NSRunningApplication,pNVar3);
      FUN_100044230(0,&DAT_100554258,&PTR__OBJC_CLASS___NSRunningApplication_10053fb30);
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      if ((ulong)puVar4 >> 0x3e == 0) {
        _Var5 = *(long *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var1.unknown = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar4) {
          _Var1.unknown = puVar4;
        }
        _Var5 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      _swift_bridgeObjectRelease(puVar4);
      bVar2 = _Var5 != 0;
    }
    else {
      bVar2 = false;
    }
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

