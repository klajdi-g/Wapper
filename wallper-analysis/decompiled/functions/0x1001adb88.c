// rea decompile_all
// name: FUN_1001adb88
// address: 0x1001adb88
// body: available
// range: 0x1001adb88-0x1001add97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001add94 to 0x100413640 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$data (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

tuple2_conflict1 FUN_1001adb88(void)

{
  URL UVar1;
  URL from;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  Data DVar5;
  long *plVar6;
  void *pvVar7;
  NSURLResponse *UNRECOVERED_JUMPTABLE;
  ID *pIVar8;
  ID IVar9;
  long unaff_x22;
  long lVar10;
  String SVar11;
  tuple2_conflict1 tVar12;
  
  pIVar8 = *(ID **)(unaff_x22 + 0x70);
  IVar9 = *pIVar8;
  *(ID *)(unaff_x22 + 0x80) = IVar9;
  FUN_100029548(pIVar8,FUN_10028e828);
  _swift_task_dealloc(pIVar8);
  if ((IVar9 != 0) && (IVar9 = objc_stub::stringValue(IVar9), IVar9 != 0)) {
    SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar7 = SVar11.bridgeObject;
    uVar4 = (ulong)SVar11.str & 0xffffffffffff;
    if (((ulong)pvVar7 & 0x2000000000000000) != 0) {
      uVar4 = (ulong)pvVar7 >> 0x38 & 0xf;
    }
    if (uVar4 == 0) {
      _swift_bridgeObjectRelease(pvVar7);
    }
    else {
      UVar1 = Foundation::URL::typeMetadataAccessor();
      *(undefined **)(unaff_x22 + 0x88) = UVar1.unknown;
      lVar10 = *(long *)(UVar1.unknown + -8);
      *(long *)(unaff_x22 + 0x90) = lVar10;
      from.unknown = (undefined *)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
      _swift_task_alloc();
      *(undefined **)(unaff_x22 + 0x98) = from.unknown;
      puVar2 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      uVar3 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      Foundation::URL::_init();
      _swift_bridgeObjectRelease(pvVar7);
      uVar4 = uVar3;
      (**(code **)(lVar10 + 0x30))(uVar3,1,UVar1.unknown);
      if ((int)uVar4 != 1) {
        (**(code **)(lVar10 + 0x20))(from.unknown,uVar3,UVar1.unknown);
        _swift_task_dealloc(uVar3);
        IVar9 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
        *(ID *)(unaff_x22 + 0xa0) = IVar9;
        plVar6 = (long *)(ulong)*(uint *)(PTR__data_100520ea0 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0xa8) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_1001add98;
        tVar12 = (extension_Foundation)::__C::NSURLSession::_data(from);
        return tVar12;
      }
      FUN_10002a29c(uVar3,&DAT_100553d90,&DAT_10041bf10);
      _swift_task_dealloc(uVar3);
      _swift_task_dealloc(from.unknown);
    }
  }
  UNRECOVERED_JUMPTABLE = *(NSURLResponse **)(unaff_x22 + 8);
  DVar5.unknown = (undefined *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0001001add10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(0);
  tVar12._ = UNRECOVERED_JUMPTABLE;
  tVar12._.unknown = DVar5.unknown;
  return tVar12;
}

