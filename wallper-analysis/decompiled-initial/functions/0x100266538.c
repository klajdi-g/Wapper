// rea decompile_all
// name: FUN_100266538
// address: 0x100266538
// body: available
// range: 0x100266538-0x10026675f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100266538(Date param_1,undefined8 param_2)

{
  undefined *puVar1;
  DateComponents DVar2;
  Component CVar3;
  DateComponents DVar4;
  undefined *puVar5;
  undefined7 extraout_var;
  DateComponents DVar7;
  Date DVar8;
  uint uVar9;
  Calendar CVar10;
  long extraout_x8;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long lVar6;
  
  DVar4 = Foundation::DateComponents::typeMetadataAccessor();
  lVar15 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  puVar5 = &DAT_1005580d8;
  FUN_100002f94(&DAT_1005580d8,&DAT_10042c4b8);
  CVar3 = Foundation::Calendar::Component::typeMetadataAccessor();
  lVar6 = CONCAT71(extraout_var,CVar3.value);
  lVar13 = *(long *)(lVar6 + -8);
  lVar16 = *(long *)(lVar13 + 0x48);
  uVar11 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar12 = uVar11 + 0x20 & (uVar11 ^ 0xffffffffffffffff);
  _swift_allocObject(puVar5,uVar12 + lVar16 * 2,uVar11 | 7);
  *(undefined8 *)(puVar5 + 0x18) = 4;
  *(undefined8 *)(puVar5 + 0x10) = 2;
  puVar1 = puVar5 + uVar12;
  pcVar14 = *(code **)(lVar13 + 0x68);
  (*pcVar14)(puVar1,*(undefined4 *)
                     PTR___enum_case_for_Foundation_Calendar_Component_hour_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100520cc0
             ,lVar6);
  (*pcVar14)(puVar1 + lVar16,
             *(undefined4 *)
              PTR___enum_case_for_Foundation_Calendar_Component_minute_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100520cd8
             ,lVar6);
  DVar7.unknown = puVar5;
  FUN_100266290();
  _swift_setDeallocating(puVar5);
  _swift_arrayDestroy(puVar1,2,lVar6);
  CVar10.unknown = (undefined *)0x7;
  _swift_deallocClassInstance(puVar5,0x20);
  DVar8.unknown = param_1.unknown;
  Foundation::Calendar::dateComponents((Set<Component>)DVar7.unknown,param_1,CVar10);
  uVar9 = (uint)DVar8.unknown;
  _swift_bridgeObjectRelease();
  Foundation::DateComponents::_get_hour(DVar7);
  DVar2.unknown = (undefined *)0x0;
  if ((uVar9 & 0xff) != 1) {
    DVar2.unknown = DVar7.unknown;
  }
  Foundation::DateComponents::_get_minute(DVar7);
  CVar10 = Foundation::Calendar::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar10.unknown + -8) + 8))(param_2,CVar10.unknown);
  DVar8 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar8.unknown + -8) + 8))(param_1.unknown,DVar8.unknown);
  (**(code **)(lVar15 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),DVar4.unknown);
  lVar6 = (long)DVar2.unknown * 0x3c;
  if (SUB168(SEXT816((long)DVar2.unknown) * SEXT816(0x3c),8) != lVar6 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x10026675c);
    (*pcVar14)();
  }
  puVar5 = (undefined *)0x0;
  if ((uVar9 & 0xff) != 1) {
    puVar5 = DVar7.unknown;
  }
  if (!SCARRY8(lVar6,(long)puVar5)) {
    lVar13 = (long)(puVar5 + lVar6) % 0x5a0;
    lVar6 = lVar13 + 0x5a0;
    if (-1 < lVar13) {
      lVar6 = lVar13;
    }
    return lVar6;
  }
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x100266760);
  (*pcVar14)();
}

