// rea decompile_all
// name: FUN_10025f020
// address: 0x10025f020
// body: available
// range: 0x10025f020-0x10025f1ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_10025f020(undefined *param_1)

{
  Calendar CVar1;
  Date DVar2;
  Date DVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long lVar4;
  long lVar5;
  TimeStyle time;
  long lVar6;
  code *pcVar7;
  DateStyle date;
  long lVar8;
  long lVar9;
  DateStyle DVar10;
  String SVar11;
  undefined *local_80;
  undefined *local_78;
  long local_70;
  undefined *puStack_68;
  
  local_80 = param_1;
  puStack_68 = (undefined *)Foundation::Date::FormatStyle::TimeStyle::typeMetadataAccessor();
  local_70 = *(long *)(puStack_68 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_70 + 0x40));
  time.unknown = (undefined *)((long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_78 = (undefined *)Foundation::Date::FormatStyle::DateStyle::typeMetadataAccessor();
  lVar4 = *(long *)(local_78 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar4 + 0x40));
  date.unknown = time.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  CVar1 = Foundation::Calendar::typeMetadataAccessor();
  lVar5 = *(long *)(CVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar5 + 0x40));
  lVar9 = (long)date.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar6 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar6 + 0x40));
  DVar10.unknown = (undefined *)(lVar9 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = (long)DVar10.unknown - extraout_x12;
  DVar3 = Foundation::Date::init();
  Foundation::Calendar::get_current((Calendar)DVar3.unknown);
  DVar3.unknown = local_80;
  FUN_10025f908(lVar8,DVar10.unknown,lVar9);
  (**(code **)(lVar5 + 8))(lVar9,CVar1.unknown);
  pcVar7 = *(code **)(lVar6 + 8);
  (*pcVar7)(DVar10.unknown,DVar2.unknown);
  DVar10 = Foundation::Date::FormatStyle::DateStyle::get_omitted(DVar10);
  Foundation::Date::FormatStyle::TimeStyle::get_shortened((TimeStyle)DVar10.unknown);
  SVar11 = Foundation::Date::formatted(date,time,DVar3);
  (**(code **)(local_70 + 8))(time.unknown,puStack_68);
  (**(code **)(lVar4 + 8))(date.unknown,local_78);
  (*pcVar7)(lVar8,DVar2.unknown);
  return SVar11;
}

