// rea decompile_all
// name: FUN_10025ac44
// address: 0x10025ac44
// body: available
// range: 0x10025ac44-0x10025ae3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10025ac44(undefined8 param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  ID IVar6;
  long unaff_x20;
  undefined *local_b0;
  undefined8 uStack_a8;
  code *local_a0;
  undefined *local_98;
  code *local_90;
  undefined *local_88;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = _TtC7Wallper13WindowManager::clickMonitor;
  ppuVar2 = &local_b0;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper13WindowManager::clickMonitor,auStack_78,0,0);
  FUN_10013fc5c(unaff_x20 + lVar1,auStack_60);
  if (local_48 == 0) {
    FUN_10002a29c(auStack_60,&DAT_10054d428,&DAT_100420300);
  }
  else {
    FUN_100007d88(auStack_60,&local_b0);
    FUN_100007bd0(&local_b0,local_98);
    Swift::__bridgeAnythingToObjectiveC();
    NSEvent::removeMonitor_((ID)&_OBJC_CLASS___NSEvent,ppuVar2);
    _swift_unknownObjectRelease(ppuVar2);
    FUN_100043f24(&local_b0);
  }
  puVar3 = &DAT_100535910;
  _swift_allocObject(&DAT_100535910,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  puVar4 = &DAT_100535938;
  _swift_allocObject(&DAT_100535938,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,param_1);
  puVar5 = &DAT_100535960;
  _swift_allocObject(&DAT_100535960,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  local_90 = FUN_10025cc04;
  local_b0 = PTR___NSConcreteStackBlock_100521110;
  uStack_a8 = 0x42000000;
  local_a0 = FUN_10025a364;
  local_98 = &DAT_100535978;
  local_88 = puVar5;
  aBlock = __Block_copy(&local_b0);
  _swift_release(local_88);
  IVar6 = NSEvent::addLocalMonitorForEventsMatchingMask_handler_
                    ((ID)&_OBJC_CLASS___NSEvent,2,aBlock);
  __Block_release(aBlock);
  if (IVar6 == 0) {
    uStack_a8 = 0;
    local_b0 = (undefined *)0x0;
    local_98 = (undefined *)0x0;
    local_a0 = (code *)0x0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar6);
  }
  _swift_beginAccess(unaff_x20 + lVar1,auStack_60,0x21,0);
  FUN_1000d4f50(&local_b0,unaff_x20 + lVar1);
  _swift_endAccess(auStack_60);
  return;
}

