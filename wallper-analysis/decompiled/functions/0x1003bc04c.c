// rea decompile_all
// name: FUN_1003bc04c
// address: 0x1003bc04c
// body: available
// range: 0x1003bc04c-0x1003bc28b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1003bc04c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  ID IVar4;
  long unaff_x20;
  undefined1 auStack_b8 [24];
  undefined *local_a0;
  undefined8 uStack_98;
  code *local_90;
  undefined *local_88;
  code *local_80;
  undefined *local_78;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x60,auStack_68,0,0);
  FUN_1000087e4(unaff_x20 + 0x60,&local_a0,&DAT_10054d428,&DAT_100420300);
  FUN_10002a29c(&local_a0,&DAT_10054d428,&DAT_100420300);
  if (local_88 == (undefined *)0x0) {
    puVar2 = &DAT_10053e0e0;
    _swift_allocObject(&DAT_10053e0e0,0x18,7);
    _swift_weakInit(puVar2 + 0x10);
    puVar1 = PTR___NSConcreteStackBlock_100521110;
    local_80 = FUN_1003ef3fc;
    local_a0 = PTR___NSConcreteStackBlock_100521110;
    uStack_98 = 0x42000000;
    local_90 = FUN_10025a364;
    local_88 = &DAT_10053e0f8;
    local_78 = puVar2;
    pvVar3 = __Block_copy(&local_a0);
    _swift_release(local_78);
    IVar4 = NSEvent::addLocalMonitorForEventsMatchingMask_handler_
                      ((ID)&_OBJC_CLASS___NSEvent,0x400,pvVar3);
    __Block_release(pvVar3);
    if (IVar4 == 0) {
      uStack_98 = 0;
      local_a0 = (undefined *)0x0;
      local_88 = (undefined *)0x0;
      local_90 = (code *)0x0;
    }
    else {
      Swift::__bridgeAnyObjectToAny();
      _swift_unknownObjectRelease(IVar4);
    }
    _swift_beginAccess(unaff_x20 + 0x60,auStack_b8,0x21,0);
    FUN_1000d4f50(&local_a0,unaff_x20 + 0x60);
    _swift_endAccess(auStack_b8);
    puVar2 = &DAT_10053e0e0;
    _swift_allocObject(&DAT_10053e0e0,0x18,7);
    _swift_weakInit(puVar2 + 0x10);
    local_80 = FUN_1003ef404;
    local_a0 = puVar1;
    uStack_98 = 0x42000000;
    local_90 = FUN_10025a364;
    local_88 = &DAT_10053e120;
    local_78 = puVar2;
    pvVar3 = __Block_copy(&local_a0);
    _swift_release(local_78);
    IVar4 = NSEvent::addLocalMonitorForEventsMatchingMask_handler_
                      ((ID)&_OBJC_CLASS___NSEvent,0x800,pvVar3);
    __Block_release(pvVar3);
    if (IVar4 == 0) {
      uStack_98 = 0;
      local_a0 = (undefined *)0x0;
      local_88 = (undefined *)0x0;
      local_90 = (code *)0x0;
    }
    else {
      Swift::__bridgeAnyObjectToAny();
      _swift_unknownObjectRelease(IVar4);
    }
    _swift_beginAccess(unaff_x20 + 0x80,auStack_b8,0x21,0);
    FUN_1000d4f50(&local_a0,unaff_x20 + 0x80);
    _swift_endAccess(auStack_b8);
  }
  return;
}

