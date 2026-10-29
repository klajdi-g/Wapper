// rea decompile_all
// name: FUN_100184b04
// address: 0x100184b04
// body: available
// range: 0x100184b04-0x100184e17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100184b04(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  MainActor *pMVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  Task TVar9;
  _StringGuts _Var10;
  undefined *puVar11;
  Published *pPVar12;
  Task TVar13;
  TaskPriority TVar14;
  MainActor *pMVar15;
  MainActor *pMVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  _StringGuts _Var19;
  long lVar20;
  undefined *puVar21;
  long unaff_x22;
  
  lVar20 = *(long *)(unaff_x22 + 0x60);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xb8));
  _swift_beginAccess(lVar20 + 0x10,unaff_x22 + 0x30,0,0);
  TVar9.unknown = (undefined *)(lVar20 + 0x10);
  _swift_weakLoadStrong();
  if (TVar9.unknown == (undefined *)0x0) goto LAB_100184de8;
  bVar8 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar9);
  if (!bVar8) {
    _Var19.unknown =
         *(undefined **)
          ((long)(TVar9.unknown + _TtC7Wallper17NowPlayingManager::mrLastTrackKey) + 8);
    if (_Var19.unknown != (undefined *)0x0) {
                    /* WARNING: Load size is inaccurate */
      _Var10.unknown = TVar9.unknown[_TtC7Wallper17NowPlayingManager::mrLastTrackKey];
      if ((_Var10.unknown == *(undefined **)(unaff_x22 + 0x68) &&
           _Var19.unknown == *(undefined **)(unaff_x22 + 0x70)) ||
         (bVar8 = Swift::_stringCompareWithSmolCheck
                            (_Var10,_Var19,
                             (_StringComparisonResult)(__int8)*(undefined **)(unaff_x22 + 0x68)),
         bVar8)) goto LAB_100184de0;
    }
    puVar21 = &DAT_100429d78;
    _swift_getKeyPath(&DAT_100429d78);
    puVar11 = &DAT_100429da0;
    _swift_getKeyPath(&DAT_100429da0);
    Combine::Published::_get_subscript(unaff_x22 + 0x48,TVar9.unknown,puVar21,puVar11);
    _swift_release(puVar11);
    _swift_release(puVar21);
    _Var19.unknown = *(undefined **)(unaff_x22 + 0x50);
    if (_Var19.unknown != (undefined *)0x0) {
      if ((*(undefined **)(unaff_x22 + 0x48) == *(undefined **)(unaff_x22 + 0x78)) &&
         (_Var19.unknown == *(undefined **)(unaff_x22 + 0x80))) {
        _swift_bridgeObjectRelease(_Var19.unknown);
      }
      else {
        bVar8 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)*(undefined **)(unaff_x22 + 0x48),_Var19,
                           (_StringComparisonResult)(__int8)*(undefined **)(unaff_x22 + 0x78));
        _swift_bridgeObjectRelease(_Var19.unknown);
        if (!bVar8) goto LAB_100184de0;
      }
      pPVar12 = (Published *)&DAT_100429f20;
      _swift_getKeyPath(&DAT_100429f20);
      puVar21 = &DAT_100429f48;
      _swift_getKeyPath(&DAT_100429f48);
      *(undefined8 *)(unaff_x22 + 0x58) = 0;
      _swift_retain(TVar9.unknown);
      Combine::Published::_set_subscript(pPVar12,unaff_x22 + 0x58,TVar9.unknown,pPVar12,puVar21);
      puVar21 = &DAT_100429f68;
      _swift_getKeyPath(&DAT_100429f68);
      puVar11 = &DAT_100429f90;
      _swift_getKeyPath(&DAT_100429f90);
      pcVar7 = (code *)(unaff_x22 + 0x10);
      TVar13.unknown = TVar9.unknown;
      Combine::Published::_modify_subscript();
      if (SCARRY8(*(long *)TVar13.unknown,1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100184e18);
        (*pcVar7)();
      }
      *(long *)TVar13.unknown = *(long *)TVar13.unknown + 1;
      (*pcVar7)(unaff_x22 + 0x10,0);
      _swift_release(puVar11);
      _swift_release(puVar21);
      lVar20 = _TtC7Wallper17NowPlayingManager::artworkTask;
      puVar21 = *(undefined **)(TVar9.unknown + _TtC7Wallper17NowPlayingManager::artworkTask);
      if (puVar21 != (undefined *)0x0) {
        TVar13.unknown = puVar21;
        _swift_retain();
        Swift::Task::cancel(TVar13);
        _swift_release(puVar21);
      }
      uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
      pMVar16 = *(MainActor **)(unaff_x22 + 0xb0);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x98);
      pMVar4 = *(MainActor **)(unaff_x22 + 0xa0);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
      TVar14 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar14.unknown + -8) + 0x38))(uVar1,1,1,TVar14.unknown);
      _swift_retain(TVar9.unknown);
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar5);
      pMVar15 = pMVar4;
      _swift_bridgeObjectRetain();
      pMVar16 = Swift::MainActor::get_shared(pMVar16,pMVar15);
      puVar17 = &DAT_100558b80;
      FUN_1000036d0(&DAT_100558b80,PTR_typeMetadataAccessor_1005246d8,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
      puVar21 = &DAT_100530de0;
      _swift_allocObject(&DAT_100530de0,0x58,7);
      *(MainActor **)(puVar21 + 0x10) = pMVar16;
      *(undefined8 **)(puVar21 + 0x18) = puVar17;
      *(undefined **)(puVar21 + 0x20) = TVar9.unknown;
      *(undefined8 *)(puVar21 + 0x28) = uVar3;
      *(undefined8 *)(puVar21 + 0x30) = uVar6;
      *(undefined8 *)(puVar21 + 0x38) = uVar2;
      *(undefined8 *)(puVar21 + 0x40) = uVar5;
      *(undefined8 *)(puVar21 + 0x48) = uVar18;
      *(MainActor **)(puVar21 + 0x50) = pMVar4;
      uVar18 = 0;
      FUN_1001b1e74(0,0,uVar1,&DAT_10042a330,puVar21);
      puVar21 = *(undefined **)(TVar9.unknown + lVar20);
      *(undefined8 *)(TVar9.unknown + lVar20) = uVar18;
      _swift_release(TVar9.unknown);
      TVar9.unknown = puVar21;
    }
  }
LAB_100184de0:
  _swift_release(TVar9.unknown);
LAB_100184de8:
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x000100184e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

