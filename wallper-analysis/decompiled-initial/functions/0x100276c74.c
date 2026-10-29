// rea decompile_all
// name: FUN_100276c74
// address: 0x100276c74
// body: available
// range: 0x100276c74-0x100276eb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100276d6c to 0x10041382c /usr/lib/swift/libswiftAVFoundation.dylib::(extension_AVFoundation)::__C::AVAsynchronousKeyValueLoading::$load (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100276dc8 to 0x1002a27f8 FUN_1002a27f8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100276e84 to 0x1001e4dc0 FUN_1001e4dc0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100276c74(void)

{
  _CocoaArrayWrapper _Var1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  AVPartialAsyncProperty *pAVar6;
  long *plVar7;
  undefined *puVar8;
  ulong uVar9;
  _ArrayBuffer _Var10;
  long unaff_x22;
  MainActor *pMVar11;
  
  _Var10.unknown = *(undefined **)(unaff_x22 + 0x1e0);
  if ((ulong)_Var10.unknown >> 0x3e == 0) {
    lVar4 = *(long *)(((ulong)_Var10.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var10.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var10.unknown) {
      _Var1.unknown = _Var10.unknown;
    }
    lVar4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar4 == 0) {
    _swift_bridgeObjectRelease(_Var10.unknown);
    *(undefined8 *)(unaff_x22 + 0x340) = 0;
    *(undefined8 *)(unaff_x22 + 0x338) = 0;
    puVar8 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    uVar9 = *(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0x348) = uVar9;
    if (DAT_100556f80 != -1) {
      _swift_once(&DAT_100556f80,FUN_1001dd604);
    }
    plVar7 = (long *)0x440;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x350) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_100277fc8;
    FUN_1001e4dc0(plVar7,uVar9,*(undefined8 *)(unaff_x22 + 0x220),*(undefined8 *)(unaff_x22 + 0x208)
                  ,*(undefined8 *)(unaff_x22 + 0x210));
    return;
  }
  if (((ulong)_Var10.unknown & 0xc000000000000001) == 0) {
    if (*(long *)(((ulong)_Var10.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100276e9c);
      (*pcVar3)();
    }
    uVar5 = *(undefined8 *)(_Var10.unknown + 0x20);
  }
  else {
    uVar5 = 0;
    Swift::_ArrayBuffer::__getElementSlowPath(0,_Var10);
  }
  *(undefined8 *)(unaff_x22 + 0x2a0) = uVar5;
  cVar2 = *(char *)(unaff_x22 + 0x388);
  pMVar11 = *(MainActor **)(unaff_x22 + 0x230);
  _swift_bridgeObjectRelease(_Var10.unknown);
  pAVar6 = (AVPartialAsyncProperty *)&DAT_100558e78;
  FUN_100002f94(&DAT_100558e78,&DAT_10042d780);
  (extension_AVFoundation)::AVFoundation::AVPartialAsyncProperty::_get_naturalSize(pAVar6);
  *(AVPartialAsyncProperty **)(unaff_x22 + 0x2a8) = pAVar6;
  pMVar11 = Swift::MainActor::get_shared(pMVar11,(MainActor *)pAVar6);
  *(MainActor **)(unaff_x22 + 0x2b0) = pMVar11;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x240);
  if (cVar2 != '\x01') {
    plVar7 = (long *)0xc0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x2c0) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_100276f50;
    FUN_1002a27f8(pAVar6,pMVar11,uVar5);
    return;
  }
  plVar7 = (long *)(ulong)*(uint *)(PTR__load_100523940 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x2b8) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100276eb4;
  (extension_AVFoundation)::__C::AVAsynchronousKeyValueLoading::_load();
  return;
}

