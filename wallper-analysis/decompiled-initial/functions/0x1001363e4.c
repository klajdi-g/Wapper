// rea decompile_all
// name: FUN_1001363e4
// address: 0x1001363e4
// body: available
// range: 0x1001363e4-0x100136547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001363e4(void)

{
  long lVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  MainActor *pMVar4;
  MainActor *this;
  MainActor *pMVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  undefined8 uVar8;
  long unaff_x20;
  
  puVar2 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _TtC7Wallper18ApplicationManager::backgroundCheckTask;
  if (*(long *)(unaff_x20 + _TtC7Wallper18ApplicationManager::backgroundCheckTask) == 0) {
    TVar3 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))
              (&stack0xffffffffffffffb0 + -extraout_x8,1,1,TVar3.unknown);
    pMVar4 = (MainActor *)&DAT_10052d9f8;
    _swift_allocObject(&DAT_10052d9f8,0x18,7);
    _swift_weakInit(pMVar4 + 0x10);
    this = Swift::MainActor::typeMetadataAccessor();
    puVar2 = PTR_typeMetadataAccessor_1005246d8;
    pMVar5 = pMVar4;
    _swift_retain();
    pMVar5 = Swift::MainActor::get_shared(this,pMVar5);
    puVar6 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    puVar2 = &DAT_10052da20;
    _swift_allocObject(&DAT_10052da20,0x28,7);
    *(MainActor **)(puVar2 + 0x10) = pMVar5;
    *(undefined8 **)(puVar2 + 0x18) = puVar6;
    *(MainActor **)(puVar2 + 0x20) = pMVar4;
    _swift_release(pMVar4);
    uVar7 = 0;
    FUN_1001b1e74(0,0,&stack0xffffffffffffffb0 + -extraout_x8,&DAT_100427108,puVar2);
    uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = uVar7;
    _swift_release(uVar8);
  }
  return;
}

