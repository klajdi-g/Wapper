// rea decompile_all
// name: FUN_100229d28
// address: 0x100229d28
// body: available
// range: 0x100229d28-0x10022a0ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100229f40 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100229d28(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_b0;
  undefined *puStack_a8;
  long local_a0;
  undefined *puStack_98;
  long local_90;
  long local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  puVar2 = &DAT_1005543c8;
  local_78 = param_1;
  FUN_100002f94(&DAT_1005543c8,&DAT_100427110);
  local_88 = *(long *)(puVar2 + -8);
  puStack_80 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100557e80;
  local_90 = (long)&local_b0 - extraout_x8;
  FUN_100002f94(&DAT_100557e80,&DAT_10041cf60);
  local_a0 = *(long *)(puVar2 + -8);
  puStack_98 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = ((long)&local_b0 - extraout_x8) - extraout_x8_00;
  puVar2 = &DAT_1005575a0;
  FUN_100002f94(&DAT_1005575a0,&DAT_10042b890);
  local_b0 = *(long *)(puVar2 + -8);
  puStack_a8 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar6 - extraout_x8_01;
  puVar2 = &DAT_10054b940;
  FUN_100002f94(&DAT_10054b940,&DAT_10041cf50);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar8 - extraout_x8_02;
  puVar3 = &DAT_10054b948;
  FUN_100002f94(&DAT_10054b948,&DAT_10042b8a0);
  lVar7 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)(unaff_x20 + 0x10) = 0xd000000000000019;
  *(undefined8 *)(unaff_x20 + 0x18) = 0x80000001004e1f50;
  *(undefined8 *)(unaff_x20 + 0x20) = 0xd000000000000018;
  *(undefined8 *)(unaff_x20 + 0x28) = 0x80000001004e1f70;
  *(undefined8 *)(unaff_x20 + 0x30) = 0xd000000000000016;
  *(undefined8 *)(unaff_x20 + 0x38) = 0x80000001004e1f90;
  *(undefined8 *)(unaff_x20 + 0x40) = 0xd00000000000001d;
  *(undefined8 *)(unaff_x20 + 0x48) = 0x80000001004e1fb0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0xd000000000000024;
  *(undefined8 *)(unaff_x20 + 0x58) = 0x80000001004e1fd0;
  lVar1 = _TtC7Wallper19ShuffleQueueManager::_queue;
  local_70 = PTR___swiftEmptyArrayStorage_100524190;
  puVar4 = &DAT_100558960;
  FUN_100002f94(&DAT_100558960,&DAT_10042b290);
  Combine::Published::init(lVar9 - extraout_x8_03,puVar4,puVar4);
  (**(code **)(lVar7 + 0x20))(unaff_x20 + lVar1,lVar9 - extraout_x8_03,puVar3);
  lVar1 = _TtC7Wallper19ShuffleQueueManager::_currentIndex;
  local_70 = (undefined *)0x0;
  Combine::Published::init(lVar9,puVar4,PTR___type_metadata_for_Swift_Int_100523bd8);
  (**(code **)(lVar5 + 0x20))(unaff_x20 + lVar1,lVar9,puVar2);
  lVar1 = _TtC7Wallper19ShuffleQueueManager::_autoAdvance;
  local_70 = (undefined *)((ulong)local_70 & 0xffffffffffffff00);
  Combine::Published::init(lVar8,puVar4,&DAT_100533338);
  (**(code **)(local_b0 + 0x20))(unaff_x20 + lVar1,lVar8,puStack_a8);
  lVar1 = _TtC7Wallper19ShuffleQueueManager::_isEnabled;
  local_70 = (undefined *)((ulong)local_70 & 0xffffffffffffff00);
  Combine::Published::init(lVar6,puVar4,PTR___type_metadata_for_Swift_Bool_100523b70);
  (**(code **)(local_a0 + 0x20))(unaff_x20 + lVar1,lVar6,puStack_98);
  lVar1 = _TtC7Wallper19ShuffleQueueManager::_currentPlayingID;
  local_70 = (undefined *)0x0;
  uStack_68 = 0;
  puVar2 = &DAT_100549db0;
  FUN_100002f94(&DAT_100549db0,&DAT_100419ed0);
  lVar5 = local_90;
  Combine::Published::init(local_90,puVar2,puVar2);
  (**(code **)(local_88 + 0x20))(unaff_x20 + lVar1,lVar5,puStack_80);
  *(undefined8 *)(unaff_x20 + _TtC7Wallper19ShuffleQueueManager::timerCancellable) = 0;
  lVar1 = _TtC7Wallper19ShuffleQueueManager::videoLibrary;
  _swift_weakInit(unaff_x20 + _TtC7Wallper19ShuffleQueueManager::videoLibrary,0);
  _swift_weakInit(unaff_x20 + _TtC7Wallper19ShuffleQueueManager::playlistManager,0);
  *(undefined **)(unaff_x20 + _TtC7Wallper19ShuffleQueueManager::ownApplies) =
       PTR___swiftEmptyArrayStorage_100524190;
  *(undefined1 *)(unaff_x20 + _TtC7Wallper19ShuffleQueueManager::isRestoringState) = 0;
  puVar2 = PTR___swiftEmptySetSingleton_1005241a0;
  *(undefined **)(unaff_x20 + _TtC7Wallper19ShuffleQueueManager::cancellables) =
       PTR___swiftEmptySetSingleton_1005241a0;
  *(undefined1 *)(unaff_x20 + _TtC7Wallper19ShuffleQueueManager::activatingSource) = 0;
  *(undefined **)(unaff_x20 + _TtC7Wallper19ShuffleQueueManager::fetchingForDesktop) = puVar2;
  _swift_weakAssign(unaff_x20 + lVar1,local_78);
  FUN_100218f70();
  FUN_1002191b8();
  FUN_100219cf4(1);
  FUN_1002179c4();
  return;
}

