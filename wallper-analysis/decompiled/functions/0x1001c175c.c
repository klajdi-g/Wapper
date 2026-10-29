// rea decompile_all
// name: FUN_1001c175c
// address: 0x1001c175c
// body: available
// range: 0x1001c175c-0x1001c18cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001c175c(undefined8 param_1,long param_2,long param_3,undefined8 param_4,code *param_5)

{
  undefined *puVar1;
  TaskPriority TVar2;
  MainActor *pMVar3;
  MainActor *this;
  MainActor *pMVar4;
  undefined8 *puVar5;
  long extraout_x8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  puVar1 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))(auStack_70 + -extraout_x8,1,1,TVar2.unknown);
  pMVar3 = (MainActor *)&DAT_100531580;
  _swift_allocObject(&DAT_100531580,0x18,7);
  _swift_beginAccess(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong(param_2);
  _swift_weakInit(pMVar3 + 0x10,param_2);
  _swift_release(param_2);
  this = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  pMVar4 = pMVar3;
  _swift_retain();
  pMVar4 = Swift::MainActor::get_shared(this,pMVar4);
  puVar5 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  _swift_allocObject(param_3,0x28,7);
  *(MainActor **)(param_3 + 0x10) = pMVar4;
  *(undefined8 **)(param_3 + 0x18) = puVar5;
  *(MainActor **)(param_3 + 0x20) = pMVar3;
  _swift_release(pMVar3);
  (*param_5)(0,0,auStack_70 + -extraout_x8,param_4,param_3);
  _swift_release();
  return;
}

