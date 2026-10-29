// rea decompile_all
// name: FUN_10013baec
// address: 0x10013baec
// body: available
// range: 0x10013baec-0x10013bcf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010013bc00 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10013baec(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_80 [8];
  undefined *local_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  puVar2 = &DAT_1005543c8;
  FUN_100002f94(&DAT_1005543c8,&DAT_100427110);
  lVar9 = *(long *)(puVar2 + -8);
  local_78 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_80 + -extraout_x8;
  puVar2 = &DAT_100557e80;
  FUN_100002f94(&DAT_100557e80,&DAT_10041cf60);
  lVar10 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar6 - extraout_x8_00;
  puVar3 = &DAT_1005546c8;
  FUN_100002f94(&DAT_1005546c8,&DAT_100427648);
  lVar11 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = _TtC7Wallper13DeviceManager::_devices;
  local_70 = PTR___swiftEmptyArrayStorage_100524190;
  puVar4 = &DAT_1005545e8;
  FUN_100002f94(&DAT_1005545e8,&DAT_100427498);
  Combine::Published::init(lVar7 - extraout_x8_01,puVar4,puVar4);
  (**(code **)(lVar11 + 0x20))(unaff_x20 + lVar5,lVar7 - extraout_x8_01,puVar3);
  lVar5 = _TtC7Wallper13DeviceManager::_isLoaded;
  puVar3 = PTR___type_metadata_for_Swift_Bool_100523b70;
  local_70 = (undefined *)((ulong)local_70 & 0xffffffffffffff00);
  Combine::Published::init(lVar7,puVar4,PTR___type_metadata_for_Swift_Bool_100523b70);
  pcVar8 = *(code **)(lVar10 + 0x20);
  (*pcVar8)(unaff_x20 + lVar5,lVar7,puVar2);
  lVar5 = _TtC7Wallper13DeviceManager::_isSyncing;
  local_70 = (undefined *)((ulong)local_70 & 0xffffffffffffff00);
  Combine::Published::init(lVar7,puVar4,puVar3);
  (*pcVar8)(unaff_x20 + lVar5,lVar7,puVar2);
  lVar5 = _TtC7Wallper13DeviceManager::_lastError;
  local_70 = (undefined *)0x0;
  uStack_68 = 0;
  puVar2 = &DAT_100549db0;
  FUN_100002f94(&DAT_100549db0,&DAT_100419ed0);
  Combine::Published::init(puVar6,puVar2,puVar2);
  lVar5 = unaff_x20 + lVar5;
  (**(code **)(lVar9 + 0x20))(lVar5,puVar6,local_78);
  plVar1 = (long *)(unaff_x20 + _TtC7Wallper13DeviceManager::hwid);
  FUN_100295970();
  *plVar1 = lVar5;
  plVar1[1] = (long)puVar6;
  return;
}

