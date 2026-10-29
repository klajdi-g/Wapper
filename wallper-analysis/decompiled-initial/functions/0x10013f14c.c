// rea decompile_all
// name: FUN_10013f14c
// address: 0x10013f14c
// body: available
// range: 0x10013f14c-0x10013f397 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10013f394 to 0x10041469c _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10013f14c(undefined8 param_1)

{
  undefined8 uVar1;
  bool bVar2;
  ID self;
  NSString *pNVar3;
  ID IVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  ID self_00;
  long lVar7;
  undefined8 *puVar8;
  undefined1 auStack_c0 [32];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined8 local_68;
  
  if (*(char *)(unaff_x20 + 0x30) == '\x01') {
    self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
    lVar7 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
    if (lVar7 == 0) {
      return 0;
    }
    bVar2 = false;
    self_00 = *(ID *)(unaff_x20 + 0x18);
    puVar8 = (undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x28);
    do {
      uVar1 = *puVar8;
      _swift_bridgeObjectRetain(uVar1);
      pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar4 = NSUserDefaults::objectForKey_(self,pNVar3);
      if (IVar4 == 0) {
        _swift_bridgeObjectRelease(uVar1);
      }
      else {
        Swift::__bridgeAnyObjectToAny();
        _swift_unknownObjectRelease(IVar4);
        FUN_100007d88(&local_a0,auStack_80);
        pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        IVar4 = objc_stub::objectForKey_(self_00,pNVar3);
        if (IVar4 == 0) {
          uStack_98 = 0;
          local_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          Swift::__bridgeAnyObjectToAny();
          _swift_unknownObjectRelease(IVar4);
        }
        FUN_1000280d4(auStack_80,auStack_c0);
        puVar5 = &local_a0;
        FUN_10013fa6c(puVar5,auStack_c0);
        FUN_10002a29c(auStack_c0,&DAT_10054d428,&DAT_100420300);
        FUN_10002a29c(&local_a0,&DAT_10054d428,&DAT_100420300);
        if (((ulong)puVar5 & 1) == 0) {
          puVar6 = auStack_80;
          FUN_100007bd0(puVar6,local_68);
          Swift::__bridgeAnythingToObjectiveC();
          pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(uVar1);
          objc_stub::setObject_forKey_(self_00,puVar6,pNVar3);
          _swift_unknownObjectRelease(puVar6);
          bVar2 = true;
        }
        else {
          _swift_bridgeObjectRelease(uVar1);
        }
        FUN_100043f24(auStack_80);
      }
      puVar8 = puVar8 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    if (bVar2) {
      objc_stub::synchronize(self_00);
    }
    param_1 = 0;
  }
  return param_1;
}

