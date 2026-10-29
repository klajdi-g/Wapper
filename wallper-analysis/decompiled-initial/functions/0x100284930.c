// rea decompile_all
// name: FUN_100284930
// address: 0x100284930
// body: available
// range: 0x100284930-0x100284e1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100284e0c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100284e10) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_100284930(UTF8View param_1,undefined *param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  __uint8 _Var3;
  Range<__int64> RVar4;
  undefined **ppuVar5;
  Index position;
  byte *after;
  UnsafeBufferPointer<__int8> UVar6;
  undefined *puVar7;
  UnsafeBufferPointer<__int8> UVar8;
  undefined *puVar9;
  undefined6 *puVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined6 local_f0;
  undefined2 uStack_ea;
  undefined6 uStack_e8;
  undefined2 uStack_e2;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined6 local_a0;
  undefined2 uStack_9a;
  undefined6 uStack_98;
  undefined2 uStack_92;
  undefined **local_90;
  undefined8 local_88;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  local_f0 = SUB86(param_1.unknown,0);
  uStack_ea = (undefined2)((ulong)param_1.unknown >> 0x30);
  uStack_e8 = SUB86(param_2,0);
  uStack_e2 = (undefined2)((ulong)param_2 >> 0x30);
  local_e0 = param_1.unknown;
  puStack_d8 = param_2;
  _swift_bridgeObjectRetain(param_2);
  RVar4.unknown = &DAT_100558ff0;
  FUN_100002f94(&DAT_100558ff0,&BYTE_10042d7e8);
  ppuVar5 = &local_d0;
  _swift_dynamicCast(ppuVar5,&local_f0,PTR___type_metadata_for_Swift_String_UTF8View_100523a68,
                     RVar4.unknown,6);
  if ((int)ppuVar5 != 0) {
    FUN_10013d430(&local_d0,&local_a0);
    FUN_100007bd0(&local_a0,local_88);
    Foundation::ContiguousBytes::_withUnsafeBytes();
    FUN_100043f24(&local_a0);
    UVar8.unknown = local_d0;
    puVar9 = puStack_c8;
    goto LAB_100284d6c;
  }
  local_b0 = 0;
  puStack_c8 = (undefined *)0x0;
  local_d0 = (undefined *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  after = &BYTE_10042d7f0;
  FUN_10002a29c(&local_d0,&DAT_100558ff8);
  if (((ulong)param_2 >> 0x3c & 1) == 0) {
    if (((ulong)param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
        puVar9 = param_2;
        UVar8 = Swift::_StringObject::get_sharedUTF8(param_1.unknown);
      }
      else {
        UVar8.unknown = (undefined *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
        puVar9 = param_1.unknown & 0xffffffffffff;
      }
      puVar15 = (undefined *)0x0;
      if (UVar8.unknown != (undefined *)0x0) {
        puVar15 = puVar9 + UVar8.unknown;
      }
      FUN_100287f14();
      puVar9 = puVar15;
    }
    else {
      puVar15 = (undefined *)((ulong)param_2 >> 0x38 & 0xf);
      puStack_c8 = (undefined *)((ulong)param_2 & 0xffffffffffffff);
      local_d0 = param_1.unknown;
      FUN_1002876b4(&local_a0,&local_d0);
      UVar8.unknown = (undefined *)CONCAT26(uStack_9a,local_a0);
      puVar9 = (undefined *)CONCAT26(uStack_92,uStack_98);
    }
    if ((ulong)puVar9 >> 0x3c < 0xf) goto LAB_100284d6c;
    puVar7 = param_1.unknown & 0xffffffffffff;
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      puVar7 = (undefined *)((ulong)param_2 >> 0x38 & 0xf);
    }
  }
  else {
    puVar15 = param_2;
    puVar7 = (undefined *)Swift::String::UTF8View::_foreignCount(param_1);
    UVar8.unknown = (undefined *)0x0;
    puVar9 = (undefined *)0xf000000000000000;
  }
  FUN_100287f78();
  local_90 = &local_e0;
  pcVar2 = FUN_100289188;
  puVar10 = &local_a0;
  local_d0 = puVar7;
  puStack_c8 = puVar15;
  FUN_100287780();
  uVar12 = (uint)((ulong)puStack_c8 >> 0x20);
  uVar13 = uVar12 >> 0x1e;
  if (uVar12 >> 0x1e < 2) {
    if (uVar13 == 0) {
      puVar15 = (undefined *)((ulong)puStack_c8 >> 0x30 & 0xff);
    }
    else {
      iVar14 = (int)((ulong)local_d0 >> 0x20);
      if (SBORROW4(iVar14,(int)local_d0)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100284e0c);
        (*pcVar2)();
      }
      puVar15 = (undefined *)(long)(iVar14 - (int)local_d0);
    }
    if (RVar4.unknown == puVar15) goto LAB_100284b54;
LAB_100284b30:
    if (uVar13 == 2) {
      uVar11 = *(ulong *)(local_d0 + 0x18);
    }
    else if (uVar13 == 1) {
      uVar11 = (long)local_d0 >> 0x20;
    }
    else {
      uVar11 = (ulong)puStack_c8 >> 0x30 & 0xff;
    }
LAB_100284d48:
    if ((long)uVar11 < (long)RVar4.unknown) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100284e04);
      (*pcVar2)();
    }
    Foundation::Data::_Representation::_replaceSubrange(RVar4,uVar11,(_Representation)0x0,0);
LAB_100284d64:
    _swift_bridgeObjectRelease(puVar10);
    UVar8.unknown = local_d0;
    puVar9 = puStack_c8;
  }
  else {
    if (uVar13 == 2) {
      if (SBORROW8(*(long *)(local_d0 + 0x18),*(long *)(local_d0 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100284e08);
        (*pcVar2)();
      }
      if (RVar4.unknown != (undefined *)(*(long *)(local_d0 + 0x18) - *(long *)(local_d0 + 0x10)))
      goto LAB_100284b30;
    }
    else if (RVar4.unknown != (undefined *)0x0) {
      uVar11 = 0;
      goto LAB_100284d48;
    }
LAB_100284b54:
    uVar11 = (ulong)pcVar2 & 0xffffffffffff;
    if (((ulong)puVar10 & 0x2000000000000000) != 0) {
      uVar11 = (ulong)puVar10 >> 0x38 & 0xf;
    }
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_ea = 0;
    if (uVar11 * 4 - ((ulong)after >> 0xe) != 0) {
      uVar19 = 0;
      uVar12 = (uint)((ulong)pcVar2 >> 0x3b) & 1;
      if (((ulong)puVar10 & 0x1000000000000000) == 0) {
        uVar12 = 1;
      }
      uVar17 = 4L << uVar12;
      do {
        uVar18 = (ulong)after & 0xc;
        position.unknown = after;
        if (uVar18 == uVar17) {
          FUN_10028763c(after,pcVar2,puVar10);
        }
        uVar16 = (ulong)position.unknown >> 0x10;
        if (uVar11 <= uVar16) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100284dd0);
          (*pcVar2)();
        }
        if (((ulong)puVar10 >> 0x3c & 1) == 0) {
          if (((ulong)puVar10 >> 0x3d & 1) != 0) {
            local_a0 = SUB86(pcVar2,0);
            uStack_9a = (undefined2)((ulong)pcVar2 >> 0x30);
            uStack_98 = (undefined6)((ulong)puVar10 & 0xffffffffffffff);
            uStack_92 = (undefined2)(((ulong)puVar10 & 0xffffffffffffff) >> 0x30);
            _Var3 = *(__uint8 *)((long)&local_a0 + uVar16);
            goto joined_r0x000100284c48;
          }
          UVar6.unknown = (undefined *)(((ulong)puVar10 & 0xfffffffffffffff) + 0x20);
          if (((ulong)pcVar2 >> 0x3c & 1) == 0) {
            UVar6 = Swift::_StringObject::get_sharedUTF8((_StringObject)pcVar2);
          }
          _Var3 = UVar6.unknown[uVar16];
          if (uVar18 != uVar17) goto LAB_100284c08;
LAB_100284c4c:
          FUN_10028763c(after,pcVar2,puVar10);
          if (((ulong)puVar10 >> 0x3c & 1) != 0) goto LAB_100284c64;
LAB_100284c0c:
          after = (byte *)(((ulong)after & 0xffffffffffff0000) + 0x10004);
        }
        else {
          _Var3 = Swift::String::UTF8View::_foreignSubscript(position,(UTF8View)pcVar2);
joined_r0x000100284c48:
          if (uVar18 == uVar17) goto LAB_100284c4c;
LAB_100284c08:
          if (((ulong)puVar10 >> 0x3c & 1) == 0) goto LAB_100284c0c;
LAB_100284c64:
          if (uVar11 <= (ulong)after >> 0x10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100284dd8);
            (*pcVar2)();
          }
          after = (byte *)Swift::String::UTF8View::_foreignIndex((Index)after,(UTF8View)pcVar2);
        }
        *(__uint8 *)((long)&local_f0 + (uVar19 & 0xff)) = _Var3;
        uVar12 = ((uint)uVar19 & 0xff) + 1;
        uVar19 = (ulong)uVar12;
        if ((uVar12 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100284dd4);
          (*pcVar2)();
        }
        if ((uVar12 & 0xff) == 0xe) {
          local_a0 = local_f0;
          uStack_9a = uStack_ea;
          uStack_98 = uStack_e8;
          Foundation::Data::_Representation::append
                    ((UnsafeRawBufferPointer)&local_a0,(_Representation)((char)&local_a0 + 0xe));
          uVar19 = 0;
        }
      } while (uVar11 * 4 - ((ulong)after >> 0xe) != 0);
      if ((uVar19 & 0xff) != 0) {
        local_a0 = local_f0;
        uStack_9a = uStack_ea;
        uStack_98 = uStack_e8;
        Foundation::Data::_Representation::append
                  ((UnsafeRawBufferPointer)&local_a0,
                   (_Representation)((char)&local_a0 + (char)uVar19));
        FUN_1000a3004(UVar8.unknown,puVar9);
        goto LAB_100284d64;
      }
    }
    _swift_bridgeObjectRelease(puVar10);
    FUN_1000a3004(UVar8.unknown,puVar9);
    UVar8.unknown = local_d0;
    puVar9 = puStack_c8;
  }
LAB_100284d6c:
  puStack_c8 = puVar9;
  local_d0 = UVar8.unknown;
  auVar1._8_8_ = puStack_c8;
  auVar1._0_8_ = local_d0;
  FUN_10011a30c(local_d0,puStack_c8);
  _swift_bridgeObjectRelease(param_2);
  FUN_100093624(local_d0,puStack_c8);
  if (*(long *)PTR____stack_chk_guard_100521138 == local_70) {
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

