// rea decompile_all
// name: FUN_100293880
// address: 0x100293880
// body: available
// range: 0x100293880-0x100293a8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_100293880(void)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  undefined8 uVar3;
  ID IVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  long unaff_x20;
  DispatchWorkItem *this;
  _ArrayBuffer _Var8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_98 [3];
  ulong local_80;
  undefined1 auStack_78 [24];
  
  if (*(ID *)(unaff_x20 + 0x10) != 0) {
    objc_stub::invalidate(*(ID *)(unaff_x20 + 0x10));
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    this = *(DispatchWorkItem **)(unaff_x20 + 0x20);
    if (this == (DispatchWorkItem *)0x0) {
      uVar3 = 0;
    }
    else {
      _swift_retain(this);
      Dispatch::DispatchWorkItem::cancel(this);
      _swift_release(this);
      uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    }
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    _swift_release(uVar3);
    _swift_beginAccess(unaff_x20 + 0x18,auStack_78,1,0);
    _Var8.unknown = *(undefined **)(unaff_x20 + 0x18);
    _swift_bridgeObjectRetain(_Var8.unknown);
    IVar4 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
    IVar4 = NSWorkspace::notificationCenter(IVar4);
    if ((ulong)_Var8.unknown >> 0x3e == 0) {
      lVar9 = *(long *)(((ulong)_Var8.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = _Var8.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var8.unknown) {
        _Var1.unknown = _Var8.unknown;
      }
      lVar9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    if (lVar9 != 0) {
      uVar10 = 0;
      do {
        if (((ulong)_Var8.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)_Var8.unknown & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100293a20);
            (*pcVar2)();
          }
          uVar11 = *(ulong *)(_Var8.unknown + uVar10 * 8 + 0x20);
          _swift_unknownObjectRetain(uVar11);
        }
        else {
          uVar11 = uVar10;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar10,_Var8);
        }
        if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100293a1c);
          (*pcVar2)();
        }
        lVar7 = uVar10 + 1;
        uVar5 = uVar11;
        _swift_getObjectType();
        local_98[0] = uVar11;
        local_80 = uVar5;
        _swift_unknownObjectRetain(uVar11);
        puVar6 = local_98;
        Swift::__bridgeAnythingToObjectiveC(puVar6,uVar5);
        NSWorkspace::removeObserver_(IVar4,puVar6);
        _swift_unknownObjectRelease(puVar6);
        FUN_100043f24(local_98);
        _swift_unknownObjectRelease(uVar11);
        uVar10 = uVar10 + 1;
      } while (lVar7 != lVar9);
    }
    _swift_bridgeObjectRelease(_Var8.unknown);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined **)(unaff_x20 + 0x18) = PTR___swiftEmptyArrayStorage_100524190;
    _swift_bridgeObjectRelease(uVar3);
    FUN_100294224(PTR___swiftEmptySetSingleton_1005241a0);
  }
  return 0;
}

