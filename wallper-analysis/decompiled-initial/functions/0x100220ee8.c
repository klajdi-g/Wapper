// rea decompile_all
// name: FUN_100220ee8
// address: 0x100220ee8
// body: available
// range: 0x100220ee8-0x1002210db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100220ee8(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong local_48;
  
  puVar2 = &DAT_10042b5e8;
  _swift_getKeyPath(&DAT_10042b5e8);
  puVar3 = &DAT_10042b610;
  _swift_getKeyPath(&DAT_10042b610);
  Combine::Published::_get_subscript(&local_48);
  _swift_release(puVar2);
  _swift_release(puVar3);
  lVar7 = *(long *)(local_48 + 0x10);
  _swift_bridgeObjectRelease();
  puVar2 = &DAT_10042b4f8;
  _swift_getKeyPath(&DAT_10042b4f8);
  puVar3 = &DAT_10042b520;
  _swift_getKeyPath(&DAT_10042b520);
  Combine::Published::_get_subscript(&local_48);
  _swift_release(puVar2);
  _swift_release(puVar3);
  if (((long)local_48 < 0) || (lVar7 <= (long)local_48)) {
    lVar7 = 0;
    FUN_10040211c();
    pcVar5 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
    uVar4 = 1;
  }
  else {
    puVar2 = &DAT_10042b4f8;
    _swift_getKeyPath(&DAT_10042b4f8);
    puVar3 = &DAT_10042b520;
    _swift_getKeyPath(&DAT_10042b520);
    Combine::Published::_get_subscript(&local_48);
    _swift_release(puVar2);
    _swift_release(puVar3);
    uVar1 = local_48;
    puVar2 = &DAT_10042b5e8;
    _swift_getKeyPath(&DAT_10042b5e8);
    puVar3 = &DAT_10042b610;
    _swift_getKeyPath(&DAT_10042b610);
    Combine::Published::_get_subscript(&local_48);
    _swift_release(puVar2);
    _swift_release(puVar3);
    if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1002210d8);
      (*pcVar5)();
    }
    if (*(ulong *)(local_48 + 0x10) <= uVar1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1002210dc);
      (*pcVar5)();
    }
    lVar7 = 0;
    FUN_10040211c();
    lVar6 = *(long *)(lVar7 + -8);
    FUN_10002f154(local_48 +
                  ((ulong)*(byte *)(lVar6 + 0x50) + 0x20 &
                  ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff)) +
                  *(long *)(lVar6 + 0x48) * uVar1,param_1);
    _swift_bridgeObjectRelease(local_48);
    pcVar5 = *(code **)(lVar6 + 0x38);
    uVar4 = 0;
  }
  (*pcVar5)(param_1,uVar4,1,lVar7);
  return;
}

