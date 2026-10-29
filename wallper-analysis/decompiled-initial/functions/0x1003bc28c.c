// rea decompile_all
// name: FUN_1003bc28c
// address: 0x1003bc28c
// body: available
// range: 0x1003bc28c-0x1003bc45f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1003bc28c(void)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined8 local_38;
  
  _swift_beginAccess(unaff_x20 + 0x60,auStack_68,0,0);
  FUN_1000087e4(unaff_x20 + 0x60,&local_90,&DAT_10054d428,&DAT_100420300);
  if (local_78 == 0) {
    FUN_10002a29c(&local_90,&DAT_10054d428,&DAT_100420300);
  }
  else {
    FUN_100007d88(&local_90,auStack_50);
    puVar1 = auStack_50;
    FUN_100007bd0(puVar1,local_38);
    Swift::__bridgeAnythingToObjectiveC();
    NSEvent::removeMonitor_((ID)&_OBJC_CLASS___NSEvent,puVar1);
    _swift_unknownObjectRelease(puVar1);
    FUN_100043f24(auStack_50);
    uStack_88 = 0;
    local_90 = 0;
    local_78 = 0;
    uStack_80 = 0;
    _swift_beginAccess(unaff_x20 + 0x60,auStack_a8,0x21,0);
    FUN_1000d4f50(&local_90,unaff_x20 + 0x60);
    _swift_endAccess(auStack_a8);
  }
  _swift_beginAccess(unaff_x20 + 0x80,auStack_a8,0,0);
  FUN_1000087e4(unaff_x20 + 0x80,&local_90,&DAT_10054d428,&DAT_100420300);
  if (local_78 == 0) {
    FUN_10002a29c(&local_90,&DAT_10054d428,&DAT_100420300);
  }
  else {
    FUN_100007d88(&local_90,auStack_50);
    puVar1 = auStack_50;
    FUN_100007bd0(puVar1,local_38);
    Swift::__bridgeAnythingToObjectiveC();
    NSEvent::removeMonitor_((ID)&_OBJC_CLASS___NSEvent,puVar1);
    _swift_unknownObjectRelease(puVar1);
    FUN_100043f24(auStack_50);
    uStack_88 = 0;
    local_90 = 0;
    local_78 = 0;
    uStack_80 = 0;
    _swift_beginAccess(unaff_x20 + 0x80,auStack_c0,0x21,0);
    FUN_1000d4f50(&local_90,unaff_x20 + 0x80);
    _swift_endAccess(auStack_c0);
  }
  return;
}

