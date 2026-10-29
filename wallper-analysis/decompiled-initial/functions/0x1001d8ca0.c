// rea decompile_all
// name: FUN_1001d8ca0
// address: 0x1001d8ca0
// body: available
// range: 0x1001d8ca0-0x1001d965b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d8ca0(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,Calendar param_6,undefined8 param_7,undefined8 param_8,
                  Calendar param_9)

{
  long *plVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  SearchDirection SVar8;
  RepeatedTimePolicy RVar9;
  MatchingPolicy MVar10;
  Component CVar11;
  bool bVar12;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  long lVar15;
  undefined7 extraout_var_02;
  Date DVar17;
  long lVar18;
  Date DVar19;
  long lVar20;
  Date DVar21;
  undefined *puVar22;
  undefined *puVar23;
  Calendar CVar24;
  Date DVar25;
  long lVar26;
  long extraout_x8;
  long lVar27;
  long lVar28;
  long extraout_x8_00;
  long lVar29;
  long lVar30;
  long extraout_x8_01;
  undefined *puVar31;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar32;
  long extraout_x8_04;
  long extraout_x8_05;
  code *pcVar33;
  code *pcVar34;
  long lVar35;
  long lVar36;
  undefined *puVar37;
  long lVar38;
  long lVar39;
  Date of;
  code *pcVar40;
  long lVar41;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  ulong uVar42;
  long unaff_x20;
  __int64 value;
  long lVar43;
  ulong uVar44;
  long lVar45;
  ulong uVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  undefined *puVar50;
  long lVar51;
  long alStack_1d0 [2];
  Date local_1c0;
  Date local_1b8;
  long local_1b0;
  long lVar13;
  long lVar14;
  long lVar16;
  
  local_1b8.unknown = param_2;
  SVar8 = Foundation::Calendar::SearchDirection::typeMetadataAccessor();
  lVar47 = CONCAT71(extraout_var,SVar8.value);
  lVar26 = *(long *)(lVar47 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar26 + 0x40));
  lVar27 = (long)alStack_1d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  RVar9 = Foundation::Calendar::RepeatedTimePolicy::typeMetadataAccessor();
  lVar13 = CONCAT71(extraout_var_00,RVar9.value);
  lVar28 = *(long *)(lVar13 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar28 + 0x40));
  lVar29 = lVar27 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  MVar10 = Foundation::Calendar::MatchingPolicy::typeMetadataAccessor();
  lVar14 = CONCAT71(extraout_var_01,MVar10.value);
  lVar30 = *(long *)(lVar14 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar30 + 0x40));
  puVar31 = (undefined *)(lVar29 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar15 = 0;
  FUN_1001d59ac();
  local_1b0 = *(long *)(lVar15 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1b0 + 0x40));
  lVar48 = (long)puVar31 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar51 = lVar48 - extraout_x12;
  CVar11 = Foundation::Calendar::Component::typeMetadataAccessor();
  lVar16 = CONCAT71(extraout_var_02,CVar11.value);
  lVar45 = *(long *)(lVar16 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar45 + 0x40));
  lVar32 = lVar51 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  puVar37 = &DAT_10054b950;
  CVar24.unknown = &DAT_10041d870;
  FUN_100002f94();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar37 + -8) + 0x40));
  lVar36 = lVar32 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar49 = (lVar36 - extraout_x12_00) - extraout_x12_01;
  DVar17 = Foundation::Date::typeMetadataAccessor();
  lVar43 = *(long *)(DVar17.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar43 + 0x40));
  puVar37 = (undefined *)(lVar49 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
  local_1c0.unknown = puVar37;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar38 = (long)puVar37 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar39 = lVar38 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100521118)();
  of.unknown = (undefined *)(lVar39 - extraout_x12_04);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = 0;
  FUN_10025ee04();
  if (1 < *(byte *)(unaff_x20 + *(int *)(lVar18 + 0x1c)) - 1) {
                    /* WARNING: Could not recover jumptable at 0x0001001d95f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar43 + 0x38))(param_1,1,1,DVar17.unknown);
    return;
  }
  alStack_1d0[1] = param_1;
  Foundation::Calendar::startOfDay(local_1b8,CVar24);
  value = 0;
  uVar3 = *(undefined4 *)
           PTR___enum_case_for_Foundation_Calendar_Component_day_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100520cb8
  ;
  pcVar40 = *(code **)(lVar45 + 0x68);
  uVar4 = *(undefined4 *)
           PTR___enum_case_for_Foundation_Calendar_MatchingPolicy_nextTime_Foundation_Calendar_MatchingPolicy_Type___>_Foundation_Calendar_MatchingPolicy_100520c48
  ;
  uVar5 = *(undefined4 *)
           PTR___enum_case_for_Foundation_Calendar_RepeatedTimePolicy_first_Foundation_Calendar_RepeatedTimePolicy_Type___>_Foundation_Calendar_RepeatedTimePolicy_100520c70
  ;
  uVar6 = *(undefined4 *)
           PTR___enum_case_for_Foundation_Calendar_SearchDirection_forward_Foundation_Calendar_SearchDirection_Type___>_Foundation_Calendar_SearchDirection_100520c60
  ;
  puVar37 = PTR___swiftEmptyArrayStorage_100524190;
  bVar12 = false;
  do {
    (*pcVar40)(lVar32,uVar3,lVar16);
    Foundation::Calendar::_date
              ((Component)(__int8)lVar32,value,(Date)(of.unknown + -extraout_x12_05),false,param_6);
    (**(code **)(lVar45 + 8))(lVar32,lVar16);
    pcVar33 = *(code **)(lVar43 + 0x30);
    lVar18 = lVar49;
    (*pcVar33)(lVar49,1,DVar17.unknown);
    if ((int)lVar18 == 1) {
      FUN_10002a29c(lVar49,&DAT_10054b950,&DAT_10041d870);
    }
    else {
      pcVar34 = *(code **)(lVar43 + 0x20);
      (*pcVar34)(of.unknown,lVar49,DVar17.unknown);
      DVar19.unknown = of.unknown;
      FUN_1001d6f78(of.unknown,param_3);
      lVar18 = *(long *)(DVar19.unknown + 0x10);
      if (lVar18 != 0) {
        puVar50 = DVar19.unknown +
                  ((ulong)*(byte *)(local_1b0 + 0x50) + 0x20 &
                  ((ulong)*(byte *)(local_1b0 + 0x50) ^ 0xffffffffffffffff));
        lVar35 = *(long *)(local_1b0 + 0x48);
        do {
          FUN_100029504(puVar50,lVar51,FUN_1001d59ac);
          FUN_100007e64(lVar51,lVar48,FUN_1001d59ac);
          plVar1 = (long *)(lVar48 + *(int *)(lVar15 + 0x1c));
          if ((char)plVar1[1] != '\x01') {
            lVar41 = *plVar1;
            (**(code **)(lVar30 + 0x68))(puVar31,uVar4,lVar14);
            (**(code **)(lVar28 + 0x68))(lVar29,uVar5,lVar13);
            (**(code **)(lVar26 + 0x68))(lVar27,uVar6,lVar47);
            param_6.unknown = puVar31;
            Foundation::Calendar::_date
                      (lVar41 / 0x3c,lVar41 % 0x3c,0,of,(MatchingPolicy)(__int8)puVar31,
                       (RepeatedTimePolicy)(__int8)lVar29,(SearchDirection)(__int8)lVar27,param_9);
            (**(code **)(lVar26 + 8))(lVar27,lVar47);
            (**(code **)(lVar28 + 8))(lVar29,lVar13);
            (**(code **)(lVar30 + 8))(puVar31,lVar14);
            FUN_100007e1c(lVar36 - extraout_x12_00,lVar36,&DAT_10054b950,&DAT_10041d870);
            CVar24.unknown = (undefined *)0x1;
            lVar20 = lVar36;
            (*pcVar33)(lVar36,1,DVar17.unknown);
            if ((int)lVar20 == 1) {
              DVar21 = Foundation::Calendar::startOfDay(of,CVar24);
              if (SUB168(SEXT816(lVar41) * SEXT816(0x3c),8) != lVar41 * 0x3c >> 0x3f) {
                    /* WARNING: Does not return */
                pcVar40 = (code *)SoftwareBreakpoint(1,0x1001d9658);
                (*pcVar40)();
              }
              Foundation::Date::addingTimeInterval((double)(lVar41 * 0x3c),DVar21);
              (**(code **)(lVar43 + 8))(lVar38,DVar17.unknown);
              lVar20 = lVar36;
              (*pcVar33)(lVar36,1,DVar17.unknown);
              if ((int)lVar20 != 1) {
                FUN_10002a29c(lVar36,&DAT_10054b950,&DAT_10041d870);
              }
            }
            else {
              (*pcVar34)(lVar39,lVar36,DVar17.unknown);
            }
            puVar22 = puVar37;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar23 = puVar37;
            if (((ulong)puVar22 & 1) == 0) {
              puVar23 = (undefined *)0x0;
              FUN_1001c447c(0,*(long *)(puVar37 + 0x10) + 1,1,puVar37);
            }
            uVar42 = *(ulong *)(puVar23 + 0x10);
            puVar37 = puVar23;
            if (*(ulong *)(puVar23 + 0x18) >> 1 <= uVar42) {
              puVar37 = (undefined *)(ulong)(1 < *(ulong *)(puVar23 + 0x18));
              FUN_1001c447c(puVar37,uVar42 + 1,1,puVar23);
            }
            *(ulong *)(puVar37 + 0x10) = uVar42 + 1;
            (*pcVar34)(puVar37 + *(long *)(lVar43 + 0x48) * uVar42 +
                                 ((ulong)*(byte *)(lVar43 + 0x50) + 0x20 &
                                 ((ulong)*(byte *)(lVar43 + 0x50) ^ 0xffffffffffffffff)),lVar39,
                       DVar17.unknown);
          }
          FUN_100029548(lVar48,FUN_1001d59ac);
          puVar50 = puVar50 + lVar35;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      _swift_bridgeObjectRelease(DVar19.unknown);
      (**(code **)(lVar43 + 8))(of.unknown,DVar17.unknown);
    }
    DVar21.unknown = local_1b8.unknown;
    DVar19.unknown = local_1c0.unknown;
    puVar50 = PTR___swiftEmptyArrayStorage_100524190;
    value = 1;
    bVar7 = !bVar12;
    bVar12 = true;
  } while (bVar7);
  uVar42 = *(ulong *)(puVar37 + 0x10);
  if (uVar42 != 0) {
    uVar46 = 0;
    do {
      if (*(ulong *)(puVar37 + 0x10) <= uVar46) {
                    /* WARNING: Does not return */
        pcVar40 = (code *)SoftwareBreakpoint(1,0x1001d965c);
        (*pcVar40)();
      }
      uVar44 = (ulong)*(byte *)(lVar43 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar43 + 0x50) ^ 0xffffffffffffffff);
      lVar47 = *(long *)(lVar43 + 0x48);
      DVar25 = DVar17;
      (**(code **)(lVar43 + 0x10))(DVar19.unknown,puVar37 + lVar47 * uVar46 + uVar44);
      bVar12 = Foundation::Date::>_infix(DVar19,DVar21,DVar25);
      if (bVar12) {
        puVar31 = puVar50;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar31 & 1) == 0) {
          FUN_1001c5e28(0,*(long *)(puVar50 + 0x10) + 1,1);
        }
        uVar2 = *(ulong *)(puVar50 + 0x10);
        if (*(ulong *)(puVar50 + 0x18) >> 1 <= uVar2) {
          FUN_1001c5e28(1 < *(ulong *)(puVar50 + 0x18),uVar2 + 1,1);
        }
        *(ulong *)(puVar50 + 0x10) = uVar2 + 1;
        (**(code **)(lVar43 + 0x20))
                  (puVar50 + uVar2 * lVar47 + uVar44,DVar19.unknown,DVar17.unknown);
      }
      else {
        (**(code **)(lVar43 + 8))(DVar19.unknown,DVar17.unknown);
      }
      uVar46 = uVar46 + 1;
    } while (uVar42 != uVar46);
  }
  FUN_1001c3418(alStack_1d0[1],puVar50);
  _swift_release(puVar50);
  (**(code **)(lVar43 + 8))(of.unknown + -extraout_x12_05,DVar17.unknown);
  _swift_bridgeObjectRelease(puVar37);
  return;
}

