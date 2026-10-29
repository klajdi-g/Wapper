// rea decompile_all
// name: FUN_1001f165c
// address: 0x1001f165c
// body: available
// range: 0x1001f165c-0x1001f17a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f165c(void)

{
  undefined *puVar1;
  NSKeyValueObservedChange NVar2;
  TaskPriority TVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  long extraout_x8;
  undefined1 auStack_40 [14];
  byte local_32;
  byte local_31;
  
  puVar1 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  NVar2.unknown = &DAT_100557358;
  FUN_100002f94(&DAT_100557358,&DAT_10042b1e0);
  Foundation::NSKeyValueObservedChange::_get_newValue(NVar2);
  if ((local_31 != 2) && ((local_31 & 1) != 0)) {
    Foundation::NSKeyValueObservedChange::_get_oldValue(NVar2);
    if ((local_32 == 2) || ((local_32 & 1) == 0)) {
      TVar3 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))
                (auStack_40 + -extraout_x8,1,1,TVar3.unknown);
      pMVar4 = Swift::MainActor::typeMetadataAccessor();
      puVar1 = PTR_typeMetadataAccessor_1005246d8;
      pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
      puVar5 = &DAT_100558b80;
      FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
      puVar1 = &DAT_1005330d8;
      _swift_allocObject(&DAT_1005330d8,0x20,7);
      *(MainActor **)(puVar1 + 0x10) = pMVar4;
      *(undefined8 **)(puVar1 + 0x18) = puVar5;
      FUN_1001b1e74(0,0,auStack_40 + -extraout_x8,&DAT_10042b1f0,puVar1);
      _swift_release();
    }
  }
  return;
}

