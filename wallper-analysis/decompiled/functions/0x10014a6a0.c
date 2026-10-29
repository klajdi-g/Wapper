// rea decompile_all
// name: FUN_10014a6a0
// address: 0x10014a6a0
// body: available
// range: 0x10014a6a0-0x10014a967 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010014a7e4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10014a6a0(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined *puStack_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  puVar3 = &DAT_100554c58;
  FUN_100002f94(&DAT_100554c58,&DAT_100428128);
  local_a0 = *(long *)(puVar3 + -8);
  puStack_98 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100557e80;
  local_a8 = (long)&local_b0 - extraout_x8;
  FUN_100002f94(&DAT_100557e80,&DAT_10041cf60);
  local_b0 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = ((long)&local_b0 - extraout_x8) - extraout_x8_00;
  puVar4 = &DAT_100554c60;
  FUN_100002f94(&DAT_100554c60,&DAT_100428138);
  lVar11 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar9 - extraout_x8_01;
  puVar5 = &DAT_100554c68;
  FUN_100002f94(&DAT_100554c68,&DAT_100428140);
  lVar8 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = _TtC7Wallper14LicenseManager::_state;
  local_90 = 0;
  uStack_88 = 0;
  Combine::Published::init(lVar10 - extraout_x8_02,puVar5,&DAT_10052e788);
  (**(code **)(lVar8 + 0x20))(unaff_x20 + lVar6,lVar10 - extraout_x8_02,puVar5);
  lVar6 = _TtC7Wallper14LicenseManager::_currentLicense;
  uStack_6f = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_77 = 0;
  uStack_80 = 0;
  puVar5 = &DAT_100554b50;
  FUN_100002f94(&DAT_100554b50,&DAT_100427e48);
  Combine::Published::init(lVar10,puVar5,puVar5);
  (**(code **)(lVar11 + 0x20))(unaff_x20 + lVar6,lVar10,puVar4);
  lVar6 = _TtC7Wallper14LicenseManager::_hasLicense;
  puVar2 = PTR___type_metadata_for_Swift_Bool_100523b70;
  local_90 = local_90 & 0xffffffffffffff00;
  Combine::Published::init(lVar9,puVar5,PTR___type_metadata_for_Swift_Bool_100523b70);
  pcVar7 = *(code **)(local_b0 + 0x20);
  (*pcVar7)(unaff_x20 + lVar6,lVar9,puVar3);
  lVar6 = _TtC7Wallper14LicenseManager::_isBanned;
  local_90 = local_90 & 0xffffffffffffff00;
  Combine::Published::init(lVar9,puVar5,puVar2);
  (*pcVar7)(unaff_x20 + lVar6,lVar9,puVar3);
  lVar6 = _TtC7Wallper14LicenseManager::_trialLeft;
  local_90 = 0;
  uStack_88 = CONCAT71(uStack_88._1_7_,1);
  puVar4 = &DAT_100554b60;
  FUN_100002f94(&DAT_100554b60,&DAT_100427e50);
  lVar8 = local_a8;
  Combine::Published::init(local_a8,puVar4,puVar4);
  (**(code **)(local_a0 + 0x20))(unaff_x20 + lVar6,lVar8,puStack_98);
  lVar6 = _TtC7Wallper14LicenseManager::_isChecked;
  local_90 = local_90 & 0xffffffffffffff00;
  Combine::Published::init(lVar9,puVar4,puVar2);
  lVar6 = unaff_x20 + lVar6;
  (*pcVar7)(lVar6,lVar9,puVar3);
  plVar1 = (long *)(unaff_x20 + _TtC7Wallper14LicenseManager::hwid);
  FUN_100295970();
  *plVar1 = lVar6;
  plVar1[1] = lVar9;
  FUN_10014a968();
  return;
}

