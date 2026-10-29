// rea decompile_all
// name: FUN_100215b20
// address: 0x100215b20
// body: available
// range: 0x100215b20-0x100215ceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100215b20(void)

{
  undefined *puVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  MainActor *pMVar4;
  MainActor *this;
  MainActor *pMVar5;
  undefined8 *puVar6;
  long extraout_x8;
  Published *unaff_x20;
  undefined1 auStack_50 [14];
  undefined1 local_42;
  byte local_41;
  
  puVar1 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_10042b4b0;
  _swift_getKeyPath(&DAT_10042b4b0);
  puVar2 = &DAT_10042b4d8;
  _swift_getKeyPath(&DAT_10042b4d8);
  Combine::Published::_get_subscript(&local_41);
  _swift_release(puVar1);
  _swift_release(puVar2);
  if ((local_41 & 1) == 0) {
    _swift_getKeyPath(&DAT_10042b4b0);
    _swift_getKeyPath(&DAT_10042b4d8);
    local_42 = 1;
    _swift_retain();
    Combine::Published::_set_subscript(unaff_x20,&local_42);
    TVar3 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))(auStack_50 + -extraout_x8,1,1,TVar3.unknown)
    ;
    pMVar4 = (MainActor *)&DAT_1005333a8;
    _swift_allocObject(&DAT_1005333a8,0x18,7);
    _swift_weakInit(pMVar4 + 0x10,unaff_x20);
    this = Swift::MainActor::typeMetadataAccessor();
    puVar1 = PTR_typeMetadataAccessor_1005246d8;
    pMVar5 = pMVar4;
    _swift_retain();
    pMVar5 = Swift::MainActor::get_shared(this,pMVar5);
    puVar6 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    puVar1 = &DAT_1005335b0;
    _swift_allocObject(&DAT_1005335b0,0x28,7);
    *(MainActor **)(puVar1 + 0x10) = pMVar5;
    *(undefined8 **)(puVar1 + 0x18) = puVar6;
    *(MainActor **)(puVar1 + 0x20) = pMVar4;
    _swift_release(pMVar4);
    FUN_1001b1e74(0,0,auStack_50 + -extraout_x8,&DAT_10042b6e8,puVar1);
    _swift_release();
  }
  return;
}

