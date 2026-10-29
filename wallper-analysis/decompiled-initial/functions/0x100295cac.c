// rea decompile_all
// name: FUN_100295cac
// address: 0x100295cac
// body: available
// range: 0x100295cac-0x100295e33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100295d6c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100295cac(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  NWPathMonitor *pNVar4;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 local_60;
  undefined1 local_51;
  
  puVar2 = &DAT_10054b940;
  FUN_100002f94(&DAT_10054b940,&DAT_10041cf50);
  lVar6 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&local_60 - extraout_x8;
  puVar3 = &DAT_100557e80;
  FUN_100002f94(&DAT_100557e80,&DAT_10041cf60);
  lVar7 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _TtC7Wallper20NetworkStatusMonitor::_isOnline;
  local_51 = 1;
  Combine::Published::init
            (lVar5 - extraout_x8_00,puVar3,PTR___type_metadata_for_Swift_Bool_100523b70);
  (**(code **)(lVar7 + 0x20))(unaff_x20 + lVar1,lVar5 - extraout_x8_00,puVar3);
  lVar1 = _TtC7Wallper20NetworkStatusMonitor::_secondsUntilRetry;
  local_60 = 0;
  Combine::Published::init(lVar5,puVar3,PTR___type_metadata_for_Swift_Int_100523bd8);
  (**(code **)(lVar6 + 0x20))(unaff_x20 + lVar1,lVar5,puVar2);
  lVar1 = _TtC7Wallper20NetworkStatusMonitor::monitor;
  pNVar4 = Network::NWPathMonitor::typeMetadataAccessor();
  _swift_allocObject(pNVar4,*(undefined4 *)(pNVar4 + 0x30),*(undefined2 *)(pNVar4 + 0x34));
  pNVar4 = Network::NWPathMonitor::init(pNVar4);
  *(NWPathMonitor **)(unaff_x20 + lVar1) = pNVar4;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper20NetworkStatusMonitor::countdownTimer) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper20NetworkStatusMonitor::retryInterval) = 10;
  *(undefined1 *)(unaff_x20 + _TtC7Wallper20NetworkStatusMonitor::started) = 0;
  *(undefined1 *)(unaff_x20 + _TtC7Wallper20NetworkStatusMonitor::hasReceivedFirstPath) = 0;
  return;
}

