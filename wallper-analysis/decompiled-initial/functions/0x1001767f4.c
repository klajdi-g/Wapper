// rea decompile_all
// name: FUN_1001767f4
// address: 0x1001767f4
// body: available
// range: 0x1001767f4-0x100176a93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001767f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  TaskPriority TVar4;
  long extraout_x8;
  undefined1 *puVar5;
  byte *unaff_x20;
  byte *pbVar6;
  undefined8 uVar7;
  undefined1 local_60 [32];
  
  uVar7 = *(undefined8 *)unaff_x20;
  puVar1 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = local_60 + -extraout_x8;
  puVar1 = &DAT_100429b98;
  _swift_getKeyPath(&DAT_100429b98);
  puVar2 = &DAT_100429bc0;
  _swift_getKeyPath(&DAT_100429bc0);
  pcVar3 = (code *)local_60;
  pbVar6 = unaff_x20;
  Combine::Published::_modify_subscript();
  *unaff_x20 = (*unaff_x20 ^ 0xff) & 1;
  (*pcVar3)(local_60,0);
  _swift_release(puVar1);
  _swift_release(puVar2);
  if (pbVar6[_TtC7Wallper17NowPlayingManager::mediaRemoteActive] == 1) {
    if (DAT_100555688 != -1) {
      _swift_once(&DAT_100555688,FUN_1001646dc);
    }
    if (*(code **)(DAT_100577ca8 + _TtC7Wallper21MediaRemoteController::sendCommand) != (code *)0x0)
    {
      (**(code **)(DAT_100577ca8 + _TtC7Wallper21MediaRemoteController::sendCommand))(2,0);
    }
  }
  else {
    puVar1 = &DAT_100429be0;
    _swift_getKeyPath(&DAT_100429be0);
    TVar4.unknown = &DAT_100429c08;
    _swift_getKeyPath();
    Combine::Published::_get_subscript(local_60,pbVar6,puVar1,TVar4.unknown);
    _swift_release(puVar1);
    _swift_release();
    if (local_60[0] == (code)0x1) {
      Swift::TaskPriority::get_userInitiated(TVar4);
      TVar4 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar4.unknown + -8) + 0x38))(puVar5,0,1,TVar4.unknown);
      puVar1 = &DAT_1005312d8;
      _swift_allocObject(&DAT_1005312d8,0x38,7);
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined8 *)(puVar1 + 0x18) = 0;
      *(undefined8 *)(puVar1 + 0x20) = 0xd000000000000027;
      *(undefined8 *)(puVar1 + 0x28) = 0x80000001004e09d0;
      *(undefined8 *)(puVar1 + 0x30) = uVar7;
      puVar2 = &DAT_10042a460;
    }
    else {
      if (local_60[0] != (code)0x0) {
        return;
      }
      Swift::TaskPriority::get_userInitiated(TVar4);
      TVar4 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar4.unknown + -8) + 0x38))(puVar5,0,1,TVar4.unknown);
      puVar1 = &DAT_100531300;
      _swift_allocObject(&DAT_100531300,0x38,7);
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined8 *)(puVar1 + 0x18) = 0;
      *(undefined8 *)(puVar1 + 0x20) = 0xd000000000000025;
      *(undefined8 *)(puVar1 + 0x28) = 0x80000001004e0a00;
      *(undefined8 *)(puVar1 + 0x30) = uVar7;
      puVar2 = &DAT_10042a468;
    }
    FUN_100176d50(0,0,puVar5,puVar2,puVar1);
    _swift_release();
    FUN_10002a29c(puVar5,&DAT_100561090,&DAT_10041c870);
  }
  return;
}

