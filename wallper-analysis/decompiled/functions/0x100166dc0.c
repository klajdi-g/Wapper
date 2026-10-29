// rea decompile_all
// name: FUN_100166dc0
// address: 0x100166dc0
// body: available
// range: 0x100166dc0-0x100167327 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100167324 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100166dc0(Data param_1,Data param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  __DataStorage *p_Var6;
  Range<__int64> RVar7;
  __DataStorage **pp_Var8;
  long lVar9;
  __DataStorage *p_Var10;
  __DataStorage *p_Var11;
  uint uVar12;
  long lVar13;
  __DataStorage *p_Var14;
  ulong uVar15;
  uint uVar16;
  long unaff_x20;
  long lVar17;
  __DataStorage *local_c8;
  __DataStorage local_b6 [4];
  undefined1 local_b2;
  undefined1 local_b1;
  undefined1 local_b0;
  undefined1 local_af;
  undefined1 local_ae;
  undefined1 local_ad;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined1 local_aa;
  undefined1 local_a9;
  __DataStorage *local_a0;
  ulong uStack_98;
  undefined *local_88;
  undefined *puStack_80;
  __DataStorage *local_78;
  __DataStorage *p_Stack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100521138;
  plVar1 = (long *)(unaff_x20 + _TtC7Wallper21MediaRemoteController::stdoutBuffer);
  _swift_beginAccess(plVar1,&local_a0,0x21,0);
  Foundation::Data::append(param_1,param_2);
  _swift_endAccess(&local_a0);
  lVar9 = *plVar1;
  lVar17 = plVar1[1];
  FUN_10011a30c(lVar9,lVar17);
  uVar5 = 10;
  lVar13 = lVar9;
  FUN_1001d6094(10,lVar9,lVar17);
  uVar12 = (uint)lVar13;
  FUN_100093624(lVar9,lVar17);
  puVar3 = PTR___type_metadata_for_Foundation_Data_100520ae0;
  puVar2 = 
  PTR___protocol_witness_table_for_Foundation_Data___Foundation_ContiguousBytes_in_Foundation_100520ad0
  ;
  do {
    while( true ) {
      if ((uVar12 & 0xff) == 1) {
        if (*(long *)PTR____stack_chk_guard_100521138 == local_68) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      _swift_beginAccess(plVar1,&local_a0,0x20,0);
      lVar9 = *plVar1;
      uVar12 = (uint)((ulong)plVar1[1] >> 0x20);
      uVar16 = uVar12 >> 0x1e;
      if (uVar12 >> 0x1e < 2) {
        uVar15 = (ulong)plVar1[1] >> 0x30 & 0xff;
        if (uVar16 != 0) {
          uVar15 = lVar9 >> 0x20;
        }
        p_Var6 = (__DataStorage *)0x0;
        if (uVar16 != 0) {
          p_Var6 = (__DataStorage *)(long)(int)lVar9;
        }
      }
      else {
        uVar15 = 0;
        p_Var6 = (__DataStorage *)0x0;
        if (uVar16 == 2) {
          uVar15 = *(ulong *)(lVar9 + 0x18);
          p_Var6 = *(__DataStorage **)(lVar9 + 0x10);
        }
      }
      if (((long)uVar15 < (long)p_Var6) || ((long)uVar5 < (long)p_Var6)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10016730c);
        (*pcVar4)();
      }
      uVar15 = uVar5;
      __Foundation_Data__Representation_subscript_getter____Swift_Range<Swift_Int>___>_Foundation_Data
                ();
      _swift_endAccess(&local_a0);
      _swift_beginAccess(plVar1,&local_a0,0x21,0);
      uVar12 = (uint)((ulong)plVar1[1] >> 0x20);
      uVar16 = uVar12 >> 0x1e;
      if (uVar12 >> 0x1e < 2) {
        RVar7.unknown = (undefined *)0x0;
        if (uVar16 != 0) {
          RVar7.unknown = (undefined *)(long)(int)*plVar1;
        }
      }
      else {
        RVar7.unknown = (undefined *)0x0;
        if (uVar16 == 2) {
          RVar7.unknown = *(undefined **)(*plVar1 + 0x10);
        }
      }
      if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100167310);
        (*pcVar4)();
      }
      if ((long)(uVar5 + 1) < (long)RVar7.unknown) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100167314);
        (*pcVar4)();
      }
      Foundation::Data::_Representation::_replaceSubrange(RVar7,uVar5 + 1,(_Representation)0x0,0);
      _swift_endAccess(&local_a0);
      uVar12 = (uint)(uVar15 >> 0x20);
      uVar16 = uVar12 >> 0x1e;
      if (1 < uVar12 >> 0x1e) break;
      if (uVar16 == 0) {
        if ((uVar15 & 0xff000000000000) == 0) goto LAB_100166ec8;
        goto LAB_100167030;
      }
      if ((long)(int)p_Var6 != (long)p_Var6 >> 0x20) goto LAB_100167030;
LAB_100166ec8:
      FUN_100093624(p_Var6,uVar15);
      lVar9 = *plVar1;
      lVar17 = plVar1[1];
      FUN_10011a30c(lVar9,lVar17);
      uVar5 = 10;
      lVar13 = lVar9;
      FUN_1001d6094(10,lVar9,lVar17);
      uVar12 = (uint)lVar13;
      FUN_100093624(lVar9,lVar17);
    }
    if ((uVar16 != 2) || (*(long *)(p_Var6 + 0x10) == *(long *)(p_Var6 + 0x18))) goto LAB_100166ec8;
LAB_100167030:
    local_88 = puVar3;
    pp_Var8 = &local_a0;
    local_a0 = p_Var6;
    uStack_98 = uVar15;
    puStack_80 = puVar2;
    FUN_100007bd0(pp_Var8,puVar3);
    p_Var11 = *pp_Var8;
    p_Var14 = pp_Var8[1];
    uVar12 = (uint)((ulong)p_Var14 >> 0x20);
    uVar16 = uVar12 >> 0x1e;
    if (uVar12 >> 0x1e < 2) {
      if (uVar16 == 0) {
        local_b6[0] = SUB81(p_Var11,0);
        local_b6[1] = SUB81((ulong)p_Var11 >> 8,0);
        local_b6[2] = SUB81((ulong)p_Var11 >> 0x10,0);
        local_b6[3] = SUB81((ulong)p_Var11 >> 0x18,0);
        local_b2 = (undefined1)((ulong)p_Var11 >> 0x20);
        local_b1 = (undefined1)((ulong)p_Var11 >> 0x28);
        local_b0 = (undefined1)((ulong)p_Var11 >> 0x30);
        local_af = (undefined1)((ulong)p_Var11 >> 0x38);
        local_ae = SUB81(p_Var14,0);
        local_ad = (undefined1)((ulong)p_Var14 >> 8);
        local_ac = (undefined1)((ulong)p_Var14 >> 0x10);
        local_ab = (undefined1)((ulong)p_Var14 >> 0x18);
        local_aa = (undefined1)((ulong)p_Var14 >> 0x20);
        uVar5 = (ulong)p_Var14 >> 0x30 & 0xff;
        local_a9 = (undefined1)((ulong)p_Var14 >> 0x28);
        if (uVar5 == 0) {
          FUN_10011a30c(p_Var6,uVar15);
          local_78 = (__DataStorage *)0x0;
          p_Stack_70 = (__DataStorage *)0xc000000000000000;
        }
        else if (uVar5 < 0xf) {
          p_Var11 = local_b6;
          p_Var14 = local_b6 + uVar5;
          FUN_100287d88();
          local_c8 = (__DataStorage *)
                     ((ulong)local_c8 & 0xf00000000000000 | (ulong)p_Var14 & 0xffffffffffffff);
          FUN_10011a30c(p_Var6,uVar15);
          local_78 = p_Var11;
          p_Stack_70 = local_c8;
        }
        else {
          p_Var11 = Foundation::__DataStorage::typeMetadataAccessor();
          _swift_allocObject(p_Var11,*(undefined4 *)(p_Var11 + 0x30),*(undefined2 *)(p_Var11 + 0x34)
                            );
          FUN_10011a30c(p_Var6,uVar15);
          p_Stack_70 = Foundation::__DataStorage::_init(p_Var11,(__int64)local_b6);
          local_78 = (__DataStorage *)(uVar5 << 0x20);
          p_Stack_70 = (__DataStorage *)((ulong)p_Stack_70 | 0x4000000000000000);
        }
      }
      else {
        lVar17 = (long)(int)p_Var11;
        lVar9 = ((long)p_Var11 >> 0x20) - lVar17;
        if ((long)p_Var11 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100167318);
          (*pcVar4)();
        }
        p_Var11 = p_Var6;
        FUN_10011a30c(p_Var6,uVar15);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)((ulong)p_Var14 & 0x3fffffffffffffff),p_Var11);
        if (p_Var11 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)((ulong)p_Var14 & 0x3fffffffffffffff),(__DataStorage *)0x0);
          p_Var11 = (__DataStorage *)0x0;
LAB_10016721c:
          p_Var14 = (__DataStorage *)0x0;
        }
        else {
          p_Var10 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)((ulong)p_Var14 & 0x3fffffffffffffff),p_Var11);
          if (SBORROW8(lVar17,(long)p_Var10)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100167324);
            (*pcVar4)();
          }
          p_Var11 = p_Var11 + (lVar17 - (long)p_Var10);
          lVar17 = Foundation::__DataStorage::get__length
                             ((__DataStorage *)((ulong)p_Var14 & 0x3fffffffffffffff),p_Var10);
          if (p_Var11 == (__DataStorage *)0x0) goto LAB_10016721c;
          if (lVar9 <= lVar17) {
            lVar17 = lVar9;
          }
          p_Var14 = p_Var11 + lVar17;
        }
        FUN_100287b18(&local_78,p_Var11,p_Var14);
      }
    }
    else if (uVar16 == 2) {
      lVar9 = *(long *)(p_Var11 + 0x10);
      lVar17 = *(long *)(p_Var11 + 0x18);
      p_Var11 = p_Var6;
      FUN_10011a30c(p_Var6,uVar15);
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)((ulong)p_Var14 & 0x3fffffffffffffff),p_Var11);
      p_Var10 = (__DataStorage *)0x0;
      if (p_Var11 != (__DataStorage *)0x0) {
        p_Var10 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)((ulong)p_Var14 & 0x3fffffffffffffff),p_Var11);
        if (SBORROW8(lVar9,(long)p_Var10)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100167320);
          (*pcVar4)();
        }
        p_Var11 = p_Var11 + (lVar9 - (long)p_Var10);
      }
      lVar13 = lVar17 - lVar9;
      if (SBORROW8(lVar17,lVar9)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10016731c);
        (*pcVar4)();
      }
      lVar9 = Foundation::__DataStorage::get__length
                        ((__DataStorage *)((ulong)p_Var14 & 0x3fffffffffffffff),p_Var10);
      if (p_Var11 == (__DataStorage *)0x0) {
        p_Var14 = (__DataStorage *)0x0;
      }
      else {
        if (lVar13 <= lVar9) {
          lVar9 = lVar13;
        }
        p_Var14 = p_Var11 + lVar9;
      }
      FUN_100287b18(&local_78,p_Var11,p_Var14);
    }
    else {
      local_78 = p_Var11;
      p_Stack_70 = p_Var14;
      FUN_10011a30c(p_Var6,uVar15);
    }
    FUN_100043f24(&local_a0);
    p_Var14 = p_Stack_70;
    p_Var11 = local_78;
    FUN_10016830c(local_78,p_Stack_70);
    FUN_100093624(p_Var11,p_Var14);
    FUN_100093624(p_Var6,uVar15);
    lVar9 = *plVar1;
    lVar17 = plVar1[1];
    FUN_10011a30c(lVar9,lVar17);
    uVar5 = 10;
    lVar13 = lVar9;
    FUN_1001d6094(10,lVar9,lVar17);
    uVar12 = (uint)lVar13;
    FUN_100093624(lVar9,lVar17);
    puVar2 = 
    PTR___protocol_witness_table_for_Foundation_Data___Foundation_ContiguousBytes_in_Foundation_100520ad0
    ;
  } while( true );
}

