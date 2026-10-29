// rea decompile_all
// name: FUN_10022a880
// address: 0x10022a880
// body: available
// range: 0x10022a880-0x10022aa27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010022a940 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10022a880(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  ulong local_70 [2];
  
  puVar3 = &DAT_1005543c8;
  FUN_100002f94(&DAT_1005543c8,&DAT_100427110);
  lVar7 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)local_70 - extraout_x8;
  puVar4 = &DAT_100557e80;
  FUN_100002f94(&DAT_100557e80,&DAT_10041cf60);
  lVar8 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = _TtC7Wallper12SteamManager::_isInitialized;
  puVar1 = PTR___type_metadata_for_Swift_Bool_100523b70;
  lVar6 = lVar5 - extraout_x8_00;
  local_70[0] = local_70[0] & 0xffffffffffffff00;
  Combine::Published::init(lVar6,puVar4,PTR___type_metadata_for_Swift_Bool_100523b70);
  pcVar9 = *(code **)(lVar8 + 0x20);
  (*pcVar9)(unaff_x20 + lVar2,lVar6,puVar4);
  lVar2 = _TtC7Wallper12SteamManager::_isOwned;
  local_70[0] = local_70[0] & 0xffffffffffffff00;
  Combine::Published::init(lVar6,puVar4,puVar1);
  (*pcVar9)(unaff_x20 + lVar2,lVar6,puVar4);
  lVar2 = _TtC7Wallper12SteamManager::_steamID;
  local_70[0] = 0;
  local_70[1] = 0;
  puVar4 = &DAT_100549db0;
  FUN_100002f94(&DAT_100549db0,&DAT_100419ed0);
  Combine::Published::init(lVar5,puVar4,puVar4);
  pcVar9 = *(code **)(lVar7 + 0x20);
  (*pcVar9)(unaff_x20 + lVar2,lVar5,puVar3);
  lVar2 = _TtC7Wallper12SteamManager::_playerName;
  local_70[0] = 0;
  local_70[1] = 0;
  Combine::Published::init(lVar5,puVar4,puVar4);
  (*pcVar9)(unaff_x20 + lVar2,lVar5,puVar3);
  *(undefined8 *)(unaff_x20 + _TtC7Wallper12SteamManager::callbackTimer) = 0;
  return;
}

