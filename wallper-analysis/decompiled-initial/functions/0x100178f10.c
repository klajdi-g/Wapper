// rea decompile_all
// name: FUN_100178f10
// address: 0x100178f10
// body: available
// range: 0x100178f10-0x1001790d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100178f10(void)

{
  long lVar1;
  long lVar2;
  Task TVar3;
  undefined8 uVar4;
  TaskPriority TVar5;
  MainActor *pMVar6;
  MainActor *this;
  MainActor *pMVar7;
  undefined8 *puVar8;
  long extraout_x8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  puVar10 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _TtC7Wallper17NowPlayingManager::clockCheckTask;
  puVar10 = *(undefined **)(unaff_x20 + _TtC7Wallper17NowPlayingManager::clockCheckTask);
  if (puVar10 != (undefined *)0x0) {
    TVar3.unknown = puVar10;
    _swift_retain();
    Swift::Task::cancel(TVar3);
    _swift_release(puVar10);
  }
  lVar2 = _TtC7Wallper17NowPlayingManager::automationRefused;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper17NowPlayingManager::automationRefused,auStack_68,1,0);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined **)(unaff_x20 + lVar2) = PTR___swiftEmptySetSingleton_1005241a0;
  _swift_bridgeObjectRelease(uVar4);
  TVar5 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar5.unknown + -8) + 0x38))(auStack_70 + -extraout_x8,1,1,TVar5.unknown);
  pMVar6 = (MainActor *)&DAT_100530458;
  _swift_allocObject(&DAT_100530458,0x18,7);
  _swift_weakInit(pMVar6 + 0x10);
  this = Swift::MainActor::typeMetadataAccessor();
  puVar10 = PTR_typeMetadataAccessor_1005246d8;
  pMVar7 = pMVar6;
  _swift_retain();
  pMVar7 = Swift::MainActor::get_shared(this,pMVar7);
  puVar8 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  puVar10 = &DAT_100530c50;
  _swift_allocObject(&DAT_100530c50,0x28,7);
  *(MainActor **)(puVar10 + 0x10) = pMVar7;
  *(undefined8 **)(puVar10 + 0x18) = puVar8;
  *(MainActor **)(puVar10 + 0x20) = pMVar6;
  _swift_release(pMVar6);
  uVar4 = 0;
  FUN_1001b1e74(0,0,auStack_70 + -extraout_x8,&DAT_10042a1b0,puVar10);
  uVar9 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar4;
  _swift_release(uVar9);
  return;
}

