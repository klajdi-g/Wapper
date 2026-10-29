// rea decompile_all
// name: FUN_100406f18
// address: 0x100406f18
// body: available
// range: 0x100406f18-0x10040720b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100406f18(undefined8 param_1,byte param_2)

{
  Component CVar1;
  undefined7 extraout_var;
  Date DVar3;
  Calendar CVar4;
  undefined *puVar5;
  Set<Component> SVar6;
  __int64 value;
  Calendar in_x4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  Date from;
  long lVar12;
  DateComponents from_00;
  long lVar13;
  undefined1 auStack_90 [8];
  undefined *local_88;
  long local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined8 local_68;
  long lVar2;
  
  local_68 = param_1;
  puStack_78 = (undefined *)Foundation::DateComponents::typeMetadataAccessor();
  local_80 = *(long *)(puStack_78 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_80 + 0x40));
  from_00.unknown = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  CVar1 = Foundation::Calendar::Component::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,CVar1.value);
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  lVar13 = (long)from_00.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  from.unknown = (undefined *)(lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  CVar4 = Foundation::Calendar::typeMetadataAccessor();
  lVar12 = *(long *)(CVar4.unknown + -8);
  local_70 = CVar4.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  lVar9 = (long)from.unknown - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  Foundation::Calendar::get_current(CVar4);
  Foundation::Date::init();
  if (param_2 < 2) {
    if (param_2 == 0) {
      (**(code **)(lVar10 + 8))(from.unknown,DVar3.unknown);
      (**(code **)(lVar12 + 8))(lVar9,local_70);
      (**(code **)(lVar10 + 0x38))(local_68,1,1,DVar3.unknown);
      return;
    }
    (**(code **)(lVar11 + 0x68))
              (lVar13,*(undefined4 *)
                       PTR___enum_case_for_Foundation_Calendar_Component_day_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100520cb8
               ,lVar2);
    value = -7;
  }
  else {
    if (param_2 != 2) {
      puVar5 = &DAT_1005580d8;
      FUN_100002f94(&DAT_1005580d8,&DAT_10042c4b8);
      uVar8 = (ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
              ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff);
      local_88 = DVar3.unknown;
      _swift_allocObject();
      *(undefined8 *)(puVar5 + 0x18) = 2;
      *(undefined8 *)(puVar5 + 0x10) = 1;
      (**(code **)(lVar11 + 0x68))
                (puVar5 + uVar8,
                 *(undefined4 *)
                  PTR___enum_case_for_Foundation_Calendar_Component_year_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100520cc8
                 ,lVar2);
      SVar6.unknown = puVar5;
      FUN_100266290();
      _swift_setDeallocating(puVar5);
      (**(code **)(lVar11 + 8))(puVar5 + uVar8,lVar2);
      CVar4.unknown = (undefined *)0x7;
      _swift_deallocClassInstance(puVar5,0x20);
      DVar3.unknown = from.unknown;
      Foundation::Calendar::dateComponents(SVar6,from,CVar4);
      _swift_bridgeObjectRelease(SVar6.unknown);
      Foundation::Calendar::_date(from_00,(Calendar)DVar3.unknown);
      (**(code **)(local_80 + 8))(from_00.unknown,puStack_78);
      pcVar7 = *(code **)(lVar10 + 8);
      DVar3.unknown = local_88;
      goto LAB_1004071d8;
    }
    (**(code **)(lVar11 + 0x68))
              (lVar13,*(undefined4 *)
                       PTR___enum_case_for_Foundation_Calendar_Component_month_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100520cd0
               ,lVar2);
    value = -1;
  }
  Foundation::Calendar::_date((Component)(__int8)lVar13,value,from,false,in_x4);
  (**(code **)(lVar11 + 8))(lVar13,lVar2);
  pcVar7 = *(code **)(lVar10 + 8);
LAB_1004071d8:
  (*pcVar7)(from.unknown,DVar3.unknown);
  (**(code **)(lVar12 + 8))(lVar9,local_70);
  return;
}

