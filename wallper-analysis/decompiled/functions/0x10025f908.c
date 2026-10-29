// rea decompile_all
// name: FUN_10025f908
// address: 0x10025f908
// body: available
// range: 0x10025f908-0x10025fc5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10025f908(undefined8 param_1,undefined *param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  SearchDirection SVar2;
  RepeatedTimePolicy RVar3;
  MatchingPolicy MVar4;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined *puVar7;
  Date DVar8;
  Calendar CVar9;
  Calendar in_x7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar10;
  long extraout_x12;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_d0 [8];
  undefined1 *local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long local_98;
  long lStack_90;
  Date local_88;
  undefined *local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long lVar5;
  long lVar6;
  
  local_88.unknown = param_2;
  local_70 = param_1;
  local_68 = param_3;
  local_80 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_78 = *(long *)(local_80 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_78 + 0x40));
  local_c8 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  SVar2 = Foundation::Calendar::SearchDirection::typeMetadataAccessor();
  lStack_90 = CONCAT71(extraout_var,SVar2.value);
  local_98 = *(long *)(lStack_90 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_98 + 0x40));
  lVar16 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  RVar3 = Foundation::Calendar::RepeatedTimePolicy::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var_00,RVar3.value);
  lVar15 = *(long *)(lVar5 + -8);
  local_b8 = lVar15;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  lVar13 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  MVar4 = Foundation::Calendar::MatchingPolicy::typeMetadataAccessor();
  lVar6 = CONCAT71(extraout_var_01,MVar4.value);
  lVar12 = *(long *)(lVar6 + -8);
  local_b0 = lVar6;
  lStack_a8 = lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  lVar14 = lVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar10 = lVar14 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_a0 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_c0 = param_4;
  (**(code **)(lVar12 + 0x68))
            (lVar14,*(undefined4 *)
                     PTR___enum_case_for_Foundation_Calendar_MatchingPolicy_nextTime_Foundation_Calendar_MatchingPolicy_Type___>_Foundation_Calendar_MatchingPolicy_100520c48
             ,lVar6);
  (**(code **)(lVar15 + 0x68))
            (lVar13,*(undefined4 *)
                     PTR___enum_case_for_Foundation_Calendar_RepeatedTimePolicy_first_Foundation_Calendar_RepeatedTimePolicy_Type___>_Foundation_Calendar_RepeatedTimePolicy_100520c70
             ,lVar5);
  lVar15 = lStack_90;
  lVar12 = local_98;
  (**(code **)(local_98 + 0x68))
            (lVar16,*(undefined4 *)
                     PTR___enum_case_for_Foundation_Calendar_SearchDirection_forward_Foundation_Calendar_SearchDirection_Type___>_Foundation_Calendar_SearchDirection_100520c60
             ,lStack_90);
  DVar8.unknown = local_88.unknown;
  Foundation::Calendar::_date
            (param_4 / 0x3c,param_4 % 0x3c,0,local_88,(MatchingPolicy)(__int8)lVar14,
             (RepeatedTimePolicy)(__int8)lVar13,(SearchDirection)(__int8)lVar16,in_x7);
  lVar6 = local_a0;
  (**(code **)(lVar12 + 8))(lVar16,lVar15);
  puVar7 = local_80;
  (**(code **)(local_b8 + 8))(lVar13,lVar5);
  lVar12 = local_78;
  (**(code **)(lStack_a8 + 8))(lVar14,local_b0);
  FUN_100007e1c(lVar10 - extraout_x12,lVar6,&DAT_10054b950,&DAT_10041d870);
  pcVar11 = *(code **)(lVar12 + 0x30);
  CVar9.unknown = (undefined *)0x1;
  lVar15 = lVar6;
  (*pcVar11)(lVar6,1,puVar7);
  puVar1 = local_c8;
  if ((int)lVar15 == 1) {
    DVar8 = Foundation::Calendar::startOfDay(DVar8,CVar9);
    if (SUB168(SEXT816(local_c0) * SEXT816(0x3c),8) != local_c0 * 0x3c >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10025fc60);
      (*pcVar11)();
    }
    Foundation::Date::addingTimeInterval((double)(local_c0 * 0x3c),DVar8);
    (**(code **)(lVar12 + 8))(puVar1,puVar7);
    lVar12 = lVar6;
    (*pcVar11)(lVar6,1,puVar7);
    if ((int)lVar12 != 1) {
      FUN_10002a29c(lVar6,&DAT_10054b950,&DAT_10041d870);
    }
  }
  else {
    (**(code **)(lVar12 + 0x20))(local_70,lVar6,puVar7);
  }
  return;
}

