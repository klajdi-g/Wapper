// rea decompile_all
// name: FUN_10031b698
// address: 0x10031b698
// body: available
// range: 0x10031b698-0x10031b94f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_10031b698(void)

{
  Component CVar1;
  Locale LVar2;
  LocalizationValue LVar3;
  Date DVar4;
  undefined7 extraout_var;
  Calendar CVar5;
  Calendar CVar6;
  __int64 _Var7;
  char *pcVar8;
  LocalizationValue LVar9;
  void *pvVar10;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar11;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar12;
  long lVar13;
  Date from;
  long lVar14;
  long lVar15;
  String SVar16;
  LocalizationValue local_70;
  long local_68;
  
  LVar2 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  lVar12 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_68 = lVar12;
  LVar3 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  puVar11 = (undefined *)(lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_70.unknown = puVar11;
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar15 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  from.unknown = puVar11 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  CVar1 = Foundation::Calendar::Component::typeMetadataAccessor();
  puVar11 = (undefined *)CONCAT71(extraout_var,CVar1.value);
  lVar12 = *(long *)(puVar11 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  lVar14 = (long)from.unknown - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  CVar5 = Foundation::Calendar::typeMetadataAccessor();
  lVar13 = *(long *)(CVar5.unknown + -8);
  CVar6 = CVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  Foundation::Calendar::get_current(CVar6);
  CVar6.unknown = puVar11;
  (**(code **)(lVar12 + 0x68))
            (lVar14,*(undefined4 *)
                     PTR___enum_case_for_Foundation_Calendar_Component_hour_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100520cc0
            );
  Foundation::Date::init();
  _Var7 = Foundation::Calendar::component((Component)(__int8)lVar14,from,CVar6);
  (**(code **)(lVar15 + 8))(from.unknown,DVar4.unknown);
  (**(code **)(lVar12 + 8))(lVar14,puVar11);
  (**(code **)(lVar13 + 8))(lVar14 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0),CVar5.unknown);
  LVar3.unknown = local_70.unknown;
  if (_Var7 - 5U < 7) {
    pcVar8 = (char *)0x726f4d20646f6f47;
    pvVar10 = (void *)0xec000000676e696e;
  }
  else if (_Var7 - 0xcU < 5) {
    pcVar8 = (char *)0x74664120646f6f47;
    pvVar10 = (void *)0xee006e6f6f6e7265;
  }
  else if (_Var7 - 0x11U < 4) {
    pcVar8 = (char *)0x65764520646f6f47;
    pvVar10 = (void *)0xec000000676e696e;
  }
  else {
    pcVar8 = (char *)0x67694e20646f6f47;
    pvVar10 = (void *)0xea00000000007468;
  }
  SVar16.bridgeObject = pvVar10;
  SVar16.str = pcVar8;
  LVar9 = LocalizationValue::_init(SVar16);
  Foundation::Locale::get_current((Locale)LVar9.unknown);
  SVar16 = (extension_Foundation)::Swift::String::_init(LVar3,(Locale)0x0);
  return SVar16;
}

