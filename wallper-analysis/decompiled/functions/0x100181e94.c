// rea decompile_all
// name: FUN_100181e94
// address: 0x100181e94
// body: available
// range: 0x100181e94-0x100181f9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100181e94(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_78 [24];
  undefined1 local_60 [8];
  long local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    puVar1 = &DAT_100429b00;
    _swift_getKeyPath(&DAT_100429b00);
    puVar2 = &DAT_100429b28;
    _swift_getKeyPath(&DAT_100429b28);
    Combine::Published::_get_subscript(local_60,param_2,puVar1,puVar2);
    _swift_release(puVar1);
    _swift_release(puVar2);
    if (local_58 == 0) {
      _swift_release(param_2);
    }
    else {
      FUN_10017f398(local_60,1,0);
      _swift_release(param_2);
      _swift_bridgeObjectRelease(local_38);
      _swift_bridgeObjectRelease(uStack_40);
      _swift_bridgeObjectRelease(local_48);
      _swift_bridgeObjectRelease(local_58);
    }
  }
  return;
}

