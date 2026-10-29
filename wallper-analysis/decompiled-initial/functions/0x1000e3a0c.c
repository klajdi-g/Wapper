// rea decompile_all
// name: FUN_1000e3a0c
// address: 0x1000e3a0c
// body: available
// range: 0x1000e3a0c-0x1000e3bff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1000e3a0c(void)

{
  long *plVar1;
  ulong uVar2;
  _CocoaArrayWrapper _Var3;
  undefined8 uVar4;
  code *pcVar5;
  _ArrayBuffer _Var6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 unaff_x20;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *local_70;
  
  if (DAT_100557bb0 != -1) {
    _swift_once(&DAT_100557bb0,FUN_100233158);
  }
  uVar4 = DAT_100577d38;
  _Var6.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
  FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  puVar12 = _Var6.unknown & 0xffffffffffffff8;
  if ((ulong)_Var6.unknown >> 0x3e == 0) {
    uVar10 = *(ulong *)(puVar12 + 0x10);
  }
  else {
    _Var3.unknown = puVar12;
    if ((undefined *)0x7fffffffffffffff < _Var6.unknown) {
      _Var3.unknown = _Var6.unknown;
    }
    uVar10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
  }
  local_70 = PTR___swiftEmptyArrayStorage_100524190;
  uVar11 = 0;
  while( true ) {
    if (uVar10 == uVar11) {
      _swift_bridgeObjectRelease(_Var6.unknown);
      return local_70;
    }
    if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
      if (*(ulong *)(puVar12 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1000e3bd4);
        (*pcVar5)();
      }
      uVar7 = *(ulong *)(_Var6.unknown + uVar11 * 8 + 0x20);
    }
    else {
      uVar7 = uVar11;
      Swift::_ArrayBuffer::__getElementSlowPath(uVar11,_Var6);
    }
    uVar2 = uVar11 + 1;
    if (SCARRY8(uVar11,1)) break;
    uVar8 = uVar11;
    FUN_1000e3c00(uVar11,uVar7,uVar4,unaff_x20);
    uVar11 = uVar11 + 1;
    if (((uint)uVar7 & 0xff) != 1) {
      puVar9 = local_70;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar9 & 1) == 0) {
        plVar1 = (long *)(local_70 + 0x10);
        local_70 = (undefined *)0x0;
        FUN_1001c44a0(0,*plVar1 + 1,1);
      }
      uVar11 = *(ulong *)(local_70 + 0x10);
      if (*(ulong *)(local_70 + 0x18) >> 1 <= uVar11) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(local_70 + 0x18));
        FUN_1001c44a0(puVar9,uVar11 + 1,1,local_70);
        local_70 = puVar9;
      }
      *(ulong *)(local_70 + 0x10) = uVar11 + 1;
      *(ulong *)(local_70 + uVar11 * 8 + 0x20) = uVar8;
      uVar11 = uVar2;
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1000e3bd0);
  (*pcVar5)();
}

