// rea decompile_all
// name: FUN_100249b88
// address: 0x100249b88
// body: available
// range: 0x100249b88-0x100249f3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100249b88(undefined8 param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ID self;
  NSString *pNVar7;
  undefined *puVar8;
  undefined *puVar9;
  void *aBlock;
  undefined *puVar10;
  void *aBlock_00;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  long lVar16;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined *local_98;
  undefined1 auStack_88 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_88,0,0);
  lVar15 = *(long *)(param_2 + 0x10);
  lVar16 = lVar15;
  _swift_bridgeObjectRetain();
  FUN_100258278();
  _swift_bridgeObjectRelease(lVar15);
  lVar5 = lVar16;
  FUN_100232a5c();
  _swift_release(lVar16);
  lVar15 = _TtC7Wallper21VideoWallpaperManager::shownPlayers;
  lVar16 = *(long *)(lVar5 + 0x10);
  if (lVar16 == 0) {
    _swift_bridgeObjectRelease(lVar5);
  }
  else {
    puVar14 = (ulong *)(lVar5 + 0x28);
    do {
      uVar6 = puVar14[-1];
      uVar1 = *puVar14;
      _swift_beginAccess(param_3 + lVar15,&local_c0,0x21,0);
      uVar12 = *(undefined8 *)(param_3 + lVar15);
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(uVar12);
      uVar11 = uVar1;
      FUN_10000464c();
      _swift_bridgeObjectRelease(uVar12);
      if ((uVar11 & 1) != 0) {
        iVar4 = (int)*(undefined8 *)(param_3 + lVar15);
        _swift_isUniquelyReferenced_nonNull_native();
        lVar13 = *(long *)(param_3 + lVar15);
        *(undefined8 *)(param_3 + lVar15) = 0x8000000000000000;
        if (iVar4 == 0) {
          FUN_1001cb3f8();
        }
        _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar13 + 0x30) + uVar6 * 0x10 + 8));
        thunk_FUN_1001d1dc4(uVar6,lVar13);
        *(long *)(param_3 + lVar15) = lVar13;
      }
      _swift_endAccess(&local_c0);
      self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
      if (DAT_100557aa8 != -1) {
        _swift_once(&DAT_100557aa8,FUN_100255f78);
      }
      uVar12 = DAT_100577d40;
      puVar14 = puVar14 + 2;
      pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(uVar1);
      NSNotificationCenter::postNotificationName_object_(self,uVar12,pNVar7);
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    puVar8 = &DAT_1005348e8;
    _swift_allocObject(&DAT_1005348e8,0x28,7);
    *(undefined8 *)(puVar8 + 0x10) = param_1;
    *(long *)(puVar8 + 0x18) = lVar5;
    *(long *)(puVar8 + 0x20) = param_4 + 0x10;
    puVar9 = &DAT_100534910;
    _swift_allocObject(&DAT_100534910,0x20,7);
    *(code **)(puVar9 + 0x10) = thunk_FUN_1002596d8;
    *(undefined **)(puVar9 + 0x18) = puVar8;
    puVar2 = PTR___NSConcreteStackBlock_100521110;
    local_a0 = FUN_1001f0074;
    local_c0 = PTR___NSConcreteStackBlock_100521110;
    local_b8 = 0x42000000;
    local_b0 = FUN_1003f3adc;
    puStack_a8 = &DAT_100534928;
    local_98 = puVar9;
    aBlock = __Block_copy(&local_c0);
    puVar10 = local_98;
    _swift_bridgeObjectRetain(lVar5);
    _swift_retain(puVar9);
    _swift_release(puVar10);
    puVar10 = &DAT_100534960;
    _swift_allocObject(&DAT_100534960,0x28,7);
    *(long *)(puVar10 + 0x10) = lVar5;
    *(long *)(puVar10 + 0x18) = param_2;
    *(long *)(puVar10 + 0x20) = param_3;
    local_a0 = FUN_100259630;
    local_c0 = puVar2;
    local_b8 = 0x42000000;
    local_b0 = FUN_1000c7e7c;
    puStack_a8 = &DAT_100534978;
    local_98 = puVar10;
    aBlock_00 = __Block_copy(&local_c0);
    puVar10 = local_98;
    _swift_retain(param_2);
    _swift_release(puVar10);
    NSAnimationContext::runAnimationGroup_completionHandler_
              ((ID)&_OBJC_CLASS___NSAnimationContext,aBlock,aBlock_00);
    __Block_release(aBlock_00);
    __Block_release(aBlock);
    puVar10 = puVar9;
    _swift_isEscapingClosureAtFileLocation(puVar9,"",0x4e,0x474,0x36,1);
    _swift_release(puVar9);
    _swift_release(puVar8);
    if (((ulong)puVar10 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100249f14);
      (*pcVar3)();
    }
  }
  return;
}

