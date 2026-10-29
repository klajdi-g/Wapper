// rea decompile_all
// name: FUN_1002f6408
// address: 0x1002f6408
// body: available
// range: 0x1002f6408-0x1002f68e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002f67f4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 FUN_1002f6408(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  NSComparisonResult NVar5;
  ulong uVar6;
  long extraout_x8;
  long lVar7;
  undefined1 *puVar8;
  long extraout_x12;
  long extraout_x13;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auStack_b0 [8];
  ulong local_a8;
  ulong local_70;
  ulong local_68;
  ulong local_58;
  
  lVar3 = 0;
  FUN_1002f58e8();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar8 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = (long)puVar8 - extraout_x13;
  lVar7 = *(long *)(extraout_x12 + 0x48);
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002f68dc);
    (*pcVar2)();
  }
  if ((param_2 - param_1 == -0x8000000000000000) && (lVar7 == -1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002f68e0);
    (*pcVar2)();
  }
  if ((param_3 - param_2 == -0x8000000000000000) && (lVar7 == -1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002f68e4);
    (*pcVar2)();
  }
  lVar11 = 0;
  if (lVar7 != 0) {
    lVar11 = (long)(param_2 - param_1) / lVar7;
  }
  lVar9 = 0;
  if (lVar7 != 0) {
    lVar9 = (long)(param_3 - param_2) / lVar7;
  }
  local_68 = param_4;
  local_58 = param_1;
  if (lVar11 < lVar9) {
    lVar9 = lVar11 * lVar7;
    if ((param_4 < param_1) || (param_1 + lVar9 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_1,lVar11,lVar3);
    }
    else if (param_4 != param_1) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_1,lVar11,lVar3);
    }
    uVar10 = param_4 + lVar9;
    local_70 = uVar10;
    if (0 < lVar9 && param_2 < param_3) {
      do {
        FUN_100029504(param_2,lVar14,FUN_1002f58e8);
        uVar4 = param_4;
        FUN_100029504(param_4,puVar8,FUN_1002f58e8);
        FUN_100026df4();
        NVar5 = (extension_Foundation)::Swift::StringProtocol::_localizedCaseInsensitiveCompare
                          (uVar4,PTR___type_metadata_for_Swift_String_100523a98,
                           PTR___type_metadata_for_Swift_String_100523a98,uVar4,uVar4);
        FUN_100029548(puVar8,FUN_1002f58e8);
        FUN_100029548(lVar14,FUN_1002f58e8);
        if (NVar5.unknown == (undefined *)0xffffffffffffffff) {
          uVar13 = param_2 + lVar7;
          uVar4 = param_4;
          if ((param_1 < param_2) || (uVar13 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_2,1,lVar3);
            uVar12 = local_68;
          }
          else {
            uVar12 = local_68;
            if (param_1 != param_2) {
              _swift_arrayInitWithTakeBackToFront(param_1,param_2,1,lVar3);
              uVar12 = local_68;
            }
          }
        }
        else {
          uVar4 = param_4 + lVar7;
          uVar13 = param_2;
          uVar12 = uVar4;
          if ((param_1 < param_4) || (uVar4 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_4,1,lVar3);
          }
          else if (param_1 != param_4) {
            _swift_arrayInitWithTakeBackToFront(param_1,param_4,1,lVar3);
          }
        }
        local_68 = uVar12;
        param_1 = param_1 + lVar7;
        local_58 = param_1;
      } while ((uVar4 < uVar10) &&
              (param_2 = uVar13, param_4 = uVar4, local_58 = param_1, uVar13 < param_3));
    }
  }
  else {
    lVar11 = lVar9 * lVar7;
    if ((param_4 < param_2) || (param_2 + lVar11 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_2,lVar9,lVar3);
    }
    else if (param_4 != param_2) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_2,lVar9,lVar3);
    }
    uVar10 = param_4 + lVar11;
    local_a8 = param_1;
    local_70 = uVar10;
    local_58 = param_2;
    if (0 < lVar11 && param_1 < param_2) {
      lVar7 = -lVar7;
      local_58 = param_2;
      do {
        uVar13 = local_58;
        uVar4 = local_58 + lVar7;
        uVar12 = param_3;
        while( true ) {
          param_3 = uVar12 + lVar7;
          uVar1 = uVar10 + lVar7;
          FUN_100029504(uVar1,lVar14,FUN_1002f58e8);
          uVar6 = uVar4;
          FUN_100029504(uVar4,puVar8,FUN_1002f58e8);
          FUN_100026df4();
          NVar5 = (extension_Foundation)::Swift::StringProtocol::_localizedCaseInsensitiveCompare
                            (uVar6,PTR___type_metadata_for_Swift_String_100523a98,
                             PTR___type_metadata_for_Swift_String_100523a98,uVar6,uVar6);
          FUN_100029548(puVar8,FUN_1002f58e8);
          FUN_100029548(lVar14,FUN_1002f58e8);
          if (NVar5.unknown == (undefined *)0xffffffffffffffff) break;
          local_70 = uVar1;
          if ((uVar12 < uVar10) || (uVar10 <= param_3)) {
            _swift_arrayInitWithTakeFrontToBack(param_3,uVar1,1,lVar3);
          }
          else if (uVar12 != uVar10) {
            _swift_arrayInitWithTakeBackToFront(param_3,uVar1,1,lVar3);
          }
          uVar12 = param_3;
          uVar10 = uVar1;
          if (uVar1 <= param_4) goto LAB_1002f670c;
        }
        if ((uVar12 < uVar13) || (uVar13 <= param_3)) {
          _swift_arrayInitWithTakeFrontToBack(param_3,uVar4,1,lVar3);
        }
        else if (uVar12 != uVar13) {
          _swift_arrayInitWithTakeBackToFront(param_3,uVar4,1,lVar3);
        }
        local_58 = uVar4;
      } while ((param_4 < uVar10) && (local_a8 < uVar4));
    }
  }
LAB_1002f670c:
  FUN_1002651ac(&local_58,&local_68,&local_70);
  return 1;
}

