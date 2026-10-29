// rea decompile_all
// name: FUN_1003f83f4
// address: 0x1003f83f4
// body: available
// range: 0x1003f83f4-0x1003f8703 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1003f83f4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  _CocoaArrayWrapper _Var5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  void *aBlock;
  undefined *puVar9;
  void *aBlock_00;
  undefined **ppuVar10;
  long lVar11;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  if (DAT_100557bb0 != -1) {
    _swift_once(&DAT_100557bb0,FUN_100233158);
  }
  lVar2 = DAT_100577d38;
  puVar4 = &DAT_10053edb8;
  _swift_allocObject(&DAT_10053edb8,0x18,7);
  *(long *)(puVar4 + 0x10) = param_1;
  lVar11 = _TtC7Wallper21VideoWallpaperManager::windows;
  _swift_beginAccess(lVar2 + _TtC7Wallper21VideoWallpaperManager::windows,auStack_78,0,0);
  lVar11 = *(long *)(lVar2 + lVar11);
  ppuVar10 = *(undefined ***)(lVar11 + 0x10);
  _Var5.unknown = PTR___swiftEmptyArrayStorage_100524190;
  if (ppuVar10 != (undefined **)0x0) {
    _swift_bridgeObjectRetain(lVar11);
    _Var5.unknown = (undefined *)ppuVar10;
    thunk_FUN_1001c5a74(ppuVar10,0);
    ppuVar6 = &local_a8;
    FUN_1001aaf94(ppuVar6,(undefined **)((long)_Var5.unknown + 0x20),ppuVar10,lVar11);
    FUN_10002f6ec(local_a8,local_a0,local_98,puStack_90,local_88);
    if (ppuVar6 != ppuVar10) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003f8700);
      (*pcVar3)();
    }
  }
  if (((long)_Var5.unknown < 0) || (((ulong)_Var5.unknown >> 0x3e & 1) != 0)) {
    lVar11 = Swift::_CocoaArrayWrapper::get_endIndex(_Var5);
  }
  else {
    lVar11 = *(long *)(_Var5.unknown + 0x10);
  }
  if (lVar11 == 0) {
    _swift_release(_Var5.unknown);
    if ((*(byte *)(param_1 + _TtC7Wallper11AppDelegate::didReplyToTerminate) & 1) == 0) {
      *(undefined1 *)(param_1 + _TtC7Wallper11AppDelegate::didReplyToTerminate) = 1;
      if (*(ID *)PTR__NSApp_1005212d0 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003f8704);
        (*pcVar3)();
      }
      objc_stub::replyToApplicationShouldTerminate_(*(ID *)PTR__NSApp_1005212d0,1);
    }
    _swift_release(puVar4);
  }
  else {
    puVar7 = &DAT_10053ede0;
    _swift_allocObject(&DAT_10053ede0,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = 0x3fd999999999999a;
    *(undefined **)(puVar7 + 0x18) = _Var5.unknown;
    puVar8 = &DAT_10053ee08;
    _swift_allocObject(&DAT_10053ee08,0x20,7);
    *(code **)(puVar8 + 0x10) = FUN_1003fd564;
    *(undefined **)(puVar8 + 0x18) = puVar7;
    puVar1 = PTR___NSConcreteStackBlock_100521110;
    local_88 = FUN_10005b020;
    local_a8 = PTR___NSConcreteStackBlock_100521110;
    local_a0 = 0x42000000;
    local_98 = FUN_1003f3adc;
    puStack_90 = &DAT_10053ee20;
    local_80 = puVar8;
    aBlock = __Block_copy(&local_a8);
    puVar9 = local_80;
    _swift_retain(puVar8);
    _swift_release(puVar9);
    puVar9 = &DAT_10053ee58;
    _swift_allocObject(&DAT_10053ee58,0x20,7);
    *(code **)(puVar9 + 0x10) = thunk_FUN_1003fd504;
    *(undefined **)(puVar9 + 0x18) = puVar4;
    local_88 = FUN_1003fd580;
    local_a8 = puVar1;
    local_a0 = 0x42000000;
    local_98 = FUN_1000c7e7c;
    puStack_90 = &DAT_10053ee70;
    local_80 = puVar9;
    aBlock_00 = __Block_copy(&local_a8);
    puVar9 = local_80;
    _swift_retain(puVar4);
    _swift_release(puVar9);
    NSAnimationContext::runAnimationGroup_completionHandler_
              ((ID)&_OBJC_CLASS___NSAnimationContext,aBlock,aBlock_00);
    _swift_release(puVar4);
    __Block_release(aBlock_00);
    __Block_release(aBlock);
    puVar4 = puVar8;
    _swift_isEscapingClosureAtFileLocation(puVar8,"",0x4e,0x485,0x32,1);
    _swift_release(puVar8);
    _swift_release(puVar7);
    if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003f8668);
      (*pcVar3)();
    }
  }
  return;
}

