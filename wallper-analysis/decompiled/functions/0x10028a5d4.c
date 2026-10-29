// rea decompile_all
// name: FUN_10028a5d4
// address: 0x10028a5d4
// body: available
// range: 0x10028a5d4-0x10028ae03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10028ae00 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10028a5d4(void *param_1,ulong param_2,long param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  __DataStorage _Var3;
  __DataStorage _Var4;
  __DataStorage _Var5;
  __DataStorage _Var6;
  undefined1 auVar7 [16];
  code *pcVar8;
  bool bVar9;
  __DataStorage *p_Var10;
  __DataStorage *p_Var11;
  __int64 _Var12;
  __DataStorage *p_Var13;
  __DataStorage *p_Var14;
  char *pcVar15;
  UnsafeBufferPointer<__int8> UVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  uint uVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  char *pcVar25;
  ulong uVar26;
  long lVar27;
  void *pvVar28;
  String SVar29;
  String SVar30;
  tuple2_conflict tVar31;
  undefined *local_f0;
  __DataStorage *local_e0;
  void *pvStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  __DataStorage *local_a8;
  void *pvStack_a0;
  __DataStorage local_98 [24];
  undefined8 local_80;
  long local_70;
  void *pvVar19;
  
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  if (!SCARRY8(param_3,8)) {
    lVar21 = (long)param_1 >> 0x20;
    local_f0 = PTR___swiftEmptyArrayStorage_100524190;
    uVar24 = param_2 >> 0x30 & 0xff;
    p_Var10 = (__DataStorage *)((ulong)param_1 >> 0x30);
    do {
      pvVar28 = (void *)(param_3 + 8);
      if (param_4 < (long)pvVar28) goto LAB_10028ad20;
      uVar23 = (uint)(param_2 >> 0x3e);
      if (uVar23 < 2) {
        if (uVar23 != 0) {
          if ((param_3 < (int)param_1) || (lVar21 <= param_3)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10028ad78);
            (*pcVar8)();
          }
          p_Var11 = p_Var10;
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var10);
          if (p_Var11 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10028ade4);
            (*pcVar8)();
          }
          p_Var14 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var11);
          if (SBORROW8(param_3,(long)p_Var14)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10028ad84);
            (*pcVar8)();
          }
          lVar27 = param_3 + 1;
          if (lVar21 <= lVar27) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10028ad90);
            (*pcVar8)();
          }
          _Var3 = p_Var11[param_3 - (long)p_Var14];
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var14);
          if (p_Var14 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10028adec);
            (*pcVar8)();
          }
          p_Var11 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var14);
          if (SBORROW8(lVar27,(long)p_Var11)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10028ad9c);
            (*pcVar8)();
          }
          lVar22 = param_3 + 2;
          if (lVar21 <= lVar22) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10028ada4);
            (*pcVar8)();
          }
          _Var4 = p_Var14[lVar27 - (long)p_Var11];
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var11);
          if (p_Var11 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10028adf0);
            (*pcVar8)();
          }
          p_Var14 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var11);
          if (SBORROW8(lVar22,(long)p_Var14)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10028adac);
            (*pcVar8)();
          }
          lVar27 = param_3 + 3;
          if (lVar21 <= lVar27) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10028adb4);
            (*pcVar8)();
          }
          _Var5 = p_Var11[lVar22 - (long)p_Var14];
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var14);
          if (p_Var14 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10028adf8);
            (*pcVar8)();
          }
          _Var12 = Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var14);
          lVar22 = lVar27 - _Var12;
          if (SBORROW8(lVar27,_Var12)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10028adbc);
            (*pcVar8)();
          }
          goto LAB_10028a9b0;
        }
        if ((long)uVar24 <= param_3) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10028ad70);
          (*pcVar8)();
        }
        local_98[0] = SUB81(param_1,0);
        local_98[1] = SUB81((ulong)param_1 >> 8,0);
        local_98[2] = SUB81((ulong)param_1 >> 0x10,0);
        local_98[3] = SUB81((ulong)param_1 >> 0x18,0);
        local_98[4] = SUB81((ulong)param_1 >> 0x20,0);
        local_98[5] = SUB81((ulong)param_1 >> 0x28,0);
        local_98[6] = SUB81((ulong)param_1 >> 0x30,0);
        local_98[7] = SUB81((ulong)param_1 >> 0x38,0);
        local_98[8] = SUB81(param_2,0);
        local_98[9] = SUB81(param_2 >> 8,0);
        local_98[10] = SUB81(param_2 >> 0x10,0);
        local_98[0xb] = SUB81(param_2 >> 0x18,0);
        local_98[0xc] = SUB81(param_2 >> 0x20,0);
        local_98[0xd] = SUB81(param_2 >> 0x28,0);
        if ((long)uVar24 <= param_3 + 1) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10028ad80);
          (*pcVar8)();
        }
        _Var3 = local_98[param_3];
        if ((long)uVar24 <= param_3 + 2) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10028ad88);
          (*pcVar8)();
        }
        _Var4 = local_98[param_3 + 1];
        if ((long)uVar24 <= param_3 + 3) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10028ad94);
          (*pcVar8)();
        }
        _Var5 = local_98[param_3 + 2];
        _Var6 = local_98[param_3 + 3];
      }
      else {
        if (uVar23 != 2) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10028ade0);
          (*pcVar8)();
        }
        if (param_3 < *(long *)((long)param_1 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10028ad74);
          (*pcVar8)();
        }
        if (*(long *)((long)param_1 + 0x18) <= param_3) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10028ad7c);
          (*pcVar8)();
        }
        p_Var11 = p_Var10;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var10);
        if (p_Var11 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10028ade8);
          (*pcVar8)();
        }
        p_Var14 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var11);
        if (SBORROW8(param_3,(long)p_Var14)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10028ad8c);
          (*pcVar8)();
        }
        lVar27 = param_3 + 1;
        if (lVar27 < *(long *)((long)param_1 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10028ad98);
          (*pcVar8)();
        }
        if (*(long *)((long)param_1 + 0x18) <= lVar27) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10028ada0);
          (*pcVar8)();
        }
        _Var3 = p_Var11[param_3 - (long)p_Var14];
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var14);
        if (p_Var14 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10028adf4);
          (*pcVar8)();
        }
        p_Var11 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var14);
        if (SBORROW8(lVar27,(long)p_Var11)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10028ada8);
          (*pcVar8)();
        }
        lVar22 = param_3 + 2;
        if (lVar22 < *(long *)((long)param_1 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10028adb0);
          (*pcVar8)();
        }
        if (*(long *)((long)param_1 + 0x18) <= lVar22) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10028adb8);
          (*pcVar8)();
        }
        _Var4 = p_Var14[lVar27 - (long)p_Var11];
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var11);
        if (p_Var11 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10028adfc);
          (*pcVar8)();
        }
        p_Var14 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var11);
        if (SBORROW8(lVar22,(long)p_Var14)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10028adc0);
          (*pcVar8)();
        }
        lVar27 = param_3 + 3;
        if (lVar27 < *(long *)((long)param_1 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10028adc4);
          (*pcVar8)();
        }
        if (*(long *)((long)param_1 + 0x18) <= lVar27) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10028adc8);
          (*pcVar8)();
        }
        _Var5 = p_Var11[lVar22 - (long)p_Var14];
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var14);
        if (p_Var14 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10028ae00);
          (*pcVar8)();
        }
        _Var12 = Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var14);
        lVar22 = lVar27 - _Var12;
        if (SBORROW8(lVar27,_Var12)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10028adcc);
          (*pcVar8)();
        }
LAB_10028a9b0:
        _Var6 = p_Var14[lVar22];
      }
      p_Var11 = (__DataStorage *)(param_3 + 4);
      if ((long)pvVar28 < (long)p_Var11) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10028ad64);
        (*pcVar8)();
      }
      uVar26 = (ulong)(byte)_Var3 << 0x18 | (ulong)(byte)_Var4 << 0x10 | (ulong)(byte)_Var5 << 8 |
               (ulong)(byte)_Var6;
      pvVar19 = param_1;
      __Foundation_Data__Representation_subscript_getter____Swift_Range<Swift_Int>___>_Foundation_Data
                ();
      uVar23 = (uint)((ulong)pvVar28 >> 0x20);
      uVar20 = uVar23 >> 0x1e;
      if (uVar23 >> 0x1e < 2) {
        if (uVar20 == 0) {
          local_98[0] = SUB81(p_Var11,0);
          local_98[1] = SUB81((ulong)p_Var11 >> 8,0);
          local_98[2] = SUB81((ulong)p_Var11 >> 0x10,0);
          local_98[3] = SUB81((ulong)p_Var11 >> 0x18,0);
          local_98[4] = SUB81((ulong)p_Var11 >> 0x20,0);
          local_98[5] = SUB81((ulong)p_Var11 >> 0x28,0);
          local_98[6] = SUB81((ulong)p_Var11 >> 0x30,0);
          local_98[7] = SUB81((ulong)p_Var11 >> 0x38,0);
          local_98[8] = SUB81(pvVar28,0);
          local_98[9] = SUB81((ulong)pvVar28 >> 8,0);
          local_98[10] = SUB81((ulong)pvVar28 >> 0x10,0);
          local_98[0xb] = SUB81((ulong)pvVar28 >> 0x18,0);
          local_98[0xc] = SUB81((ulong)pvVar28 >> 0x20,0);
          SVar29.str = (char *)((ulong)pvVar28 >> 0x30 & 0xff);
          local_98[0xd] = SUB81((ulong)pvVar28 >> 0x28,0);
          SVar29.bridgeObject = pvVar19;
          tVar31 = Swift::String::_fromUTF8Repairing((UnsafeBufferPointer<__int8>)local_98,SVar29);
          pvVar19 = tVar31.result.bridgeObject;
          p_Var14 = tVar31.result.str;
          goto LAB_10028ac34;
        }
        lVar27 = (long)(int)p_Var11;
        pcVar25 = (char *)(((long)p_Var11 >> 0x20) - lVar27);
        if ((long)p_Var11 >> 0x20 < lVar27) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10028add0);
          (*pcVar8)();
        }
        p_Var13 = p_Var11;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)((ulong)pvVar28 & 0x3fffffffffffffff),p_Var11);
        if (p_Var13 != (__DataStorage *)0x0) {
          p_Var14 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)((ulong)pvVar28 & 0x3fffffffffffffff),p_Var13);
          if (SBORROW8(lVar27,(long)p_Var14)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10028addc);
            (*pcVar8)();
          }
          UVar16.unknown = p_Var13 + (lVar27 - (long)p_Var14);
          goto LAB_10028aae0;
        }
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)((ulong)pvVar28 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_10028ab1c:
        UVar16.unknown = (undefined *)0x0;
        pcVar15 = (char *)0x0;
LAB_10028ab24:
        SVar30.bridgeObject = pvVar19;
        SVar30.str = pcVar15;
        tVar31 = Swift::String::_fromUTF8Repairing(UVar16,SVar30);
        pvVar19 = tVar31.result.bridgeObject;
        p_Var14 = tVar31.result.str;
        if (pvVar19 != (void *)0x0) goto LAB_10028ac34;
        local_a8 = p_Var11;
        pvStack_a0 = pvVar28;
        FUN_10011a30c(p_Var11,pvVar28,tVar31._16_8_);
        puVar18 = &DAT_100559040;
        FUN_100002f94(&DAT_100559040,&BYTE_10042d800);
        puVar17 = &local_d0;
        _swift_dynamicCast(puVar17,&local_a8,PTR___type_metadata_for_Foundation_Data_100520ae0,
                           puVar18,6);
        if (((ulong)puVar17 & 1) == 0) {
          local_b0 = 0;
          uStack_c8 = 0;
          local_d0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          FUN_10028dfb8(&local_d0);
LAB_10028ac20:
          p_Var14 = p_Var11;
          pvVar19 = pvVar28;
          FUN_10028a534();
          goto LAB_10028ac34;
        }
        FUN_10013d430(&local_d0,local_98);
        FUN_100007bd0(local_98,local_80);
        bVar9 = Swift::_HasContiguousBytes::get__providesContiguousBytesNoCopy();
        if (!bVar9) {
          FUN_100043f24(local_98);
          goto LAB_10028ac20;
        }
        FUN_100007bd0(local_98,local_80);
        Swift::_HasContiguousBytes::_withUnsafeBytes();
        FUN_100093624(p_Var11,pvVar28);
        FUN_100043f24(local_98);
        p_Var14 = local_e0;
        pvVar19 = pvStack_d8;
      }
      else {
        if (uVar20 == 2) {
          lVar27 = *(long *)(p_Var11 + 0x10);
          lVar22 = *(long *)(p_Var11 + 0x18);
          UVar16.unknown = p_Var11;
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)((ulong)pvVar28 & 0x3fffffffffffffff),p_Var11);
          p_Var14 = (__DataStorage *)0x0;
          if ((__DataStorage *)UVar16.unknown != (__DataStorage *)0x0) {
            p_Var14 = (__DataStorage *)
                      Foundation::__DataStorage::get__offset
                                ((__DataStorage *)((ulong)pvVar28 & 0x3fffffffffffffff),
                                 (__DataStorage *)UVar16.unknown);
            if (SBORROW8(lVar27,(long)p_Var14)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10028add8);
              (*pcVar8)();
            }
            UVar16.unknown = UVar16.unknown + (lVar27 - (long)p_Var14);
          }
          pcVar25 = (char *)(lVar22 - lVar27);
          if (SBORROW8(lVar22,lVar27)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10028add4);
            (*pcVar8)();
          }
LAB_10028aae0:
          pcVar15 = (char *)Foundation::__DataStorage::get__length
                                      ((__DataStorage *)((ulong)pvVar28 & 0x3fffffffffffffff),
                                       p_Var14);
          if ((__DataStorage *)UVar16.unknown == (__DataStorage *)0x0) goto LAB_10028ab1c;
          if ((long)pcVar25 <= (long)pcVar15) {
            pcVar15 = pcVar25;
          }
          goto LAB_10028ab24;
        }
        local_98[8] = (__DataStorage)0x0;
        local_98[9] = (__DataStorage)0x0;
        local_98[10] = (__DataStorage)0x0;
        local_98[0xb] = (__DataStorage)0x0;
        local_98[0xc] = (__DataStorage)0x0;
        local_98[0xd] = (__DataStorage)0x0;
        local_98[0] = (__DataStorage)0x0;
        local_98[1] = (__DataStorage)0x0;
        local_98[2] = (__DataStorage)0x0;
        local_98[3] = (__DataStorage)0x0;
        local_98[4] = (__DataStorage)0x0;
        local_98[5] = (__DataStorage)0x0;
        local_98[6] = (__DataStorage)0x0;
        local_98[7] = (__DataStorage)0x0;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = pvVar19;
        tVar31 = Swift::String::_fromUTF8Repairing
                           ((UnsafeBufferPointer<__int8>)local_98,(String)(auVar7 << 0x40));
        pvVar19 = tVar31.result.bridgeObject;
        p_Var14 = tVar31.result.str;
LAB_10028ac34:
        FUN_100093624(p_Var11,pvVar28);
      }
      if ((uVar26 == 0) && (uVar26 = param_4 - param_3, SBORROW8(param_4,param_3))) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10028ad6c);
        (*pcVar8)();
      }
      if ((long)uVar26 < 8) {
LAB_10028ad18:
        _swift_bridgeObjectRelease(pvVar19);
LAB_10028ad20:
        if (*(long *)PTR____stack_chk_guard_100521138 == local_70) {
          return local_f0;
        }
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      lVar27 = param_3 + uVar26;
      if (SCARRY8(param_3,uVar26)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10028ad68);
        (*pcVar8)();
      }
      if (param_4 < lVar27) goto LAB_10028ad18;
      puVar18 = local_f0;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar18 & 1) == 0) {
        plVar1 = (long *)(local_f0 + 0x10);
        local_f0 = (undefined *)0x0;
        FUN_1001c4d20(0,*plVar1 + 1,1);
      }
      uVar2 = *(ulong *)(local_f0 + 0x10);
      if (*(ulong *)(local_f0 + 0x18) >> 1 <= uVar2) {
        puVar18 = (undefined *)(ulong)(1 < *(ulong *)(local_f0 + 0x18));
        FUN_1001c4d20(puVar18,uVar2 + 1,1,local_f0);
        local_f0 = puVar18;
      }
      *(ulong *)(local_f0 + 0x10) = uVar2 + 1;
      *(__DataStorage **)(local_f0 + uVar2 * 0x20 + 0x20) = p_Var14;
      *(void **)(local_f0 + uVar2 * 0x20 + 0x28) = pvVar19;
      *(long *)(local_f0 + uVar2 * 0x20 + 0x30) = param_3;
      *(ulong *)(local_f0 + uVar2 * 0x20 + 0x38) = uVar26;
      param_3 = lVar27;
    } while (!SCARRY8(lVar27,8));
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10028ad60);
  (*pcVar8)();
}

