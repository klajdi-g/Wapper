// rea decompile_all
// name: FUN_1002a9258
// address: 0x1002a9258
// body: available
// range: 0x1002a9258-0x1002a9a83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1002a9258(double param_1,double param_2,undefined *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  Date for;
  Component CVar2;
  SearchDirection SVar3;
  RepeatedTimePolicy RVar4;
  MatchingPolicy MVar5;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  Date DVar6;
  Calendar CVar7;
  __int64 _Var8;
  TimeZone TVar9;
  Calendar CVar10;
  Calendar in_x7;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar11;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  double dVar12;
  long lVar13;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long lVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_130 [8];
  undefined1 *local_128;
  long local_120;
  undefined *local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  Date local_f0;
  long local_e8;
  long lStack_e0;
  undefined *local_d8;
  long local_d0;
  long local_c8;
  undefined *puStack_c0;
  Date local_b8;
  undefined8 local_b0;
  
  local_b8.unknown = param_3;
  local_b0 = param_4;
  local_118 = (undefined *)Foundation::TimeZone::typeMetadataAccessor();
  local_120 = *(long *)(local_118 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_120 + 0x40));
  local_128 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  CVar2 = Foundation::Calendar::Component::typeMetadataAccessor();
  puStack_c0 = (undefined *)CONCAT71(extraout_var,CVar2.value);
  local_c8 = *(long *)(puStack_c0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c8 + 0x40));
  lVar14 = (long)(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar11 = (undefined *)(lVar14 - extraout_x12);
  local_d8 = puVar11;
  SVar3 = Foundation::Calendar::SearchDirection::typeMetadataAccessor();
  lStack_e0 = CONCAT71(extraout_var_00,SVar3.value);
  local_e8 = *(long *)(lStack_e0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e8 + 0x40));
  lVar21 = (long)puVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  RVar4 = Foundation::Calendar::RepeatedTimePolicy::typeMetadataAccessor();
  lVar13 = CONCAT71(extraout_var_01,RVar4.value);
  lVar17 = *(long *)(lVar13 + -8);
  local_110 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  lVar19 = lVar21 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  MVar5 = Foundation::Calendar::MatchingPolicy::typeMetadataAccessor();
  lVar14 = CONCAT71(extraout_var_02,MVar5.value);
  lVar16 = *(long *)(lVar14 + -8);
  local_108 = lVar14;
  local_100 = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  lVar20 = lVar19 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  puVar11 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar11 + -8) + 0x40));
  lVar15 = lVar20 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  DVar6 = Foundation::Date::typeMetadataAccessor();
  local_f8 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f8 + 0x40));
  local_f0.unknown =
       (undefined *)((lVar15 - extraout_x12_00) - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar16 + 0x68))
            (lVar20,*(undefined4 *)
                     PTR___enum_case_for_Foundation_Calendar_MatchingPolicy_nextTime_Foundation_Calendar_MatchingPolicy_Type___>_Foundation_Calendar_MatchingPolicy_100520c48
             ,lVar14);
  (**(code **)(lVar17 + 0x68))
            (lVar19,*(undefined4 *)
                     PTR___enum_case_for_Foundation_Calendar_RepeatedTimePolicy_first_Foundation_Calendar_RepeatedTimePolicy_Type___>_Foundation_Calendar_RepeatedTimePolicy_100520c70
             ,lVar13);
  lVar16 = lStack_e0;
  lVar14 = local_e8;
  (**(code **)(local_e8 + 0x68))
            (lVar21,*(undefined4 *)
                     PTR___enum_case_for_Foundation_Calendar_SearchDirection_forward_Foundation_Calendar_SearchDirection_Type___>_Foundation_Calendar_SearchDirection_100520c60
             ,lStack_e0);
  Foundation::Calendar::_date
            (0xc,0,0,local_b8,(MatchingPolicy)(__int8)lVar20,(RepeatedTimePolicy)(__int8)lVar19,
             (SearchDirection)(__int8)lVar21,in_x7);
  (**(code **)(lVar14 + 8))(lVar21,lVar16);
  (**(code **)(local_110 + 8))(lVar19,lVar13);
  lVar14 = local_f8;
  (**(code **)(local_100 + 8))(lVar20,local_108);
  CVar10.unknown = &DAT_10041d870;
  FUN_100007e1c(lVar15 - extraout_x12_00,lVar15,&DAT_10054b950);
  pcVar18 = *(code **)(lVar14 + 0x30);
  lVar16 = lVar15;
  (*pcVar18)(lVar15,1,DVar6.unknown);
  for.unknown = local_f0.unknown;
  if ((int)lVar16 == 1) {
    (**(code **)(lVar14 + 0x10))(local_f0.unknown,local_b8.unknown,DVar6.unknown);
    lVar16 = lVar15;
    (*pcVar18)(lVar15,1,DVar6.unknown);
    if ((int)lVar16 != 1) {
      FUN_1002a9a84(lVar15);
    }
  }
  else {
    (**(code **)(lVar14 + 0x20))(local_f0.unknown,lVar15,DVar6.unknown);
  }
  TVar9.unknown = puStack_c0;
  lVar13 = local_c8;
  CVar7.unknown = local_d8;
  pcVar18 = *(code **)(local_c8 + 0x68);
  (*pcVar18)(local_d8,*(undefined4 *)
                       PTR___enum_case_for_Foundation_Calendar_Component_day_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100520cb8
             ,puStack_c0);
  lVar16 = local_d0;
  (*pcVar18)(local_d0,*(undefined4 *)
                       PTR___enum_case_for_Foundation_Calendar_Component_year_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100520cc8
             ,TVar9.unknown);
  puVar11 = CVar7.unknown;
  lVar15 = lVar16;
  Foundation::Calendar::_ordinality
            ((Component)(__int8)CVar7.unknown,(Component)(__int8)lVar16,for,CVar10);
  pcVar18 = *(code **)(lVar13 + 8);
  (*pcVar18)(lVar16,TVar9.unknown);
  (*pcVar18)();
  if (((uint)lVar15 & 0xff) != 1) {
    if (SBORROW8((long)puVar11,1)) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x1002a9a6c);
      (*pcVar18)();
    }
    dVar12 = 0.01721420632103996;
    dVar26 = (double)(long)(puVar11 + -1) * 0.01721420632103996;
    dVar25 = dVar26;
    ___sincos_stret();
    dVar22 = dVar26 + dVar26;
    dVar23 = dVar12;
    ___sincos_stret();
    dVar24 = dVar22 * 0.000907;
    dVar28 = dVar24 + dVar25 * 0.070257 + dVar12 * -0.399912 + 0.006918 + dVar23 * -0.006758;
    dVar26 = dVar26 * 3.0;
    ___sincos_stret();
    dVar27 = dVar26 * 0.00148 + dVar28 + dVar24 * -0.002697;
    dVar28 = (param_1 * 3.141592653589793) / 180.0;
    dVar26 = dVar28;
    _cos();
    dVar24 = dVar27;
    _cos();
    dVar26 = -0.01453808050249674 / (dVar26 * dVar24);
    _tan();
    _tan();
    if (ABS(dVar26 - dVar28 * dVar27) <= 1.0) {
      dVar26 = dVar26 - dVar28 * dVar27;
      dVar24 = (dVar12 * 0.001868 + 7.5e-05 + dVar25 * -0.032077 + dVar23 * -0.014615 +
               dVar22 * -0.040849) * 229.18;
      _acos();
      puVar1 = local_128;
      dVar26 = (dVar26 * 180.0) / 3.141592653589793;
      Foundation::Calendar::get_timeZone(CVar7);
      _Var8 = Foundation::TimeZone::secondsFromGMT(for,TVar9);
      (**(code **)(local_120 + 8))(puVar1,local_118);
      dVar25 = (double)(long)((double)_Var8 / 60.0 + ((720.0 - (param_2 + dVar26) * 4.0) - dVar24));
      if (0x7fefffffffffffff < (ulong)ABS(dVar25)) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x1002a9a70);
        (*pcVar18)();
      }
      if (dVar25 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x1002a9a74);
        (*pcVar18)();
      }
      if (9.223372036854776e+18 <= dVar25) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x1002a9a78);
        (*pcVar18)();
      }
      lVar13 = (long)dVar25 % 0x5a0;
      lVar16 = lVar13 + 0x5a0;
      if (-1 < lVar13) {
        lVar16 = lVar13;
      }
      dVar25 = (double)(long)((double)_Var8 / 60.0 + ((720.0 - (param_2 - dVar26) * 4.0) - dVar24));
      (**(code **)(lVar14 + 8))(for.unknown,DVar6.unknown);
      if ((ulong)ABS(dVar25) < 0x7ff0000000000000) {
        if (dVar25 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x1002a9a80);
          (*pcVar18)();
        }
        if (dVar25 < 9.223372036854776e+18) {
          return lVar16;
        }
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x1002a9a84);
        (*pcVar18)();
      }
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x1002a9a7c);
      (*pcVar18)();
    }
  }
  (**(code **)(lVar14 + 8))(for.unknown,DVar6.unknown);
  return 0;
}

