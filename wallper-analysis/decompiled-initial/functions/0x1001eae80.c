// rea decompile_all
// name: FUN_1001eae80
// address: 0x1001eae80
// body: available
// range: 0x1001eae80-0x1001eb03f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001eae80(MainActor *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  TaskPriority TVar2;
  MainActor *this;
  MainActor *pMVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 local_70;
  undefined1 auStack_68 [24];
  
  puVar1 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_1 + _TtC7Wallper14PreviewManager::inFlightIDs,auStack_68,0x21,0);
  uVar5 = param_3;
  FUN_100227384(param_2,param_3);
  _swift_endAccess(auStack_68);
  _swift_bridgeObjectRelease(uVar5);
  _swift_beginAccess(param_1 + _TtC7Wallper14PreviewManager::transparentIDs,auStack_68,0x21,0);
  _swift_bridgeObjectRetain(param_3);
  FUN_1001ca054(auStack_78,param_2,param_3);
  _swift_endAccess(auStack_68);
  _swift_bridgeObjectRelease(local_70);
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))(auStack_80 + -extraout_x8,1,1,TVar2.unknown);
  this = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  _swift_bridgeObjectRetain(param_3);
  pMVar3 = param_1;
  _swift_retain();
  pMVar3 = Swift::MainActor::get_shared(this,pMVar3);
  puVar4 = &DAT_100558b80;
  FUN_100047f94(&DAT_100558b80,0xff,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  puVar1 = &DAT_100531e88;
  _swift_allocObject(&DAT_100531e88,0x38,7);
  *(MainActor **)(puVar1 + 0x10) = pMVar3;
  *(undefined8 **)(puVar1 + 0x18) = puVar4;
  *(MainActor **)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  FUN_1001b1e74(0,0,auStack_80 + -extraout_x8,&DAT_10042af38,puVar1);
  _swift_release();
  return;
}

