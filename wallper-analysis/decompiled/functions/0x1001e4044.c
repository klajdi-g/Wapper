// rea decompile_all
// name: FUN_1001e4044
// address: 0x1001e4044
// body: available
// range: 0x1001e4044-0x1001e41bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001e4044(long param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1 + _TtC7Wallper14PreviewManager::inFlightIDs,auStack_68,0x21,0);
  uVar4 = param_3;
  FUN_100227384(param_2,param_3);
  _swift_endAccess(auStack_68);
  _swift_bridgeObjectRelease(uVar4);
  lVar1 = _TtC7Wallper14PreviewManager::failedIDs;
  if ((param_4 & 1) == 0) {
    _swift_beginAccess(param_1 + _TtC7Wallper14PreviewManager::failedIDs,auStack_68,0x20,0);
    lVar6 = *(long *)(param_1 + lVar1);
    if (*(long *)(lVar6 + 0x10) == 0) {
      lVar7 = 0;
    }
    else {
      _swift_bridgeObjectRetain(lVar6);
      lVar7 = param_2;
      uVar4 = param_3;
      FUN_10000464c();
      if ((uVar4 & 1) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(long *)(*(long *)(lVar6 + 0x38) + lVar7 * 8);
      }
      _swift_bridgeObjectRelease(lVar6);
    }
    _swift_endAccess(auStack_68);
    if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001e41c0);
      (*pcVar2)();
    }
    _swift_beginAccess(param_1 + lVar1,auStack_68,0x21,0);
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    _swift_isUniquelyReferenced_nonNull_native(uVar3);
    uVar5 = *(undefined8 *)(param_1 + lVar1);
    *(undefined8 *)(param_1 + lVar1) = 0x8000000000000000;
    FUN_1003402f4(lVar7 + 1,param_2,param_3,uVar3);
    *(undefined8 *)(param_1 + lVar1) = uVar5;
  }
  else {
    _swift_beginAccess(param_1 + _TtC7Wallper14PreviewManager::failedIDs,auStack_68,0x21,0);
    FUN_10027ea68(param_2,param_3);
  }
  _swift_endAccess(auStack_68);
  return;
}

