// rea decompile_all
// name: FUN_10021693c
// address: 0x10021693c
// body: available
// range: 0x10021693c-0x100216b33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10021693c(Published *param_1)

{
  undefined *puVar1;
  TaskPriority TVar2;
  MainActor *pMVar3;
  MainActor *this;
  MainActor *pMVar4;
  undefined8 *puVar5;
  long extraout_x8;
  undefined *puVar6;
  undefined1 auStack_60 [8];
  Published *local_58;
  
  puVar6 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_10042b5e8;
  _swift_getKeyPath(&DAT_10042b5e8);
  puVar1 = &DAT_10042b610;
  _swift_getKeyPath(&DAT_10042b610);
  Combine::Published::_get_subscript(&local_58);
  _swift_release(puVar6);
  _swift_release(puVar1);
  puVar6 = local_58[2].unknown;
  _swift_bridgeObjectRelease();
  if ((-1 < (long)param_1) && ((long)param_1 < (long)puVar6)) {
    _swift_getKeyPath(&DAT_10042b4f8);
    _swift_getKeyPath(&DAT_10042b520);
    local_58 = param_1;
    _swift_retain();
    Combine::Published::_set_subscript(param_1,&local_58);
    TVar2 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))(auStack_60 + -extraout_x8,1,1,TVar2.unknown)
    ;
    pMVar3 = (MainActor *)&DAT_1005333a8;
    _swift_allocObject(&DAT_1005333a8,0x18,7);
    _swift_weakInit(pMVar3 + 0x10);
    this = Swift::MainActor::typeMetadataAccessor();
    puVar6 = PTR_typeMetadataAccessor_1005246d8;
    pMVar4 = pMVar3;
    _swift_retain();
    pMVar4 = Swift::MainActor::get_shared(this,pMVar4);
    puVar5 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    puVar6 = &DAT_100533948;
    _swift_allocObject(&DAT_100533948,0x31,7);
    *(MainActor **)(puVar6 + 0x10) = pMVar4;
    *(undefined8 **)(puVar6 + 0x18) = puVar5;
    *(MainActor **)(puVar6 + 0x20) = pMVar3;
    *(undefined8 *)(puVar6 + 0x28) = 0;
    puVar6[0x30] = 1;
    _swift_release(pMVar3);
    FUN_1001b1e74(0,0,auStack_60 + -extraout_x8,&DAT_10042b900,puVar6);
    _swift_release();
    FUN_100217d50();
  }
  return;
}

