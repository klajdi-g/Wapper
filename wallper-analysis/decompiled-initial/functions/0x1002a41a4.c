// rea decompile_all
// name: FUN_1002a41a4
// address: 0x1002a41a4
// body: available
// range: 0x1002a41a4-0x1002a46a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1002a41a4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  Date DVar5;
  long extraout_x8;
  long lVar6;
  ulong uVar7;
  long extraout_x12;
  long lVar8;
  long extraout_x13;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong local_b0;
  ulong local_a8;
  ulong local_70;
  ulong local_68;
  ulong local_58;
  
  puVar4 = &DAT_1005569c8;
  FUN_100002f94(&DAT_1005569c8,&DAT_10042aac8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar6 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar6 - extraout_x13;
  lVar8 = *(long *)(extraout_x12 + 0x48);
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002a469c);
    (*pcVar2)();
  }
  if ((param_2 - param_1 == -0x8000000000000000) && (lVar8 == -1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002a46a0);
    (*pcVar2)();
  }
  if ((param_3 - param_2 == -0x8000000000000000) && (lVar8 == -1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002a46a4);
    (*pcVar2)();
  }
  lVar12 = 0;
  if (lVar8 != 0) {
    lVar12 = (long)(param_2 - param_1) / lVar8;
  }
  lVar11 = 0;
  if (lVar8 != 0) {
    lVar11 = (long)(param_3 - param_2) / lVar8;
  }
  local_58 = param_1;
  local_68 = param_4;
  if (lVar12 < lVar11) {
    lVar11 = lVar12 * lVar8;
    if ((param_4 < param_1) || (param_1 + lVar11 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_1,lVar12,puVar4);
    }
    else if (param_4 != param_1) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_1,lVar12,puVar4);
    }
    uVar14 = param_4 + lVar11;
    local_70 = uVar14;
    if (0 < lVar11 && param_2 < param_3) {
      do {
        FUN_1000087e4(param_2,lVar13,&DAT_1005569c8,&DAT_10042aac8);
        DVar5.unknown = &DAT_1005569c8;
        FUN_1000087e4(param_4,lVar6,&DAT_1005569c8,&DAT_10042aac8);
        bVar3 = Foundation::Date::<_infix
                          ((undefined *)(lVar13 + *(int *)(puVar4 + 0x40)),
                           (undefined *)(lVar6 + *(int *)(puVar4 + 0x40)),DVar5);
        FUN_10002a29c(lVar6,&DAT_1005569c8,&DAT_10042aac8);
        FUN_10002a29c(lVar13,&DAT_1005569c8,&DAT_10042aac8);
        if (bVar3) {
          uVar7 = param_2 + lVar8;
          uVar9 = param_4;
          if ((param_1 < param_2) || (uVar7 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_2,1,puVar4);
            uVar1 = local_68;
          }
          else {
            uVar1 = local_68;
            if (param_1 != param_2) {
              _swift_arrayInitWithTakeBackToFront(param_1,param_2,1,puVar4);
              uVar1 = local_68;
            }
          }
        }
        else {
          uVar9 = param_4 + lVar8;
          uVar7 = param_2;
          uVar1 = uVar9;
          if ((param_1 < param_4) || (uVar9 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_4,1,puVar4);
          }
          else if (param_1 != param_4) {
            _swift_arrayInitWithTakeBackToFront(param_1,param_4,1,puVar4);
          }
        }
        local_68 = uVar1;
        param_4 = uVar9;
        param_1 = param_1 + lVar8;
        local_58 = param_1;
      } while ((param_4 < uVar14) && (param_2 = uVar7, local_58 = param_1, uVar7 < param_3));
    }
  }
  else {
    lVar12 = lVar11 * lVar8;
    if ((param_4 < param_2) || (param_2 + lVar12 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_2,lVar11,puVar4);
    }
    else if (param_4 != param_2) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_2,lVar11,puVar4);
    }
    uVar14 = param_4 + lVar12;
    local_70 = uVar14;
    local_58 = param_2;
    if (0 < lVar12 && param_1 < param_2) {
      lVar8 = -lVar8;
      local_58 = param_2;
      local_b0 = param_1;
      do {
        uVar7 = local_58 + lVar8;
        uVar9 = param_3;
        local_a8 = local_58;
        while( true ) {
          param_3 = uVar9 + lVar8;
          uVar1 = uVar14 + lVar8;
          DVar5.unknown = &DAT_1005569c8;
          FUN_1000087e4(uVar1,lVar13,&DAT_1005569c8,&DAT_10042aac8);
          FUN_1000087e4(uVar7,lVar6,&DAT_1005569c8,&DAT_10042aac8);
          bVar3 = Foundation::Date::<_infix
                            ((undefined *)(lVar13 + *(int *)(puVar4 + 0x40)),
                             (undefined *)(lVar6 + *(int *)(puVar4 + 0x40)),DVar5);
          FUN_10002a29c(lVar6,&DAT_1005569c8,&DAT_10042aac8);
          FUN_10002a29c(lVar13,&DAT_1005569c8,&DAT_10042aac8);
          uVar10 = local_b0;
          if (bVar3) break;
          local_70 = uVar1;
          if ((uVar9 < uVar14) || (uVar14 <= param_3)) {
            _swift_arrayInitWithTakeFrontToBack(param_3,uVar1,1,puVar4);
          }
          else if (uVar9 != uVar14) {
            _swift_arrayInitWithTakeBackToFront(param_3,uVar1,1,puVar4);
          }
          uVar9 = param_3;
          uVar14 = uVar1;
          if (uVar1 <= param_4) goto LAB_1002a44cc;
        }
        if ((uVar9 < local_a8) || (local_a8 <= param_3)) {
          _swift_arrayInitWithTakeFrontToBack(param_3,uVar7,1,puVar4);
          uVar10 = local_b0;
        }
        else if (uVar9 != local_a8) {
          _swift_arrayInitWithTakeBackToFront(param_3,uVar7,1,puVar4);
        }
        local_58 = uVar7;
      } while ((param_4 < uVar14) && (uVar10 < uVar7));
    }
  }
LAB_1002a44cc:
  FUN_1002650e4(&local_58,&local_68,&local_70);
  return 1;
}

