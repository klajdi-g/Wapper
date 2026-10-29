// rea decompile_all
// name: FUN_100017830
// address: 0x100017830
// body: available
// range: 0x100017830-0x1000179bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100017830(MainActor *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  MainActor *this;
  MainActor *pMVar4;
  undefined8 *puVar5;
  long extraout_x8;
  undefined8 uVar6;
  char local_160 [272];
  
  puVar1 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(param_1 + 0x68);
  puVar1 = &DAT_10041c618;
  _swift_getKeyPath(&DAT_10041c618);
  puVar2 = &DAT_10041c640;
  _swift_getKeyPath(&DAT_10041c640);
  Combine::Published::_get_subscript(local_160,uVar6,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  if (local_160[0] == '\x01') {
    FUN_1001767f4();
  }
  else {
    TVar3 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))(local_160 + -extraout_x8,1,1,TVar3.unknown);
    this = Swift::MainActor::typeMetadataAccessor();
    puVar1 = PTR_typeMetadataAccessor_1005246d8;
    pMVar4 = param_1;
    FUN_100027a7c(param_1,local_160);
    pMVar4 = Swift::MainActor::get_shared(this,pMVar4);
    puVar5 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    puVar1 = &DAT_100525a28;
    _swift_allocObject(&DAT_100525a28,0x130,7);
    *(MainActor **)(puVar1 + 0x10) = pMVar4;
    *(undefined8 **)(puVar1 + 0x18) = puVar5;
    _memcpy(puVar1 + 0x20,param_1,0x110);
    FUN_1001b1e74(0,0,local_160 + -extraout_x8,&DAT_10041c8e0,puVar1);
    _swift_release();
  }
  return;
}

