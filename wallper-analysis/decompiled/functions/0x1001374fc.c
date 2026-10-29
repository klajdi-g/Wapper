// rea decompile_all
// name: FUN_1001374fc
// address: 0x1001374fc
// body: available
// range: 0x1001374fc-0x10013785b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001376a0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1001374fc(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  URL UVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  code *pcVar8;
  long unaff_x20;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined *puStack_a0;
  long local_98;
  undefined *puStack_90;
  undefined1 *local_88;
  long local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  
  puVar3 = &DAT_1005543c8;
  FUN_100002f94(&DAT_1005543c8,&DAT_100427110);
  local_80 = *(long *)(puVar3 + -8);
  puStack_78 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100557e80;
  local_88 = auStack_b0 + -extraout_x8;
  FUN_100002f94(&DAT_100557e80,&DAT_10041cf60);
  local_98 = *(long *)(puVar3 + -8);
  puStack_90 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)(auStack_b0 + -extraout_x8) - extraout_x8_00;
  puVar3 = &DAT_1005543d0;
  FUN_100002f94(&DAT_1005543d0,&DAT_100427120);
  local_a8 = *(long *)(puVar3 + -8);
  puStack_a0 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar10 - extraout_x8_01;
  puVar3 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar13 = lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar13 - extraout_x12;
  puVar4 = &DAT_1005543d8;
  puVar7 = &DAT_100427df0;
  FUN_100002f94();
  lVar11 = *(long *)(puVar4 + -8);
  puVar5 = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _TtC7Wallper18ApplicationManager::_applicationLatestVersion;
  FUN_10028f000();
  local_70 = puVar5;
  puStack_68 = puVar7;
  Combine::Published::init
            (lVar14 - extraout_x8_03,puVar5,PTR___type_metadata_for_Swift_String_100523a98);
  (**(code **)(lVar11 + 0x20))(unaff_x20 + lVar1,lVar14 - extraout_x8_03,puVar4);
  lVar1 = _TtC7Wallper18ApplicationManager::_updateURL;
  UVar6 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar6.unknown + -8) + 0x38))(lVar14,1,1,UVar6.unknown);
  FUN_100077938(lVar14,lVar13);
  Combine::Published::init(lVar12,UVar6.unknown,puVar3);
  FUN_100137f9c(lVar14);
  (**(code **)(local_a8 + 0x20))(unaff_x20 + lVar1,lVar12,puStack_a0);
  lVar1 = _TtC7Wallper18ApplicationManager::_isApplicationClosed;
  puVar4 = PTR___type_metadata_for_Swift_Bool_100523b70;
  local_70 = (undefined *)((ulong)local_70 & 0xffffffffffffff00);
  Combine::Published::init(lVar10,UVar6.unknown,PTR___type_metadata_for_Swift_Bool_100523b70);
  puVar7 = puStack_90;
  pcVar8 = *(code **)(local_98 + 0x20);
  (*pcVar8)(unaff_x20 + lVar1,lVar10,puStack_90);
  lVar1 = _TtC7Wallper18ApplicationManager::_message;
  local_70 = (undefined *)0x0;
  puStack_68 = (undefined *)0x0;
  puVar3 = &DAT_100549db0;
  FUN_100002f94(&DAT_100549db0,&DAT_100419ed0);
  puVar2 = local_88;
  Combine::Published::init(local_88,puVar3,puVar3);
  puVar5 = puStack_78;
  pcVar9 = *(code **)(local_80 + 0x20);
  (*pcVar9)(unaff_x20 + lVar1,puVar2,puStack_78);
  lVar1 = _TtC7Wallper18ApplicationManager::_isLoaded;
  local_70 = (undefined *)((ulong)local_70 & 0xffffffffffffff00);
  Combine::Published::init(lVar10,puVar3,puVar4);
  (*pcVar8)(unaff_x20 + lVar1,lVar10,puVar7);
  lVar1 = _TtC7Wallper18ApplicationManager::_hasUpdate;
  local_70 = (undefined *)((ulong)local_70 & 0xffffffffffffff00);
  Combine::Published::init(lVar10,puVar3,puVar4);
  (*pcVar8)(unaff_x20 + lVar1,lVar10,puVar7);
  lVar1 = _TtC7Wallper18ApplicationManager::_releaseNotes;
  local_70 = (undefined *)0x0;
  puStack_68 = (undefined *)0x0;
  Combine::Published::init(puVar2,puVar3,puVar3);
  (*pcVar9)(unaff_x20 + lVar1,puVar2,puVar5);
  *(undefined8 *)(unaff_x20 + _TtC7Wallper18ApplicationManager::backgroundCheckTask) = 0;
  return;
}

