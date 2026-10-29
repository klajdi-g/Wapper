// rea decompile_all
// name: FUN_100233414
// address: 0x100233414
// body: available
// range: 0x100233414-0x1002336df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_100233414(long param_1,ulong param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  code *pcVar8;
  long lVar9;
  
  if (param_3 == 0) {
    pcVar8 = (code *)0x0;
    pcVar1 = (code *)0x0;
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = &DAT_100535748;
    _swift_allocObject(&DAT_100535748,0x20,7);
    *(code **)(puVar7 + 0x10) = FUN_1002560ec;
    *(undefined8 *)(puVar7 + 0x18) = 0;
    uVar2 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = *unaff_x20;
    lVar3 = param_1;
    uVar6 = param_2;
    FUN_10000464c();
    uVar4 = (ulong)~(uint)uVar6 & 1;
    lVar9 = *(long *)(uVar5 + 0x10) + uVar4;
    if (SCARRY8(*(long *)(uVar5 + 0x10),uVar4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100233678);
      (*pcVar1)();
    }
    if (*(long *)(uVar5 + 0x18) < lVar9) {
      FUN_1001cdc1c(lVar9,uVar2);
      lVar3 = param_1;
      uVar2 = param_2;
      FUN_10000464c();
      if (((uint)uVar6 & 1) != ((uint)uVar2 & 1)) {
        Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1002336e0);
        (*pcVar1)();
      }
    }
    else if ((uVar2 & 1) == 0) {
      FUN_1001cb080();
    }
    *unaff_x20 = uVar5;
    _swift_retain(uVar5);
    if ((uVar6 & 1) == 0) {
      thunk_FUN_1002a7954(lVar3,param_1,param_2,PTR___swiftEmptyArrayStorage_100524190,uVar5);
      _swift_bridgeObjectRetain(param_2);
    }
    lVar9 = *(long *)(uVar5 + 0x38);
    _swift_release(uVar5);
    uVar4 = *(ulong *)(lVar9 + lVar3 * 8);
    uVar6 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar9 + lVar3 * 8) = uVar4;
    uVar2 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar2 = 0;
      FUN_1001c4210(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
      *(ulong *)(lVar9 + lVar3 * 8) = uVar2;
    }
    uVar6 = *(ulong *)(uVar2 + 0x10);
    uVar4 = uVar2;
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar6) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      FUN_1001c4210(uVar4,uVar6 + 1,1,uVar2);
      *(ulong *)(lVar9 + lVar3 * 8) = uVar4;
    }
    *(ulong *)(uVar4 + 0x10) = uVar6 + 1;
    lVar9 = uVar4 + uVar6 * 0x18;
    *(long *)(lVar9 + 0x20) = param_3;
    *(undefined8 *)(lVar9 + 0x28) = param_4;
    *(undefined8 *)(lVar9 + 0x30) = param_5;
    pcVar1 = FUN_100259f24;
    pcVar8 = FUN_1002560ec;
  }
  uVar6 = unaff_x20[1];
  if (*(long *)(uVar6 + 0x10) == 0) {
    lVar9 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar6);
    lVar9 = param_1;
    uVar2 = param_2;
    FUN_10000464c();
    if ((uVar2 & 1) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(*(long *)(uVar6 + 0x38) + lVar9 * 8);
    }
    _swift_bridgeObjectRelease(uVar6);
  }
  if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100233674);
    (*pcVar1)();
  }
  uVar6 = unaff_x20[1];
  _swift_isUniquelyReferenced_nonNull_native(uVar6);
  uVar2 = unaff_x20[1];
  FUN_1003402f4(lVar9 + 1,param_1,param_2,uVar6);
  FUN_10002f6dc(pcVar8,0);
  FUN_10002f6dc(pcVar1,puVar7);
  unaff_x20[1] = uVar2;
  return lVar9 + 1;
}

