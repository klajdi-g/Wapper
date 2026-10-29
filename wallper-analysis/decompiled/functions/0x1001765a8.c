// rea decompile_all
// name: FUN_1001765a8
// address: 0x1001765a8
// body: available
// range: 0x1001765a8-0x1001767f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001765a8(void)

{
  undefined *puVar1;
  TaskPriority TVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_50 [15];
  char local_41;
  
  uVar5 = *unaff_x20;
  puVar1 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_50 + -extraout_x8;
  if (*(char *)((long)unaff_x20 + _TtC7Wallper17NowPlayingManager::mediaRemoteActive) == '\x01') {
    if (DAT_100555688 != -1) {
      _swift_once(&DAT_100555688,FUN_1001646dc);
    }
    if (*(code **)(DAT_100577ca8 + _TtC7Wallper21MediaRemoteController::sendCommand) != (code *)0x0)
    {
                    /* WARNING: Could not recover jumptable at 0x000100176658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(DAT_100577ca8 + _TtC7Wallper21MediaRemoteController::sendCommand))(5,0);
      return;
    }
  }
  else {
    puVar1 = &DAT_100429be0;
    _swift_getKeyPath(&DAT_100429be0);
    TVar2.unknown = &DAT_100429c08;
    _swift_getKeyPath();
    Combine::Published::_get_subscript(&local_41);
    _swift_release(puVar1);
    _swift_release();
    if (local_41 == '\x01') {
      Swift::TaskPriority::get_userInitiated(TVar2);
      TVar2 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))(puVar4,0,1,TVar2.unknown);
      puVar1 = &DAT_1005311e8;
      _swift_allocObject(&DAT_1005311e8,0x38,7);
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined8 *)(puVar1 + 0x18) = 0;
      *(undefined8 *)(puVar1 + 0x20) = 0xd00000000000002c;
      *(undefined8 *)(puVar1 + 0x28) = 0x80000001004e08b0;
      *(undefined8 *)(puVar1 + 0x30) = uVar5;
      puVar3 = &DAT_10042a440;
    }
    else {
      if (local_41 != '\0') {
        return;
      }
      Swift::TaskPriority::get_userInitiated(TVar2);
      TVar2 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))(puVar4,0,1,TVar2.unknown);
      puVar1 = &DAT_100531210;
      _swift_allocObject(&DAT_100531210,0x38,7);
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined8 *)(puVar1 + 0x18) = 0;
      *(undefined8 *)(puVar1 + 0x20) = 0xd00000000000002a;
      *(undefined8 *)(puVar1 + 0x28) = 0x80000001004e08e0;
      *(undefined8 *)(puVar1 + 0x30) = uVar5;
      puVar3 = &DAT_10042a448;
    }
    FUN_100176d50(0,0,puVar4,puVar3,puVar1);
    _swift_release();
    FUN_10002a29c(puVar4,&DAT_100561090,&DAT_10041c870);
  }
  return;
}

