// rea decompile_all
// name: FUN_10014e244
// address: 0x10014e244
// body: available
// range: 0x10014e244-0x10014e373 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10014e370 to 0x100414810 _swift_deallocClassInstance (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10014e244(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  code *pcVar4;
  
  lVar1 = _TtC7Wallper14LicenseManager::_state;
  puVar2 = &DAT_100554c68;
  FUN_100002f94(&DAT_100554c68,&DAT_100428140);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC7Wallper14LicenseManager::_currentLicense;
  puVar2 = &DAT_100554c60;
  FUN_100002f94(&DAT_100554c60,&DAT_100428138);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC7Wallper14LicenseManager::_hasLicense;
  puVar2 = &DAT_100557e80;
  FUN_100002f94(&DAT_100557e80,&DAT_10041cf60);
  pcVar4 = *(code **)(*(long *)(puVar2 + -8) + 8);
  (*pcVar4)(unaff_x20 + lVar1,puVar2);
  (*pcVar4)(unaff_x20 + _TtC7Wallper14LicenseManager::_isBanned,puVar2);
  lVar1 = _TtC7Wallper14LicenseManager::_trialLeft;
  puVar3 = &DAT_100554c58;
  FUN_100002f94(&DAT_100554c58,&DAT_100428128);
  (**(code **)(*(long *)(puVar3 + -8) + 8))(unaff_x20 + lVar1,puVar3);
  (*pcVar4)(unaff_x20 + _TtC7Wallper14LicenseManager::_isChecked,puVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _TtC7Wallper14LicenseManager::hwid + 8));
  _swift_deallocClassInstance();
  return;
}

