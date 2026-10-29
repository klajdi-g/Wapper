// rea decompile_all
// name: FUN_10016e140
// address: 0x10016e140
// body: available
// range: 0x10016e140-0x10016e283 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10016e280 to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10016e140(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ID self;
  undefined8 *puVar3;
  undefined8 *puVar4;
  NSArray *pNVar5;
  NSString *pNVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  lVar9 = _TtC7Wallper14MonitorManager::disabledScreens;
  uVar7 = *(undefined8 *)(unaff_x20 + _TtC7Wallper14MonitorManager::disabledScreens);
  *(ulong *)(unaff_x20 + _TtC7Wallper14MonitorManager::disabledScreens) = param_1;
  uVar2 = param_1;
  _swift_bridgeObjectRetain();
  FUN_1003f3dd0();
  _swift_bridgeObjectRelease(param_1);
  if ((uVar2 & 1) == 0) {
    self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
    lVar9 = *(long *)(unaff_x20 + lVar9);
    puVar8 = *(undefined8 **)(lVar9 + 0x10);
    puVar3 = (undefined8 *)PTR___swiftEmptyArrayStorage_100524190;
    if (puVar8 != (undefined8 *)0x0) {
      _swift_bridgeObjectRetain(lVar9);
      puVar3 = puVar8;
      FUN_1001c5970(puVar8,0);
      puVar4 = &local_68;
      FUN_1001aacf0(puVar4,puVar3 + 4,puVar8,lVar9);
      FUN_10002f6ec(local_68,uStack_60,local_58,uStack_50,local_48);
      if (puVar4 != puVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10016e1fc);
        (*pcVar1)();
      }
    }
    pNVar5 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_release(puVar3);
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    NSUserDefaults::setObject_forKey_(self,pNVar5,pNVar6);
  }
  _swift_bridgeObjectRelease(uVar7);
  return;
}

